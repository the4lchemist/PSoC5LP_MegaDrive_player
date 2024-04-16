/*******************************************************************************
* File Name: main.c
*
* Version: 2.0
*
* Description:
*   The component is enumerated as a Virtual Com port. Receives data from the 
*   hyper terminal, then sends back the received data.
*   For PSoC3/PSoC5LP, the LCD shows the line settings.
*
* Related Document:
*  Universal Serial Bus Specification Revision 2.0
*  Universal Serial Bus Class Definitions for Communications Devices
*  Revision 1.2
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation. All rights reserved.
* This software is owned by Cypress Semiconductor Corporation and is protected
* by and subject to worldwide patent and copyright laws and treaties.
* Therefore, you may use this software only as provided in the license agreement
* accompanying the software package from which you obtained this software.
* CYPRESS AND ITS SUPPLIERS MAKE NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* WITH REGARD TO THIS SOFTWARE, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*******************************************************************************/

#include <project.h>
#include "stdio.h"

#if defined (__GNUC__)
    /* Add an explicit reference to the floating point printf library */
    /* to allow usage of the floating point conversion specifiers. */
    /* This is not linked in by default with the newlib-nano library. */
    asm (".global _printf_float");
#endif

#define USBFS_DEVICE    (0u)

/* The buffer size is equal to the maximum packet size of the IN and OUT bulk
* endpoints.
*/
#define USBUART_BUFFER_SIZE (64u)
#define LINE_STR_LENGTH     (20u)

