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

extern uint8_t rx_flag;
extern uint16_t count;
extern uint8_t buffer[USBUART_BUFFER_SIZE];
//extern uint8_t buffer;

uint32_t test = 0;

void ym2612_write_step (uint8_t data);
void ym2612_write(uint8_t reg, uint8_t data, uint8_t port);
void sn76489_write(uint8_t data);
void ym2612_reset();
void ym2612_init (void);
void SilenceAllChannels();
void init_hardware(void);

int main(void) {

    init_hardware();
    //splash("USBFS-UART demo") ;
    //cls();
    //print("\033c") ; /* reset */
    //CyDelay(20) ;
    while (0u == USBUART_CDCIsReady())
    {
    }
    USBUART_PutString("\0");

    for(;;)
    {
        //try_all_address();
        //do_demo();      
//        do_usbuart();
        if (rx_flag == 1)
        {   
            //USBUART_PutData(buffer, count);
            rx_flag = 0;
            
            switch (buffer[0])
            {
                                     
                case 0x50: // 0x50 	dd 	PSG (SN76489/SN76496) write value dd
                    
                    sn76489_write(buffer[1]);
                    break;
                
                case 0x52: // 0x52 	aa dd  YM2612 port 0, write value dd to register aa
                case 0x53: // 0x53 	aa dd  YM2612 port 1, write value dd to register aa

                    ym2612_write(buffer[1], buffer[2], buffer[0] & 0x01);
                    break;
                    
                case 0x60:
                    
                    ym2612_write(0x2a, buffer[1], 0x00);
                    break;
                   
                default: break;
            }
            
            test += count;
            
        }
    }  
}

void init_hardware(void) 
{
    SilenceAllChannels();
    CyGlobalIntEnable; /* Enable global interrupts. */

    tty_init() ;
}

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
  CyDelayUs(3);
  YM_WR_Write(1);
  YM_RD_Write(0);
  // CS Pin high
  YM_CS_Write(1);
  CyDelayUs(3);
  //CyDelayCycles(1);
}

void ym2612_write(uint8_t reg, uint8_t data, uint8_t port)
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
}

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
