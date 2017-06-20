/** \file dnx_data_crps.h
 * 
 * MODULE DATA INTERFACE - 
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
#ifndef _DNX_DATA_CRPS_H_
/*{*/
#define _DNX_DATA_CRPS_H_
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/dnx_data_max_crps.h>
/*
 * }
 */

/*!
* \brief This file is only used by DNX (JR2 family). Including it by
* software that is not specific to DNX is an error.
*/
#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif

/*
 * MODULE FUNCTIONS:
 * {
 */
/**
 * \brief Init default data structure - dnx_data_if_crps
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 * \par INDIRECT INPUT:
 *   * None
 * \par DIRECT OUTPUT:
 *     rv - see 'shr_error_e
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_if_crps_init(
    int unit);

/*
 * }
 */

/*
 * SUBMODULE  - CRPS_ENGINES:
 * counters engines data
 * {
 */
/*
 * Table value structure
 */
/**
 * \brief Holds values of submodule crps_engines table engines_size
 * Table info:
 * size of each counter engine
 */
typedef struct
{
    /**
     * number of counters per engine
     */
    int nof_counters;
} dnx_data_crps_crps_engines_engines_size_t;

/*
 * Feature enum
 */
/**
 * \brief 
 * Submodule features
 */
typedef enum
{

    /**
     * Must be last one!
     */
    dnx_data_crps_crps_engines_feature_nof
} dnx_data_crps_crps_engines_feature_e;

/*
 * Submodule functions typedefs
 */
/**
 * \brief get submodule feauture - disabled/enabled
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] feature - feature to get (see enum defintion for more details
 * \par INDIRECT INPUT:
 *   device data - module global data
 * \par DIRECT OUTPUT:
 *     is_supported - returns 1 iff supported and 0 otherwise
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
typedef int(
    *dnx_data_crps_crps_engines_feature_get_f) (
    int unit,
    dnx_data_crps_crps_engines_feature_e feature);

/**
 * \brief returns define data of nof_engines
 * Module - 'crps', Submodule - 'crps_engines', data - 'nof_engines'
 * Number of counter engines
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     nof_engines - the required data value
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_crps_crps_engines_nof_engines_get_f) (
    int unit);

/**
 * \brief get table engines_size info
 * size of each counter engine
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 *   \param [in] engine_id - engine id {0..(nof_counter_engines-1)}
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     engines_size - returns the relevant entry values grouped in struct - see dnx_data_crps_crps_engines_engines_size_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
typedef const dnx_data_crps_crps_engines_engines_size_t *(
    *dnx_data_crps_crps_engines_engines_size_get_f) (
    int unit,
    int engine_id);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_CRPS - CRPS_ENGINES:
 * {
 */
/**
 * \brief Interface for crps crps_engines data
 */
typedef struct
{
    /**
     * get submodule feauture - disabled/enabled
     */
    dnx_data_crps_crps_engines_feature_get_f feature_get;
    /**
     * returns define data of nof_engines
     */
    dnx_data_crps_crps_engines_nof_engines_get_f nof_engines_get;
    /**
     * get table engines_size info
     */
    dnx_data_crps_crps_engines_engines_size_get_f engines_size_get;
} dnx_data_if_crps_crps_engines_t;

/*
 * }
 */

/*
 * SUBMODULE  - EVICTION:
 * counters eviction parameters
 * {
 */
/*
 * Table value structure
 */
/*
 * Feature enum
 */
/**
 * \brief 
 * Submodule features
 */
typedef enum
{

    /**
     * Must be last one!
     */
    dnx_data_crps_eviction_feature_nof
} dnx_data_crps_eviction_feature_e;

/*
 * Submodule functions typedefs
 */
/**
 * \brief get submodule feauture - disabled/enabled
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] feature - feature to get (see enum defintion for more details
 * \par INDIRECT INPUT:
 *   device data - module global data
 * \par DIRECT OUTPUT:
 *     is_supported - returns 1 iff supported and 0 otherwise
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
typedef int(
    *dnx_data_crps_eviction_feature_get_f) (
    int unit,
    dnx_data_crps_eviction_feature_e feature);

/**
 * \brief returns define data of nof_dma_fifo_per_core
 * Module - 'crps', Submodule - 'eviction', data - 'nof_dma_fifo_per_core'
 * Number of DMA FIFO used for counter processor for each core
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     nof_dma_fifo_per_core - the required data value
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_crps_eviction_nof_dma_fifo_per_core_get_f) (
    int unit);

/**
 * \brief returns define data of counters_fifo_depth
 * Module - 'crps', Submodule - 'eviction', data - 'counters_fifo_depth'
 * Indicates the FIFO depth in the host
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     counters_fifo_depth - the required data value
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_crps_eviction_counters_fifo_depth_get_f) (
    int unit);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_CRPS - EVICTION:
 * {
 */
/**
 * \brief Interface for crps eviction data
 */
typedef struct
{
    /**
     * get submodule feauture - disabled/enabled
     */
    dnx_data_crps_eviction_feature_get_f feature_get;
    /**
     * returns define data of nof_dma_fifo_per_core
     */
    dnx_data_crps_eviction_nof_dma_fifo_per_core_get_f nof_dma_fifo_per_core_get;
    /**
     * returns define data of counters_fifo_depth
     */
    dnx_data_crps_eviction_counters_fifo_depth_get_f counters_fifo_depth_get;
} dnx_data_if_crps_eviction_t;

/*
 * }
 */

/*
 * MODULE INTERFACE DNX_DATA_IF_CRPS:
 * {
 */
/**
 * \brief Interface for crps data
 */
typedef struct
{
    /**
     * Interface for crps crps_engines data
     */
    dnx_data_if_crps_crps_engines_t crps_engines;
    /**
     * Interface for crps eviction data
     */
    dnx_data_if_crps_eviction_t eviction;
} dnx_data_if_crps_t;

/*
 * }
 */
/*
 * Extern:
 * {
 */
/**
 * \brief
 * Module structured interface - used to get the required data stored in dnx data
 */
extern dnx_data_if_crps_t dnx_data_crps;
/*
 * }
 */
/*}*/
#else     /*DNX_DATA_CRPS_H_*/
/*{*/
#ifndef DNX_DATA_INTERNAL
/*{*/
#error "dnx_data_crps file might include any header files, therfore header files must not include it.\nAny include to dnx_data_crps must be from 'c' file"
/*}*/
#endif /*DNX_DATA_INTERNAL*/
/*}*/
#endif /*_DNX_DATA_CRPS_H_*/
/* *INDENT-ON* */
