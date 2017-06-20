
/*
 * $Id: cop_diags_c.stg,v 1.4 Broadcom SDK $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *
 * t3p1_cop.c: Guadalupe2k V1.3 TMU table manager & wrappers
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from sdk/caladan_ucode/t3p1/src/t3p1_cop_cfg.lrp.
 * Edits to this file will be lost when it is regenerated.
 *
 */
 
#if defined(BCM_CALADAN3_SUPPORT) && defined(BCM_CALADAN3_T3P1_SUPPORT)
#include <shared/bsl.h>

#include <soc/sbx/t3p1/t3p1_int.h>
#include <soc/sbx/t3p1/t3p1_defs.h>
#include <soc/sbx/t3p1/t3p1_cop.h>
#include <soc/sbx/t3p1/t3p1_diags.h>
#include <soc/sbx/t3p1/t3p1_cop_diags.h>

#include <ctype.h>
#include <stdlib.h>


void soc_sbx_t3p1_policer_attach_monitor(int unit, soc_sbx_t3p1_policer_segment_t segment, int policer_id) {
/* TBD */
}

void soc_sbx_t3p1_policer_detach_monitor(int unit, soc_sbx_t3p1_policer_segment_t segment, int policer_id) {
    /* TBD */
}    

void soc_sbx_t3p1_policer_display_monitor(int unit, soc_sbx_t3p1_policer_segment_t segment, int policer_id) {
    /* TBD */
}

#define ARG_BUFFER_LENGTH 32
static char arg_buffer[ARG_BUFFER_LENGTH];

static void parse_arg(char *arg, char *param_name, int param_name_length, int *param_val) {
    char *sptr;
    int i, param_last_pos;

    *param_val = 0;
    sal_memset(param_name, 0, param_name_length);

    sptr = arg;
    i = 0;
    param_last_pos = param_name_length-1;

    while ((i < param_last_pos) && (*sptr != (char)0)) {
        
        if (isdigit((int)*sptr)) {
            break;
        }

        if (*sptr == '=') {            
            break;
        }

        param_name[i] = *sptr;
        i++;

        sptr++;
   }

   while ((*sptr != (char)0) && (!isdigit((int)*sptr))) {
       sptr++;
   }

   *param_val = (int)strtoul(sptr, NULL, 0);
} 
 
/* cop_cfg_template */
char soc_sbx_t3p1_policer_add_usage[] = 
"t3p1policeradd <policer group> id=<id> flags=<hex value bitmap> mode=<mode> cbs=<cbs> cir=<cir> ebs=<ebs> eir=<eir>\n"
#ifndef COMPILER_STRING_CONST_LIMIT
"         policer group  :  ingpol              \n"
"         id             :  policer ID                        \n"
"         flags bits     :  0x4 (COLOR_BLIND), 0x8 (DROP_RED) \n" 
"         mode           :  0 (RFC 2697),   1 (RFC 2698)      \n"
"                           2 (RFC 4115),   3 (MEF)           \n"               
"         cbs & ebs      : kbits                              \n"
"         cir & eir      : kbits/sec                          \n"                 
#endif
;

char soc_sbx_t3p1_policer_remove_usage[] = 
"t3p1policerremove <policer group id> id=<policer id> \n"
"         policer group  :  ingpol             \n"
;

char soc_sbx_t3p1_policer_remove_all_usage[] = 
"t3p1policerremoveall <policer group>                         \n"
"         policer group  :  ingpol             \n"
;

char soc_sbx_t3p1_sequencer_add_usage[] = 
"t3p1seqadd <sequence checker group> range=<range> \n"
"         sequence checker group  :  oamseq              \n"
"         range     :  range \n"
;


