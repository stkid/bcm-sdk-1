
/*
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * $Id: c3_4x10g_20x1g_1xhg127_cfg ,v 1.1.2.1 Broadcom SDK $
 */
#ifdef BCM_CALADAN3_SUPPORT

sws_config_t c3_4x10g_20x1g_1xhg127_cfg = {


    /*
     * QM Config
     */
    {
        /* Buffer Thresholds */
        {
            15384, 11538, 7692, 11291, 3728, 1539, 3216, 2412, 
            1608, 0, 322, 11861, 8896, 5931, 10616, 1187, 38
        },

        /* Queue Config */
        24,
        24,
        {
            {109, 82, 55, 0x3fff, 26, 26}, /* 0 GE0 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 1  .  */
            {109, 82, 55, 0x3fff, 26, 26}, /* 2  .  */
            {109, 82, 55, 0x3fff, 26, 26}, /* 3 GE3 */

            {0, 0, 0, 0, 0, 0}, /* 4 Not Used */
            {0, 0, 0, 0, 0, 0}, /* 5 Not Used */
            {0, 0, 0, 0, 0, 0}, /* 6 Not Used */
            {0, 0, 0, 0, 0, 0}, /* 7 Not Used */

            {256, 153, 102, 0x3fff, 68, 68}, /* 8  XE0 */ 
            {256, 153, 102, 0x3fff, 68, 68}, /* 9   .  */ 
            {256, 153, 102, 0x3fff, 68, 68}, /* 10  .  */
            {256, 153, 102, 0x3fff, 68, 68}, /* 11 XE3 */

            {0, 0, 0, 0, 0, 0}, /* 12 */
            {0, 0, 0, 0, 0, 0}, /* 13 */
            {0, 0, 0, 0, 0, 0}, /* 14 */
            {0, 0, 0, 0, 0, 0}, /* 15 */

            {109, 82, 55, 0x3fff, 26, 26}, /* GE4 16 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 17 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 18 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 19 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 20 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 21 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 22 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 23 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 24 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 25 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 26 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 27 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 28 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 29 */
            {109, 82, 55, 0x3fff, 26, 26}, /* 30 */
            {109, 82, 55, 0x3fff, 26, 26}, /* GE19 31 */

            { 0 }, /* 32 */
            { 0 }, /* 33 */
            { 0 }, /* 34 */
            { 0 }, /* 35 */
            { 0 }, /* 36 */
            { 0 }, /* 37 */
            { 0 }, /* 38 */
            { 0 }, /* 39 */
            { 0 }, /* 40 */
            { 0 }, /* 41 */
            { 0 }, /* 42 */
            { 0 }, /* 43 */
            { 0 }, /* 44 */
            { 0 }, /* 45 */
            { 0 }, /* 46 */
            { 0 }, /* 47 */
            { 0 }, /* 48 */
            { 0 }, /* 49 */
            { 0 }, /* 50 */
            { 0 }, /* 51 */
            { 0 }, /* 52 */
            { 0 }, /* 53 */
            { 0 }, /* 54 */
            { 0 }, /* 55 */
            { 0 }, /* 56 */
            { 0 }, /* 57 */
            { 0 }, /* 58 */
            { 0 }, /* 59 */
            { 0 }, /* 60 */
            { 0 }, /* 61 */
            { 0 }, /* 62 */
            { 0 }, /* 63 */
        },
        {
            {459, 345, 230, 122, 24, 24}, /* 0 */
            {459, 345, 230, 122, 24, 24}, /* 1 */
            {459, 345, 230, 122, 24, 24}, /* 2 */
            {459, 345, 230, 122, 24, 24}, /* 3 */
            {638, 479, 319, 229, 49, 49}, /* 4 */
            {638, 479, 319, 229, 49, 49}, /* 5 */
            {638, 479, 319, 229, 49, 49}, /* 6 */
            {638, 479, 319, 229, 49, 49}, /* 7 */
            {459, 345, 230, 122, 24, 24}, /* 8 */
            {459, 345, 230, 122, 24, 24}, /* 9 */
            {459, 345, 230, 122, 24, 24}, /* 10 */
            {459, 345, 230, 122, 24, 24}, /* 11 */
            {459, 345, 230, 122, 24, 24}, /* 12 */
            {459, 345, 230, 122, 24, 24}, /* 13 */
            {459, 345, 230, 122, 24, 24}, /* 14 */
            {459, 345, 230, 122, 24, 24}, /* 15 */
            {459, 345, 230, 122, 24, 24}, /* 16 */
            {459, 345, 230, 122, 24, 24}, /* 17 */
            {459, 345, 230, 122, 24, 24}, /* 18 */
            {459, 345, 230, 122, 24, 24}, /* 19 */
            {459, 345, 230, 122, 24, 24}, /* 20 */
            {459, 345, 230, 122, 24, 24}, /* 21 */
            {459, 345, 230, 122, 24, 24}, /* 22 */
            {459, 345, 230, 122, 24, 24}, /* 23 */

            { 0 }, /* 24 */
            { 0 }, /* 25 */
            { 0 }, /* 26 */
            { 0 }, /* 27 */
            { 0 }, /* 28 */
            { 0 }, /* 29 */
            { 0 }, /* 30 */
            { 0 }, /* 31 */
            { 0 }, /* 32 */
            { 0 }, /* 33 */
            { 0 }, /* 34 */
            { 0 }, /* 35 */
            { 0 }, /* 36 */
            { 0 }, /* 37 */
            { 0 }, /* 38 */
            { 0 }, /* 39 */
            { 0 }, /* 40 */
            { 0 }, /* 41 */
            { 0 }, /* 42 */
            { 0 }, /* 43 */
            { 0 }, /* 44 */
            { 0 }, /* 45 */
            { 0 }, /* 46 */
            { 0 }, /* 47 */
            { 0 }, /* 48 */
            { 0 }, /* 49 */
            { 0 }, /* 50 */
            { 0 }, /* 51 */
            { 0 }, /* 52 */
            { 0 }, /* 53 */
            { 0 }, /* 54 */
            { 0 }, /* 55 */
            { 0 }, /* 56 */
            { 0 }, /* 57 */
            { 0 }, /* 58 */
            { 0 }, /* 59 */
            { 0 }, /* 60 */
            { 0 }, /* 61 */
            { 0 }, /* 62 */
            { 0 }, /* 63 */
        }, 

        /* Cmic queues */
        {258, 194, 129, 0, 64, 64},

        /* XL queues */
        { {256, 192, 128, 0, 64, 64}, {256, 192, 128, 0, 64, 64} },

        /* Ingress Redirection Queues */
        { {128, 96, 64, 0, 0, 64}, {128, 96, 64, 0, 0, 64} },

        /* Egress Redirection Queues */
        { {128, 96, 64, 0, 0, 64}, {128, 96, 64, 0, 0, 64} },

        /* Ingress Bubble Queues */
        {128, 96, 64, 0, 0, 64},

        /* Egress Bubble Queues */
        {128, 96, 64, 0, 0, 64},

    },

    /*
     * Line PT Config
     */
    {
        /* Fifo info */
        {
            51,
            {
                {0,0,2,1},    /* Port 0 CL0/XMAC0/GE0 */  
                {1,16,2,1},   /* Port 1 CL0/XMAC0/GE1 */  
                {2,32,2,1},   /* Port 2 CL0/XMAC0/GE2 */  
                {3,48,2,1},   /* Port 3 CL0/XMAC0/GE3 */  

                {4,0,0,0},   /* Port 4 */  
                {5,0,0,0},   /* Port 5 */  
                {6,0,0,0},   /* Port 6 */  
                {7,0,0,0},   /* Port 7 */  

                {8,64,8,2},   /* Port 8   CL0/XMAC2/XE0 */  
                {9,128,8,2},  /* Port 9   CL0/XMAC2/XE1 */  
                {10,192,8,2},  /* Port 10 CL0/XMAC2/XE2 */
                {11,256,8,2},  /* Port 11 CL0/XMAC2/XE3 */

                {12,0,0,0},  /* Port 12 Not Used */
                {13,0,0,0},  /* Port 13 . */
                {14,0,0,0},  /* Port 14 . */
                {15,0,0,0},  /* Port 15 Not Used */

                {16,320,2,1},  /* Port 16 XT0 16..23 */
                {17,336,2,1},  /* Port 17 */
                {18,352,2,1},  /* Port 18 */
                {19,368,2,1},  /* Port 19 */
                {20,384,2,1},  /* Port 20 */
                {21,400,2,1},  /* Port 21 */
                {22,416,2,1},  /* Port 22 */
                {23,432,2,1},  /* Port 23 */

                {24,448,2,1},  /* Port 24 XT1 24..31 */
                {25,464,2,1},  /* Port 25 */
                {26,480,2,1},  /* Port 26 */
                {27,496,2,1},  /* Port 27 */
                {28,512,2,1},  /* Port 28 */
                {29,528,2,1},  /* Port 29 */
                {30,544,2,1},  /* Port 30 */
                {31,560,2,1},  /* Port 31 */

                {32,0,0,0},    /* Port 32 Not Used */
                {33,0,0,0},    /* Port 33 . */
                {34,0,0,0},    /* Port 34 . */
                {35,0,0,0},    /* Port 35 . */
                {36,0,0,0},    /* Port 36 . */
                {37,0,0,0},    /* Port 37 . */
                {38,0,0,0},    /* Port 38 . */
                {39,0,0,0},    /* Port 39 . */
                {40,0,0,0},    /* Port 40 . */
                {41,0,0,0},    /* Port 41 . */
                {42,0,0,0},    /* Port 42 . */
                {43,0,0,0},    /* Port 43 . */
                {44,0,0,0},    /* Port 44 . */
                {45,0,0,0},    /* Port 45 . */
                {46,0,0,0},    /* Port 46 . */
                {47,0,0,0},    /* Port 47 Not Used */

                {48,768,2,1},    /* Port 48 XLPORT */
                {49,784,2,1},    /* Port 49 XLPORT */
                {50,800,2,1},    /* Port 50 CMIC */
            }
        },

        /* Client Cal */
        {
            70,
            {
                CLIENT1, CLIENT0, CLIENT0, CLIENT2,
                CLIENT0, CLIENT0, CLIENT0, CLIENT1,
                CLIENT0, CLIENT0, CLIENT2, CLIENT0,
                CLIENT0, CLIENT0, CLIENT1, CLIENT0,
                CLIENT0, CLIENT2, CLIENT0, CLIENT4,
                CLIENT0, CLIENT1, CLIENT0, CLIENT0,
                CLIENT2, CLIENT0, CLIENT0, CLIENT0,
                CLIENT1, CLIENT0, CLIENT0, CLIENT2,
                CLIENT0, CLIENT0, CLIENT0, CLIENT1,
                CLIENT0, CLIENT0, CLIENT2, CLIENT0,
                CLIENT5, CLIENT0, CLIENT1, CLIENT0,
                CLIENT0, CLIENT2, CLIENT0, CLIENT0,
                CLIENT0, CLIENT1, CLIENT0, CLIENT0,
                CLIENT2, CLIENT0, CLIENT0, CLIENT0,
                CLIENT1, CLIENT0, CLIENT0, CLIENT2,
                CLIENT0, CLIENT4, CLIENT0, CLIENT1,
                CLIENT0, CLIENT0, CLIENT2, CLIENT0,
                CLIENT0, CLIENT0,
            },
        },


        /* Port Cal */
        {
            75,
            {
                8, 9, 10, 11, 0, 1, 2, 3, 16, 17,
                8, 9, 10, 11, 18, 19, 20, 21, 22,
                23, 8, 9, 10, 11, 24, 25, 26, 27,
                28, 29, 8, 9, 10, 11, 30, 31, 48,
                49, 50, 8, 9, 10, 11, 0, 1, 2,
                3, 16, 17, 8, 9, 10, 11, 18, 19,
                20, 21, 22, 23, 8, 9, 10, 11, 24,
                25, 26, 27, 28, 29, 8, 9, 10, 11,
                30, 31
            },
        },
    },
    /*
     * Fabric PT Config
     */
    {
        /* Fifo info */
        {
             1, 
             {
                 { 0,0,76,20 },    /* Port 0*/
              }
        },

        /* Client Cal */
        {
            76,
            {
                 CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
                 CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
                 CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
                 CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
                 CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
                 CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
                 CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
                 CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
                 CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
                 CLIENT0, CLIENT0, CLIENT0, CLIENT0,
            },
        },

        /* Port Cal */
        {
            108,
            {
              0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
              0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
              0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
              0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
              0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
              0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
              0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
            },
        },
    },

    /*
     * Line PR config
     */
    {

        /* Rx buf config */
        {
            0,
            {
                {0, 0, 0} 
            },
        },

        /* IDP Thresholds */
        { 255, 192, 128, 0, 0 },
    },

    /*
     * Fabric PR config
     */
    {

        /* Rx buf config */
        {
            0,
            {
                {0, 0, 0}
            }
        },

        /* IDP Thresholds */
        { 255, 192, 128, 0, 196 },
    },




};

#endif
