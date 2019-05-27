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
#include "cydevice_trm.h"

/* nss */
#define nss__0__DR CYREG_GPIO_PRT4_DR
#define nss__0__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define nss__0__DR_INV CYREG_GPIO_PRT4_DR_INV
#define nss__0__DR_SET CYREG_GPIO_PRT4_DR_SET
#define nss__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define nss__0__HSIOM_MASK 0x0000F000u
#define nss__0__HSIOM_SHIFT 12u
#define nss__0__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define nss__0__INTR CYREG_GPIO_PRT4_INTR
#define nss__0__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define nss__0__INTSTAT CYREG_GPIO_PRT4_INTR
#define nss__0__MASK 0x08u
#define nss__0__PC CYREG_GPIO_PRT4_PC
#define nss__0__PC2 CYREG_GPIO_PRT4_PC2
#define nss__0__PORT 4u
#define nss__0__PS CYREG_GPIO_PRT4_PS
#define nss__0__SHIFT 3u
#define nss__DR CYREG_GPIO_PRT4_DR
#define nss__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define nss__DR_INV CYREG_GPIO_PRT4_DR_INV
#define nss__DR_SET CYREG_GPIO_PRT4_DR_SET
#define nss__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define nss__INTR CYREG_GPIO_PRT4_INTR
#define nss__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define nss__INTSTAT CYREG_GPIO_PRT4_INTR
#define nss__MASK 0x08u
#define nss__PC CYREG_GPIO_PRT4_PC
#define nss__PC2 CYREG_GPIO_PRT4_PC2
#define nss__PORT 4u
#define nss__PS CYREG_GPIO_PRT4_PS
#define nss__SHIFT 3u

/* dio1 */
#define dio1__0__DR CYREG_GPIO_PRT4_DR
#define dio1__0__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define dio1__0__DR_INV CYREG_GPIO_PRT4_DR_INV
#define dio1__0__DR_SET CYREG_GPIO_PRT4_DR_SET
#define dio1__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define dio1__0__HSIOM_MASK 0x0F000000u
#define dio1__0__HSIOM_SHIFT 24u
#define dio1__0__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define dio1__0__INTR CYREG_GPIO_PRT4_INTR
#define dio1__0__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define dio1__0__INTSTAT CYREG_GPIO_PRT4_INTR
#define dio1__0__MASK 0x40u
#define dio1__0__PC CYREG_GPIO_PRT4_PC
#define dio1__0__PC2 CYREG_GPIO_PRT4_PC2
#define dio1__0__PORT 4u
#define dio1__0__PS CYREG_GPIO_PRT4_PS
#define dio1__0__SHIFT 6u
#define dio1__DR CYREG_GPIO_PRT4_DR
#define dio1__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define dio1__DR_INV CYREG_GPIO_PRT4_DR_INV
#define dio1__DR_SET CYREG_GPIO_PRT4_DR_SET
#define dio1__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define dio1__INTR CYREG_GPIO_PRT4_INTR
#define dio1__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define dio1__INTSTAT CYREG_GPIO_PRT4_INTR
#define dio1__MASK 0x40u
#define dio1__PC CYREG_GPIO_PRT4_PC
#define dio1__PC2 CYREG_GPIO_PRT4_PC2
#define dio1__PORT 4u
#define dio1__PS CYREG_GPIO_PRT4_PS
#define dio1__SHIFT 6u
#define dio1__SNAP CYREG_GPIO_PRT4_INTR

