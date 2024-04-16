/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* SN_WE */
#define SN_WE__0__INTTYPE CYREG_PICU0_INTTYPE7
#define SN_WE__0__MASK 0x80u
#define SN_WE__0__PC CYREG_PRT0_PC7
#define SN_WE__0__PORT 0u
#define SN_WE__0__SHIFT 7u
#define SN_WE__AG CYREG_PRT0_AG
#define SN_WE__AMUX CYREG_PRT0_AMUX
#define SN_WE__BIE CYREG_PRT0_BIE
#define SN_WE__BIT_MASK CYREG_PRT0_BIT_MASK
#define SN_WE__BYP CYREG_PRT0_BYP
#define SN_WE__CTL CYREG_PRT0_CTL
#define SN_WE__DM0 CYREG_PRT0_DM0
#define SN_WE__DM1 CYREG_PRT0_DM1
#define SN_WE__DM2 CYREG_PRT0_DM2
#define SN_WE__DR CYREG_PRT0_DR
#define SN_WE__INP_DIS CYREG_PRT0_INP_DIS
#define SN_WE__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define SN_WE__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define SN_WE__LCD_EN CYREG_PRT0_LCD_EN
#define SN_WE__MASK 0x80u
#define SN_WE__PORT 0u
#define SN_WE__PRT CYREG_PRT0_PRT
#define SN_WE__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define SN_WE__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define SN_WE__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define SN_WE__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define SN_WE__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define SN_WE__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define SN_WE__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define SN_WE__PS CYREG_PRT0_PS
#define SN_WE__SHIFT 7u
#define SN_WE__SLW CYREG_PRT0_SLW

/* YM_A0 */
#define YM_A0__0__INTTYPE CYREG_PICU12_INTTYPE0
#define YM_A0__0__MASK 0x01u
#define YM_A0__0__PC CYREG_PRT12_PC0
#define YM_A0__0__PORT 12u
#define YM_A0__0__SHIFT 0u
#define YM_A0__AG CYREG_PRT12_AG
#define YM_A0__BIE CYREG_PRT12_BIE
#define YM_A0__BIT_MASK CYREG_PRT12_BIT_MASK
#define YM_A0__BYP CYREG_PRT12_BYP
#define YM_A0__DM0 CYREG_PRT12_DM0
#define YM_A0__DM1 CYREG_PRT12_DM1
#define YM_A0__DM2 CYREG_PRT12_DM2
#define YM_A0__DR CYREG_PRT12_DR
#define YM_A0__INP_DIS CYREG_PRT12_INP_DIS
#define YM_A0__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define YM_A0__MASK 0x01u
#define YM_A0__PORT 12u
#define YM_A0__PRT CYREG_PRT12_PRT
#define YM_A0__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define YM_A0__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define YM_A0__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define YM_A0__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define YM_A0__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define YM_A0__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define YM_A0__PS CYREG_PRT12_PS
#define YM_A0__SHIFT 0u
#define YM_A0__SIO_CFG CYREG_PRT12_SIO_CFG
#define YM_A0__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define YM_A0__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define YM_A0__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define YM_A0__SLW CYREG_PRT12_SLW

/* YM_A1 */
#define YM_A1__0__INTTYPE CYREG_PICU15_INTTYPE0
#define YM_A1__0__MASK 0x01u
#define YM_A1__0__PC CYREG_IO_PC_PRT15_PC0
#define YM_A1__0__PORT 15u
#define YM_A1__0__SHIFT 0u
#define YM_A1__AG CYREG_PRT15_AG
#define YM_A1__AMUX CYREG_PRT15_AMUX
#define YM_A1__BIE CYREG_PRT15_BIE
#define YM_A1__BIT_MASK CYREG_PRT15_BIT_MASK
#define YM_A1__BYP CYREG_PRT15_BYP
#define YM_A1__CTL CYREG_PRT15_CTL
#define YM_A1__DM0 CYREG_PRT15_DM0
#define YM_A1__DM1 CYREG_PRT15_DM1
#define YM_A1__DM2 CYREG_PRT15_DM2
#define YM_A1__DR CYREG_PRT15_DR
#define YM_A1__INP_DIS CYREG_PRT15_INP_DIS
#define YM_A1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define YM_A1__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define YM_A1__LCD_EN CYREG_PRT15_LCD_EN
#define YM_A1__MASK 0x01u
#define YM_A1__PORT 15u
#define YM_A1__PRT CYREG_PRT15_PRT
#define YM_A1__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define YM_A1__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define YM_A1__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define YM_A1__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define YM_A1__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define YM_A1__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define YM_A1__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define YM_A1__PS CYREG_PRT15_PS
#define YM_A1__SHIFT 0u
#define YM_A1__SLW CYREG_PRT15_SLW

