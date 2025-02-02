;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.4
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar_trm.inc

/* RX */
RX__0__DR EQU CYREG_GPIO_PRT0_DR
RX__0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
RX__0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
RX__0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
RX__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
RX__0__HSIOM_MASK EQU 0x0000000F
RX__0__HSIOM_SHIFT EQU 0
RX__0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
RX__0__INTR EQU CYREG_GPIO_PRT0_INTR
RX__0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
RX__0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
RX__0__MASK EQU 0x01
RX__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
RX__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
RX__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
RX__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
RX__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
RX__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
RX__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
RX__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
RX__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
RX__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
RX__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
RX__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
RX__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
RX__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
RX__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
RX__0__PC EQU CYREG_GPIO_PRT0_PC
RX__0__PC2 EQU CYREG_GPIO_PRT0_PC2
RX__0__PORT EQU 0
RX__0__PS EQU CYREG_GPIO_PRT0_PS
RX__0__SHIFT EQU 0
RX__DR EQU CYREG_GPIO_PRT0_DR
RX__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
RX__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
RX__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
RX__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
RX__INTR EQU CYREG_GPIO_PRT0_INTR
RX__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
RX__INTSTAT EQU CYREG_GPIO_PRT0_INTR
RX__MASK EQU 0x01
RX__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
RX__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
RX__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
RX__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
RX__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
RX__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
RX__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
RX__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
RX__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
RX__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
RX__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
RX__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
RX__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
RX__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
RX__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
RX__PC EQU CYREG_GPIO_PRT0_PC
RX__PC2 EQU CYREG_GPIO_PRT0_PC2
RX__PORT EQU 0
RX__PS EQU CYREG_GPIO_PRT0_PS
RX__SHIFT EQU 0

/* TX */
TX__0__DR EQU CYREG_GPIO_PRT0_DR
TX__0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
TX__0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
TX__0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
TX__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
TX__0__HSIOM_MASK EQU 0x000000F0
TX__0__HSIOM_SHIFT EQU 4
TX__0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
TX__0__INTR EQU CYREG_GPIO_PRT0_INTR
TX__0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
TX__0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
TX__0__MASK EQU 0x02
TX__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
TX__0__OUT_SEL_SHIFT EQU 2
TX__0__OUT_SEL_VAL EQU -1
TX__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
TX__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
TX__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
TX__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
TX__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
TX__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
TX__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
TX__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
TX__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
TX__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
TX__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
TX__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
TX__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
TX__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
TX__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
TX__0__PC EQU CYREG_GPIO_PRT0_PC
TX__0__PC2 EQU CYREG_GPIO_PRT0_PC2
TX__0__PORT EQU 0
TX__0__PS EQU CYREG_GPIO_PRT0_PS
TX__0__SHIFT EQU 1
TX__DR EQU CYREG_GPIO_PRT0_DR
TX__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
TX__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
TX__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
TX__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
TX__INTR EQU CYREG_GPIO_PRT0_INTR
TX__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
TX__INTSTAT EQU CYREG_GPIO_PRT0_INTR
TX__MASK EQU 0x02
TX__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
TX__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
TX__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
TX__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
TX__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
TX__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
TX__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
TX__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
TX__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
TX__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
TX__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
TX__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
TX__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
TX__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
TX__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
TX__PC EQU CYREG_GPIO_PRT0_PC
TX__PC2 EQU CYREG_GPIO_PRT0_PC2
TX__PORT EQU 0
TX__PS EQU CYREG_GPIO_PRT0_PS
TX__SHIFT EQU 1