/* SPI_1 */
#define SPI_1_miso_m__0__DR CYREG_GPIO_PRT4_DR
#define SPI_1_miso_m__0__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define SPI_1_miso_m__0__DR_INV CYREG_GPIO_PRT4_DR_INV
#define SPI_1_miso_m__0__DR_SET CYREG_GPIO_PRT4_DR_SET
#define SPI_1_miso_m__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define SPI_1_miso_m__0__HSIOM_GPIO 0u
#define SPI_1_miso_m__0__HSIOM_I2C 14u
#define SPI_1_miso_m__0__HSIOM_I2C_SDA 14u
#define SPI_1_miso_m__0__HSIOM_MASK 0x000000F0u
#define SPI_1_miso_m__0__HSIOM_SHIFT 4u
#define SPI_1_miso_m__0__HSIOM_SPI 15u
#define SPI_1_miso_m__0__HSIOM_SPI_MISO 15u
#define SPI_1_miso_m__0__HSIOM_UART 9u
#define SPI_1_miso_m__0__HSIOM_UART_TX 9u
#define SPI_1_miso_m__0__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_miso_m__0__INTR CYREG_GPIO_PRT4_INTR
#define SPI_1_miso_m__0__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_miso_m__0__INTSTAT CYREG_GPIO_PRT4_INTR
#define SPI_1_miso_m__0__MASK 0x02u
#define SPI_1_miso_m__0__PC CYREG_GPIO_PRT4_PC
#define SPI_1_miso_m__0__PC2 CYREG_GPIO_PRT4_PC2
#define SPI_1_miso_m__0__PORT 4u
#define SPI_1_miso_m__0__PS CYREG_GPIO_PRT4_PS
#define SPI_1_miso_m__0__SHIFT 1u
#define SPI_1_miso_m__DR CYREG_GPIO_PRT4_DR
#define SPI_1_miso_m__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define SPI_1_miso_m__DR_INV CYREG_GPIO_PRT4_DR_INV
#define SPI_1_miso_m__DR_SET CYREG_GPIO_PRT4_DR_SET
#define SPI_1_miso_m__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_miso_m__INTR CYREG_GPIO_PRT4_INTR
#define SPI_1_miso_m__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_miso_m__INTSTAT CYREG_GPIO_PRT4_INTR
#define SPI_1_miso_m__MASK 0x02u
#define SPI_1_miso_m__PC CYREG_GPIO_PRT4_PC
#define SPI_1_miso_m__PC2 CYREG_GPIO_PRT4_PC2
#define SPI_1_miso_m__PORT 4u
#define SPI_1_miso_m__PS CYREG_GPIO_PRT4_PS
#define SPI_1_miso_m__SHIFT 1u
#define SPI_1_mosi_m__0__DR CYREG_GPIO_PRT4_DR
#define SPI_1_mosi_m__0__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define SPI_1_mosi_m__0__DR_INV CYREG_GPIO_PRT4_DR_INV
#define SPI_1_mosi_m__0__DR_SET CYREG_GPIO_PRT4_DR_SET
#define SPI_1_mosi_m__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define SPI_1_mosi_m__0__HSIOM_GPIO 0u
#define SPI_1_mosi_m__0__HSIOM_I2C 14u
#define SPI_1_mosi_m__0__HSIOM_I2C_SCL 14u
#define SPI_1_mosi_m__0__HSIOM_MASK 0x0000000Fu
#define SPI_1_mosi_m__0__HSIOM_SHIFT 0u
#define SPI_1_mosi_m__0__HSIOM_SPI 15u
#define SPI_1_mosi_m__0__HSIOM_SPI_MOSI 15u
#define SPI_1_mosi_m__0__HSIOM_UART 9u
#define SPI_1_mosi_m__0__HSIOM_UART_RX 9u
#define SPI_1_mosi_m__0__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_mosi_m__0__INTR CYREG_GPIO_PRT4_INTR
#define SPI_1_mosi_m__0__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_mosi_m__0__INTSTAT CYREG_GPIO_PRT4_INTR
#define SPI_1_mosi_m__0__MASK 0x01u
#define SPI_1_mosi_m__0__PC CYREG_GPIO_PRT4_PC
#define SPI_1_mosi_m__0__PC2 CYREG_GPIO_PRT4_PC2
#define SPI_1_mosi_m__0__PORT 4u
#define SPI_1_mosi_m__0__PS CYREG_GPIO_PRT4_PS
#define SPI_1_mosi_m__0__SHIFT 0u
#define SPI_1_mosi_m__DR CYREG_GPIO_PRT4_DR
#define SPI_1_mosi_m__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define SPI_1_mosi_m__DR_INV CYREG_GPIO_PRT4_DR_INV
#define SPI_1_mosi_m__DR_SET CYREG_GPIO_PRT4_DR_SET
#define SPI_1_mosi_m__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_mosi_m__INTR CYREG_GPIO_PRT4_INTR
#define SPI_1_mosi_m__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_mosi_m__INTSTAT CYREG_GPIO_PRT4_INTR
#define SPI_1_mosi_m__MASK 0x01u
#define SPI_1_mosi_m__PC CYREG_GPIO_PRT4_PC
#define SPI_1_mosi_m__PC2 CYREG_GPIO_PRT4_PC2
#define SPI_1_mosi_m__PORT 4u
#define SPI_1_mosi_m__PS CYREG_GPIO_PRT4_PS
#define SPI_1_mosi_m__SHIFT 0u
#define SPI_1_SCB__CTRL CYREG_SCB0_CTRL
#define SPI_1_SCB__EZ_DATA0 CYREG_SCB0_EZ_DATA0
#define SPI_1_SCB__EZ_DATA1 CYREG_SCB0_EZ_DATA1
#define SPI_1_SCB__EZ_DATA10 CYREG_SCB0_EZ_DATA10
#define SPI_1_SCB__EZ_DATA11 CYREG_SCB0_EZ_DATA11
#define SPI_1_SCB__EZ_DATA12 CYREG_SCB0_EZ_DATA12
#define SPI_1_SCB__EZ_DATA13 CYREG_SCB0_EZ_DATA13
#define SPI_1_SCB__EZ_DATA14 CYREG_SCB0_EZ_DATA14
#define SPI_1_SCB__EZ_DATA15 CYREG_SCB0_EZ_DATA15
#define SPI_1_SCB__EZ_DATA16 CYREG_SCB0_EZ_DATA16
#define SPI_1_SCB__EZ_DATA17 CYREG_SCB0_EZ_DATA17
#define SPI_1_SCB__EZ_DATA18 CYREG_SCB0_EZ_DATA18
#define SPI_1_SCB__EZ_DATA19 CYREG_SCB0_EZ_DATA19
#define SPI_1_SCB__EZ_DATA2 CYREG_SCB0_EZ_DATA2
#define SPI_1_SCB__EZ_DATA20 CYREG_SCB0_EZ_DATA20
#define SPI_1_SCB__EZ_DATA21 CYREG_SCB0_EZ_DATA21
#define SPI_1_SCB__EZ_DATA22 CYREG_SCB0_EZ_DATA22
#define SPI_1_SCB__EZ_DATA23 CYREG_SCB0_EZ_DATA23
#define SPI_1_SCB__EZ_DATA24 CYREG_SCB0_EZ_DATA24
#define SPI_1_SCB__EZ_DATA25 CYREG_SCB0_EZ_DATA25
#define SPI_1_SCB__EZ_DATA26 CYREG_SCB0_EZ_DATA26
#define SPI_1_SCB__EZ_DATA27 CYREG_SCB0_EZ_DATA27
#define SPI_1_SCB__EZ_DATA28 CYREG_SCB0_EZ_DATA28
#define SPI_1_SCB__EZ_DATA29 CYREG_SCB0_EZ_DATA29
#define SPI_1_SCB__EZ_DATA3 CYREG_SCB0_EZ_DATA3
#define SPI_1_SCB__EZ_DATA30 CYREG_SCB0_EZ_DATA30
#define SPI_1_SCB__EZ_DATA31 CYREG_SCB0_EZ_DATA31
#define SPI_1_SCB__EZ_DATA4 CYREG_SCB0_EZ_DATA4
#define SPI_1_SCB__EZ_DATA5 CYREG_SCB0_EZ_DATA5
#define SPI_1_SCB__EZ_DATA6 CYREG_SCB0_EZ_DATA6
#define SPI_1_SCB__EZ_DATA7 CYREG_SCB0_EZ_DATA7
#define SPI_1_SCB__EZ_DATA8 CYREG_SCB0_EZ_DATA8
#define SPI_1_SCB__EZ_DATA9 CYREG_SCB0_EZ_DATA9
#define SPI_1_SCB__I2C_CFG CYREG_SCB0_I2C_CFG
#define SPI_1_SCB__I2C_CTRL CYREG_SCB0_I2C_CTRL
#define SPI_1_SCB__I2C_M_CMD CYREG_SCB0_I2C_M_CMD
#define SPI_1_SCB__I2C_S_CMD CYREG_SCB0_I2C_S_CMD
#define SPI_1_SCB__I2C_STATUS CYREG_SCB0_I2C_STATUS
#define SPI_1_SCB__INTR_CAUSE CYREG_SCB0_INTR_CAUSE
#define SPI_1_SCB__INTR_I2C_EC CYREG_SCB0_INTR_I2C_EC
#define SPI_1_SCB__INTR_I2C_EC_MASK CYREG_SCB0_INTR_I2C_EC_MASK
#define SPI_1_SCB__INTR_I2C_EC_MASKED CYREG_SCB0_INTR_I2C_EC_MASKED
#define SPI_1_SCB__INTR_M CYREG_SCB0_INTR_M
#define SPI_1_SCB__INTR_M_MASK CYREG_SCB0_INTR_M_MASK
#define SPI_1_SCB__INTR_M_MASKED CYREG_SCB0_INTR_M_MASKED
#define SPI_1_SCB__INTR_M_SET CYREG_SCB0_INTR_M_SET
#define SPI_1_SCB__INTR_RX CYREG_SCB0_INTR_RX
#define SPI_1_SCB__INTR_RX_MASK CYREG_SCB0_INTR_RX_MASK
#define SPI_1_SCB__INTR_RX_MASKED CYREG_SCB0_INTR_RX_MASKED
#define SPI_1_SCB__INTR_RX_SET CYREG_SCB0_INTR_RX_SET
#define SPI_1_SCB__INTR_S CYREG_SCB0_INTR_S
#define SPI_1_SCB__INTR_S_MASK CYREG_SCB0_INTR_S_MASK
#define SPI_1_SCB__INTR_S_MASKED CYREG_SCB0_INTR_S_MASKED
#define SPI_1_SCB__INTR_S_SET CYREG_SCB0_INTR_S_SET
#define SPI_1_SCB__INTR_SPI_EC CYREG_SCB0_INTR_SPI_EC
#define SPI_1_SCB__INTR_SPI_EC_MASK CYREG_SCB0_INTR_SPI_EC_MASK
#define SPI_1_SCB__INTR_SPI_EC_MASKED CYREG_SCB0_INTR_SPI_EC_MASKED
#define SPI_1_SCB__INTR_TX CYREG_SCB0_INTR_TX
#define SPI_1_SCB__INTR_TX_MASK CYREG_SCB0_INTR_TX_MASK
#define SPI_1_SCB__INTR_TX_MASKED CYREG_SCB0_INTR_TX_MASKED
#define SPI_1_SCB__INTR_TX_SET CYREG_SCB0_INTR_TX_SET
#define SPI_1_SCB__RX_CTRL CYREG_SCB0_RX_CTRL
#define SPI_1_SCB__RX_FIFO_CTRL CYREG_SCB0_RX_FIFO_CTRL
#define SPI_1_SCB__RX_FIFO_RD CYREG_SCB0_RX_FIFO_RD
#define SPI_1_SCB__RX_FIFO_RD_SILENT CYREG_SCB0_RX_FIFO_RD_SILENT
#define SPI_1_SCB__RX_FIFO_STATUS CYREG_SCB0_RX_FIFO_STATUS
#define SPI_1_SCB__RX_MATCH CYREG_SCB0_RX_MATCH
#define SPI_1_SCB__SPI_CTRL CYREG_SCB0_SPI_CTRL
#define SPI_1_SCB__SPI_STATUS CYREG_SCB0_SPI_STATUS
#define SPI_1_SCB__SS0_POSISTION 0u
#define SPI_1_SCB__SS1_POSISTION 1u
#define SPI_1_SCB__SS2_POSISTION 2u
#define SPI_1_SCB__SS3_POSISTION 3u
#define SPI_1_SCB__STATUS CYREG_SCB0_STATUS
#define SPI_1_SCB__TX_CTRL CYREG_SCB0_TX_CTRL
#define SPI_1_SCB__TX_FIFO_CTRL CYREG_SCB0_TX_FIFO_CTRL
#define SPI_1_SCB__TX_FIFO_STATUS CYREG_SCB0_TX_FIFO_STATUS
#define SPI_1_SCB__TX_FIFO_WR CYREG_SCB0_TX_FIFO_WR
#define SPI_1_SCB__UART_CTRL CYREG_SCB0_UART_CTRL
#define SPI_1_SCB__UART_FLOW_CTRL CYREG_SCB0_UART_FLOW_CTRL
#define SPI_1_SCB__UART_RX_CTRL CYREG_SCB0_UART_RX_CTRL
#define SPI_1_SCB__UART_RX_STATUS CYREG_SCB0_UART_RX_STATUS
#define SPI_1_SCB__UART_TX_CTRL CYREG_SCB0_UART_TX_CTRL
#define SPI_1_SCBCLK__CTRL_REGISTER CYREG_PERI_PCLK_CTL0
#define SPI_1_SCBCLK__DIV_ID 0x00000040u
#define SPI_1_SCBCLK__DIV_REGISTER CYREG_PERI_DIV_16_CTL0
#define SPI_1_SCBCLK__PA_DIV_ID 0x000000FFu
#define SPI_1_sclk_m__0__DR CYREG_GPIO_PRT4_DR
#define SPI_1_sclk_m__0__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define SPI_1_sclk_m__0__DR_INV CYREG_GPIO_PRT4_DR_INV
#define SPI_1_sclk_m__0__DR_SET CYREG_GPIO_PRT4_DR_SET
#define SPI_1_sclk_m__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define SPI_1_sclk_m__0__HSIOM_GPIO 0u
#define SPI_1_sclk_m__0__HSIOM_MASK 0x00000F00u
#define SPI_1_sclk_m__0__HSIOM_SHIFT 8u
#define SPI_1_sclk_m__0__HSIOM_SPI 15u
#define SPI_1_sclk_m__0__HSIOM_SPI_CLK 15u
#define SPI_1_sclk_m__0__HSIOM_UART 9u
#define SPI_1_sclk_m__0__HSIOM_UART_CTS 9u
#define SPI_1_sclk_m__0__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_sclk_m__0__INTR CYREG_GPIO_PRT4_INTR
#define SPI_1_sclk_m__0__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_sclk_m__0__INTSTAT CYREG_GPIO_PRT4_INTR
#define SPI_1_sclk_m__0__MASK 0x04u
#define SPI_1_sclk_m__0__PC CYREG_GPIO_PRT4_PC
#define SPI_1_sclk_m__0__PC2 CYREG_GPIO_PRT4_PC2
#define SPI_1_sclk_m__0__PORT 4u
#define SPI_1_sclk_m__0__PS CYREG_GPIO_PRT4_PS
#define SPI_1_sclk_m__0__SHIFT 2u
#define SPI_1_sclk_m__DR CYREG_GPIO_PRT4_DR
#define SPI_1_sclk_m__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define SPI_1_sclk_m__DR_INV CYREG_GPIO_PRT4_DR_INV
#define SPI_1_sclk_m__DR_SET CYREG_GPIO_PRT4_DR_SET
#define SPI_1_sclk_m__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_sclk_m__INTR CYREG_GPIO_PRT4_INTR
#define SPI_1_sclk_m__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_1_sclk_m__INTSTAT CYREG_GPIO_PRT4_INTR
#define SPI_1_sclk_m__MASK 0x04u
#define SPI_1_sclk_m__PC CYREG_GPIO_PRT4_PC
#define SPI_1_sclk_m__PC2 CYREG_GPIO_PRT4_PC2
#define SPI_1_sclk_m__PORT 4u
#define SPI_1_sclk_m__PS CYREG_GPIO_PRT4_PS
#define SPI_1_sclk_m__SHIFT 2u

