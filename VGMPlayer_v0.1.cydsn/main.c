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

/*
- sostituire macro a funzioni
- indici al vgm locali invece che globali
*/

#include "project.h"
#include "rawData.h"

uint8_t isrFlag = 0;
const uint8_t *vgm = &rawData[0];
uint32_t vgm_pos = 0x40;
uint32_t vgm_loop_offset = 0;

CY_ISR(sampleRateIRQ){
    isrFlag = 1;
}

uint8_t get_vgm_ui8()
{
    return vgm[vgm_pos++];
}

uint16_t get_vgm_ui16()
{
    return get_vgm_ui8() + (get_vgm_ui8() << 8);
}

uint32_t get_vgm_ui32()
{
    return get_vgm_ui8() + (get_vgm_ui8() << 8) + (get_vgm_ui8() << 16) + (get_vgm_ui8() << 24);
}

uint8_t flip_byte(uint8_t input)
{   /*
    uint8_t new = 0;
    new = (input & 0b00000001) << 7;
    new += (input & 0b00000010) << 5;
    new += (input & 0b00000100) << 3;
    new += (input & 0b00001000) << 1;
    new += (input & 0b00010000) >> 1;
    new += (input & 0b00100000) >> 3;
    new += (input & 0b01000000) >> 5;
    new += (input & 0b10000000) >> 7;*/
    return ((input & 0b00000001) << 7) + ((input & 0b00000010) << 5) + ((input & 0b00000100) << 3) +
           ((input & 0b00001000) << 1) + ((input & 0b00010000) >> 1) + ((input & 0b00100000) >> 3) +
           ((input & 0b01000000) >> 5) + ((input & 0b10000000) >> 7);
    //return new;
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

void ym2612_soundTest() {
    
    YM_IC_Write(0);
    CyDelay(10);
    YM_IC_Write(1);
    CyDelay(10);
 
    ym2612_write(0x22, 0x00, 0); // LFO off
    ym2612_write(0x27, 0x00, 0); // Note off (channel 0)
    ym2612_write(0x28, 0x01, 0); // Note off (channel 1)
    ym2612_write(0x28, 0x02, 0); // Note off (channel 2)
    ym2612_write(0x28, 0x04, 0); // Note off (channel 3)
    ym2612_write(0x28, 0x05, 0); // Note off (channel 4)
    ym2612_write(0x28, 0x06, 0); // Note off (channel 5)
    ym2612_write(0x2B, 0x00, 0); // DAC off
    ym2612_write(0x30, 0x71, 0); //
    ym2612_write(0x34, 0x0D, 0); //
    ym2612_write(0x38, 0x33, 0); //
    ym2612_write(0x3C, 0x01, 0); // DT1/MUL
    ym2612_write(0x40, 0x23, 0); //
    ym2612_write(0x44, 0x2D, 0); //
    ym2612_write(0x48, 0x26, 0); //
    ym2612_write(0x4C, 0x00, 0); // Total level
    ym2612_write(0x50, 0x5F, 0); //
    ym2612_write(0x54, 0x99, 0); //
    ym2612_write(0x58, 0x5F, 0); //
    ym2612_write(0x5C, 0x94, 0); // RS/AR 
    ym2612_write(0x60, 0x05, 0); //
    ym2612_write(0x64, 0x05, 0); //
    ym2612_write(0x68, 0x05, 0); //
    ym2612_write(0x6C, 0x07, 0); // AM/D1R
    ym2612_write(0x70, 0x02, 0); //
    ym2612_write(0x74, 0x02, 0); //
    ym2612_write(0x78, 0x02, 0); //
    ym2612_write(0x7C, 0x02, 0); // D2R
    ym2612_write(0x80, 0x11, 0); //
    ym2612_write(0x84, 0x11, 0); //
    ym2612_write(0x88, 0x11, 0); //
    ym2612_write(0x8C, 0xA6, 0); // D1L/RR
    ym2612_write(0x90, 0x00, 0); //
    ym2612_write(0x94, 0x00, 0); //
    ym2612_write(0x98, 0x00, 0); //
    ym2612_write(0x9C, 0x00, 0); // Proprietary
    ym2612_write(0xB0, 0x32, 0); // Feedback/algorithm
    ym2612_write(0xB4, 0xC0, 0); // Both speakers on
    ym2612_write(0x28, 0x00, 0); // Key off
    ym2612_write(0xA4, 0x22, 0); // 
    ym2612_write(0xA0, 0x69, 0); // Set frequency

    for(;;)
    {
        // cycle tone on/off
        CyDelay(1000);
        ym2612_write(0x28, 0xF0, 0); // Key on
        CyDelay(1000);
        ym2612_write(0x28, 0x00, 0); // Key off
    }
}

int main(void)
{
    uint8_t command = 0;
    uint8_t reg = 0;
    uint8_t data = 0;
    uint16_t waitData = 0;
    uint32_t pcm_offset = 0;
    uint32_t pcm_index = 0;
    uint32_t pcm_size = 0;
    //uint32_t pcm_start = 0;
    uint8_t noWait = 0;
    
    vgm_pos = 0x1c;
    vgm_loop_offset = get_vgm_ui32();
    vgm_pos = 0x34;
    vgm_pos = 0x34 + get_vgm_ui32();
    
    isr_1_StartEx(sampleRateIRQ);
    Clock_1_Start();
    Clock_2_Start();
    Clock_3_Start();
    Opamp_1_Start();
    Opamp_2_Start();
    Opamp_3_Start();
    SilenceAllChannels();
    //ym2612_reset();
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    //ym2612_soundTest();

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        if (isrFlag == 1)
        {
            // if the wait command was not issued then read next command
            if (waitData == 0)
            {
                command = get_vgm_ui8();
                
                // check for seek command
                //if (command == 0xe0) // 0xE0 	dddddddd 	Seek to offset dddddddd (Intel byte order) in PCM data bank of data block type 0 (YM2612).
                //{
                //    pcm_index = pcm_offset + get_vgm_ui32();
                //}
                        
                switch (command) {
                    
                    case 0x4f: // Game Gear stereo PSG (skip)
                        get_vgm_ui16();
                        break;
                    
                    case 0x50: // 0x50 	dd 	PSG (SN76489/SN76496) write value dd
                        data = get_vgm_ui8();
                        sn76489_write(data);
                        break;
                    
                    case 0x52: // 0x52 	aa dd  YM2612 port 0, write value dd to register aa
                    case 0x53: // 0x53 	aa dd  YM2612 port 1, write value dd to register aa
                        reg = get_vgm_ui8();
                        data = get_vgm_ui8();
                        ym2612_write(reg, data, command & 0x01);
                        break;
                    
                    case 0x61: // 0x61 	nn nn 	Wait n samples, n can range from 0 to 65535 (approx 1.49 seconds). Longer pauses than this are represented by multiple wait commands. 
                        waitData = get_vgm_ui16();
                        if (waitData == 0)
                        {
                            noWait = 1;
                        }
                        else
                        {
                            waitData--;
                        }
                        break;
                    
                    case 0x62: // wait 735 samples (60th of a second), a shortcut for 0x61 0xdf 0x02
                        waitData = 735 - 1;
                        break;
                    
                    case 0x63: // wait 882 samples (50th of a second), a shortcut for 0x61 0x72 0x03
                        waitData = 882 - 1;
                        break;
                      
                    case 0x67: // data block   0x67 0x66 tt ss ss ss ss (data)
                        get_vgm_ui8();              // skip 0x66
                        get_vgm_ui8();              // skip type
                        pcm_size = get_vgm_ui32();  // read size (4 byte)
                        pcm_offset = vgm_pos;        // store start position
                        pcm_index = pcm_offset;
                        vgm_pos += pcm_size;        // seek by "pcm_size" bytes
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
                        waitData = command & 0x0f; // this is actually (n+1)
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
                        data = rawData[pcm_offset + pcm_index++];
                        ym2612_write(0x2a, data, 0x00);
                        waitData = (command & 0x0f);
                        if (waitData == 0)
                        {
                            noWait = 1; // if 0x80, don't wait for the next ISR (repeat parser loop)
                        }
                        else
                        {
                            waitData--; // else wait n samples
                        }
                        break;
                        
                    case 0x90:    
                    case 0x91:
                        // TO DO
                        get_vgm_ui32();
                        break;
                        
                    case 0x92:
                        // TO DO
                        get_vgm_ui8();
                        get_vgm_ui32();
                        break;
                        
                    case 0x93:
                        // TO DO
                        get_vgm_ui8();
                        get_vgm_ui32();
                        get_vgm_ui8();
                        get_vgm_ui32();
                        break;
                        
                    case 0xe0:
                        pcm_index = pcm_offset + get_vgm_ui32();
                        noWait = 1;
                        break;
                    
                    case 0x66: // EOF
                        while(1);
                        break;
                        
                    default: break;
                }
            }
            else
            {
                waitData--;
            }
            
            // check for noWait flag
            if (noWait != 1)
            {
                isrFlag = 0;
            }
            else
            {
                noWait = 0;
            }
        }
    }
}

/* [] END OF FILE */
