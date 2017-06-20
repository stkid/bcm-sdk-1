/*
 * $Id: low_level_defines.csv,v 1.1.2.5 Broadcom SDK $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * This file is auto-generated by autoCoder
 * DO NOT EDIT THIS FILE!
 *
 */
#ifndef DFE_CONFIG_IMP_DEFS
#define DFE_CONFIG_IMP_DEFS

#include <soc/error.h>
#include <soc/dcmn/error.h>
#include <soc/drv.h>
#include <sal/core/alloc.h>

#include <soc/dfe/fe1600/fe1600_config_imp_defs.h>
#include <soc/dfe/fe3200/fe3200_config_imp_defs.h>

/************************************/
/*          Structs define          */
/************************************/

/* Implementation-specific defines */

/*      Configuration defines       */
typedef struct soc_dfe_implementation_defines_s {
    int        soc_dfe_imp_defs_rtp_reachabilty_gen_rate_per_link;        /* RTP Reachability gen rate per link */
    int        soc_dfe_imp_defs_rtp_reachabilty_watchdog_rate;            /* RTP Reachability watchdog reate */
    int        soc_dfe_imp_defs_mdio_int_dividend_default;                /* Divident default */
    int        soc_dfe_imp_defs_mdio_int_freq_default;                    /* Freq default */
    int        soc_dfe_imp_defs_mdio_int_out_delay_default;               /* Out Delay default */
    int        soc_dfe_imp_defs_fabric_clock_freq_in_default;             /* Fabric Clock freq in default */
    int        soc_dfe_imp_defs_fabric_clock_freq_out_default;            /* Fabric Clock freq out default */
    int        soc_dfe_imp_defs_lcpll_control1_125_val;                   /* LCPLL_CONTROL1_125_VAL (not used by fe3200) */
    int        soc_dfe_imp_defs_lcpll_control1_156_25_val;                /* LCPLL_CONTROL1_156_25_VAL (not used by fe3200) */
    int        soc_dfe_imp_defs_lcpll_control3_125_val;                   /* LCPLL_CONTROL3_125_VAL (not used by fe3200) */
    int        soc_dfe_imp_defs_lcpll_control3_156_25_val;                /* LCPLL_CONTROL3_156_25_VAL (not used by fe3200) */
    int        soc_dfe_imp_defs_fifo_dma_nof_channels;                    /* nof of channels used for fifo dma */
} soc_dfe_implementation_defines_t;

extern soc_dfe_implementation_defines_t *soc_dfe_implementation_defines[SOC_MAX_NUM_DEVICES];

/************************************/
/*          Macros Define           */
/************************************/


/*         soc_dfe_implementation_defines macros            */
#define SOC_DFE_IMP_DEFS_SET(unit, dfe_define, value)    {soc_dfe_implementation_defines[unit]->soc_dfe_imp_defs_##dfe_define = value;}
#define SOC_DFE_IMP_DEFS_GET(unit, dfe_define)           ( soc_dfe_implementation_defines[unit]->soc_dfe_imp_defs_##dfe_define )
#define SOC_DFE_IMP_DEFS_MAX(dfe_define)                 SOC_DFE_IMP_DEFS_##dfe_define##_MAX
/* SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX
#if (50000) > SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX
#undef SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX
#define SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX 50000
#endif /* (50000) > SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX */
#else
#define SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX 50000
#endif /* SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX
#if (50000) > SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX
#undef SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX
#define SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX 50000
#endif /* (50000) > SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX */
#else
#define SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX 50000
#endif /* SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_RTP_REACHABILTY_GEN_RATE_PER_LINK_MAX - end */

/* SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX
#if (100000) > SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX
#undef SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX
#define SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX 100000
#endif /* (100000) > SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX */
#else
#define SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX 100000
#endif /* SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX
#if (100000) > SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX
#undef SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX
#define SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX 100000
#endif /* (100000) > SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX */
#else
#define SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX 100000
#endif /* SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_RTP_REACHABILTY_WATCHDOG_RATE_MAX - end */

/* SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX
#if (0) > SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX
#undef SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX
#define SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX 0
#endif /* (0) > SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX */
#else
#define SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX 0
#endif /* SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX
#if (1) > SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX
#undef SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX
#define SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX 1
#endif /* (1) > SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX */
#else
#define SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX 1
#endif /* SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_MDIO_INT_DIVIDEND_DEFAULT_MAX - end */

/* SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX
#if (0) > SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX
#undef SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX
#define SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX 0
#endif /* (0) > SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX */
#else
#define SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX 0
#endif /* SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX
#if (10) > SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX
#undef SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX
#define SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX 10
#endif /* (10) > SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX */
#else
#define SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX 10
#endif /* SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_MDIO_INT_FREQ_DEFAULT_MAX - end */

/* SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX
#if (0) > SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX
#undef SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX
#define SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX 0
#endif /* (0) > SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX */
#else
#define SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX 0
#endif /* SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX
#if (0x9) > SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX
#undef SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX
#define SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX 0x9
#endif /* (0x9) > SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX */
#else
#define SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX 0x9
#endif /* SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_MDIO_INT_OUT_DELAY_DEFAULT_MAX - end */

/* SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX
#if (0) > SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX
#undef SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX
#define SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX 0
#endif /* (0) > SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX */
#else
#define SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX 0
#endif /* SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX
#if (0) > SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX
#undef SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX
#define SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX 0
#endif /* (0) > SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX */
#else
#define SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX 0
#endif /* SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_IN_DEFAULT_MAX - end */

/* SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX
#if (0) > SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX
#undef SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX
#define SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX 0
#endif /* (0) > SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX */
#else
#define SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX 0
#endif /* SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX
#if (0) > SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX
#undef SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX
#define SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX 0
#endif /* (0) > SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX */
#else
#define SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX 0
#endif /* SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_FABRIC_CLOCK_FREQ_OUT_DEFAULT_MAX - end */

/* SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX
#if (0x05191919) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX
#undef SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX 0x05191919
#endif /* (0x05191919) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX */
#else
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX 0x05191919
#endif /* SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX
#if (-1) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX
#undef SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX -1
#endif /* (-1) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX */
#else
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX -1
#endif /* SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_125_VAL_MAX - end */

/* SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX
#if (0x05141414) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX
#undef SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX 0x05141414
#endif /* (0x05141414) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX */
#else
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX 0x05141414
#endif /* SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX
#if (-1) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX
#undef SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX -1
#endif /* (-1) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX */
#else
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX -1
#endif /* SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_LCPLL_CONTROL1_156_25_VAL_MAX - end */

/* SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX
#if (0x00000019) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX
#undef SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX 0x00000019
#endif /* (0x00000019) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX */
#else
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX 0x00000019
#endif /* SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX
#if (-1) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX
#undef SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX -1
#endif /* (-1) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX */
#else
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX -1
#endif /* SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_125_VAL_MAX - end */

/* SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX
#if (0x00000014) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX
#undef SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX 0x00000014
#endif /* (0x00000014) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX */
#else
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX 0x00000014
#endif /* SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX
#if (-1) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX
#undef SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX -1
#endif /* (-1) > SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX */
#else
#define SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX -1
#endif /* SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_LCPLL_CONTROL3_156_25_VAL_MAX - end */

/* SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX*/
#ifdef BCM_88750_A0
#ifdef SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX
#if (0) > SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX
#undef SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX
#define SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX 0
#endif /* (0) > SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX */
#else
#define SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX 0
#endif /* SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX */
#endif /* BCM_88750_A0*/
#ifdef BCM_88950_A0
#ifdef SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX
#if (4) > SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX
#undef SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX
#define SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX 4
#endif /* (4) > SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX */
#else
#define SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX 4
#endif /* SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX */
#endif /* BCM_88950_A0*/
/* SOC_DFE_IMP_DEFS_FIFO_DMA_NOF_CHANNELS_MAX - end */


int soc_dfe_implementation_defines_init(int unit);
int soc_dfe_implementation_defines_deinit(int unit);

#endif /* DFE_CONFIG_IMP_DEFS */
