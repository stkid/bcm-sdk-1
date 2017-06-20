/* $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_diagnostic_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_DPP_SOC_ARAD_PP_PP_PORT_MAP_DIAGNOSTIC_H_
#define _SHR_SW_STATE_DPP_SOC_ARAD_PP_PP_PORT_MAP_DIAGNOSTIC_H_

#ifdef BCM_WARM_BOOT_API_TEST
/********************************* diagnostic calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the diagnostic calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the diagnostic struct by 'sw_state_diagnostic_cb_init'.                  */
/***************************************************************************************************/

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_pp_port_map_dump */
typedef int (*sw_state_dpp_soc_arad_pp_pp_port_map_dump_cb)(
    int unit, int pp_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_dump */
typedef int (*sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_dump_cb)(
    int unit, int pp_idx_0, int pp_port_map_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_dump */
typedef int (*sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_dump_cb)(
    int unit, int pp_idx_0, int pp_port_map_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_in_use_dump */
typedef int (*sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_in_use_dump_cb)(
    int unit, int pp_idx_0, int pp_port_map_idx_0, int pp_port_use_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

/*********************************** diagnostic calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the diagnostic layer for the entire SW state.*/
/* use this tree to dump fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_dump_cb dump;
} sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_in_use_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_in_use_dump_cb dump;
} sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_in_use_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_dump_cb dump;
    sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_in_use_diagnostic_cbs_t in_use;
} sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_diagnostic_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_pp_port_map_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_pp_port_map_dump_cb dump;
    sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_diagnostic_cbs_t pp_port;
    sw_state_dpp_soc_arad_pp_pp_port_map_pp_port_use_diagnostic_cbs_t pp_port_use;
} sw_state_dpp_soc_arad_pp_pp_port_map_diagnostic_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

int sw_state_dpp_soc_arad_pp_pp_port_map_diagnostic_cb_init(int unit);

#endif /* BCM_WARM_BOOT_API_TEST */

#endif /* _SHR_SW_STATE_DPP_SOC_ARAD_PP_PP_PORT_MAP_DIAGNOSTIC_H_ */
