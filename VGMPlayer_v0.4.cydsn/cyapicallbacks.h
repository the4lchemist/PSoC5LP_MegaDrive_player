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
#ifndef CYAPICALLBACKS_H
#define CYAPICALLBACKS_H
    

    /*Define your macro callbacks here */
    /*For more information, refer to the Writing Code topic in the PSoC Creator Help.*/

#define USBUART_EP_2_ISR_ENTRY_CALLBACK (1u)
void USBUART_EP_2_ISR_EntryCallback(void);


#define USBUART_EP_3_ISR_EXIT_CALLBACK (1u)
void USBUART_EP_3_ISR_ExitCallback(void);
    
#endif /* CYAPICALLBACKS_H */   
/* [] */
