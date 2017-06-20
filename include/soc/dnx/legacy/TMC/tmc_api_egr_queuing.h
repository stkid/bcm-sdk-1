/* $Id: jer2_jer2_jer2_tmc_api_egr_queuing.h,v 1.10 Broadcom SDK $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
*/

#ifndef __DNX_TMC_API_EGR_QUEUING_INCLUDED__
/* { */
#define __DNX_TMC_API_EGR_QUEUING_INCLUDED__

/*************
 * INCLUDES  *
 *************/
/* { */
#include <soc/dnx/legacy/SAND/Utils/sand_header.h>

#include <soc/dnx/legacy/SAND/Management/sand_general_macros.h>
#include <soc/dnx/legacy/SAND/Management/sand_error_code.h>

#include <soc/dnx/legacy/TMC/tmc_api_general.h>

/* } */
/*************
 * DEFINES   *
 *************/
/* { */
#define DNX_TMC_EGR_OFP_SCH_WFQ_WEIGHT_MAX 255
#define DNX_TMC_NOF_EGR_QUEUING_MC_POOLS    (2) 
#define DNX_TMC_NOF_THRESH_TYPES            (16)

#define SHR_DEVICE_QUEUE_RESERVED_FLOW_START (0)
/* } */

/*************
 * MACROS    *
 *************/
/* { */

/* } */

/*************
 * TYPE DEFS *
 *************/
/* { */

typedef enum
{
  /*
   *  Egress priority for unscheduled traffic - low
   */
  DNX_TMC_EGR_Q_PRIO_LOW=0,
  /*
   *  Egress priority for unscheduled traffic - high
   */
  DNX_TMC_EGR_Q_PRIO_HIGH=1,
  /*
   *  Number of egress priorities for unscheduled traffic - Soc_petra B.
   */
  DNX_TMC_EGR_NOF_Q_PRIO_PB=2,
  /*
   *  Egress priority in JER2_ARAD 0 - 7
   */
  DNX_TMC_EGR_Q_PRIO_0 = 0,
  DNX_TMC_EGR_Q_PRIO_1 = 1,
  DNX_TMC_EGR_Q_PRIO_2 = 2,
  DNX_TMC_EGR_Q_PRIO_3 = 3,
  DNX_TMC_EGR_Q_PRIO_4 = 4,
  DNX_TMC_EGR_Q_PRIO_5 = 5,
  DNX_TMC_EGR_Q_PRIO_6 = 6,
  DNX_TMC_EGR_Q_PRIO_7 = 7,
  /*
   *  Number of egress priorities for unscheduled traffic - JER2_ARAD.
   */
  DNX_TMC_EGR_NOF_Q_PRIO_JER2_ARAD,
  /*
   * All priorities: for thresholds set for High + Low priorities
   */
  DNX_TMC_EGR_Q_PRIO_ALL=0xFFFF
}DNX_TMC_EGR_Q_PRIO;

typedef enum
{
  /*
   *  Port threshold type 0. Port threshold type defines the
   *  set of packet thresholds for Drop Precedence and Flow
   *  Control, that will be applied to the egress queue
   *  belonging to this type.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_0=0,
  /*
   *  Port threshold type 1.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_1=1,
  /*
   *  Port threshold type 2.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_2=2,
  /*
   *  Port threshold type 3.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_3=3,
  /*
   *  Must be the last value. Indicates the number of threshold
   *  port types (for Soc_petra).
   */
  DNX_TMC_EGR_PORT_NOF_THRESH_TYPES_PETRA=4,
  /*
   *  Port threshold type 4.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_4=4,
  /*
   *  Port threshold type 5.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_5=5,
  /*
   *  Port threshold type 6.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_6=6,
  /*
   *  Port threshold type 7.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_7=7,
  /*
   *  Port threshold type 8.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_8=8,
  /*
   *  Port threshold type 9.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_9=9,
  /*
   *  Port threshold type 10.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_10=10,
  /*
   *  Port threshold type 11.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_11=11,
  /*
   *  Port threshold type 12.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_12=12,
  /*
   *  Port threshold type 13.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_13=13,
  /*
   *  Port threshold type 14.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_14=14,
  /*
   *  Port threshold type 15.
   */
  DNX_TMC_EGR_PORT_THRESH_TYPE_15=15,
  /*
   *  Must be the last value. Indicates the number of threshold
   *  port types (for JER2_ARAD).
   */
  DNX_TMC_EGR_PORT_NOF_THRESH_TYPES_JER2_ARAD = 16,
  DNX_TMC_EGR_PORT_NOF_THRESH_TYPES = 16
}DNX_TMC_EGR_PORT_THRESH_TYPE;

