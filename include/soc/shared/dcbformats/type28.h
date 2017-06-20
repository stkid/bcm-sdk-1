/*
 * $Id: type23.h,v 1.7 Broadcom SDK $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *
 * File:        soc/shared/dcbformats/type28.h
 * Purpose:     Define dma control block (DCB) format for a type28 DCB
 *              used by the 88650 (Arad)
 *
 *              This file is shared between the SDK and the embedded applications.
 */

#ifndef _SOC_SHARED_DCBFORMATS_TYPE28_H
#define _SOC_SHARED_DCBFORMATS_TYPE28_H

/*
 * DMA Control Block - Type 28
 * Used on 88650 devices
 * 16 words
 */


typedef struct {
        uint32  addr;                   /* T9.0: physical address */
#ifdef  LE_HOST
        uint32  c_count:16,             /* Requested byte count */
                c_chain:1,              /* Chaining */
                c_sg:1,                 /* Scatter Gather */
                c_reload:1,             /* Reload */
                c_hg:1,                 /* Higig (TX) */
                c_stat:1,               /* update stats (TX) */
                c_pause:1,              /* Pause packet (TX) */
                c_purge:1,              /* Purge packet (TX) */
                :9;                     /* Don't care */
#else
        uint32  :9,                     /* Don't care */
                c_purge:1,              /* Purge packet (TX) */
                c_pause:1,
                c_stat:1,
                c_hg:1,
                c_reload:1,
                c_sg:1,
                c_chain:1,
                c_count:16;
#endif  /* LE_HOST */
        uint32  mh0;                    /* T9.2: Module Header word 0 */
        uint32  mh1;                    /* T9.3: Module Header word 1 */
        uint32  mh2;                    /* T9.4: Module Header word 2 */
        uint32  mh3;                    /* T11.5: Module Header word 3 */
#ifdef  LE_HOST
        uint32  mtp_index_hi:5,         /* Mirror-to-Port Index */
                l3uc:1,                 /* L3 UC */
                l3only:1,               /* L3 only */
                l3ipmc:1,               /* L3 IPMC */
                l3_intf:12,             /* L3 Intf number */
                imirror:1,              /* Ingress Mirroring */
                emirror:1,              /* Egress Mirroring */
                cos:3,                  /* Packet Priority */
                cpu_cos:3,              /* CPU COS */
                chg_tos:1,              /* DSCP Changed */
                cell_error:1,           /* Cell CRC Checksum Error Detected */
                bpdu:1,                 /* BPDU Packet */
                add_vid:1;              /* VLAN ID Added */
        uint32  reason:25,              /* CPU opcode */
                regen_crc:1,            /* Regenerate CRC */
                switch_pkt:1,           /* Switched packet */
                src_hg:1,               /* Source is Higig */
                purge_cell:1,           /* Packet is marked Purged */
                pkt_aged:1,             /* Pkt is Aged */
                mtp_index_lo:2;         /* Mirror-to-Port Index */
        uint32  dscp_hi:2,              /* New DSCP */
                srcport:5,              /* Source port */
                nh_index:13,            /* Next hop index */
                match_rule:10,          /* Matched Rule */
                match_rule_valid:1,     /* Matched Rule valid */
                decap_iptunnel:1;       /* Decap IP Tunneling Packet */
        uint32  :11,
                ingress_untagged:1,     /* Pkt came in untagged */
                outer_vid:12,           /* VID */
                outer_cfi:1,            /* CFI */
                outer_pri:3,            /* Priority */
                dscp_lo:4;              /* New DSCP */
#else
        uint32  add_vid:1,              /* VLAN ID Added */
                bpdu:1,                 /* BPDU Packet */
                cell_error:1,           /* Cell CRC Checksum Error Detected */
                chg_tos:1,              /* DSCP Changed */
                cpu_cos:3,              /* CPU COS */
                cos:3,                  /* Packet Priority */
                emirror:1,              /* Egress Mirroring */
                imirror:1,              /* Ingress Mirroring */
                l3_intf:12,             /* L3 Intf number */
                l3ipmc:1,               /* L3 IPMC */
                l3only:1,               /* L3 only */
                l3uc:1,                 /* L3 UC */
                mtp_index_hi:5;         /* Mirror-to-Port Index */
        uint32  mtp_index_lo:2,         /* Mirror-to-Port Index */
                pkt_aged:1,             /* Pkt is Aged */
                purge_cell:1,           /* Packet is marked Purged */
                src_hg:1,               /* Source is Higig */
                switch_pkt:1,           /* Switched packet */
                regen_crc:1,            /* Regenerate CRC */
                reason:25;              /* CPU opcode */
        uint32  decap_iptunnel:1,       /* Decap IP Tunneling Packet */
                match_rule_valid:1,     /* Matched Rule valid */
                match_rule:10,          /* Matched Rule */
                nh_index:13,            /* Next hop index */
                srcport:5,              /* Source port */
                dscp_hi:2;              /* New DSCP */
        uint32  dscp_lo:4,              /* New DSCP */
                outer_pri:3,            /* Priority (D)*/
                outer_cfi:1,            /* CFI (D)*/
                outer_vid:12,           /* VID (D)*/
                ingress_untagged:1,     /* Pkt came in untagged (D)*/
                :11;
#endif
        uint32  s_4;                    /* T9.9: RX Status 4 */
        uint32  s_41;                    /* T9.9: RX Status 4 */
        uint32  s_42;                    /* T9.9: RX Status 4 */
        uint32  s_43;                    /* T9.9: RX Status 4 */
        uint32  s_44;                    /* T9.9: RX Status 4 */
                                        /* T9.10: DMA Status 0 */
#ifdef  LE_HOST
        uint32  count:16,               /* Transferred byte count */
                end:1,                  /* End bit (RX) */
                start:1,                /* Start bit (RX) */
                error:1,                /* Cell Error (RX) */
                dc:12,                  /* Don't Care */
                done:1;                 /* Descriptor Done */
#else
        uint32  done:1,
                dc:12,
                error:1,
                start:1,
                end:1,
                count:16;
#endif
} dcb28_t;