/* YM_CS */
#define YM_CS__0__INTTYPE CYREG_PICU12_INTTYPE3
#define YM_CS__0__MASK 0x08u
#define YM_CS__0__PC CYREG_PRT12_PC3
#define YM_CS__0__PORT 12u
#define YM_CS__0__SHIFT 3u
#define YM_CS__AG CYREG_PRT12_AG
#define YM_CS__BIE CYREG_PRT12_BIE
#define YM_CS__BIT_MASK CYREG_PRT12_BIT_MASK
#define YM_CS__BYP CYREG_PRT12_BYP
#define YM_CS__DM0 CYREG_PRT12_DM0
#define YM_CS__DM1 CYREG_PRT12_DM1
#define YM_CS__DM2 CYREG_PRT12_DM2
#define YM_CS__DR CYREG_PRT12_DR
#define YM_CS__INP_DIS CYREG_PRT12_INP_DIS
#define YM_CS__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define YM_CS__MASK 0x08u
#define YM_CS__PORT 12u
#define YM_CS__PRT CYREG_PRT12_PRT
#define YM_CS__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define YM_CS__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define YM_CS__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define YM_CS__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define YM_CS__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define YM_CS__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define YM_CS__PS CYREG_PRT12_PS
#define YM_CS__SHIFT 3u
#define YM_CS__SIO_CFG CYREG_PRT12_SIO_CFG
#define YM_CS__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define YM_CS__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define YM_CS__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define YM_CS__SLW CYREG_PRT12_SLW

/* YM_IC */
#define YM_IC__0__INTTYPE CYREG_PICU12_INTTYPE4
#define YM_IC__0__MASK 0x10u
#define YM_IC__0__PC CYREG_PRT12_PC4
#define YM_IC__0__PORT 12u
#define YM_IC__0__SHIFT 4u
#define YM_IC__AG CYREG_PRT12_AG
#define YM_IC__BIE CYREG_PRT12_BIE
#define YM_IC__BIT_MASK CYREG_PRT12_BIT_MASK
#define YM_IC__BYP CYREG_PRT12_BYP
#define YM_IC__DM0 CYREG_PRT12_DM0
#define YM_IC__DM1 CYREG_PRT12_DM1
#define YM_IC__DM2 CYREG_PRT12_DM2
#define YM_IC__DR CYREG_PRT12_DR
#define YM_IC__INP_DIS CYREG_PRT12_INP_DIS
#define YM_IC__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define YM_IC__MASK 0x10u
#define YM_IC__PORT 12u
#define YM_IC__PRT CYREG_PRT12_PRT
#define YM_IC__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define YM_IC__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define YM_IC__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define YM_IC__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define YM_IC__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define YM_IC__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define YM_IC__PS CYREG_PRT12_PS
#define YM_IC__SHIFT 4u
#define YM_IC__SIO_CFG CYREG_PRT12_SIO_CFG
#define YM_IC__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define YM_IC__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define YM_IC__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define YM_IC__SLW CYREG_PRT12_SLW

/* YM_RD */
#define YM_RD__0__INTTYPE CYREG_PICU15_INTTYPE1
#define YM_RD__0__MASK 0x02u
#define YM_RD__0__PC CYREG_IO_PC_PRT15_PC1
#define YM_RD__0__PORT 15u
#define YM_RD__0__SHIFT 1u
#define YM_RD__AG CYREG_PRT15_AG
#define YM_RD__AMUX CYREG_PRT15_AMUX
#define YM_RD__BIE CYREG_PRT15_BIE
#define YM_RD__BIT_MASK CYREG_PRT15_BIT_MASK
#define YM_RD__BYP CYREG_PRT15_BYP
#define YM_RD__CTL CYREG_PRT15_CTL
#define YM_RD__DM0 CYREG_PRT15_DM0
#define YM_RD__DM1 CYREG_PRT15_DM1
#define YM_RD__DM2 CYREG_PRT15_DM2
#define YM_RD__DR CYREG_PRT15_DR
#define YM_RD__INP_DIS CYREG_PRT15_INP_DIS
#define YM_RD__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define YM_RD__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define YM_RD__LCD_EN CYREG_PRT15_LCD_EN
#define YM_RD__MASK 0x02u
#define YM_RD__PORT 15u
#define YM_RD__PRT CYREG_PRT15_PRT
#define YM_RD__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define YM_RD__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define YM_RD__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define YM_RD__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define YM_RD__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define YM_RD__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define YM_RD__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define YM_RD__PS CYREG_PRT15_PS
#define YM_RD__SHIFT 1u
#define YM_RD__SLW CYREG_PRT15_SLW

