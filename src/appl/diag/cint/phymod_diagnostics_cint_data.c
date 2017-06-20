/*
 *         
 * $Id: phymod.xml,v 1.1.2.5 Broadcom SDK $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *         
 *     
 * DO NOT EDIT THIS FILE!
 *
 */

#if defined(INCLUDE_LIB_CINT)

#include <cint_config.h>
#include <cint_types.h>
#include <cint_porting.h>

#if defined(PHYMOD_SUPPORT)

#include <phymod/phymod_diagnostics.h>
#include <phymod/phymod.h>

/* Macros section */

/* Functions section */
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0,
                         phymod_phy_rx_slicer_position_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t, uint32_t, flags, 0, 0,
                         phymod_slicer_position_t*, phymod_slicer_position_t, position, 1, 0);

CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0,
                         phymod_phy_rx_slicer_position_set,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t, uint32_t, flags, 0, 0,
                         phymod_slicer_position_t*, phymod_slicer_position_t, position, 1, 0);

CINT_FWRAPPER_CREATE_RP4(int, int, 0, 0,
                         phymod_phy_rx_slicer_position_max_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t, uint32_t, flags, 0, 0,
                         phymod_slicer_position_t*, phymod_slicer_position_t, position_min, 1, 0,
                         phymod_slicer_position_t*, phymod_slicer_position_t, position_max, 1, 0);

CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0,
                         phymod_phy_prbs_config_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t, uint32_t, flags , 0, 0,
                         phymod_prbs_t*, phymod_prbs_t, prbs, 1, 0);

CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0,
                         phymod_phy_prbs_config_set,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t, uint32_t, flags , 0, 0,
                         phymod_prbs_t*, phymod_prbs_t, prbs, 1, 0);

CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0,
                         phymod_phy_prbs_enable_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t, uint32_t, flags , 0, 0,
                         uint32_t*, uint32_t, enable, 1, 0);

CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0,
                         phymod_phy_prbs_enable_set,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t, uint32_t, flags , 0, 0,
                         uint32_t, uint32_t, enable, 0, 0);

CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0,
                         phymod_phy_prbs_status_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t, uint32_t, flags, 0, 0,
                         phymod_prbs_status_t*, phymod_prbs_status_t, prbs_status, 1, 0);

CINT_FWRAPPER_CREATE_RP2(int, int, 0, 0,
                         phymod_phy_pattern_config_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         phymod_pattern_t*, phymod_pattern_t, pattern, 1, 0);

CINT_FWRAPPER_CREATE_RP2(int, int, 0, 0,
                         phymod_phy_pattern_config_set,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         phymod_pattern_t*, phymod_pattern_t, pattern, 1, 0);

CINT_FWRAPPER_CREATE_RP2(int, int, 0, 0,
                         phymod_phy_pattern_enable_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t*, uint32_t, enable, 1, 0);

CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0,
                         phymod_phy_pattern_enable_set,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t, uint32_t, enable, 0, 0,
                         phymod_pattern_t*, phymod_pattern_t, pattern, 1, 0);

CINT_FWRAPPER_CREATE_RP2(int, int, 0, 0,
                         phymod_core_diagnostics_get,
                         phymod_core_access_t*, phymod_core_access_t, core, 1, 0,
                         phymod_core_diagnostics_t*, phymod_core_diagnostics_t, diag, 1, 0);

CINT_FWRAPPER_CREATE_RP2(int, int, 0, 0,
                         phymod_phy_diagnostics_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         phymod_phy_diagnostics_t*, phymod_phy_diagnostics_t, diag, 1, 0);

CINT_FWRAPPER_CREATE_RP2(int, int, 0, 0,
                         phymod_phy_pmd_info_dump,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         char*, char*, type, 0, 0);

CINT_FWRAPPER_CREATE_RP2(int, int, 0, 0,
                         phymod_phy_pcs_info_dump,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         char*, char*, type, 0, 0);

CINT_FWRAPPER_CREATE_RP4(int, int, 0, 0,
                         phymod_phy_eyescan_run,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t, uint32_t, flags, 0, 0,
                         phymod_eyescan_mode_t, phymod_eyescan_mode_t, mode, 0, 0,
                         phymod_phy_eyescan_options_t*, phymod_phy_eyescan_options_t, eyescan_options, 1, 0);

CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0,
                         phymod_phy_link_mon_enable_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         phymod_link_monitor_mode_t, phymod_link_monitor_mode_t, link_mon_mode, 0, 0,
                         uint32_t*, uint32_t, enable, 1, 0);

CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0,
                         phymod_phy_link_mon_enable_set,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         phymod_link_monitor_mode_t, phymod_link_monitor_mode_t, link_mon_mode, 0, 0,
                         uint32_t, uint32_t, enable, 0, 0);

CINT_FWRAPPER_CREATE_RP4(int, int, 0, 0,
                         phymod_phy_link_mon_status_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t*, uint32_t, lock_status, 1, 0,
                         uint32_t*, uint32_t, lock_lost_lh, 1, 0,
                         uint32_t*, uint32_t, error_count, 1, 0);

CINT_FWRAPPER_CREATE_RP2(int, int, 0, 0,
                         phymod_phy_fec_correctable_counter_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t*, uint32_t, count, 1, 0);

CINT_FWRAPPER_CREATE_RP2(int, int, 0, 0,
                         phymod_phy_fec_uncorrectable_counter_get,
                         phymod_phy_access_t*, phymod_phy_access_t, phy, 1, 0,
                         uint32_t*, uint32_t, count, 1, 0);


/* Functions and Macros mapping */
static cint_function_t __cint_functions[] =
{
    CINT_FWRAPPER_ENTRY(phymod_phy_rx_slicer_position_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_rx_slicer_position_set),
    CINT_FWRAPPER_ENTRY(phymod_phy_rx_slicer_position_max_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_prbs_config_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_prbs_config_set),
    CINT_FWRAPPER_ENTRY(phymod_phy_prbs_enable_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_prbs_enable_set),
    CINT_FWRAPPER_ENTRY(phymod_phy_prbs_status_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_pattern_config_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_pattern_config_set),
    CINT_FWRAPPER_ENTRY(phymod_phy_pattern_enable_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_pattern_enable_set),
    CINT_FWRAPPER_ENTRY(phymod_core_diagnostics_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_diagnostics_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_pmd_info_dump),
    CINT_FWRAPPER_ENTRY(phymod_phy_pcs_info_dump),
    CINT_FWRAPPER_ENTRY(phymod_phy_eyescan_run),
    CINT_FWRAPPER_ENTRY(phymod_phy_link_mon_enable_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_link_mon_enable_set),
    CINT_FWRAPPER_ENTRY(phymod_phy_link_mon_status_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_fec_correctable_counter_get),
    CINT_FWRAPPER_ENTRY(phymod_phy_fec_uncorrectable_counter_get),
    { NULL }
};

/* Functions pointers section */
static cint_function_pointer_t __cint_function_pointers[1];



static cint_function_pointer_t __cint_function_pointers[] = 
{
    { NULL }
};

/* Structs section */
static void*
__cint_maddr__phymod_slicer_position_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    phymod_slicer_position_t* s = (phymod_slicer_position_t*) p;
    switch(mnum)
    {
        case 0: rv = &(s->horizontal);break;
        case 1: rv = &(s->vertical);break;
        default: rv = NULL; break;
    }
    return rv;
}

static void*
__cint_maddr__phymod_prbs_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    phymod_prbs_t* s = (phymod_prbs_t*) p;
    switch(mnum)
    {
        case 0: rv = &(s->poly);break;
        case 1: rv = &(s->invert);break;
        default: rv = NULL; break;
    }
    return rv;
}

static void*
__cint_maddr__phymod_prbs_status_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    phymod_prbs_status_t* s = (phymod_prbs_status_t*) p;
    switch(mnum)
    {
        case 0: rv = &(s->prbs_lock);break;
        case 1: rv = &(s->prbs_lock_loss);break;
        case 2: rv = &(s->error_count);break;
        default: rv = NULL; break;
    }
    return rv;
}

static void*
__cint_maddr__phymod_pattern_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    phymod_pattern_t* s = (phymod_pattern_t*) p;
    switch(mnum)
    {
        case 0: rv = &(s->pattern_len);break;
        case 1: rv = &(s->pattern);break;
        default: rv = NULL; break;
    }
    return rv;
}

