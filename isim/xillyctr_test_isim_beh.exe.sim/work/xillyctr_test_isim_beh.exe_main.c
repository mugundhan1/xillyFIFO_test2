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
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    unisims_ver_m_00000000004091665089_4007306260_init();
    work_m_00000000001784481630_0981570457_init();
    unisims_ver_m_00000000000236260522_2449448540_init();
    work_m_00000000000224395002_2582214024_init();
    xilinxcorelib_ver_m_00000000000200492576_2080938666_init();
    xilinxcorelib_ver_m_00000000000200492576_0860425325_init();
    xilinxcorelib_ver_m_00000000003991805312_0589607335_init();
    xilinxcorelib_ver_m_00000000001159543956_2827302974_init();
    xilinxcorelib_ver_m_00000000001291582275_2306231578_init();
    work_m_00000000000840594279_3740161181_init();
    work_m_00000000000758589638_1787258478_init();
    work_m_00000000003869631202_3866568230_init();
    work_m_00000000000224395002_2806086298_init();
    work_m_00000000002050966978_0204903951_init();
    work_m_00000000003828184776_4020928423_init();
    xilinxcorelib_ver_m_00000000001382328732_3681968906_init();
    xilinxcorelib_ver_m_00000000003461156251_2504906480_init();
    xilinxcorelib_ver_m_00000000001291582275_0512873243_init();
    work_m_00000000003630952586_0005553800_init();
    work_m_00000000003926476963_4060554000_init();
    work_m_00000000001180678657_1690408536_init();
    work_m_00000000001812689157_2632190497_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001812689157_2632190497");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
