;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; SN_WE
SN_WE__0__INTTYPE EQU CYREG_PICU0_INTTYPE7
SN_WE__0__MASK EQU 0x80
SN_WE__0__PC EQU CYREG_PRT0_PC7
SN_WE__0__PORT EQU 0
SN_WE__0__SHIFT EQU 7
SN_WE__AG EQU CYREG_PRT0_AG
SN_WE__AMUX EQU CYREG_PRT0_AMUX
SN_WE__BIE EQU CYREG_PRT0_BIE
SN_WE__BIT_MASK EQU CYREG_PRT0_BIT_MASK
SN_WE__BYP EQU CYREG_PRT0_BYP
SN_WE__CTL EQU CYREG_PRT0_CTL
SN_WE__DM0 EQU CYREG_PRT0_DM0
SN_WE__DM1 EQU CYREG_PRT0_DM1
SN_WE__DM2 EQU CYREG_PRT0_DM2
SN_WE__DR EQU CYREG_PRT0_DR
SN_WE__INP_DIS EQU CYREG_PRT0_INP_DIS
SN_WE__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
SN_WE__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
SN_WE__LCD_EN EQU CYREG_PRT0_LCD_EN
SN_WE__MASK EQU 0x80
SN_WE__PORT EQU 0
SN_WE__PRT EQU CYREG_PRT0_PRT
SN_WE__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
SN_WE__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
SN_WE__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
SN_WE__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
SN_WE__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
SN_WE__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
SN_WE__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
SN_WE__PS EQU CYREG_PRT0_PS
SN_WE__SHIFT EQU 7
SN_WE__SLW EQU CYREG_PRT0_SLW

; YM_A0
YM_A0__0__INTTYPE EQU CYREG_PICU12_INTTYPE0
YM_A0__0__MASK EQU 0x01
YM_A0__0__PC EQU CYREG_PRT12_PC0
YM_A0__0__PORT EQU 12
YM_A0__0__SHIFT EQU 0
YM_A0__AG EQU CYREG_PRT12_AG
YM_A0__BIE EQU CYREG_PRT12_BIE
YM_A0__BIT_MASK EQU CYREG_PRT12_BIT_MASK
YM_A0__BYP EQU CYREG_PRT12_BYP
YM_A0__DM0 EQU CYREG_PRT12_DM0
YM_A0__DM1 EQU CYREG_PRT12_DM1
YM_A0__DM2 EQU CYREG_PRT12_DM2
YM_A0__DR EQU CYREG_PRT12_DR
YM_A0__INP_DIS EQU CYREG_PRT12_INP_DIS
YM_A0__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
YM_A0__MASK EQU 0x01
YM_A0__PORT EQU 12
YM_A0__PRT EQU CYREG_PRT12_PRT
YM_A0__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
YM_A0__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
YM_A0__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
YM_A0__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
YM_A0__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
YM_A0__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
YM_A0__PS EQU CYREG_PRT12_PS
YM_A0__SHIFT EQU 0
YM_A0__SIO_CFG EQU CYREG_PRT12_SIO_CFG
YM_A0__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
YM_A0__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
YM_A0__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
YM_A0__SLW EQU CYREG_PRT12_SLW