/* YM_WR */
#define YM_WR__0__INTTYPE CYREG_PICU12_INTTYPE2
#define YM_WR__0__MASK 0x04u
#define YM_WR__0__PC CYREG_PRT12_PC2
#define YM_WR__0__PORT 12u
#define YM_WR__0__SHIFT 2u
#define YM_WR__AG CYREG_PRT12_AG
#define YM_WR__BIE CYREG_PRT12_BIE
#define YM_WR__BIT_MASK CYREG_PRT12_BIT_MASK
#define YM_WR__BYP CYREG_PRT12_BYP
#define YM_WR__DM0 CYREG_PRT12_DM0
#define YM_WR__DM1 CYREG_PRT12_DM1
#define YM_WR__DM2 CYREG_PRT12_DM2
#define YM_WR__DR CYREG_PRT12_DR
#define YM_WR__INP_DIS CYREG_PRT12_INP_DIS
#define YM_WR__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define YM_WR__MASK 0x04u
#define YM_WR__PORT 12u
#define YM_WR__PRT CYREG_PRT12_PRT
#define YM_WR__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define YM_WR__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define YM_WR__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define YM_WR__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define YM_WR__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define YM_WR__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define YM_WR__PS CYREG_PRT12_PS
#define YM_WR__SHIFT 2u
#define YM_WR__SIO_CFG CYREG_PRT12_SIO_CFG
#define YM_WR__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define YM_WR__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define YM_WR__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define YM_WR__SLW CYREG_PRT12_SLW

/* isr_1 */
#define isr_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_1__INTC_MASK 0x08u
#define isr_1__INTC_NUMBER 3u
#define isr_1__INTC_PRIOR_NUM 0u
#define isr_1__INTC_PRIOR_REG CYREG_NVIC_PRI_3
#define isr_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* SN_CLK */
#define SN_CLK__0__INTTYPE CYREG_PICU0_INTTYPE6
#define SN_CLK__0__MASK 0x40u
#define SN_CLK__0__PC CYREG_PRT0_PC6
#define SN_CLK__0__PORT 0u
#define SN_CLK__0__SHIFT 6u
#define SN_CLK__AG CYREG_PRT0_AG
#define SN_CLK__AMUX CYREG_PRT0_AMUX
#define SN_CLK__BIE CYREG_PRT0_BIE
#define SN_CLK__BIT_MASK CYREG_PRT0_BIT_MASK
#define SN_CLK__BYP CYREG_PRT0_BYP
#define SN_CLK__CTL CYREG_PRT0_CTL
#define SN_CLK__DM0 CYREG_PRT0_DM0
#define SN_CLK__DM1 CYREG_PRT0_DM1
#define SN_CLK__DM2 CYREG_PRT0_DM2
#define SN_CLK__DR CYREG_PRT0_DR
#define SN_CLK__INP_DIS CYREG_PRT0_INP_DIS
#define SN_CLK__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define SN_CLK__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define SN_CLK__LCD_EN CYREG_PRT0_LCD_EN
#define SN_CLK__MASK 0x40u
#define SN_CLK__PORT 0u
#define SN_CLK__PRT CYREG_PRT0_PRT
#define SN_CLK__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define SN_CLK__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define SN_CLK__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define SN_CLK__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define SN_CLK__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define SN_CLK__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define SN_CLK__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define SN_CLK__PS CYREG_PRT0_PS
#define SN_CLK__SHIFT 6u
#define SN_CLK__SLW CYREG_PRT0_SLW

/* YM_CLK */
#define YM_CLK__0__INTTYPE CYREG_PICU3_INTTYPE7
#define YM_CLK__0__MASK 0x80u
#define YM_CLK__0__PC CYREG_PRT3_PC7
#define YM_CLK__0__PORT 3u
#define YM_CLK__0__SHIFT 7u
#define YM_CLK__AG CYREG_PRT3_AG
#define YM_CLK__AMUX CYREG_PRT3_AMUX
#define YM_CLK__BIE CYREG_PRT3_BIE
#define YM_CLK__BIT_MASK CYREG_PRT3_BIT_MASK
#define YM_CLK__BYP CYREG_PRT3_BYP
#define YM_CLK__CTL CYREG_PRT3_CTL
#define YM_CLK__DM0 CYREG_PRT3_DM0
#define YM_CLK__DM1 CYREG_PRT3_DM1
#define YM_CLK__DM2 CYREG_PRT3_DM2
#define YM_CLK__DR CYREG_PRT3_DR
#define YM_CLK__INP_DIS CYREG_PRT3_INP_DIS
#define YM_CLK__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define YM_CLK__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define YM_CLK__LCD_EN CYREG_PRT3_LCD_EN
#define YM_CLK__MASK 0x80u
#define YM_CLK__PORT 3u
#define YM_CLK__PRT CYREG_PRT3_PRT
#define YM_CLK__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define YM_CLK__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define YM_CLK__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define YM_CLK__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define YM_CLK__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define YM_CLK__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define YM_CLK__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define YM_CLK__PS CYREG_PRT3_PS
#define YM_CLK__SHIFT 7u
#define YM_CLK__SLW CYREG_PRT3_SLW

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__INDEX 0x01u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_1__PM_ACT_MSK 0x02u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_1__PM_STBY_MSK 0x02u

/* Clock_2 */
#define Clock_2__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define Clock_2__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define Clock_2__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define Clock_2__CFG2_SRC_SEL_MASK 0x07u
#define Clock_2__INDEX 0x00u
#define Clock_2__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_2__PM_ACT_MSK 0x01u
#define Clock_2__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_2__PM_STBY_MSK 0x01u