/* typedef struct { */
/*         uint32  addr;                   /\* T23.0: physical address *\/ */
/*                                         /\* T23.1: Control 0 *\/ */
/* #ifdef  LE_HOST */
/*         uint32  c_count:16,             /\* Requested byte count *\/ */
/*                 c_chain:1,              /\* Chaining *\/ */
/*                 c_sg:1,                 /\* Scatter Gather *\/ */
/*                 c_reload:1,             /\* Reload *\/ */
/*                 c_hg:1,                 /\* Higig (TX) *\/ */
/*                 c_stat:1,               /\* Update stats (TX) *\/ */
/*                 c_pause:1,              /\* Pause packet (TX) *\/ */
/*                 c_purge:1,              /\* Purge packet (TX) *\/ */
/*                 :9;                     /\* Don't care *\/ */
/* #else */
/*         uint32  :9,                     /\* Don't care *\/ */
/*                 c_purge:1,              /\* Purge packet (TX) *\/ */
/*                 c_pause:1,              /\* Pause packet (TX) *\/ */
/*                 c_stat:1,               /\* Update stats (TX) *\/ */
/*                 c_hg:1,                 /\* Higig (TX) *\/ */
/*                 c_reload:1,             /\* Reload *\/ */
/*                 c_sg:1,                 /\* Scatter Gather *\/ */
/*                 c_chain:1,              /\* Chaining *\/ */
/*                 c_count:16;             /\* Requested byte count *\/ */
/* #endif  /\* LE_HOST *\/ */
/*         uint32  reason_hi;              /\* T23.2: CPU opcode (hi bits) *\/ */
/*         uint32  reason;                 /\* T23.3: CPU opcode (low bits) *\/ */
/* #ifdef  LE_HOST */
/*     union {                             /\* T23.4 *\/ */
/*         struct { */
/*             uint32  queue_num:16,       /\* Queue number for CPU packets *\/ */
/*                     outer_vid:12,       /\* Outer VLAN ID *\/ */
/*                     cpu_opcode_type:4;  /\* CPU opcode type *\/ */
/*         } overlay1; */
/*         struct { */
/*             uint32  cpu_cos:6,          /\* CPU COS *\/ */
/*                     :26;                /\* Reserved *\/ */
/*         } overlay2; */
/*     } word4; */

