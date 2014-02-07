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
static const char *ng0 = "C:/Users/ddvergsten/Documents/GitHub/VHDLExamples/ch04/list_ch04_12_bin_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0201329658_1446275585_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3680);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 5008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3680);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0201329658_1446275585_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    int64 t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(41, ng0);

LAB3:    t1 = (t0 + 5072);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (t0 + 2888U);
    t7 = *((char **)t6);
    t8 = *((int64 *)t7);
    t9 = (t8 / 2);
    t6 = (t0 + 5072);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t6, 0U, 1, t9);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0201329658_1446275585_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    int64 t14;
    int64 t15;

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(55, ng0);
    t2 = xsi_get_transient_memory(3U);
    memset(t2, 0, 3U);
    t3 = t2;
    memset(t3, (unsigned char)2, 3U);
    t4 = (t0 + 5392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(56, ng0);

LAB6:    t2 = (t0 + 4688);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 4688);
    *((int *)t4) = 0;
    xsi_set_current_line(57, ng0);

LAB10:    t2 = (t0 + 4704);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 4704);
    *((int *)t4) = 0;
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 8502);
    t4 = (t0 + 5392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(63, ng0);

LAB14:    t2 = (t0 + 4720);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t4 = (t0 + 4720);
    *((int *)t4) = 0;
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(66, ng0);

LAB18:    t2 = (t0 + 4736);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    t4 = (t0 + 4736);
    *((int *)t4) = 0;
    xsi_set_current_line(67, ng0);

LAB22:    t2 = (t0 + 4752);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t4 = (t0 + 4752);
    *((int *)t4) = 0;
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(72, ng0);

LAB26:    t2 = (t0 + 4768);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    t4 = (t0 + 4768);
    *((int *)t4) = 0;
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 8505);
    *((int *)t2) = 1;
    t3 = (t0 + 8509);
    *((int *)t3) = 10;
    t10 = 1;
    t11 = 10;

LAB28:    if (t10 <= t11)
        goto LAB29;

LAB31:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(83, ng0);

LAB39:    t2 = (t0 + 4800);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB25:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB29:    xsi_set_current_line(80, ng0);

LAB34:    t4 = (t0 + 4784);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB30:    t2 = (t0 + 8505);
    t10 = *((int *)t2);
    t3 = (t0 + 8509);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB31;

LAB36:    t12 = (t10 + 1);
    t10 = t12;
    t4 = (t0 + 8505);
    *((int *)t4) = t10;
    goto LAB28;

LAB32:    t6 = (t0 + 4784);
    *((int *)t6) = 0;
    goto LAB30;

LAB33:    t5 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t9 == 1)
        goto LAB32;
    else
        goto LAB34;

LAB35:    goto LAB33;

LAB37:    t4 = (t0 + 4800);
    *((int *)t4) = 0;
    xsi_set_current_line(84, ng0);

LAB43:    t2 = (t0 + 4816);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB38:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB37;
    else
        goto LAB39;

LAB40:    goto LAB38;

LAB41:    t4 = (t0 + 4816);
    *((int *)t4) = 0;
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);

LAB47:    t2 = (t0 + 4832);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB42:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB41;
    else
        goto LAB43;

LAB44:    goto LAB42;

LAB45:    t4 = (t0 + 4832);
    *((int *)t4) = 0;
    xsi_set_current_line(87, ng0);

LAB51:    t2 = (t0 + 4848);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB46:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB45;
    else
        goto LAB47;

LAB48:    goto LAB46;

LAB49:    t4 = (t0 + 4848);
    *((int *)t4) = 0;
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 8513);
    *((int *)t2) = 1;
    t3 = (t0 + 8517);
    *((int *)t3) = 10;
    t10 = 1;
    t11 = 10;

LAB53:    if (t10 <= t11)
        goto LAB54;

LAB56:    xsi_set_current_line(99, ng0);

LAB64:    t2 = (t0 + 4880);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB50:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB49;
    else
        goto LAB51;

LAB52:    goto LAB50;

LAB54:    xsi_set_current_line(93, ng0);

LAB59:    t4 = (t0 + 4864);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB55:    t2 = (t0 + 8513);
    t10 = *((int *)t2);
    t3 = (t0 + 8517);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB56;

LAB61:    t12 = (t10 + 1);
    t10 = t12;
    t4 = (t0 + 8513);
    *((int *)t4) = t10;
    goto LAB53;

LAB57:    t6 = (t0 + 4864);
    *((int *)t6) = 0;
    goto LAB55;

LAB58:    t5 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t9 == 1)
        goto LAB57;
    else
        goto LAB59;

LAB60:    goto LAB58;

LAB62:    t8 = (t0 + 4880);
    *((int *)t8) = 0;
    xsi_set_current_line(100, ng0);

LAB74:    t2 = (t0 + 4896);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB63:    t3 = (t0 + 2472U);
    t4 = *((char **)t3);
    t3 = (t0 + 8521);
    t9 = 1;
    if (3U == 3U)
        goto LAB66;

LAB67:    t9 = 0;

LAB68:    if (t9 == 1)
        goto LAB62;
    else
        goto LAB64;

LAB65:    goto LAB63;

LAB66:    t13 = 0;

LAB69:    if (t13 < 3U)
        goto LAB70;
    else
        goto LAB68;

LAB70:    t6 = (t4 + t13);
    t7 = (t3 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB67;

LAB71:    t13 = (t13 + 1);
    goto LAB69;

LAB72:    t4 = (t0 + 4896);
    *((int *)t4) = 0;
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);

LAB78:    t2 = (t0 + 4912);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB72;
    else
        goto LAB74;

LAB75:    goto LAB73;

LAB76:    t3 = (t0 + 4912);
    *((int *)t3) = 0;
    xsi_set_current_line(104, ng0);

LAB82:    t2 = (t0 + 4928);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    t4 = (t0 + 4928);
    *((int *)t4) = 0;
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t14 = *((int64 *)t3);
    t15 = (4 * t14);
    t2 = (t0 + 4176);
    xsi_process_wait(t2, t15);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB81:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB80;
    else
        goto LAB82;

LAB83:    goto LAB81;

LAB84:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t14 = *((int64 *)t3);
    t15 = (4 * t14);
    t2 = (t0 + 4176);
    xsi_process_wait(t2, t15);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    xsi_set_current_line(112, ng0);
    if ((unsigned char)0 == 0)
        goto LAB92;

LAB93:    goto LAB2;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t2 = (t0 + 8524);
    xsi_report(t2, 20U, (unsigned char)3);
    goto LAB93;

}


extern void work_a_0201329658_1446275585_init()
{
	static char *pe[] = {(void *)work_a_0201329658_1446275585_p_0,(void *)work_a_0201329658_1446275585_p_1,(void *)work_a_0201329658_1446275585_p_2};
	xsi_register_didat("work_a_0201329658_1446275585", "isim/bin_counter_tb_isim_beh.exe.sim/work/a_0201329658_1446275585.didat");
	xsi_register_executes(pe);
}
