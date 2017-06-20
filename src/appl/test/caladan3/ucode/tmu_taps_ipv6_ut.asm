;;;
;;;   $Id: tmu_taps_ipv6_ut.asm,v 1.1 Broadcom SDK $
;;;
;;; $Copyright: (c) 2016 Broadcom.
;;; Broadcom Proprietary and Confidential. All rights reserved.$   
;;;   Internal -- latency 19 cycles, shadow 48 cycles
;;;   External -- latency 26 cycles, shadow 48 cycles
;;;
;;; --------------------------------------------------------------------------

        const TSR_ERROR_FLAG    = 0x40000000 
        reg   dcr = tsr[27:24]
        reg   ValidContext = tsr[0]
        reg   tsr_ErrorFlag = tsr[10]
        reg   ErrorMessage = r24

        reg   IPV6_SK0_ActualResults_0 = c20
        reg   IPV6_SK0_ActualResults_1 = c21
        reg   IPV6_SK0_ActualResults_2 = c22
        reg   IPV6_SK0_ActualResults_3 = c23

        reg   IPV6_SK1_ActualResults_0 = c16
        reg   IPV6_SK1_ActualResults_1 = c17
        reg   IPV6_SK1_ActualResults_2 = c18
        reg   IPV6_SK1_ActualResults_3 = c19
       
        reg   IPV6_SubKey0_31to0 = r0
        reg   IPV6_SubKey0_63to32 = r1
        reg   IPV6_SubKey0_95to64 = r34
        reg   IPV6_SubKey0_127to96 = r35
      	reg   IPV6_SubKey0_159to128 = r36
      	reg   IPV6_SubKey0_191to160 = r37
      	reg   IPV6_SubKey0_223to192 = r38
      	reg   IPV6_SubKey0_255to224 = r39
        reg   IPV6_SubKey0_287to256 = r40
   
        reg   Key_63_0    = rr0
        reg   Key_127_64  = rr17
        reg   Key_191_128 = rr18
        reg   Key_255_192 = rr19
        reg   Key_319_256 = rr20
        reg   Key_383_320 = rr21
        reg   Key_447_384 = rr22
        reg   Key_511_448 = rr23

        reg   PEID = pir[6:0]

        stream	0:
        ;; execute only for PE id 0, buddy 0
         > 1. jnz THE_END, PEID
         > 1.   mov ValidContext, 1
         > 1.   load IPV6_SubKey0_31to0,   p0.129(0)
         > 1.   load IPV6_SubKey0_63to32,  p1.129(0)       
         > 1.   load IPV6_SubKey0_95to64,  p2.129(0)
	 > 1.   load IPV6_SubKey0_127to96, p3.129(0)

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         ; Pick up the VRF
	 > 1.   load IPV6_SubKey0_287to256, p0.131(0)

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

	 > 0.   nop
         > 1.   key 5.1, Key_383_320, Key_319_256, Key_255_192
         > 1.   key 5.0, Key_191_128, Key_127_64,  Key_63_0

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         > 7.   switch
   > (!E)? 1.   j NO_TSR_ERROR_s1
   >  (E)? 1.   mov tsr_ErrorFlag, 0
         > 1.   or ErrorMessage, TSR_ERROR_FLAG, ErrorMessage
         > 0.   nop
         > 1.   j  TSR_ERROR_s1
NO_TSR_ERROR_s1:
         > 1.   jz  THE_END, ValidContext
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop    
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
	 > 0. nop
	 > 0. nop
	 > 0. nop
	 > 0. nop

	     ; Send the results of the lookup back to the host 
	      > 1.   load  IPV6_SK0_ActualResults_0, p0.132(IPV6_SK0_ActualResults_0) 
	      > 1.   load  IPV6_SK0_ActualResults_1, p1.132(IPV6_SK0_ActualResults_1)
	      > 1.   load  IPV6_SK0_ActualResults_2, p2.132(IPV6_SK0_ActualResults_2)
	      > 1.   load  IPV6_SK0_ActualResults_3, p3.132(IPV6_SK0_ActualResults_3)

 
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         > 1.   j THE_END
TSR_ERROR_s1:
         > 1.   mov dcr, 1
	 > 1.   load  IPV6_SK0_ActualResults_3, p0.134(IPV6_SK0_ActualResults_3) 
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop

         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop
         > 0.   nop


	 
   
THE_END:
         > 0.   nop

