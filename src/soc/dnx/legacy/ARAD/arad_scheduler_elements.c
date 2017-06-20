#include <soc/mcm/memregs.h>
#if defined(BCM_88690_A0)
/* $Id: jer2_arad_scheduler_elements.c,v 1.6 Broadcom SDK $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
*/


#ifdef _ERR_MSG_MODULE_NAME
  #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_SOC_COSQ

/*************
 * INCLUDES  *
 *************/
/* { */
#include <shared/bsl.h>
#include <soc/dnxc/legacy/error.h>
#include <soc/dnx/legacy/SAND/Utils/sand_header.h>

#include <soc/dnx/legacy/ARAD/arad_scheduler_element_converts.h>
#include <soc/dnx/legacy/ARAD/arad_scheduler_elements.h>
#include <soc/dnx/legacy/ARAD/arad_scheduler_end2end.h>
#include <soc/dnx/legacy/ARAD/arad_api_framework.h>
#include <soc/dnx/legacy/ARAD/arad_tbl_access.h>
#include <soc/dnx/legacy/ARAD/arad_general.h>
#include <soc/dnx/legacy/ARAD/arad_scheduler_flows.h>
/* } */

/*************
 * DEFINES   *
 *************/
/* { */

/* } */

/*************
 *  MACROS   *
 *************/
/* { */

/*
 * The spouse flow id for a dual aggregate with flow id == flow_id is:
 *  flow_id + 1 if flow_id is even.
 *  flow_id - 1 if flow_id is odd
 */
#define JER2_ARAD_SCH_DUAL_SPOUSE_ID(flow_id) ( ((flow_id)&0x1)?((flow_id)-1):((flow_id)+1))

/* } */

/*************
 * TYPE DEFS *
 *************/
/* { */

/* } */

/*************
 * GLOBALS   *
 *************/
/* { */

/* } */

/*************
 * FUNCTIONS *
 *************/
/* { */

/*********************************************************************
*     Details: in the H file. (search for prototype)
*     It is assumed that se_ndx is verified by the calling function.
*********************************************************************/
uint32
  jer2_arad_sch_se_state_get(
    DNX_SAND_IN     int                unit,
    DNX_SAND_IN     int                core,
    DNX_SAND_IN     JER2_ARAD_SCH_SE_ID     se_ndx,
    DNX_SAND_OUT    uint8              *is_se_enabled
  )
{
  uint32
    offset = 0,
    idx = 0,
    res = DNX_SAND_OK;
  JER2_ARAD_SCH_SEM_TBL_DATA
    sem_tbl_data;

  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_SE_STATE_GET);
  DNX_SAND_ERR_IF_ABOVE_MAX(core, SOC_DNX_DEFS_GET(unit, nof_cores) , JER2_ARAD_CORE_INDEX_OUT_OF_RANGE_ERR,15,exit);

  offset  = se_ndx/8;
  idx = se_ndx%8;

  res = jer2_arad_sch_sem_tbl_get_unsafe(
          unit, core,
          offset,
          &sem_tbl_data
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 10, exit);

  *is_se_enabled = (uint8)DNX_SAND_GET_BIT(sem_tbl_data.sch_enable, idx);

exit:
  DNX_SAND_EXIT_AND_SEND_ERROR( "error in jer2_arad_sch_se_state_get()",se_ndx,0);
}