/* UART_1 */
#define UART_1_rx_wake__0__DR CYREG_GPIO_PRT3_DR
#define UART_1_rx_wake__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define UART_1_rx_wake__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define UART_1_rx_wake__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define UART_1_rx_wake__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define UART_1_rx_wake__0__HSIOM_GPIO 0u
#define UART_1_rx_wake__0__HSIOM_I2C 14u
#define UART_1_rx_wake__0__HSIOM_I2C_SCL 14u
#define UART_1_rx_wake__0__HSIOM_MASK 0x0000000Fu
#define UART_1_rx_wake__0__HSIOM_SHIFT 0u
#define UART_1_rx_wake__0__HSIOM_SPI 15u
#define UART_1_rx_wake__0__HSIOM_SPI_MOSI 15u
#define UART_1_rx_wake__0__HSIOM_UART 9u
#define UART_1_rx_wake__0__HSIOM_UART_RX 9u
#define UART_1_rx_wake__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define UART_1_rx_wake__0__INTR CYREG_GPIO_PRT3_INTR
#define UART_1_rx_wake__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define UART_1_rx_wake__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define UART_1_rx_wake__0__MASK 0x01u
#define UART_1_rx_wake__0__PC CYREG_GPIO_PRT3_PC
#define UART_1_rx_wake__0__PC2 CYREG_GPIO_PRT3_PC2
#define UART_1_rx_wake__0__PORT 3u
#define UART_1_rx_wake__0__PS CYREG_GPIO_PRT3_PS
#define UART_1_rx_wake__0__SHIFT 0u
#define UART_1_rx_wake__DR CYREG_GPIO_PRT3_DR
#define UART_1_rx_wake__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define UART_1_rx_wake__DR_INV CYREG_GPIO_PRT3_DR_INV
#define UART_1_rx_wake__DR_SET CYREG_GPIO_PRT3_DR_SET
#define UART_1_rx_wake__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define UART_1_rx_wake__INTR CYREG_GPIO_PRT3_INTR
#define UART_1_rx_wake__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define UART_1_rx_wake__INTSTAT CYREG_GPIO_PRT3_INTR
#define UART_1_rx_wake__MASK 0x01u
#define UART_1_rx_wake__PC CYREG_GPIO_PRT3_PC
#define UART_1_rx_wake__PC2 CYREG_GPIO_PRT3_PC2
#define UART_1_rx_wake__PORT 3u
#define UART_1_rx_wake__PS CYREG_GPIO_PRT3_PS
#define UART_1_rx_wake__SHIFT 0u
#define UART_1_rx_wake__SNAP CYREG_GPIO_PRT3_INTR
#define UART_1_RX_WAKEUP_IRQ__INTC_CLR_EN_REG CYREG_CM0P_ICER
#define UART_1_RX_WAKEUP_IRQ__INTC_CLR_PD_REG CYREG_CM0P_ICPR
#define UART_1_RX_WAKEUP_IRQ__INTC_MASK 0x08u
#define UART_1_RX_WAKEUP_IRQ__INTC_NUMBER 3u
#define UART_1_RX_WAKEUP_IRQ__INTC_PRIOR_MASK 0xC0000000u
#define UART_1_RX_WAKEUP_IRQ__INTC_PRIOR_NUM 3u
#define UART_1_RX_WAKEUP_IRQ__INTC_PRIOR_REG CYREG_CM0P_IPR0
#define UART_1_RX_WAKEUP_IRQ__INTC_SET_EN_REG CYREG_CM0P_ISER
#define UART_1_RX_WAKEUP_IRQ__INTC_SET_PD_REG CYREG_CM0P_ISPR
#define UART_1_SCB__CTRL CYREG_SCB1_CTRL
#define UART_1_SCB__EZ_DATA0 CYREG_SCB1_EZ_DATA0
#define UART_1_SCB__EZ_DATA1 CYREG_SCB1_EZ_DATA1
#define UART_1_SCB__EZ_DATA10 CYREG_SCB1_EZ_DATA10
#define UART_1_SCB__EZ_DATA11 CYREG_SCB1_EZ_DATA11
#define UART_1_SCB__EZ_DATA12 CYREG_SCB1_EZ_DATA12
#define UART_1_SCB__EZ_DATA13 CYREG_SCB1_EZ_DATA13
#define UART_1_SCB__EZ_DATA14 CYREG_SCB1_EZ_DATA14
#define UART_1_SCB__EZ_DATA15 CYREG_SCB1_EZ_DATA15
#define UART_1_SCB__EZ_DATA16 CYREG_SCB1_EZ_DATA16
#define UART_1_SCB__EZ_DATA17 CYREG_SCB1_EZ_DATA17
#define UART_1_SCB__EZ_DATA18 CYREG_SCB1_EZ_DATA18
#define UART_1_SCB__EZ_DATA19 CYREG_SCB1_EZ_DATA19
#define UART_1_SCB__EZ_DATA2 CYREG_SCB1_EZ_DATA2
#define UART_1_SCB__EZ_DATA20 CYREG_SCB1_EZ_DATA20
#define UART_1_SCB__EZ_DATA21 CYREG_SCB1_EZ_DATA21
#define UART_1_SCB__EZ_DATA22 CYREG_SCB1_EZ_DATA22
#define UART_1_SCB__EZ_DATA23 CYREG_SCB1_EZ_DATA23
#define UART_1_SCB__EZ_DATA24 CYREG_SCB1_EZ_DATA24
#define UART_1_SCB__EZ_DATA25 CYREG_SCB1_EZ_DATA25
#define UART_1_SCB__EZ_DATA26 CYREG_SCB1_EZ_DATA26
#define UART_1_SCB__EZ_DATA27 CYREG_SCB1_EZ_DATA27
#define UART_1_SCB__EZ_DATA28 CYREG_SCB1_EZ_DATA28
#define UART_1_SCB__EZ_DATA29 CYREG_SCB1_EZ_DATA29
#define UART_1_SCB__EZ_DATA3 CYREG_SCB1_EZ_DATA3
#define UART_1_SCB__EZ_DATA30 CYREG_SCB1_EZ_DATA30
#define UART_1_SCB__EZ_DATA31 CYREG_SCB1_EZ_DATA31
#define UART_1_SCB__EZ_DATA4 CYREG_SCB1_EZ_DATA4
#define UART_1_SCB__EZ_DATA5 CYREG_SCB1_EZ_DATA5
#define UART_1_SCB__EZ_DATA6 CYREG_SCB1_EZ_DATA6
#define UART_1_SCB__EZ_DATA7 CYREG_SCB1_EZ_DATA7
#define UART_1_SCB__EZ_DATA8 CYREG_SCB1_EZ_DATA8
#define UART_1_SCB__EZ_DATA9 CYREG_SCB1_EZ_DATA9
#define UART_1_SCB__I2C_CFG CYREG_SCB1_I2C_CFG
#define UART_1_SCB__I2C_CTRL CYREG_SCB1_I2C_CTRL
#define UART_1_SCB__I2C_M_CMD CYREG_SCB1_I2C_M_CMD
#define UART_1_SCB__I2C_S_CMD CYREG_SCB1_I2C_S_CMD
#define UART_1_SCB__I2C_STATUS CYREG_SCB1_I2C_STATUS
#define UART_1_SCB__INTR_CAUSE CYREG_SCB1_INTR_CAUSE
#define UART_1_SCB__INTR_I2C_EC CYREG_SCB1_INTR_I2C_EC
#define UART_1_SCB__INTR_I2C_EC_MASK CYREG_SCB1_INTR_I2C_EC_MASK
#define UART_1_SCB__INTR_I2C_EC_MASKED CYREG_SCB1_INTR_I2C_EC_MASKED
#define UART_1_SCB__INTR_M CYREG_SCB1_INTR_M
#define UART_1_SCB__INTR_M_MASK CYREG_SCB1_INTR_M_MASK
#define UART_1_SCB__INTR_M_MASKED CYREG_SCB1_INTR_M_MASKED
#define UART_1_SCB__INTR_M_SET CYREG_SCB1_INTR_M_SET
#define UART_1_SCB__INTR_RX CYREG_SCB1_INTR_RX
#define UART_1_SCB__INTR_RX_MASK CYREG_SCB1_INTR_RX_MASK
#define UART_1_SCB__INTR_RX_MASKED CYREG_SCB1_INTR_RX_MASKED
#define UART_1_SCB__INTR_RX_SET CYREG_SCB1_INTR_RX_SET
#define UART_1_SCB__INTR_S CYREG_SCB1_INTR_S
#define UART_1_SCB__INTR_S_MASK CYREG_SCB1_INTR_S_MASK
#define UART_1_SCB__INTR_S_MASKED CYREG_SCB1_INTR_S_MASKED
#define UART_1_SCB__INTR_S_SET CYREG_SCB1_INTR_S_SET
#define UART_1_SCB__INTR_SPI_EC CYREG_SCB1_INTR_SPI_EC
#define UART_1_SCB__INTR_SPI_EC_MASK CYREG_SCB1_INTR_SPI_EC_MASK
#define UART_1_SCB__INTR_SPI_EC_MASKED CYREG_SCB1_INTR_SPI_EC_MASKED
#define UART_1_SCB__INTR_TX CYREG_SCB1_INTR_TX
#define UART_1_SCB__INTR_TX_MASK CYREG_SCB1_INTR_TX_MASK
#define UART_1_SCB__INTR_TX_MASKED CYREG_SCB1_INTR_TX_MASKED
#define UART_1_SCB__INTR_TX_SET CYREG_SCB1_INTR_TX_SET
#define UART_1_SCB__RX_CTRL CYREG_SCB1_RX_CTRL
#define UART_1_SCB__RX_FIFO_CTRL CYREG_SCB1_RX_FIFO_CTRL
#define UART_1_SCB__RX_FIFO_RD CYREG_SCB1_RX_FIFO_RD
#define UART_1_SCB__RX_FIFO_RD_SILENT CYREG_SCB1_RX_FIFO_RD_SILENT
#define UART_1_SCB__RX_FIFO_STATUS CYREG_SCB1_RX_FIFO_STATUS
#define UART_1_SCB__RX_MATCH CYREG_SCB1_RX_MATCH
#define UART_1_SCB__SPI_CTRL CYREG_SCB1_SPI_CTRL
#define UART_1_SCB__SPI_STATUS CYREG_SCB1_SPI_STATUS
#define UART_1_SCB__SS0_POSISTION 0u
#define UART_1_SCB__SS1_POSISTION 1u
#define UART_1_SCB__SS2_POSISTION 2u
#define UART_1_SCB__SS3_POSISTION 3u
#define UART_1_SCB__STATUS CYREG_SCB1_STATUS
#define UART_1_SCB__TX_CTRL CYREG_SCB1_TX_CTRL
#define UART_1_SCB__TX_FIFO_CTRL CYREG_SCB1_TX_FIFO_CTRL
#define UART_1_SCB__TX_FIFO_STATUS CYREG_SCB1_TX_FIFO_STATUS
#define UART_1_SCB__TX_FIFO_WR CYREG_SCB1_TX_FIFO_WR
#define UART_1_SCB__UART_CTRL CYREG_SCB1_UART_CTRL
#define UART_1_SCB__UART_FLOW_CTRL CYREG_SCB1_UART_FLOW_CTRL
#define UART_1_SCB__UART_RX_CTRL CYREG_SCB1_UART_RX_CTRL
#define UART_1_SCB__UART_RX_STATUS CYREG_SCB1_UART_RX_STATUS
#define UART_1_SCB__UART_TX_CTRL CYREG_SCB1_UART_TX_CTRL
#define UART_1_SCB_IRQ__INTC_CLR_EN_REG CYREG_CM0P_ICER
#define UART_1_SCB_IRQ__INTC_CLR_PD_REG CYREG_CM0P_ICPR
#define UART_1_SCB_IRQ__INTC_MASK 0x100u
#define UART_1_SCB_IRQ__INTC_NUMBER 8u
#define UART_1_SCB_IRQ__INTC_PRIOR_MASK 0xC0u
#define UART_1_SCB_IRQ__INTC_PRIOR_NUM 0u
#define UART_1_SCB_IRQ__INTC_PRIOR_REG CYREG_CM0P_IPR2
#define UART_1_SCB_IRQ__INTC_SET_EN_REG CYREG_CM0P_ISER
#define UART_1_SCB_IRQ__INTC_SET_PD_REG CYREG_CM0P_ISPR
#define UART_1_SCBCLK__CTRL_REGISTER CYREG_PERI_PCLK_CTL1
#define UART_1_SCBCLK__DIV_ID 0x00000041u
#define UART_1_SCBCLK__DIV_REGISTER CYREG_PERI_DIV_16_CTL1
#define UART_1_SCBCLK__PA_DIV_ID 0x000000FFu
#define UART_1_tx__0__DR CYREG_GPIO_PRT3_DR
#define UART_1_tx__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define UART_1_tx__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define UART_1_tx__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define UART_1_tx__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define UART_1_tx__0__HSIOM_GPIO 0u
#define UART_1_tx__0__HSIOM_I2C 14u
#define UART_1_tx__0__HSIOM_I2C_SDA 14u
#define UART_1_tx__0__HSIOM_MASK 0x000000F0u
#define UART_1_tx__0__HSIOM_SHIFT 4u
#define UART_1_tx__0__HSIOM_SPI 15u
#define UART_1_tx__0__HSIOM_SPI_MISO 15u
#define UART_1_tx__0__HSIOM_UART 9u
#define UART_1_tx__0__HSIOM_UART_TX 9u
#define UART_1_tx__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define UART_1_tx__0__INTR CYREG_GPIO_PRT3_INTR
#define UART_1_tx__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define UART_1_tx__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define UART_1_tx__0__MASK 0x02u
#define UART_1_tx__0__PC CYREG_GPIO_PRT3_PC
#define UART_1_tx__0__PC2 CYREG_GPIO_PRT3_PC2
#define UART_1_tx__0__PORT 3u
#define UART_1_tx__0__PS CYREG_GPIO_PRT3_PS
#define UART_1_tx__0__SHIFT 1u
#define UART_1_tx__DR CYREG_GPIO_PRT3_DR
#define UART_1_tx__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define UART_1_tx__DR_INV CYREG_GPIO_PRT3_DR_INV
#define UART_1_tx__DR_SET CYREG_GPIO_PRT3_DR_SET
#define UART_1_tx__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define UART_1_tx__INTR CYREG_GPIO_PRT3_INTR
#define UART_1_tx__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define UART_1_tx__INTSTAT CYREG_GPIO_PRT3_INTR
#define UART_1_tx__MASK 0x02u
#define UART_1_tx__PC CYREG_GPIO_PRT3_PC
#define UART_1_tx__PC2 CYREG_GPIO_PRT3_PC2
#define UART_1_tx__PORT 3u
#define UART_1_tx__PS CYREG_GPIO_PRT3_PS
#define UART_1_tx__SHIFT 1u

