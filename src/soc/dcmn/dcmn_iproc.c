/*
 * $Id: dcmn_iproc.c,v 1.0 Broadcom SDK $
 *
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *
 * SOC DCMN IPROC
 */

#ifdef _ERR_MSG_MODULE_NAME
  #error "_ERR_MSG_MODULE_NAME redefined"
#endif /* _ERR_MSG_MODULE_NAME */

#define _ERR_MSG_MODULE_NAME BSL_SOC_INIT

#include <shared/bsl.h>
#include <soc/defs.h>

#ifdef BCM_IPROC_SUPPORT
    #include <soc/iproc.h>
#endif /* BCM_IPROC_SUPPORT */

#include <soc/drv.h>
#include <soc/dcmn/dcmn_iproc.h>
#include <soc/dcmn/error.h>

#ifdef BCM_IPROC_SUPPORT

/* 
 * Configure PAXB: the iProc PCIe-AXI bridge 
 * This code was used to configure PCIe function 0.
 * The configuration of the second bar moved elsewhere, and the third bar is not used by the hardware any more.
 */
int soc_dcmn_iproc_config_paxb(int unit) 
{
    SOCDNX_INIT_FUNC_DEFS;
    SOCDNX_FUNC_RETURN;
}

#endif /* BCM_IPROC_SUPPORT */
