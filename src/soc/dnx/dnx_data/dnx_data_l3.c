/** \file dnx_data_l3.c
 * 
 * MODULE DEVICE DATA - L3
 * 
 * Device Data
 * SW component that maintains per device data
 * The data is static and won't be changed after device initialization.
 *     
 * Supported data types:
 *     - Define             - a 'uint32' number (a max value for all devices is maintained)
 *     - feature            - 1 bit per each feature (supported/not supported) - support soc properties 
 *     - table              - the data is accessed with keys and/or can maintain multiple values and/or set by soc property
 *     - numeric            - a 'uint32' number that support soc properties
 * 
 * User interface for DNX DATA component can be found in "dnx_data_if.h" and "dnx_data_if_#module#.h"
 * 
 * Adding the data is done via XMLs placed in "tools/autocoder/DeviceData/dnx/.." 
 * "How to" User Guide can be found in confluence. 
 *        
 *     
 * 
 * AUTO-GENERATED BY AUTOCODER!
 * DO NOT EDIT THIS FILE!
 */
/* *INDENT-OFF* */
/*
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 */
#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_BCMDNX_L3
/**
 * \brief
 * Mark this file as device data internal file
 */
#define DNX_DATA_INTERNAL
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/dnx_data.h>
#include <soc/dnx/dnx_data/dnx_data_internal.h>
#include <soc/dnx/dnx_data/dnx_data_internal_l3.h>
/*
 * }
 */

/*
 * Extern per device attach function
 */
extern shr_error_e jer2_a0_data_l3_attach(
    int unit);
/*
 * SUBMODULE - FEC:
 * {
 */
/*
 * fec init
 */
/**
 * \brief Set submodule data to default value per device type
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 * \par INDIRECT INPUT:
 *   * None
 * \par DIRECT OUTPUT:
 *     rv - see 'shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] submodule_data - pointer to submodule data
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
dnx_data_l3_fec_init(
    int unit,
    dnx_data_submodule_t *submodule_data)
{
    SHR_FUNC_INIT_VARS(unit);

    submodule_data->name = "fec";
    submodule_data->doc = "FEC data";
    /*
     * Features
     */
    submodule_data->nof_features = dnx_data_l3_fec_feature_nof;
    submodule_data->features = sal_alloc(sizeof(dnx_data_feature_t) * submodule_data->nof_features, "_dnx_data l3 fec features");
    if (submodule_data->features == NULL)
    {
        SHR_ERR_EXIT(_SHR_E_MEMORY, "failed to allocate dnx_data l3_fec features\n");
    }
    sal_memset(submodule_data->features, 0, sizeof(dnx_data_feature_t) * submodule_data->nof_features);

    /*
     * Defines
     */
    submodule_data->nof_defines = dnx_data_l3_fec_define_nof;
    submodule_data->defines = sal_alloc(sizeof(dnx_data_define_t) * submodule_data->nof_defines, "_dnx_data l3 fec defines");
    if (submodule_data->defines == NULL)
    {
        SHR_ERR_EXIT(_SHR_E_MEMORY, "failed to allocate dnx_data l3_fec defines\n");
    }
    sal_memset(submodule_data->defines, 0, sizeof(dnx_data_define_t) * submodule_data->nof_defines);

    submodule_data->defines[dnx_data_l3_fec_define_max_nof_fec].name = "max_nof_fec";
    submodule_data->defines[dnx_data_l3_fec_define_max_nof_fec].doc = "The maximal number of FECs supported by the device.";
    /* Set data type flag */
    submodule_data->defines[dnx_data_l3_fec_define_max_nof_fec].flags |= DNX_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_l3_fec_define_max_fec_for_default_route].name = "max_fec_for_default_route";
    submodule_data->defines[dnx_data_l3_fec_define_max_fec_for_default_route].doc = "The maximal FEC id that can be used for default route.";
    /* Set data type flag */
    submodule_data->defines[dnx_data_l3_fec_define_max_fec_for_default_route].flags |= DNX_DATA_F_DEFINE;

    /*
     * Tables
     */
    submodule_data->nof_tables = dnx_data_l3_fec_table_nof;
    submodule_data->tables = sal_alloc(sizeof(dnx_data_table_t) * submodule_data->nof_tables, "_dnx_data l3 fec tables");
    if (submodule_data->tables == NULL)
    {
        SHR_ERR_EXIT(_SHR_E_MEMORY, "failed to allocate dnx_data l3_fec tables\n");
    }
    sal_memset(submodule_data->tables, 0, sizeof(dnx_data_table_t) * submodule_data->nof_tables);


exit:
    SHR_FUNC_EXIT;
}

/*
 * fec features
 */
int
dnx_data_l3_fec_feature_get(
    int unit,
    dnx_data_l3_fec_feature_e feature)
{
    return dnx_data_mgmt_feature_data_get(unit, dnx_data_module_l3, dnx_data_l3_submodule_fec, feature);
}

/*
 * fec defines
 */
uint32
dnx_data_l3_fec_max_nof_fec_get(
    int unit)
{
    return dnx_data_mgmt_define_data_get(unit, dnx_data_module_l3, dnx_data_l3_submodule_fec, dnx_data_l3_fec_define_max_nof_fec);
}