/* antpow */
#define antpow__0__DR CYREG_GPIO_PRT6_DR
#define antpow__0__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define antpow__0__DR_INV CYREG_GPIO_PRT6_DR_INV
#define antpow__0__DR_SET CYREG_GPIO_PRT6_DR_SET
#define antpow__0__HSIOM CYREG_HSIOM_PORT_SEL6
#define antpow__0__HSIOM_MASK 0x000000F0u
#define antpow__0__HSIOM_SHIFT 4u
#define antpow__0__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define antpow__0__INTR CYREG_GPIO_PRT6_INTR
#define antpow__0__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define antpow__0__INTSTAT CYREG_GPIO_PRT6_INTR
#define antpow__0__MASK 0x02u
#define antpow__0__PC CYREG_GPIO_PRT6_PC
#define antpow__0__PC2 CYREG_GPIO_PRT6_PC2
#define antpow__0__PORT 6u
#define antpow__0__PS CYREG_GPIO_PRT6_PS
#define antpow__0__SHIFT 1u
#define antpow__DR CYREG_GPIO_PRT6_DR
#define antpow__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define antpow__DR_INV CYREG_GPIO_PRT6_DR_INV
#define antpow__DR_SET CYREG_GPIO_PRT6_DR_SET
#define antpow__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define antpow__INTR CYREG_GPIO_PRT6_INTR
#define antpow__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define antpow__INTSTAT CYREG_GPIO_PRT6_INTR
#define antpow__MASK 0x02u
#define antpow__PC CYREG_GPIO_PRT6_PC
#define antpow__PC2 CYREG_GPIO_PRT6_PC2
#define antpow__PORT 6u
#define antpow__PS CYREG_GPIO_PRT6_PS
#define antpow__SHIFT 1u

