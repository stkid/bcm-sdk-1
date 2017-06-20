/* $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_DPP_SOC_ARAD_TM_Q_TYPE_REF_COUNT_ACCESS_H_
#define _SHR_SW_STATE_DPP_SOC_ARAD_TM_Q_TYPE_REF_COUNT_ACCESS_H_

/********************************* access calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the access calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the access struct by 'sw_state_access_cb_init'.                  */
/***************************************************************************************************/

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_q_type_ref_count_set */
typedef int (*sw_state_dpp_soc_arad_tm_q_type_ref_count_set_cb)(
    int unit, int q_type_ref_count_idx_0, uint32 q_type_ref_count);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_q_type_ref_count_get */
typedef int (*sw_state_dpp_soc_arad_tm_q_type_ref_count_get_cb)(
    int unit, int q_type_ref_count_idx_0, uint32 *q_type_ref_count);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_q_type_ref_count_alloc */
typedef int (*sw_state_dpp_soc_arad_tm_q_type_ref_count_alloc_cb)(
    int unit, int nof_instances_to_alloc);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_q_type_ref_count_is_allocated */
typedef int (*sw_state_dpp_soc_arad_tm_q_type_ref_count_is_allocated_cb)(
    int unit, uint8 *is_allocated);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_q_type_ref_count_free */
typedef int (*sw_state_dpp_soc_arad_tm_q_type_ref_count_free_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_q_type_ref_count_verify */
typedef int (*sw_state_dpp_soc_arad_tm_q_type_ref_count_verify_cb)(
    int unit, int q_type_ref_count_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

/*********************************** access calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the access layer for the entire SW state.*/
/* use this tree to alloc/free/set/get fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/


int sw_state_dpp_soc_arad_tm_q_type_ref_count_access_cb_init(int unit);

#endif /* _SHR_SW_STATE_DPP_SOC_ARAD_TM_Q_TYPE_REF_COUNT_ACCESS_H_ */
