/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdio.h"
#include "tty_utils.h"
#include "utils.h"
#include "usb_uart.h"

#define SYSTICK_MAXVAL 0x00FFFFFF //max allowed SysTick counter value for 24bit
#define GET16(x) *x + (*(x+1) << 8);
#define GPIO_CLEAR(pin) pin##_DR &= ~pin##_MASK; \
    volatile_reg_val_0 = pin##_DR
#define GPIO_SET(pin) pin##_DR |= pin##_MASK; \
    volatile_reg_val_1 = pin##_DR;

extern uint8_t rx_flag;
extern uint16_t count;
extern uint8_t goFlag;
extern uint8_t buffer[2][USBUART_BUFFER_SIZE];
extern uint8_t* bufPtr;
uint8_t* VGMPtr;
uint8_t i=0, j=0, k=0;
uint16_t WaitTime = 0;
uint8_t isrFlag = 0;
uint32_t test = 0;

volatile uint32 volatile_reg_val_1;
volatile uint32 volatile_reg_val_0;

void ym2612_write_step (uint8_t data);
void ym2612_write(uint8_t reg, uint8_t data, uint8_t port);
void sn76489_write(uint8_t data);
void ym2612_reset();
void ym2612_init (void);
void SilenceAllChannels();
void init_hardware(void);

CY_ISR(sampleRateIRQ){
    isrFlag = 1;
}

int main(void) {

    uint8_t noWait = 0;
    uint8_t count_vgm = 0;
    uint8_t count_incoming = 0;
    uint8_t incomingFlag = 0;
    uint32 SysCntVal; // The value of SysTick counter
    
    init_hardware();
    isr_1_StartEx(sampleRateIRQ);
    //splash("USBFS-UART demo") ;
    //cls();
    //print("\033c") ; /* reset */
    //CyDelay(20) ;
    while (0u == USBUART_CDCIsReady())
    {
    }
    USBUART_PutString("\0");
    // fill 1st buffer
    bufPtr = buffer[0];
    while (!rx_flag);
    count_incoming = USBUART_GetAll(bufPtr);
    count_vgm = count_incoming;
    rx_flag = 0;
    // fill 2nd buffer
    bufPtr = buffer[1];
    while (!rx_flag);
    count_incoming = USBUART_GetAll(bufPtr);
    rx_flag = 0;

    i = 0; // start playback from 2nd buffer
    bufPtr = buffer[0];
    VGMPtr = buffer[0];
    
    for(;;)
    { 
        if (isrFlag == 1)
        {
            if (WaitTime != 0)
            {
                WaitTime--;
                isrFlag = 0;
                continue;
            }
            
            switch (VGMPtr[j]) // VGM commands parsing
            {
            case 0x4F:
                j += 2;
                break;

            case 0x50:
                sn76489_write(VGMPtr[j + 1]);
                j += 2;            
                WaitTime = 0;
                break;

            case 0x52:
            case 0x53:
                ym2612_write(VGMPtr[j + 1], VGMPtr[j + 2], VGMPtr[j] & 0x01);
                j += 3;
                WaitTime = 0;
                break;

            case 0x61:
                WaitTime = GET16(&VGMPtr[j + 1]);
                j += 3;
                if (WaitTime == 0)
                {
                    noWait = 1;
                }
                else
                {
                    WaitTime--;    
                }
                break;
            
            case 0x62:
                j++;
                WaitTime = 735 - 1;
                break;

            case 0x63:
                j++;
                WaitTime = 882 - 1;
                break;

            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
            case 0x74:
            case 0x75:
            case 0x76:
            case 0x77:
            case 0x78:
            case 0x79:
            case 0x7A:
            case 0x7B:
            case 0x7C:
            case 0x7D:
            case 0x7E:
            case 0x7F:
                WaitTime = (VGMPtr[j] & 0x0F);
                j++;
                break;
            
            case 0x80:
            case 0x81:
            case 0x82:
            case 0x83:
            case 0x84:
            case 0x85:
            case 0x86:
            case 0x87:
            case 0x88:
            case 0x89:
            case 0x8A:
            case 0x8B:
            case 0x8C:
            case 0x8D:
            case 0x8E:
            case 0x8F:
                //SysTick_Config(SYSTICK_MAXVAL); //reset counter set to max value, 1-time, will not reload
                ym2612_write(0x2a, VGMPtr[j + 1], 0x00);
                //SysCntVal = SYSTICK_MAXVAL - (SysTick->VAL); //get elapsed ticks (min offset 3 ticks)
                WaitTime = VGMPtr[j] & 0x0F;
                j += 2;
                if (WaitTime == 0)
                {
                    noWait = 1;
                }
                else
                {
                    WaitTime--;    
                }
                break;

            default:
                break;
            }
            
            if (incomingFlag == 1)
            {
                if (USBUART_OUT_BUFFER_FULL != USBUART_GetEPState(3))
                {
                    USBUART_EnableOutEP(3);
                    incomingFlag = 0;
                }
            }
            
            // buffer end
            if (j >= count_vgm - 1)
            {   
                if (i == 0)
                {
                    VGMPtr = buffer[1];
                }
                else
                {
                    VGMPtr = buffer[0];
                }
                // change buffer and...
                // ... get incoming data from USB
                while (!rx_flag);
                count_vgm = count_incoming;
                //count_incoming = USBUART_GetAll(bufPtr);
                count_incoming = USBUART_ReadOutEP(3, bufPtr, 64);
                incomingFlag = 1;
                rx_flag = 0;
                bufPtr = VGMPtr;
                if (i == 0)
                {
                    i = 1;
                }
                else
                {
                    i = 0;
                }
                j = 0;
                /*
                VGMPtr = buffer[(i + 1) % 2]; // change buffer and...
                // ... get incoming data from USB
                while (!rx_flag);
                count_vgm = count_incoming;
                count_incoming = USBUART_GetAll(bufPtr);
                rx_flag = 0;
                i = (i + 1) % 2;
                bufPtr = buffer[i];
                j = 0;
                */
            }
            
            if (noWait == 1)
            {
                noWait = 0;
            }
            else
            {
                isrFlag = 0;
            }
        }
    }  
}