static void*
__cint_maddr__phymod_core_diagnostics_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    phymod_core_diagnostics_t* s = (phymod_core_diagnostics_t*) p;
    switch(mnum)
    {
        case 0: rv = &(s->temperature);break;
        case 1: rv = &(s->pll_range);break;
        default: rv = NULL; break;
    }
    return rv;
}

static void*
__cint_maddr__phymod_diag_slicer_offset_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    phymod_diag_slicer_offset_t* s = (phymod_diag_slicer_offset_t*) p;
    switch(mnum)
    {
        case 0: rv = &(s->offset_pe);break;
        case 1: rv = &(s->offset_ze);break;
        case 2: rv = &(s->offset_me);break;
        case 3: rv = &(s->offset_po);break;
        case 4: rv = &(s->offset_zo);break;
        case 5: rv = &(s->offset_mo);break;
        default: rv = NULL; break;
    }
    return rv;
}

static void*
__cint_maddr__phymod_diag_eyescan_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    phymod_diag_eyescan_t* s = (phymod_diag_eyescan_t*) p;
    switch(mnum)
    {
        case 0: rv = &(s->heye_left);break;
        case 1: rv = &(s->heye_right);break;
        case 2: rv = &(s->veye_upper);break;
        case 3: rv = &(s->veye_lower);break;
        default: rv = NULL; break;
    }
    return rv;
}

static void*
__cint_maddr__phymod_phy_diagnostics_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    phymod_phy_diagnostics_t* s = (phymod_phy_diagnostics_t*) p;
    switch(mnum)
    {
        case 0: rv = &(s->signal_detect);break;
        case 1: rv = &(s->vga_bias_reduced);break;
        case 2: rv = &(s->postc_metric);break;
        case 3: rv = &(s->osr_mode);break;
        case 4: rv = &(s->pmd_mode);break;
        case 5: rv = &(s->rx_lock);break;
        case 6: rv = &(s->rx_ppm);break;
        case 7: rv = &(s->tx_ppm);break;
        case 8: rv = &(s->clk90_offset);break;
        case 9: rv = &(s->clkp1_offset);break;
        case 10: rv = &(s->p1_lvl);break;
        case 11: rv = &(s->m1_lvl);break;
        case 12: rv = &(s->dfe1_dcd);break;
        case 13: rv = &(s->dfe2_dcd);break;
        case 14: rv = &(s->slicer_target);break;
        case 15: rv = &(s->slicer_offset);break;
        case 16: rv = &(s->eyescan);break;
        case 17: rv = &(s->state_machine_status);break;
        case 18: rv = &(s->link_time);break;
        case 19: rv = &(s->pf_main);break;
        case 20: rv = &(s->pf_hiz);break;
        case 21: rv = &(s->pf_bst);break;
        case 22: rv = &(s->pf_low);break;
        case 23: rv = &(s->pf2_ctrl);break;
        case 24: rv = &(s->vga);break;
        case 25: rv = &(s->dc_offset);break;
        case 26: rv = &(s->p1_lvl_ctrl);break;
        case 27: rv = &(s->dfe1);break;
        case 28: rv = &(s->dfe2);break;
        case 29: rv = &(s->dfe3);break;
        case 30: rv = &(s->dfe4);break;
        case 31: rv = &(s->dfe5);break;
        case 32: rv = &(s->dfe6);break;
        case 33: rv = &(s->txfir_pre);break;
        case 34: rv = &(s->txfir_main);break;
        case 35: rv = &(s->txfir_post1);break;
        case 36: rv = &(s->txfir_post2);break;
        case 37: rv = &(s->txfir_post3);break;
        case 38: rv = &(s->tx_amp_ctrl);break;
        case 39: rv = &(s->br_pd_en);break;
        default: rv = NULL; break;
    }
    return rv;
}

