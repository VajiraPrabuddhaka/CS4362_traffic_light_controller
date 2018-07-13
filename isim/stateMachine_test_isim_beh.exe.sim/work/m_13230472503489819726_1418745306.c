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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/vajira/Desktop/CS4362_traffic_light_controller/stateMachine.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};



static void Always_70_0(char *t0)
{
    char t13[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    int t61;

LAB0:    t1 = (t0 + 7368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 7688);
    *((int *)t2) = 1;
    t3 = (t0 + 7400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4696);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 6456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3656U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t2) != 0)
        goto LAB12;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB14;

LAB15:    memcpy(t25, t13, 8);

LAB16:    t53 = (t25 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t25);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4296U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t2) == 0)
        goto LAB28;

LAB30:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB31:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB33;

LAB32:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 1U);
    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t26 = (~(t23));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t32 = (t28 != 0);
    if (t32 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(163, ng0);

LAB64:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 6296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB65:    t5 = (t0 + 744);
    t11 = *((char **)t5);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t11, 32);
    if (t44 == 1)
        goto LAB66;

LAB67:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB68;

LAB69:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB70;

LAB71:    t2 = (t0 + 1152);
    t5 = *((char **)t2);
    t48 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t48 == 1)
        goto LAB72;

LAB73:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB74;

LAB75:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB76;

LAB77:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB78;

LAB79:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB80;

LAB81:
LAB83:
LAB82:    xsi_set_current_line(240, ng0);

LAB107:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB84:
LAB36:
LAB26:    goto LAB2;

LAB6:    xsi_set_current_line(78, ng0);

LAB9:    xsi_set_current_line(79, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4696);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t11 = (t0 + 4136U);
    t12 = *((char **)t11);
    memset(t18, 0, 8);
    t11 = (t12 + 4);
    t19 = *((unsigned int *)t11);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t11) != 0)
        goto LAB19;

LAB20:    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    *((unsigned int *)t25) = t28;
    t29 = (t13 + 4);
    t30 = (t18 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t18) = 1;
    goto LAB20;

LAB19:    t24 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB21:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t13 + 4);
    t40 = (t18 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t13);
    t44 = (t43 & t42);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t18);
    t48 = (t47 & t46);
    t49 = (~(t44));
    t50 = (~(t48));
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t49);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t50);
    goto LAB23;

LAB24:    xsi_set_current_line(84, ng0);

LAB27:    xsi_set_current_line(86, ng0);
    t59 = ((char*)((ng2)));
    t60 = (t0 + 6456);
    xsi_vlogvar_wait_assign_value(t60, t59, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB26;

LAB28:    *((unsigned int *)t13) = 1;
    goto LAB31;

LAB33:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t19 | t20);
    goto LAB32;

LAB34:    xsi_set_current_line(91, ng0);

LAB37:    xsi_set_current_line(94, ng0);
    t24 = (t0 + 6296);
    t29 = (t24 + 56U);
    t30 = *((char **)t29);

LAB38:    t31 = (t0 + 744);
    t39 = *((char **)t31);
    t44 = xsi_vlog_unsigned_case_compare(t30, 3, t39, 32);
    if (t44 == 1)
        goto LAB39;

LAB40:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t30, 3, t3, 32);
    if (t44 == 1)
        goto LAB41;

LAB42:    t2 = (t0 + 1016);
    t4 = *((char **)t2);
    t48 = xsi_vlog_unsigned_case_compare(t30, 3, t4, 32);
    if (t48 == 1)
        goto LAB43;

LAB44:    t2 = (t0 + 1152);
    t5 = *((char **)t2);
    t61 = xsi_vlog_unsigned_case_compare(t30, 3, t5, 32);
    if (t61 == 1)
        goto LAB45;

LAB46:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t30, 3, t3, 32);
    if (t44 == 1)
        goto LAB47;

LAB48:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t30, 3, t3, 32);
    if (t44 == 1)
        goto LAB49;

LAB50:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t30, 3, t3, 32);
    if (t44 == 1)
        goto LAB51;

LAB52:    t2 = (t0 + 1696);
    t4 = *((char **)t2);
    t48 = xsi_vlog_unsigned_case_compare(t30, 3, t4, 32);
    if (t48 == 1)
        goto LAB53;

LAB54:
LAB56:
LAB55:    xsi_set_current_line(151, ng0);

LAB63:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB57:    goto LAB36;

LAB39:    xsi_set_current_line(96, ng0);

LAB58:    xsi_set_current_line(97, ng0);
    t31 = ((char*)((ng1)));
    t40 = (t0 + 5176);
    xsi_vlogvar_wait_assign_value(t40, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB57;

LAB41:    goto LAB39;

LAB43:    goto LAB39;

LAB45:    xsi_set_current_line(107, ng0);

LAB59:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t11 = (t0 + 5176);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB57;

LAB47:    xsi_set_current_line(118, ng0);

LAB60:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5176);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB57;

LAB49:    xsi_set_current_line(129, ng0);

LAB61:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5176);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB57;

LAB51:    goto LAB49;

LAB53:    xsi_set_current_line(140, ng0);

LAB62:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5176);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB57;

LAB66:    xsi_set_current_line(170, ng0);

LAB85:    xsi_set_current_line(171, ng0);
    t5 = (t0 + 3816U);
    t12 = *((char **)t5);
    t5 = (t12 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(177, ng0);

LAB90:    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB88:    goto LAB84;

LAB68:    xsi_set_current_line(184, ng0);

LAB91:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4856);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB84;

LAB70:    goto LAB68;

LAB72:    xsi_set_current_line(190, ng0);

LAB92:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 3976U);
    t11 = *((char **)t2);
    t2 = (t11 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(197, ng0);

LAB97:    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB95:    goto LAB84;

LAB74:    xsi_set_current_line(204, ng0);

LAB98:    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4856);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB84;

LAB76:    xsi_set_current_line(213, ng0);

LAB99:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 3816U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(220, ng0);

LAB104:    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB102:    goto LAB84;

LAB78:    xsi_set_current_line(228, ng0);

LAB105:    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4856);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB84;

LAB80:    xsi_set_current_line(234, ng0);

LAB106:    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4856);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB84;

LAB86:    xsi_set_current_line(172, ng0);

LAB89:    xsi_set_current_line(173, ng0);
    t24 = ((char*)((ng4)));
    t29 = (t0 + 4856);
    xsi_vlogvar_wait_assign_value(t29, t24, 0, 0, 2, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB88;

LAB93:    xsi_set_current_line(192, ng0);

LAB96:    xsi_set_current_line(193, ng0);
    t12 = ((char*)((ng4)));
    t24 = (t0 + 4856);
    xsi_vlogvar_wait_assign_value(t24, t12, 0, 0, 2, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB95;

LAB100:    xsi_set_current_line(215, ng0);

LAB103:    xsi_set_current_line(216, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 4856);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 6296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB102;

}


extern void work_m_13230472503489819726_1418745306_init()
{
	static char *pe[] = {(void *)Always_70_0};
	xsi_register_didat("work_m_13230472503489819726_1418745306", "isim/stateMachine_test_isim_beh.exe.sim/work/m_13230472503489819726_1418745306.didat");
	xsi_register_executes(pe);
}