typedef enum
{
  /*
   *  Enable MCI0 (guaranteed) and MCI1 (best effort) flow
   *  control.
   */
  DNX_TMC_EGR_FC_MCI_ENABLE=0,
  /*
   *  Disable all MCI flow control
   */
  DNX_TMC_EGR_FC_MCI_DISABLE=1,
  /*
   *  Enable MCI0 (guaranteed) flow control, use MCI1 (best
   *  effort) threshold for ERP (egress replication port) flow
   *  control. In this mode MCI1 (best effort) flow control is
   *  disabled.
   */
  DNX_TMC_EGR_FC_MCI_ENABLE_ERP=2,
  /*
   *  Must be the last value.
   */
  DNX_TMC_EGR_FC_MCI_NOF_ENABLE_STATUSS=3
}DNX_TMC_EGR_FC_MCI_EN_STATUS;

typedef enum
{
  /*
   *  Multicast congestion indication: guaranteed (MCI0)
   */
  DNX_TMC_EGR_MCI_GUARANTEED=0,
  /*
   *  Multicast congestion indication: best effort (MCI1)
   */
  DNX_TMC_EGR_MCI_BE=1,
  /*
   *  Must be the last value. Indicates the number of
   *  available MCI indications.
   */
  DNX_TMC_EGR_NOF_MCI_PRIORITIES=2
}DNX_TMC_EGR_MCI_PRIO;

typedef enum
{
  /*
   *  Outgoing FAP Strict Priority, for egress scheduling -
   *  high. Note: this priority is only valid for ports mapped
   *  to channelized NIF port! Otherwise - ignored.
   */
  DNX_TMC_EGR_OFP_INTERFACE_PRIO_HIGH=0,
  /*
   *  OFP priority - medium
   *  Not valid for JER2_ARAD.
   */
  DNX_TMC_EGR_OFP_INTERFACE_PRIO_MID=1,
  /*
   *  OFP priority - low
   */
  DNX_TMC_EGR_OFP_INTERFACE_PRIO_LOW=2,
  /*
   *  OFP priority - lowest.
   *  Applicable for Soc_petra-B only.
   *  For Soc_petra-B: should be used for eight-priorities FC configuration.
   *  Only one OFP mapped to a given NIF is allowed to be set to this priority.
   */
  DNX_TMC_EGR_OFP_INTERFACE_PRIO_PFC_LOWEST=3,
  /*
   *  Must be the last value. Indicates the number of OFP
   *  scheduling priorities.
   */
  DNX_TMC_EGR_OFP_CHNIF_NOF_PRIORITIES=4
}DNX_TMC_EGR_OFP_INTERFACE_PRIO;

/* $Id: jer2_jer2_jer2_tmc_api_egr_queuing.h,v 1.10 Broadcom SDK $
 *  Port priority - irrelevant, e.g. for ports mapped
 *  to non-channelized interfaces.
 */
#define DNX_TMC_EGR_OFP_INTERFACE_PRIO_NONE DNX_TMC_EGR_OFP_CHNIF_NOF_PRIORITIES;

typedef enum
{
  /*
   *  All High Priority traffic (Scheduled and Unscheduled)
   *  Strict Priority over Low Priority traffic. Also, High
   *  Priority Scheduled traffic Strict Priority over High
   *  Priority Unscheduled traffic. Low Priority traffic - WFQ,
   *  set per-port.
   */
  DNX_TMC_EGR_HP_OVER_LP_ALL=0,
  /*
   *  High Priority scheduled traffic Strict Priority over Low
   *  Priority scheduled traffic. Same for unscheduled. WFQ
   *  between Scheduled and Unscheduled, set per-port.
   */
  DNX_TMC_EGR_HP_OVER_LP_PER_TYPE=1,
  /*
   *  All High Priority traffic (Scheduled and Unscheduled)
   *  Strict Priority over Low Priority traffic. High Priority
   *  traffic - WFQ, set per-port. Low Priority traffic - WFQ,
   *  set per-port. A WFQ can be transformed to a SP by setting
   *  a null weight in the OFP scheduling set API.
   *  Not valid for Soc_petra-A.
   */
  DNX_TMC_EGR_HP_OVER_LP_FAIR = 2,
  /*
   *  Must be the last value. Indicates the number of egress
   *  OFP scheduling modes
   */
  DNX_TMC_EGR_OFP_NOF_SCH_MODES = 3
}DNX_TMC_EGR_OFP_SCH_MODE;

