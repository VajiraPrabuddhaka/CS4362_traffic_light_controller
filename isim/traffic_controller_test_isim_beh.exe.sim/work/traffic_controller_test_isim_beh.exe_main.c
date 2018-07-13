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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_03971329095085501792_0358537834_init();
    work_m_13163769810041330142_2144400635_init();
    work_m_03758335965912781719_0183742806_init();
    work_m_14211143827125306280_1096856948_init();
    work_m_16832201109097980503_1678943863_init();
    work_m_13230472503489819726_1418745306_init();
    work_m_16668962204174096116_3116447594_init();
    work_m_08285189415289556109_1371686720_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_08285189415289556109_1371686720");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
