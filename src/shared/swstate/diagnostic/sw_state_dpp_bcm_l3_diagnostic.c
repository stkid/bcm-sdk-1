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
#include <shared/swstate/diagnostic/sw_state_dpp_bcm_l3_diagnostic.h>

#ifdef BCM_WARM_BOOT_API_TEST
#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_l3_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.bcm.l3, sizeof(*sw_state[unit]->dpp.bcm.l3), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.l3.used_intf.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.l3.used_vrf.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.l3.used_host.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.l3.used_route.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.l3.dpp_l3_state.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.l3.vrrp_protocol_set_types.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.l3.vrrp_protocol_set_counts.dump(unit, j0);
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
int sw_state_dpp_bcm_l3_used_intf_dump(int unit, int l3_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.l3->used_intf,
        "sw_state[%d]->dpp.bcm.l3->used_intf: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_l3_used_vrf_dump(int unit, int l3_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.l3->used_vrf,
        "sw_state[%d]->dpp.bcm.l3->used_vrf: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_l3_used_host_dump(int unit, int l3_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.l3->used_host,
        "sw_state[%d]->dpp.bcm.l3->used_host: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_l3_used_route_dump(int unit, int l3_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.l3->used_route,
        "sw_state[%d]->dpp.bcm.l3->used_route: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_l3_dpp_l3_state_dump(int unit, int l3_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.bcm.l3->dpp_l3_state, sizeof(*sw_state[unit]->dpp.bcm.l3->dpp_l3_state), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.l3.dpp_l3_state.init.dump(unit, l3_idx_0, j0);
            sw_state_diagnostic[unit].dpp.bcm.l3.dpp_l3_state.urpf_mode.dump(unit, l3_idx_0, j0);
            sw_state_diagnostic[unit].dpp.bcm.l3.dpp_l3_state.bcm_tunnel_intf_to_eep.dump(unit, l3_idx_0, j0);
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
int sw_state_dpp_bcm_l3_dpp_l3_state_init_dump(int unit, int l3_idx_0, int dpp_l3_state_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.l3->dpp_l3_state->init,
        "sw_state[%d]->dpp.bcm.l3->dpp_l3_state->init: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_l3_dpp_l3_state_urpf_mode_dump(int unit, int l3_idx_0, int dpp_l3_state_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.l3->dpp_l3_state->urpf_mode,
        "sw_state[%d]->dpp.bcm.l3->dpp_l3_state->urpf_mode: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_l3_dpp_l3_state_bcm_tunnel_intf_to_eep_dump(int unit, int l3_idx_0, int dpp_l3_state_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.bcm.l3->dpp_l3_state->bcm_tunnel_intf_to_eep, sizeof(*sw_state[unit]->dpp.bcm.l3->dpp_l3_state->bcm_tunnel_intf_to_eep), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.l3->dpp_l3_state->bcm_tunnel_intf_to_eep[j0],
                "sw_state[%d]->dpp.bcm.l3->dpp_l3_state->bcm_tunnel_intf_to_eep[%d]: ", unit, j0);
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
int sw_state_dpp_bcm_l3_vrrp_protocol_set_types_dump(int unit, int l3_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.bcm.l3->vrrp_protocol_set_types
            , sizeof(*sw_state[unit]->dpp.bcm.l3->vrrp_protocol_set_types), SOC_DPP_DEFS_MAX(VRRP_NOF_PROTOCOL_GROUPS)) ? SOC_DPP_DEFS_MAX(VRRP_NOF_PROTOCOL_GROUPS) - 1 : 0;
        for (; i0 < SOC_DPP_DEFS_MAX(VRRP_NOF_PROTOCOL_GROUPS); i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.l3->vrrp_protocol_set_types[i0],
                "sw_state[%d]->dpp.bcm.l3->vrrp_protocol_set_types[%d]: ", unit, i0);
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
int sw_state_dpp_bcm_l3_vrrp_protocol_set_counts_dump(int unit, int l3_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.bcm.l3->vrrp_protocol_set_counts
            , sizeof(*sw_state[unit]->dpp.bcm.l3->vrrp_protocol_set_counts), SOC_DPP_DEFS_MAX(VRRP_NOF_PROTOCOL_GROUPS)) ? SOC_DPP_DEFS_MAX(VRRP_NOF_PROTOCOL_GROUPS) - 1 : 0;
        for (; i0 < SOC_DPP_DEFS_MAX(VRRP_NOF_PROTOCOL_GROUPS); i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.l3->vrrp_protocol_set_counts[i0],
                "sw_state[%d]->dpp.bcm.l3->vrrp_protocol_set_counts[%d]: ", unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 


int
sw_state_dpp_bcm_l3_diagnostic_cb_init(int unit){
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.l3.dump = sw_state_dpp_bcm_l3_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.l3.used_intf.dump = sw_state_dpp_bcm_l3_used_intf_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.l3.used_vrf.dump = sw_state_dpp_bcm_l3_used_vrf_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.l3.used_host.dump = sw_state_dpp_bcm_l3_used_host_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.l3.used_route.dump = sw_state_dpp_bcm_l3_used_route_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.l3.dpp_l3_state.dump = sw_state_dpp_bcm_l3_dpp_l3_state_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.l3.dpp_l3_state.init.dump = sw_state_dpp_bcm_l3_dpp_l3_state_init_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.l3.dpp_l3_state.urpf_mode.dump = sw_state_dpp_bcm_l3_dpp_l3_state_urpf_mode_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.l3.dpp_l3_state.bcm_tunnel_intf_to_eep.dump = sw_state_dpp_bcm_l3_dpp_l3_state_bcm_tunnel_intf_to_eep_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.l3.vrrp_protocol_set_types.dump = sw_state_dpp_bcm_l3_vrrp_protocol_set_types_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.l3.vrrp_protocol_set_counts.dump = sw_state_dpp_bcm_l3_vrrp_protocol_set_counts_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
#endif /* BCM_WARM_BOOT_API_TEST */
