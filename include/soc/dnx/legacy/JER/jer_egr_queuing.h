/*
 * $Id: $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *
 * File: jer2_jer_egr_queuing.h
 */

#ifndef __JER2_JER_EGR_QUEUING_INCLUDED__

#define __JER2_JER_EGR_QUEUING_INCLUDED__

#include <soc/dnx/legacy/SAND/Utils/sand_header.h>
#include <soc/dnx/legacy/cosq.h>
#include <soc/dnx/legacy/TMC/tmc_api_egr_queuing.h>
#include <soc/dnx/legacy/ARAD/arad_api_egr_queuing.h>

/* EGQ put cpu/olp/oam/rcy in 28/29/30/31 */
#define SOC_JER2_JER_EGR_IF_MIN   SOC_DNX_IMP_DEFS_GET(unit, egr_if_min)
#define SOC_JER2_JER_EGR_IF_CPU   SOC_DNX_IMP_DEFS_GET(unit, egr_if_cpu)
#define SOC_JER2_JER_EGR_IF_OLP   SOC_DNX_IMP_DEFS_GET(unit, egr_if_olp)
#define SOC_JER2_JER_EGR_IF_OAMP  SOC_DNX_IMP_DEFS_GET(unit, egr_if_oamp)
#define SOC_JER2_JER_EGR_IF_RCY   SOC_DNX_IMP_DEFS_GET(unit, egr_if_rcy)
#define SOC_JER2_JER_EGR_IF_SAT   SOC_DNX_IMP_DEFS_GET(unit, egr_if_sat)
#define SOC_JER2_JER_EGR_IF_IPSEC SOC_DNX_IMP_DEFS_GET(unit, egr_if_ipsec)
#define SOC_JER2_JER_EGR_IF_MAX   SOC_DNX_IMP_DEFS_GET(unit, egr_if_max)


int soc_jer2_jer_egr_interface_init(int unit);
int soc_jer2_jer_egr_interface_alloc(int unit, soc_port_t port);
int soc_jer2_jer_egr_interface_free(int unit, soc_port_t port);
int soc_jer2_jer_egr_queuing_init_thresholds(int unit, int port_rate,int nof_priorities, int nof_channels, DNX_TMC_EGR_QUEUING_CGM_INIT_THRESHOLDS* cgm_init_thresholds);

int
  soc_jer2_jer_egr_port2egress_offset(
    DNX_SAND_IN  int                 unit,
    DNX_SAND_IN  int                 core,
    DNX_SAND_IN  uint32              tm_port,
    DNX_SAND_OUT uint32              *egr_if
  );

int
    soc_jer2_jer_egr_is_channelized(
    DNX_SAND_IN  int                   unit,
    DNX_SAND_IN  int                   core, 
    DNX_SAND_IN  uint32                tm_port, 
    DNX_SAND_OUT uint32                *is_channalzied
   );

int soc_jer2_jer_egr_tm_init(int unit);

typedef enum soc_jer2_jer_egr_cal_type_e {
    socJerCalTypeFQP = 0,
    socJerCalTypePQP,
    socJerCalTypesCount
} soc_jer2_jer_egr_cal_type_t;

int
  soc_jer2_jer_egr_q_nif_cal_set(
    DNX_SAND_IN int unit,
    DNX_SAND_IN int core,
    DNX_SAND_IN soc_jer2_jer_egr_cal_type_t cal_to_update
  );

int
  soc_jer2_jer_egr_q_nif_cal_set_all(
    DNX_SAND_IN int unit
  );

int
  soc_jer2_jer_egr_q_fqp_scheduler_config(
    DNX_SAND_IN int unit
  );

int 
soc_jer2_jer_egr_q_fast_port_set(
        DNX_SAND_IN  int unit, 
        DNX_SAND_IN  soc_port_t port, 
        DNX_SAND_IN  int is_ilkn, 
        DNX_SAND_IN  int turn_on
        );

uint32
  soc_jer2_jer_egr_queuing_sp_tc_drop_set_unsafe(
    DNX_SAND_IN    int    unit,
    DNX_SAND_IN    int    core,
    DNX_SAND_IN    int    tc,
    DNX_SAND_IN    soc_dnx_cosq_threshold_type_t threshold_type,
    DNX_SAND_IN    int    threshold_value,
    DNX_SAND_IN    soc_dnx_cosq_threshold_global_type_t drop_type
  );

uint32
  soc_jer2_jer_egr_queuing_sp_tc_drop_get_unsafe(
    DNX_SAND_IN    int    unit,
    DNX_SAND_IN    int    core,
    DNX_SAND_IN    int    tc,
    DNX_SAND_IN    soc_dnx_cosq_threshold_type_t threshold_type,
    DNX_SAND_OUT   int*   threshold_value,
    DNX_SAND_IN    soc_dnx_cosq_threshold_global_type_t drop_type
  );