static void*
__cint_maddr__phymod_phy_eyescan_options_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    phymod_phy_eyescan_options_t* s = (phymod_phy_eyescan_options_t*) p;
    switch(mnum)
    {
        case 0: rv = &(s->linerate_in_khz);break;
        case 1: rv = &(s->timeout_in_milliseconds);break;
        case 2: rv = &(s->horz_max);break;
        case 3: rv = &(s->horz_min);break;
        case 4: rv = &(s->hstep);break;
        case 5: rv = &(s->vert_max);break;
        case 6: rv = &(s->vert_min);break;
        case 7: rv = &(s->vstep);break;
        case 8: rv = &(s->ber_proj_scan_mode);break;
        case 9: rv = &(s->ber_proj_timer_cnt);break;
        case 10: rv = &(s->ber_proj_err_cnt);break;
        case 11: rv = &(s->mode);break;
        default: rv = NULL; break;
    }
    return rv;
}


static cint_parameter_desc_t __cint_struct_members__phymod_slicer_position_t[] = 
{
    {"uint32_t", "horizontal", 0, 0},
    {"uint32_t", "vertical", 0, 0},
    { NULL }
};

static cint_parameter_desc_t __cint_struct_members__phymod_prbs_t[] = 
{
    {"phymod_prbs_poly_t", "poly", 0, 0},
    {"uint32_t", "invert", 0, 0},
    { NULL }
};

static cint_parameter_desc_t __cint_struct_members__phymod_prbs_status_t[] = 
{
    {"uint32_t", "prbs_lock", 0, 0},
    {"uint32_t", "prbs_lock_loss", 0, 0},
    {"uint32_t", "error_count", 0, 0},
    { NULL }
};

static cint_parameter_desc_t __cint_struct_members__phymod_pattern_t[] = 
{
    {"uint32_t", "pattern_len", 0, 0},
    {"uint32_t", "pattern", 1, 0},
    { NULL }
};

static cint_parameter_desc_t __cint_struct_members__phymod_core_diagnostics_t[] = 
{
    {"uint32_t", "temperature", 0, 0},
    {"uint32_t", "pll_range", 0, 0},
    { NULL }
};

static cint_parameter_desc_t __cint_struct_members__phymod_diag_slicer_offset_t[] = 
{
    {"uint32_t", "offset_pe", 0, 0},
    {"uint32_t", "offset_ze", 0, 0},
    {"uint32_t", "offset_me", 0, 0},
    {"uint32_t", "offset_po", 0, 0},
    {"uint32_t", "offset_zo", 0, 0},
    {"uint32_t", "offset_mo", 0, 0},
    { NULL }
};

static cint_parameter_desc_t __cint_struct_members__phymod_diag_eyescan_t[] = 
{
    {"uint32_t", "heye_left", 0, 0},
    {"uint32_t", "heye_right", 0, 0},
    {"uint32_t", "veye_upper", 0, 0},
    {"uint32_t", "veye_lower", 0, 0},
    { NULL }
};

static cint_parameter_desc_t __cint_struct_members__phymod_phy_diagnostics_t[] = 
{
    {"uint32_t", "signal_detect", 0, 0},
    {"uint32_t", "vga_bias_reduced", 0, 0},
    {"uint32_t", "postc_metric", 0, 0},
    {"phymod_osr_mode_t", "osr_mode", 0, 0},
    {"phymod_pmd_mode_t", "pmd_mode", 0, 0},
    {"uint32_t", "rx_lock", 0, 0},
    {"uint32_t", "rx_ppm", 0, 0},
    {"uint32_t", "tx_ppm", 0, 0},
    {"uint32_t", "clk90_offset", 0, 0},
    {"uint32_t", "clkp1_offset", 0, 0},
    {"uint32_t", "p1_lvl", 0, 0},
    {"uint32_t", "m1_lvl", 0, 0},
    {"uint32_t", "dfe1_dcd", 0, 0},
    {"uint32_t", "dfe2_dcd", 0, 0},
    {"uint32_t", "slicer_target", 0, 0},
    {"phymod_diag_slicer_offset_t", "slicer_offset", 0, 0},
    {"phymod_diag_eyescan_t", "eyescan", 0, 0},
    {"uint32_t", "state_machine_status", 0, 0},
    {"uint32_t", "link_time", 0, 0},
    {"int", "pf_main", 0, 0},
    {"int", "pf_hiz", 0, 0},
    {"int", "pf_bst", 0, 0},
    {"int", "pf_low", 0, 0},
    {"int", "pf2_ctrl", 0, 0},
    {"int", "vga", 0, 0},
    {"int", "dc_offset", 0, 0},
    {"int", "p1_lvl_ctrl", 0, 0},
    {"int", "dfe1", 0, 0},
    {"int", "dfe2", 0, 0},
    {"int", "dfe3", 0, 0},
    {"int", "dfe4", 0, 0},
    {"int", "dfe5", 0, 0},
    {"int", "dfe6", 0, 0},
    {"int", "txfir_pre", 0, 0},
    {"int", "txfir_main", 0, 0},
    {"int", "txfir_post1", 0, 0},
    {"int", "txfir_post2", 0, 0},
    {"int", "txfir_post3", 0, 0},
    {"int", "tx_amp_ctrl", 0, 0},
    {"uint8_t", "br_pd_en", 0, 0},
    { NULL }
};