char soc_sbx_t3p1_sequencer_remove_all_usage[] = 
"t3p1seqremoveall <sequence checker group>                   \n"
"         sequence checker group  :  oamseq                  \n"
;      
char soc_sbx_t3p1_timer_remove_all_usage[] = 
"t3p1timerremoveall <policer group>                         \n"
"         timer group  :  oamtimer                          \n"
;
char soc_sbx_t3p1_coherent_table_add_usage[] =
"t3p1cohadd <coherent table group> init_value=<count> \n"
"         coherent table group  :  coherent, mac_limit              \n"
"         init_value : initial value \n"
;


char soc_sbx_t3p1_coherent_table_remove_all_usage[] =
"t3p1cohremoveall <coherent table group>                   \n"
"         coherent table group  :  coherent, mac_limit                  \n"
;     

char soc_sbx_t3p1_coherent_table_get_usage[] =
"t3p1cohget <coherent table group> entry=<entry> \n"
"         coherent table group  :  coherent, mac_limit              \n"
;

char soc_sbx_t3p1_coherent_table_set_usage[] =
"t3p1cohset <coherent table group> entry=<entry> bits_high=<bits_high> bits_low=<bits_low> \n"
"         coherent table group  : coherent, mac_limit               \n"
;
/* cop_module_list_template */
int soc_sbx_t3p1_cop_shell_policer_add(int unit, int argc, char **argv) {
    soc_sbx_t3p1_policer_segment_t segment;
    char *policer_group;    
    soc_sbx_t3p1_policer_config_t config;
    int rv, i, param;
    uint32 policer;
    
    soc_sbx_t3p1_policer_config_init(&config);
    
    policer_group = argv[0];
    
    if (!sal_strcasecmp(policer_group, "ingpol")) {
        segment = COP_POLICER_SEGMENT_INGPOL;
    }
    else {
        cli_out("Invalid policer group\n");
        return SOC_E_PARAM;
    }
    
    for (i=1; i<7; i++) {        
        
        parse_arg(argv[i], arg_buffer, ARG_BUFFER_LENGTH, &param);
        
        if (!sal_strcasecmp(arg_buffer, "id")) {            
            config.policer_id = param;
        }
        else if (!sal_strcasecmp(arg_buffer, "flags")) {            
            if (param & 0x4) { config.ignore_packet_color = TRUE;}
            if (param & 0x8) { config.drop_on_red = TRUE; }
        }
        else  if (!sal_strcasecmp(arg_buffer, "mode")) {    
            if (param == 0)      { config.mode = COP_POLICER_MODE_RFC_2697; }
            else if (param == 1) { config.mode = COP_POLICER_MODE_RFC_2698; }
            else if (param == 2) { config.mode = COP_POLICER_MODE_RFC_4115; }
            else  { config.mode = COP_POLICER_MODE_MEF; }
        }
        else  if (!sal_strcasecmp(arg_buffer, "cbs")) {
            config.cbs = param;
        }        
        else if (!sal_strcasecmp(arg_buffer, "cir")) {
            config.cir = param;
        }
        else if (!sal_strcasecmp(arg_buffer, "ebs")) {
            config.ebs = param;
        }
        else if (!sal_strcasecmp(arg_buffer, "eir")) {
            config.eir = param;
        }
        else {
      		cli_out("Unknown parameter %s\n", argv[i]);
            return SOC_E_PARAM;
        }
    }

    rv = soc_sbx_t3p1_policer_create(unit, segment, &config, &policer);
    if (rv == SOC_E_NONE) {
    	cli_out("Created Policer ID: 0x%x\n", policer);
    }

    return rv;
}

int soc_sbx_t3p1_cop_shell_policer_remove(int unit, int argc, char **argv) {
    int rv;
    char *policer_group;    
    soc_sbx_t3p1_policer_segment_t segment;
    int policer;

    policer_group = argv[0];    
       if (!sal_strcasecmp(policer_group, "ingpol")) {
           segment = COP_POLICER_SEGMENT_INGPOL;
       }
    else {
    	cli_out("Invalid policer group\n");
        return SOC_E_PARAM;
    }

    parse_arg(argv[1], arg_buffer, ARG_BUFFER_LENGTH, &policer);

    rv = soc_sbx_t3p1_policer_delete(unit, segment, (uint32)policer);
    if (rv == SOC_E_NONE) {
    	cli_out("Deleted Policer ID: 0x%x\n", policer);
    }

    return rv;
}

