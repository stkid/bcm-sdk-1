/*
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * $Id: c3_3x40g_3xhg42.h,v 1.1.18.1 Broadcom SDK $
 */
#ifdef BCM_CALADAN3_SUPPORT

sws_config_t c3_3x40g_3xhg42_cfg = {


    /*
     * QM Config
     */
     {
        {
           15384, 11538, 7692, 11167, 3776, 1539, 6081, 4561, 
           3041, 0, 609, 8996, 6747, 4498, 7969, 900, 38
        },

        /* Queue Config */
        3, 
        3, 
        {
            {457, 343, 229, 0x3fff, 34, 34}, /* 0 */
            {457, 343, 229, 0x3fff, 34, 34},/* 1 */
            {457, 343, 229, 0x3fff, 34, 34},/* 2 */
            { 0 }, /* 3 */
            {457, 343, 229, 0x3fff, 34, 34}, /* 4 */
            { 0 }, /* 5 */
            { 0 }, /* 6 */
            { 0 }, /* 7 */
            {457, 343, 229, 0x3fff, 34, 34}, /* 8 */
            { 0 }, /* 9 */
            { 0 }, /* 10 */
            { 0 }, /* 11 */
            { 0 }, /* 12 */
            { 0 }, /* 13 */
            { 0 }, /* 14 */
            { 0 }, /* 15 */
            { 0 }, /* 16 */
            { 0 }, /* 17 */
            { 0 }, /* 18 */
            { 0 }, /* 19 */
            { 0 }, /* 20 */
            { 0 }, /* 21 */
            { 0 }, /* 22 */
            { 0 }, /* 23 */
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
        {
            {676, 507, 338, 515, 34, 34}, /* 0 */
            {676, 507, 338, 515, 34, 34}, /* 1 */
            {676, 507, 338, 515, 34, 34}, /* 2 */
            { 0 }, /* 3 */
            {676, 507, 338, 515, 34, 34}, /* 4 */
            { 0 }, /* 5 */
            { 0 }, /* 6 */
            { 0 }, /* 7 */
            {676, 507, 338, 515, 34, 34}, /* 8 */
            { 0 }, /* 9 */
            { 0 }, /* 10 */
            { 0 }, /* 11 */
            { 0 }, /* 12 */
            { 0 }, /* 13 */
            { 0 }, /* 14 */
            { 0 }, /* 15 */
            { 0 }, /* 16 */
            { 0 }, /* 17 */
            { 0 }, /* 18 */
            { 0 }, /* 19 */
            { 0 }, /* 20 */
            { 0 }, /* 21 */
            { 0 }, /* 22 */
            { 0 }, /* 23 */
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
        {256, 192, 128, 0, 64, 64},

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
                {0,0,26,7},      /* Port 0 */
                {0},    /* Port 1 */
                {0},    /* Port 2 */
                {0},    /* Port 3 */
                {4,208,26,7},    /* Port 4 */
                {0},    /* Port 5 */
                {0},    /* Port 6 */
                {0},    /* Port 7 */
                {8,416,26,7},    /* Port 8 */
                {0},    /* Port 9 */
                {0},    /* Port 10 */
                {0},    /* Port 11 */
                {0},    /* Port 12 */
                {0},    /* Port 13 */
                {0},    /* Port 14 */
                {0},    /* Port 15 */
                {0},    /* Port 16 */
                {0},    /* Port 17 */
                {0},    /* Port 18 */
                {0},    /* Port 19 */
                {0},    /* Port 20 */
                {0},    /* Port 21 */
                {0},    /* Port 22 */
                {0},    /* Port 23 */
                {0},    /* Port 24 */
                {0},    /* Port 25 */
                {0},    /* Port 26 */
                {0},    /* Port 27 */
                {0},    /* Port 28 */
                {0},    /* Port 29 */
                {0},    /* Port 30 */
                {0},    /* Port 31 */
                {0},    /* Port 32 */
                {0},    /* Port 33 */
                {0},    /* Port 34 */
                {0},    /* Port 35 */
                {0},    /* Port 36 */
                {0},    /* Port 37 */
                {0},    /* Port 38 */
                {0},    /* Port 39 */
                {0},    /* Port 40 */
                {0},    /* Port 41 */
                {0},    /* Port 42 */
                {0},    /* Port 43 */
                {0},    /* Port 44 */
                {0},    /* Port 45 */
                {0},    /* Port 46 */
                {0},    /* Port 47 */
                {48,624,4,1},    /* Port 48 */
                {49,656,4,1},    /* Port 49 */
                {50,688,4,1},    /* Port 50 */
            }
        },

        /* Client Cal */
        {
            70,
            {
              CLIENT5, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT4, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT4, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT4, CLIENT0, CLIENT0, CLIENT0, 
            },
        },

        /* Port Cal */
        {
            99,
            {
              0, 4, 8,48, 0, 4, 8, 0, 4, 8, 
              0, 4, 8, 0, 4, 8,49, 0, 4, 8, 
              0, 4, 8, 0, 4, 8, 0, 4, 8,50, 
              0, 4, 8, 0, 4, 8, 0, 4, 8, 0, 
              4, 8, 0, 4, 8, 0, 4, 8, 0, 4, 
              8, 0, 4, 8, 0, 4, 8, 0, 4, 8, 
              0, 4, 8, 0, 4, 8, 0, 4, 8, 0, 
              4, 8, 0, 4, 8, 0, 4, 8, 0, 4, 
              8, 0, 4, 8, 0, 4, 8, 0, 4, 8, 
              0, 4, 8, 0, 4, 8, 0, 4, 8,
            },
        },
    },
    /*
     * Fabric PT Config
     */
    {
        /* Fifo info */
        {
             3, 
             {
                 { 0, 0,76,20 },    /* Port 0*/
                 {0},    /* Port 1 */
                 {0},    /* Port 2 */
                 {0},    /* Port 3 */
                 { 1,208,26,7},    /* Port 4 */
                 {0},    /* Port 5 */
                 {0},    /* Port 6 */
                 {0},    /* Port 7 */
                 { 2,416,26,7},    /* Port 8 */
              }
        },

        /* Client Cal */
        {
            72,
            {
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENTX, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENTX, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENTX, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENTX, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
              CLIENT0, CLIENT0, CLIENTX, CLIENT0, CLIENT0, CLIENT0, 
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENTX,
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0,
              CLIENT0, CLIENT0, CLIENTX, CLIENT0, CLIENT0, CLIENT0,
              CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENT0, CLIENTX 
            },
        },

        /* Port Cal */
        {
            99,
            {
               0, 4, 8, -1, 0, 4, 8, 0, 4, 8,
               0, 4, 8, 0, 4, 8, -1, 0, 4, 8,
               0, 4, 8, 0, 4, 8, 0, 4, 8, -1,
               0, 4, 8, 0, 4, 8, 0, 4, 8, 0,
               4, 8, 0, 4, 8, 0, 4, 8, 0, 4,
               8, 0, 4, 8, 0, 4, 8, 0, 4, 8,
               0, 4, 8, 0, 4, 8, 0, 4, 8, 0,
               4, 8, 0, 4, 8, 0, 4, 8, 0, 4,
               8, 0, 4, 8, 0, 4, 8, 0, 4, 8,
               0, 4, 8, 0, 4, 8, 0, 4, 8,
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
        { 255, 192, 128, 0, 228 },
    },


};

#endif