static cint_parameter_desc_t __cint_struct_members__phymod_phy_eyescan_options_t[] = 
{
    {"uint32_t", "linerate_in_khz", 0, 0},
    {"uint16_t", "timeout_in_milliseconds", 0, 0},
    {"int8_t", "horz_max", 0, 0},
    {"int8_t", "horz_min", 0, 0},
    {"int8_t", "hstep", 0, 0},
    {"int8_t", "vert_max", 0, 0},
    {"int8_t", "vert_min", 0, 0},
    {"int8_t", "vstep", 0, 0},
    {"uint8_t", "ber_proj_scan_mode", 0, 0},
    {"uint8_t", "ber_proj_timer_cnt", 0, 0},
    {"uint8_t", "ber_proj_err_cnt", 0, 0},
    {"int8_t", "mode", 0, 0},
    { NULL }
};


static cint_struct_type_t __cint_structures[] =
{
    {
    "phymod_slicer_position_t",
    sizeof(phymod_slicer_position_t),
    __cint_struct_members__phymod_slicer_position_t,
    __cint_maddr__phymod_slicer_position_t
    },
    {
    "phymod_prbs_t",
    sizeof(phymod_prbs_t),
    __cint_struct_members__phymod_prbs_t,
    __cint_maddr__phymod_prbs_t
    },
    {
    "phymod_prbs_status_t",
    sizeof(phymod_prbs_status_t),
    __cint_struct_members__phymod_prbs_status_t,
    __cint_maddr__phymod_prbs_status_t
    },
    {
    "phymod_pattern_t",
    sizeof(phymod_pattern_t),
    __cint_struct_members__phymod_pattern_t,
    __cint_maddr__phymod_pattern_t
    },
    {
    "phymod_core_diagnostics_t",
    sizeof(phymod_core_diagnostics_t),
    __cint_struct_members__phymod_core_diagnostics_t,
    __cint_maddr__phymod_core_diagnostics_t
    },
    {
    "phymod_diag_slicer_offset_t",
    sizeof(phymod_diag_slicer_offset_t),
    __cint_struct_members__phymod_diag_slicer_offset_t,
    __cint_maddr__phymod_diag_slicer_offset_t
    },
    {
    "phymod_diag_eyescan_t",
    sizeof(phymod_diag_eyescan_t),
    __cint_struct_members__phymod_diag_eyescan_t,
    __cint_maddr__phymod_diag_eyescan_t
    },
    {
    "phymod_phy_diagnostics_t",
    sizeof(phymod_phy_diagnostics_t),
    __cint_struct_members__phymod_phy_diagnostics_t,
    __cint_maddr__phymod_phy_diagnostics_t
    },
    {
    "phymod_phy_eyescan_options_t",
    sizeof(phymod_phy_eyescan_options_t),
    __cint_struct_members__phymod_phy_eyescan_options_t,
    __cint_maddr__phymod_phy_eyescan_options_t
    },
    { NULL }
};