/* CAN */
CAN_CanIP__BUFFER_STATUS EQU CYREG_CAN1_BUFFER_STATUS
CAN_CanIP__CAN_RX0_ACR EQU CYREG_CAN1_CAN_RX0_ACR
CAN_CanIP__CAN_RX0_ACR_DATA EQU CYREG_CAN1_CAN_RX0_ACR_DATA
CAN_CanIP__CAN_RX0_AMR EQU CYREG_CAN1_CAN_RX0_AMR
CAN_CanIP__CAN_RX0_AMR_DATA EQU CYREG_CAN1_CAN_RX0_AMR_DATA
CAN_CanIP__CAN_RX0_CONTROL EQU CYREG_CAN1_CAN_RX0_CONTROL
CAN_CanIP__CAN_RX0_DATA_HIGH EQU CYREG_CAN1_CAN_RX0_DATA_HIGH
CAN_CanIP__CAN_RX0_DATA_LOW EQU CYREG_CAN1_CAN_RX0_DATA_LOW
CAN_CanIP__CAN_RX0_ID EQU CYREG_CAN1_CAN_RX0_ID
CAN_CanIP__CAN_RX1_ACR EQU CYREG_CAN1_CAN_RX1_ACR
CAN_CanIP__CAN_RX1_ACR_DATA EQU CYREG_CAN1_CAN_RX1_ACR_DATA
CAN_CanIP__CAN_RX1_AMR EQU CYREG_CAN1_CAN_RX1_AMR
CAN_CanIP__CAN_RX1_AMR_DATA EQU CYREG_CAN1_CAN_RX1_AMR_DATA
CAN_CanIP__CAN_RX1_CONTROL EQU CYREG_CAN1_CAN_RX1_CONTROL
CAN_CanIP__CAN_RX1_DATA_HIGH EQU CYREG_CAN1_CAN_RX1_DATA_HIGH
CAN_CanIP__CAN_RX1_DATA_LOW EQU CYREG_CAN1_CAN_RX1_DATA_LOW
CAN_CanIP__CAN_RX1_ID EQU CYREG_CAN1_CAN_RX1_ID
CAN_CanIP__CAN_RX10_ACR EQU CYREG_CAN1_CAN_RX10_ACR
CAN_CanIP__CAN_RX10_ACR_DATA EQU CYREG_CAN1_CAN_RX10_ACR_DATA
CAN_CanIP__CAN_RX10_AMR EQU CYREG_CAN1_CAN_RX10_AMR
CAN_CanIP__CAN_RX10_AMR_DATA EQU CYREG_CAN1_CAN_RX10_AMR_DATA
CAN_CanIP__CAN_RX10_CONTROL EQU CYREG_CAN1_CAN_RX10_CONTROL
CAN_CanIP__CAN_RX10_DATA_HIGH EQU CYREG_CAN1_CAN_RX10_DATA_HIGH
CAN_CanIP__CAN_RX10_DATA_LOW EQU CYREG_CAN1_CAN_RX10_DATA_LOW
CAN_CanIP__CAN_RX10_ID EQU CYREG_CAN1_CAN_RX10_ID
CAN_CanIP__CAN_RX11_ACR EQU CYREG_CAN1_CAN_RX11_ACR
CAN_CanIP__CAN_RX11_ACR_DATA EQU CYREG_CAN1_CAN_RX11_ACR_DATA
CAN_CanIP__CAN_RX11_AMR EQU CYREG_CAN1_CAN_RX11_AMR
CAN_CanIP__CAN_RX11_AMR_DATA EQU CYREG_CAN1_CAN_RX11_AMR_DATA
CAN_CanIP__CAN_RX11_CONTROL EQU CYREG_CAN1_CAN_RX11_CONTROL
CAN_CanIP__CAN_RX11_DATA_HIGH EQU CYREG_CAN1_CAN_RX11_DATA_HIGH
CAN_CanIP__CAN_RX11_DATA_LOW EQU CYREG_CAN1_CAN_RX11_DATA_LOW
CAN_CanIP__CAN_RX11_ID EQU CYREG_CAN1_CAN_RX11_ID
CAN_CanIP__CAN_RX12_ACR EQU CYREG_CAN1_CAN_RX12_ACR
CAN_CanIP__CAN_RX12_ACR_DATA EQU CYREG_CAN1_CAN_RX12_ACR_DATA
CAN_CanIP__CAN_RX12_AMR EQU CYREG_CAN1_CAN_RX12_AMR
CAN_CanIP__CAN_RX12_AMR_DATA EQU CYREG_CAN1_CAN_RX12_AMR_DATA
CAN_CanIP__CAN_RX12_CONTROL EQU CYREG_CAN1_CAN_RX12_CONTROL
CAN_CanIP__CAN_RX12_DATA_HIGH EQU CYREG_CAN1_CAN_RX12_DATA_HIGH
CAN_CanIP__CAN_RX12_DATA_LOW EQU CYREG_CAN1_CAN_RX12_DATA_LOW
CAN_CanIP__CAN_RX12_ID EQU CYREG_CAN1_CAN_RX12_ID
CAN_CanIP__CAN_RX13_ACR EQU CYREG_CAN1_CAN_RX13_ACR
CAN_CanIP__CAN_RX13_ACR_DATA EQU CYREG_CAN1_CAN_RX13_ACR_DATA
CAN_CanIP__CAN_RX13_AMR EQU CYREG_CAN1_CAN_RX13_AMR
CAN_CanIP__CAN_RX13_AMR_DATA EQU CYREG_CAN1_CAN_RX13_AMR_DATA
CAN_CanIP__CAN_RX13_CONTROL EQU CYREG_CAN1_CAN_RX13_CONTROL
CAN_CanIP__CAN_RX13_DATA_HIGH EQU CYREG_CAN1_CAN_RX13_DATA_HIGH
CAN_CanIP__CAN_RX13_DATA_LOW EQU CYREG_CAN1_CAN_RX13_DATA_LOW
CAN_CanIP__CAN_RX13_ID EQU CYREG_CAN1_CAN_RX13_ID
CAN_CanIP__CAN_RX14_ACR EQU CYREG_CAN1_CAN_RX14_ACR
CAN_CanIP__CAN_RX14_ACR_DATA EQU CYREG_CAN1_CAN_RX14_ACR_DATA
CAN_CanIP__CAN_RX14_AMR EQU CYREG_CAN1_CAN_RX14_AMR
CAN_CanIP__CAN_RX14_AMR_DATA EQU CYREG_CAN1_CAN_RX14_AMR_DATA
CAN_CanIP__CAN_RX14_CONTROL EQU CYREG_CAN1_CAN_RX14_CONTROL
CAN_CanIP__CAN_RX14_DATA_HIGH EQU CYREG_CAN1_CAN_RX14_DATA_HIGH
CAN_CanIP__CAN_RX14_DATA_LOW EQU CYREG_CAN1_CAN_RX14_DATA_LOW
CAN_CanIP__CAN_RX14_ID EQU CYREG_CAN1_CAN_RX14_ID
CAN_CanIP__CAN_RX15_ACR EQU CYREG_CAN1_CAN_RX15_ACR
CAN_CanIP__CAN_RX15_ACR_DATA EQU CYREG_CAN1_CAN_RX15_ACR_DATA
CAN_CanIP__CAN_RX15_AMR EQU CYREG_CAN1_CAN_RX15_AMR
CAN_CanIP__CAN_RX15_AMR_DATA EQU CYREG_CAN1_CAN_RX15_AMR_DATA
CAN_CanIP__CAN_RX15_CONTROL EQU CYREG_CAN1_CAN_RX15_CONTROL
CAN_CanIP__CAN_RX15_DATA_HIGH EQU CYREG_CAN1_CAN_RX15_DATA_HIGH
CAN_CanIP__CAN_RX15_DATA_LOW EQU CYREG_CAN1_CAN_RX15_DATA_LOW
CAN_CanIP__CAN_RX15_ID EQU CYREG_CAN1_CAN_RX15_ID
CAN_CanIP__CAN_RX2_ACR EQU CYREG_CAN1_CAN_RX2_ACR
CAN_CanIP__CAN_RX2_ACR_DATA EQU CYREG_CAN1_CAN_RX2_ACR_DATA
CAN_CanIP__CAN_RX2_AMR EQU CYREG_CAN1_CAN_RX2_AMR
CAN_CanIP__CAN_RX2_AMR_DATA EQU CYREG_CAN1_CAN_RX2_AMR_DATA
CAN_CanIP__CAN_RX2_CONTROL EQU CYREG_CAN1_CAN_RX2_CONTROL
CAN_CanIP__CAN_RX2_DATA_HIGH EQU CYREG_CAN1_CAN_RX2_DATA_HIGH
CAN_CanIP__CAN_RX2_DATA_LOW EQU CYREG_CAN1_CAN_RX2_DATA_LOW
CAN_CanIP__CAN_RX2_ID EQU CYREG_CAN1_CAN_RX2_ID
CAN_CanIP__CAN_RX3_ACR EQU CYREG_CAN1_CAN_RX3_ACR
CAN_CanIP__CAN_RX3_ACR_DATA EQU CYREG_CAN1_CAN_RX3_ACR_DATA
CAN_CanIP__CAN_RX3_AMR EQU CYREG_CAN1_CAN_RX3_AMR
CAN_CanIP__CAN_RX3_AMR_DATA EQU CYREG_CAN1_CAN_RX3_AMR_DATA
CAN_CanIP__CAN_RX3_CONTROL EQU CYREG_CAN1_CAN_RX3_CONTROL
CAN_CanIP__CAN_RX3_DATA_HIGH EQU CYREG_CAN1_CAN_RX3_DATA_HIGH
CAN_CanIP__CAN_RX3_DATA_LOW EQU CYREG_CAN1_CAN_RX3_DATA_LOW
CAN_CanIP__CAN_RX3_ID EQU CYREG_CAN1_CAN_RX3_ID
CAN_CanIP__CAN_RX4_ACR EQU CYREG_CAN1_CAN_RX4_ACR
CAN_CanIP__CAN_RX4_ACR_DATA EQU CYREG_CAN1_CAN_RX4_ACR_DATA
CAN_CanIP__CAN_RX4_AMR EQU CYREG_CAN1_CAN_RX4_AMR
CAN_CanIP__CAN_RX4_AMR_DATA EQU CYREG_CAN1_CAN_RX4_AMR_DATA
CAN_CanIP__CAN_RX4_CONTROL EQU CYREG_CAN1_CAN_RX4_CONTROL
CAN_CanIP__CAN_RX4_DATA_HIGH EQU CYREG_CAN1_CAN_RX4_DATA_HIGH
CAN_CanIP__CAN_RX4_DATA_LOW EQU CYREG_CAN1_CAN_RX4_DATA_LOW
CAN_CanIP__CAN_RX4_ID EQU CYREG_CAN1_CAN_RX4_ID
CAN_CanIP__CAN_RX5_ACR EQU CYREG_CAN1_CAN_RX5_ACR
CAN_CanIP__CAN_RX5_ACR_DATA EQU CYREG_CAN1_CAN_RX5_ACR_DATA
CAN_CanIP__CAN_RX5_AMR EQU CYREG_CAN1_CAN_RX5_AMR
CAN_CanIP__CAN_RX5_AMR_DATA EQU CYREG_CAN1_CAN_RX5_AMR_DATA
CAN_CanIP__CAN_RX5_CONTROL EQU CYREG_CAN1_CAN_RX5_CONTROL
CAN_CanIP__CAN_RX5_DATA_HIGH EQU CYREG_CAN1_CAN_RX5_DATA_HIGH
CAN_CanIP__CAN_RX5_DATA_LOW EQU CYREG_CAN1_CAN_RX5_DATA_LOW
CAN_CanIP__CAN_RX5_ID EQU CYREG_CAN1_CAN_RX5_ID
CAN_CanIP__CAN_RX6_ACR EQU CYREG_CAN1_CAN_RX6_ACR
CAN_CanIP__CAN_RX6_ACR_DATA EQU CYREG_CAN1_CAN_RX6_ACR_DATA
CAN_CanIP__CAN_RX6_AMR EQU CYREG_CAN1_CAN_RX6_AMR
CAN_CanIP__CAN_RX6_AMR_DATA EQU CYREG_CAN1_CAN_RX6_AMR_DATA
CAN_CanIP__CAN_RX6_CONTROL EQU CYREG_CAN1_CAN_RX6_CONTROL
CAN_CanIP__CAN_RX6_DATA_HIGH EQU CYREG_CAN1_CAN_RX6_DATA_HIGH
CAN_CanIP__CAN_RX6_DATA_LOW EQU CYREG_CAN1_CAN_RX6_DATA_LOW
CAN_CanIP__CAN_RX6_ID EQU CYREG_CAN1_CAN_RX6_ID
CAN_CanIP__CAN_RX7_ACR EQU CYREG_CAN1_CAN_RX7_ACR
CAN_CanIP__CAN_RX7_ACR_DATA EQU CYREG_CAN1_CAN_RX7_ACR_DATA
CAN_CanIP__CAN_RX7_AMR EQU CYREG_CAN1_CAN_RX7_AMR
CAN_CanIP__CAN_RX7_AMR_DATA EQU CYREG_CAN1_CAN_RX7_AMR_DATA
CAN_CanIP__CAN_RX7_CONTROL EQU CYREG_CAN1_CAN_RX7_CONTROL
CAN_CanIP__CAN_RX7_DATA_HIGH EQU CYREG_CAN1_CAN_RX7_DATA_HIGH
CAN_CanIP__CAN_RX7_DATA_LOW EQU CYREG_CAN1_CAN_RX7_DATA_LOW
CAN_CanIP__CAN_RX7_ID EQU CYREG_CAN1_CAN_RX7_ID
CAN_CanIP__CAN_RX8_ACR EQU CYREG_CAN1_CAN_RX8_ACR
CAN_CanIP__CAN_RX8_ACR_DATA EQU CYREG_CAN1_CAN_RX8_ACR_DATA
CAN_CanIP__CAN_RX8_AMR EQU CYREG_CAN1_CAN_RX8_AMR
CAN_CanIP__CAN_RX8_AMR_DATA EQU CYREG_CAN1_CAN_RX8_AMR_DATA
CAN_CanIP__CAN_RX8_CONTROL EQU CYREG_CAN1_CAN_RX8_CONTROL
CAN_CanIP__CAN_RX8_DATA_HIGH EQU CYREG_CAN1_CAN_RX8_DATA_HIGH
CAN_CanIP__CAN_RX8_DATA_LOW EQU CYREG_CAN1_CAN_RX8_DATA_LOW
CAN_CanIP__CAN_RX8_ID EQU CYREG_CAN1_CAN_RX8_ID
CAN_CanIP__CAN_RX9_ACR EQU CYREG_CAN1_CAN_RX9_ACR
CAN_CanIP__CAN_RX9_ACR_DATA EQU CYREG_CAN1_CAN_RX9_ACR_DATA
CAN_CanIP__CAN_RX9_AMR EQU CYREG_CAN1_CAN_RX9_AMR
CAN_CanIP__CAN_RX9_AMR_DATA EQU CYREG_CAN1_CAN_RX9_AMR_DATA
CAN_CanIP__CAN_RX9_CONTROL EQU CYREG_CAN1_CAN_RX9_CONTROL
CAN_CanIP__CAN_RX9_DATA_HIGH EQU CYREG_CAN1_CAN_RX9_DATA_HIGH
CAN_CanIP__CAN_RX9_DATA_LOW EQU CYREG_CAN1_CAN_RX9_DATA_LOW
CAN_CanIP__CAN_RX9_ID EQU CYREG_CAN1_CAN_RX9_ID
CAN_CanIP__CAN_TX0_CONTROL EQU CYREG_CAN1_CAN_TX0_CONTROL
CAN_CanIP__CAN_TX0_DATA_HIGH EQU CYREG_CAN1_CAN_TX0_DATA_HIGH
CAN_CanIP__CAN_TX0_DATA_LOW EQU CYREG_CAN1_CAN_TX0_DATA_LOW
CAN_CanIP__CAN_TX0_ID EQU CYREG_CAN1_CAN_TX0_ID
CAN_CanIP__CAN_TX1_CONTROL EQU CYREG_CAN1_CAN_TX1_CONTROL
CAN_CanIP__CAN_TX1_DATA_HIGH EQU CYREG_CAN1_CAN_TX1_DATA_HIGH
CAN_CanIP__CAN_TX1_DATA_LOW EQU CYREG_CAN1_CAN_TX1_DATA_LOW
CAN_CanIP__CAN_TX1_ID EQU CYREG_CAN1_CAN_TX1_ID
CAN_CanIP__CAN_TX2_CONTROL EQU CYREG_CAN1_CAN_TX2_CONTROL
CAN_CanIP__CAN_TX2_DATA_HIGH EQU CYREG_CAN1_CAN_TX2_DATA_HIGH
CAN_CanIP__CAN_TX2_DATA_LOW EQU CYREG_CAN1_CAN_TX2_DATA_LOW
CAN_CanIP__CAN_TX2_ID EQU CYREG_CAN1_CAN_TX2_ID
CAN_CanIP__CAN_TX3_CONTROL EQU CYREG_CAN1_CAN_TX3_CONTROL
CAN_CanIP__CAN_TX3_DATA_HIGH EQU CYREG_CAN1_CAN_TX3_DATA_HIGH
CAN_CanIP__CAN_TX3_DATA_LOW EQU CYREG_CAN1_CAN_TX3_DATA_LOW
CAN_CanIP__CAN_TX3_ID EQU CYREG_CAN1_CAN_TX3_ID
CAN_CanIP__CAN_TX4_CONTROL EQU CYREG_CAN1_CAN_TX4_CONTROL
CAN_CanIP__CAN_TX4_DATA_HIGH EQU CYREG_CAN1_CAN_TX4_DATA_HIGH
CAN_CanIP__CAN_TX4_DATA_LOW EQU CYREG_CAN1_CAN_TX4_DATA_LOW
CAN_CanIP__CAN_TX4_ID EQU CYREG_CAN1_CAN_TX4_ID
CAN_CanIP__CAN_TX5_CONTROL EQU CYREG_CAN1_CAN_TX5_CONTROL
CAN_CanIP__CAN_TX5_DATA_HIGH EQU CYREG_CAN1_CAN_TX5_DATA_HIGH
CAN_CanIP__CAN_TX5_DATA_LOW EQU CYREG_CAN1_CAN_TX5_DATA_LOW
CAN_CanIP__CAN_TX5_ID EQU CYREG_CAN1_CAN_TX5_ID
CAN_CanIP__CAN_TX6_CONTROL EQU CYREG_CAN1_CAN_TX6_CONTROL
CAN_CanIP__CAN_TX6_DATA_HIGH EQU CYREG_CAN1_CAN_TX6_DATA_HIGH
CAN_CanIP__CAN_TX6_DATA_LOW EQU CYREG_CAN1_CAN_TX6_DATA_LOW
CAN_CanIP__CAN_TX6_ID EQU CYREG_CAN1_CAN_TX6_ID
CAN_CanIP__CAN_TX7_CONTROL EQU CYREG_CAN1_CAN_TX7_CONTROL
CAN_CanIP__CAN_TX7_DATA_HIGH EQU CYREG_CAN1_CAN_TX7_DATA_HIGH
CAN_CanIP__CAN_TX7_DATA_LOW EQU CYREG_CAN1_CAN_TX7_DATA_LOW
CAN_CanIP__CAN_TX7_ID EQU CYREG_CAN1_CAN_TX7_ID
CAN_CanIP__CNTL EQU CYREG_CAN1_CNTL
CAN_CanIP__COMMAND EQU CYREG_CAN1_COMMAND
CAN_CanIP__CONFIG EQU CYREG_CAN1_CONFIG
CAN_CanIP__ECR EQU CYREG_CAN1_ECR
CAN_CanIP__ERROR_STATUS EQU CYREG_CAN1_ERROR_STATUS
CAN_CanIP__INT_EBL EQU CYREG_CAN1_INT_EBL
CAN_CanIP__INT_STATUS EQU CYREG_CAN1_INT_STATUS
CAN_CanIP__INTR_CAN EQU CYREG_CAN1_INTR_CAN
CAN_CanIP__INTR_CAN_MASK EQU CYREG_CAN1_INTR_CAN_MASK
CAN_CanIP__INTR_CAN_MASKED EQU CYREG_CAN1_INTR_CAN_MASKED
CAN_CanIP__INTR_CAN_SET EQU CYREG_CAN1_INTR_CAN_SET
CAN_CanIP__TTCAN_CAPTURE EQU CYREG_CAN1_TTCAN_CAPTURE
CAN_CanIP__TTCAN_COMPARE EQU CYREG_CAN1_TTCAN_COMPARE
CAN_CanIP__TTCAN_COUNTER EQU CYREG_CAN1_TTCAN_COUNTER
CAN_CanIP__TTCAN_TIMING EQU CYREG_CAN1_TTCAN_TIMING
CAN_HFCLK__DIV_ID EQU 0x00000040
CAN_HFCLK__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL0
CAN_HFCLK__PA_DIV_ID EQU 0x000000FF
CAN_isr__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
CAN_isr__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
CAN_isr__INTC_MASK EQU 0x10000000
CAN_isr__INTC_NUMBER EQU 28
CAN_isr__INTC_PRIOR_MASK EQU 0xC0
CAN_isr__INTC_PRIOR_NUM EQU 3
CAN_isr__INTC_PRIOR_REG EQU CYREG_CM0_IPR7
CAN_isr__INTC_SET_EN_REG EQU CYREG_CM0_ISER
CAN_isr__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