typedef enum
{
  /*
   *  Mapping from Traffic Class and Drop Precedence to Egress
   *  Queue Priority:Unicast packets to scheduled queues.
   */
  DNX_TMC_EGR_UCAST_TO_SCHED=0,
  /*
   *  Multicast packets to unscheduled queues (unscheduled
   *  multicast).
   */
  DNX_TMC_EGR_MCAST_TO_UNSCHED=1,
  /*
   *  Must be the last value. Indicates the number of [Traffic
   *  Class, Drop Precedence] to Egress Queue Priority Mapping
   *  modes.
   */
  DNX_TMC_EGR_NOF_Q_PRIO_MAPPING_TYPES=2
}DNX_TMC_EGR_Q_PRIO_MAPPING_TYPE;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /*
   *  Threshold value for the number of total consumed 32B
   *  words, above which arrived packets are rejected.
   *  Not valid for JER2_ARAD.
   */
  uint32 words_consumed;
  /*
   *  Threshold value for the number of total number of
   *  packets, above which arrived packets are rejected.
   *  Not valid for JER2_ARAD.
   */
  uint32 packets_consumed;
  /*
   *  Threshold value for the number of available packet
   *  descriptors, below which arrived packets are rejected.
   *  Not valid for JER2_ARAD.
   */
  uint32 descriptors_avail;
  /*
   *  Threshold value for the number of available data
   *  buffers, below which arrived packets are rejected.
   *  Not valid for JER2_ARAD.
   */
  uint32 buffers_avail;
  /*
   *  Sets the threshold for the number of data
   *  buffers, above which unscheduled
   *  packets of multicast are rejected. Not valid for
   *  Soc_petra-A and JER2_ARAD.
   */
  uint32 buffers_used;
  /*
   *  For entry with index 'i', threshold value for the number
   *  of total 32B words in queues of type 'i', above which
   *  packets to this queues are rejected.
   */
  uint32 queue_words_consumed[DNX_TMC_EGR_PORT_NOF_THRESH_TYPES];
  /*
   *  For entry with index 'i', threshold value for the number
   *  of total 32B packet descriptors in queues of type 'i',
   *  above which packets to this queues are rejected. Not
   *  valid for Soc_petra-A.
   */
  uint32 queue_pkts_consumed[DNX_TMC_EGR_PORT_NOF_THRESH_TYPES];
    /*
   *  For entry with index 'i', threshold value for the number
   *  of total 32B packet descriptors in queues of type 'i',
   *  Max/min for determining the max/min threshold, alpha for dynamic threshold
   *  valid for Jericho.
   */

  uint32 queue_pkts_consumed_min[DNX_TMC_EGR_PORT_NOF_THRESH_TYPES];

  uint32 queue_pkts_consumed_alpha[DNX_TMC_EGR_PORT_NOF_THRESH_TYPES];

}DNX_TMC_EGR_DROP_THRESH;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /*
   *  consumed words threshold
   *  Not valid for JER2_ARAD.
   */
  uint32 words;
  /*
   *  consumed buffers threshold
   */
  uint32 buffers;
  /*
   *  consumed descriptors threshold
   */
  uint32 descriptors;

  uint32 descriptors_min;

  uint32 descriptors_alpha;

}DNX_TMC_EGR_FC_DEV_THRESH_INNER;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /*
   *  Thresholds for device global egress resources
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER global;
  /*
   *  Thresholds for device scheduled egress resources
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER scheduled;
  /*
   *  Thresholds for device unscheduled egress resources
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER unscheduled;
  /*
   *  Thresholds per Service Pool for device unscheduled egress resources
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER unscheduled_pool[DNX_TMC_NOF_EGR_QUEUING_MC_POOLS]; 

}DNX_TMC_EGR_FC_DEVICE_THRESH;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /*
   *  Consumed words threshold
   */
  uint32 words_unsch;
  /*
   *  Consumed packets threshold
   */
  uint32 packets_unsch;
  /*
   *  Consumed buffers threshold
   */
  uint32 buffers_unsch;
  /*
   *  Consumed descriptors threshold
   */
  uint32 descriptors_total;

} DNX_TMC_EGR_FC_MCI_THRESH;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /*
   *  Consumed words threshold
   */
  uint32 words;
  /*
   *  Consumed packets threshold
   */
  uint32 packets;

} DNX_TMC_EGR_FC_CHNIF_THRESH;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /*
   *  Consumed words threshold, per port threshold type.
   */
  uint32 words;
  /*
   *  Consumed packet_descriptors threshold, per port threshold type.
   *  Not valid for Soc_petra-A and Soc_petra-B.
   */
  uint32 packet_descriptors;
  uint32 packet_descriptors_min;
  int packet_descriptors_alpha;
  /*
   *  Consumed data buffers. Not Soc_petra-B.
   */
  uint32 data_buffers;
  uint32 data_buffers_min;
  int data_buffers_alpha;
  /*
   *  Multicast thresholds. Not Soc_petra-B.
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER mc;
}DNX_TMC_EGR_FC_OFP_THRESH;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /*
   *  Unscheduled, or Unscheduled weight. The lower the
   *  weight the higher the bandwidth. Weight of 0 for a class
   *  indicates that this class has SP over the other class.
   *  When both have equal weights it implies simple RR.
   *  Range: 0-255
   */
  uint32 unsched_weight;
  /*
   *  Scheduled, or Scheduled weight. Format -same as
   *  unscheduled. Range: 0 - 255.
   */
  uint32 sched_weight;

}DNX_TMC_EGR_OFP_SCH_WFQ;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /*
   *  Strict Priority, if mapped to channelized
   *  Interface. Otherwise - ignored by the HW.
   */
  DNX_TMC_EGR_OFP_INTERFACE_PRIO nif_priority;
  /*
   *  WFQ weights. The WFQ is among low priority traffic
   *  (scheduled/unscheduled), or among all scheduled and
   *  unscheduled traffic - according to the OFP egress
   *  scheduling mode. Not valid for JER2_ARAD.
   */
  DNX_TMC_EGR_OFP_SCH_WFQ ofp_wfq;
  /*
   *  WFQ weights. The WFQ is among high priority traffic
   *  (scheduled/unscheduled). Relevant only if schedule
   *  mode is HP_OVER_LP_FAIR.
   *  Not valid for Soc_petra-A, JER2_ARAD.
   */
  DNX_TMC_EGR_OFP_SCH_WFQ ofp_wfq_high;

  /*
   *  WFQ weights. The WFQ is among priority traffic
   *  (scheduled/unscheduled). Each index corresponds
   *  to q-pair.
   *  Valid for JER2_ARAD only.
   */
  DNX_TMC_EGR_OFP_SCH_WFQ ofp_wfq_q_pair[DNX_TMC_EGR_NOF_Q_PRIO_JER2_ARAD]; 

}DNX_TMC_EGR_OFP_SCH_INFO;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /*
   *  Egress Traffic Class. In general, Range: 0 - 1.
   *  (Equivalent to High (0)/Low (1)). The range can be higher
   *  according to the extended queuing OFP-group
   *  configuration (Possible global maximum: 1, 3, 5 and 7).
   */
  uint32 tc;
  /*
   *  Egress Drop precedence (drop priority). Range: 0 - 3.
   */
  uint32 dp;

} DNX_TMC_EGR_Q_PRIORITY;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /*
   *  Threshold value for the number of total consumed 256B
   *  Dbuff, above which arrived packets are rejected.
   */
  uint32 dbuff;

  uint32 dbuff_min;

  int dbuff_alpha;
  /*
   *  Threshold value for the maximum amount of packet descriptors,
   *  above drops all incoming packets upon reacing this limit.
   */
  uint32 packet_descriptors;
  /*
   *  Min threshold for the above threshold
   */
  uint32 packet_descriptors_min;
    /*
   * Alpha for determining the above threshold dynamically
   */
  int packet_descriptors_alpha;

} DNX_TMC_EGR_THRESH_INFO;

