/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef __DRIVERS_INTERCONNECT_QCOM_QDU1000_H
#define __DRIVERS_INTERCONNECT_QCOM_QDU1000_H

#define QDU1000_MASTER_SYS_TCU				0
#define QDU1000_MASTER_APPSS_PROC			1
#define QDU1000_MASTER_LLCC				2
#define QDU1000_MASTER_GIC_AHB				3
#define QDU1000_MASTER_QDSS_BAM				4
#define QDU1000_MASTER_QPIC				5
#define QDU1000_MASTER_QSPI_0				6
#define QDU1000_MASTER_QUP_0				7
#define QDU1000_MASTER_QUP_1				8
#define QDU1000_MASTER_SNOC_CFG				9
#define QDU1000_MASTER_ANOC_SNOC			10
#define QDU1000_MASTER_ANOC_GSI				11
#define QDU1000_MASTER_GEMNOC_ECPRI_DMA			12
#define QDU1000_MASTER_FEC_2_GEMNOC			13
#define QDU1000_MASTER_GEM_NOC_CNOC			14
#define QDU1000_MASTER_GEMNOC_MODEM_CNOC		15
#define QDU1000_MASTER_GEM_NOC_PCIE_SNOC		16
#define QDU1000_MASTER_ANOC_PCIE_GEM_NOC		17
#define QDU1000_MASTER_SNOC_GC_MEM_NOC			18
#define QDU1000_MASTER_SNOC_SF_MEM_NOC			19
#define QDU1000_MASTER_QUP_CORE_0			20
#define QDU1000_MASTER_QUP_CORE_1			21
#define QDU1000_MASTER_CRYPTO				22
#define QDU1000_MASTER_ECPRI_GSI			23
#define QDU1000_MASTER_MSS_PROC				24
#define QDU1000_MASTER_PIMEM				25
#define QDU1000_MASTER_SNOC_ECPRI_DMA			26
#define QDU1000_MASTER_GIC				27
#define QDU1000_MASTER_PCIE				28
#define QDU1000_MASTER_QDSS_ETR				29
#define QDU1000_MASTER_QDSS_ETR_1			30
#define QDU1000_MASTER_SDCC_1				31
#define QDU1000_MASTER_USB3				32
#define QDU1000_SLAVE_EBI1				512
#define QDU1000_SLAVE_AHB2PHY_SOUTH			513
#define QDU1000_SLAVE_AHB2PHY_NORTH			514
#define QDU1000_SLAVE_AHB2PHY_EAST			515
#define QDU1000_SLAVE_AOSS				516
#define QDU1000_SLAVE_CLK_CTL				517
#define QDU1000_SLAVE_RBCPR_CX_CFG			518
#define QDU1000_SLAVE_RBCPR_MX_CFG			519
#define QDU1000_SLAVE_CRYPTO_0_CFG			520
#define QDU1000_SLAVE_ECPRI_CFG				521
#define QDU1000_SLAVE_IMEM_CFG				522
#define QDU1000_SLAVE_IPC_ROUTER_CFG			523
#define QDU1000_SLAVE_CNOC_MSS				524
#define QDU1000_SLAVE_PCIE_CFG				525
#define QDU1000_SLAVE_PDM				526
#define QDU1000_SLAVE_PIMEM_CFG				527
#define QDU1000_SLAVE_PRNG				528
#define QDU1000_SLAVE_QDSS_CFG				529
#define QDU1000_SLAVE_QPIC				530
#define QDU1000_SLAVE_QSPI_0				531
#define QDU1000_SLAVE_QUP_0				532
#define QDU1000_SLAVE_QUP_1				533
#define QDU1000_SLAVE_SDCC_2				534
#define QDU1000_SLAVE_SMBUS_CFG				535
#define QDU1000_SLAVE_SNOC_CFG				536
#define QDU1000_SLAVE_TCSR				537
#define QDU1000_SLAVE_TLMM				538
#define QDU1000_SLAVE_TME_CFG				539
#define QDU1000_SLAVE_TSC_CFG				540
#define QDU1000_SLAVE_USB3_0				541
#define QDU1000_SLAVE_VSENSE_CTRL_CFG			542
#define QDU1000_SLAVE_A1NOC_SNOC			543
#define QDU1000_SLAVE_ANOC_SNOC_GSI			544
#define QDU1000_SLAVE_DDRSS_CFG				545
#define QDU1000_SLAVE_ECPRI_GEMNOC			546
#define QDU1000_SLAVE_GEM_NOC_CNOC			547
#define QDU1000_SLAVE_SNOC_GEM_NOC_GC			548
#define QDU1000_SLAVE_SNOC_GEM_NOC_SF			549
#define QDU1000_SLAVE_LLCC				550
#define QDU1000_SLAVE_MODEM_OFFLINE			551
#define QDU1000_SLAVE_GEMNOC_MODEM_CNOC			552
#define QDU1000_SLAVE_MEM_NOC_PCIE_SNOC			553
#define QDU1000_SLAVE_ANOC_PCIE_GEM_NOC			554
#define QDU1000_SLAVE_QUP_CORE_0			555
#define QDU1000_SLAVE_QUP_CORE_1			556
#define QDU1000_SLAVE_IMEM				557
#define QDU1000_SLAVE_PIMEM				558
#define QDU1000_SLAVE_SERVICE_SNOC			559
#define QDU1000_SLAVE_ETHERNET_SS			560
#define QDU1000_SLAVE_PCIE_0				561
#define QDU1000_SLAVE_QDSS_STM				562
#define QDU1000_SLAVE_TCU				563

#endif