/* UART */
UART_rx__0__DR EQU CYREG_GPIO_PRT7_DR
UART_rx__0__DR_CLR EQU CYREG_GPIO_PRT7_DR_CLR
UART_rx__0__DR_INV EQU CYREG_GPIO_PRT7_DR_INV
UART_rx__0__DR_SET EQU CYREG_GPIO_PRT7_DR_SET
UART_rx__0__HSIOM EQU CYREG_HSIOM_PORT_SEL7
UART_rx__0__HSIOM_GPIO EQU 0
UART_rx__0__HSIOM_I2C EQU 14
UART_rx__0__HSIOM_I2C_SCL EQU 14
UART_rx__0__HSIOM_MASK EQU 0x0000000F
UART_rx__0__HSIOM_SHIFT EQU 0
UART_rx__0__HSIOM_SPI EQU 15
UART_rx__0__HSIOM_SPI_MOSI EQU 15
UART_rx__0__HSIOM_UART EQU 9
UART_rx__0__HSIOM_UART_RX EQU 9
UART_rx__0__INTCFG EQU CYREG_GPIO_PRT7_INTR_CFG
UART_rx__0__INTR EQU CYREG_GPIO_PRT7_INTR
UART_rx__0__INTR_CFG EQU CYREG_GPIO_PRT7_INTR_CFG
UART_rx__0__INTSTAT EQU CYREG_GPIO_PRT7_INTR
UART_rx__0__MASK EQU 0x01
UART_rx__0__PC EQU CYREG_GPIO_PRT7_PC
UART_rx__0__PC2 EQU CYREG_GPIO_PRT7_PC2
UART_rx__0__PORT EQU 7
UART_rx__0__PS EQU CYREG_GPIO_PRT7_PS
UART_rx__0__SHIFT EQU 0
UART_rx__DR EQU CYREG_GPIO_PRT7_DR
UART_rx__DR_CLR EQU CYREG_GPIO_PRT7_DR_CLR
UART_rx__DR_INV EQU CYREG_GPIO_PRT7_DR_INV
UART_rx__DR_SET EQU CYREG_GPIO_PRT7_DR_SET
UART_rx__INTCFG EQU CYREG_GPIO_PRT7_INTR_CFG
UART_rx__INTR EQU CYREG_GPIO_PRT7_INTR
UART_rx__INTR_CFG EQU CYREG_GPIO_PRT7_INTR_CFG
UART_rx__INTSTAT EQU CYREG_GPIO_PRT7_INTR
UART_rx__MASK EQU 0x01
UART_rx__PC EQU CYREG_GPIO_PRT7_PC
UART_rx__PC2 EQU CYREG_GPIO_PRT7_PC2
UART_rx__PORT EQU 7
UART_rx__PS EQU CYREG_GPIO_PRT7_PS
UART_rx__SHIFT EQU 0
UART_SCB__CTRL EQU CYREG_SCB3_CTRL
UART_SCB__EZ_DATA0 EQU CYREG_SCB3_EZ_DATA0
UART_SCB__EZ_DATA1 EQU CYREG_SCB3_EZ_DATA1
UART_SCB__EZ_DATA10 EQU CYREG_SCB3_EZ_DATA10
UART_SCB__EZ_DATA11 EQU CYREG_SCB3_EZ_DATA11
UART_SCB__EZ_DATA12 EQU CYREG_SCB3_EZ_DATA12
UART_SCB__EZ_DATA13 EQU CYREG_SCB3_EZ_DATA13
UART_SCB__EZ_DATA14 EQU CYREG_SCB3_EZ_DATA14
UART_SCB__EZ_DATA15 EQU CYREG_SCB3_EZ_DATA15
UART_SCB__EZ_DATA16 EQU CYREG_SCB3_EZ_DATA16
UART_SCB__EZ_DATA17 EQU CYREG_SCB3_EZ_DATA17
UART_SCB__EZ_DATA18 EQU CYREG_SCB3_EZ_DATA18
UART_SCB__EZ_DATA19 EQU CYREG_SCB3_EZ_DATA19
UART_SCB__EZ_DATA2 EQU CYREG_SCB3_EZ_DATA2
UART_SCB__EZ_DATA20 EQU CYREG_SCB3_EZ_DATA20
UART_SCB__EZ_DATA21 EQU CYREG_SCB3_EZ_DATA21
UART_SCB__EZ_DATA22 EQU CYREG_SCB3_EZ_DATA22
UART_SCB__EZ_DATA23 EQU CYREG_SCB3_EZ_DATA23
UART_SCB__EZ_DATA24 EQU CYREG_SCB3_EZ_DATA24
UART_SCB__EZ_DATA25 EQU CYREG_SCB3_EZ_DATA25
UART_SCB__EZ_DATA26 EQU CYREG_SCB3_EZ_DATA26
UART_SCB__EZ_DATA27 EQU CYREG_SCB3_EZ_DATA27
UART_SCB__EZ_DATA28 EQU CYREG_SCB3_EZ_DATA28
UART_SCB__EZ_DATA29 EQU CYREG_SCB3_EZ_DATA29
UART_SCB__EZ_DATA3 EQU CYREG_SCB3_EZ_DATA3
UART_SCB__EZ_DATA30 EQU CYREG_SCB3_EZ_DATA30
UART_SCB__EZ_DATA31 EQU CYREG_SCB3_EZ_DATA31
UART_SCB__EZ_DATA4 EQU CYREG_SCB3_EZ_DATA4
UART_SCB__EZ_DATA5 EQU CYREG_SCB3_EZ_DATA5
UART_SCB__EZ_DATA6 EQU CYREG_SCB3_EZ_DATA6
UART_SCB__EZ_DATA7 EQU CYREG_SCB3_EZ_DATA7
UART_SCB__EZ_DATA8 EQU CYREG_SCB3_EZ_DATA8
UART_SCB__EZ_DATA9 EQU CYREG_SCB3_EZ_DATA9
UART_SCB__I2C_CFG EQU CYREG_SCB3_I2C_CFG
UART_SCB__I2C_CTRL EQU CYREG_SCB3_I2C_CTRL
UART_SCB__I2C_M_CMD EQU CYREG_SCB3_I2C_M_CMD
UART_SCB__I2C_S_CMD EQU CYREG_SCB3_I2C_S_CMD
UART_SCB__I2C_STATUS EQU CYREG_SCB3_I2C_STATUS
UART_SCB__INTR_CAUSE EQU CYREG_SCB3_INTR_CAUSE
UART_SCB__INTR_I2C_EC EQU CYREG_SCB3_INTR_I2C_EC
UART_SCB__INTR_I2C_EC_MASK EQU CYREG_SCB3_INTR_I2C_EC_MASK
UART_SCB__INTR_I2C_EC_MASKED EQU CYREG_SCB3_INTR_I2C_EC_MASKED
UART_SCB__INTR_M EQU CYREG_SCB3_INTR_M
UART_SCB__INTR_M_MASK EQU CYREG_SCB3_INTR_M_MASK
UART_SCB__INTR_M_MASKED EQU CYREG_SCB3_INTR_M_MASKED
UART_SCB__INTR_M_SET EQU CYREG_SCB3_INTR_M_SET
UART_SCB__INTR_RX EQU CYREG_SCB3_INTR_RX
UART_SCB__INTR_RX_MASK EQU CYREG_SCB3_INTR_RX_MASK
UART_SCB__INTR_RX_MASKED EQU CYREG_SCB3_INTR_RX_MASKED
UART_SCB__INTR_RX_SET EQU CYREG_SCB3_INTR_RX_SET
UART_SCB__INTR_S EQU CYREG_SCB3_INTR_S
UART_SCB__INTR_S_MASK EQU CYREG_SCB3_INTR_S_MASK
UART_SCB__INTR_S_MASKED EQU CYREG_SCB3_INTR_S_MASKED
UART_SCB__INTR_S_SET EQU CYREG_SCB3_INTR_S_SET
UART_SCB__INTR_SPI_EC EQU CYREG_SCB3_INTR_SPI_EC
UART_SCB__INTR_SPI_EC_MASK EQU CYREG_SCB3_INTR_SPI_EC_MASK
UART_SCB__INTR_SPI_EC_MASKED EQU CYREG_SCB3_INTR_SPI_EC_MASKED
UART_SCB__INTR_TX EQU CYREG_SCB3_INTR_TX
UART_SCB__INTR_TX_MASK EQU CYREG_SCB3_INTR_TX_MASK
UART_SCB__INTR_TX_MASKED EQU CYREG_SCB3_INTR_TX_MASKED
UART_SCB__INTR_TX_SET EQU CYREG_SCB3_INTR_TX_SET
UART_SCB__RX_CTRL EQU CYREG_SCB3_RX_CTRL
UART_SCB__RX_FIFO_CTRL EQU CYREG_SCB3_RX_FIFO_CTRL
UART_SCB__RX_FIFO_RD EQU CYREG_SCB3_RX_FIFO_RD
UART_SCB__RX_FIFO_RD_SILENT EQU CYREG_SCB3_RX_FIFO_RD_SILENT
UART_SCB__RX_FIFO_STATUS EQU CYREG_SCB3_RX_FIFO_STATUS
UART_SCB__RX_MATCH EQU CYREG_SCB3_RX_MATCH
UART_SCB__SPI_CTRL EQU CYREG_SCB3_SPI_CTRL
UART_SCB__SPI_STATUS EQU CYREG_SCB3_SPI_STATUS
UART_SCB__SS0_POSISTION EQU 0
UART_SCB__SS1_POSISTION EQU 1
UART_SCB__SS2_POSISTION EQU 2
UART_SCB__SS3_POSISTION EQU 3
UART_SCB__STATUS EQU CYREG_SCB3_STATUS
UART_SCB__TX_CTRL EQU CYREG_SCB3_TX_CTRL
UART_SCB__TX_FIFO_CTRL EQU CYREG_SCB3_TX_FIFO_CTRL
UART_SCB__TX_FIFO_STATUS EQU CYREG_SCB3_TX_FIFO_STATUS
UART_SCB__TX_FIFO_WR EQU CYREG_SCB3_TX_FIFO_WR
UART_SCB__UART_CTRL EQU CYREG_SCB3_UART_CTRL
UART_SCB__UART_FLOW_CTRL EQU CYREG_SCB3_UART_FLOW_CTRL
UART_SCB__UART_RX_CTRL EQU CYREG_SCB3_UART_RX_CTRL
UART_SCB__UART_RX_STATUS EQU CYREG_SCB3_UART_RX_STATUS
UART_SCB__UART_TX_CTRL EQU CYREG_SCB3_UART_TX_CTRL
UART_SCBCLK__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL5
UART_SCBCLK__DIV_ID EQU 0x00000041
UART_SCBCLK__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL1
UART_SCBCLK__PA_DIV_ID EQU 0x000000FF
UART_tx__0__DR EQU CYREG_GPIO_PRT7_DR
UART_tx__0__DR_CLR EQU CYREG_GPIO_PRT7_DR_CLR
UART_tx__0__DR_INV EQU CYREG_GPIO_PRT7_DR_INV
UART_tx__0__DR_SET EQU CYREG_GPIO_PRT7_DR_SET
UART_tx__0__HSIOM EQU CYREG_HSIOM_PORT_SEL7
UART_tx__0__HSIOM_GPIO EQU 0
UART_tx__0__HSIOM_I2C EQU 14
UART_tx__0__HSIOM_I2C_SDA EQU 14
UART_tx__0__HSIOM_MASK EQU 0x000000F0
UART_tx__0__HSIOM_SHIFT EQU 4
UART_tx__0__HSIOM_SPI EQU 15
UART_tx__0__HSIOM_SPI_MISO EQU 15
UART_tx__0__HSIOM_UART EQU 9
UART_tx__0__HSIOM_UART_TX EQU 9
UART_tx__0__INTCFG EQU CYREG_GPIO_PRT7_INTR_CFG
UART_tx__0__INTR EQU CYREG_GPIO_PRT7_INTR
UART_tx__0__INTR_CFG EQU CYREG_GPIO_PRT7_INTR_CFG
UART_tx__0__INTSTAT EQU CYREG_GPIO_PRT7_INTR
UART_tx__0__MASK EQU 0x02
UART_tx__0__PC EQU CYREG_GPIO_PRT7_PC
UART_tx__0__PC2 EQU CYREG_GPIO_PRT7_PC2
UART_tx__0__PORT EQU 7
UART_tx__0__PS EQU CYREG_GPIO_PRT7_PS
UART_tx__0__SHIFT EQU 1
UART_tx__DR EQU CYREG_GPIO_PRT7_DR
UART_tx__DR_CLR EQU CYREG_GPIO_PRT7_DR_CLR
UART_tx__DR_INV EQU CYREG_GPIO_PRT7_DR_INV
UART_tx__DR_SET EQU CYREG_GPIO_PRT7_DR_SET
UART_tx__INTCFG EQU CYREG_GPIO_PRT7_INTR_CFG
UART_tx__INTR EQU CYREG_GPIO_PRT7_INTR
UART_tx__INTR_CFG EQU CYREG_GPIO_PRT7_INTR_CFG
UART_tx__INTSTAT EQU CYREG_GPIO_PRT7_INTR
UART_tx__MASK EQU 0x02
UART_tx__PC EQU CYREG_GPIO_PRT7_PC
UART_tx__PC2 EQU CYREG_GPIO_PRT7_PC2
UART_tx__PORT EQU 7
UART_tx__PS EQU CYREG_GPIO_PRT7_PS
UART_tx__SHIFT EQU 1

