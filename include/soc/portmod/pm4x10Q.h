/*
 *         
 * $Id:$
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *         
 *     
 * DO NOT EDIT THIS FILE!
 *
 */

#ifndef _PM4X10Q_H__H_
#define _PM4X10Q_H__H_

#include <phymod/phymod.h>
#include <phymod/phymod_diagnostics.h>
#include <soc/portmod/portmod_defs.h>
/*Get whether the inerface type is supported by PM */
int pm4x10Q_pm_interface_type_is_supported(int unit, soc_port_if_t interface, int* is_supported);

/*Add new pm.*/
int pm4x10Q_pm_init(int unit, const portmod_pm_create_info_internal_t* pm_add_info, int wb_buffer_index, pm_info_t pm_info);

/*Release PM resources*/
int pm4x10Q_pm_destroy(int unit, pm_info_t pm_info);

/*Add new port*/
int pm4x10Q_port_attach(int unit, int port, pm_info_t pm_info, const portmod_port_add_info_t* add_info);

/*get port cores' phymod access*/
int pm4x10Q_pm_core_info_get(int unit, pm_info_t pm_info, int phyn, portmod_pm_core_info_t* core_info);

/*Port remove in PM level*/
int pm4x10Q_port_detach(int unit, int port, pm_info_t pm_info);

/*Port replace in PM level*/
int pm4x10Q_port_replace(int unit, int port, pm_info_t pm_info, int new_port);

/*Port enable*/
int pm4x10Q_port_enable_set(int unit, int port, pm_info_t pm_info, int flags, int enable);
int pm4x10Q_port_enable_get(int unit, int port, pm_info_t pm_info, int flags, int* enable);

/* set/get the interface, speed and encapsulation for the specified port.
            For the First port within core this function initialize the PM, MAC and PHY before configure the port.*/
int pm4x10Q_port_interface_config_set(int unit, int port, pm_info_t pm_info, const portmod_port_interface_config_t* config, int phy_init_flags);
int pm4x10Q_port_interface_config_get(int unit, int port, pm_info_t pm_info, portmod_port_interface_config_t* config, int phy_init_flags);

/* get the default line-side (outmost) interface type of a port based on its speed, encap, number of lanes, etc, when there is or there is not an ext PHY*/
int pm4x10Q_port_default_interface_get(int unit, int port, pm_info_t pm_info, const portmod_port_interface_config_t* config, soc_port_if_t* interface);

/*Port speed set\get*/
int pm4x10Q_port_loopback_set(int unit, int port, pm_info_t pm_info, portmod_loopback_mode_t loopback_type, int enable);
int pm4x10Q_port_loopback_get(int unit, int port, pm_info_t pm_info, portmod_loopback_mode_t loopback_type, int* enable);

/*Port RX MAC ENABLE set\get*/
int pm4x10Q_port_rx_mac_enable_set(int unit, int port, pm_info_t pm_info, int enable);
int pm4x10Q_port_rx_mac_enable_get(int unit, int port, pm_info_t pm_info, int* enable);

/*Set\Get autoneg*/
int pm4x10Q_port_autoneg_set(int unit, int port, pm_info_t pm_info, uint32 phy_flags, const phymod_autoneg_control_t* an);
int pm4x10Q_port_autoneg_get(int unit, int port, pm_info_t pm_info, uint32 phy_flags, phymod_autoneg_control_t* an);

/*Get autoneg status*/
int pm4x10Q_port_autoneg_status_get(int unit, int port, pm_info_t pm_info, phymod_autoneg_status_t* an_status);

/*get link status*/
int pm4x10Q_port_link_get(int unit, int port, pm_info_t pm_info, int flags, int* link);

/* link up event */
int pm4x10Q_port_phy_link_up_event(int unit, int port, pm_info_t pm_info);

/*Number of lanes get*/
int pm4x10Q_port_nof_lanes_get(int unit, int port, pm_info_t pm_info, int* nof_lanes);

/*Filter packets bigger than the specified value*/
int pm4x10Q_port_max_packet_size_set(int unit, int port, pm_info_t pm_info, int value);
int pm4x10Q_port_max_packet_size_get(int unit, int port, pm_info_t pm_info, int* value);

/*TX pad packets to the specified size. values smaller than 17 means pad is disabled.*/
int pm4x10Q_port_pad_size_set(int unit, int port, pm_info_t pm_info, int value);
int pm4x10Q_port_pad_size_get(int unit, int port, pm_info_t pm_info, int* value);

/*set/get the MAC source address that will be sent in case of Pause/LLFC*/
int pm4x10Q_port_tx_mac_sa_set(int unit, int port, pm_info_t pm_info, sal_mac_addr_t mac_sa);
int pm4x10Q_port_tx_mac_sa_get(int unit, int port, pm_info_t pm_info, sal_mac_addr_t mac_sa);

/*set/get SA recognized for MAC control packets in addition to the standard 0x0180C2000001*/
int pm4x10Q_port_rx_mac_sa_set(int unit, int port, pm_info_t pm_info, sal_mac_addr_t mac_sa);
int pm4x10Q_port_rx_mac_sa_get(int unit, int port, pm_info_t pm_info, sal_mac_addr_t mac_sa);