char8* parity[] = {"None", "Odd", "Even", "Mark", "Space"};
char8* stop[]   = {"1", "1.5", "2"};

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
  CyDelayUs(18);
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

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  The main function performs the following actions:
*   1. Waits until VBUS becomes valid and starts the USBFS component which is
*      enumerated as virtual Com port.
*   2. Waits until the device is enumerated by the host.
*   3. Waits for data coming from the hyper terminal and sends it back.
*   4. PSoC3/PSoC5LP: the LCD shows the line settings.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
int main()
{
    uint16 count;
    uint8 buffer[USBUART_BUFFER_SIZE];
    uint8_t command = 0;
    uint8_t reg = 0;
    uint8_t data = 0;
    uint8_t test[10000];
    uint16_t idx = 0;
    //uint16_t waitData = 0;
    
//#if (CY_PSOC3 || CY_PSOC5LP)
//    uint8 state;
//    char8 lineStr[LINE_STR_LENGTH];
//    
//    LCD_Start();
//#endif /* (CY_PSOC3 || CY_PSOC5LP) */
    
    SilenceAllChannels();
    CyGlobalIntEnable;

    /* Start USBFS operation with 5-V operation. */
    USBUART_Start(USBFS_DEVICE, USBUART_5V_OPERATION);
    
    for(;;)
    {
        /* Host can send double SET_INTERFACE request. */
        if (0u != USBUART_IsConfigurationChanged())
        {
            /* Initialize IN endpoints when device is configured. */
            if (0u != USBUART_GetConfiguration())
            {
                /* Enumeration is done, enable OUT endpoint to receive data 
                 * from host. */
                USBUART_CDC_Init();
            }
        }

        /* Service USB CDC when device is configured. */
        if (0u != USBUART_GetConfiguration())
        {
            /* Check for input data from host. */
            if (0u != USBUART_DataIsReady())
            {
                /* Read received data and re-enable OUT endpoint. */
                count = USBUART_GetAll(buffer);
                //USBUART_PutData(buffer, count);
                
                command = buffer[0];
                
                // check for seek command
                //if (command == 0xe0) // 0xE0 	dddddddd 	Seek to offset dddddddd (Intel byte order) in PCM data bank of data block type 0 (YM2612).
                //{
                //    pcm_index = pcm_offset + get_vgm_ui32();
                //}
                        
                switch (buffer[0]) {
                    
//                    case 0x4f: // Game Gear stereo PSG (skip)
//                        //get_vgm_ui16();
//                        break;
                    
                    case 0x50: // 0x50 	dd 	PSG (SN76489/SN76496) write value dd
                        
                        sn76489_write(buffer[1]);
                        break;
                    
                    case 0x52: // 0x52 	aa dd  YM2612 port 0, write value dd to register aa
                    case 0x53: // 0x53 	aa dd  YM2612 port 1, write value dd to register aa
                        //reg = buffer[1];
                        //data = buffer[2];
                        ym2612_write(buffer[1], buffer[2], buffer[0] & 0x01);
                        break;
                    
//                    case 0x61: // 0x61 	nn nn 	Wait n samples, n can range from 0 to 65535 (approx 1.49 seconds). Longer pauses than this are represented by multiple wait commands. 
//                        waitData = buffer[1] + (buffer[2] << 8);
////                        if (waitData == 0)
////                        {
////                            noWait = 1;
////                        }
////                        else
////                        {
////                            waitData--;
////                        }
//                        break;
//                    
//                    case 0x62: // wait 735 samples (60th of a second), a shortcut for 0x61 0xdf 0x02
//                        waitData = 735 - 1;
//                        break;
//                    
//                    case 0x63: // wait 882 samples (50th of a second), a shortcut for 0x61 0x72 0x03
//                        waitData = 882 - 1;
//                        break;
//                      
//                    case 0x67: // data block   0x67 0x66 tt ss ss ss ss (data)
//                        get_vgm_ui8();              // skip 0x66
//                        get_vgm_ui8();              // skip type
//                        pcm_size = get_vgm_ui32();  // read size (4 byte)
//                        pcm_offset = vgm_pos;        // store start position
//                        pcm_index = pcm_offset;
//                        vgm_pos += pcm_size;        // seek by "pcm_size" bytes
//                        break;
//                        
//                    case  0x70:
//                    case  0x71:
//                    case  0x72:
//                    case  0x73:
//                    case  0x74:
//                    case  0x75:
//                    case  0x76:
//                    case  0x77:
//                    case  0x78:
//                    case  0x79:
//                    case  0x7A:
//                    case  0x7B:   
//                    case  0x7C:
//                    case  0x7D:
//                    case  0x7E:
//                    case  0x7F: // 0x7n 	wait n+1 samples, n can range from 0 to 15.                     
//                        waitData = command & 0x0f; // this is actually (n+1)
//                        break;
//                    
//                    case 0x80:
//                    case 0x81:
//                    case 0x82:
//                    case 0x83:
//                    case 0x84:
//                    case 0x85:
//                    case 0x86:
//                    case 0x87:
//                    case 0x88:
//                    case 0x89:
//                    case 0x8a:
//                    case 0x8b:
//                    case 0x8c:
//                    case 0x8d:
//                    case 0x8e:
//                    case 0x8f: // 0x8n      YM2612 port 0 address 2A write from the data bank, then wait n samples
//                        data = rawData[pcm_offset + pcm_index++];
//                        ym2612_write(0x2a, data, 0x00);
//                        waitData = (command & 0x0f);
//                        if (waitData == 0)
//                        {
//                            noWait = 1; // if 0x80, don't wait for the next ISR (repeat parser loop)
//                        }
//                        else
//                        {
//                            waitData--; // else wait n samples
//                        }
//                        break;
//                        
//                    case 0x90:    
//                    case 0x91:
//                        // TO DO
//                        get_vgm_ui32();
//                        break;
//                        
//                    case 0x92:
//                        // TO DO
//                        get_vgm_ui8();
//                        get_vgm_ui32();
//                        break;
//                        
//                    case 0x93:
//                        // TO DO
//                        get_vgm_ui8();
//                        get_vgm_ui32();
//                        get_vgm_ui8();
//                        get_vgm_ui32();
//                        break;
//                        
//                    case 0xe0:
//                        pcm_index = pcm_offset + get_vgm_ui32();
//                        noWait = 1;
//                        break;
//                    
//                    case 0x66: // EOF
//                        while(1);
//                        break;
                        
                    default: break;
                }
//                if (0u != count)
//                {
//                    /* Wait until component is ready to send data to host. */
//                    while (0u == USBUART_CDCIsReady())
//                    {
//                    }
//
//                    /* Send data back to host. */
//                    USBUART_PutData(buffer, count);
//
//                    /* If the last sent packet is exactly the maximum packet 
//                    *  size, it is followed by a zero-length packet to assure
//                    *  that the end of the segment is properly identified by 
//                    *  the terminal.
//                    */
//                    if (USBUART_BUFFER_SIZE == count)
//                    {
//                        /* Wait until component is ready to send data to PC. */
//                        while (0u == USBUART_CDCIsReady())
//                        {
//                        }
//
//                        /* Send zero-length packet to PC. */
//                        USBUART_PutData(NULL, 0u);
//                    }
//                }
            }


//        #if (CY_PSOC3 || CY_PSOC5LP)
//            /* Check for Line settings change. */
//            state = USBUART_IsLineChanged();
//            if (0u != state)
//            {
//                /* Output on LCD Line Coding settings. */
//                if (0u != (state & USBUART_LINE_CODING_CHANGED))
//                {                  
//                    /* Get string to output. */
//                    sprintf(lineStr,"BR:%4ld %d%c%s", USBUART_GetDTERate(),\
//                                   (uint16) USBUART_GetDataBits(),\
//                                   parity[(uint16) USBUART_GetParityType()][0],\
//                                   stop[(uint16) USBUART_GetCharFormat()]);
//
//                    /* Clear LCD line. */
//                    LCD_Position(0u, 0u);
//                    LCD_PrintString("                    ");
//
//                    /* Output string on LCD. */
//                    LCD_Position(0u, 0u);
//                    LCD_PrintString(lineStr);
//                }
//
//                /* Output on LCD Line Control settings. */
////                if (0u != (state & USBUART_LINE_CONTROL_CHANGED))
////                {                   
////                    /* Get string to output. */
////                    state = USBUART_GetLineControl();
////                    sprintf(lineStr,"DTR:%s,RTS:%s",  (0u != (state & USBUART_LINE_CONTROL_DTR)) ? "ON" : "OFF",
////                                                      (0u != (state & USBUART_LINE_CONTROL_RTS)) ? "ON" : "OFF");
////
////                    /* Clear LCD line. */
////                    LCD_Position(1u, 0u);
////                    LCD_PrintString("                    ");
////
////                    /* Output string on LCD. */
////                    LCD_Position(1u, 0u);
////                    LCD_PrintString(lineStr);
////                }
//            }
//        #endif /* (CY_PSOC3 || CY_PSOC5LP) */
        }
    }
}


/* [] END OF FILE */
