/* $Id: arad_ingress_packet_queuing.h,v 1.14 Broadcom SDK $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
*/


#ifndef __ARAD_INGRESS_PACKET_QUEUING_INCLUDED__
/* { */
#define __ARAD_INGRESS_PACKET_QUEUING_INCLUDED__

/*************
 * INCLUDES  *
 *************/
/* { */
#include <soc/dpp/SAND/Utils/sand_header.h>

#include <soc/dpp/ARAD/arad_api_ingress_packet_queuing.h>
#include <soc/dpp/ARAD/arad_chip_regs.h>
#include <soc/dpp/SAND/Utils/sand_framework.h>
/* } */
/*************
 * DEFINES   *
 *************/
/* { */
#define ARAD_IPQ_INVALID_FLOW_QUARTET          ((SOC_DPP_DEFS_MAX(NOF_FLOWS_PER_PIPE) / 8 /* flow group size */) - 1)

#define ARAD_IPQ_STACK_LAG_ENTRY_PER_TMD_BIT_NUM        (SOC_IS_JERICHO(unit) ? 8 : 6)
#define ARAD_IPQ_STACK_FEC_ENTRY_PER_TMD_BIT_NUM        (4)

#define ARAD_IPQ_UC_FIFO_SNOOP_THRESHOLD(limit)    (((limit)*2)/10)
#define ARAD_IPQ_UC_FIFO_MIRROR_THRESHOLD(limit)    (((limit)*6)/10)

/* IPQ Queue type - Traffic class profile. Range: 0-3        */
typedef uint32 ARAD_IPQ_TR_CLS_PROFILE;

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
* NAME:
*     arad_ipq_init
* FUNCTION:
*     Initialization of the Arad blocks configured in this module.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*     Identifier of the device to access.
* RETURNS:
*   OK or ERROR indication.
* REMARKS:
*   Called as part of the initialization sequence.
*********************************************************************/
uint32
  arad_ipq_init(
    SOC_SAND_IN  int                 unit
  );

/*********************************************************************
* NAME:
*     arad_ingress_packet_queuing_init
* FUNCTION:
*     Initialization of the Arad blocks configured in this module.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*     Identifier of the device to access.
* RETURNS:
*   OK or ERROR indication.
* REMARKS:
*   Called as part of the initialization sequence.
*********************************************************************/
uint32
  arad_ingress_packet_queuing_init(
    SOC_SAND_IN  int                 unit
  );

/*********************************************************************
* NAME:
*     arad_ipq_explicit_mapping_mode_info_verify
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Sets the Explicit Flow Unicast packets mapping to queue.
*     Doesn't affect packets that arrive with destination_id
*     in the header.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  ARAD_IPQ_EXPLICIT_MAPPING_MODE_INFO *info -
*     Mapping information of packet with explicit flow header
*     to queues
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_explicit_mapping_mode_info_verify(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  ARAD_IPQ_EXPLICIT_MAPPING_MODE_INFO *info
  );

/*********************************************************************
* NAME:
*     arad_ipq_explicit_mapping_mode_info_set_unsafe
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Sets the Explicit Flow Unicast packets mapping to queue.
*     Doesn't affect packets that arrive with destination_id
*     in the header.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  ARAD_IPQ_EXPLICIT_MAPPING_MODE_INFO *info -
*     Mapping information of packet with explicit flow header
*     to queues
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_explicit_mapping_mode_info_set_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  ARAD_IPQ_EXPLICIT_MAPPING_MODE_INFO *info
  );

/*********************************************************************
* NAME:
*     arad_ipq_explicit_mapping_mode_info_get_unsafe
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Sets the Explicit Flow Unicast packets mapping to queue.
*     Doesn't affect packets that arrive with destination_id
*     in the header.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_OUT ARAD_IPQ_EXPLICIT_MAPPING_MODE_INFO *info -
*     Mapping information of packet with explicit flow header
*     to queues
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_explicit_mapping_mode_info_get_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_OUT ARAD_IPQ_EXPLICIT_MAPPING_MODE_INFO *info
  );

/*********************************************************************
*     Configures Base-Q configuration to an invalid value.
*     This configuration is changed by
*     arad_ipq_explicit_mapping_mode_info_set.
*     API-s that are dependent on a valid Base-Q configuration
*     may use this value to verify Base-Q is already set.
*********************************************************************/
uint32
  arad_ipq_base_q_is_valid_get_unsafe(
    SOC_SAND_IN  int  unit,
    SOC_SAND_OUT uint8  *is_valid
  );

