/*
 * $Id$
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *
 */
/*
 **************************************************************************************
 Copyright 2009-2012 Broadcom Corporation

 This program is the proprietary software of Broadcom Corporation and/or its licensors,
 and may only be used, duplicated, modified or distributed pursuant to the terms and 
 conditions of a separate, written license agreement executed between you and 
 Broadcom (an "Authorized License").Except as set forth in an Authorized License, 
 Broadcom grants no license (express or implied),right to use, or waiver of any kind 
 with respect to the Software, and Broadcom expressly reserves all rights in and to 
 the Software and all intellectual property rights therein.  
 IF YOU HAVE NO AUTHORIZED LICENSE, THEN YOU HAVE NO RIGHT TO USE THIS SOFTWARE IN ANY 
 WAY,AND SHOULD IMMEDIATELY NOTIFY BROADCOM AND DISCONTINUE ALL USE OF THE SOFTWARE.  

 Except as expressly set forth in the Authorized License,

 1. This program, including its structure, sequence and organization, constitutes the 
    valuable trade secrets of Broadcom, and you shall use all reasonable efforts to 
    protect the confidentiality thereof,and to use this information only in connection
    with your use of Broadcom integrated circuit products.

 2. TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS" AND WITH 
    ALL FAULTS AND BROADCOM MAKES NO PROMISES, REPRESENTATIONS OR WARRANTIES, EITHER 
    EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH RESPECT TO THE SOFTWARE.  BROADCOM 
    SPECIFICALLY DISCLAIMS ANY AND ALL IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY, 
    NONINFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE, LACK OF VIRUSES, ACCURACY OR 
    COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR CORRESPONDENCE TO DESCRIPTION. 
    YOU ASSUME THE ENTIRE RISK ARISING OUT OF USE OR PERFORMANCE OF THE SOFTWARE.

 3. TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL BROADCOM OR ITS LICENSORS 
    BE LIABLE FOR (i) CONSEQUENTIAL, INCIDENTAL, SPECIAL, INDIRECT, OR EXEMPLARY DAMAGES 
    WHATSOEVER ARISING OUT OF OR IN ANY WAY RELATING TO YOUR USE OF OR INABILITY TO USE 
    THE SOFTWARE EVEN IF BROADCOM HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES; 
    OR (ii) ANY AMOUNT IN EXCESS OF THE AMOUNT ACTUALLY PAID FOR THE SOFTWARE ITSELF 
    OR U.S. $1, WHICHEVER IS GREATER. THESE LIMITATIONS SHALL APPLY NOTWITHSTANDING 
    ANY FAILURE OF ESSENTIAL PURPOSE OF ANY LIMITED REMEDY.
 **************************************************************************************
 */
 
#ifndef NLMDIAG_DEVICE_DUMP_H
#define NLMDIAG_DEVICE_DUMP_H

#include "nlmdiag_refapp.h"

#define NLMDIAG_REG_ADDR_LTR(x)       (0x00004000 + ((x) * 0x20))

typedef enum
{
    NLM_DUMP_COMPLETE_DEVICE = 0,   /*  */
    NLM_DUMP_LTR_REGISTERS, /* All register default read and write/read tests */
    NLM_DUMP_BLOCKS,
	NLM_DUMP_INTERNAL_REGISTERS, 
	NLM_DUMP_GLOBAL_REGISTER, 
	NLM_DUMP_CB_MEMORY, 
	NLM_DUMP_SAHASRA_MEMORY
    /* In future test types are added */
} NlmDiag_DeviceDumpTestType;

typedef struct NlmDiag_DevDumpOptions_s 
{
	nlm_u8		m_startDevId;		/* Device ID */
	nlm_u8		m_endDevId;		/* Device ID */
	nlm_u16		m_startRange;		/* Start block number */
	nlm_u16		m_endRange;		/* end block number */
	NlmDiag_DeviceDumpTestType m_operation; /* Opearation Type */
} NlmDiag_DevDumpOptions;

typedef struct NlmDiag_DeviceEntry_s 
{
	nlm_u8	m_data[NLMDEV_AB_WIDTH_IN_BYTES];
} NlmDiag_DeviceEntry;

nlm_u32 
NlmDiag_ValidateOptions (
	NlmDiag_DevDumpOptions*, 
	nlm_u32 numOfChips
	);

nlm_u32 
NlmDiag_ReadAndDisplayBlockEntries (NlmDev *, 
									  nlm_u8 , 
									  NlmCmFile *);
nlm_u32 
NlmDiag_ReadAndDisplayLtrRegister (NlmDev *, 
									  nlm_u8 , 
									  nlm_u8 , 
									  NlmCmFile *);
void NlmDiag_PrintHexDataToFile(
	nlm_u8 *,
	nlm_u32 ,
	NlmCmFile *);

nlm_u32 NlmDiag_ReadAndDisplayGlobalRegister(
	NlmDev *,
	NlmCmFile *);

nlm_u32 NlmDiag_ReadAndDisplayCBMemory (
	NlmDev *,
	nlm_u16 , 
	NlmCmFile *);

nlm_u32 
NlmDiag_ReadAndDisplayBlockRegisters (
	NlmDev *, 
	nlm_u8 , 
	NlmCmFile *, 
	nlm_u8 *);

nlm_u32 
NlmDiag_ReadAndDisplaySTEntries (
	NlmDev *,
	NlmCmFile *);

#endif 