/* SPI_BUSY */
#define SPI_BUSY__0__DR CYREG_GPIO_PRT4_DR
#define SPI_BUSY__0__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define SPI_BUSY__0__DR_INV CYREG_GPIO_PRT4_DR_INV
#define SPI_BUSY__0__DR_SET CYREG_GPIO_PRT4_DR_SET
#define SPI_BUSY__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define SPI_BUSY__0__HSIOM_MASK 0xF0000000u
#define SPI_BUSY__0__HSIOM_SHIFT 28u
#define SPI_BUSY__0__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_BUSY__0__INTR CYREG_GPIO_PRT4_INTR
#define SPI_BUSY__0__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_BUSY__0__INTSTAT CYREG_GPIO_PRT4_INTR
#define SPI_BUSY__0__MASK 0x80u
#define SPI_BUSY__0__PC CYREG_GPIO_PRT4_PC
#define SPI_BUSY__0__PC2 CYREG_GPIO_PRT4_PC2
#define SPI_BUSY__0__PORT 4u
#define SPI_BUSY__0__PS CYREG_GPIO_PRT4_PS
#define SPI_BUSY__0__SHIFT 7u
#define SPI_BUSY__DR CYREG_GPIO_PRT4_DR
#define SPI_BUSY__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define SPI_BUSY__DR_INV CYREG_GPIO_PRT4_DR_INV
#define SPI_BUSY__DR_SET CYREG_GPIO_PRT4_DR_SET
#define SPI_BUSY__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_BUSY__INTR CYREG_GPIO_PRT4_INTR
#define SPI_BUSY__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define SPI_BUSY__INTSTAT CYREG_GPIO_PRT4_INTR
#define SPI_BUSY__MASK 0x80u
#define SPI_BUSY__PC CYREG_GPIO_PRT4_PC
#define SPI_BUSY__PC2 CYREG_GPIO_PRT4_PC2
#define SPI_BUSY__PORT 4u
#define SPI_BUSY__PS CYREG_GPIO_PRT4_PS
#define SPI_BUSY__SHIFT 7u