/*********************************************************************
* NAME:
*     arad_ipq_traffic_class_map_verify
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Maps the embedded traffic class in the packet header to
*     a logical traffic class. This logical traffic class will
*     be further used for traffic management. Note that a class
*     that is mapped to class '0' is equivalent to disabling
*     adding the class.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  ARAD_IPQ_TR_CLS          tr_cls_ndx -
*     tr_cls_ndx-the traffic class index, for which to map a
*     new class. SOC_SAND_IN ARAD_IPQ_TR_CLS class - The new
*     class that is mapped to the tr_cls_ndx.
*  SOC_SAND_IN  ARAD_IPQ_TR_CLS          class -
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_traffic_class_map_verify(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  ARAD_IPQ_TR_CLS          tr_cls_ndx,
    SOC_SAND_IN  ARAD_IPQ_TR_CLS          new_class
  );

/*********************************************************************
* NAME:
*     arad_ipq_traffic_class_map_set_unsafe
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Maps the embedded traffic class in the packet header to
*     a logical traffic class. This logical traffic class will
*     be further used for traffic management. Note that a class
*     that is mapped to class '0' is equivalent to disabling
*     adding the class.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  ARAD_IPQ_TR_CLS          tr_cls_ndx -
*     tr_cls_ndx-the traffic class index, for which to map a
*     new class. SOC_SAND_IN ARAD_IPQ_TR_CLS class - The new
*     class that is mapped to the tr_cls_ndx.
*  SOC_SAND_IN  ARAD_IPQ_TR_CLS          class -
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_traffic_class_map_set_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  ARAD_IPQ_TR_CLS          tr_cls_ndx,
    SOC_SAND_IN  ARAD_IPQ_TR_CLS          new_class
  );

/*********************************************************************
* NAME:
*     arad_ipq_traffic_class_map_get_unsafe
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Maps the embedded traffic class in the packet header to
*     a logical traffic class. This logical traffic class will
*     be further used for traffic management. Note that a class
*     that is mapped to class '0' is equivalent to disabling
*     adding the class.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  ARAD_IPQ_TR_CLS          tr_cls_ndx -
*     tr_cls_ndx-the traffic class index, for which to map a
*     new class. SOC_SAND_IN ARAD_IPQ_TR_CLS class - The new
*     class that is mapped to the tr_cls_ndx.
*  SOC_SAND_OUT ARAD_IPQ_TR_CLS          *class -
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_traffic_class_map_get_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  ARAD_IPQ_TR_CLS          tr_cls_ndx,
    SOC_SAND_OUT ARAD_IPQ_TR_CLS          *new_class
  );

/*********************************************************************
* NAME:
*     arad_ipq_destination_id_packets_base_queue_id_verify
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Verify the system-port (destination-id) mapping to base queue
*     Doesn't affect packets that arrive with
*     explicit queue-id in the header. Each destination ID is
*     mapped to a base_queue, when the packet is stored in
*     queue: base_queue + class
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                  dest_ndx -
*     dest_ndx - The destination from the packet
*     System-Port-Destination ID. SOC_SAND_IN
*  SOC_SAND_IN  uint8                 valid -
*     If set the specific queue is valid, Otherwise the queue
*     is set to be invalid and packets are not sent to it.
*     SOC_SAND_IN
*  SOC_SAND_IN  uint32                  base_queue -
*     base_queue - Packet is stored in queue: base_queue +
*     class. Valid values: 0 - 32K.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_destination_id_packets_base_queue_id_verify(
   SOC_SAND_IN  int                 unit,
   SOC_SAND_IN  int                 core,
   SOC_SAND_IN  uint32              dest_ndx,
   SOC_SAND_IN  uint8               valid,
   SOC_SAND_IN  uint8               sw_only,
   SOC_SAND_IN  uint32              base_queue
  );


/*********************************************************************
* NAME:
*     arad_ipq_traffic_class_multicast_priority_map_set_verify
* TYPE:
*   PROC
* DATE:
*   Jan 27 2013
* FUNCTION:
*     Sets multicast packets traffic class mapping to strict priority between high-low priority.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                 traffic_class - tc to be set to high-low priority.
*  SOC_SAND_IN  uint8                  enable - if TURE, set to high priority, else to low priority.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_traffic_class_multicast_priority_map_set_verify(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  uint32                 traffic_class,
    SOC_SAND_IN  uint8                  enable
  );
/*********************************************************************
* NAME:
*     arad_ipq_traffic_class_multicast_priority_map_set_unsafe
* TYPE:
*   PROC
* DATE:
*   Jan 27 2013
* FUNCTION:
*     Sets multicast packets traffic class mapping to strict priority between high-low priority.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                 traffic_class - tc to be set to high-low priority.
*  SOC_SAND_IN  uint8                  enable - if TURE, set to high priority, else to low priority.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_traffic_class_multicast_priority_map_set_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  uint32                 traffic_class,
    SOC_SAND_IN  uint8                  enable
  );

/*********************************************************************
* NAME:
*     arad_ipq_traffic_class_multicast_priority_map_get_verify
* TYPE:
*   PROC
* DATE:
*   Jan 27 2013
* FUNCTION:
*     Gets multicast packets traffic class mapping to strict priority between high-low priority.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                 traffic_class - tc to be set to high-low priority.
*  SOC_SAND_OUT uint8                  *enable - if TURE, then is set to high priority, else to low priority.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_traffic_class_multicast_priority_map_get_verify(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  uint32                 traffic_class,
    SOC_SAND_OUT uint8                  *enable
  );
/*********************************************************************
* NAME:
*     arad_ipq_traffic_class_multicast_priority_map_get_unsafe
* TYPE:
*   PROC
* DATE:
*   Jan 27 2013
* FUNCTION:
*     Gets multicast packets traffic class mapping to strict priority between high-low priority.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                 traffic_class - tc to be set to high-low priority.
*  SOC_SAND_OUT uint8                  *enable - if TURE, then is set to high priority, else to low priority.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_traffic_class_multicast_priority_map_get_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  uint32                 traffic_class,
    SOC_SAND_OUT uint8                  *enable
  );
/*********************************************************************
* NAME:
*     arad_ipq_destination_id_packets_base_queue_id_set_unsafe
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Sets the system-port (destination-id) mapping to base queue
*     Doesn't affect packets that arrive with
*     explicit queue-id in the header. Each destination ID is
*     mapped to a base_queue, when the packet is stored in
*     queue: base_queue + class
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                  dest_ndx -
*     dest_ndx - The destination from the packet
*     System-Port-Destination ID. SOC_SAND_IN
*  SOC_SAND_IN  uint8                 valid -
*     If set the specific queue is valid, Otherwise the queue
*     is set to be invalid and packets are not sent to it.
*     SOC_SAND_IN
*  SOC_SAND_IN  uint32                  base_queue -
*     base_queue - Packet is stored in queue: base_queue +
*     class. Valid values: 0 - 32K.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_destination_id_packets_base_queue_id_set_unsafe(
     SOC_SAND_IN  int                 unit,
     SOC_SAND_IN  int                 core,
     SOC_SAND_IN  uint32              dest_ndx,
     SOC_SAND_IN  uint8               valid,
     SOC_SAND_IN  uint8               sw_only,
     SOC_SAND_IN  uint32              base_queue
  );

/*********************************************************************
* NAME:
*     arad_ipq_destination_id_packets_base_queue_id_get_unsafe
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Gets the system-port (destination-id) mapping to base queue
*     Doesn't affect packets that arrive with
*     explicit queue-id in the header. Each destination ID is
*     mapped to a base_queue, when the packet is stored in
*     queue: base_queue + class
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                  dest_ndx -
*     dest_ndx - The destination from the packet
*     System-Port-Destination ID. SOC_SAND_IN
*  SOC_SAND_OUT uint8                 *valid -
*     If set the specific queue is valid, Otherwise the queue
*     is set to be invalid and packets are not sent to it.
*     SOC_SAND_IN
*  SOC_SAND_OUT uint32                  *base_queue -
*     base_queue - Packet is stored in queue: base_queue +
*     class. Valid values: 0 - 32K.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_destination_id_packets_base_queue_id_get_unsafe(
     SOC_SAND_IN  int                 unit,
     SOC_SAND_IN  int                 core,
     SOC_SAND_IN  uint32              dest_ndx,
     SOC_SAND_OUT uint8               *valid,
     SOC_SAND_OUT uint8               *sw_only,
     SOC_SAND_OUT uint32              *base_queue
  );

uint32
  arad_ipq_stack_lag_packets_base_queue_id_verify(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  uint32                 tmd,
    SOC_SAND_IN  uint32                 entry,
    SOC_SAND_IN  uint32                 base_queue
  );

uint32
  arad_ipq_stack_lag_packets_base_queue_id_set_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  uint32                 tmd,
    SOC_SAND_IN  uint32                 entry,
    SOC_SAND_IN  uint32                 base_queue
  );

uint32
  arad_ipq_stack_lag_packets_base_queue_id_get_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  uint32                 tmd,
    SOC_SAND_IN  uint32                 entry,
    SOC_SAND_OUT uint32              *base_queue
  );

uint32
  arad_ipq_stack_fec_map_stack_lag_verify(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  uint32                 tmd,
    SOC_SAND_IN  uint32                 entry,
    SOC_SAND_IN  uint32                 stack_lag
  );

uint32
  arad_ipq_stack_fec_map_stack_lag_set_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  uint32                 tmd,
    SOC_SAND_IN  uint32                 entry,
    SOC_SAND_IN  uint32                 stack_lag
  );

uint32
  arad_ipq_stack_fec_map_stack_lag_get_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  uint32                 tmd,
    SOC_SAND_IN  uint32                 entry,
    SOC_SAND_OUT uint32*                stack_lag
  );

/*********************************************************************
* NAME:
*     arad_ipq_queue_interdigitated_mode_verify
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Map 1K of queues (256 quartets) to be in interdigitated
*     mode or not. Queue Quartets that configured to be in
*     interdigitated mode should only be configured with
*     interdigitated flow quartets, and the other-way around.
*     When interdigitated mode is set, all queue quartets
*     range are reset using arad_ipq_quartet_reset(), in
*     order to prevent illegal interdigitated/composite state.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                  k_queue_ndx -
*     The K queues to configure are (k_queue_ndx * 1024) -
*     (k_queue_ndx * 1024 + 1023) SOC_SAND_IN
*  SOC_SAND_IN  uint8                 is_interdigitated -
*     If TRUE, the K queues which k_queue_index points to will
*     be set to interdigitated mode.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_queue_interdigitated_mode_verify(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  int                 core,
    SOC_SAND_IN  uint32                  k_queue_ndx,
    SOC_SAND_IN  uint8                 is_interdigitated
  );

/*********************************************************************
* NAME:
*     arad_ipq_queue_interdigitated_mode_set_unsafe
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Map 1K of queues (256 quartets) to be in interdigitated
*     mode or not. Queue Quartets that configured to be in
*     interdigitated mode should only be configured with
*     interdigitated flow quartets, and the other-way around.
*     When interdigitated mode is set, all queue quartets
*     range are reset using arad_ipq_quartet_reset(), in
*     order to prevent illegal interdigitated/composite state.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                  k_queue_ndx -
*     The K queues to configure are (k_queue_ndx * 1024) -
*     (k_queue_ndx * 1024 + 1023) SOC_SAND_IN
*  SOC_SAND_IN  uint8                 is_interdigitated -
*     If TRUE, the K queues which k_queue_index points to will
*     be set to interdigitated mode.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_queue_interdigitated_mode_set_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  int                 core,
    SOC_SAND_IN  uint32                  k_queue_ndx,
    SOC_SAND_IN  uint8                 is_interdigitated
  );

/*********************************************************************
* NAME:
*     arad_ipq_queue_interdigitated_mode_get_unsafe
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Map 1K of queues (256 quartets) to be in interdigitated
*     mode or not. Queue Quartets that configured to be in
*     interdigitated mode should only be configured with
*     interdigitated flow quartets, and the other-way around.
*     When interdigitated mode is set, all queue quartets
*     range are reset using arad_ipq_quartet_reset(), in
*     order to prevent illegal interdigitated/composite state.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                  k_queue_ndx -
*     The K queues to configure are (k_queue_ndx * 1024) -
*     (k_queue_ndx * 1024 + 1023) SOC_SAND_IN
*  SOC_SAND_OUT uint8                 *is_interdigitated -
*     If TRUE, the K queues which k_queue_index points to will
*     be set to interdigitated mode.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_queue_interdigitated_mode_get_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  int                 core,
    SOC_SAND_IN  uint32                  k_queue_ndx,
    SOC_SAND_OUT uint8                 *is_interdigitated
  );

/*********************************************************************
* NAME:
*     arad_ipq_queue_to_flow_mapping_verify
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Map a queues-quartet to system port and flow-quartet(s).
*     This function should only be called after calling the
*     arad_ipq_queue_interdigitated_mode_set()
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                  queue_quartet_ndx -
*     queue_quartet_ndx - The index of the quartet to be
*     configured, the range of queues in the quartet is:
*     (queue_quartet_ndx * 4) to (queue_quartet_ndx * 4 + 3)
*     SOC_SAND_IN
*  SOC_SAND_IN  ARAD_IPQ_QUARTET_MAP_INFO *info -
*     Pointer to mapping configuration structure.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_queue_to_flow_mapping_verify(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  int                 core, 
    SOC_SAND_IN  uint32              queue_quartet_ndx,
    SOC_SAND_IN  ARAD_IPQ_QUARTET_MAP_INFO *info
  );

/*********************************************************************
* NAME:
*     arad_ipq_queue_to_flow_mapping_set_unsafe
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Map a queues-quartet to system port and flow-quartet(s).
*     This function should only be called after calling the
*     arad_ipq_queue_interdigitated_mode_set()
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                  queue_quartet_ndx -
*     queue_quartet_ndx - The index of the quartet to be
*     configured, the range of queues in the quartet is:
*     (queue_quartet_ndx * 4) to (queue_quartet_ndx * 4 + 3)
*     SOC_SAND_IN
*  SOC_SAND_IN  ARAD_IPQ_QUARTET_MAP_INFO *info -
*     Pointer to mapping configuration structure.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_queue_to_flow_mapping_set_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  int                 core, 
    SOC_SAND_IN  uint32              queue_quartet_ndx,
    SOC_SAND_IN  ARAD_IPQ_QUARTET_MAP_INFO *info
  );

/*********************************************************************
* NAME:
*     arad_ipq_queue_to_flow_mapping_get_unsafe
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Map a queues-quartet to system port and flow-quartet(s).
*     This function should only be called after calling the
*     arad_ipq_queue_interdigitated_mode_set()
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                  queue_quartet_ndx -
*     queue_quartet_ndx - The index of the quartet to be
*     configured, the range of queues in the quartet is:
*     (queue_quartet_ndx * 4) to (queue_quartet_ndx * 4 + 3)
*     SOC_SAND_IN
*  SOC_SAND_OUT ARAD_IPQ_QUARTET_MAP_INFO *info -
*     Pointer to mapping configuration structure.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_queue_to_flow_mapping_get_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  int                 core, 
    SOC_SAND_IN  uint32                  queue_quartet_ndx,
    SOC_SAND_OUT ARAD_IPQ_QUARTET_MAP_INFO *info
  );

/*********************************************************************
* NAME:
*   arad_ipq_queue_qrtt_unmap_unsafe
* TYPE:
*   PROC
* FUNCTION:
*   Unmap a queues-quartet, by mapping it to invalid
*   destination. Also, flush all the queues in the quartet.
* INPUT:
*   SOC_SAND_IN  int unit -
*     Identifier of the device to access.
*   SOC_SAND_IN  uint32  queue_quartet_ndx -
*     The index of the queue quartet, the range of queues in
*     the quartet is: (queue_quartet_ndx * 4) to
*     (queue_quartet_ndx * 4 + 3) Range: 0 - 8K-1.
* REMARKS:
*   None.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_queue_qrtt_unmap_unsafe(
    SOC_SAND_IN  int unit,
    SOC_SAND_IN  int core,
    SOC_SAND_IN  uint32  queue_quartet_ndx
  );

/*********************************************************************
* NAME:
*     arad_ipq_quartet_reset_verify
* TYPE:
*   PROC
* DATE:
*   Oct 19 2007
* FUNCTION:
*     Resets a quartet to default values.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                  queue_quartet_ndx -
*     The 4 queues currently configured are:
*     (queue_quartet_ndx * 4) - (queue_quartet_ndx * 4 + 3)
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_quartet_reset_verify(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  int                 core,
    SOC_SAND_IN  uint32                  queue_quartet_ndx
  );

/*********************************************************************
* NAME:
*     arad_ipq_quartet_reset_unsafe
* TYPE:
*   PROC
* DATE:
*   Oct  3 2007
* FUNCTION:
*     Resets a quartet to default values.
* INPUT:
*  SOC_SAND_IN  int                 unit -
*  SOC_SAND_IN  uint32                  queue_quartet_ndx -
*     queue_quartet_ndx - The 4 queues currently configured
*     are: (queue_quartet_ndx * 4) - (queue_quartet_ndx * 4 +
*     3)
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  arad_ipq_quartet_reset_unsafe(
    SOC_SAND_IN  int                 unit,
    SOC_SAND_IN  int                 core,
    SOC_SAND_IN  uint32                  queue_quartet_ndx
  );

uint32
  arad_ipq_k_quartet_reset_verify(
    SOC_SAND_IN  int                     unit,
    SOC_SAND_IN  int                     core,
    SOC_SAND_IN  uint32                  queue_k_quartet_ndx,
    SOC_SAND_IN  uint32                  region_size
  );

uint32
  arad_ipq_k_quartet_reset_unsafe(
    SOC_SAND_IN int unit,
    SOC_SAND_IN int core,
    SOC_SAND_IN uint32 queue_k_quartet_ndx,
    SOC_SAND_IN uint32 region_size
  ); 

uint32
  arad_ipq_attached_flow_port_get_unsafe(
    SOC_SAND_IN  int  unit,
    SOC_SAND_IN  int  core,
    SOC_SAND_IN  uint32  queue_ndx,
    SOC_SAND_OUT uint32  *flow_id,
    SOC_SAND_OUT uint32  *sys_port
  );

uint32
  arad_ipq_queue_id_verify(
    SOC_SAND_IN  int    unit,
    SOC_SAND_IN  uint32    queue_id
  );

uint32
  arad_ipq_tc_profile_set_unsafe(
    SOC_SAND_IN	  int	  unit,
    SOC_SAND_IN   int     core,
    SOC_SAND_IN	  uint8	  is_flow_ndx,
    SOC_SAND_IN	  uint32	  dest_ndx,
    SOC_SAND_IN   uint32	  tc_profile
  );

uint32
  arad_ipq_tc_profile_get_unsafe(
   SOC_SAND_IN	  int	  unit,
   SOC_SAND_IN    int     core,
   SOC_SAND_IN	  uint8	  is_flow_ndx,
   SOC_SAND_IN	  uint32	  dest_ndx,
   SOC_SAND_OUT   uint32	  *tc_profile
 );

uint32
  arad_ipq_tc_profile_verify(
    SOC_SAND_IN	  int	  unit,
    SOC_SAND_IN	  uint8	  is_flow_ndx,
    SOC_SAND_IN	  uint32	  dest_ndx,
    SOC_SAND_IN   uint32	  tc_profile
  );

uint32
  arad_ipq_traffic_class_profile_map_set_unsafe(
    SOC_SAND_IN  int                unit,
    SOC_SAND_IN  int                core_id,
    SOC_SAND_IN  ARAD_IPQ_TR_CLS_PROFILE  profile_ndx,
    SOC_SAND_IN  uint8                is_flow_profile,
    SOC_SAND_IN  uint8                is_multicast_profile,
    SOC_SAND_IN  ARAD_IPQ_TR_CLS          tr_cls_ndx,
    SOC_SAND_IN  ARAD_IPQ_TR_CLS          new_class
  );

uint32
  arad_ipq_traffic_class_profile_map_verify(
  SOC_SAND_IN  int                unit,
  SOC_SAND_IN  int                core_id,
  SOC_SAND_IN  ARAD_IPQ_TR_CLS_PROFILE  profile_ndx,
  SOC_SAND_IN  uint8                is_flow_profile,
  SOC_SAND_IN  ARAD_IPQ_TR_CLS          tr_cls_ndx,
  SOC_SAND_IN  ARAD_IPQ_TR_CLS          new_class
 );

uint32
  arad_ipq_traffic_class_profile_map_get_unsafe(
    SOC_SAND_IN  int                unit,
    SOC_SAND_IN  int                core_id,
    SOC_SAND_IN  ARAD_IPQ_TR_CLS_PROFILE  profile_ndx,
    SOC_SAND_IN  uint8                is_flow_profile,
    SOC_SAND_IN  uint8                is_multicast_profile,
    SOC_SAND_IN  ARAD_IPQ_TR_CLS          tr_cls_ndx,
    SOC_SAND_OUT ARAD_IPQ_TR_CLS          *new_class
  );

#if ARAD_DEBUG

uint32
arad_ips_non_empty_queues_info_get_unsafe(
   SOC_SAND_IN  int                unit,
   SOC_SAND_IN  int                   core,
   SOC_SAND_IN  uint32                first_queue,
   SOC_SAND_IN  uint32                max_array_size,
   SOC_SAND_OUT soc_ips_queue_info_t* queues,
   SOC_SAND_OUT uint32*               nof_queues_filled,
   SOC_SAND_OUT uint32*               next_queue,
   SOC_SAND_OUT uint32*               reached_end
   );

#endif


/* } */


#include <soc/dpp/SAND/Utils/sand_footer.h>


/* } __ARAD_INGRESS_PACKET_QUEUING_INCLUDED__*/
#endif

