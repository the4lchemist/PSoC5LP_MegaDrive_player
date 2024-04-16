/* ========================================
 *
 * Copyright MACOM, 2023
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF MACOM.
 *
 * ========================================
*/
#ifndef _USB_UART_H_
#define _USB_UART_H_
#include "project.h"

#define USBUART_BUFFER_SIZE (64u) 
//#define USBUART_EP1_ISR_ACTIVE (1u)
#define USBFS_DEVICE    (0u)
    
/*
*    usbuart_put***()
*    wrapper function for generated functions
*/
void usbuart_putstring(char *str);   
void usbuart_puteol(void);
void usbuart_putchar(char);
/*
*   Initializing the usbuart
*/
void usbuart_init(void);

#endif  //_USB_UART_H_
/* [] END OF FILE */