/*                                         /\* T23.5 *\/ */
/*         uint32  srcport:8,              /\* Source port number *\/ */
/*                 pkt_len:14,             /\* Packet length *\/ */
/*                 match_rule:8,           /\* Matched FP rule *\/ */
/*                 hgi:2;                  /\* Higig Interface Format Indicator *\/ */
/* #else */
/*     union {                             /\* T23.4 *\/ */
/*         struct { */
/*             uint32  cpu_opcode_type:4,  /\* CPU opcode type *\/ */
/*                     outer_vid:12,       /\* Outer VLAN ID *\/ */
/*                     queue_num:16;       /\* Queue number for CPU packets *\/ */
/*         } overlay1; */
/*         struct { */
/*             uint32  :26,                /\* Reserved *\/ */
/*                     cpu_cos:6;          /\* CPU COS *\/ */
/*         } overlay2; */
/*     } word4; */

/*                                         /\* T23.5 *\/ */
/*         uint32  hgi:2,                  /\* Higig Interface Format Indicator *\/ */
/*                 match_rule:8,           /\* Matched FP rule *\/ */
/*                 pkt_len:14,             /\* Packet length *\/ */
/*                 srcport:8;              /\* Source port number *\/ */
/* #endif */

/*         uint32  mh0;                    /\* T23.6: Module Header word 0 *\/ */
/*         uint32  mh1;                    /\* T23.7: Module Header word 1 *\/ */
/*         uint32  mh2;                    /\* T23.8: Module Header word 2 *\/ */
/*         uint32  mh3;                    /\* T23.9: Module Header word 3 *\/ */
/* #ifdef  LE_HOST */
/*                                         /\* T23.10 *\/ */
/*         uint32  inner_pri:3,            /\* Inner priority *\/ */
/*                 dvp_nhi_sel:1,          /\* DVP overlay indicator *\/ */
/*                 regen_crc:1,            /\* Packet modified and needs new CRC *\/ */
/*                 repl_nhi:19,            /\* Replication or Next Hop index *\/ */
/*                 vfi_valid:1,            /\* Validates VFI field *\/ */
/*                 :7;                     /\* Reserved *\/ */

/*     union {                             /\* T23.11 *\/ */
/*         struct { */
/*             uint32  dscp:6,             /\* New DSCP ( special pkt type:3) *\/ */
/*                     chg_tos:1,          /\* DSCP has been changed by HW *\/ */
/*                     vntag_action:2,     /\* VN tag action *\/ */
/*                     outer_cfi:1,        /\* Outer Canoncial Format Indicator *\/ */
/*                     outer_pri:3,        /\* Outer priority *\/ */
/*                     decap_tunnel_type:5,/\* Tunnel type that was decapsulated *\/ */
/*                     inner_vid:12,       /\* Inner VLAN ID *\/ */
/*                     inner_cfi:1,        /\* Inner Canoncial Format Indicator *\/ */
/*                     :1;                 /\* Reserved *\/ */
/*         } overlay1; */
/*         struct { */
/*             uint32  special_pkt_type:3, /\* Special packet type (OAM, BFD) *\/ */
/*                     :29;                /\* Reserved *\/ */
/*         } overlay2; */
/*     } word11; */

/*     union {                             /\* T23.12 *\/ */
/*         struct { */
/*             uint32  timestamp;          /\* Timestamp *\/ */
/*         } overlay1; */
/*         struct { */
/*             uint32  vfi:14,             /\* VFI or FID *\/ */
/*                     :18;                /\* Reserved *\/ */
/*         } overlay2; */
/*     } word12; */