/* 
 * JER2_ARAD only defines {
 */
typedef enum
{
  /*
   *  Port with one priority.
   */
  DNX_TMC_EGR_PORT_ONE_PRIORITY=1,
  /*
   *  Port with two priorities.
   */
  DNX_TMC_EGR_PORT_TWO_PRIORITIES=2,
  /*
   *  Port with eight priorities.
   */
  DNX_TMC_EGR_PORT_EIGHT_PRIORITIES=8,
  /*
   *  Total number of Port prioritie modes.
   */
  DNX_TMC_EGR_NOF_PORT_PRIORITY_MODES=3
}DNX_TMC_EGR_PORT_PRIORITY_MODE;

typedef enum
{
  /*
   *  Port shaper is in data mode.
   */
  DNX_TMC_EGR_PORT_SHAPER_DATA_MODE=0,
  /*
   *  Port shaper is in packet mode.
   */
  DNX_TMC_EGR_PORT_SHAPER_PACKET_MODE=1,  
  /*
   *  Total number of Port shaper modes.
   */
  DNX_TMC_EGR_NOF_PORT_SHAPER_MODES=2
}DNX_TMC_EGR_PORT_SHAPER_MODE;

typedef enum
{
  /*
   * Discrete partition scheme                                                                                                      .
   * Set the thresholds independently. 
   * If the number of allocated resources exceeds the threshold of a given priority,                                                .
   * then all packets with that priority are dropped.
   */
  DNX_TMC_EGR_QUEUING_PARTITION_SCHEME_DISCRETE = 0,
  /*
   * Strict partition scheme. Set the thresholds in ascending order. 
   * If the number of allocated resources exceeds a threshold, 
   * Threshold(i) for example,
   * then all packets whose priority is less than i are dropped.  
   */
  DNX_TMC_EGR_QUEUING_PARTITION_SCHEME_STRICT = 1,
  /*
   * Total number of partition schemes.
   */
  DNX_TMC_NOF_EGR_QUEUING_PARTITION_SCHEMES = 2
}DNX_TMC_EGR_QUEUING_PARTITION_SCHEME;