/* SPI_NRESET */
#define SPI_NRESET__0__DR CYREG_GPIO_PRT5_DR
#define SPI_NRESET__0__DR_CLR CYREG_GPIO_PRT5_DR_CLR
#define SPI_NRESET__0__DR_INV CYREG_GPIO_PRT5_DR_INV
#define SPI_NRESET__0__DR_SET CYREG_GPIO_PRT5_DR_SET
#define SPI_NRESET__0__HSIOM CYREG_HSIOM_PORT_SEL5
#define SPI_NRESET__0__HSIOM_MASK 0xF0000000u
#define SPI_NRESET__0__HSIOM_SHIFT 28u
#define SPI_NRESET__0__INTCFG CYREG_GPIO_PRT5_INTR_CFG
#define SPI_NRESET__0__INTR CYREG_GPIO_PRT5_INTR
#define SPI_NRESET__0__INTR_CFG CYREG_GPIO_PRT5_INTR_CFG
#define SPI_NRESET__0__INTSTAT CYREG_GPIO_PRT5_INTR
#define SPI_NRESET__0__MASK 0x80u
#define SPI_NRESET__0__PC CYREG_GPIO_PRT5_PC
#define SPI_NRESET__0__PC2 CYREG_GPIO_PRT5_PC2
#define SPI_NRESET__0__PORT 5u
#define SPI_NRESET__0__PS CYREG_GPIO_PRT5_PS
#define SPI_NRESET__0__SHIFT 7u
#define SPI_NRESET__DR CYREG_GPIO_PRT5_DR
#define SPI_NRESET__DR_CLR CYREG_GPIO_PRT5_DR_CLR
#define SPI_NRESET__DR_INV CYREG_GPIO_PRT5_DR_INV
#define SPI_NRESET__DR_SET CYREG_GPIO_PRT5_DR_SET
#define SPI_NRESET__INTCFG CYREG_GPIO_PRT5_INTR_CFG
#define SPI_NRESET__INTR CYREG_GPIO_PRT5_INTR
#define SPI_NRESET__INTR_CFG CYREG_GPIO_PRT5_INTR_CFG
#define SPI_NRESET__INTSTAT CYREG_GPIO_PRT5_INTR
#define SPI_NRESET__MASK 0x80u
#define SPI_NRESET__PC CYREG_GPIO_PRT5_PC
#define SPI_NRESET__PC2 CYREG_GPIO_PRT5_PC2
#define SPI_NRESET__PORT 5u
#define SPI_NRESET__PS CYREG_GPIO_PRT5_PS
#define SPI_NRESET__SHIFT 7u