uint32 
  soc_jer2_jer_egr_queuing_sch_unsch_drop_set_unsafe(
    DNX_SAND_IN    int    unit,
    DNX_SAND_IN    int    core,
    DNX_SAND_IN    int    threshold_type,
    DNX_SAND_IN    DNX_TMC_EGR_QUEUING_DEV_TH *dev_thresh
  );

/* this function only returns mc shared pds min value and alpha which are unsed by Jericho and above*/
uint32 
  soc_jer2_jer_egr_queuing_sch_unsch_drop_get_unsafe(
    DNX_SAND_IN    int    unit,
    DNX_SAND_IN    int    core,
    DNX_SAND_IN    int    threshold_type,
    DNX_SAND_OUT   DNX_TMC_EGR_QUEUING_DEV_TH *dev_thresh
  );
uint32
jer2_jer_egr_threshold_types_verify(
   DNX_SAND_IN    int   unit,
   DNX_SAND_IN    soc_dnx_cosq_threshold_type_t threshold_type
  );

uint32
  soc_jer2_jer_egr_unsched_drop_set_unsafe(
    DNX_SAND_IN  int                 unit,
    DNX_SAND_IN  int                 core,
    DNX_SAND_IN  int                 profile,
    DNX_SAND_IN  JER2_ARAD_EGR_Q_PRIO          prio_ndx,
    DNX_SAND_IN  uint32                 dp_ndx,
    DNX_SAND_IN  JER2_ARAD_EGR_DROP_THRESH     *thresh,
    DNX_SAND_OUT JER2_ARAD_EGR_DROP_THRESH     *exact_thresh
  );

uint32
  soc_jer2_jer_egr_sched_port_fc_thresh_set_unsafe(
    DNX_SAND_IN  int                unit,
    DNX_SAND_IN  int                core,
    DNX_SAND_IN  int                threshold_type,
    DNX_SAND_IN  DNX_TMC_EGR_FC_OFP_THRESH *thresh
  );

uint32
  soc_jer2_jer_egr_sched_q_fc_thresh_set_unsafe(
    DNX_SAND_IN  int       unit,
    DNX_SAND_IN  int       core,
    DNX_SAND_IN  int       prio,
    DNX_SAND_IN  int threshold_type,
    DNX_SAND_IN  DNX_TMC_EGR_FC_OFP_THRESH  *thresh
  );

uint32	
  soc_jer2_jer_egr_queuing_if_fc_uc_set_unsafe(
	DNX_SAND_IN	int	unit,
    DNX_SAND_IN int core,
	DNX_SAND_IN	uint32	uc_if_profile_ndx,
	DNX_SAND_IN JER2_ARAD_EGR_QUEUING_IF_UC_FC	*info
  );

int	
  soc_jer2_jer_egr_queuing_if_fc_uc_get_unsafe(
	DNX_SAND_IN	int	unit,
    DNX_SAND_IN int core,
	DNX_SAND_IN	uint32	uc_if_profile_ndx,
	DNX_SAND_OUT JER2_ARAD_EGR_QUEUING_IF_UC_FC	*info
  );
  
int
soc_jer2_jer_egr_nrdy_th_profile_data_set(
    DNX_SAND_IN int unit, 
    DNX_SAND_IN int core,
    DNX_SAND_IN uint32 profile,
    DNX_SAND_IN uint32 profile_data);

int
soc_jer2_jer_egr_nrdy_th_profile_data_get(
    DNX_SAND_IN int unit, 
    DNX_SAND_IN int core,
    DNX_SAND_IN uint32 profile,
    DNX_SAND_OUT uint32 *profile_data);

int
  jer2_jer_egr_ofp_fc_get(
    DNX_SAND_IN  int                 unit,
    DNX_SAND_IN  int                 core,
    DNX_SAND_IN  JER2_ARAD_EGR_Q_PRIO          prio_ndx,
    DNX_SAND_IN  JER2_ARAD_EGR_PORT_THRESH_TYPE ofp_type_ndx,
    DNX_SAND_OUT JER2_ARAD_EGR_FC_OFP_THRESH   *thresh
  );

uint32
  soc_jer2_jer_egr_unsched_drop_get_unsafe(
    DNX_SAND_IN  int                 unit,
    DNX_SAND_IN  int                 core,
    DNX_SAND_IN  JER2_ARAD_EGR_Q_PRIO          prio_ndx,
    DNX_SAND_IN  uint32                 dp_ndx,
    DNX_SAND_OUT JER2_ARAD_EGR_DROP_THRESH     *thresh
  );

uint32 soc_jer2_jer_sp_tc_init(int unit, int core, JER2_ARAD_EGR_QUEUING_DEV_TH    *info);

#include <soc/dnx/legacy/SAND/Utils/sand_footer.h>

#endif /*__JER2_JER_EGR_QUEUING_INCLUDED__*/