/*********************************************************************
*     Details: in the H file. (search for prototype)
*********************************************************************/
uint32
  jer2_arad_sch_se_state_set(
    DNX_SAND_IN     int                unit,
    DNX_SAND_IN     int                core,
    DNX_SAND_IN     JER2_ARAD_SCH_SE_ID          se_ndx,
    DNX_SAND_IN     uint8                is_se_enabled
  )
{
  uint32
    offset = 0,
    idx = 0,
    res = DNX_SAND_OK;
  JER2_ARAD_SCH_SEM_TBL_DATA
    sem_tbl_data;
  uint32
    bit_val_to_set = 0;

  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_SE_STATE_SET);

  res = jer2_arad_sch_se_id_verify_unsafe(
          unit,
          se_ndx
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 10, exit);
  DNX_SAND_ERR_IF_ABOVE_MAX(core, SOC_DNX_DEFS_GET(unit, nof_cores) , JER2_ARAD_CORE_INDEX_OUT_OF_RANGE_ERR,15,exit);

  offset  = se_ndx/8;
  idx = se_ndx%8;

  res = jer2_arad_sch_sem_tbl_get_unsafe(
          unit, core,
          offset,
          &sem_tbl_data
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 10, exit);

  bit_val_to_set = (is_se_enabled)?0x1:0x0;

  if (DNX_SAND_GET_BIT(sem_tbl_data.sch_enable,idx) != bit_val_to_set)
  {
    DNX_SAND_SET_BIT(sem_tbl_data.sch_enable,bit_val_to_set,idx);
     res = jer2_arad_sch_sem_tbl_set_unsafe(
          unit, core,
          offset,
          &sem_tbl_data
        );
    DNX_SAND_CHECK_FUNC_RESULT(res, 20, exit);
  }

exit:
  DNX_SAND_EXIT_AND_SEND_ERROR( "error in jer2_arad_sch_se_state_set()",0,0);
}

/*********************************************************************
*     Details: in the H file. (search for prototype)
*     It is assumed that se_ndx is verified by the calling function
*********************************************************************/
uint32
  jer2_arad_sch_se_dual_shaper_get(
    DNX_SAND_IN     int                unit,
    DNX_SAND_IN     int                core,
    DNX_SAND_IN     JER2_ARAD_SCH_SE_ID          se_ndx,
    DNX_SAND_IN     JER2_ARAD_SCH_SE_TYPE        se_type,
    DNX_SAND_OUT    uint8                *is_dual_shaper
  )
{
  uint32
    se_offset_ndx,
    offset = 0,
    idx = 0,
    res = DNX_SAND_OK;
  JER2_ARAD_SCH_DSM_TBL_DATA
    dsm_tbl_data;
  JER2_ARAD_SCH_FLOW_ID
    flow_id;

  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_SE_DUAL_SHAPER_GET);

  if (se_type == JER2_ARAD_SCH_SE_TYPE_CL)
  {
    se_offset_ndx = se_ndx - JER2_ARAD_CL_SE_ID_MIN;
  }
  else /* FQ or HR*/
  {
    /*
     * Get scheduling element's flow index
     */
    flow_id = jer2_arad_sch_se2flow_id(se_ndx);

    /*
     * The CL is the first scheduling element in the quartet
     */
    flow_id = JER2_ARAD_SCH_FLOW_BASE_QRTT_ID(flow_id);
    se_offset_ndx = jer2_arad_sch_flow2se_id(unit, flow_id) - JER2_ARAD_CL_SE_ID_MIN;
  }

  offset  = se_offset_ndx / 16;
  idx = se_offset_ndx % 16;

  res = jer2_arad_sch_dsm_tbl_get_unsafe(
          unit, core,
          offset,
          &dsm_tbl_data
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 10, exit);

  *is_dual_shaper = (uint8)DNX_SAND_GET_BIT(dsm_tbl_data.dual_shaper_ena, idx);

exit:
  DNX_SAND_EXIT_AND_SEND_ERROR( "error in jer2_arad_sch_se_dual_get()",0,0);
}