; YM_A1
YM_A1__0__INTTYPE EQU CYREG_PICU15_INTTYPE0
YM_A1__0__MASK EQU 0x01
YM_A1__0__PC EQU CYREG_IO_PC_PRT15_PC0
YM_A1__0__PORT EQU 15
YM_A1__0__SHIFT EQU 0
YM_A1__AG EQU CYREG_PRT15_AG
YM_A1__AMUX EQU CYREG_PRT15_AMUX
YM_A1__BIE EQU CYREG_PRT15_BIE
YM_A1__BIT_MASK EQU CYREG_PRT15_BIT_MASK
YM_A1__BYP EQU CYREG_PRT15_BYP
YM_A1__CTL EQU CYREG_PRT15_CTL
YM_A1__DM0 EQU CYREG_PRT15_DM0
YM_A1__DM1 EQU CYREG_PRT15_DM1
YM_A1__DM2 EQU CYREG_PRT15_DM2
YM_A1__DR EQU CYREG_PRT15_DR
YM_A1__INP_DIS EQU CYREG_PRT15_INP_DIS
YM_A1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
YM_A1__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
YM_A1__LCD_EN EQU CYREG_PRT15_LCD_EN
YM_A1__MASK EQU 0x01
YM_A1__PORT EQU 15
YM_A1__PRT EQU CYREG_PRT15_PRT
YM_A1__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
YM_A1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
YM_A1__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
YM_A1__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
YM_A1__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
YM_A1__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
YM_A1__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
YM_A1__PS EQU CYREG_PRT15_PS
YM_A1__SHIFT EQU 0
YM_A1__SLW EQU CYREG_PRT15_SLW

; YM_CS
YM_CS__0__INTTYPE EQU CYREG_PICU12_INTTYPE3
YM_CS__0__MASK EQU 0x08
YM_CS__0__PC EQU CYREG_PRT12_PC3
YM_CS__0__PORT EQU 12
YM_CS__0__SHIFT EQU 3
YM_CS__AG EQU CYREG_PRT12_AG
YM_CS__BIE EQU CYREG_PRT12_BIE
YM_CS__BIT_MASK EQU CYREG_PRT12_BIT_MASK
YM_CS__BYP EQU CYREG_PRT12_BYP
YM_CS__DM0 EQU CYREG_PRT12_DM0
YM_CS__DM1 EQU CYREG_PRT12_DM1
YM_CS__DM2 EQU CYREG_PRT12_DM2
YM_CS__DR EQU CYREG_PRT12_DR
YM_CS__INP_DIS EQU CYREG_PRT12_INP_DIS
YM_CS__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
YM_CS__MASK EQU 0x08
YM_CS__PORT EQU 12
YM_CS__PRT EQU CYREG_PRT12_PRT
YM_CS__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
YM_CS__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
YM_CS__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
YM_CS__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
YM_CS__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
YM_CS__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
YM_CS__PS EQU CYREG_PRT12_PS
YM_CS__SHIFT EQU 3
YM_CS__SIO_CFG EQU CYREG_PRT12_SIO_CFG
YM_CS__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
YM_CS__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
YM_CS__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
YM_CS__SLW EQU CYREG_PRT12_SLW

; YM_IC
YM_IC__0__INTTYPE EQU CYREG_PICU12_INTTYPE4
YM_IC__0__MASK EQU 0x10
YM_IC__0__PC EQU CYREG_PRT12_PC4
YM_IC__0__PORT EQU 12
YM_IC__0__SHIFT EQU 4
YM_IC__AG EQU CYREG_PRT12_AG
YM_IC__BIE EQU CYREG_PRT12_BIE
YM_IC__BIT_MASK EQU CYREG_PRT12_BIT_MASK
YM_IC__BYP EQU CYREG_PRT12_BYP
YM_IC__DM0 EQU CYREG_PRT12_DM0
YM_IC__DM1 EQU CYREG_PRT12_DM1
YM_IC__DM2 EQU CYREG_PRT12_DM2
YM_IC__DR EQU CYREG_PRT12_DR
YM_IC__INP_DIS EQU CYREG_PRT12_INP_DIS
YM_IC__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
YM_IC__MASK EQU 0x10
YM_IC__PORT EQU 12
YM_IC__PRT EQU CYREG_PRT12_PRT
YM_IC__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
YM_IC__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
YM_IC__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
YM_IC__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
YM_IC__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
YM_IC__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
YM_IC__PS EQU CYREG_PRT12_PS
YM_IC__SHIFT EQU 4
YM_IC__SIO_CFG EQU CYREG_PRT12_SIO_CFG
YM_IC__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
YM_IC__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
YM_IC__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
YM_IC__SLW EQU CYREG_PRT12_SLW