int soc_sbx_t3p1_cop_shell_policer_remove_all(int unit, int argc, char **argv) {
    int rv;
    soc_sbx_t3p1_policer_segment_t segment;
    char *policer_group; 
   
    policer_group = argv[0];    
       if (!sal_strcasecmp(policer_group, "ingpol")) {
           segment = COP_POLICER_SEGMENT_INGPOL;
       }
    else {
    	cli_out("Invalid policer group\n");
        return SOC_E_PARAM;
    }

    rv = soc_sbx_t3p1_policer_delete_all(unit, segment);
    if (rv == SOC_E_NONE) {
    	cli_out("Deleted all policers in group %s\n", policer_group);
    }

    return rv;
}

int soc_sbx_t3p1_cop_shell_sequencer_add(int unit, int argc, char **argv) {
    soc_sbx_t3p1_cop_timer_segment_t segment;
    char *seq_group;    
    int range;
    int rv;
    uint32 seq;

    seq_group = argv[0];  

    if (!sal_strcasecmp(seq_group, "oamseq")) {
        segment = COP_SEQUENCER_SEGMENT_OAMSEQ;
    }    
    else {
    	cli_out("Invalid sequence checker group\n");
        return SOC_E_PARAM;
    }

    parse_arg(argv[1], arg_buffer, ARG_BUFFER_LENGTH, &range);
    rv = soc_sbx_t3p1_sequencer_create(unit, segment, (uint32)range, &seq);
    if (rv == SOC_E_NONE) {
    	cli_out("Created sequence checker ID: 0x%x\n", seq);
    }

    return rv;
}

int soc_sbx_t3p1_cop_shell_sequencer_remove(int unit, int argc, char **argv) {
    int rv;
    int seq;

    parse_arg(argv[0], arg_buffer, ARG_BUFFER_LENGTH, &seq);

    rv = soc_sbx_t3p1_sequencer_delete(unit, (uint32)seq);
    if (rv == SOC_E_NONE) {
    	cli_out("Deleted Sequencer ID: 0x%x\n", seq);
    }

    return rv;
}

int soc_sbx_t3p1_cop_shell_sequencer_remove_all(int unit, int argc, char **argv) {
    int rv;
    soc_sbx_t3p1_cop_sequencer_segment_t segment;
    char *seq_group; 

    seq_group = argv[0];  

    if (!sal_strcasecmp(seq_group, "oamseq")) {
        segment = COP_SEQUENCER_SEGMENT_OAMSEQ;
    }       
    else {
    	cli_out("Invalid sequence checker group\n");
        return SOC_E_PARAM;
    }

    rv = soc_sbx_t3p1_sequencer_delete_all(unit, segment);
    if (rv == SOC_E_NONE) {
    	cli_out("Deleted all sequence checkers in group %s\n", seq_group);
    }

    return rv;
}   

static uint32 timer_cb_cookie;

static void soc_sbx_t3p1_cop_diags_timer_cb(int unit, soc_sbx_t3p1_util_timer_event_t *event, void *user_cookie)
{
  cli_out("COP Timer expired id=0x%x\n", event->id);
}