/*********************************************************************
*     Details: in the H file. (search for prototype)
*********************************************************************/
uint32
  jer2_arad_sch_se_dual_shaper_set(
    DNX_SAND_IN     int                   unit,
    DNX_SAND_IN     int                   core,
    DNX_SAND_IN     JER2_ARAD_SCH_FLOW_ID          se_ndx,
    DNX_SAND_IN     uint8                   is_dual_shaper
  )
{
  uint32
    se_offset_ndx,
    offset = 0,
    idx = 0,
    res = DNX_SAND_OK;
  JER2_ARAD_SCH_DSM_TBL_DATA
    dsm_tbl_data;
  uint32
    bit_val_to_set = 0;
  JER2_ARAD_SCH_FLOW_ID
    flow_id;
  JER2_ARAD_SCH_SE_TYPE
    se_type;

  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_SE_DUAL_SHAPER_SET);

  DNX_SAND_ERR_IF_ABOVE_MAX(core, SOC_DNX_DEFS_GET(unit, nof_cores) , JER2_ARAD_CORE_INDEX_OUT_OF_RANGE_ERR,15,exit);

  /*
   * The dual shaper offset is according to the "CL" element of the
   * pair sharing dual bucket.
   */
  se_type = jer2_arad_sch_se_get_type_by_id(se_ndx);
  if (se_type == JER2_ARAD_SCH_SE_TYPE_CL)
  {
    se_offset_ndx = se_ndx - JER2_ARAD_CL_SE_ID_MIN;
  }
  else /* FQ or HR*/
  {
    /*
     * Get scheduling element's flow index
     */
    flow_id = jer2_arad_sch_se2flow_id(se_ndx);

    /*
     * The CL is the first scheduling element in the quartet
     */
    flow_id = JER2_ARAD_SCH_FLOW_BASE_QRTT_ID(flow_id);
    se_offset_ndx = jer2_arad_sch_flow2se_id(unit, flow_id) - JER2_ARAD_CL_SE_ID_MIN;
  }

  offset = se_offset_ndx / 16;
  idx = se_offset_ndx % 16;

  res = jer2_arad_sch_dsm_tbl_get_unsafe(
          unit, core,
          offset,
          &dsm_tbl_data
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 10, exit);

  bit_val_to_set = (is_dual_shaper) ? 0x1 : 0x0;

  if (DNX_SAND_GET_BIT(dsm_tbl_data.dual_shaper_ena,idx) != bit_val_to_set)
  {
    DNX_SAND_SET_BIT(dsm_tbl_data.dual_shaper_ena,bit_val_to_set,idx);
    res = jer2_arad_sch_dsm_tbl_set_unsafe(
            unit, core,
            offset,
            &dsm_tbl_data
          );
    DNX_SAND_CHECK_FUNC_RESULT(res, 20, exit);
  }

exit:
  DNX_SAND_EXIT_AND_SEND_ERROR( "error in jer2_arad_sch_se_dual_shaper_set()",0,0);
}

/*********************************************************************
*     Details: in the H file. (search for prototype)
*     It is assumed that se_ndx is verified by the calling function.
*********************************************************************/
uint32
  jer2_arad_sch_se_config_get(
    DNX_SAND_IN   int           unit,
    DNX_SAND_IN   int           core,
    DNX_SAND_IN   JER2_ARAD_SCH_SE_ID     se_ndx,
    DNX_SAND_IN   JER2_ARAD_SCH_SE_TYPE   se_type,
    DNX_SAND_OUT  JER2_ARAD_SCH_SE_INFO  *se
    )
{
  uint32
    offset = 0,
    res;
  JER2_ARAD_SCH_SE_HR_MODE
    hr_mode;
  uint8
    is_dual_shaper;
  JER2_ARAD_SCH_SHC_TBL_DATA
    shc_tbl_data;
  JER2_ARAD_SCH_SCC_TBL_DATA
    scc_tbl_data;

  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_SE_CONFIG_GET);

  se->id = se_ndx;
  se->type = se_type;

  switch(se_type)
    {
    case JER2_ARAD_SCH_SE_TYPE_HR:
      /*
       * Read indirect from SHC table
       */
      /*
       * Get id relative to base HR id -
       * this is the table offset
       */
      offset  = se_ndx - JER2_ARAD_HR_SE_ID_MIN;
      res = jer2_arad_sch_shc_tbl_get_unsafe(
              unit, core,
              offset,
              &shc_tbl_data
            );
      DNX_SAND_CHECK_FUNC_RESULT(res, 10, exit);

      res = jer2_arad_sch_INTERNAL_HR_MODE_to_HR_MODE_convert(
              shc_tbl_data.hrmode,
              &hr_mode
            );
      DNX_SAND_CHECK_FUNC_RESULT(res, 20, exit);

      se->type_info.hr.mode = hr_mode;
      break;
    case JER2_ARAD_SCH_SE_TYPE_CL:
      /*
       * Read indirect from SCC table
       */
      /*
       * Get id relative to base CL id -
       * this is the table offset
       */
      offset  = se_ndx - JER2_ARAD_CL_SE_ID_MIN;
      res = jer2_arad_sch_scc_tbl_get_unsafe(
              unit, core,
              offset,
              &scc_tbl_data
            );
      DNX_SAND_CHECK_FUNC_RESULT(res, 30, exit);

      se->type_info.cl.id = scc_tbl_data.clsch_type;
      break;
    case JER2_ARAD_SCH_SE_TYPE_FQ:
        break;
    default:
      DNX_SAND_SET_ERROR_CODE(JER2_ARAD_SCH_SE_TYPE_UNDEFINED_ERR, 40, exit);
      break;
    }

    res = jer2_arad_sch_se_dual_shaper_get(
            unit, core,
            se_ndx,
            se_type,
            &is_dual_shaper
          );
    DNX_SAND_CHECK_FUNC_RESULT(res, 50, exit);

    se->is_dual = is_dual_shaper;