typedef struct
{
  /*
   * Unicast thresholds. 
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER uc;
  /*
   * Multicast thresholds.
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER mc;
  /*
   * Total thresholds.
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER total;
}DNX_TMC_EGR_QUEUING_TH_DB_GLOBAL;

typedef struct
{
  /*
   * Multicast thresholds.
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER mc;
  /*
   * Reserved thresholds. Only for Data buffers when per TC.
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER reserved;
}DNX_TMC_EGR_QUEUING_TH_DB_POOL;

typedef struct
{
  /*
   * Unicast thresholds.
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER uc;
  /*
   * Multicast Shared thresholds.
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER mc_shared;
  /*
   * Reserved thresholds per Traffic Class. Only for Packet descriptors.
   */
  DNX_TMC_EGR_FC_DEV_THRESH_INNER reserved[DNX_TMC_NOF_TRAFFIC_CLASSES];
}DNX_TMC_EGR_QUEUING_TH_DB_PORT;

typedef struct
{
  /*
   * Global service pool DB thresholds.
   */
  DNX_TMC_EGR_QUEUING_TH_DB_GLOBAL global;
  /*
   * DB Thresholds per Service pool
   */
  DNX_TMC_EGR_QUEUING_TH_DB_POOL pool[DNX_TMC_NOF_EGR_QUEUING_MC_POOLS];
  /*
   * DB Thresholds per Service pool and per Traffic Class.
   */
  DNX_TMC_EGR_QUEUING_TH_DB_POOL pool_tc[DNX_TMC_NOF_EGR_QUEUING_MC_POOLS][DNX_TMC_NOF_TRAFFIC_CLASSES];
  /*
   * DB Thresholds per Port Profile
   */
  DNX_TMC_EGR_QUEUING_TH_DB_PORT thresh_type[DNX_TMC_NOF_THRESH_TYPES];
}DNX_TMC_EGR_QUEUING_DEV_TH;

typedef struct
{
  /*
   * Service pool eligibility. Indicates if it can use shared resources.
   * Range: 0 - 1.
   */
  uint32 pool_eligibility;
  /*
   * Service Pool index.
   * Range: 0 - 1.
   */
  uint32 pool_id;
  /*
   * Traffic Class group for service pool thresholds.
   * Range: 0 - 7.
   */
  uint32 tc_group;
}DNX_TMC_EGR_QUEUING_MC_COS_MAP;

typedef struct
{
  /*
   * Multicast PDs (Packet Descriptor) threshold profile.
   * Range: 0 - 3.
   */
  uint32 mc_pd_profile;
  /*
   * Unicast threshold profile.
   * Range: 0 - 7.
   */
  uint32 uc_profile;
}DNX_TMC_EGR_QUEUING_IF_FC;

