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
#include <shared/swstate/diagnostic/sw_state_dpp_soc_arad_tm_interrupts_diagnostic.h>

#ifdef BCM_WARM_BOOT_API_TEST
#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_tm_interrupts_dump(int unit, int tm_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.soc.arad.tm->interrupts, sizeof(*sw_state[unit]->dpp.soc.arad.tm->interrupts), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
#ifdef BCM_PETRA_SUPPORT
            sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.cmc_irq2_mask.dump(unit, tm_idx_0, j0);
#endif
#ifdef BCM_PETRA_SUPPORT
            sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.cmc_irq3_mask.dump(unit, tm_idx_0, j0);
#endif
#ifdef BCM_PETRA_SUPPORT
            sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.cmc_irq4_mask.dump(unit, tm_idx_0, j0);
#endif
#ifdef BCM_PETRA_SUPPORT
            sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.interrupt_data.dump(unit, tm_idx_0, j0);
#endif
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
int sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_dump(int unit, int tm_idx_0, int interrupts_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.arad.tm->interrupts->cmc_irq2_mask
            , sizeof(*sw_state[unit]->dpp.soc.arad.tm->interrupts->cmc_irq2_mask), SOC_CMCS_NUM_MAX) ? SOC_CMCS_NUM_MAX - 1 : 0;
        for (; i0 < SOC_CMCS_NUM_MAX; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.tm->interrupts->cmc_irq2_mask[i0],
                "sw_state[%d]->dpp.soc.arad.tm->interrupts->cmc_irq2_mask[%d]: ", unit, i0);
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
int sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_dump(int unit, int tm_idx_0, int interrupts_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.arad.tm->interrupts->cmc_irq3_mask
            , sizeof(*sw_state[unit]->dpp.soc.arad.tm->interrupts->cmc_irq3_mask), SOC_CMCS_NUM_MAX) ? SOC_CMCS_NUM_MAX - 1 : 0;
        for (; i0 < SOC_CMCS_NUM_MAX; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.tm->interrupts->cmc_irq3_mask[i0],
                "sw_state[%d]->dpp.soc.arad.tm->interrupts->cmc_irq3_mask[%d]: ", unit, i0);
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
int sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_dump(int unit, int tm_idx_0, int interrupts_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.soc.arad.tm->interrupts->cmc_irq4_mask
            , sizeof(*sw_state[unit]->dpp.soc.arad.tm->interrupts->cmc_irq4_mask), SOC_CMCS_NUM_MAX) ? SOC_CMCS_NUM_MAX - 1 : 0;
        for (; i0 < SOC_CMCS_NUM_MAX; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.tm->interrupts->cmc_irq4_mask[i0],
                "sw_state[%d]->dpp.soc.arad.tm->interrupts->cmc_irq4_mask[%d]: ", unit, i0);
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
int sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_dump(int unit, int tm_idx_0, int interrupts_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.soc.arad.tm->interrupts->interrupt_data, sizeof(*sw_state[unit]->dpp.soc.arad.tm->interrupts->interrupt_data), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
#ifdef BCM_PETRA_SUPPORT
            sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.interrupt_data.flags.dump(unit, tm_idx_0, interrupts_idx_0, j0);
#endif
#ifdef BCM_PETRA_SUPPORT
            sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.interrupt_data.storm_timed_count.dump(unit, tm_idx_0, interrupts_idx_0, j0);
#endif
#ifdef BCM_PETRA_SUPPORT
            sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.interrupt_data.storm_timed_period.dump(unit, tm_idx_0, interrupts_idx_0, j0);
#endif
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
int sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_dump(int unit, int tm_idx_0, int interrupts_idx_0, int interrupt_data_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.tm->interrupts->interrupt_data[interrupt_data_idx_0].flags,
        "sw_state[%d]->dpp.soc.arad.tm->interrupts->interrupt_data[%d].flags: ", unit, interrupt_data_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_dump(int unit, int tm_idx_0, int interrupts_idx_0, int interrupt_data_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.tm->interrupts->interrupt_data[interrupt_data_idx_0].storm_timed_count,
        "sw_state[%d]->dpp.soc.arad.tm->interrupts->interrupt_data[%d].storm_timed_count: ", unit, interrupt_data_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_dump(int unit, int tm_idx_0, int interrupts_idx_0, int interrupt_data_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.soc.arad.tm->interrupts->interrupt_data[interrupt_data_idx_0].storm_timed_period,
        "sw_state[%d]->dpp.soc.arad.tm->interrupts->interrupt_data[%d].storm_timed_period: ", unit, interrupt_data_idx_0);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 


int
sw_state_dpp_soc_arad_tm_interrupts_diagnostic_cb_init(int unit){
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.dump = sw_state_dpp_soc_arad_tm_interrupts_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.cmc_irq2_mask.dump = sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.cmc_irq3_mask.dump = sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.cmc_irq4_mask.dump = sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.interrupt_data.dump = sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.interrupt_data.flags.dump = sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.interrupt_data.storm_timed_count.dump = sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_diagnostic[unit].dpp.soc.arad.tm.interrupts.interrupt_data.storm_timed_period.dump = sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_dump;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
#endif /* BCM_WARM_BOOT_API_TEST */
