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
static const char *ng0 = "C:/FPGA_PROJECTS/Computer/ControlUnit.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};



static void Cont_46_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 5920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    t22 = (t0 + 6848);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t7 + 4);
    t30 = *((unsigned int *)t7);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 6736);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_48_1(char *t0)
{
    char t9[8];
    char t32[8];
    char t36[8];
    char t43[8];
    char t81[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;

LAB0:    t1 = (t0 + 6168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6752);
    *((int *)t2) = 1;
    t3 = (t0 + 6200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 4840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB16;

LAB13:    if (t20 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t9) = 1;

LAB16:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB23;

LAB20:    if (t20 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t9) = 1;

LAB23:    memset(t32, 0, 8);
    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t10) != 0)
        goto LAB26;

LAB27:    t24 = (t32 + 4);
    t33 = *((unsigned int *)t32);
    t34 = *((unsigned int *)t24);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB28;

LAB29:    memcpy(t43, t32, 8);

LAB30:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB59;

LAB56:    if (t20 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t9) = 1;

LAB59:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1016);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB67;

LAB64:    if (t20 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t9) = 1;

LAB67:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1152);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB75;

LAB72:    if (t20 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t9) = 1;

LAB75:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB83;

LAB80:    if (t20 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t9) = 1;

LAB83:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1424);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB91;

LAB88:    if (t20 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t9) = 1;

LAB91:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1560);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB99;

LAB96:    if (t20 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t9) = 1;

LAB99:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1696);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB107;

LAB104:    if (t20 != 0)
        goto LAB106;

LAB105:    *((unsigned int *)t9) = 1;

LAB107:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1832);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB115;

LAB112:    if (t20 != 0)
        goto LAB114;

LAB113:    *((unsigned int *)t9) = 1;

LAB115:    memset(t32, 0, 8);
    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t10) != 0)
        goto LAB118;

LAB119:    t24 = (t32 + 4);
    t33 = *((unsigned int *)t32);
    t34 = *((unsigned int *)t24);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB120;

LAB121:    memcpy(t43, t32, 8);

LAB122:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB130;

LAB131:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1968);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB137;

LAB134:    if (t20 != 0)
        goto LAB136;

LAB135:    *((unsigned int *)t9) = 1;

LAB137:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB138;

LAB139:    xsi_set_current_line(133, ng0);

LAB142:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);

LAB140:
LAB132:
LAB110:
LAB102:
LAB94:
LAB86:
LAB78:
LAB70:
LAB62:
LAB40:
LAB19:
LAB12:    goto LAB2;

LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(52, ng0);
    t30 = (t0 + 744);
    t31 = *((char **)t30);
    t30 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 5, 0LL);
    goto LAB12;

LAB15:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(55, ng0);
    t23 = (t0 + 744);
    t24 = *((char **)t23);
    t23 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 5, 0LL);
    goto LAB19;

LAB22:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t32) = 1;
    goto LAB27;

LAB26:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB27;

LAB28:    t30 = (t0 + 3000U);
    t31 = *((char **)t30);
    memset(t36, 0, 8);
    t30 = (t31 + 4);
    t37 = *((unsigned int *)t30);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t30) != 0)
        goto LAB33;

LAB34:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t36);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t32 + 4);
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t36) = 1;
    goto LAB34;

LAB33:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB34;

LAB35:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t32 + 4);
    t58 = (t36 + 4);
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB37;

LAB38:    xsi_set_current_line(58, ng0);

LAB41:    xsi_set_current_line(60, ng0);
    t82 = (t0 + 2840U);
    t83 = *((char **)t82);
    memset(t81, 0, 8);
    t82 = (t81 + 4);
    t84 = (t83 + 4);
    t85 = *((unsigned int *)t83);
    t86 = (t85 >> 12);
    *((unsigned int *)t81) = t86;
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 12);
    *((unsigned int *)t82) = t88;
    t89 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t89 & 15U);
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & 15U);
    t91 = ((char*)((ng1)));
    memset(t92, 0, 8);
    t93 = (t81 + 4);
    t94 = (t91 + 4);
    t95 = *((unsigned int *)t81);
    t96 = *((unsigned int *)t91);
    t97 = (t95 ^ t96);
    t98 = *((unsigned int *)t93);
    t99 = *((unsigned int *)t94);
    t100 = (t98 ^ t99);
    t101 = (t97 | t100);
    t102 = *((unsigned int *)t93);
    t103 = *((unsigned int *)t94);
    t104 = (t102 | t103);
    t105 = (~(t104));
    t106 = (t101 & t105);
    if (t106 != 0)
        goto LAB45;

LAB42:    if (t104 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t92) = 1;

LAB45:    t108 = (t92 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t92);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2840U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 12);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 12);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    t5 = ((char*)((ng2)));
    memset(t32, 0, 8);
    t6 = (t9 + 4);
    t7 = (t5 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 ^ t21);
    t25 = (t19 | t22);
    t26 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t7);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t33 = (t25 & t29);
    if (t33 != 0)
        goto LAB52;

LAB49:    if (t28 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t32) = 1;

LAB52:    t10 = (t32 + 4);
    t34 = *((unsigned int *)t10);
    t35 = (~(t34));
    t37 = *((unsigned int *)t32);
    t38 = (t37 & t35);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2840U);
    t3 = *((char **)t2);
    t2 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    goto LAB40;

LAB44:    t107 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(61, ng0);
    t114 = (t0 + 880);
    t115 = *((char **)t114);
    t114 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t114, t115, 0, 0, 5, 0LL);
    goto LAB48;