typedef struct
{
  /*
   * PDs (Packet Descriptor) threshold.
   * Range: 0 - 0x7FFF.
   */
  uint32 pd_th;
  /*
   * Unicast size-256 resource threshold.
   * Range: 0 - 0x3FFF.
   */

  uint32 pd_th_min;
  uint32 pd_th_alpha;
  uint32 size256_th;
  uint32 size256_th_min;
  uint32 size256_th_alpha;
}DNX_TMC_EGR_QUEUING_IF_UC_FC;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /* 
   *  TCG (Traffic class groups) that the q-pair is mapped to.
   *   Range: 0 - 7                                                                                                  .
   */
  DNX_TMC_TCG_NDX tcg_ndx[DNX_TMC_EGR_NOF_Q_PRIO_JER2_ARAD];
} DNX_TMC_EGR_QUEUING_TCG_INFO;

typedef struct
{
  DNX_SAND_MAGIC_NUM_VAR
  /*
   *  The lower the weight the higher the bandwidth.
   *  Weight of 0 for a class indicates that this class
   *  has SP over the other class.
   *  When both have equal weights it implies simple RR.
   *  Range: 0-255
   */
  uint32 tcg_weight;

  /*
   *  If set, tcg weight is valid and taking part of the
   *  WFQ policy.
   */
  uint8 tcg_weight_valid;

} DNX_TMC_EGR_TCG_SCH_WFQ;

typedef struct  {
    int mc_reserved_pds;
    int threshold_port;
    int threshold_queue;
    int port_mc_drop_pds;
    int port_mc_drop_dbs;
    int drop_pds_th;
    int drop_dbs_th;
    int drop_pds_th_tc;
} DNX_TMC_EGR_QUEUING_CGM_INIT_THRESHOLDS;

/* 
 * JER2_ARAD only defines }
 */
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

void
  DNX_TMC_EGR_DROP_THRESH_clear(
    DNX_SAND_OUT DNX_TMC_EGR_DROP_THRESH *info
  );

void
  DNX_TMC_EGR_THRESH_INFO_clear(
    DNX_SAND_OUT DNX_TMC_EGR_THRESH_INFO *info
  );

void
  DNX_TMC_EGR_QUEUING_TH_DB_GLOBAL_clear(
    DNX_SAND_OUT DNX_TMC_EGR_QUEUING_TH_DB_GLOBAL *info
  );

void
  DNX_TMC_EGR_QUEUING_TH_DB_POOL_clear(
    DNX_SAND_OUT DNX_TMC_EGR_QUEUING_TH_DB_POOL *info
  );

void
  DNX_TMC_EGR_QUEUING_TH_DB_PORT_clear(
    DNX_SAND_OUT DNX_TMC_EGR_QUEUING_TH_DB_PORT *info
  );

void
  DNX_TMC_EGR_QUEUING_DEV_TH_clear(
    DNX_SAND_OUT DNX_TMC_EGR_QUEUING_DEV_TH *info
  );

void
  DNX_TMC_EGR_QUEUING_MC_COS_MAP_clear(
    DNX_SAND_OUT DNX_TMC_EGR_QUEUING_MC_COS_MAP *info
  );

void
  DNX_TMC_EGR_QUEUING_IF_FC_clear(
    DNX_SAND_OUT DNX_TMC_EGR_QUEUING_IF_FC *info
  );
void
  DNX_TMC_EGR_QUEUING_IF_UC_FC_clear(
    DNX_SAND_OUT DNX_TMC_EGR_QUEUING_IF_UC_FC *info
  );
void
  DNX_TMC_EGR_FC_DEV_THRESH_INNER_clear(
    DNX_SAND_OUT DNX_TMC_EGR_FC_DEV_THRESH_INNER *info
  );

void
  DNX_TMC_EGR_FC_DEVICE_THRESH_clear(
    DNX_SAND_OUT DNX_TMC_EGR_FC_DEVICE_THRESH *info
  );

void
  DNX_TMC_EGR_FC_MCI_THRESH_clear(
    DNX_SAND_OUT DNX_TMC_EGR_FC_MCI_THRESH *info
  );

void
  DNX_TMC_EGR_FC_CHNIF_THRESH_clear(
    DNX_SAND_OUT DNX_TMC_EGR_FC_CHNIF_THRESH *info
  );

void
  DNX_TMC_EGR_FC_OFP_THRESH_clear(
    DNX_SAND_OUT DNX_TMC_EGR_FC_OFP_THRESH *info
  );