/* Enums section */
static cint_enum_map_t __cint_enum_map__phymod_prbs_poly_t[] =
{
    { "phymodPrbsPoly7", phymodPrbsPoly7 },
    { "phymodPrbsPoly9", phymodPrbsPoly9 },
    { "phymodPrbsPoly11", phymodPrbsPoly11 },
    { "phymodPrbsPoly15", phymodPrbsPoly15 },
    { "phymodPrbsPoly23", phymodPrbsPoly23 },
    { "phymodPrbsPoly31", phymodPrbsPoly31 },
    { "phymodPrbsPoly58", phymodPrbsPoly58 },
    { "phymodPrbsPolyCount", phymodPrbsPolyCount },
    { NULL }
};

static cint_enum_map_t __cint_enum_map__phymod_pmd_mode_t[] =
{
    { "phymodPmdModeOs", phymodPmdModeOs },
    { "phymodPmdModeOsDfe", phymodPmdModeOsDfe },
    { "phymodPmdModeBrDfe", phymodPmdModeBrDfe },
    { "phymodPmdModeCount", phymodPmdModeCount },
    { NULL }
};

static cint_enum_map_t __cint_enum_map__phymod_eyescan_mode_t[] =
{
    { "phymodEyescanModeFast", phymodEyescanModeFast },
    { "phymodEyescanModeLowBER", phymodEyescanModeLowBER },
    { "phymodEyescanModeBERProj", phymodEyescanModeBERProj },
    { "phymodEyescanModeCount", phymodEyescanModeCount },
    { NULL }
};

static cint_enum_map_t __cint_enum_map__phymod_link_monitor_mode_t[] =
{
    { "phymodLinkMonPCS49_1x10G", phymodLinkMonPCS49_1x10G },
    { "phymodLinkMonPCS82_4x10G", phymodLinkMonPCS82_4x10G },
    { "phymodLinkMonPCS82_2x25G", phymodLinkMonPCS82_2x25G },
    { "phymodLinkMonPCS82_4x25G", phymodLinkMonPCS82_4x25G },
    { "phymodLinkMonFC4", phymodLinkMonFC4 },
    { "phymodLinkMonFC8", phymodLinkMonFC8 },
    { "phymodLinkMonFC16", phymodLinkMonFC16 },
    { "phymodLinkMonFC32", phymodLinkMonFC32 },
    { "phymodLinkMonCount", phymodLinkMonCount },
    { NULL }
};


static cint_enum_type_t __cint_enums[] =
{
    {"phymod_prbs_poly_t", __cint_enum_map__phymod_prbs_poly_t },
    {"phymod_pmd_mode_t", __cint_enum_map__phymod_pmd_mode_t },
    {"phymod_eyescan_mode_t", __cint_enum_map__phymod_eyescan_mode_t },
    {"phymod_link_monitor_mode_t", __cint_enum_map__phymod_link_monitor_mode_t },
    { NULL }
};

/* Defines section */
static cint_constants_t __cint_constants[] =
{
    { "PHYMOD_SLICER_F_LIVE_LINK", PHYMOD_SLICER_F_LIVE_LINK },
    { "PHYMOD_PRBS_DIRECTION_RX", PHYMOD_PRBS_DIRECTION_RX },
    { "PHYMOD_PRBS_DIRECTION_TX", PHYMOD_PRBS_DIRECTION_TX },
    { "PHYMOD_PRBS_STATUS_F_CLEAR_ON_READ", PHYMOD_PRBS_STATUS_F_CLEAR_ON_READ },
    { "PHYMOD_EYESCAN_F_ENABLE", PHYMOD_EYESCAN_F_ENABLE },
    { "PHYMOD_EYESCAN_F_PROCESS", PHYMOD_EYESCAN_F_PROCESS },
    { "PHYMOD_EYESCAN_F_DONE", PHYMOD_EYESCAN_F_DONE },
    { "PHYMOD_EYESCAN_F_ENABLE_DONT_WAIT", PHYMOD_EYESCAN_F_ENABLE_DONT_WAIT },
    { NULL }
};


/* Typedefs section */
static cint_parameter_desc_t __cint_typedefs[] =
{
    { NULL }
};


cint_data_t phymod_diagnostics_cint_data =
{    
    NULL,
    __cint_functions,
    __cint_structures,
    __cint_enums,
    __cint_typedefs,
    __cint_constants,
    __cint_function_pointers,
};


#endif /* defined(PHYMOD_SUPPORT) */

#endif /* defined(INCLUDE_LIB_CINT) */
