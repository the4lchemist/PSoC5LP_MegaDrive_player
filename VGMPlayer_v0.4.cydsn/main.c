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

#define INIT_BUF        8
#define GET16(a,b)      (a + (b << 8));

extern uint8_t rx_flag;
extern uint16_t count;
extern uint8_t buffer[USBUART_BUFFER_SIZE][BUF_LEN];
//extern uint8_t buffer;
extern uint8_t *pitem;
extern uint8_t *pplay;

uint8_t isrFlag = 0;

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
    
    uint32_t test = 0;
    uint16_t waitData = 0;
    //uint8_t noWait = 0;
    uint8_t start_flag = 0;

    init_hardware();
    isr_1_StartEx(sampleRateIRQ);
    while (0u == USBUART_CDCIsReady());
    USBUART_PutString("\0");

    for(;;)
    {
        // initial buffering of INIT_BUF samples
        if (pitem > pplay + INIT_BUF)
        {
            start_flag = 1;
        }
        
        if ((start_flag == 1) && (isrFlag == 1))
        {     
            if (waitData == 0)
            {
                        
                switch (*pplay) {
                    
                    case 0x50: // 0x50 	dd 	PSG (SN76489/SN76496) write value dd
                        
                        sn76489_write(*(pplay + 1));
                        break;
                    
                    case 0x52: // 0x52 	aa dd  YM2612 port 0, write value dd to register aa
                    case 0x53: // 0x53 	aa dd  YM2612 port 1, write value dd to register aa
                        
                        ym2612_write(*(pplay + 1), *(pplay + 2), *pplay & 0x01);
                        break;
                    
                    case 0x61: // 0x61 	nn nn 	Wait n samples, n can range from 0 to 65535 (approx 1.49 seconds). Longer pauses than this are represented by multiple wait commands. 
                        waitData = GET16(*(pplay + 1), *(pplay + 2));
                        if (waitData == 0)
                        {
                            //noWait = 1;
                            continue;
                        }
                        //else
                        //{
                        //    waitData--;
                        //}
                        break;
                    
                    case 0x62: // wait 735 samples (60th of a second), a shortcut for 0x61 0xdf 0x02
                        waitData = 735 - 1;
                        break;
                    
                    case 0x63: // wait 882 samples (50th of a second), a shortcut for 0x61 0x72 0x03
                        waitData = 882 - 1;
                        break;
                        
                    case  0x70:
                    case  0x71:
                    case  0x72:
                    case  0x73:
                    case  0x74:
                    case  0x75:
                    case  0x76:
                    case  0x77:
                    case  0x78:
                    case  0x79:
                    case  0x7A:
                    case  0x7B:   
                    case  0x7C:
                    case  0x7D:
                    case  0x7E:
                    case  0x7F: // 0x7n 	wait n+1 samples, n can range from 0 to 15.                     
                        waitData = *pplay & 0x0f; // this is actually (n+1)
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
                    case 0x8a:
                    case 0x8b:
                    case 0x8c:
                    case 0x8d:
                    case 0x8e:
                    case 0x8f: // 0x8n      YM2612 port 0 address 2A write from the data bank, then wait n samples

                        ym2612_write(0x2a, *(pplay + 1), 0x00);
                        waitData = (*pplay & 0x0f);
                        if (waitData == 0)
                        {
                            //noWait = 1; // if 0x80, don't wait for the next ISR (repeat parser loop)
                            continue;
                        }
                        //else
                        //{
                        //    waitData--; // else wait n samples
                        //}
                        break;
                    
                    case 0x66: // EOF
                        
                        start_flag = 0;
                        break;
                        
                    default: break;
                }
                
                // increment circular buffer ptr
                pplay = (pitem > pplay) ? &buffer[0][0] + (((uint8_t)pplay + USBUART_BUFFER_SIZE) % (BUF_LEN * USBUART_BUFFER_SIZE)) : pplay;
            }
            else
            {
                waitData--;
            }
            
            // check for noWait flag
            //if (noWait != 1)
            //{
                isrFlag = 0;
                pplay = (uint8_t *) (((int)pplay + 1) % BUF_LEN);
                test += count;
            //}
            //else
            //{
            //    noWait = 0;
            //}
            
        }
        
        // check for incoming data from USB CDC
        if (rx_flag == 1)
        {
            count = USBUART_GetAll(pitem);
            pitem = (pitem >= pplay) ? (uint8_t *) &buffer[0][0] + (((uint8_t) pitem + USBUART_BUFFER_SIZE) % (BUF_LEN * USBUART_BUFFER_SIZE)) : pitem;
            rx_flag = 0;
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