exit:
  DNX_SAND_EXIT_AND_SEND_ERROR("jer2_arad_sch_se_config_get", 0, 0);
}

/*********************************************************************
*     Details: in the H file. (search for prototype)
*********************************************************************/
uint32
  jer2_arad_sch_se_config_set(
    DNX_SAND_IN  int              unit,
    DNX_SAND_IN  int              core,
    DNX_SAND_IN  JER2_ARAD_SCH_SE_INFO     *se,
    DNX_SAND_IN  uint32              nof_subflows
  )
{
  uint32
    res = DNX_SAND_OK;
  uint32
    internal_hr_mode,
    offset;
  JER2_ARAD_SCH_SE_ID
    spouse_se_id;
  JER2_ARAD_SCH_FLOW_ID
    se_flow_id,
    spouse_flow_id;
  uint8
    is_composite_agg_0_1,
    dual_state,
    spouse_id_is_enabled;
  JER2_ARAD_SCH_SHC_TBL_DATA
    shc_tbl_data;
  JER2_ARAD_SCH_SCC_TBL_DATA
    scc_tbl_data;
  JER2_ARAD_SCH_GLOBAL_PER1K_INFO
    global_per1k_info;
  uint32
    fsf_nof_subflows;

  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_SE_CONFIG_SET);

  se_flow_id = jer2_arad_sch_se2flow_id(se->id);
  spouse_flow_id = JER2_ARAD_SCH_DUAL_SPOUSE_ID(se_flow_id);
  spouse_se_id = jer2_arad_sch_flow2se_id(unit, spouse_flow_id);

  res = jer2_arad_sch_per1k_info_get_unsafe(
          unit, core,
          JER2_ARAD_SCH_FLOW_TO_1K_ID(se_flow_id),
          &global_per1k_info
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 10, exit);
  DNX_SAND_ERR_IF_ABOVE_MAX(core, SOC_DNX_DEFS_GET(unit, nof_cores) , JER2_ARAD_CORE_INDEX_OUT_OF_RANGE_ERR,15,exit);

  if (se->state == JER2_ARAD_SCH_SE_STATE_DISABLE)
  {
    res = jer2_arad_sch_flow_nof_subflows_get(
            unit, core,
            se_flow_id,
            &fsf_nof_subflows
          );
    DNX_SAND_CHECK_FUNC_RESULT(res, 10, exit);

    is_composite_agg_0_1 = DNX_SAND_NUM2BOOL((fsf_nof_subflows == 2) && (global_per1k_info.is_odd_even));
    if (is_composite_agg_0_1 && JER2_ARAD_SCH_COMPOSITE_IS_SECOND_SUBFLOW(se_flow_id, TRUE))
    {
      DNX_SAND_SET_ERROR_CODE(JER2_ARAD_SCH_ILLEGAL_COMPOSITE_AGGREGATE_ERR, 11, exit);
    }

    res = jer2_arad_sch_se_state_set(
            unit, core,
            se->id,
            FALSE
          );
    DNX_SAND_CHECK_FUNC_RESULT(res, 10, exit);

    if (is_composite_agg_0_1)
    {
      res = jer2_arad_sch_se_state_set(
              unit, core,
              spouse_se_id,
              FALSE
            );
      DNX_SAND_CHECK_FUNC_RESULT(res, 10, exit);
    }
  }
  else
  {
    is_composite_agg_0_1 = DNX_SAND_NUM2BOOL((nof_subflows == 2) && (global_per1k_info.is_odd_even));
    if (is_composite_agg_0_1 && JER2_ARAD_SCH_COMPOSITE_IS_SECOND_SUBFLOW(se_flow_id, TRUE))
    {
      DNX_SAND_SET_ERROR_CODE(JER2_ARAD_SCH_ILLEGAL_COMPOSITE_AGGREGATE_ERR, 13, exit);
    }
    if (is_composite_agg_0_1 && se->is_dual)
    {
      DNX_SAND_SET_ERROR_CODE(JER2_ARAD_SCH_COMPOSITE_AGGREGATE_DUAL_SHAPER_ERR, 16, exit);
    }

    switch(se->type)
    {
    case JER2_ARAD_SCH_SE_TYPE_HR:
      /*
       * Write indirect to SHC table
       */

      /*
       * Get id relative to base HR id -
       * this is the table offset
       */
      offset = se->id - JER2_ARAD_HR_SE_ID_MIN;
      res = jer2_arad_sch_shc_tbl_get_unsafe(
              unit, core,
              offset,
              &shc_tbl_data
            );
      DNX_SAND_CHECK_FUNC_RESULT(res, 20, exit);

      res = jer2_arad_sch_HR_MODE_to_INTERNAL_HR_MODE_convert(
              se->type_info.hr.mode,
              &internal_hr_mode
            );
      DNX_SAND_CHECK_FUNC_RESULT(res, 30, exit);

      if (shc_tbl_data.hrmode != internal_hr_mode)
      {
        shc_tbl_data.hrmode = internal_hr_mode;

        res = jer2_arad_sch_shc_tbl_set_unsafe(
              unit, core,
              offset,
              &shc_tbl_data
            );
        DNX_SAND_CHECK_FUNC_RESULT(res, 40, exit);
      }

      break;
    case JER2_ARAD_SCH_SE_TYPE_CL:
      /*
       * Write indirect to SCC table
       */

      /*
       * Get id relative to base CL id -
       * this is the table offset
       */
      offset  = se->id - JER2_ARAD_CL_SE_ID_MIN;

      scc_tbl_data.clsch_type = se->type_info.cl.id;
      res = jer2_arad_sch_scc_tbl_set_unsafe(
              unit, core,
              offset,
              &scc_tbl_data
            );
      DNX_SAND_CHECK_FUNC_RESULT(res, 50, exit);
      break;
    case JER2_ARAD_SCH_SE_TYPE_FQ:
        break;
    default:
      DNX_SAND_SET_ERROR_CODE(JER2_ARAD_SCH_SE_TYPE_UNDEFINED_ERR, 40, exit);
      break;
    }
    res = jer2_arad_sch_se_state_get(
            unit, core,
            spouse_se_id,
            &spouse_id_is_enabled
          );
    DNX_SAND_CHECK_FUNC_RESULT(res, 60, exit);

    /* Is composite aggregate is configured that it cannot be dual */
    dual_state = DNX_SAND_NUM2BOOL(spouse_id_is_enabled ? se->is_dual : FALSE);
    res = jer2_arad_sch_se_dual_shaper_set(
            unit, core,
            se->id,
            dual_state
          );
    DNX_SAND_CHECK_FUNC_RESULT(res, 70, exit);

    res = jer2_arad_sch_se_state_set(
          unit, core,
          se->id,
          TRUE
        );
    DNX_SAND_CHECK_FUNC_RESULT(res, 90, exit);

    if (is_composite_agg_0_1)
    {
      res = jer2_arad_sch_se_state_set(
            unit, core,
            spouse_se_id,
            TRUE
          );
      DNX_SAND_CHECK_FUNC_RESULT(res, 90, exit);
    }
  } /* SE Enable */

