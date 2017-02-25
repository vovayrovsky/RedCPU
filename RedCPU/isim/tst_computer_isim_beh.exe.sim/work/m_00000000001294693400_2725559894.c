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
static const char *ng0 = "C:/FPGA_PROJECTS/Computer/alu.v";



static void Always_22_0(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 2592U);
    t5 = *((char **)t4);

LAB6:    t4 = (t0 + 608);
    t6 = *((char **)t4);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 2272U);
    t8 = *((char **)t4);
    t4 = (t0 + 2432U);
    t9 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 17, t8, 16, t9, 16);
    t4 = (t0 + 2992);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 17);
    goto LAB23;

LAB9:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2272U);
    t4 = *((char **)t2);
    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 17, t4, 16, t6, 16);
    t2 = (t0 + 2992);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 17);
    goto LAB23;

LAB11:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2272U);
    t4 = *((char **)t2);
    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t2 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB24;

LAB25:
LAB26:    t39 = (t0 + 2992);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 17);
    goto LAB23;

LAB13:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2272U);
    t4 = *((char **)t2);
    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t2 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB27;

LAB28:
LAB29:    t39 = (t0 + 2992);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 17);
    goto LAB23;

LAB15:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2272U);
    t4 = *((char **)t2);
    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t2 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB30;

LAB31:
LAB32:    t21 = (t0 + 2992);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 17);
    goto LAB23;

LAB17:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2272U);
    t4 = *((char **)t2);
    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 17, t4, 16, t6, 16);
    t2 = (t0 + 2992);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 17);
    goto LAB23;

LAB19:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2272U);
    t4 = *((char **)t2);
    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 17, t4, 16, t6, 16);
    t2 = (t0 + 2992);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 17);
    goto LAB23;

LAB21:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2272U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB34;

LAB33:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 131071U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 131071U);
    t8 = (t0 + 2992);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 17);
    goto LAB23;

LAB24:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB26;

LAB27:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB29;

LAB30:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB32;

LAB34:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t2);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t2) = (t15 | t16);
    goto LAB33;

}


extern void work_m_00000000001294693400_2725559894_init()
{
	static char *pe[] = {(void *)Always_22_0};
	xsi_register_didat("work_m_00000000001294693400_2725559894", "isim/tst_computer_isim_beh.exe.sim/work/m_00000000001294693400_2725559894.didat");
	xsi_register_executes(pe);
}
