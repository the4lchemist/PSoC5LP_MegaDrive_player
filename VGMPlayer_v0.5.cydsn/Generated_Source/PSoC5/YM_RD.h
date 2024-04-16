/*******************************************************************************
* File Name: YM_RD.h  
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

#if !defined(CY_PINS_YM_RD_H) /* Pins YM_RD_H */
#define CY_PINS_YM_RD_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "YM_RD_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 YM_RD__PORT == 15 && ((YM_RD__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    YM_RD_Write(uint8 value);
void    YM_RD_SetDriveMode(uint8 mode);
uint8   YM_RD_ReadDataReg(void);
uint8   YM_RD_Read(void);
void    YM_RD_SetInterruptMode(uint16 position, uint16 mode);
uint8   YM_RD_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the YM_RD_SetDriveMode() function.
     *  @{
     */
        #define YM_RD_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define YM_RD_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define YM_RD_DM_RES_UP          PIN_DM_RES_UP
        #define YM_RD_DM_RES_DWN         PIN_DM_RES_DWN
        #define YM_RD_DM_OD_LO           PIN_DM_OD_LO
        #define YM_RD_DM_OD_HI           PIN_DM_OD_HI
        #define YM_RD_DM_STRONG          PIN_DM_STRONG
        #define YM_RD_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define YM_RD_MASK               YM_RD__MASK
#define YM_RD_SHIFT              YM_RD__SHIFT
#define YM_RD_WIDTH              1u

/* Interrupt constants */
#if defined(YM_RD__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in YM_RD_SetInterruptMode() function.
     *  @{
     */
        #define YM_RD_INTR_NONE      (uint16)(0x0000u)
        #define YM_RD_INTR_RISING    (uint16)(0x0001u)
        #define YM_RD_INTR_FALLING   (uint16)(0x0002u)
        #define YM_RD_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define YM_RD_INTR_MASK      (0x01u) 
#endif /* (YM_RD__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define YM_RD_PS                     (* (reg8 *) YM_RD__PS)
/* Data Register */
#define YM_RD_DR                     (* (reg8 *) YM_RD__DR)
/* Port Number */
#define YM_RD_PRT_NUM                (* (reg8 *) YM_RD__PRT) 
/* Connect to Analog Globals */                                                  
#define YM_RD_AG                     (* (reg8 *) YM_RD__AG)                       
/* Analog MUX bux enable */
#define YM_RD_AMUX                   (* (reg8 *) YM_RD__AMUX) 
/* Bidirectional Enable */                                                        
#define YM_RD_BIE                    (* (reg8 *) YM_RD__BIE)
/* Bit-mask for Aliased Register Access */
#define YM_RD_BIT_MASK               (* (reg8 *) YM_RD__BIT_MASK)
/* Bypass Enable */
#define YM_RD_BYP                    (* (reg8 *) YM_RD__BYP)
/* Port wide control signals */                                                   
#define YM_RD_CTL                    (* (reg8 *) YM_RD__CTL)
/* Drive Modes */
#define YM_RD_DM0                    (* (reg8 *) YM_RD__DM0) 
#define YM_RD_DM1                    (* (reg8 *) YM_RD__DM1)
#define YM_RD_DM2                    (* (reg8 *) YM_RD__DM2) 
/* Input Buffer Disable Override */
#define YM_RD_INP_DIS                (* (reg8 *) YM_RD__INP_DIS)
/* LCD Common or Segment Drive */
#define YM_RD_LCD_COM_SEG            (* (reg8 *) YM_RD__LCD_COM_SEG)
/* Enable Segment LCD */
#define YM_RD_LCD_EN                 (* (reg8 *) YM_RD__LCD_EN)
/* Slew Rate Control */
#define YM_RD_SLW                    (* (reg8 *) YM_RD__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define YM_RD_PRTDSI__CAPS_SEL       (* (reg8 *) YM_RD__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define YM_RD_PRTDSI__DBL_SYNC_IN    (* (reg8 *) YM_RD__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define YM_RD_PRTDSI__OE_SEL0        (* (reg8 *) YM_RD__PRTDSI__OE_SEL0) 
#define YM_RD_PRTDSI__OE_SEL1        (* (reg8 *) YM_RD__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define YM_RD_PRTDSI__OUT_SEL0       (* (reg8 *) YM_RD__PRTDSI__OUT_SEL0) 
#define YM_RD_PRTDSI__OUT_SEL1       (* (reg8 *) YM_RD__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define YM_RD_PRTDSI__SYNC_OUT       (* (reg8 *) YM_RD__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(YM_RD__SIO_CFG)
    #define YM_RD_SIO_HYST_EN        (* (reg8 *) YM_RD__SIO_HYST_EN)
    #define YM_RD_SIO_REG_HIFREQ     (* (reg8 *) YM_RD__SIO_REG_HIFREQ)
    #define YM_RD_SIO_CFG            (* (reg8 *) YM_RD__SIO_CFG)
    #define YM_RD_SIO_DIFF           (* (reg8 *) YM_RD__SIO_DIFF)
#endif /* (YM_RD__SIO_CFG) */

/* Interrupt Registers */
#if defined(YM_RD__INTSTAT)
    #define YM_RD_INTSTAT            (* (reg8 *) YM_RD__INTSTAT)
    #define YM_RD_SNAP               (* (reg8 *) YM_RD__SNAP)
    
	#define YM_RD_0_INTTYPE_REG 		(* (reg8 *) YM_RD__0__INTTYPE)
#endif /* (YM_RD__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_YM_RD_H */


/* [] END OF FILE */
