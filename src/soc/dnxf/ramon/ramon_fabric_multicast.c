/*
 * $Id: ramon_fabric_multicast.c,v 1.7.48.1 Broadcom SDK $
 *
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *
 * SOC RAMON FABRIC MULTICAST
 */
#ifdef _ERR_MSG_MODULE_NAME
  #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_SOC_FABRIC
#include <shared/bsl.h>
#include <soc/dnxc/legacy/error.h>
#include <soc/mem.h>

#include <soc/defs.h>
#include <soc/error.h>
#include <soc/mcm/allenum.h>
#include <soc/mcm/memregs.h>

#include <soc/dnxf/cmn/dnxf_drv.h>
#include <shared/bitop.h>

#if defined(BCM_88790_A0)

#include <soc/dnxf/ramon/ramon_fabric_multicast.h>

#define _SOC_RAMON_FABRIC_MULTICAST_TABLE_SIZE (64 * 1024)

STATIC soc_dnxf_multicast_read_range_info_t _soc_ramon_fabric_multicast_read_range_info_standard[] = {
    {
        0,
        _SOC_RAMON_FABRIC_MULTICAST_TABLE_SIZE - 1,
        0,
        1
    },
    {
        _SOC_RAMON_FABRIC_MULTICAST_TABLE_SIZE,
        2 * _SOC_RAMON_FABRIC_MULTICAST_TABLE_SIZE - 1,
        1,
        1
    },
    {
        2 * _SOC_RAMON_FABRIC_MULTICAST_TABLE_SIZE,
        3 * _SOC_RAMON_FABRIC_MULTICAST_TABLE_SIZE - 1,
        2,
        1
    }
};
STATIC soc_dnxf_multicast_read_range_info_t _soc_ramon_fabric_multicast_read_range_info_128k_half[] = {
    {
        0,
        _SOC_RAMON_FABRIC_MULTICAST_TABLE_SIZE - 1,
        0,
        1
    },
    {
        _SOC_RAMON_FABRIC_MULTICAST_TABLE_SIZE,
        2 * _SOC_RAMON_FABRIC_MULTICAST_TABLE_SIZE - 1,
        0,
        0
    }
};

soc_error_t
soc_ramon_fabric_multicast_multi_read_info_get(int unit, soc_dnxf_multicast_read_range_info_t **info, int *info_size)
{
    DNXC_INIT_FUNC_DEFS;

    /*get mc table read info*/
    switch (SOC_DNXF_CONFIG(unit).fe_mc_id_range)
    {
       case soc_dnxf_multicast_table_mode_128k_half:
           *info = _soc_ramon_fabric_multicast_read_range_info_128k_half;
           *info_size = sizeof(_soc_ramon_fabric_multicast_read_range_info_128k_half) / sizeof(soc_dnxf_multicast_read_range_info_t);
           break;
       default:
           *info = _soc_ramon_fabric_multicast_read_range_info_standard;
           *info_size = sizeof(_soc_ramon_fabric_multicast_read_range_info_standard) / sizeof(soc_dnxf_multicast_read_range_info_t);
           break;
    }

    DNXC_FUNC_RETURN;
}
 
/* 
 *write range of multicast groups - the data can be sperated per instance of RTP_MCTm 
 */
soc_error_t
soc_ramon_fabric_multicast_multi_write_range(int unit, int mem_flags, soc_multicast_t group_min, soc_multicast_t group_max, uint32 *entry_array)
{
    int rv;
    DNXC_INIT_FUNC_DEFS;

    rv = soc_mem_array_write_range(unit, mem_flags, RTP_MULTI_CAST_TABLE_UPDATEm, 0, MEM_BLOCK_ALL, group_min, group_max, entry_array);
    DNXC_IF_ERR_EXIT(rv);


exit:
    DNXC_FUNC_RETURN;
}

#endif
