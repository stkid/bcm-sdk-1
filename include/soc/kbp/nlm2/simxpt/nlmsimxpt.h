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
 
#ifndef INCLUDED_NLMSIMXPT_H
#define INCLUDED_NLMSIMXPT_H

/*@@NlmSimXpt Module
 *  
 *  Summary 
 *  This module contains the functions and data structures for cmodel 
 *  transport layer.
 *  This module calls the cmodel specific routines internally.
 */

#include <nlmcmbasic.h>
#include <nlmcmallocator.h>
#include <nlmxpt.h>

/*
 * NlmSimXpt__CreateXpt Creates the transport object xpt. The implementations of
 * all the operations of the xpt object is done by the simxpt module, but they
 * are not exposed to the base xpt layer. This routine internally creates an xpt
 * object, does the proper initialization of the object and returns this object
 * to caller. 
 */

extern NlmXpt*
NlmSimXpt__Create(
    NlmCmAllocator          *alloc,        /*General purpose memory allocator */
    nlm_u32                 devType,
    nlm_u16         		speed_mode, 
    nlm_u32                 max_rqt_count, /*Max request count */
    nlm_u32                 max_rslt_count, /*Max result count*/          
    nlm_u16                 opr_mode,       /* normal or sahasra mode*/ 
    nlm_u16                 rbus_mode,      /* singe/dual bus mode */    
    nlm_u32                 chan_id   /* channel id */     
    ) ;

/*
 * NlmSimXpt__destroy frees all the memory associated with the xpt structure,
 * and also the memory associated with the derived structure which is the simxpt
 * object here. 
 */

extern void
NlmSimXpt__destroy(
    NlmXpt* self 
) ;

#endif
/*[]*/