exit:
   DNX_SAND_EXIT_AND_SEND_ERROR("jer2_arad_sch_se_config_set", 0, 0);
}


/********************************************************************
*     Details: in the H file. (search for prototype)
*********************************************************************/
uint32
  jer2_arad_sch_se_id_and_type_match_verify(
    JER2_ARAD_SCH_SE_ID                   se_id,
    JER2_ARAD_SCH_SE_TYPE                 se_type
  )
{
  DNX_SAND_INIT_ERROR_DEFINITIONS_NO_DEVID(JER2_ARAD_SCH_SE_ID_AND_TYPE_MATCH_VERIFY);

  DNX_SAND_EXIT_AND_SEND_ERROR( "error in jer2_arad_sch_se_id_and_type_match_verify()",0,0);
}

/* CL { */

/*********************************************************************
*     Details: in the H file. (search for prototype)
*********************************************************************/
uint32
  jer2_arad_sch_class_type_params_verify(
    DNX_SAND_IN  int                 unit,
    DNX_SAND_IN  JER2_ARAD_SCH_CL_CLASS_TYPE_ID cl_type_ndx,
    DNX_SAND_IN  JER2_ARAD_SCH_SE_CL_CLASS_INFO *class_type
  )
{
  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_CLASS_TYPE_PARAMS_VERIFY);

  DNX_SAND_EXIT_AND_SEND_ERROR( "error in jer2_arad_sch_class_type_params_verify()",0,0);
}

