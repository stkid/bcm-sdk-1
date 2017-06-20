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

#ifndef __BCMX_TRILL_H__
#define __BCMX_TRILL_H__

#if defined(INCLUDE_L3)

#include <bcm/types.h>
#include <bcmx/bcmx.h>
#include <bcm/trill.h>

/* TRILL Port structure. */
typedef bcm_trill_port_t bcmx_trill_port_t;

/* TRILL Multicast Entry structure. */
typedef bcm_trill_multicast_entry_t bcmx_trill_multicast_entry_t;

/* Initialize the TRILL Port structure. */
extern void bcmx_trill_port_t_init(
    bcmx_trill_port_t *trill_port);

/* Initialize the TRILL Multicast Entry structure. */
extern void bcmx_trill_multicast_entry_t_init(
    bcm_trill_multicast_entry_t *trill_multicast_entry);

/* Initialize TRILL module. */
extern int bcmx_trill_init(void);

/* Detach TRILL module. */
extern int bcmx_trill_cleanup(void);

/* Add Trill port to TRILL Cloud. */
extern int bcmx_trill_port_add(
    bcmx_trill_port_t *trill_port);

/* Delete Trill port from TRILL Cloud. */
extern int bcmx_trill_port_delete(
    bcm_gport_t trill_port_id);

/* Delete all Trill ports from TRILL Cloud. */
extern int bcmx_trill_port_delete_all(void);

/* Get a TRILL port */
extern int bcmx_trill_port_get(
    bcmx_trill_port_t *trill_port);

/* Get all TRILL ports */
extern int bcmx_trill_port_get_all(
    int port_max, 
    bcmx_trill_port_t *port_array, 
    int *port_count);

/* Add TRILL multicast entry */
extern int bcmx_trill_multicast_entry_add(
    bcm_trill_multicast_entry_t *trill_mc_entry);

/* Delete TRILL multicast entry */
extern int bcmx_trill_multicast_entry_delete(
    bcm_trill_multicast_entry_t *trill_mc_entry);

/* Delete all TRILL multicast entries */
extern int bcmx_trill_multicast_delete_all(
    bcm_trill_name_t root_name);

/* Get TRILL multicast entry */
extern int bcmx_trill_multicast_entry_get(
    bcm_trill_multicast_entry_t *trill_mc_entry);

/* Add TRILL multicast RPF entry */
extern int bcmx_trill_multicast_source_add(
    bcm_trill_name_t root_name, 
    bcm_trill_name_t source_rbridge_name, 
    bcm_gport_t port, 
    bcm_if_t encap_intf);

/* Delete TRILL multicast RPF entry */
extern int bcmx_trill_multicast_source_delete(
    bcm_trill_name_t root_name, 
    bcm_trill_name_t source_rbridge_name, 
    bcm_gport_t port, 
    bcm_if_t encap_intf);

/* Get TRILL Multicast RPF entry */
extern int bcmx_trill_multicast_source_get(
    bcm_trill_name_t root_name, 
    bcm_trill_name_t source_rbridge_name, 
    bcm_gport_t *port);

/* bcm_trill_stat_get */
extern int bcmx_trill_stat_get(
    bcm_gport_t port, 
    bcm_trill_stat_t stat, 
    uint64 *val);

/* bcm_trill_stat_get32 */
extern int bcmx_trill_stat_get32(
    bcm_gport_t port, 
    bcm_trill_stat_t stat, 
    uint32 *val);

/* bcm_trill_stat_clear */
extern int bcmx_trill_stat_clear(
    bcm_gport_t port, 
    bcm_trill_stat_t stat);

#endif /* defined(INCLUDE_L3) */

#endif /* __BCMX_TRILL_H__ */