LAB51:    t8 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(64, ng0);
    t23 = (t0 + 1696);
    t24 = *((char **)t23);
    t23 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 5, 0LL);
    goto LAB55;

LAB58:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(71, ng0);

LAB63:    xsi_set_current_line(73, ng0);
    t23 = (t0 + 1016);
    t24 = *((char **)t23);
    t23 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 5, 0LL);
    goto LAB62;

LAB66:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(78, ng0);

LAB71:    xsi_set_current_line(80, ng0);
    t23 = (t0 + 1152);
    t24 = *((char **)t23);
    t23 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 5, 0LL);
    goto LAB70;

LAB74:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(85, ng0);

LAB79:    xsi_set_current_line(87, ng0);
    t23 = (t0 + 1288);
    t24 = *((char **)t23);
    t23 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 5, 0LL);
    goto LAB78;

LAB82:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(92, ng0);

LAB87:    xsi_set_current_line(94, ng0);
    t23 = (t0 + 1424);
    t24 = *((char **)t23);
    t23 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 5, 0LL);
    goto LAB86;

LAB90:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(99, ng0);

LAB95:    xsi_set_current_line(101, ng0);
    t23 = (t0 + 1560);
    t24 = *((char **)t23);
    t23 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 5, 0LL);
    goto LAB94;

LAB98:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB99;

LAB100:    xsi_set_current_line(106, ng0);

LAB103:    xsi_set_current_line(108, ng0);
    t23 = (t0 + 744);
    t24 = *((char **)t23);
    t23 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 5, 0LL);
    goto LAB102;

LAB106:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB107;

LAB108:    xsi_set_current_line(113, ng0);

LAB111:    xsi_set_current_line(115, ng0);
    t23 = (t0 + 1832);
    t24 = *((char **)t23);
    t23 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 5, 0LL);
    goto LAB110;

LAB114:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB115;

LAB116:    *((unsigned int *)t32) = 1;
    goto LAB119;

LAB118:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB119;

LAB120:    t30 = (t0 + 3000U);
    t31 = *((char **)t30);
    memset(t36, 0, 8);
    t30 = (t31 + 4);
    t37 = *((unsigned int *)t30);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t30) != 0)
        goto LAB125;

LAB126:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t36);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t32 + 4);
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB127;

LAB128:
LAB129:    goto LAB122;

LAB123:    *((unsigned int *)t36) = 1;
    goto LAB126;

LAB125:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB126;

LAB127:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t32 + 4);
    t58 = (t36 + 4);
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB129;

LAB130:    xsi_set_current_line(120, ng0);

LAB133:    xsi_set_current_line(122, ng0);
    t82 = (t0 + 1968);
    t83 = *((char **)t82);
    t82 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t82, t83, 0, 0, 5, 0LL);
    goto LAB132;

LAB136:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB137;

LAB138:    xsi_set_current_line(127, ng0);

LAB141:    xsi_set_current_line(129, ng0);
    t23 = (t0 + 744);
    t24 = *((char **)t23);
    t23 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 5, 0LL);
    goto LAB140;

}

static void Always_141_2(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    t1 = (t0 + 6416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 6768);
    *((int *)t2) = 1;
    t3 = (t0 + 6448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(142, ng0);

LAB5:    xsi_set_current_line(144, ng0);
    t4 = (t0 + 4840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB27;

LAB28:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(147, ng0);

LAB32:    xsi_set_current_line(149, ng0);
    t7 = ((char*)((ng3)));
    t10 = (t0 + 3560);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB9:    xsi_set_current_line(161, ng0);

LAB33:    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB11:    xsi_set_current_line(175, ng0);

LAB34:    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB13:    xsi_set_current_line(189, ng0);

LAB35:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 8);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 8);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 15U);
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 4);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB15:    xsi_set_current_line(203, ng0);

LAB36:    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 8);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 8);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 15U);
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 4);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB17:    xsi_set_current_line(217, ng0);

LAB37:    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 4);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 4);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 15U);
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 4);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB19:    xsi_set_current_line(231, ng0);

LAB38:    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 4);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 4);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 15U);
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 4);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(236, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 1);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 1);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 7U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 7U);
    t8 = (t0 + 4200);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 3);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB21:    xsi_set_current_line(245, ng0);

LAB39:    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(248, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 8);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 8);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 15U);
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 4);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB23:    xsi_set_current_line(259, ng0);

LAB40:    xsi_set_current_line(261, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(262, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 8);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 8);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 15U);
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 4);
    xsi_set_current_line(263, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(264, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(266, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB25:    xsi_set_current_line(273, ng0);

LAB41:    xsi_set_current_line(275, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(277, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(278, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(279, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(280, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(281, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(282, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB27:    xsi_set_current_line(287, ng0);

LAB42:    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(290, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 8);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 8);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 15U);
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 4);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(293, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(294, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(296, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB29:    xsi_set_current_line(301, ng0);

LAB43:    xsi_set_current_line(303, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(304, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 8);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 8);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 15U);
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 4);
    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

}


extern void work_m_00000000004151040450_1938225339_init()
{
	static char *pe[] = {(void *)Cont_46_0,(void *)Always_48_1,(void *)Always_141_2};
	xsi_register_didat("work_m_00000000004151040450_1938225339", "isim/tst_computer_isim_beh.exe.sim/work/m_00000000004151040450_1938225339.didat");
	xsi_register_executes(pe);
}