uint32
dnx_data_l3_fec_max_fec_for_default_route_get(
    int unit)
{
    return dnx_data_mgmt_define_data_get(unit, dnx_data_module_l3, dnx_data_l3_submodule_fec, dnx_data_l3_fec_define_max_fec_for_default_route);
}

/*
 * fec tables
 */
/* Table Get */
/* Get value as str */
/*
 * }
 */

/*
 * SUBMODULE - SOURCE_ADDRESS:
 * {
 */
/*
 * source_address init
 */
/**
 * \brief Set submodule data to default value per device type
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 * \par INDIRECT INPUT:
 *   * None
 * \par DIRECT OUTPUT:
 *     rv - see 'shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] submodule_data - pointer to submodule data
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
dnx_data_l3_source_address_init(
    int unit,
    dnx_data_submodule_t *submodule_data)
{
    SHR_FUNC_INIT_VARS(unit);

    submodule_data->name = "source_address";
    submodule_data->doc = "Source address data.";
    /*
     * Features
     */
    submodule_data->nof_features = dnx_data_l3_source_address_feature_nof;
    submodule_data->features = sal_alloc(sizeof(dnx_data_feature_t) * submodule_data->nof_features, "_dnx_data l3 source_address features");
    if (submodule_data->features == NULL)
    {
        SHR_ERR_EXIT(_SHR_E_MEMORY, "failed to allocate dnx_data l3_source_address features\n");
    }
    sal_memset(submodule_data->features, 0, sizeof(dnx_data_feature_t) * submodule_data->nof_features);

    /*
     * Defines
     */
    submodule_data->nof_defines = dnx_data_l3_source_address_define_nof;
    submodule_data->defines = sal_alloc(sizeof(dnx_data_define_t) * submodule_data->nof_defines, "_dnx_data l3 source_address defines");
    if (submodule_data->defines == NULL)
    {
        SHR_ERR_EXIT(_SHR_E_MEMORY, "failed to allocate dnx_data l3_source_address defines\n");
    }
    sal_memset(submodule_data->defines, 0, sizeof(dnx_data_define_t) * submodule_data->nof_defines);

    submodule_data->defines[dnx_data_l3_source_address_define_source_address_table_size].name = "source_address_table_size";
    submodule_data->defines[dnx_data_l3_source_address_define_source_address_table_size].doc = "The number of entries in the source address table.";
    /* Set data type flag */
    submodule_data->defines[dnx_data_l3_source_address_define_source_address_table_size].flags |= DNX_DATA_F_DEFINE;

    /*
     * Tables
     */
    submodule_data->nof_tables = dnx_data_l3_source_address_table_nof;
    submodule_data->tables = sal_alloc(sizeof(dnx_data_table_t) * submodule_data->nof_tables, "_dnx_data l3 source_address tables");
    if (submodule_data->tables == NULL)
    {
        SHR_ERR_EXIT(_SHR_E_MEMORY, "failed to allocate dnx_data l3_source_address tables\n");
    }
    sal_memset(submodule_data->tables, 0, sizeof(dnx_data_table_t) * submodule_data->nof_tables);


exit:
    SHR_FUNC_EXIT;
}

/*
 * source_address features
 */
int
dnx_data_l3_source_address_feature_get(
    int unit,
    dnx_data_l3_source_address_feature_e feature)
{
    return dnx_data_mgmt_feature_data_get(unit, dnx_data_module_l3, dnx_data_l3_submodule_source_address, feature);
}

/*
 * source_address defines
 */
uint32
dnx_data_l3_source_address_source_address_table_size_get(
    int unit)
{
    return dnx_data_mgmt_define_data_get(unit, dnx_data_module_l3, dnx_data_l3_submodule_source_address, dnx_data_l3_source_address_define_source_address_table_size);
}

/*
 * source_address tables
 */
/* Table Get */
/* Get value as str */
/*
 * }
 */

shr_error_e
dnx_data_l3_init(
    int unit,
    dnx_data_module_t *module_data)
{
    SHR_FUNC_INIT_VARS(unit);

    /* Data Struct Init */
    module_data->name = "l3";
    module_data->nof_submodules = dnx_data_l3_submodule_nof;
    module_data->submodules = sal_alloc(sizeof(dnx_data_submodule_t) * module_data->nof_submodules, "_dnx_data l3 submodules");
    if (module_data->submodules == NULL)
    {
        SHR_ERR_EXIT(_SHR_E_MEMORY, "failed to allocate dnx_data l3 submodules\n");
    }
    sal_memset(module_data->submodules, 0, sizeof(dnx_data_submodule_t) * module_data->nof_submodules);

    /*
     * Init Submodule data
     */
    SHR_IF_ERR_EXIT(dnx_data_l3_fec_init(unit, &module_data->submodules[dnx_data_l3_submodule_fec]));
    SHR_IF_ERR_EXIT(dnx_data_l3_source_address_init(unit, &module_data->submodules[dnx_data_l3_submodule_source_address]));
    /*
     * Attach device module
     */
    if (SOC_IS_JERICHO_2_A0(unit))
    {
        SHR_IF_ERR_EXIT(jer2_a0_data_l3_attach(unit));
    }

exit:
    SHR_FUNC_EXIT;
}
/* *INDENT-ON* */