/*********************************************************************
*     Details: in the H file. (search for prototype)
*********************************************************************/
uint32
  jer2_arad_sch_class_type_params_get_unsafe(
    DNX_SAND_IN  int                 unit,
    DNX_SAND_IN  int                 core,
    DNX_SAND_IN  JER2_ARAD_SCH_CL_CLASS_TYPE_ID cl_type_ndx,
    DNX_SAND_OUT JER2_ARAD_SCH_SE_CL_CLASS_INFO *class_type
  )
{
  uint32
    offset,
    res;
  JER2_ARAD_SCH_SCT_TBL_DATA
    sct_tbl_data;

  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_CLASS_TYPE_PARAMS_GET_UNSAFE);

  offset = cl_type_ndx;

  res = jer2_arad_sch_sct_tbl_get_unsafe(
          unit, core,
          offset,
          &sct_tbl_data
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 10, exit);

  class_type->id = cl_type_ndx;

  /*
   * Convert to user representation.
   */
  res = jer2_arad_sch_INTERNAL_CLASS_TYPE_to_CLASS_TYPE_convert(
          &sct_tbl_data,
          class_type
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 20, exit);

exit:
  DNX_SAND_EXIT_AND_SEND_ERROR( "error in jer2_arad_sch_class_type_params_get_unsafe()",0,0);
}

