/* $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#include <sal/core/libc.h>
#include <shared/swstate/sw_state.h>
#include <shared/error.h>
#include <shared/swstate/sw_state_defs.h>
#include <shared/bsl.h>
#include <shared/swstate/sw_state_dump.h>
#include <shared/swstate/diagnostic/sw_state_diagnostic.h>
#include <shared/swstate/diagnostic/sw_state_dpp_soc_qax_diagnostic.h>

#ifdef BCM_WARM_BOOT_API_TEST
#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.soc.qax.tm.dump(unit);
#endif
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.soc.qax.pp.dump(unit);
#endif
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.dump(unit);
#endif
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_tm_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.soc.qax.tm.lb_info.dump(unit);
#endif
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.soc.qax.tm.guaranteed_info.dump(unit);
#endif
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.soc.qax.tm.lossless_pool_id.dump(unit);
#endif
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_tm_lb_info_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    sw_state_diagnostic[unit].dpp.soc.qax.tm.lb_info.lb_egr_if_bmp_used.dump(unit);
    sw_state_diagnostic[unit].dpp.soc.qax.tm.lb_info.lb_ing_modem_fragment_cnt.dump(unit);
    sw_state_diagnostic[unit].dpp.soc.qax.tm.lb_info.lb_ing_modem_byte_cnt.dump(unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_tm_lb_info_lb_egr_if_bmp_used_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.soc.qax.tm.lb_info.lb_egr_if_bmp_used, sizeof(*sw_state[unit]->dpp.soc.qax.tm.lb_info.lb_egr_if_bmp_used), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.tm.lb_info.lb_egr_if_bmp_used[j0],
                "sw_state[%d]->dpp.soc.qax.tm.lb_info.lb_egr_if_bmp_used[%d]: ", unit, j0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_tm_lb_info_lb_ing_modem_fragment_cnt_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.qax.tm.lb_info.lb_ing_modem_fragment_cnt
            , sizeof(*sw_state[unit]->dpp.soc.qax.tm.lb_info.lb_ing_modem_fragment_cnt), SOC_TMC_LB_NOF_MODEM) ? SOC_TMC_LB_NOF_MODEM - 1 : 0;
        for (; i0 < SOC_TMC_LB_NOF_MODEM; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.tm.lb_info.lb_ing_modem_fragment_cnt[i0],
                "sw_state[%d]->dpp.soc.qax.tm.lb_info.lb_ing_modem_fragment_cnt[%d]: ", unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_tm_lb_info_lb_ing_modem_byte_cnt_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.qax.tm.lb_info.lb_ing_modem_byte_cnt
            , sizeof(*sw_state[unit]->dpp.soc.qax.tm.lb_info.lb_ing_modem_byte_cnt), SOC_TMC_LB_NOF_MODEM) ? SOC_TMC_LB_NOF_MODEM - 1 : 0;
        for (; i0 < SOC_TMC_LB_NOF_MODEM; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.tm.lb_info.lb_ing_modem_byte_cnt[i0],
                "sw_state[%d]->dpp.soc.qax.tm.lb_info.lb_ing_modem_byte_cnt[%d]: ", unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_tm_guaranteed_info_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.qax.tm.guaranteed_info
            , sizeof(*sw_state[unit]->dpp.soc.qax.tm.guaranteed_info), SOC_DPP_DEFS_MAX(NOF_CORES)) ? SOC_DPP_DEFS_MAX(NOF_CORES) - 1 : 0;
        for (; i0 < SOC_DPP_DEFS_MAX(NOF_CORES); i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.tm.guaranteed_info.guaranteed.dump(unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_tm_guaranteed_info_guaranteed_dump(int unit, int guaranteed_info_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.qax.tm.guaranteed_info[guaranteed_info_idx_0].guaranteed
            , sizeof(*sw_state[unit]->dpp.soc.qax.tm.guaranteed_info[guaranteed_info_idx_0].guaranteed), SOC_TMC_INGRESS_THRESHOLD_NOF_TYPES) ? SOC_TMC_INGRESS_THRESHOLD_NOF_TYPES - 1 : 0;
        for (; i0 < SOC_TMC_INGRESS_THRESHOLD_NOF_TYPES; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.tm.guaranteed_info.guaranteed.total.dump(unit, guaranteed_info_idx_0, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.tm.guaranteed_info.guaranteed.used.dump(unit, guaranteed_info_idx_0, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_tm_guaranteed_info_guaranteed_total_dump(int unit, int guaranteed_info_idx_0, int guaranteed_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.tm.guaranteed_info[guaranteed_info_idx_0].guaranteed[guaranteed_idx_0].total,
        "sw_state[%d]->dpp.soc.qax.tm.guaranteed_info[%d].guaranteed[%d].total: ", unit, guaranteed_info_idx_0, guaranteed_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_tm_guaranteed_info_guaranteed_used_dump(int unit, int guaranteed_info_idx_0, int guaranteed_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.tm.guaranteed_info[guaranteed_info_idx_0].guaranteed[guaranteed_idx_0].used,
        "sw_state[%d]->dpp.soc.qax.tm.guaranteed_info[%d].guaranteed[%d].used: ", unit, guaranteed_info_idx_0, guaranteed_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_tm_lossless_pool_id_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.qax.tm.lossless_pool_id
            , sizeof(*sw_state[unit]->dpp.soc.qax.tm.lossless_pool_id), SOC_DPP_DEFS_MAX(NOF_CORES)) ? SOC_DPP_DEFS_MAX(NOF_CORES) - 1 : 0;
        for (; i0 < SOC_DPP_DEFS_MAX(NOF_CORES); i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.tm.lossless_pool_id[i0],
                "sw_state[%d]->dpp.soc.qax.tm.lossless_pool_id[%d]: ", unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_pp_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.soc.qax.pp.mep_db.dump(unit);
#endif
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_pp_mep_db_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    sw_state_diagnostic[unit].dpp.soc.qax.pp.mep_db.flexible_verification_use_indicator.dump(unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_pp_mep_db_flexible_verification_use_indicator_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.soc.qax.pp.mep_db.flexible_verification_use_indicator, sizeof(*sw_state[unit]->dpp.soc.qax.pp.mep_db.flexible_verification_use_indicator), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.pp.mep_db.flexible_verification_use_indicator[j0],
                "sw_state[%d]->dpp.soc.qax.pp.mep_db.flexible_verification_use_indicator[%d]: ", unit, j0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.ipsec_port.dump(unit);
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.num_of_ipsec_channels.dump(unit);
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.num_of_bfd_channels.dump(unit);
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa_to_tunnel_map.dump(unit);
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.dump(unit);
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.dump(unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_ipsec_port_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.ipsec_port,
        "sw_state[%d]->dpp.soc.qax.ipsec.ipsec_port: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_num_of_ipsec_channels_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.num_of_ipsec_channels,
        "sw_state[%d]->dpp.soc.qax.ipsec.num_of_ipsec_channels: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_num_of_bfd_channels_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.num_of_bfd_channels,
        "sw_state[%d]->dpp.soc.qax.ipsec.num_of_bfd_channels: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_sa_to_tunnel_map_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.qax.ipsec.sa_to_tunnel_map
            , sizeof(*sw_state[unit]->dpp.soc.qax.ipsec.sa_to_tunnel_map), BCM_IPSEC_MAX_NUM_OF_SA) ? BCM_IPSEC_MAX_NUM_OF_SA - 1 : 0;
        for (; i0 < BCM_IPSEC_MAX_NUM_OF_SA; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.sa_to_tunnel_map[i0],
                "sw_state[%d]->dpp.soc.qax.ipsec.sa_to_tunnel_map[%d]: ", unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_sa_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.qax.ipsec.sa
            , sizeof(*sw_state[unit]->dpp.soc.qax.ipsec.sa), BCM_IPSEC_MAX_NUM_OF_SA) ? BCM_IPSEC_MAX_NUM_OF_SA - 1 : 0;
        for (; i0 < BCM_IPSEC_MAX_NUM_OF_SA; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.initial_seq_num.dump(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.mtu.dump(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.fragmentation_enable.dump(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.encrypt_type.dump(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.auth_type.dump(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.sa_direction.dump(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.spi.dump(unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_sa_initial_seq_num_dump(int unit, int sa_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.sa[sa_idx_0].initial_seq_num,
        "sw_state[%d]->dpp.soc.qax.ipsec.sa[%d].initial_seq_num: ", unit, sa_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_sa_mtu_dump(int unit, int sa_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.sa[sa_idx_0].mtu,
        "sw_state[%d]->dpp.soc.qax.ipsec.sa[%d].mtu: ", unit, sa_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_sa_fragmentation_enable_dump(int unit, int sa_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.sa[sa_idx_0].fragmentation_enable,
        "sw_state[%d]->dpp.soc.qax.ipsec.sa[%d].fragmentation_enable: ", unit, sa_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_sa_encrypt_type_dump(int unit, int sa_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.sa[sa_idx_0].encrypt_type,
        "sw_state[%d]->dpp.soc.qax.ipsec.sa[%d].encrypt_type: ", unit, sa_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_sa_auth_type_dump(int unit, int sa_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.sa[sa_idx_0].auth_type,
        "sw_state[%d]->dpp.soc.qax.ipsec.sa[%d].auth_type: ", unit, sa_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_sa_sa_direction_dump(int unit, int sa_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.sa[sa_idx_0].sa_direction,
        "sw_state[%d]->dpp.soc.qax.ipsec.sa[%d].sa_direction: ", unit, sa_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_sa_spi_dump(int unit, int sa_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.sa[sa_idx_0].spi,
        "sw_state[%d]->dpp.soc.qax.ipsec.sa[%d].spi: ", unit, sa_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_tunnel_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.qax.ipsec.tunnel
            , sizeof(*sw_state[unit]->dpp.soc.qax.ipsec.tunnel), BCM_IPSEC_MAX_NUM_OF_IPSEC_TUNNEL) ? BCM_IPSEC_MAX_NUM_OF_IPSEC_TUNNEL - 1 : 0;
        for (; i0 < BCM_IPSEC_MAX_NUM_OF_IPSEC_TUNNEL; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.context_id.dump(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.local_ip.dump(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.remote_ip.dump(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.protocol.dump(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.ttl.dump(unit, i0);
            sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.dscp.dump(unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_tunnel_context_id_dump(int unit, int tunnel_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].context_id,
        "sw_state[%d]->dpp.soc.qax.ipsec.tunnel[%d].context_id: ", unit, tunnel_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_tunnel_local_ip_dump(int unit, int tunnel_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.local_ip.ipv4_addr.dump(unit, tunnel_idx_0);
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.local_ip.ipv6_addr.dump(unit, tunnel_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_tunnel_local_ip_ipv4_addr_dump(int unit, int tunnel_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].local_ip.ipv4_addr,
        "sw_state[%d]->dpp.soc.qax.ipsec.tunnel[%d].local_ip.ipv4_addr: ", unit, tunnel_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_tunnel_local_ip_ipv6_addr_dump(int unit, int tunnel_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].local_ip.ipv6_addr
            , sizeof(*sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].local_ip.ipv6_addr), 16) ? 16 - 1 : 0;
        for (; i0 < 16; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].local_ip.ipv6_addr[i0],
                "sw_state[%d]->dpp.soc.qax.ipsec.tunnel[%d].local_ip.ipv6_addr[%d]: ", unit, tunnel_idx_0, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_tunnel_remote_ip_dump(int unit, int tunnel_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.remote_ip.ipv4_addr.dump(unit, tunnel_idx_0);
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.remote_ip.ipv6_addr.dump(unit, tunnel_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_tunnel_remote_ip_ipv4_addr_dump(int unit, int tunnel_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].remote_ip.ipv4_addr,
        "sw_state[%d]->dpp.soc.qax.ipsec.tunnel[%d].remote_ip.ipv4_addr: ", unit, tunnel_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_tunnel_remote_ip_ipv6_addr_dump(int unit, int tunnel_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].remote_ip.ipv6_addr
            , sizeof(*sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].remote_ip.ipv6_addr), 16) ? 16 - 1 : 0;
        for (; i0 < 16; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].remote_ip.ipv6_addr[i0],
                "sw_state[%d]->dpp.soc.qax.ipsec.tunnel[%d].remote_ip.ipv6_addr[%d]: ", unit, tunnel_idx_0, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_tunnel_protocol_dump(int unit, int tunnel_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].protocol,
        "sw_state[%d]->dpp.soc.qax.ipsec.tunnel[%d].protocol: ", unit, tunnel_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_tunnel_ttl_dump(int unit, int tunnel_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].ttl,
        "sw_state[%d]->dpp.soc.qax.ipsec.tunnel[%d].ttl: ", unit, tunnel_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_qax_ipsec_tunnel_dscp_dump(int unit, int tunnel_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.qax.ipsec.tunnel[tunnel_idx_0].dscp,
        "sw_state[%d]->dpp.soc.qax.ipsec.tunnel[%d].dscp: ", unit, tunnel_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 


int
sw_state_dpp_soc_qax_diagnostic_cb_init(int unit){
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.dump = sw_state_dpp_soc_qax_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.tm.dump = sw_state_dpp_soc_qax_tm_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.tm.lb_info.dump = sw_state_dpp_soc_qax_tm_lb_info_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.tm.lb_info.lb_egr_if_bmp_used.dump = sw_state_dpp_soc_qax_tm_lb_info_lb_egr_if_bmp_used_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.tm.lb_info.lb_ing_modem_fragment_cnt.dump = sw_state_dpp_soc_qax_tm_lb_info_lb_ing_modem_fragment_cnt_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.tm.lb_info.lb_ing_modem_byte_cnt.dump = sw_state_dpp_soc_qax_tm_lb_info_lb_ing_modem_byte_cnt_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.tm.guaranteed_info.dump = sw_state_dpp_soc_qax_tm_guaranteed_info_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.tm.guaranteed_info.guaranteed.dump = sw_state_dpp_soc_qax_tm_guaranteed_info_guaranteed_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.tm.guaranteed_info.guaranteed.total.dump = sw_state_dpp_soc_qax_tm_guaranteed_info_guaranteed_total_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.tm.guaranteed_info.guaranteed.used.dump = sw_state_dpp_soc_qax_tm_guaranteed_info_guaranteed_used_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.tm.lossless_pool_id.dump = sw_state_dpp_soc_qax_tm_lossless_pool_id_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.pp.dump = sw_state_dpp_soc_qax_pp_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.pp.mep_db.dump = sw_state_dpp_soc_qax_pp_mep_db_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.pp.mep_db.flexible_verification_use_indicator.dump = sw_state_dpp_soc_qax_pp_mep_db_flexible_verification_use_indicator_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.dump = sw_state_dpp_soc_qax_ipsec_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.ipsec_port.dump = sw_state_dpp_soc_qax_ipsec_ipsec_port_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.num_of_ipsec_channels.dump = sw_state_dpp_soc_qax_ipsec_num_of_ipsec_channels_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.num_of_bfd_channels.dump = sw_state_dpp_soc_qax_ipsec_num_of_bfd_channels_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa_to_tunnel_map.dump = sw_state_dpp_soc_qax_ipsec_sa_to_tunnel_map_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.dump = sw_state_dpp_soc_qax_ipsec_sa_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.initial_seq_num.dump = sw_state_dpp_soc_qax_ipsec_sa_initial_seq_num_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.mtu.dump = sw_state_dpp_soc_qax_ipsec_sa_mtu_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.fragmentation_enable.dump = sw_state_dpp_soc_qax_ipsec_sa_fragmentation_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.encrypt_type.dump = sw_state_dpp_soc_qax_ipsec_sa_encrypt_type_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.auth_type.dump = sw_state_dpp_soc_qax_ipsec_sa_auth_type_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.sa_direction.dump = sw_state_dpp_soc_qax_ipsec_sa_sa_direction_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.sa.spi.dump = sw_state_dpp_soc_qax_ipsec_sa_spi_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.dump = sw_state_dpp_soc_qax_ipsec_tunnel_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.context_id.dump = sw_state_dpp_soc_qax_ipsec_tunnel_context_id_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.local_ip.dump = sw_state_dpp_soc_qax_ipsec_tunnel_local_ip_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.local_ip.ipv4_addr.dump = sw_state_dpp_soc_qax_ipsec_tunnel_local_ip_ipv4_addr_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.local_ip.ipv6_addr.dump = sw_state_dpp_soc_qax_ipsec_tunnel_local_ip_ipv6_addr_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.remote_ip.dump = sw_state_dpp_soc_qax_ipsec_tunnel_remote_ip_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.remote_ip.ipv4_addr.dump = sw_state_dpp_soc_qax_ipsec_tunnel_remote_ip_ipv4_addr_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.remote_ip.ipv6_addr.dump = sw_state_dpp_soc_qax_ipsec_tunnel_remote_ip_ipv6_addr_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.protocol.dump = sw_state_dpp_soc_qax_ipsec_tunnel_protocol_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.ttl.dump = sw_state_dpp_soc_qax_ipsec_tunnel_ttl_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.qax.ipsec.tunnel.dscp.dump = sw_state_dpp_soc_qax_ipsec_tunnel_dscp_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
#endif /* BCM_WARM_BOOT_API_TEST */