/* Miscellaneous */
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 26
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
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x112D11A1
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 26
CYDEV_CHIP_MEMBER_4AA EQU 25
CYDEV_CHIP_MEMBER_4AB EQU 30
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4AD EQU 15
CYDEV_CHIP_MEMBER_4AE EQU 16
CYDEV_CHIP_MEMBER_4D EQU 20
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 27
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 24
CYDEV_CHIP_MEMBER_4I EQU 32
CYDEV_CHIP_MEMBER_4J EQU 21
CYDEV_CHIP_MEMBER_4K EQU 22
CYDEV_CHIP_MEMBER_4L EQU 31
CYDEV_CHIP_MEMBER_4M EQU 29
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 28
CYDEV_CHIP_MEMBER_4Q EQU 17
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 23
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 18
CYDEV_CHIP_MEMBER_4Z EQU 19
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 33
CYDEV_CHIP_MEMBER_FM3 EQU 37
CYDEV_CHIP_MEMBER_FM4 EQU 38
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 34
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 35
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 36
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4M
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
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AD_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AE_PRODUCTION EQU 0
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
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
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
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4M_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 10
CYDEV_DFT_SELECT_CLK1 EQU 11
CYDEV_DMA_CHANNELS_AVAILABLE EQU 8
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_INTR_NUMBER_DMA EQU 13
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_VDDIO_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_m0s8can_VERSION EQU 1
CYIPBLOCK_m0s8cpussv2_VERSION EQU 1
CYIPBLOCK_m0s8csd_VERSION EQU 1
CYIPBLOCK_m0s8ioss_VERSION EQU 1
CYIPBLOCK_m0s8lcd_VERSION EQU 2
CYIPBLOCK_m0s8lpcomp_VERSION EQU 2
CYIPBLOCK_m0s8peri_VERSION EQU 1
CYIPBLOCK_m0s8scb_VERSION EQU 2
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 2
CYIPBLOCK_m0s8udbif_VERSION EQU 1
CYIPBLOCK_m0s8wco_VERSION EQU 1
CYIPBLOCK_s8pass4al_VERSION EQU 1
DMA_CHANNELS_USED__MASK EQU 0
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