/* Clock_3 */
#define Clock_3__CFG0 CYREG_CLKDIST_DCFG2_CFG0
#define Clock_3__CFG1 CYREG_CLKDIST_DCFG2_CFG1
#define Clock_3__CFG2 CYREG_CLKDIST_DCFG2_CFG2
#define Clock_3__CFG2_SRC_SEL_MASK 0x07u
#define Clock_3__INDEX 0x02u
#define Clock_3__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_3__PM_ACT_MSK 0x04u
#define Clock_3__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_3__PM_STBY_MSK 0x04u

/* USBUART */
#define USBUART_arb_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_arb_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_arb_int__INTC_MASK 0x400000u
#define USBUART_arb_int__INTC_NUMBER 22u
#define USBUART_arb_int__INTC_PRIOR_NUM 7u
#define USBUART_arb_int__INTC_PRIOR_REG CYREG_NVIC_PRI_22
#define USBUART_arb_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_arb_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_bus_reset__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_bus_reset__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_bus_reset__INTC_MASK 0x800000u
#define USBUART_bus_reset__INTC_NUMBER 23u
#define USBUART_bus_reset__INTC_PRIOR_NUM 7u
#define USBUART_bus_reset__INTC_PRIOR_REG CYREG_NVIC_PRI_23
#define USBUART_bus_reset__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_bus_reset__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_Dm__0__INTTYPE CYREG_PICU15_INTTYPE7
#define USBUART_Dm__0__MASK 0x80u
#define USBUART_Dm__0__PC CYREG_IO_PC_PRT15_7_6_PC1
#define USBUART_Dm__0__PORT 15u
#define USBUART_Dm__0__SHIFT 7u
#define USBUART_Dm__AG CYREG_PRT15_AG
#define USBUART_Dm__AMUX CYREG_PRT15_AMUX
#define USBUART_Dm__BIE CYREG_PRT15_BIE
#define USBUART_Dm__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBUART_Dm__BYP CYREG_PRT15_BYP
#define USBUART_Dm__CTL CYREG_PRT15_CTL
#define USBUART_Dm__DM0 CYREG_PRT15_DM0
#define USBUART_Dm__DM1 CYREG_PRT15_DM1
#define USBUART_Dm__DM2 CYREG_PRT15_DM2
#define USBUART_Dm__DR CYREG_PRT15_DR
#define USBUART_Dm__INP_DIS CYREG_PRT15_INP_DIS
#define USBUART_Dm__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define USBUART_Dm__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBUART_Dm__LCD_EN CYREG_PRT15_LCD_EN
#define USBUART_Dm__MASK 0x80u
#define USBUART_Dm__PORT 15u
#define USBUART_Dm__PRT CYREG_PRT15_PRT
#define USBUART_Dm__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBUART_Dm__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBUART_Dm__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBUART_Dm__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBUART_Dm__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBUART_Dm__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBUART_Dm__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBUART_Dm__PS CYREG_PRT15_PS
#define USBUART_Dm__SHIFT 7u
#define USBUART_Dm__SLW CYREG_PRT15_SLW
#define USBUART_Dp__0__INTTYPE CYREG_PICU15_INTTYPE6
#define USBUART_Dp__0__MASK 0x40u
#define USBUART_Dp__0__PC CYREG_IO_PC_PRT15_7_6_PC0
#define USBUART_Dp__0__PORT 15u
#define USBUART_Dp__0__SHIFT 6u
#define USBUART_Dp__AG CYREG_PRT15_AG
#define USBUART_Dp__AMUX CYREG_PRT15_AMUX
#define USBUART_Dp__BIE CYREG_PRT15_BIE
#define USBUART_Dp__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBUART_Dp__BYP CYREG_PRT15_BYP
#define USBUART_Dp__CTL CYREG_PRT15_CTL
#define USBUART_Dp__DM0 CYREG_PRT15_DM0
#define USBUART_Dp__DM1 CYREG_PRT15_DM1
#define USBUART_Dp__DM2 CYREG_PRT15_DM2
#define USBUART_Dp__DR CYREG_PRT15_DR
#define USBUART_Dp__INP_DIS CYREG_PRT15_INP_DIS
#define USBUART_Dp__INTSTAT CYREG_PICU15_INTSTAT
#define USBUART_Dp__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define USBUART_Dp__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBUART_Dp__LCD_EN CYREG_PRT15_LCD_EN
#define USBUART_Dp__MASK 0x40u
#define USBUART_Dp__PORT 15u
#define USBUART_Dp__PRT CYREG_PRT15_PRT
#define USBUART_Dp__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBUART_Dp__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBUART_Dp__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBUART_Dp__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBUART_Dp__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBUART_Dp__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBUART_Dp__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBUART_Dp__PS CYREG_PRT15_PS
#define USBUART_Dp__SHIFT 6u
#define USBUART_Dp__SLW CYREG_PRT15_SLW
#define USBUART_Dp__SNAP CYREG_PICU_15_SNAP_15
#define USBUART_dp_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_dp_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_dp_int__INTC_MASK 0x1000u
#define USBUART_dp_int__INTC_NUMBER 12u
#define USBUART_dp_int__INTC_PRIOR_NUM 7u
#define USBUART_dp_int__INTC_PRIOR_REG CYREG_NVIC_PRI_12
#define USBUART_dp_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_dp_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_ep_0__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_0__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_0__INTC_MASK 0x1000000u
#define USBUART_ep_0__INTC_NUMBER 24u
#define USBUART_ep_0__INTC_PRIOR_NUM 7u
#define USBUART_ep_0__INTC_PRIOR_REG CYREG_NVIC_PRI_24
#define USBUART_ep_0__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_0__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_ep_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_1__INTC_MASK 0x01u
#define USBUART_ep_1__INTC_NUMBER 0u
#define USBUART_ep_1__INTC_PRIOR_NUM 7u
#define USBUART_ep_1__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define USBUART_ep_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_ep_2__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_2__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_2__INTC_MASK 0x02u
#define USBUART_ep_2__INTC_NUMBER 1u
#define USBUART_ep_2__INTC_PRIOR_NUM 7u
#define USBUART_ep_2__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define USBUART_ep_2__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_2__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_ep_3__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_3__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_3__INTC_MASK 0x04u
#define USBUART_ep_3__INTC_NUMBER 2u
#define USBUART_ep_3__INTC_PRIOR_NUM 7u
#define USBUART_ep_3__INTC_PRIOR_REG CYREG_NVIC_PRI_2
#define USBUART_ep_3__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_3__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_ep1__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define USBUART_ep1__DRQ_NUMBER 0u
#define USBUART_ep1__NUMBEROF_TDS 0u
#define USBUART_ep1__PRIORITY 2u
#define USBUART_ep1__TERMIN_EN 1u
#define USBUART_ep1__TERMIN_SEL 0u
#define USBUART_ep1__TERMOUT0_EN 0u
#define USBUART_ep1__TERMOUT0_SEL 0u
#define USBUART_ep1__TERMOUT1_EN 0u
#define USBUART_ep1__TERMOUT1_SEL 0u
#define USBUART_ep2__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define USBUART_ep2__DRQ_NUMBER 1u
#define USBUART_ep2__NUMBEROF_TDS 0u
#define USBUART_ep2__PRIORITY 2u
#define USBUART_ep2__TERMIN_EN 1u
#define USBUART_ep2__TERMIN_SEL 0u
#define USBUART_ep2__TERMOUT0_EN 0u
#define USBUART_ep2__TERMOUT0_SEL 0u
#define USBUART_ep2__TERMOUT1_EN 0u
#define USBUART_ep2__TERMOUT1_SEL 0u
#define USBUART_ep3__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define USBUART_ep3__DRQ_NUMBER 2u
#define USBUART_ep3__NUMBEROF_TDS 0u
#define USBUART_ep3__PRIORITY 2u
#define USBUART_ep3__TERMIN_EN 1u
#define USBUART_ep3__TERMIN_SEL 0u
#define USBUART_ep3__TERMOUT0_EN 0u
#define USBUART_ep3__TERMOUT0_SEL 0u
#define USBUART_ep3__TERMOUT1_EN 0u
#define USBUART_ep3__TERMOUT1_SEL 0u
#define USBUART_sof_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_sof_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_sof_int__INTC_MASK 0x200000u
#define USBUART_sof_int__INTC_NUMBER 21u
#define USBUART_sof_int__INTC_PRIOR_NUM 7u
#define USBUART_sof_int__INTC_PRIOR_REG CYREG_NVIC_PRI_21
#define USBUART_sof_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_sof_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_USB__ARB_CFG CYREG_USB_ARB_CFG
#define USBUART_USB__ARB_EP1_CFG CYREG_USB_ARB_EP1_CFG
#define USBUART_USB__ARB_EP1_INT_EN CYREG_USB_ARB_EP1_INT_EN
#define USBUART_USB__ARB_EP1_SR CYREG_USB_ARB_EP1_SR
#define USBUART_USB__ARB_EP2_CFG CYREG_USB_ARB_EP2_CFG
#define USBUART_USB__ARB_EP2_INT_EN CYREG_USB_ARB_EP2_INT_EN
#define USBUART_USB__ARB_EP2_SR CYREG_USB_ARB_EP2_SR
#define USBUART_USB__ARB_EP3_CFG CYREG_USB_ARB_EP3_CFG
#define USBUART_USB__ARB_EP3_INT_EN CYREG_USB_ARB_EP3_INT_EN
#define USBUART_USB__ARB_EP3_SR CYREG_USB_ARB_EP3_SR
#define USBUART_USB__ARB_EP4_CFG CYREG_USB_ARB_EP4_CFG
#define USBUART_USB__ARB_EP4_INT_EN CYREG_USB_ARB_EP4_INT_EN
#define USBUART_USB__ARB_EP4_SR CYREG_USB_ARB_EP4_SR
#define USBUART_USB__ARB_EP5_CFG CYREG_USB_ARB_EP5_CFG
#define USBUART_USB__ARB_EP5_INT_EN CYREG_USB_ARB_EP5_INT_EN
#define USBUART_USB__ARB_EP5_SR CYREG_USB_ARB_EP5_SR
#define USBUART_USB__ARB_EP6_CFG CYREG_USB_ARB_EP6_CFG
#define USBUART_USB__ARB_EP6_INT_EN CYREG_USB_ARB_EP6_INT_EN
#define USBUART_USB__ARB_EP6_SR CYREG_USB_ARB_EP6_SR
#define USBUART_USB__ARB_EP7_CFG CYREG_USB_ARB_EP7_CFG
#define USBUART_USB__ARB_EP7_INT_EN CYREG_USB_ARB_EP7_INT_EN
#define USBUART_USB__ARB_EP7_SR CYREG_USB_ARB_EP7_SR
#define USBUART_USB__ARB_EP8_CFG CYREG_USB_ARB_EP8_CFG
#define USBUART_USB__ARB_EP8_INT_EN CYREG_USB_ARB_EP8_INT_EN
#define USBUART_USB__ARB_EP8_SR CYREG_USB_ARB_EP8_SR
#define USBUART_USB__ARB_INT_EN CYREG_USB_ARB_INT_EN
#define USBUART_USB__ARB_INT_SR CYREG_USB_ARB_INT_SR
#define USBUART_USB__ARB_RW1_DR CYREG_USB_ARB_RW1_DR
#define USBUART_USB__ARB_RW1_RA CYREG_USB_ARB_RW1_RA
#define USBUART_USB__ARB_RW1_RA_MSB CYREG_USB_ARB_RW1_RA_MSB
#define USBUART_USB__ARB_RW1_WA CYREG_USB_ARB_RW1_WA
#define USBUART_USB__ARB_RW1_WA_MSB CYREG_USB_ARB_RW1_WA_MSB
#define USBUART_USB__ARB_RW2_DR CYREG_USB_ARB_RW2_DR
#define USBUART_USB__ARB_RW2_RA CYREG_USB_ARB_RW2_RA
#define USBUART_USB__ARB_RW2_RA_MSB CYREG_USB_ARB_RW2_RA_MSB
#define USBUART_USB__ARB_RW2_WA CYREG_USB_ARB_RW2_WA
#define USBUART_USB__ARB_RW2_WA_MSB CYREG_USB_ARB_RW2_WA_MSB
#define USBUART_USB__ARB_RW3_DR CYREG_USB_ARB_RW3_DR
#define USBUART_USB__ARB_RW3_RA CYREG_USB_ARB_RW3_RA
#define USBUART_USB__ARB_RW3_RA_MSB CYREG_USB_ARB_RW3_RA_MSB
#define USBUART_USB__ARB_RW3_WA CYREG_USB_ARB_RW3_WA
#define USBUART_USB__ARB_RW3_WA_MSB CYREG_USB_ARB_RW3_WA_MSB
#define USBUART_USB__ARB_RW4_DR CYREG_USB_ARB_RW4_DR
#define USBUART_USB__ARB_RW4_RA CYREG_USB_ARB_RW4_RA
#define USBUART_USB__ARB_RW4_RA_MSB CYREG_USB_ARB_RW4_RA_MSB
#define USBUART_USB__ARB_RW4_WA CYREG_USB_ARB_RW4_WA
#define USBUART_USB__ARB_RW4_WA_MSB CYREG_USB_ARB_RW4_WA_MSB
#define USBUART_USB__ARB_RW5_DR CYREG_USB_ARB_RW5_DR
#define USBUART_USB__ARB_RW5_RA CYREG_USB_ARB_RW5_RA
#define USBUART_USB__ARB_RW5_RA_MSB CYREG_USB_ARB_RW5_RA_MSB
#define USBUART_USB__ARB_RW5_WA CYREG_USB_ARB_RW5_WA
#define USBUART_USB__ARB_RW5_WA_MSB CYREG_USB_ARB_RW5_WA_MSB
#define USBUART_USB__ARB_RW6_DR CYREG_USB_ARB_RW6_DR
#define USBUART_USB__ARB_RW6_RA CYREG_USB_ARB_RW6_RA
#define USBUART_USB__ARB_RW6_RA_MSB CYREG_USB_ARB_RW6_RA_MSB
#define USBUART_USB__ARB_RW6_WA CYREG_USB_ARB_RW6_WA
#define USBUART_USB__ARB_RW6_WA_MSB CYREG_USB_ARB_RW6_WA_MSB
#define USBUART_USB__ARB_RW7_DR CYREG_USB_ARB_RW7_DR
#define USBUART_USB__ARB_RW7_RA CYREG_USB_ARB_RW7_RA
#define USBUART_USB__ARB_RW7_RA_MSB CYREG_USB_ARB_RW7_RA_MSB
#define USBUART_USB__ARB_RW7_WA CYREG_USB_ARB_RW7_WA
#define USBUART_USB__ARB_RW7_WA_MSB CYREG_USB_ARB_RW7_WA_MSB
#define USBUART_USB__ARB_RW8_DR CYREG_USB_ARB_RW8_DR
#define USBUART_USB__ARB_RW8_RA CYREG_USB_ARB_RW8_RA
#define USBUART_USB__ARB_RW8_RA_MSB CYREG_USB_ARB_RW8_RA_MSB
#define USBUART_USB__ARB_RW8_WA CYREG_USB_ARB_RW8_WA
#define USBUART_USB__ARB_RW8_WA_MSB CYREG_USB_ARB_RW8_WA_MSB
#define USBUART_USB__BUF_SIZE CYREG_USB_BUF_SIZE
#define USBUART_USB__BUS_RST_CNT CYREG_USB_BUS_RST_CNT
#define USBUART_USB__CR0 CYREG_USB_CR0
#define USBUART_USB__CR1 CYREG_USB_CR1
#define USBUART_USB__CWA CYREG_USB_CWA
#define USBUART_USB__CWA_MSB CYREG_USB_CWA_MSB
#define USBUART_USB__DMA_THRES CYREG_USB_DMA_THRES
#define USBUART_USB__DMA_THRES_MSB CYREG_USB_DMA_THRES_MSB
#define USBUART_USB__DYN_RECONFIG CYREG_USB_DYN_RECONFIG
#define USBUART_USB__EP_ACTIVE CYREG_USB_EP_ACTIVE
#define USBUART_USB__EP_TYPE CYREG_USB_EP_TYPE
#define USBUART_USB__EP0_CNT CYREG_USB_EP0_CNT
#define USBUART_USB__EP0_CR CYREG_USB_EP0_CR
#define USBUART_USB__EP0_DR0 CYREG_USB_EP0_DR0
#define USBUART_USB__EP0_DR1 CYREG_USB_EP0_DR1
#define USBUART_USB__EP0_DR2 CYREG_USB_EP0_DR2
#define USBUART_USB__EP0_DR3 CYREG_USB_EP0_DR3
#define USBUART_USB__EP0_DR4 CYREG_USB_EP0_DR4
#define USBUART_USB__EP0_DR5 CYREG_USB_EP0_DR5
#define USBUART_USB__EP0_DR6 CYREG_USB_EP0_DR6
#define USBUART_USB__EP0_DR7 CYREG_USB_EP0_DR7
#define USBUART_USB__MEM_DATA CYREG_USB_MEM_DATA_MBASE
#define USBUART_USB__PM_ACT_CFG CYREG_PM_ACT_CFG5
#define USBUART_USB__PM_ACT_MSK 0x01u
#define USBUART_USB__PM_STBY_CFG CYREG_PM_STBY_CFG5
#define USBUART_USB__PM_STBY_MSK 0x01u
#define USBUART_USB__SIE_EP_INT_EN CYREG_USB_SIE_EP_INT_EN
#define USBUART_USB__SIE_EP_INT_SR CYREG_USB_SIE_EP_INT_SR
#define USBUART_USB__SIE_EP1_CNT0 CYREG_USB_SIE_EP1_CNT0
#define USBUART_USB__SIE_EP1_CNT1 CYREG_USB_SIE_EP1_CNT1
#define USBUART_USB__SIE_EP1_CR0 CYREG_USB_SIE_EP1_CR0
#define USBUART_USB__SIE_EP2_CNT0 CYREG_USB_SIE_EP2_CNT0
#define USBUART_USB__SIE_EP2_CNT1 CYREG_USB_SIE_EP2_CNT1
#define USBUART_USB__SIE_EP2_CR0 CYREG_USB_SIE_EP2_CR0
#define USBUART_USB__SIE_EP3_CNT0 CYREG_USB_SIE_EP3_CNT0
#define USBUART_USB__SIE_EP3_CNT1 CYREG_USB_SIE_EP3_CNT1
#define USBUART_USB__SIE_EP3_CR0 CYREG_USB_SIE_EP3_CR0
#define USBUART_USB__SIE_EP4_CNT0 CYREG_USB_SIE_EP4_CNT0
#define USBUART_USB__SIE_EP4_CNT1 CYREG_USB_SIE_EP4_CNT1
#define USBUART_USB__SIE_EP4_CR0 CYREG_USB_SIE_EP4_CR0
#define USBUART_USB__SIE_EP5_CNT0 CYREG_USB_SIE_EP5_CNT0
#define USBUART_USB__SIE_EP5_CNT1 CYREG_USB_SIE_EP5_CNT1
#define USBUART_USB__SIE_EP5_CR0 CYREG_USB_SIE_EP5_CR0
#define USBUART_USB__SIE_EP6_CNT0 CYREG_USB_SIE_EP6_CNT0
#define USBUART_USB__SIE_EP6_CNT1 CYREG_USB_SIE_EP6_CNT1
#define USBUART_USB__SIE_EP6_CR0 CYREG_USB_SIE_EP6_CR0
#define USBUART_USB__SIE_EP7_CNT0 CYREG_USB_SIE_EP7_CNT0
#define USBUART_USB__SIE_EP7_CNT1 CYREG_USB_SIE_EP7_CNT1
#define USBUART_USB__SIE_EP7_CR0 CYREG_USB_SIE_EP7_CR0
#define USBUART_USB__SIE_EP8_CNT0 CYREG_USB_SIE_EP8_CNT0
#define USBUART_USB__SIE_EP8_CNT1 CYREG_USB_SIE_EP8_CNT1
#define USBUART_USB__SIE_EP8_CR0 CYREG_USB_SIE_EP8_CR0
#define USBUART_USB__SOF0 CYREG_USB_SOF0
#define USBUART_USB__SOF1 CYREG_USB_SOF1
#define USBUART_USB__USB_CLK_EN CYREG_USB_USB_CLK_EN
#define USBUART_USB__USBIO_CR0 CYREG_USB_USBIO_CR0
#define USBUART_USB__USBIO_CR1 CYREG_USB_USBIO_CR1

