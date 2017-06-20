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
#include <shared/swstate/diagnostic/sw_state_dpp_bcm_lif_linked_list_diagnostic.h>

#ifdef BCM_WARM_BOOT_API_TEST
#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.bcm.lif_linked_list, sizeof(*sw_state[unit]->dpp.bcm.lif_linked_list), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_lists.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_list_members.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.dump(unit, j0);
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
int sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_lists_dump(int unit, int lif_linked_list_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.lif_linked_list->max_nof_lif_linked_lists,
        "sw_state[%d]->dpp.bcm.lif_linked_list->max_nof_lif_linked_lists: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_dump(int unit, int lif_linked_list_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array, sizeof(*sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.first_member.dump(unit, lif_linked_list_idx_0, j0);
            sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.size.dump(unit, lif_linked_list_idx_0, j0);
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
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_first_member_dump(int unit, int lif_linked_list_idx_0, int lif_linked_lists_array_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array[lif_linked_lists_array_idx_0].first_member,
        "sw_state[%d]->dpp.bcm.lif_linked_list->lif_linked_lists_array[%d].first_member: ", unit, lif_linked_lists_array_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_size_dump(int unit, int lif_linked_list_idx_0, int lif_linked_lists_array_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array[lif_linked_lists_array_idx_0].size,
        "sw_state[%d]->dpp.bcm.lif_linked_list->lif_linked_lists_array[%d].size: ", unit, lif_linked_lists_array_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_list_members_dump(int unit, int lif_linked_list_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.lif_linked_list->max_nof_lif_linked_list_members,
        "sw_state[%d]->dpp.bcm.lif_linked_list->max_nof_lif_linked_list_members: ", unit);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_dump(int unit, int lif_linked_list_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array, sizeof(*sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.lif_id.dump(unit, lif_linked_list_idx_0, j0);
            sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.is_even.dump(unit, lif_linked_list_idx_0, j0);
            sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.next.dump(unit, lif_linked_list_idx_0, j0);
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
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_lif_id_dump(int unit, int lif_linked_list_idx_0, int lif_linked_list_members_array_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[lif_linked_list_members_array_idx_0].lif_id,
        "sw_state[%d]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[%d].lif_id: ", unit, lif_linked_list_members_array_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_is_even_dump(int unit, int lif_linked_list_idx_0, int lif_linked_list_members_array_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[lif_linked_list_members_array_idx_0].is_even,
        "sw_state[%d]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[%d].is_even: ", unit, lif_linked_list_members_array_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_next_dump(int unit, int lif_linked_list_idx_0, int lif_linked_list_members_array_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[lif_linked_list_members_array_idx_0].next,
        "sw_state[%d]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[%d].next: ", unit, lif_linked_list_members_array_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 


int
sw_state_dpp_bcm_lif_linked_list_diagnostic_cb_init(int unit){
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.dump = sw_state_dpp_bcm_lif_linked_list_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_lists.dump = sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_lists_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.dump = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.first_member.dump = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_first_member_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.size.dump = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_size_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_list_members.dump = sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_list_members_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.dump = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.lif_id.dump = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_lif_id_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.is_even.dump = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_is_even_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.next.dump = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_next_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
#endif /* BCM_WARM_BOOT_API_TEST */