/*                                         /\* T23.13 *\/ */
/*         uint32  itag_status:2,          /\* Ingress Inner tag status *\/ */
/*                 otag_action:2,          /\* Ingress Outer tag action *\/ */
/*                 itag_action:2,          /\* Ingress Inner tag action *\/ */
/*                 service_tag:1,          /\* SD tag present *\/ */
/*                 switch_pkt:1,           /\* Switched packet *\/ */
/*                 all_switch_drop:1,      /\* All switched copies dropped *\/ */
/*                 hg_type:1,              /\* 0: Higig, 1: Higig2 *\/ */
/*                 src_hg:1,               /\* Source is Higig *\/ */
/*                 l3routed:1,             /\* Any IP routed packet *\/ */
/*                 l3only:1,               /\* L3 only IPMC packet *\/ */
/*                 replicated:1,           /\* Replicated copy *\/ */
/*                 hg2_ext_hdr:1,          /\* Extended Higig2 header valid *\/ */
/*                 special_pkt:1,          /\* Special Packet indicator *\/ */
/*                 do_not_change_ttl:1,    /\* Do not change TTL *\/ */
/*                 bpdu:1,                 /\* BPDU Packet *\/ */
/*                 timestamp_type:2,       /\* Timestamp type *\/ */
/*                 loopback_pkt_type:4,    /\* Loopback packet type *\/ */
/*                 mtp_index:5,            /\* MTP index *\/ */
/*                 ecn:2,                  /\* New ECN value *\/ */
/*                 chg_ecn:1;              /\* ECN changed *\/ */

/*     union {                             /\* T23.14 *\/ */
/*         struct { */
/*             uint32  timestamp_hi;       /\* Timestamp upper bits *\/ */
/*         } overlay1; */
/*         struct { */
/*             uint32  eh_seg_sel:3,       /\* HG2 EH seg sel *\/ */
/*                     eh_tag_type:2,      /\* HG2 EH tag type *\/ */
/*                     eh_tm:1,            /\* HG2 EH tm *\/ */
/*                     eh_queue_tag: 16,   /\* HG2 EH queue tag *\/                 */
/*                     eh_tag_reserved:10; /\* Reserved *\/ */
/*         } overlay2; */
/*         struct { */
/*             uint32  rx_bfd_session_index:11,    /\* Rx BFD pkt session ID *\/ */
/*                     rx_bfd_start_offset_type:2, /\* Rx BFD pkt st offset type *\/ */
/*                     rx_bfd_start_offset:8,      /\* Rx BFD pkt start offset *\/ */
/*                    :11;                        /\* Reserved *\/ */
/*         } overlay3; */
/*     } word14; */

/*                                         /\* T23.15: DMA Status 0 *\/ */
/*         uint32  count:16,               /\* Transferred byte count *\/ */
/*                 end:1,                  /\* End bit (RX) *\/ */
/*                 start:1,                /\* Start bit (RX) *\/ */
/*                 error:1,                /\* Cell Error (RX) *\/ */
/*                 :12,                    /\* Reserved *\/ */
/*                 done:1;                 /\* Descriptor Done *\/ */
/* #else */
/*                                         /\* T23.10 *\/ */
/*         uint32  :7,                     /\* Reserved *\/ */
/*                 vfi_valid:1,            /\* Validates VFI field *\/ */
/*                 repl_nhi:19,            /\* Replication or Next Hop index *\/ */
/*                 regen_crc:1,            /\* Packet modified and needs new CRC *\/ */
/*                 dvp_nhi_sel:1,          /\* DVP overlay indicator *\/ */
/*                 inner_pri:3;            /\* Inner priority *\/ */

/*     union {                             /\* T23.11 *\/ */
/*         struct { */
/*             uint32  :1,                 /\* Reserved *\/ */
/*                     inner_cfi:1,        /\* Inner Canoncial Format Indicator *\/ */
/*                     inner_vid:12,       /\* Inner VLAN ID *\/ */
/*                     decap_tunnel_type:5,/\* Tunnel type that was decapsulated *\/ */
/*                     outer_pri:3,        /\* Outer priority *\/ */
/*                     outer_cfi:1,        /\* Outer Canoncial Format Indicator *\/ */
/*                     vntag_action:2,     /\* VN tag action *\/ */
/*                     chg_tos:1,          /\* DSCP has been changed by HW *\/ */
/*                     dscp:6;             /\* New DSCP ( special pkt type:3) *\/ */
/*         } overlay1; */
/*         struct { */
/*             uint32  :29,                /\* Reserved *\/ */
/*                     special_pkt_type:3; /\* Special packet type (OAM, BFD) *\/ */
/*         } overlay2; */
/*     } word11; */

