/*
 * $Id: ramon_fe1600_link.h,v 1.3 Broadcom SDK $
 *
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *
 * RAMON_FE1600 STAT H
 */
 
#ifndef _SOC_RAMON_FE1600_LINK_H_
#define _SOC_RAMON_FE1600_LINK_H_

#include <soc/linkctrl.h>

extern soc_linkctrl_driver_t  soc_linkctrl_driver_ramon_fe1600;

soc_error_t soc_ramon_fe1600_linkctrl_init(int unit);

#endif /*_SOC_RAMON_FE1600_LINK_H_*/
