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

#include <phymod/phymod.h>
#include <phymod/phymod.h>
#include <phymod/phymod_dispatch.h>

#ifdef PHYMOD_FALCON_SUPPORT

#include <phymod/chip/falcon.h>


__phymod__dispatch__t__ phymod_falcon_driver = {

    falcon_core_identify,
    falcon_core_info_get,
    falcon_core_lane_map_set,
    falcon_core_lane_map_get,
    falcon_core_reset_set,
    falcon_core_reset_get,
    falcon_core_firmware_info_get,
    falcon_phy_firmware_core_config_set,
    falcon_phy_firmware_core_config_get,
    falcon_phy_firmware_lane_config_set,
    falcon_phy_firmware_lane_config_get,
    falcon_core_pll_sequencer_restart,
    falcon_core_wait_event,
    falcon_phy_rx_restart,
    falcon_phy_polarity_set,
    falcon_phy_polarity_get,
    falcon_phy_tx_set,
    falcon_phy_tx_get,
    falcon_phy_media_type_tx_get,
    falcon_phy_tx_override_set,
    falcon_phy_tx_override_get,
    falcon_phy_rx_set,
    falcon_phy_rx_get,
    NULL, /* phymod_phy_rx_adaptation_resume */
    falcon_phy_reset_set,
    falcon_phy_reset_get,
    falcon_phy_power_set,
    falcon_phy_power_get,
    NULL, /* phymod_phy_hg2_codec_control_set */
    NULL, /* phymod_phy_hg2_codec_control_get */
    falcon_phy_tx_lane_control_set,
    falcon_phy_tx_lane_control_get,
    falcon_phy_rx_lane_control_set,
    falcon_phy_rx_lane_control_get,
    NULL, /* phymod_phy_fec_enable_set */
    NULL, /* phymod_phy_fec_enable_get */
    NULL, /* phymod_phy_forced_speed_line_side_set */
    NULL, /* phymod_phy_forced_speed_line_side_get */
    NULL, /* phymod_phy_flow_control_mode_set */
    NULL, /* phymod_phy_flow_control_mode_get */
    NULL, /* phymod_phy_psm_cos_bmp_set */
    NULL, /* phymod_phy_psm_cos_bmp_get */
    NULL, /* phymod_phy_autoneg_oui_set */
    NULL, /* phymod_phy_autoneg_oui_get */
    NULL, /* phymod_phy_eee_set */
    NULL, /* phymod_phy_eee_get */
    falcon_phy_interface_config_set,
    falcon_phy_interface_config_get,
    falcon_phy_cl72_set,
    falcon_phy_cl72_get,
    falcon_phy_cl72_status_get,
    falcon_phy_autoneg_ability_set,
    falcon_phy_autoneg_ability_get,
    NULL, /* phymod_phy_autoneg_remote_ability_get */
    falcon_phy_autoneg_set,
    falcon_phy_autoneg_get,
    NULL, /* phymod_phy_autoneg_restart_set */
    falcon_phy_autoneg_status_get,
    falcon_core_init,
    NULL, /* phymod_phy_pll_multiplier_get */
    falcon_phy_init,
    falcon_phy_loopback_set,
    falcon_phy_loopback_get,
    falcon_phy_rx_pmd_locked_get,
    falcon_phy_rx_signal_detect_get,
    falcon_phy_link_status_get,
    NULL, /* phymod_phy_status_dump */
    NULL, /* phymod_phy_pcs_userspeed_set */
    NULL, /* phymod_phy_pcs_userspeed_get */
    falcon_phy_reg_read,
    falcon_phy_reg_write,
    NULL, /* phymod_phy_private_read */
    NULL, /* phymod_phy_private_write */
    NULL, /* phymod_phy_rev_id */
    NULL, /* phymod_phy_lane_cross_switch_map_set */
    NULL, /* phymod_phy_lane_cross_switch_map_get */
    NULL, /* phymod_phy_intr_enable_set */
    NULL, /* phymod_phy_intr_enable_get */
    NULL, /* phymod_phy_intr_status_get */
    NULL, /* phymod_phy_intr_status_clear */
    NULL, /* phymod_phy_i2c_read */
    NULL, /* phymod_phy_i2c_write */
    NULL, /* phymod_phy_gpio_config_set */
    NULL, /* phymod_phy_gpio_config_get */
    NULL, /* phymod_phy_gpio_pin_value_set */
    NULL, /* phymod_phy_gpio_pin_value_get */
    NULL, /* phymod_timesync_config_set */
    NULL, /* phymod_timesync_config_get */
    NULL, /* phymod_timesync_enable_set */
    NULL, /* phymod_timesync_enable_get */
    NULL, /* phymod_timesync_nco_addend_set */
    NULL, /* phymod_timesync_nco_addend_get */
    NULL, /* phymod_timesync_framesync_mode_set */
    NULL, /* phymod_timesync_framesync_mode_get */
    NULL, /* phymod_timesync_local_time_set */
    NULL, /* phymod_timesync_local_time_get */
    NULL, /* phymod_timesync_load_ctrl_set */
    NULL, /* phymod_timesync_load_ctrl_get */
    NULL, /* phymod_timesync_tx_timestamp_offset_set */
    NULL, /* phymod_timesync_tx_timestamp_offset_get */
    NULL, /* phymod_timesync_rx_timestamp_offset_set */
    NULL, /* phymod_timesync_rx_timestamp_offset_get */
    NULL, /* phymod_timesync_capture_timestamp_get */
    NULL, /* phymod_timesync_heartbeat_timestamp_get */
    NULL, /* phymod_timesync_do_sync */
    NULL, /* phymod_edc_config_set */
    NULL, /* phymod_edc_config_get */
    NULL, /* phymod_phy_core_mode_set */
    NULL, /* phymod_phy_core_mode_get */
    NULL, /* phymod_failover_mode_set */
    NULL, /* phymod_failover_mode_get */
    NULL, /* phymod_port_init */
    NULL, /* phymod_phy_autoneg_try_enable */
    NULL, /* phymod_debug_ether */
    NULL, /* phymod_phy_short_chn_mode_enable_set */
    NULL, /* phymod_phy_short_chn_mode_enable_get */
    NULL, /* phymod_port_enable_set */
    NULL, /* phymod_port_enable_get */
    NULL, /* phymod_phy_eye_margin_est_get */
    NULL, /* phymod_phy_multi_get */
    NULL, /* phymod_phy_rescal_set */
    NULL, /* phymod_phy_rescal_get */
    NULL, /* phymod_phy_sw_an_control_status_get */
    NULL, /* phymod_phy_sw_an_base_page_exchange_handler */
    NULL, /* phymod_phy_sw_an_lp_page_rdy_handler */
    NULL, /* phymod_phy_sw_an_advert_set */
    NULL, /* phymod_phy_sw_autoneg_enable */
};

#endif /* PHYMOD_FALCON_SUPPORT */