int soc_sbx_t3p1_cop_shell_timer_add(int unit, int argc, char **argv) {
    soc_sbx_t3p1_cop_timer_segment_t segment;
    char *timer_group;    
    int deadline;
    int rv = 0;
    uint32 timer; 
    int id;

    timer_group = argv[0]; 

    if (!sal_strcasecmp(timer_group, "oamtimer")) {
        segment = COP_TIMER_SEGMENT_OAMTIMER;
    }    
    else {
    	cli_out("Invalid timer group\n");
        return SOC_E_PARAM;
    }

    soc_sbx_t3p1_util_register_timer_callback(unit, &soc_sbx_t3p1_cop_diags_timer_cb, &timer_cb_cookie);
    parse_arg(argv[1], arg_buffer, ARG_BUFFER_LENGTH, &deadline);

    if(argc < 3) {
      id = 0;
    }
    else {
      parse_arg(argv[2], arg_buffer, ARG_BUFFER_LENGTH, &id);
    }

    rv = soc_sbx_t3p1_timer_create(unit, segment, (uint32)deadline, &timer, id, 0, 0);
    if (rv == SOC_E_NONE) {
      cli_out("Created Timer ID: 0x%x handle: 0x%x\n", id, timer);
    }

    return rv;
}

int soc_sbx_t3p1_cop_shell_timer_remove(int unit, int argc, char **argv) {
    int rv;
    int timer;

    parse_arg(argv[0], arg_buffer, ARG_BUFFER_LENGTH, &timer);

    rv = soc_sbx_t3p1_timer_delete(unit, (uint32)timer);
    if (rv == SOC_E_NONE) {
    	cli_out("Deleted Timer ID: 0x%x\n", timer);
    }

    return rv;
}

int soc_sbx_t3p1_cop_shell_timer_remove_all(int unit, int argc, char **argv) {
    int rv;
    soc_sbx_t3p1_cop_timer_segment_t segment;
    char *timer_group; 

    timer_group = argv[0];   

    if (!sal_strcasecmp(timer_group, "oamtimer")) {
        segment = COP_TIMER_SEGMENT_OAMTIMER;
    }         
    else {
    	cli_out("Invalid timer group\n");
        return SOC_E_PARAM;
    }

    rv = soc_sbx_t3p1_timer_delete_all(unit, segment);
    if (rv == SOC_E_NONE) {
    	cli_out("Deleted all timers in group %s\n", timer_group);
    }

    return rv;
}

int soc_sbx_t3p1_cop_shell_coherent_table_get(int unit, int argc, char **argv) {
    soc_sbx_t3p1_cop_coherent_table_segment_t segment;
    char *coh_group;
    uint32 bits63_32, bits31_0;
    int rv;
    int entry;

    coh_group = argv[0];

	if (!sal_strcasecmp(coh_group, "coherent")) {
	    segment = COP_COHERENT_TABLE_SEGMENT_COHERENT;
	}
	else if (!sal_strcasecmp(coh_group, "mac_limit")) {
	    segment = COP_COHERENT_TABLE_SEGMENT_MAC_LIMIT;
	}
    else {
        cli_out("Invalid coherent table group\n");
        return SOC_E_PARAM;
    }

    parse_arg(argv[1], arg_buffer, ARG_BUFFER_LENGTH, &entry);

    rv = soc_sbx_t3p1_coherent_table_get(unit, segment, entry, &bits31_0, &bits63_32);
    if (rv == SOC_E_NONE) {
    	cli_out("Got coherent table value: 0x%08x %08x\n", bits63_32, bits31_0);
    }

    return rv;
}