void init_hardware(void) 
{
    SilenceAllChannels();
    CyGlobalIntEnable; /* Enable global interrupts. */

    tty_init() ;
}

/*
void ym2612_write_step (uint8_t data)
{
  // CS Pin low
  YM_CS_Write(0);
  // DATA to bus
  YM_Data_Write(data);
  // WR data
  YM_WR_Write(0);
  YM_RD_Write(1);
  //CyDelayCycles(1);
  CyDelayUs(1);
  YM_WR_Write(1);
  YM_RD_Write(0);
  // CS Pin high
  YM_CS_Write(1);
  CyDelayUs(1);
  //CyDelayCycles(1);
}*/

void ym2612_write_step(uint8_t data)
{
  // CS Pin low
  GPIO_CLEAR(YM_CS);
  // DATA to bus
  //YM_Data_Write(data);
  YM_Data_DR = data;
  // WR data
  GPIO_CLEAR(YM_WR);
  GPIO_SET(YM_RD);
  //CyDelayCycles(1);
  CyDelayUs(1);
  GPIO_SET(YM_WR);
  GPIO_CLEAR(YM_RD);
  // CS Pin high
  GPIO_SET(YM_CS);
  CyDelayUs(1);
  //CyDelayCycles(1);
    
}

/*void ym2612_write(uint8_t reg, uint8_t data, uint8_t port)
{
  // A1 selects part0 (channels 1-3) or part1 (channels 1-6)
  YM_A1_Write(port);
  YM_A0_Write(0);
  // write register selection
  ym2612_write_step(reg);
  // data part 0 (channels 1-3)
  // A1 low, A0 high
  YM_A0_Write(1);
  ym2612_write_step(data);
}*/

void ym2612_write(uint8_t reg, uint8_t data, uint8_t port)
{
  // A1 selects part0 (channels 1-3) or part1 (channels 1-6)
  if (port == 1)
  {
    GPIO_SET(YM_A1);
  }
  else
  {
    GPIO_CLEAR(YM_A1);
  }
  GPIO_CLEAR(YM_A0);
  // ****** write register begin ******
  //ym2612_write_step(reg);
    // CS Pin low
  GPIO_CLEAR(YM_CS);
  // DATA to bus
  //YM_Data_Write(data);
  YM_Data_DR = reg;
  // WR data
  GPIO_CLEAR(YM_WR);
  GPIO_SET(YM_RD);
  CyDelayCycles(1);
  //CyDelayUs(1);
  GPIO_SET(YM_WR);
  GPIO_CLEAR(YM_RD);
  // CS Pin high
  GPIO_SET(YM_CS);
  //CyDelayUs(1);
  CyDelayCycles(1);
  // ****** write register end ******
  // data part 0 (channels 1-3)
  // A1 low, A0 high
  GPIO_SET(YM_A0);
  // ****** write register begin ******
  //ym2612_write_step(data);
    // CS Pin low
  GPIO_CLEAR(YM_CS);
  // DATA to bus
  //YM_Data_Write(data);
  YM_Data_DR = data;
  // WR data
  GPIO_CLEAR(YM_WR);
  GPIO_SET(YM_RD);
  CyDelayCycles(1);
  //CyDelayUs(1);
  GPIO_SET(YM_WR);
  GPIO_CLEAR(YM_RD);
  // CS Pin high
  GPIO_SET(YM_CS);
  //CyDelayUs(1);
  CyDelayCycles(1);
  // ****** write register end ******
}

/*
void sn76489_write(uint8_t data)
{
  //data = flip_byte(data);  
  SN_WE_Write(1);
  YM_Data_Write(data);
  SN_WE_Write(0);
  //CyDelayCycles(1);
  CyDelayUs(10);
  SN_WE_Write(1);
}
*/

void sn76489_write(uint8_t data)
{
  //data = flip_byte(data);  
  GPIO_SET(SN_WE);
  YM_Data_DR = data;
  GPIO_CLEAR(SN_WE);
  //CyDelayCycles(1);
  CyDelayUs(10);
  GPIO_SET(SN_WE);
}

void ym2612_reset()
{
  //YM_IC_Write(0);
  //CyDelayUs(1);
  //YM_IC_Write(1);
  YM_IC_Write(0);
  CyDelay(10);
  YM_IC_Write(1);
  CyDelay(10);  
  // Silence channel-0 to channel-6
  //for (uint8_t ch = 0; ch <= 6; ++ch)
  //  ym2612_write(0x28, ch, 0);
}

void ym2612_init (void)
{
  YM_CS_Write(1);
  YM_WR_Write(1);
  YM_RD_Write(1);
  YM_IC_Write(1);
  YM_A0_Write(0);
  YM_A1_Write(0);
  YM_Data_Write(0xff);
}

void SilenceAllChannels()
{  
  sn76489_write(0x9f);
  sn76489_write(0xbf);
  sn76489_write(0xdf);
  sn76489_write(0xff);

  ym2612_init();
  ym2612_reset();
}

/* [] END OF FILE */