/*     union {                             /\* T23.12 *\/ */
/*         struct { */
/*             uint32  timestamp;          /\* Timestamp *\/ */
/*         } overlay1; */
/*         struct { */
/*             uint32  :18,                /\* Reserved *\/ */
/*                     vfi:14;             /\* VFI or FID *\/ */
/*         } overlay2; */
/*     } word12; */

/*                                         /\* T23.13 *\/ */
/*         uint32  chg_ecn:1,              /\* ECN changed *\/ */
/*                 ecn:2,                  /\* New ECN value *\/ */
/*                 mtp_index:5,            /\* MTP index *\/ */
/*                 loopback_pkt_type:4,    /\* Loopback packet type *\/ */
/*                 timestamp_type:2,       /\* Timestamp type *\/ */
/*                 bpdu:1,                 /\* BPDU Packet *\/ */
/*                 do_not_change_ttl:1,    /\* Do not change TTL *\/ */
/*                 special_pkt:1,          /\* Special Packet indicator *\/ */
/*                 hg2_ext_hdr:1,          /\* Extended Higig2 header valid *\/ */
/*                 replicated:1,           /\* Replicated copy *\/ */
/*                 l3only:1,               /\* L3 only IPMC packet *\/ */
/*                 l3routed:1,             /\* Any IP routed packet *\/ */
/*                 src_hg:1,               /\* Source is Higig *\/ */
/*                 hg_type:1,              /\* 0: Higig, 1: Higig2 *\/ */
/*                 all_switch_drop:1,      /\* All switched copies dropped *\/ */
/*                 switch_pkt:1,           /\* Switched packet *\/ */
/*                 service_tag:1,          /\* SD tag present *\/ */
/*                 itag_action:2,          /\* Ingress Inner tag action *\/ */
/*                 otag_action:2,          /\* Ingress Outer tag action *\/ */
/*                 itag_status:2;          /\* Ingress Inner tag status *\/ */

/*     union {                             /\* T23.14 *\/ */
/*         struct { */
/*             uint32  timestamp_hi;       /\* Timestamp upper bits *\/ */
/*         } overlay1; */
/*         struct { */
/*             uint32  eh_tag_reserved:10, /\* Reserved *\/ */
/*                     eh_queue_tag: 16,   /\* HG2 EH queue tag *\/ */
/*                     eh_tm:1,            /\* HG2 EH tm *\/ */
/*                     eh_tag_type:2,      /\* HG2 EH tag type *\/ */
/*                     eh_seg_sel:3;       /\* HG2 EH seg sel *\/ */
/*         } overlay2; */
/*         struct { */
/*             uint32  :11,                        /\* Reserved *\/ */
/*                     rx_bfd_start_offset:8,      /\* Rx BFD pkt start offset *\/ */
/*                     rx_bfd_start_offset_type:2, /\* Rx BFD pkt st offset type *\/ */
/*                     rx_bfd_session_index:11;    /\* Rx BFD pkt session ID *\/ */
/*         } overlay3; */
/*     } word14; */

/*                                         /\* T23.15: DMA Status 0 *\/ */
/*         uint32  done:1,                 /\* Descriptor Done *\/ */
/*                 :12,                    /\* Reserved *\/ */
/*                 error:1,                /\* Cell Error (RX) *\/ */
/*                 start:1,                /\* Start bit (RX) *\/ */
/*                 end:1,                  /\* End bit (RX) *\/ */
/*                 count:16;               /\* Transferred byte count *\/ */
/* #endif */
/* } dcb23_t; */

/* #define SOC_CPU_OPCODE_TYPE_IP_0        0 */
/* #define SOC_CPU_OPCODE_TYPE_IP_1        1 */
/* #define SOC_CPU_OPCODE_TYPE_EP          2 */
/* #define SOC_CPU_OPCODE_TYPE_NLF         3 */

#endif
