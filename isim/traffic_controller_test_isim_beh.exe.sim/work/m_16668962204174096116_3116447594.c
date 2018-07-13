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
static const char *ng0 = "/home/vajira/Desktop/CS4362_traffic_light_controller/MainController.v";



static void Always_38_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 6680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 7000);
    *((int *)t2) = 1;
    t3 = (t0 + 6712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 4248U);
    t5 = *((char **)t4);
    t4 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4888U);
    t3 = *((char **)t2);
    t2 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4728U);
    t3 = *((char **)t2);
    t2 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB2;

}


extern void work_m_16668962204174096116_3116447594_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_16668962204174096116_3116447594", "isim/traffic_controller_test_isim_beh.exe.sim/work/m_16668962204174096116_3116447594.didat");
	xsi_register_executes(pe);
}
