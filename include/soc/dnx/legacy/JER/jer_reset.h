/*
 * $Id: jer2_jer_reset.h Exp $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 */
#ifndef _SOC_DNX_JER2_JER_RESET_H
#define _SOC_DNX_JER2_JER_RESET_H

/* 
 * Defines
 */


/* 
 * Functions
 */
int soc_jer2_jer_reset_soft_init(int unit);
int soc_jer2_jer_reset_nif_txi_oor(int unit);
int soc_jer2_jer_reset_blocks_soft_init(int unit, int reset_action);

#endif /* !_SOC_DNX_JER2_JER_RESET_H  */


