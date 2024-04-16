/*
*   This is an implementation of the USBFS CDC - USBUART using 
*   endpoint interrupts with no additional self defined clock 
*   interrupt to check USBUART buffer. 
*   In topdesign, the USBFS has been selected in 
*   Descriptor root:Device Descriptor:Device Class as 0x02 CDC 
*   In Descriptor root, endpoint buffer management is 
*   defined as manual(static allocation), EP 2 direction as IN, 
*   but is a send point, EP3 direction as out, but a receive point. All settings
*   are default when select Device Class as 0x02 CDC
*   THESE IMPLEMENTIONS ARE EXPERIMENTAL, MAY DEPENDED ON THE DEVICE FAMILY
*/
#include "project.h"
#include "stdio.h"
#include "usb_uart.h"
#include "usbuart.h"
#include "tty_utils.h"

//uint16_t count;
//uint8_t buffer[2][USBUART_BUFFER_SIZE];
//uint8_t* bufPtr = buffer[0];
volatile uint8_t rx_flag = 0;
//uint8_t goFlag = 0;
//uint8_t received[1000];
//uint8_t *ptr = received;
//uint8_t received[64];

char* EP3 = "USBUart EP 3 ISR Exit Callback ";
char* EP1 = "USBUart EP 1 ISR Exit Callback ";

void usbuart_init(void)
{
    /* Start USBFS operation with 5-V operation. */
    USBUART_Start(USBFS_DEVICE, USBUART_5V_OPERATION);
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
}
/*
*   After tryouts of the usbfs endpoints, for CDC, these are the interrupts that were
*   enabled by "system" in generated code. And for EP 2 is a sending endpoint, EP 3 is 
*   a receiving endpoint.
*/
/*
*   In cyapicallbacks.h defined enabling of USBUART_EP_2_ISR_EntryCallback,
*   this is the call back function
*/
void USBUART_EP_2_ISR_EntryCallback(void)
{
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
}

/*
*   In cyapicallbacks.h defined enabling of USBUART_EP_3_ISR_ExitCallback,
*   this is the call back function
*/
void USBUART_EP_3_ISR_ExitCallback(void)
{
    /* Service USB CDC when device is configured. */
    if (0u != USBUART_GetConfiguration())
    {
        /* Check for input data from host. */
        if (0u != USBUART_DataIsReady())
        {
                /* Read received data and re-enable OUT endpoint. */
                //count = USBUART_GetAll(bufPtr);
                rx_flag = 1;
        }
    }
}

void usbuart_putstring(char *str)
{
    /* Wait until component is ready to send data to host. */
    while (0u == USBUART_CDCIsReady())
    {
    }
    USBUART_PutString(str);
}

void usbuart_puteol(void)
{
    /* Wait until component is ready to send data to host. */
    while (0u == USBUART_CDCIsReady())
    {
    }
    USBUART_PutCRLF() ;
}

void usbuart_putchar(char c)
{
    /* Wait until component is ready to send data to host. */
    while (0u == USBUART_CDCIsReady())
    {
    }
    USBUART_PutChar(c);
}
/* [] END OF FILE */