/* global_irq */
#define global_irq__INTC_CLR_EN_REG CYREG_CM0P_ICER
#define global_irq__INTC_CLR_PD_REG CYREG_CM0P_ICPR
#define global_irq__INTC_MASK 0x10u
#define global_irq__INTC_NUMBER 4u
#define global_irq__INTC_PRIOR_MASK 0xC0u
#define global_irq__INTC_PRIOR_NUM 2u
#define global_irq__INTC_PRIOR_REG CYREG_CM0P_IPR1
#define global_irq__INTC_SET_EN_REG CYREG_CM0P_ISER
#define global_irq__INTC_SET_PD_REG CYREG_CM0P_ISPR

/* pin_wakeup */
#define pin_wakeup__0__DR CYREG_GPIO_PRT0_DR
#define pin_wakeup__0__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define pin_wakeup__0__DR_INV CYREG_GPIO_PRT0_DR_INV
#define pin_wakeup__0__DR_SET CYREG_GPIO_PRT0_DR_SET
#define pin_wakeup__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define pin_wakeup__0__HSIOM_MASK 0x00000F00u
#define pin_wakeup__0__HSIOM_SHIFT 8u
#define pin_wakeup__0__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define pin_wakeup__0__INTR CYREG_GPIO_PRT0_INTR
#define pin_wakeup__0__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define pin_wakeup__0__INTSTAT CYREG_GPIO_PRT0_INTR
#define pin_wakeup__0__MASK 0x04u
#define pin_wakeup__0__PC CYREG_GPIO_PRT0_PC
#define pin_wakeup__0__PC2 CYREG_GPIO_PRT0_PC2
#define pin_wakeup__0__PORT 0u
#define pin_wakeup__0__PS CYREG_GPIO_PRT0_PS
#define pin_wakeup__0__SHIFT 2u
#define pin_wakeup__DR CYREG_GPIO_PRT0_DR
#define pin_wakeup__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define pin_wakeup__DR_INV CYREG_GPIO_PRT0_DR_INV
#define pin_wakeup__DR_SET CYREG_GPIO_PRT0_DR_SET
#define pin_wakeup__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define pin_wakeup__INTR CYREG_GPIO_PRT0_INTR
#define pin_wakeup__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define pin_wakeup__INTSTAT CYREG_GPIO_PRT0_INTR
#define pin_wakeup__MASK 0x04u
#define pin_wakeup__PC CYREG_GPIO_PRT0_PC
#define pin_wakeup__PC2 CYREG_GPIO_PRT0_PC2
#define pin_wakeup__PORT 0u
#define pin_wakeup__PS CYREG_GPIO_PRT0_PS
#define pin_wakeup__SHIFT 2u
#define pin_wakeup__SNAP CYREG_GPIO_PRT0_INTR