/*********************************************************************
*     Sets a single class type in the table. The driver writes
*     to the following tables: CL-Schedulers Type (SCT)
*     Details: in the H file. (search for prototype)
*********************************************************************/
uint32
  jer2_arad_sch_class_type_params_set_unsafe(
    DNX_SAND_IN  int                 unit,
    DNX_SAND_IN  int                 core,
    DNX_SAND_IN  JER2_ARAD_SCH_SE_CL_CLASS_INFO *class_type,
    DNX_SAND_OUT JER2_ARAD_SCH_SE_CL_CLASS_INFO *exact_class_type
  )
{
  uint32
    offset,
    res;
  JER2_ARAD_SCH_SCT_TBL_DATA
    sct_tbl_data;

  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_CLASS_TYPE_PARAMS_SET_UNSAFE);

  /*
   * Convert to internal representation.
   */
  res = jer2_arad_sch_CLASS_TYPE_to_INTERNAL_CLASS_TYPE_convert(
          unit,
          class_type,
          &sct_tbl_data
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 2, exit);

  /*
   * Set device internal queue type representation.
   */
  offset = class_type->id;

  res = jer2_arad_sch_sct_tbl_set_unsafe(
          unit, core,
          offset,
          &sct_tbl_data
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 4, exit);

  res = jer2_arad_sch_sct_tbl_get_unsafe(
          unit, core,
          offset,
          &sct_tbl_data
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 6, exit);


  /*
   * Convert back to user representation.
   */
  res = jer2_arad_sch_INTERNAL_CLASS_TYPE_to_CLASS_TYPE_convert(
          &sct_tbl_data,
          exact_class_type
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 8, exit);

exit:
  DNX_SAND_EXIT_AND_SEND_ERROR( "error in jer2_arad_sch_class_type_params_set_unsafe()",0,0);
}

/*********************************************************************
*     Details: in the H file. (search for prototype)
*********************************************************************/
uint32
  jer2_arad_sch_class_type_params_table_verify(
    DNX_SAND_IN  int                 unit,
    DNX_SAND_IN  JER2_ARAD_SCH_SE_CL_CLASS_TABLE *sct
  )
{
  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_CLASS_TYPE_PARAMS_TABLE_VERIFY);

  DNX_SAND_EXIT_AND_SEND_ERROR( "error in jer2_arad_sch_class_type_params_table_verify()",0,0);
}

/*********************************************************************
*     Sets the scheduler class type table as a whole.
*     Details: in the H file. (search for prototype)
*********************************************************************/
uint32
  jer2_arad_sch_class_type_params_table_set_unsafe(
    DNX_SAND_IN  int                 unit,
    DNX_SAND_IN  int                 core,
    DNX_SAND_IN  JER2_ARAD_SCH_SE_CL_CLASS_TABLE *sct,
    DNX_SAND_OUT JER2_ARAD_SCH_SE_CL_CLASS_TABLE *exact_sct
  )
{
  uint32
    res,
    sct_index;
  const JER2_ARAD_SCH_SE_CL_CLASS_INFO
      *sct_entry;
  JER2_ARAD_SCH_SE_CL_CLASS_INFO
      *exact_sct_entry;
  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_CLASS_TYPE_PARAMS_TABLE_SET_UNSAFE);

  /*
   * Set SCT table.
   */
  exact_sct->nof_class_types = 0;
  for (sct_index = 0; sct_index < sct->nof_class_types; ++sct_index)
  {
    sct_entry = &sct->class_types[sct_index];
    exact_sct_entry = &exact_sct->class_types[sct_index];
    res = jer2_arad_sch_class_type_params_set_unsafe(
            unit, core,
            sct_entry,
            exact_sct_entry
          );
    DNX_SAND_CHECK_FUNC_RESULT(res, 2, exit);
    exact_sct->nof_class_types++;
  }

exit:
  DNX_SAND_EXIT_AND_SEND_ERROR( "error in jer2_arad_sch_class_type_params_table_set_unsafe()",0,0);
}

/*********************************************************************
*     Details: in the H file. (search for prototype)
*********************************************************************/
uint32
  jer2_arad_sch_class_type_params_table_get_unsafe(
    DNX_SAND_IN  int                 unit,
    DNX_SAND_IN  int                 core,
    DNX_SAND_OUT JER2_ARAD_SCH_SE_CL_CLASS_TABLE *sct
  )
{
  uint32
    res,
    sct_index;
  JER2_ARAD_SCH_SE_CL_CLASS_INFO
      sct_entry;
  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_CLASS_TYPE_PARAMS_TABLE_GET_UNSAFE);

  jer2_arad_JER2_ARAD_SCH_SE_CL_CLASS_INFO_clear(&sct_entry);

  sct->nof_class_types = JER2_ARAD_SCH_NOF_CLASS_TYPES;
  /*
   * Get SCT table.
   */
  for (sct_index = 0; sct_index < JER2_ARAD_SCH_NOF_CLASS_TYPES; ++sct_index)
  {
    res = jer2_arad_sch_class_type_params_get_unsafe(
            unit, core,
            sct_index,
            &sct_entry
          );
    DNX_SAND_CHECK_FUNC_RESULT(res, 2, exit);
    JER2_ARAD_COPY(&(sct->class_types[sct_index]), &sct_entry, JER2_ARAD_SCH_SE_CL_CLASS_INFO, 1);
  }

