/*******************************************************************************
* File Name: YM_Data.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_YM_Data_ALIASES_H) /* Pins YM_Data_ALIASES_H */
#define CY_PINS_YM_Data_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define YM_Data_0			(YM_Data__0__PC)
#define YM_Data_0_INTR	((uint16)((uint16)0x0001u << YM_Data__0__SHIFT))

#define YM_Data_1			(YM_Data__1__PC)
#define YM_Data_1_INTR	((uint16)((uint16)0x0001u << YM_Data__1__SHIFT))

#define YM_Data_2			(YM_Data__2__PC)
#define YM_Data_2_INTR	((uint16)((uint16)0x0001u << YM_Data__2__SHIFT))

#define YM_Data_3			(YM_Data__3__PC)
#define YM_Data_3_INTR	((uint16)((uint16)0x0001u << YM_Data__3__SHIFT))

#define YM_Data_4			(YM_Data__4__PC)
#define YM_Data_4_INTR	((uint16)((uint16)0x0001u << YM_Data__4__SHIFT))

#define YM_Data_5			(YM_Data__5__PC)
#define YM_Data_5_INTR	((uint16)((uint16)0x0001u << YM_Data__5__SHIFT))

#define YM_Data_6			(YM_Data__6__PC)
#define YM_Data_6_INTR	((uint16)((uint16)0x0001u << YM_Data__6__SHIFT))

#define YM_Data_7			(YM_Data__7__PC)
#define YM_Data_7_INTR	((uint16)((uint16)0x0001u << YM_Data__7__SHIFT))

#define YM_Data_INTR_ALL	 ((uint16)(YM_Data_0_INTR| YM_Data_1_INTR| YM_Data_2_INTR| YM_Data_3_INTR| YM_Data_4_INTR| YM_Data_5_INTR| YM_Data_6_INTR| YM_Data_7_INTR))

#endif /* End Pins YM_Data_ALIASES_H */


/* [] END OF FILE */