/* YM_Data */
#define YM_Data__0__INTTYPE CYREG_PICU2_INTTYPE0
#define YM_Data__0__MASK 0x01u
#define YM_Data__0__PC CYREG_PRT2_PC0
#define YM_Data__0__PORT 2u
#define YM_Data__0__SHIFT 0u
#define YM_Data__1__INTTYPE CYREG_PICU2_INTTYPE1
#define YM_Data__1__MASK 0x02u
#define YM_Data__1__PC CYREG_PRT2_PC1
#define YM_Data__1__PORT 2u
#define YM_Data__1__SHIFT 1u
#define YM_Data__2__INTTYPE CYREG_PICU2_INTTYPE2
#define YM_Data__2__MASK 0x04u
#define YM_Data__2__PC CYREG_PRT2_PC2
#define YM_Data__2__PORT 2u
#define YM_Data__2__SHIFT 2u
#define YM_Data__3__INTTYPE CYREG_PICU2_INTTYPE3
#define YM_Data__3__MASK 0x08u
#define YM_Data__3__PC CYREG_PRT2_PC3
#define YM_Data__3__PORT 2u
#define YM_Data__3__SHIFT 3u
#define YM_Data__4__INTTYPE CYREG_PICU2_INTTYPE4
#define YM_Data__4__MASK 0x10u
#define YM_Data__4__PC CYREG_PRT2_PC4
#define YM_Data__4__PORT 2u
#define YM_Data__4__SHIFT 4u
#define YM_Data__5__INTTYPE CYREG_PICU2_INTTYPE5
#define YM_Data__5__MASK 0x20u
#define YM_Data__5__PC CYREG_PRT2_PC5
#define YM_Data__5__PORT 2u
#define YM_Data__5__SHIFT 5u
#define YM_Data__6__INTTYPE CYREG_PICU2_INTTYPE6
#define YM_Data__6__MASK 0x40u
#define YM_Data__6__PC CYREG_PRT2_PC6
#define YM_Data__6__PORT 2u
#define YM_Data__6__SHIFT 6u
#define YM_Data__7__INTTYPE CYREG_PICU2_INTTYPE7
#define YM_Data__7__MASK 0x80u
#define YM_Data__7__PC CYREG_PRT2_PC7
#define YM_Data__7__PORT 2u
#define YM_Data__7__SHIFT 7u
#define YM_Data__AG CYREG_PRT2_AG
#define YM_Data__AMUX CYREG_PRT2_AMUX
#define YM_Data__BIE CYREG_PRT2_BIE
#define YM_Data__BIT_MASK CYREG_PRT2_BIT_MASK
#define YM_Data__BYP CYREG_PRT2_BYP
#define YM_Data__CTL CYREG_PRT2_CTL
#define YM_Data__DM0 CYREG_PRT2_DM0
#define YM_Data__DM1 CYREG_PRT2_DM1
#define YM_Data__DM2 CYREG_PRT2_DM2
#define YM_Data__DR CYREG_PRT2_DR
#define YM_Data__INP_DIS CYREG_PRT2_INP_DIS
#define YM_Data__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define YM_Data__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define YM_Data__LCD_EN CYREG_PRT2_LCD_EN
#define YM_Data__MASK 0xFFu
#define YM_Data__PORT 2u
#define YM_Data__PRT CYREG_PRT2_PRT
#define YM_Data__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define YM_Data__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define YM_Data__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define YM_Data__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define YM_Data__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define YM_Data__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define YM_Data__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define YM_Data__PS CYREG_PRT2_PS
#define YM_Data__SHIFT 0u
#define YM_Data__SLW CYREG_PRT2_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 46000000U
#define BCLK__BUS_CLK__KHZ 46000U
#define BCLK__BUS_CLK__MHZ 46U
#define CY_PROJECT_NAME "VGMPlayer_v0.7"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000008u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP 
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000007u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
