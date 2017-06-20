/*
 * $Id:dnxf_config_defs.csv,v 1.1.2.5 Broadcom SDK $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * This file is auto-generated by autoCoder
 * DO NOT EDIT THIS FILE!
 *
 */
#ifndef RAMON_FE1600_CONFIG_DEFS
#define RAMON_FE1600_CONFIG_DEFS

#include <soc/defs.h>
#ifdef BCM_88790_A0

#include <soc/dnxc/legacy/dnxc_defs.h>
#include <soc/dnxf/fe1600/fe1600_interrupts.h>

#define SOC_RAMON_FE1600_GET(dnxf_define)    SOC_RAMON_FE1600_##dnxf_define
#define SOC_RAMON_FE1600_NOF_LINKS                                (128)
#define SOC_RAMON_FE1600_NOF_INSTANCES_MAC                        (32)
#define SOC_RAMON_FE1600_NOF_LINKS_IN_MAC                         (SOC_DNXC_NOF_LINKS_IN_MAC)
#define SOC_RAMON_FE1600_NOF_INSTANCES_MAC_FSRD                   (8)
#define SOC_RAMON_FE1600_NOF_INSTANCES_BRDC_FSRD                  (1)
#define SOC_RAMON_FE1600_NOF_LINKS_IN_FSRD                        (16)
#define SOC_RAMON_FE1600_NOF_QUADS_IN_FSRD                        (4)
#define SOC_RAMON_FE1600_NOF_LINKS_IN_QUAD                        (4)
#define SOC_RAMON_FE1600_NOF_INSTANCES_DCH                        (4)
#define SOC_RAMON_FE1600_NOF_INSTANCES_CCS                        (2)
#define SOC_RAMON_FE1600_NOF_LINKS_IN_CCS                         (-1)
#define SOC_RAMON_FE1600_NOF_INSTANCES_DCL                        (4)
#define SOC_RAMON_FE1600_NOF_LINKS_IN_DCQ                         (32)
#define SOC_RAMON_FE1600_NOF_INSTANCES_RTP                        (1)
#define SOC_RAMON_FE1600_NOF_INSTANCES_OCCG                       (1)
#define SOC_RAMON_FE1600_NOF_INSTANCES_ECI                        (1)
#define SOC_RAMON_FE1600_NOF_INSTANCES_DCMA                       (2)
#define SOC_RAMON_FE1600_NOF_INSTANCES_DCMB                       (2)
#define SOC_RAMON_FE1600_NOF_INSTANCES_DCMC                       (1)
#define SOC_RAMON_FE1600_NOF_INSTANCES_DCM                        (0)
#define SOC_RAMON_FE1600_NOF_INSTANCES_CMIC                       (1)
#define SOC_RAMON_FE1600_NOF_INSTANCES_MESH_TOPOLOGY              (1)
#define SOC_RAMON_FE1600_NOF_INSTANCES_OTPC                       (1)
#define SOC_RAMON_FE1600_NOF_INSTANCES_BRDC_FMACH                 (1)
#define SOC_RAMON_FE1600_NOF_INSTANCES_BRDC_FMACL                 (1)
#define SOC_RAMON_FE1600_NOF_INSTANCES_BRDC_FMAC_AC               (0)
#define SOC_RAMON_FE1600_NOF_INSTANCES_BRDC_FMAC_BD               (0)
#define SOC_RAMON_FE1600_NOF_INSTANCES_BRDC_DCH                   (0)
#define SOC_RAMON_FE1600_NOF_INSTANCES_BRDC_DCM                   (0)
#define SOC_RAMON_FE1600_NOF_INSTANCES_BRDC_DCL                   (0)
#define SOC_RAMON_FE1600_NOF_INSTANCES_BRDC_CCS                   (0)
#define SOC_RAMON_FE1600_MAX_LINK_SCORE                           (120)
#define SOC_RAMON_FE1600_MULTICAST_ROW_SIZE_IN_UINT32             (5)
#define SOC_RAMON_FE1600_MAX_BUCKET_FILL_RATE                     (0xB)
#define SOC_RAMON_FE1600_RTP_RMHMT_GROUP_SIZE                     (32)
#define SOC_RAMON_FE1600_NOF_LCPLL                                (4)
#define SOC_RAMON_FE1600_NOF_PORT_IN_LCPLL                        (32)
#define SOC_RAMON_FE1600_RTP_RMGR_UNITS                           (32)
#define SOC_RAMON_FE1600_RTP_RMGR_NOF_LINKS                       (128)
#define SOC_RAMON_FE1600_NOF_INTERRUPTS                           (_RAMON_FE1600_INT_LAST)
#define SOC_RAMON_FE1600_NOF_RTP_MCLBTP_INSTANCES                 (4)
#define SOC_RAMON_FE1600_NOF_RTP_MCLBTS_INSTANCES                 (4)
#define SOC_RAMON_FE1600_NOF_LINKS_IN_DCL                         (32)
#define SOC_RAMON_FE1600_FIFO_DMA_FABRIC_CELL_FIRST_CHANNEL       (-1)
#define SOC_RAMON_FE1600_FIFO_DMA_NOF_FABRIC_CELL_CHANNELS        (-1)
#define SOC_RAMON_FE1600_FIFO_DMA_FABRIC_CELL_NOF_ENTRIES_PER_CELL (-1)
#define SOC_RAMON_FE1600_REPEATER_NONE_EMPTY_CELL_SIZE            (64)
#define SOC_RAMON_FE1600_REPEATER_DEFAULT_EMPTY_CELL_SIZE         (64)
#define SOC_RAMON_FE1600_NOF_LOCAL_MODID                          (128)
#define SOC_RAMON_FE1600_NOF_LOCAL_MODID_FE13                     (64)
#define SOC_RAMON_FE1600_FABRIC_MAC_BUS_SIZE                      (40)
#define SOC_RAMON_FE1600_LINK_MASK                                (0x7f)
#define SOC_RAMON_FE1600_RX_CPU_CELL_MAX_PAYLOAD_SIZE             (-1)
#define SOC_RAMON_FE1600_SOURCE_ROUTED_CELLS_HEADER_OFFSET        (0)
#define SOC_RAMON_FE1600_ALDWP_MAX_VAL                            (0xf)


int soc_ramon_fe1600_defines_init(int unit);
int soc_ramon_fe1600_defines_deinit(int unit);


#else /* BCM_88790_A0 */
#define SOC_RAMON_FE1600_GET(dnxf_define)    0
#endif /* BCM_88790_A0 */
#endif /* RAMON_FE1600_CONFIG_DEFS */