void
  DNX_TMC_EGR_OFP_SCH_WFQ_clear(
    DNX_SAND_OUT DNX_TMC_EGR_OFP_SCH_WFQ *info
  );

void
  DNX_TMC_EGR_OFP_SCH_INFO_clear(
    DNX_SAND_OUT DNX_TMC_EGR_OFP_SCH_INFO *info
  );

void
  DNX_TMC_EGR_Q_PRIORITY_clear(
    DNX_SAND_OUT DNX_TMC_EGR_Q_PRIORITY *info
  );

void
  DNX_TMC_EGR_QUEUING_TCG_INFO_clear(
    DNX_SAND_OUT DNX_TMC_EGR_QUEUING_TCG_INFO *info
  );

void
  DNX_TMC_EGR_TCG_SCH_WFQ_clear(
    DNX_SAND_OUT DNX_TMC_EGR_TCG_SCH_WFQ *info
   );

#if DNX_TMC_DEBUG_IS_LVL1

const char*
  DNX_TMC_EGR_Q_PRIO_to_string(
    DNX_SAND_IN DNX_TMC_EGR_Q_PRIO enum_val
  );

const char*
  DNX_TMC_EGR_PORT_THRESH_TYPE_to_string(
    DNX_SAND_IN DNX_TMC_EGR_PORT_THRESH_TYPE enum_val
  );

const char*
  DNX_TMC_EGR_MCI_PRIO_to_string(
    DNX_SAND_IN DNX_TMC_EGR_MCI_PRIO enum_val
  );

const char*
  DNX_TMC_EGR_OFP_INTERFACE_PRIO_to_string(
    DNX_SAND_IN DNX_TMC_EGR_OFP_INTERFACE_PRIO enum_val
  );

const char*
  DNX_TMC_EGR_OFP_SCH_MODE_to_string(
    DNX_SAND_IN DNX_TMC_EGR_OFP_SCH_MODE enum_val
  );

const char*
  DNX_TMC_EGR_Q_PRIO_MAPPING_TYPE_to_string(
    DNX_SAND_IN DNX_TMC_EGR_Q_PRIO_MAPPING_TYPE enum_val
  );

void
  DNX_TMC_EGR_DROP_THRESH_print(
    DNX_SAND_IN DNX_TMC_EGR_DROP_THRESH *info
  );

void
  DNX_TMC_EGR_THRESH_INFO_print(
    DNX_SAND_IN DNX_TMC_EGR_THRESH_INFO *info
  );

void
  DNX_TMC_EGR_FC_DEV_THRESH_INNER_print(
    DNX_SAND_IN DNX_TMC_EGR_FC_DEV_THRESH_INNER *info
  );

void
  DNX_TMC_EGR_FC_DEVICE_THRESH_print(
    DNX_SAND_IN DNX_TMC_EGR_FC_DEVICE_THRESH *info
  );

void
  DNX_TMC_EGR_FC_MCI_THRESH_print(
    DNX_SAND_IN DNX_TMC_EGR_FC_MCI_THRESH *info
  );

void
  DNX_TMC_EGR_FC_CHNIF_THRESH_print(
    DNX_SAND_IN DNX_TMC_EGR_FC_CHNIF_THRESH *info
  );

void
  DNX_TMC_EGR_FC_OFP_THRESH_print(
    DNX_SAND_IN DNX_TMC_EGR_FC_OFP_THRESH *info
  );

void
  DNX_TMC_EGR_OFP_SCH_WFQ_print(
    DNX_SAND_IN DNX_TMC_EGR_OFP_SCH_WFQ *info
  );

void
  DNX_TMC_EGR_OFP_SCH_INFO_print(
    DNX_SAND_IN DNX_TMC_EGR_OFP_SCH_INFO *info
  );

void
  DNX_TMC_EGR_QUEUING_TCG_INFO_print(
    DNX_SAND_IN  DNX_TMC_EGR_QUEUING_TCG_INFO *info
  );

void
  DNX_TMC_EGR_TCG_SCH_WFQ_print(
    DNX_SAND_IN  DNX_TMC_EGR_TCG_SCH_WFQ *info
  );

#endif /* DNX_TMC_DEBUG_IS_LVL1 */

/* } */

#include <soc/dnx/legacy/SAND/Utils/sand_footer.h>

/* } __DNX_TMC_API_EGR_QUEUING_INCLUDED__*/
#endif