/* wakeup_irq */
#define wakeup_irq__INTC_CLR_EN_REG CYREG_CM0P_ICER
#define wakeup_irq__INTC_CLR_PD_REG CYREG_CM0P_ICPR
#define wakeup_irq__INTC_MASK 0x01u
#define wakeup_irq__INTC_NUMBER 0u
#define wakeup_irq__INTC_PRIOR_MASK 0xC0u
#define wakeup_irq__INTC_PRIOR_NUM 3u
#define wakeup_irq__INTC_PRIOR_REG CYREG_CM0P_IPR0
#define wakeup_irq__INTC_SET_EN_REG CYREG_CM0P_ISER
#define wakeup_irq__INTC_SET_PD_REG CYREG_CM0P_ISPR

/* Miscellaneous */
#define CY_PROJECT_NAME "alios_small"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_BANDGAP_VOLTAGE 1.200
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
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
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x256A11B5u
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
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4V
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
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4V_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 8u
#define CYDEV_DFT_SELECT_CLK1 9u
#define CYDEV_DMA_CHANNELS_AVAILABLE 8
#define CYDEV_HEAP_SIZE 0x1100
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_INTR_NUMBER_DMA 14u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 2
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0080
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_m0s8cpussv3_VERSION 1
#define CYIPBLOCK_m0s8crypto_VERSION 2
#define CYIPBLOCK_m0s8csdv2_VERSION 2
#define CYIPBLOCK_m0s8exco_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8pass4a_VERSION 1
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8wco_VERSION 1
#define CYIPBLOCK_s8srsslt_VERSION 1
#define DMA_CHANNELS_USED__MASK 0u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