; YM_RD
YM_RD__0__INTTYPE EQU CYREG_PICU15_INTTYPE1
YM_RD__0__MASK EQU 0x02
YM_RD__0__PC EQU CYREG_IO_PC_PRT15_PC1
YM_RD__0__PORT EQU 15
YM_RD__0__SHIFT EQU 1
YM_RD__AG EQU CYREG_PRT15_AG
YM_RD__AMUX EQU CYREG_PRT15_AMUX
YM_RD__BIE EQU CYREG_PRT15_BIE
YM_RD__BIT_MASK EQU CYREG_PRT15_BIT_MASK
YM_RD__BYP EQU CYREG_PRT15_BYP
YM_RD__CTL EQU CYREG_PRT15_CTL
YM_RD__DM0 EQU CYREG_PRT15_DM0
YM_RD__DM1 EQU CYREG_PRT15_DM1
YM_RD__DM2 EQU CYREG_PRT15_DM2
YM_RD__DR EQU CYREG_PRT15_DR
YM_RD__INP_DIS EQU CYREG_PRT15_INP_DIS
YM_RD__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
YM_RD__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
YM_RD__LCD_EN EQU CYREG_PRT15_LCD_EN
YM_RD__MASK EQU 0x02
YM_RD__PORT EQU 15
YM_RD__PRT EQU CYREG_PRT15_PRT
YM_RD__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
YM_RD__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
YM_RD__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
YM_RD__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
YM_RD__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
YM_RD__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
YM_RD__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
YM_RD__PS EQU CYREG_PRT15_PS
YM_RD__SHIFT EQU 1
YM_RD__SLW EQU CYREG_PRT15_SLW

; YM_WR
YM_WR__0__INTTYPE EQU CYREG_PICU12_INTTYPE2
YM_WR__0__MASK EQU 0x04
YM_WR__0__PC EQU CYREG_PRT12_PC2
YM_WR__0__PORT EQU 12
YM_WR__0__SHIFT EQU 2
YM_WR__AG EQU CYREG_PRT12_AG
YM_WR__BIE EQU CYREG_PRT12_BIE
YM_WR__BIT_MASK EQU CYREG_PRT12_BIT_MASK
YM_WR__BYP EQU CYREG_PRT12_BYP
YM_WR__DM0 EQU CYREG_PRT12_DM0
YM_WR__DM1 EQU CYREG_PRT12_DM1
YM_WR__DM2 EQU CYREG_PRT12_DM2
YM_WR__DR EQU CYREG_PRT12_DR
YM_WR__INP_DIS EQU CYREG_PRT12_INP_DIS
YM_WR__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
YM_WR__MASK EQU 0x04
YM_WR__PORT EQU 12
YM_WR__PRT EQU CYREG_PRT12_PRT
YM_WR__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
YM_WR__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
YM_WR__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
YM_WR__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
YM_WR__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
YM_WR__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
YM_WR__PS EQU CYREG_PRT12_PS
YM_WR__SHIFT EQU 2
YM_WR__SIO_CFG EQU CYREG_PRT12_SIO_CFG
YM_WR__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
YM_WR__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
YM_WR__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
YM_WR__SLW EQU CYREG_PRT12_SLW