int soc_sbx_t3p1_cop_shell_coherent_table_set(int unit, int argc, char **argv) {
    soc_sbx_t3p1_cop_coherent_table_segment_t segment;
    char *coh_group;
    int bits_high, bits_low;
    int rv;
    int entry;

    coh_group = argv[0];

    if (!sal_strcasecmp(coh_group, "coherent")) {
        segment = COP_COHERENT_TABLE_SEGMENT_COHERENT;
    }
    else if (!sal_strcasecmp(coh_group, "mac_limit")) {
        segment = COP_COHERENT_TABLE_SEGMENT_MAC_LIMIT;
    }
    else {
    	cli_out("Invalid coherent table group\n");
        return SOC_E_PARAM;
    }

    parse_arg(argv[1], arg_buffer, ARG_BUFFER_LENGTH, &entry);
    parse_arg(argv[2], arg_buffer, ARG_BUFFER_LENGTH, &bits_high);
    parse_arg(argv[3], arg_buffer, ARG_BUFFER_LENGTH, &bits_low);

    rv = soc_sbx_t3p1_coherent_table_set(unit, segment, entry, bits_low, bits_high);
    if (rv == SOC_E_NONE) {
    	cli_out("Set coherent entry 0x%x: bits_high=0x%08x bits_low=%08x\n", entry, bits_high, bits_low);
    }

    return rv;
} 

int soc_sbx_t3p1_cop_shell_coherent_table_add(int unit, int argc, char **argv) {
    soc_sbx_t3p1_cop_coherent_table_segment_t segment;
    char *coh_group;
    int init_value_bits31_0;
    int rv;
    uint32 coh;

    coh_group = argv[0];

    if (!sal_strcasecmp(coh_group, "coherent")) {
        segment = COP_COHERENT_TABLE_SEGMENT_COHERENT;
    }
    else if (!sal_strcasecmp(coh_group, "mac_limit")) {
        segment = COP_COHERENT_TABLE_SEGMENT_MAC_LIMIT;
    }
    else {
    	cli_out("Invalid coherent table group\n");
        return SOC_E_PARAM;
    }

    parse_arg(argv[1], arg_buffer, ARG_BUFFER_LENGTH, &init_value_bits31_0);

    rv = soc_sbx_t3p1_coherent_table_create(unit, segment, (uint32)init_value_bits31_0, 0, &coh);
    if (rv == SOC_E_NONE) {
    	cli_out("Created coherent table ID: 0x%x\n", coh);
    }
    return rv;
}

int soc_sbx_t3p1_cop_shell_coherent_table_remove(int unit, int argc, char **argv) {
    int rv;
    int coh;

    parse_arg(argv[0], arg_buffer, ARG_BUFFER_LENGTH, &coh);

    rv = soc_sbx_t3p1_coherent_table_delete(unit, (uint32)coh);
    if (rv == SOC_E_NONE) {
    	cli_out("Deleted coherent table ID: 0x%x\n", coh);
    }
    return rv;
}

int soc_sbx_t3p1_cop_shell_coherent_table_remove_all(int unit, int argc, char **argv) {
    int rv;
    soc_sbx_t3p1_cop_coherent_table_segment_t segment;
    char *coh_group;

    coh_group = argv[0];   

    if (!sal_strcasecmp(coh_group, "coherent")) {
        segment = COP_COHERENT_TABLE_SEGMENT_COHERENT;
    }
    else if (!sal_strcasecmp(coh_group, "mac_limit")) {
        segment = COP_COHERENT_TABLE_SEGMENT_MAC_LIMIT;
    }
    else {
    	cli_out("Invalid coherent table group\n");
        return SOC_E_PARAM;
    }

    rv = soc_sbx_t3p1_coherent_table_delete_all(unit, segment);
    if (rv == SOC_E_NONE) {
    	cli_out("Deleted all coherent table in group %s\n", coh_group);
    }
    return rv;
}

char soc_sbx_t3p1_timer_add_usage[] = 
"t3p1timeradd <timer group> deadline=<deadline> \n"
"         timer group  :  oamtimer              \n"
"         deadline     :  timeout (must exceed the timer group's ticks per usec)\n"
;

char soc_sbx_t3p1_timer_remove_usage[] = 
"t3p1timerremove id=<policer id> \n"
;

char soc_sbx_t3p1_sequencer_remove_usage[] = 
"t3p1seqremove id=<seq id> \n"
;

char soc_sbx_t3p1_coherent_table_remove_usage[] =
"t3p1cohremove id=<coh id> \n"
;


#endif
