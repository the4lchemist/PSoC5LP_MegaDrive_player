/*******************************************************************************
* File Name: YM_Data.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_YM_Data_H) /* Pins YM_Data_H */
#define CY_PINS_YM_Data_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "YM_Data_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 YM_Data__PORT == 15 && ((YM_Data__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    YM_Data_Write(uint8 value);
void    YM_Data_SetDriveMode(uint8 mode);
uint8   YM_Data_ReadDataReg(void);
uint8   YM_Data_Read(void);
void    YM_Data_SetInterruptMode(uint16 position, uint16 mode);
uint8   YM_Data_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the YM_Data_SetDriveMode() function.
     *  @{
     */
        #define YM_Data_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define YM_Data_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define YM_Data_DM_RES_UP          PIN_DM_RES_UP
        #define YM_Data_DM_RES_DWN         PIN_DM_RES_DWN
        #define YM_Data_DM_OD_LO           PIN_DM_OD_LO
        #define YM_Data_DM_OD_HI           PIN_DM_OD_HI
        #define YM_Data_DM_STRONG          PIN_DM_STRONG
        #define YM_Data_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define YM_Data_MASK               YM_Data__MASK
#define YM_Data_SHIFT              YM_Data__SHIFT
#define YM_Data_WIDTH              8u

/* Interrupt constants */
#if defined(YM_Data__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in YM_Data_SetInterruptMode() function.
     *  @{
     */
        #define YM_Data_INTR_NONE      (uint16)(0x0000u)
        #define YM_Data_INTR_RISING    (uint16)(0x0001u)
        #define YM_Data_INTR_FALLING   (uint16)(0x0002u)
        #define YM_Data_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define YM_Data_INTR_MASK      (0x01u) 
#endif /* (YM_Data__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define YM_Data_PS                     (* (reg8 *) YM_Data__PS)
/* Data Register */
#define YM_Data_DR                     (* (reg8 *) YM_Data__DR)
/* Port Number */
#define YM_Data_PRT_NUM                (* (reg8 *) YM_Data__PRT) 
/* Connect to Analog Globals */                                                  
#define YM_Data_AG                     (* (reg8 *) YM_Data__AG)                       
/* Analog MUX bux enable */
#define YM_Data_AMUX                   (* (reg8 *) YM_Data__AMUX) 
/* Bidirectional Enable */                                                        
#define YM_Data_BIE                    (* (reg8 *) YM_Data__BIE)
/* Bit-mask for Aliased Register Access */
#define YM_Data_BIT_MASK               (* (reg8 *) YM_Data__BIT_MASK)
/* Bypass Enable */
#define YM_Data_BYP                    (* (reg8 *) YM_Data__BYP)
/* Port wide control signals */                                                   
#define YM_Data_CTL                    (* (reg8 *) YM_Data__CTL)
/* Drive Modes */
#define YM_Data_DM0                    (* (reg8 *) YM_Data__DM0) 
#define YM_Data_DM1                    (* (reg8 *) YM_Data__DM1)
#define YM_Data_DM2                    (* (reg8 *) YM_Data__DM2) 
/* Input Buffer Disable Override */
#define YM_Data_INP_DIS                (* (reg8 *) YM_Data__INP_DIS)
/* LCD Common or Segment Drive */
#define YM_Data_LCD_COM_SEG            (* (reg8 *) YM_Data__LCD_COM_SEG)
/* Enable Segment LCD */
#define YM_Data_LCD_EN                 (* (reg8 *) YM_Data__LCD_EN)
/* Slew Rate Control */
#define YM_Data_SLW                    (* (reg8 *) YM_Data__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define YM_Data_PRTDSI__CAPS_SEL       (* (reg8 *) YM_Data__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define YM_Data_PRTDSI__DBL_SYNC_IN    (* (reg8 *) YM_Data__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define YM_Data_PRTDSI__OE_SEL0        (* (reg8 *) YM_Data__PRTDSI__OE_SEL0) 
#define YM_Data_PRTDSI__OE_SEL1        (* (reg8 *) YM_Data__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define YM_Data_PRTDSI__OUT_SEL0       (* (reg8 *) YM_Data__PRTDSI__OUT_SEL0) 
#define YM_Data_PRTDSI__OUT_SEL1       (* (reg8 *) YM_Data__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define YM_Data_PRTDSI__SYNC_OUT       (* (reg8 *) YM_Data__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(YM_Data__SIO_CFG)
    #define YM_Data_SIO_HYST_EN        (* (reg8 *) YM_Data__SIO_HYST_EN)
    #define YM_Data_SIO_REG_HIFREQ     (* (reg8 *) YM_Data__SIO_REG_HIFREQ)
    #define YM_Data_SIO_CFG            (* (reg8 *) YM_Data__SIO_CFG)
    #define YM_Data_SIO_DIFF           (* (reg8 *) YM_Data__SIO_DIFF)
#endif /* (YM_Data__SIO_CFG) */

/* Interrupt Registers */
#if defined(YM_Data__INTSTAT)
    #define YM_Data_INTSTAT            (* (reg8 *) YM_Data__INTSTAT)
    #define YM_Data_SNAP               (* (reg8 *) YM_Data__SNAP)
    
	#define YM_Data_0_INTTYPE_REG 		(* (reg8 *) YM_Data__0__INTTYPE)
	#define YM_Data_1_INTTYPE_REG 		(* (reg8 *) YM_Data__1__INTTYPE)
	#define YM_Data_2_INTTYPE_REG 		(* (reg8 *) YM_Data__2__INTTYPE)
	#define YM_Data_3_INTTYPE_REG 		(* (reg8 *) YM_Data__3__INTTYPE)
	#define YM_Data_4_INTTYPE_REG 		(* (reg8 *) YM_Data__4__INTTYPE)
	#define YM_Data_5_INTTYPE_REG 		(* (reg8 *) YM_Data__5__INTTYPE)
	#define YM_Data_6_INTTYPE_REG 		(* (reg8 *) YM_Data__6__INTTYPE)
	#define YM_Data_7_INTTYPE_REG 		(* (reg8 *) YM_Data__7__INTTYPE)
#endif /* (YM_Data__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_YM_Data_H */


/* [] END OF FILE */
