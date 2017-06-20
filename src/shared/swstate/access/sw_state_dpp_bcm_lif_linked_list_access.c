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
#include <shared/swstate/access/sw_state_access.h>
#include <shared/swstate/access/sw_state_dpp_bcm_lif_linked_list_access.h>

#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_alloc(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list,
        sizeof(bcm_dpp_lif_linked_list_t),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_bcm_lif_linked_list_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list,
        SW_STATE_NONE,
        "sw_state_dpp_bcm_lif_linked_list_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.bcm.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.bcm.lif_linked_list);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_lists_set(int unit, uint32 max_nof_lif_linked_lists){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_lists.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->max_nof_lif_linked_lists,
        max_nof_lif_linked_lists,
        uint32,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_lists_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_lists_get(int unit, uint32 *max_nof_lif_linked_lists){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_lists.verify( unit));
    *max_nof_lif_linked_lists = sw_state[unit]->dpp.bcm.lif_linked_list->max_nof_lif_linked_lists;
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_lists_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.bcm.lif_linked_list.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_set(int unit, int lif_linked_lists_array_idx_0, CONST failover_free_lif_linked_list_t *lif_linked_lists_array){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.verify( unit, lif_linked_lists_array_idx_0));
    SHR_SW_STATE_MEMSET(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array[lif_linked_lists_array_idx_0],
        lif_linked_lists_array,
        failover_free_lif_linked_list_t,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_get(int unit, int lif_linked_lists_array_idx_0, failover_free_lif_linked_list_t *lif_linked_lists_array){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.verify( unit, lif_linked_lists_array_idx_0));
    *lif_linked_lists_array = sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array[lif_linked_lists_array_idx_0];
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_alloc(int unit, int nof_instances_to_alloc){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array,
        nof_instances_to_alloc * sizeof(failover_free_lif_linked_list_t),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array,
        SW_STATE_NONE,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_verify(int unit, int lif_linked_lists_array_idx_0){
    uint32 allocated_size = 0;
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.bcm.lif_linked_list.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array);
    _SOC_IF_ERR_EXIT(shr_sw_state_allocated_size_get (unit, (uint8*)sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array, &allocated_size));
    SW_STATE_OUT_OF_BOUND_CHECK( lif_linked_lists_array_idx_0, allocated_size /
        sizeof(*(sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array)) - 1, "lif_linked_lists_array");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_first_member_set(int unit, int lif_linked_lists_array_idx_0, int first_member){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.first_member.verify( unit, lif_linked_lists_array_idx_0));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array[lif_linked_lists_array_idx_0].first_member,
        first_member,
        int,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_first_member_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_first_member_get(int unit, int lif_linked_lists_array_idx_0, int *first_member){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.first_member.verify( unit, lif_linked_lists_array_idx_0));
    *first_member = sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array[lif_linked_lists_array_idx_0].first_member;
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_first_member_verify(int unit, int lif_linked_lists_array_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.verify( unit, lif_linked_lists_array_idx_0);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_size_set(int unit, int lif_linked_lists_array_idx_0, uint32 size){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.size.verify( unit, lif_linked_lists_array_idx_0));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array[lif_linked_lists_array_idx_0].size,
        size,
        uint32,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_size_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_size_get(int unit, int lif_linked_lists_array_idx_0, uint32 *size){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.size.verify( unit, lif_linked_lists_array_idx_0));
    *size = sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_lists_array[lif_linked_lists_array_idx_0].size;
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_size_verify(int unit, int lif_linked_lists_array_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.verify( unit, lif_linked_lists_array_idx_0);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_list_members_set(int unit, uint32 max_nof_lif_linked_list_members){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_list_members.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->max_nof_lif_linked_list_members,
        max_nof_lif_linked_list_members,
        uint32,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_list_members_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_list_members_get(int unit, uint32 *max_nof_lif_linked_list_members){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_list_members.verify( unit));
    *max_nof_lif_linked_list_members = sw_state[unit]->dpp.bcm.lif_linked_list->max_nof_lif_linked_list_members;
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_list_members_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.bcm.lif_linked_list.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_set(int unit, int lif_linked_list_members_array_idx_0, CONST failover_free_lif_linked_list_member_t *lif_linked_list_members_array){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.verify( unit, lif_linked_list_members_array_idx_0));
    SHR_SW_STATE_MEMSET(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[lif_linked_list_members_array_idx_0],
        lif_linked_list_members_array,
        failover_free_lif_linked_list_member_t,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_get(int unit, int lif_linked_list_members_array_idx_0, failover_free_lif_linked_list_member_t *lif_linked_list_members_array){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.verify( unit, lif_linked_list_members_array_idx_0));
    *lif_linked_list_members_array = sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[lif_linked_list_members_array_idx_0];
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_alloc(int unit, int nof_instances_to_alloc){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array,
        nof_instances_to_alloc * sizeof(failover_free_lif_linked_list_member_t),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array,
        SW_STATE_NONE,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_verify(int unit, int lif_linked_list_members_array_idx_0){
    uint32 allocated_size = 0;
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.bcm.lif_linked_list.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array);
    _SOC_IF_ERR_EXIT(shr_sw_state_allocated_size_get (unit, (uint8*)sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array, &allocated_size));
    SW_STATE_OUT_OF_BOUND_CHECK( lif_linked_list_members_array_idx_0, allocated_size /
        sizeof(*(sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array)) - 1, "lif_linked_list_members_array");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_lif_id_set(int unit, int lif_linked_list_members_array_idx_0, int lif_id){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.lif_id.verify( unit, lif_linked_list_members_array_idx_0));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[lif_linked_list_members_array_idx_0].lif_id,
        lif_id,
        int,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_lif_id_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_lif_id_get(int unit, int lif_linked_list_members_array_idx_0, int *lif_id){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.lif_id.verify( unit, lif_linked_list_members_array_idx_0));
    *lif_id = sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[lif_linked_list_members_array_idx_0].lif_id;
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_lif_id_verify(int unit, int lif_linked_list_members_array_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.verify( unit, lif_linked_list_members_array_idx_0);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_is_even_set(int unit, int lif_linked_list_members_array_idx_0, uint8 is_even){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.is_even.verify( unit, lif_linked_list_members_array_idx_0));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[lif_linked_list_members_array_idx_0].is_even,
        is_even,
        uint8,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_is_even_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_is_even_get(int unit, int lif_linked_list_members_array_idx_0, uint8 *is_even){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.is_even.verify( unit, lif_linked_list_members_array_idx_0));
    *is_even = sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[lif_linked_list_members_array_idx_0].is_even;
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_is_even_verify(int unit, int lif_linked_list_members_array_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.verify( unit, lif_linked_list_members_array_idx_0);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_next_set(int unit, int lif_linked_list_members_array_idx_0, int next){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.next.verify( unit, lif_linked_list_members_array_idx_0));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[lif_linked_list_members_array_idx_0].next,
        next,
        int,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_next_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_next_get(int unit, int lif_linked_list_members_array_idx_0, int *next){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.next.verify( unit, lif_linked_list_members_array_idx_0));
    *next = sw_state[unit]->dpp.bcm.lif_linked_list->lif_linked_list_members_array[lif_linked_list_members_array_idx_0].next;
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_next_verify(int unit, int lif_linked_list_members_array_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.verify( unit, lif_linked_list_members_array_idx_0);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 


int
sw_state_dpp_bcm_lif_linked_list_access_cb_init(int unit){
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.alloc = sw_state_dpp_bcm_lif_linked_list_alloc;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.is_allocated = sw_state_dpp_bcm_lif_linked_list_is_allocated;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.free = sw_state_dpp_bcm_lif_linked_list_free;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.verify = sw_state_dpp_bcm_lif_linked_list_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_lists.set = sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_lists_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_lists.get = sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_lists_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_lists.verify = sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_lists_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.set = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.get = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.alloc = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_alloc;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.is_allocated = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_is_allocated;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.free = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_free;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.verify = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.first_member.set = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_first_member_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.first_member.get = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_first_member_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.first_member.verify = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_first_member_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.size.set = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_size_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.size.get = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_size_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_lists_array.size.verify = sw_state_dpp_bcm_lif_linked_list_lif_linked_lists_array_size_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_list_members.set = sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_list_members_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_list_members.get = sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_list_members_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.max_nof_lif_linked_list_members.verify = sw_state_dpp_bcm_lif_linked_list_max_nof_lif_linked_list_members_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.set = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.get = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.alloc = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_alloc;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.is_allocated = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_is_allocated;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.free = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_free;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.verify = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.lif_id.set = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_lif_id_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.lif_id.get = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_lif_id_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.lif_id.verify = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_lif_id_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.is_even.set = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_is_even_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.is_even.get = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_is_even_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.is_even.verify = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_is_even_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.next.set = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_next_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.next.get = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_next_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.bcm.lif_linked_list.lif_linked_list_members_array.next.verify = sw_state_dpp_bcm_lif_linked_list_lif_linked_list_members_array_next_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