; isr_1
isr_1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_1__INTC_MASK EQU 0x01
isr_1__INTC_NUMBER EQU 0
isr_1__INTC_PRIOR_NUM EQU 0
isr_1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
isr_1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; SN_CLK
SN_CLK__0__INTTYPE EQU CYREG_PICU0_INTTYPE6
SN_CLK__0__MASK EQU 0x40
SN_CLK__0__PC EQU CYREG_PRT0_PC6
SN_CLK__0__PORT EQU 0
SN_CLK__0__SHIFT EQU 6
SN_CLK__AG EQU CYREG_PRT0_AG
SN_CLK__AMUX EQU CYREG_PRT0_AMUX
SN_CLK__BIE EQU CYREG_PRT0_BIE
SN_CLK__BIT_MASK EQU CYREG_PRT0_BIT_MASK
SN_CLK__BYP EQU CYREG_PRT0_BYP
SN_CLK__CTL EQU CYREG_PRT0_CTL
SN_CLK__DM0 EQU CYREG_PRT0_DM0
SN_CLK__DM1 EQU CYREG_PRT0_DM1
SN_CLK__DM2 EQU CYREG_PRT0_DM2
SN_CLK__DR EQU CYREG_PRT0_DR
SN_CLK__INP_DIS EQU CYREG_PRT0_INP_DIS
SN_CLK__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
SN_CLK__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
SN_CLK__LCD_EN EQU CYREG_PRT0_LCD_EN
SN_CLK__MASK EQU 0x40
SN_CLK__PORT EQU 0
SN_CLK__PRT EQU CYREG_PRT0_PRT
SN_CLK__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
SN_CLK__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
SN_CLK__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
SN_CLK__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
SN_CLK__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
SN_CLK__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
SN_CLK__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
SN_CLK__PS EQU CYREG_PRT0_PS
SN_CLK__SHIFT EQU 6
SN_CLK__SLW EQU CYREG_PRT0_SLW

; YM_CLK
YM_CLK__0__INTTYPE EQU CYREG_PICU3_INTTYPE7
YM_CLK__0__MASK EQU 0x80
YM_CLK__0__PC EQU CYREG_PRT3_PC7
YM_CLK__0__PORT EQU 3
YM_CLK__0__SHIFT EQU 7
YM_CLK__AG EQU CYREG_PRT3_AG
YM_CLK__AMUX EQU CYREG_PRT3_AMUX
YM_CLK__BIE EQU CYREG_PRT3_BIE
YM_CLK__BIT_MASK EQU CYREG_PRT3_BIT_MASK
YM_CLK__BYP EQU CYREG_PRT3_BYP
YM_CLK__CTL EQU CYREG_PRT3_CTL
YM_CLK__DM0 EQU CYREG_PRT3_DM0
YM_CLK__DM1 EQU CYREG_PRT3_DM1
YM_CLK__DM2 EQU CYREG_PRT3_DM2
YM_CLK__DR EQU CYREG_PRT3_DR
YM_CLK__INP_DIS EQU CYREG_PRT3_INP_DIS
YM_CLK__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
YM_CLK__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
YM_CLK__LCD_EN EQU CYREG_PRT3_LCD_EN
YM_CLK__MASK EQU 0x80
YM_CLK__PORT EQU 3
YM_CLK__PRT EQU CYREG_PRT3_PRT
YM_CLK__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
YM_CLK__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
YM_CLK__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
YM_CLK__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
YM_CLK__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
YM_CLK__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
YM_CLK__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
YM_CLK__PS EQU CYREG_PRT3_PS
YM_CLK__SHIFT EQU 7
YM_CLK__SLW EQU CYREG_PRT3_SLW

; Clock_1
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x00
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x01
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x01

; Clock_2
Clock_2__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
Clock_2__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
Clock_2__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
Clock_2__CFG2_SRC_SEL_MASK EQU 0x07
Clock_2__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
Clock_2__CFG3_PHASE_DLY_MASK EQU 0x0F
Clock_2__INDEX EQU 0x00
Clock_2__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
Clock_2__PM_ACT_MSK EQU 0x01
Clock_2__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
Clock_2__PM_STBY_MSK EQU 0x01

