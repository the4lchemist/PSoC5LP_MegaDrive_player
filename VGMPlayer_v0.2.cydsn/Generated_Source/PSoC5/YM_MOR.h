/*******************************************************************************
* File Name: YM_MOR.h  
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

#if !defined(CY_PINS_YM_MOR_H) /* Pins YM_MOR_H */
#define CY_PINS_YM_MOR_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "YM_MOR_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 YM_MOR__PORT == 15 && ((YM_MOR__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    YM_MOR_Write(uint8 value);
void    YM_MOR_SetDriveMode(uint8 mode);
uint8   YM_MOR_ReadDataReg(void);
uint8   YM_MOR_Read(void);
void    YM_MOR_SetInterruptMode(uint16 position, uint16 mode);
uint8   YM_MOR_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the YM_MOR_SetDriveMode() function.
     *  @{
     */
        #define YM_MOR_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define YM_MOR_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define YM_MOR_DM_RES_UP          PIN_DM_RES_UP
        #define YM_MOR_DM_RES_DWN         PIN_DM_RES_DWN
        #define YM_MOR_DM_OD_LO           PIN_DM_OD_LO
        #define YM_MOR_DM_OD_HI           PIN_DM_OD_HI
        #define YM_MOR_DM_STRONG          PIN_DM_STRONG
        #define YM_MOR_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define YM_MOR_MASK               YM_MOR__MASK
#define YM_MOR_SHIFT              YM_MOR__SHIFT
#define YM_MOR_WIDTH              1u

/* Interrupt constants */
#if defined(YM_MOR__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in YM_MOR_SetInterruptMode() function.
     *  @{
     */
        #define YM_MOR_INTR_NONE      (uint16)(0x0000u)
        #define YM_MOR_INTR_RISING    (uint16)(0x0001u)
        #define YM_MOR_INTR_FALLING   (uint16)(0x0002u)
        #define YM_MOR_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define YM_MOR_INTR_MASK      (0x01u) 
#endif /* (YM_MOR__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define YM_MOR_PS                     (* (reg8 *) YM_MOR__PS)
/* Data Register */
#define YM_MOR_DR                     (* (reg8 *) YM_MOR__DR)
/* Port Number */
#define YM_MOR_PRT_NUM                (* (reg8 *) YM_MOR__PRT) 
/* Connect to Analog Globals */                                                  
#define YM_MOR_AG                     (* (reg8 *) YM_MOR__AG)                       
/* Analog MUX bux enable */
#define YM_MOR_AMUX                   (* (reg8 *) YM_MOR__AMUX) 
/* Bidirectional Enable */                                                        
#define YM_MOR_BIE                    (* (reg8 *) YM_MOR__BIE)
/* Bit-mask for Aliased Register Access */
#define YM_MOR_BIT_MASK               (* (reg8 *) YM_MOR__BIT_MASK)
/* Bypass Enable */
#define YM_MOR_BYP                    (* (reg8 *) YM_MOR__BYP)
/* Port wide control signals */                                                   
#define YM_MOR_CTL                    (* (reg8 *) YM_MOR__CTL)
/* Drive Modes */
#define YM_MOR_DM0                    (* (reg8 *) YM_MOR__DM0) 
#define YM_MOR_DM1                    (* (reg8 *) YM_MOR__DM1)
#define YM_MOR_DM2                    (* (reg8 *) YM_MOR__DM2) 
/* Input Buffer Disable Override */
#define YM_MOR_INP_DIS                (* (reg8 *) YM_MOR__INP_DIS)
/* LCD Common or Segment Drive */
#define YM_MOR_LCD_COM_SEG            (* (reg8 *) YM_MOR__LCD_COM_SEG)
/* Enable Segment LCD */
#define YM_MOR_LCD_EN                 (* (reg8 *) YM_MOR__LCD_EN)
/* Slew Rate Control */
#define YM_MOR_SLW                    (* (reg8 *) YM_MOR__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define YM_MOR_PRTDSI__CAPS_SEL       (* (reg8 *) YM_MOR__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define YM_MOR_PRTDSI__DBL_SYNC_IN    (* (reg8 *) YM_MOR__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define YM_MOR_PRTDSI__OE_SEL0        (* (reg8 *) YM_MOR__PRTDSI__OE_SEL0) 
#define YM_MOR_PRTDSI__OE_SEL1        (* (reg8 *) YM_MOR__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define YM_MOR_PRTDSI__OUT_SEL0       (* (reg8 *) YM_MOR__PRTDSI__OUT_SEL0) 
#define YM_MOR_PRTDSI__OUT_SEL1       (* (reg8 *) YM_MOR__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define YM_MOR_PRTDSI__SYNC_OUT       (* (reg8 *) YM_MOR__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(YM_MOR__SIO_CFG)
    #define YM_MOR_SIO_HYST_EN        (* (reg8 *) YM_MOR__SIO_HYST_EN)
    #define YM_MOR_SIO_REG_HIFREQ     (* (reg8 *) YM_MOR__SIO_REG_HIFREQ)
    #define YM_MOR_SIO_CFG            (* (reg8 *) YM_MOR__SIO_CFG)
    #define YM_MOR_SIO_DIFF           (* (reg8 *) YM_MOR__SIO_DIFF)
#endif /* (YM_MOR__SIO_CFG) */

/* Interrupt Registers */
#if defined(YM_MOR__INTSTAT)
    #define YM_MOR_INTSTAT            (* (reg8 *) YM_MOR__INTSTAT)
    #define YM_MOR_SNAP               (* (reg8 *) YM_MOR__SNAP)
    
	#define YM_MOR_0_INTTYPE_REG 		(* (reg8 *) YM_MOR__0__INTTYPE)
#endif /* (YM_MOR__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_YM_MOR_H */


/* [] END OF FILE */
