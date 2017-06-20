/*
 * $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#ifndef __BCM_EAV_H__
#define __BCM_EAV_H__

#include <bcm/types.h>
#include <bcm/port.h>

/* bcm_eav_control_e */
typedef enum bcm_eav_control_e {
    bcmEAVControlMaxFrameSize = 0, 
    bcmEAVControlTimeBase = 1, 
    bcmEAVControlTimeAdjust = 2, 
    bcmEAVControlTickCounter = 3, 
    bcmEAVControlSlotNumber = 4, 
    bcmEAVControlMacroSlotTime = 5, 
    bcmEAVControlSlotAdjust = 6, 
    bcmEAVControlStreamClassAPCP = 7, 
    bcmEAVControlStreamClassBPCP = 8 
} bcm_eav_control_t;

#define BCM_EAV_TIMEREF_MODE_FREERUN        0x0        
#define BCM_EAV_TIMEREF_MODE_PHASE_ADJUSTMENT 0x1        
#define BCM_EAV_TIMEREF_MODE_FREQ_ADJUMENT1 0x2        
#define BCM_EAV_TIMEREF_MODE_FREQ_ADJUMENT2 0x3        

/* bcm_eav_stream_class_e */
typedef enum bcm_eav_stream_class_e {
    bcmEAVCStreamClassA = 0, 
    bcmEAVCStreamClassB = 1 
} bcm_eav_stream_class_t;

#ifndef BCM_HIDE_DISPATCHABLE

/* bcm_eav_init */
extern int bcm_eav_init(
    int unit);

/* bcm_eav_port_enable_get */
extern int bcm_eav_port_enable_get(
    int unit, 
    bcm_port_t port, 
    int *enable);

/* bcm_eav_port_enable_set */
extern int bcm_eav_port_enable_set(
    int unit, 
    bcm_port_t port, 
    int enable);

/* bcm_eav_link_status_get */
extern int bcm_eav_link_status_get(
    int unit, 
    bcm_port_t port, 
    int *link);

/* bcm_eav_link_status_set */
extern int bcm_eav_link_status_set(
    int unit, 
    bcm_port_t port, 
    int link);

/* bcm_eav_control_get */
extern int bcm_eav_control_get(
    int unit, 
    bcm_eav_control_t type, 
    uint32 *arg, 
    uint32 *arg2);

/* bcm_eav_control_set */
extern int bcm_eav_control_set(
    int unit, 
    bcm_eav_control_t type, 
    uint32 arg, 
    uint32 arg2);

/* bcm_eav_timestamp_get */
extern int bcm_eav_timestamp_get(
    int unit, 
    bcm_port_t port, 
    uint32 *timestamp);

/* bcm_eav_timesync_mac_set */
extern int bcm_eav_timesync_mac_set(
    int unit, 
    bcm_mac_t eav_mac);

/* bcm_eav_timesync_mac_get */
extern int bcm_eav_timesync_mac_get(
    int unit, 
    bcm_mac_t eav_mac);

/* bcm_eav_srp_mac_ethertype_set */
extern int bcm_eav_srp_mac_ethertype_set(
    int unit, 
    bcm_mac_t mac, 
    bcm_port_ethertype_t ethertype);

/* bcm_eav_srp_mac_ethertype_get */
extern int bcm_eav_srp_mac_ethertype_get(
    int unit, 
    bcm_mac_t mac, 
    bcm_port_ethertype_t *ethertype);

/* bcm_eav_pcp_mapping_set */
extern int bcm_eav_pcp_mapping_set(
    int unit, 
    bcm_eav_stream_class_t type, 
    int pcp, 
    int remapped_pcp);

/* bcm_eav_pcp_mapping_get */
extern int bcm_eav_pcp_mapping_get(
    int unit, 
    bcm_eav_stream_class_t type, 
    int *pcp, 
    int *remapped_pcp);

/* bcm_bandwidth_set */
extern int bcm_eav_bandwidth_set(
    int unit, 
    bcm_port_t port, 
    bcm_eav_stream_class_t type, 
    uint32 bytes_sec, 
    uint32 bytes_burst);

/* bcm_eav_bandwidth_get */
extern int bcm_eav_bandwidth_get(
    int unit, 
    bcm_port_t port, 
    bcm_eav_stream_class_t type, 
    uint32 *bytes_sec, 
    uint32 *bytes_burst);

#endif /* BCM_HIDE_DISPATCHABLE */

#endif /* __BCM_EAV_H__ */
