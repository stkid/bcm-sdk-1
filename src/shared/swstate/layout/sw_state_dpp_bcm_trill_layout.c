/* $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
*/
#include <sal/core/libc.h>
#include <shared/swstate/sw_state.h>
#include <shared/error.h>
#include <shared/swstate/sw_state_defs.h>
#include <shared/swstate/sw_state_utils.h>
#include <shared/bsl.h>
#include <shared/swstate/layout/sw_state_layout.h>
#include <shared/swstate/layout/sw_state_dpp_bcm_trill_layout.h>

#ifdef _ERR_MSG_MODULE_NAME  
  #error "_ERR_MSG_MODULE_NAME redefined"  
#endif  
#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   int younger_brother_node_id = 0; 
   int offset = 0; 
   bcm_dpp_trill_state_t* dummy_struct; 
   SOC_INIT_FUNC_DEFS;
   /* alloc dummy struct */ 
   dummy_struct = sal_alloc(sizeof(bcm_dpp_trill_state_t),"bcm_dpp_trill_state_t"); 

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "trill",             /* name */         
                                   sizeof(bcm_dpp_trill_state_t),    /* size of the element's type*/          
                                   1,                 /* nof pointers */ 
                                   "bcm_dpp_trill_state_t",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_init_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->init)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_mask_set_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->mask_set)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_trill_out_ac_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->trill_out_ac)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_trill_local_in_lif_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->trill_local_in_lif)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_trill_global_in_lif_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->trill_global_in_lif)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_last_used_id_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->last_used_id)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_trill_ports_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->trill_ports)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_mc_trill_route_info_db_htb_handle_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->mc_trill_route_info_db_htb_handle)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_mc_trill_root_src_db_htb_handle_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->mc_trill_root_src_db_htb_handle)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   SOC_EXIT;
 exit:
   /* free dummy struct */ 
   sal_free(dummy_struct); 
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_init_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "init",             /* name */         
                                   sizeof(int),    /* size of the element's type*/          
                                   0,                 /* nof pointers */ 
                                   "int",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_mask_set_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "mask_set",             /* name */         
                                   sizeof(int),    /* size of the element's type*/          
                                   0,                 /* nof pointers */ 
                                   "int",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_trill_out_ac_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "trill_out_ac",             /* name */         
                                   sizeof(SOC_PPC_AC_ID),    /* size of the element's type*/          
                                   0,                 /* nof pointers */ 
                                   "SOC_PPC_AC_ID",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_trill_local_in_lif_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "trill_local_in_lif",             /* name */         
                                   sizeof(SOC_PPC_LIF_ID),    /* size of the element's type*/          
                                   0,                 /* nof pointers */ 
                                   "SOC_PPC_LIF_ID",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_trill_global_in_lif_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "trill_global_in_lif",             /* name */         
                                   sizeof(int),    /* size of the element's type*/          
                                   0,                 /* nof pointers */ 
                                   "int",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_last_used_id_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "last_used_id",             /* name */         
                                   sizeof(int),    /* size of the element's type*/          
                                   0,                 /* nof pointers */ 
                                   "int",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_trill_ports_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   int younger_brother_node_id = 0; 
   int offset = 0; 
   bcm_petra_trill_port_list_t* dummy_struct; 
   SOC_INIT_FUNC_DEFS;
   /* alloc dummy struct */ 
   dummy_struct = sal_alloc(sizeof(bcm_petra_trill_port_list_t),"bcm_petra_trill_port_list_t"); 

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "trill_ports",             /* name */         
                                   sizeof(bcm_petra_trill_port_list_t),    /* size of the element's type*/          
                                   1,                 /* nof pointers */ 
                                   "bcm_petra_trill_port_list_t",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_trill_ports_allocated_cnt_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->allocated_cnt)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_trill_ports_port_cnt_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->port_cnt)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   /* add node */ 
   _SOC_IF_ERR_EXIT(sw_state_dpp_bcm_trill_trill_ports_ports_layout_node_create(unit, &younger_brother_node_id, next_free_node_id));
   /* connect node (1st child) to its parent */ 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_add_child(unit, *root_node_id, younger_brother_node_id)); 
   /* update offset */ 
   offset = ((uint8*) &(dummy_struct->ports)) - (( uint8*) dummy_struct); 
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_update_offset(unit, younger_brother_node_id, offset)); 

   SOC_EXIT;
 exit:
   /* free dummy struct */ 
   sal_free(dummy_struct); 
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_trill_ports_allocated_cnt_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "allocated_cnt",             /* name */         
                                   sizeof(int),    /* size of the element's type*/          
                                   0,                 /* nof pointers */ 
                                   "int",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_trill_ports_port_cnt_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "port_cnt",             /* name */         
                                   sizeof(int),    /* size of the element's type*/          
                                   0,                 /* nof pointers */ 
                                   "int",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_trill_ports_ports_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "ports",             /* name */         
                                   sizeof(bcm_gport_t),    /* size of the element's type*/          
                                   1,                 /* nof pointers */ 
                                   "bcm_gport_t",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_mc_trill_route_info_db_htb_handle_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "mc_trill_route_info_db_htb_handle",             /* name */         
                                   sizeof(int),    /* size of the element's type*/          
                                   0,                 /* nof pointers */ 
                                   "int",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_bcm_trill_mc_trill_root_src_db_htb_handle_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "mc_trill_root_src_db_htb_handle",             /* name */         
                                   sizeof(int),    /* size of the element's type*/          
                                   0,                 /* nof pointers */ 
                                   "int",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
