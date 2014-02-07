/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ddvergsten/Documents/GitHub/VHDLExamples/ch04/list_ch04_10_bin_u.vhd";
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );


static void work_a_2381401345_1446275585_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;

LAB0:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5384);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(24, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t5 = t1;
    memset(t5, (unsigned char)2, 3U);
    t6 = (t0 + 5528);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2792U);
    t6 = *((char **)t2);
    t2 = (t0 + 5528);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 3U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

}

static void work_a_2381401345_1446275585_p_1(char *t0)
{
    char t28[16];
    char t48[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned char t40;
    char *t41;
    char *t42;
    unsigned char t43;
    unsigned char t44;
    char *t45;
    unsigned char t46;
    unsigned char t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned char t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:    t11 = (t0 + 1512U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB5;

LAB6:    t21 = (t0 + 1672U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    if (t24 == 1)
        goto LAB9;

LAB10:    t20 = (unsigned char)0;

LAB11:    if (t20 != 0)
        goto LAB7;

LAB8:    t41 = (t0 + 1672U);
    t42 = *((char **)t41);
    t43 = *((unsigned char *)t42);
    t44 = (t43 == (unsigned char)3);
    if (t44 == 1)
        goto LAB16;

LAB17:    t40 = (unsigned char)0;

LAB18:    if (t40 != 0)
        goto LAB14;

LAB15:
LAB21:    t60 = (t0 + 2632U);
    t61 = *((char **)t60);
    t60 = (t0 + 5592);
    t62 = (t60 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memcpy(t65, t61, 3U);
    xsi_driver_first_trans_fast(t60);

LAB2:    t66 = (t0 + 5400);
    *((int *)t66) = 1;

LAB1:    return;
LAB3:    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t5 = t1;
    memset(t5, (unsigned char)2, 3U);
    t6 = (t0 + 5592);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB5:    t11 = (t0 + 1992U);
    t15 = *((char **)t11);
    t11 = (t0 + 5592);
    t16 = (t11 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 3U);
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB7:    t21 = (t0 + 2632U);
    t29 = *((char **)t21);
    t21 = (t0 + 8760U);
    t30 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t28, t29, t21, 1);
    t31 = (t28 + 12U);
    t32 = *((unsigned int *)t31);
    t33 = (1U * t32);
    t34 = (3U != t33);
    if (t34 == 1)
        goto LAB12;

LAB13:    t35 = (t0 + 5592);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t30, 3U);
    xsi_driver_first_trans_fast(t35);
    goto LAB2;

LAB9:    t21 = (t0 + 1832U);
    t25 = *((char **)t21);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t20 = t27;
    goto LAB11;

LAB12:    xsi_size_not_matching(3U, t33, 0);
    goto LAB13;

LAB14:    t41 = (t0 + 2632U);
    t49 = *((char **)t41);
    t41 = (t0 + 8760U);
    t50 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t48, t49, t41, 1);
    t51 = (t48 + 12U);
    t52 = *((unsigned int *)t51);
    t53 = (1U * t52);
    t54 = (3U != t53);
    if (t54 == 1)
        goto LAB19;

LAB20:    t55 = (t0 + 5592);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memcpy(t59, t50, 3U);
    xsi_driver_first_trans_fast(t55);
    goto LAB2;

LAB16:    t41 = (t0 + 1832U);
    t45 = *((char **)t41);
    t46 = *((unsigned char *)t45);
    t47 = (t46 == (unsigned char)2);
    t40 = t47;
    goto LAB18;

LAB19:    xsi_size_not_matching(3U, t53, 0);
    goto LAB20;

LAB22:    goto LAB2;

}

static void work_a_2381401345_1446275585_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(36, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5656);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 3U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5416);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2381401345_1446275585_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8760U);
    t3 = xsi_vhdl_pow(2, 3);
    t4 = (t3 - 1);
    t5 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, t4);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 5720);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 5432);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 5720);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2381401345_1446275585_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8760U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 0);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 5784);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 5448);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 5784);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_2381401345_1446275585_init()
{
	static char *pe[] = {(void *)work_a_2381401345_1446275585_p_0,(void *)work_a_2381401345_1446275585_p_1,(void *)work_a_2381401345_1446275585_p_2,(void *)work_a_2381401345_1446275585_p_3,(void *)work_a_2381401345_1446275585_p_4};
	xsi_register_didat("work_a_2381401345_1446275585", "isim/bin_counter_tb_isim_beh.exe.sim/work/a_2381401345_1446275585.didat");
	xsi_register_executes(pe);
}