; Clock_3
Clock_3__CFG0 EQU CYREG_CLKDIST_ACFG1_CFG0
Clock_3__CFG1 EQU CYREG_CLKDIST_ACFG1_CFG1
Clock_3__CFG2 EQU CYREG_CLKDIST_ACFG1_CFG2
Clock_3__CFG2_SRC_SEL_MASK EQU 0x07
Clock_3__CFG3 EQU CYREG_CLKDIST_ACFG1_CFG3
Clock_3__CFG3_PHASE_DLY_MASK EQU 0x0F
Clock_3__INDEX EQU 0x01
Clock_3__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
Clock_3__PM_ACT_MSK EQU 0x02
Clock_3__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
Clock_3__PM_STBY_MSK EQU 0x02

; YM_Data
YM_Data__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
YM_Data__0__MASK EQU 0x01
YM_Data__0__PC EQU CYREG_PRT2_PC0
YM_Data__0__PORT EQU 2
YM_Data__0__SHIFT EQU 0
YM_Data__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
YM_Data__1__MASK EQU 0x02
YM_Data__1__PC EQU CYREG_PRT2_PC1
YM_Data__1__PORT EQU 2
YM_Data__1__SHIFT EQU 1
YM_Data__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
YM_Data__2__MASK EQU 0x04
YM_Data__2__PC EQU CYREG_PRT2_PC2
YM_Data__2__PORT EQU 2
YM_Data__2__SHIFT EQU 2
YM_Data__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
YM_Data__3__MASK EQU 0x08
YM_Data__3__PC EQU CYREG_PRT2_PC3
YM_Data__3__PORT EQU 2
YM_Data__3__SHIFT EQU 3
YM_Data__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
YM_Data__4__MASK EQU 0x10
YM_Data__4__PC EQU CYREG_PRT2_PC4
YM_Data__4__PORT EQU 2
YM_Data__4__SHIFT EQU 4
YM_Data__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
YM_Data__5__MASK EQU 0x20
YM_Data__5__PC EQU CYREG_PRT2_PC5
YM_Data__5__PORT EQU 2
YM_Data__5__SHIFT EQU 5
YM_Data__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
YM_Data__6__MASK EQU 0x40
YM_Data__6__PC EQU CYREG_PRT2_PC6
YM_Data__6__PORT EQU 2
YM_Data__6__SHIFT EQU 6
YM_Data__7__INTTYPE EQU CYREG_PICU2_INTTYPE7
YM_Data__7__MASK EQU 0x80
YM_Data__7__PC EQU CYREG_PRT2_PC7
YM_Data__7__PORT EQU 2
YM_Data__7__SHIFT EQU 7
YM_Data__AG EQU CYREG_PRT2_AG
YM_Data__AMUX EQU CYREG_PRT2_AMUX
YM_Data__BIE EQU CYREG_PRT2_BIE
YM_Data__BIT_MASK EQU CYREG_PRT2_BIT_MASK
YM_Data__BYP EQU CYREG_PRT2_BYP
YM_Data__CTL EQU CYREG_PRT2_CTL
YM_Data__DM0 EQU CYREG_PRT2_DM0
YM_Data__DM1 EQU CYREG_PRT2_DM1
YM_Data__DM2 EQU CYREG_PRT2_DM2
YM_Data__DR EQU CYREG_PRT2_DR
YM_Data__INP_DIS EQU CYREG_PRT2_INP_DIS
YM_Data__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
YM_Data__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
YM_Data__LCD_EN EQU CYREG_PRT2_LCD_EN
YM_Data__MASK EQU 0xFF
YM_Data__PORT EQU 2
YM_Data__PRT EQU CYREG_PRT2_PRT
YM_Data__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
YM_Data__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
YM_Data__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
YM_Data__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
YM_Data__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
YM_Data__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
YM_Data__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
YM_Data__PS EQU CYREG_PRT2_PS
YM_Data__SHIFT EQU 0
YM_Data__SLW EQU CYREG_PRT2_SLW

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 46000000
BCLK__BUS_CLK__KHZ EQU 46000
BCLK__BUS_CLK__MHZ EQU 46
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000001
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
