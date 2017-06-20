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
#include <shared/swstate/diagnostic/sw_state_dpp_soc_arad_pp_oper_mode_diagnostic.h>

#ifdef BCM_WARM_BOOT_API_TEST
#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_dump(int unit, int pp_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode, sizeof(*sw_state[unit]->dpp.soc.arad.pp->oper_mode), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.authentication_enable.dump(unit, pp_idx_0, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.system_vsi_enable.dump(unit, pp_idx_0, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.hairpin_enable.dump(unit, pp_idx_0, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.split_horizon_filter_enable.dump(unit, pp_idx_0, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.dump(unit, pp_idx_0, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.p2p_info.dump(unit, pp_idx_0, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.dump(unit, pp_idx_0, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mim_enable.dump(unit, pp_idx_0, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.oam_enable.dump(unit, pp_idx_0, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.bfd_enable.dump(unit, pp_idx_0, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.trill_enable.dump(unit, pp_idx_0, j0);
            sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mim_initialized.dump(unit, pp_idx_0, j0);
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
int sw_state_dpp_soc_arad_pp_oper_mode_authentication_enable_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->authentication_enable,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->authentication_enable: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_system_vsi_enable_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->system_vsi_enable,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->system_vsi_enable: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_hairpin_enable_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->hairpin_enable,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->hairpin_enable: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_split_horizon_filter_enable_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->split_horizon_filter_enable,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->split_horizon_filter_enable: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.pvlan_enable.dump(unit, pp_idx_0, oper_mode_idx_0);
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.nof_vrfs.dump(unit, pp_idx_0, oper_mode_idx_0);
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.max_routes_in_vrf.dump(unit, pp_idx_0, oper_mode_idx_0);
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.bits_in_phase.dump(unit, pp_idx_0, oper_mode_idx_0);
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.bits_in_phase_valid.dump(unit, pp_idx_0, oper_mode_idx_0);
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.flags.dump(unit, pp_idx_0, oper_mode_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_pvlan_enable_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->ipv4_info.pvlan_enable,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->ipv4_info.pvlan_enable: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_nof_vrfs_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->ipv4_info.nof_vrfs,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->ipv4_info.nof_vrfs: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_max_routes_in_vrf_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->ipv4_info.max_routes_in_vrf
            , sizeof(*sw_state[unit]->dpp.soc.arad.pp->oper_mode->ipv4_info.max_routes_in_vrf), SOC_DPP_DEFS_MAX(NOF_VRFS)) ? SOC_DPP_DEFS_MAX(NOF_VRFS) - 1 : 0;
        for (; i0 < SOC_DPP_DEFS_MAX(NOF_VRFS); i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->ipv4_info.max_routes_in_vrf[i0],
                "sw_state[%d]->dpp.soc.arad.pp->oper_mode->ipv4_info.max_routes_in_vrf[%d]: ", unit, i0);
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
int sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_bits_in_phase_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->ipv4_info.bits_in_phase
            , sizeof(*sw_state[unit]->dpp.soc.arad.pp->oper_mode->ipv4_info.bits_in_phase), ARAD_PP_MGMT_IPV4_LPM_BANKS) ? ARAD_PP_MGMT_IPV4_LPM_BANKS - 1 : 0;
        for (; i0 < ARAD_PP_MGMT_IPV4_LPM_BANKS; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->ipv4_info.bits_in_phase[i0],
                "sw_state[%d]->dpp.soc.arad.pp->oper_mode->ipv4_info.bits_in_phase[%d]: ", unit, i0);
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
int sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_bits_in_phase_valid_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->ipv4_info.bits_in_phase_valid,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->ipv4_info.bits_in_phase_valid: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_flags_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->ipv4_info.flags,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->ipv4_info.flags: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_p2p_info_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.p2p_info.mim_vsi.dump(unit, pp_idx_0, oper_mode_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_p2p_info_mim_vsi_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->p2p_info.mim_vsi,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->p2p_info.mim_vsi: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.mpls_ether_types.dump(unit, pp_idx_0, oper_mode_idx_0);
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.mpls_termination_label_index_enable.dump(unit, pp_idx_0, oper_mode_idx_0);
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.fast_reroute_labels_enable.dump(unit, pp_idx_0, oper_mode_idx_0);
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.lookup_include_inrif.dump(unit, pp_idx_0, oper_mode_idx_0);
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.lookup_include_vrf.dump(unit, pp_idx_0, oper_mode_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_mpls_ether_types_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->mpls_info.mpls_ether_types
            , sizeof(*sw_state[unit]->dpp.soc.arad.pp->oper_mode->mpls_info.mpls_ether_types), ARAD_PP_MGMT_MPLS_NOF_ETHER_TYPES) ? ARAD_PP_MGMT_MPLS_NOF_ETHER_TYPES - 1 : 0;
        for (; i0 < ARAD_PP_MGMT_MPLS_NOF_ETHER_TYPES; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->mpls_info.mpls_ether_types[i0],
                "sw_state[%d]->dpp.soc.arad.pp->oper_mode->mpls_info.mpls_ether_types[%d]: ", unit, i0);
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
int sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_mpls_termination_label_index_enable_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->mpls_info.mpls_termination_label_index_enable,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->mpls_info.mpls_termination_label_index_enable: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_fast_reroute_labels_enable_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->mpls_info.fast_reroute_labels_enable,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->mpls_info.fast_reroute_labels_enable: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_lookup_include_inrif_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->mpls_info.lookup_include_inrif,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->mpls_info.lookup_include_inrif: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_lookup_include_vrf_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->mpls_info.lookup_include_vrf,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->mpls_info.lookup_include_vrf: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_mim_enable_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->mim_enable,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->mim_enable: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_oam_enable_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->oam_enable,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->oam_enable: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_bfd_enable_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->bfd_enable,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->bfd_enable: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_trill_enable_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->trill_enable,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->trill_enable: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_oper_mode_mim_initialized_dump(int unit, int pp_idx_0, int oper_mode_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.pp->oper_mode->mim_initialized,
        "sw_state[%d]->dpp.soc.arad.pp->oper_mode->mim_initialized: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 


int
sw_state_dpp_soc_arad_pp_oper_mode_diagnostic_cb_init(int unit){
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.dump = sw_state_dpp_soc_arad_pp_oper_mode_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.authentication_enable.dump = sw_state_dpp_soc_arad_pp_oper_mode_authentication_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.system_vsi_enable.dump = sw_state_dpp_soc_arad_pp_oper_mode_system_vsi_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.hairpin_enable.dump = sw_state_dpp_soc_arad_pp_oper_mode_hairpin_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.split_horizon_filter_enable.dump = sw_state_dpp_soc_arad_pp_oper_mode_split_horizon_filter_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.dump = sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.pvlan_enable.dump = sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_pvlan_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.nof_vrfs.dump = sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_nof_vrfs_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.max_routes_in_vrf.dump = sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_max_routes_in_vrf_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.bits_in_phase.dump = sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_bits_in_phase_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.bits_in_phase_valid.dump = sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_bits_in_phase_valid_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.ipv4_info.flags.dump = sw_state_dpp_soc_arad_pp_oper_mode_ipv4_info_flags_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.p2p_info.dump = sw_state_dpp_soc_arad_pp_oper_mode_p2p_info_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.p2p_info.mim_vsi.dump = sw_state_dpp_soc_arad_pp_oper_mode_p2p_info_mim_vsi_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.dump = sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.mpls_ether_types.dump = sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_mpls_ether_types_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.mpls_termination_label_index_enable.dump = sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_mpls_termination_label_index_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.fast_reroute_labels_enable.dump = sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_fast_reroute_labels_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.lookup_include_inrif.dump = sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_lookup_include_inrif_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mpls_info.lookup_include_vrf.dump = sw_state_dpp_soc_arad_pp_oper_mode_mpls_info_lookup_include_vrf_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mim_enable.dump = sw_state_dpp_soc_arad_pp_oper_mode_mim_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.oam_enable.dump = sw_state_dpp_soc_arad_pp_oper_mode_oam_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.bfd_enable.dump = sw_state_dpp_soc_arad_pp_oper_mode_bfd_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.trill_enable.dump = sw_state_dpp_soc_arad_pp_oper_mode_trill_enable_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.pp.oper_mode.mim_initialized.dump = sw_state_dpp_soc_arad_pp_oper_mode_mim_initialized_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
#endif /* BCM_WARM_BOOT_API_TEST */