/*set/get Average inter-packet gap*/
int pm4x10Q_port_tx_average_ipg_set(int unit, int port, pm_info_t pm_info, int value);
int pm4x10Q_port_tx_average_ipg_get(int unit, int port, pm_info_t pm_info, int* value);

/*local fault steatus clear*/
int pm4x10Q_port_local_fault_status_clear(int unit, int port, pm_info_t pm_info);

/*remote fault status clear*/
int pm4x10Q_port_remote_fault_status_clear(int unit, int port, pm_info_t pm_info);

/*set/get Pause FC configuration*/
int pm4x10Q_port_pause_control_set(int unit, int port, pm_info_t pm_info, const portmod_pause_control_t* control);
int pm4x10Q_port_pause_control_get(int unit, int port, pm_info_t pm_info, portmod_pause_control_t* control);

/*set/get PFC FC configuration*/
int pm4x10Q_port_pfc_control_set(int unit, int port, pm_info_t pm_info, const portmod_pfc_control_t* control);
int pm4x10Q_port_pfc_control_get(int unit, int port, pm_info_t pm_info, portmod_pfc_control_t* control);

/*set/get LLFC FC configuration*/
int pm4x10Q_port_llfc_control_set(int unit, int port, pm_info_t pm_info, const portmod_llfc_control_t* control);
int pm4x10Q_port_llfc_control_get(int unit, int port, pm_info_t pm_info, portmod_llfc_control_t* control);

/*Routine for MAC\PHY sync.*/
int pm4x10Q_port_update(int unit, int port, pm_info_t pm_info, const portmod_port_update_control_t* update_control);

/*get port cores' phymod access*/
int pm4x10Q_port_core_access_get(int unit, int port, pm_info_t pm_info, int phyn, int max_cores, phymod_core_access_t* core_access_arr, int* nof_cores, int* is_most_ext);

/*Get lane phymod access structure. can be used for per lane operations*/
int pm4x10Q_port_phy_lane_access_get(int unit, int port, pm_info_t pm_info, const portmod_access_get_params_t* params, int max_phys, phymod_phy_access_t* access, int* nof_phys, int* is_most_ext);

/*Port duplex set\get*/
int pm4x10Q_port_duplex_set(int unit, int port, pm_info_t pm_info, int enable);
int pm4x10Q_port_duplex_get(int unit, int port, pm_info_t pm_info, int* enable);

/*Drv Name Get*/
int pm4x10Q_port_drv_name_get(int unit, int port, pm_info_t pm_info, char* name, int len);

/*get port timestamps in fifo*/
int pm4x10Q_port_diag_fifo_status_get(int unit, int port, pm_info_t pm_info, const portmod_fifo_status_t* diag_info);

/*set PFC config registers.*/
int pm4x10Q_port_pfc_config_set(int unit, int port, pm_info_t pm_info, const portmod_pfc_config_t* pfc_cfg);
int pm4x10Q_port_pfc_config_get(int unit, int port, pm_info_t pm_info, portmod_pfc_config_t* pfc_cfg);

/*set EEE Config.*/
int pm4x10Q_port_eee_set(int unit, int port, pm_info_t pm_info, const portmod_eee_t* eee);
int pm4x10Q_port_eee_get(int unit, int port, pm_info_t pm_info, portmod_eee_t* eee);

/*set Vlan Inner/Outer tag.*/
int pm4x10Q_port_vlan_tag_set(int unit, int port, pm_info_t pm_info, const portmod_vlan_tag_t* vlan_tag);
int pm4x10Q_port_vlan_tag_get(int unit, int port, pm_info_t pm_info, portmod_vlan_tag_t* vlan_tag);

/*Attaches an external phy lane to a specific port macro*/
int pm4x10Q_xphy_lane_attach_to_pm(int unit, pm_info_t pm_info, int iphy, int phyn, const portmod_xphy_lane_connection_t* lane_connection);

/*Attaches an external phy lane to a specific port macro*/
int pm4x10Q_xphy_lane_detach_from_pm(int unit, pm_info_t pm_info, int iphy, int phyn, portmod_xphy_lane_connection_t* lane_connection);

/*set port encap.*/
int pm4x10Q_port_encap_set(int unit, int port, pm_info_t pm_info, int flags, portmod_encap_t encap);
int pm4x10Q_port_encap_get(int unit, int port, pm_info_t pm_info, int* flags, portmod_encap_t* encap);

/*port diagnostics control.*/
int pm4x10Q_port_diag_ctrl(int unit, int port, pm_info_t pm_info, uint32 inst, int op_type, int op_cmd, const void* arg);

/*Disable lag failover.*/
int pm4x10Q_port_cntmaxsize_set(int unit, int port, pm_info_t pm_info, int val);
int pm4x10Q_port_cntmaxsize_get(int unit, int port, pm_info_t pm_info, int* val);

/*get the speed for the specified port*/
int pm4x10Q_port_speed_get(int unit, int port, pm_info_t pm_info, int* speed);

#endif /*_PM4X10Q_H_*/