exit:
  DNX_SAND_EXIT_AND_SEND_ERROR( "error in jer2_arad_sch_class_type_params_table_get_unsafe()",0,0);
}

/* CL } */


uint32
  jer2_arad_sch_se_verify_unsafe(
    DNX_SAND_IN  int               unit,
    DNX_SAND_IN  JER2_ARAD_SCH_SE_INFO      *se
  )
{
  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_SE_VERIFY_UNSAFE);

  DNX_SAND_EXIT_AND_SEND_ERROR("error in jer2_arad_sch_se_verify_unsafe()",unit,se->id);
}

uint32
  jer2_arad_sch_se_get_unsafe(
    DNX_SAND_IN   int         unit,
    DNX_SAND_IN   int         core,
    DNX_SAND_IN   JER2_ARAD_SCH_SE_ID    se_ndx,
    DNX_SAND_OUT  JER2_ARAD_SCH_SE_INFO  *se
  )
{
  uint32
    res;
  uint8
    is_sched_enabled = FALSE;

  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_SE_GET_UNSAFE);

  DNX_SAND_ERR_IF_ABOVE_MAX(core, SOC_DNX_DEFS_GET(unit, nof_cores) , JER2_ARAD_CORE_INDEX_OUT_OF_RANGE_ERR,15,exit);

  se->id = se_ndx;
  se->type = jer2_arad_sch_se_get_type_by_id(se_ndx);
  /*
   * First check if the given scheduler is enabled in SEM
   * Then read its entry in the SHC or SCC (for a HR or CL scheduler, respectively).
   */
  /*
   * Read indirect from SEM table
   */
  res = jer2_arad_sch_se_state_get(
          unit, core,
          se_ndx,
          &is_sched_enabled
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 20, exit);

  se->state = is_sched_enabled ?
                       JER2_ARAD_SCH_SE_STATE_ENABLE :
                       JER2_ARAD_SCH_SE_STATE_DISABLE;

  /*
   * Read scheduler type-specific configuration
   */
  res = jer2_arad_sch_se_config_get(
          unit, core,
          se_ndx,
          se->type,
          se
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 30, exit);


exit:
  DNX_SAND_EXIT_AND_SEND_ERROR("error in jer2_arad_sch_se_get_unsafe()",0,0);
}



uint32
  jer2_arad_sch_se_set_unsafe(
    DNX_SAND_IN  int              unit,
    DNX_SAND_IN  int              core,
    DNX_SAND_IN  JER2_ARAD_SCH_SE_INFO      *se,
    DNX_SAND_IN  uint32              nof_subflows
  )
{
  uint32
    res;

  DNX_SAND_INIT_ERROR_DEFINITIONS(JER2_ARAD_SCH_SE_SET_UNSAFE);

  DNX_SAND_ERR_IF_ABOVE_MAX(core, SOC_DNX_DEFS_GET(unit, nof_cores) , JER2_ARAD_CORE_INDEX_OUT_OF_RANGE_ERR,15,exit);

  res = jer2_arad_sch_se_config_set(
          unit, core,
          se,
          nof_subflows
        );
  DNX_SAND_CHECK_FUNC_RESULT(res, 20, exit);

exit:
  DNX_SAND_EXIT_AND_SEND_ERROR("error in jer2_arad_sch_se_set_unsafe()",unit,se->id);
}

/* } */


#include <soc/dnx/legacy/SAND/Utils/sand_footer.h>

#endif /* of #if defined(BCM_88690_A0) */

