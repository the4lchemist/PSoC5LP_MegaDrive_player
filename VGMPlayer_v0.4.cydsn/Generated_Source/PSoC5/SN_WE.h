/*******************************************************************************
* File Name: SN_WE.h  
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

#if !defined(CY_PINS_SN_WE_H) /* Pins SN_WE_H */
#define CY_PINS_SN_WE_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SN_WE_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SN_WE__PORT == 15 && ((SN_WE__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    SN_WE_Write(uint8 value);
void    SN_WE_SetDriveMode(uint8 mode);
uint8   SN_WE_ReadDataReg(void);
uint8   SN_WE_Read(void);
void    SN_WE_SetInterruptMode(uint16 position, uint16 mode);
uint8   SN_WE_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the SN_WE_SetDriveMode() function.
     *  @{
     */
        #define SN_WE_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define SN_WE_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define SN_WE_DM_RES_UP          PIN_DM_RES_UP
        #define SN_WE_DM_RES_DWN         PIN_DM_RES_DWN
        #define SN_WE_DM_OD_LO           PIN_DM_OD_LO
        #define SN_WE_DM_OD_HI           PIN_DM_OD_HI
        #define SN_WE_DM_STRONG          PIN_DM_STRONG
        #define SN_WE_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define SN_WE_MASK               SN_WE__MASK
#define SN_WE_SHIFT              SN_WE__SHIFT
#define SN_WE_WIDTH              1u

/* Interrupt constants */
#if defined(SN_WE__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in SN_WE_SetInterruptMode() function.
     *  @{
     */
        #define SN_WE_INTR_NONE      (uint16)(0x0000u)
        #define SN_WE_INTR_RISING    (uint16)(0x0001u)
        #define SN_WE_INTR_FALLING   (uint16)(0x0002u)
        #define SN_WE_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define SN_WE_INTR_MASK      (0x01u) 
#endif /* (SN_WE__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SN_WE_PS                     (* (reg8 *) SN_WE__PS)
/* Data Register */
#define SN_WE_DR                     (* (reg8 *) SN_WE__DR)
/* Port Number */
#define SN_WE_PRT_NUM                (* (reg8 *) SN_WE__PRT) 
/* Connect to Analog Globals */                                                  
#define SN_WE_AG                     (* (reg8 *) SN_WE__AG)                       
/* Analog MUX bux enable */
#define SN_WE_AMUX                   (* (reg8 *) SN_WE__AMUX) 
/* Bidirectional Enable */                                                        
#define SN_WE_BIE                    (* (reg8 *) SN_WE__BIE)
/* Bit-mask for Aliased Register Access */
#define SN_WE_BIT_MASK               (* (reg8 *) SN_WE__BIT_MASK)
/* Bypass Enable */
#define SN_WE_BYP                    (* (reg8 *) SN_WE__BYP)
/* Port wide control signals */                                                   
#define SN_WE_CTL                    (* (reg8 *) SN_WE__CTL)
/* Drive Modes */
#define SN_WE_DM0                    (* (reg8 *) SN_WE__DM0) 
#define SN_WE_DM1                    (* (reg8 *) SN_WE__DM1)
#define SN_WE_DM2                    (* (reg8 *) SN_WE__DM2) 
/* Input Buffer Disable Override */
#define SN_WE_INP_DIS                (* (reg8 *) SN_WE__INP_DIS)
/* LCD Common or Segment Drive */
#define SN_WE_LCD_COM_SEG            (* (reg8 *) SN_WE__LCD_COM_SEG)
/* Enable Segment LCD */
#define SN_WE_LCD_EN                 (* (reg8 *) SN_WE__LCD_EN)
/* Slew Rate Control */
#define SN_WE_SLW                    (* (reg8 *) SN_WE__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SN_WE_PRTDSI__CAPS_SEL       (* (reg8 *) SN_WE__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SN_WE_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SN_WE__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SN_WE_PRTDSI__OE_SEL0        (* (reg8 *) SN_WE__PRTDSI__OE_SEL0) 
#define SN_WE_PRTDSI__OE_SEL1        (* (reg8 *) SN_WE__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SN_WE_PRTDSI__OUT_SEL0       (* (reg8 *) SN_WE__PRTDSI__OUT_SEL0) 
#define SN_WE_PRTDSI__OUT_SEL1       (* (reg8 *) SN_WE__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SN_WE_PRTDSI__SYNC_OUT       (* (reg8 *) SN_WE__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(SN_WE__SIO_CFG)
    #define SN_WE_SIO_HYST_EN        (* (reg8 *) SN_WE__SIO_HYST_EN)
    #define SN_WE_SIO_REG_HIFREQ     (* (reg8 *) SN_WE__SIO_REG_HIFREQ)
    #define SN_WE_SIO_CFG            (* (reg8 *) SN_WE__SIO_CFG)
    #define SN_WE_SIO_DIFF           (* (reg8 *) SN_WE__SIO_DIFF)
#endif /* (SN_WE__SIO_CFG) */

/* Interrupt Registers */
#if defined(SN_WE__INTSTAT)
    #define SN_WE_INTSTAT            (* (reg8 *) SN_WE__INTSTAT)
    #define SN_WE_SNAP               (* (reg8 *) SN_WE__SNAP)
    
	#define SN_WE_0_INTTYPE_REG 		(* (reg8 *) SN_WE__0__INTTYPE)
#endif /* (SN_WE__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_SN_WE_H */


/* [] END OF FILE */
