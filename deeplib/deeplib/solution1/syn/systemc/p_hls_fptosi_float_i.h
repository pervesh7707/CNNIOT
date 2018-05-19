// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _p_hls_fptosi_float_i_HH_
#define _p_hls_fptosi_float_i_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct p_hls_fptosi_float_i : public sc_module {
    // Port declarations 5
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<32> > x;
    sc_out< sc_lv<32> > ap_return;
    sc_in< sc_logic > ap_ce;


    // Module declarations
    p_hls_fptosi_float_i(sc_module_name name);
    SC_HAS_PROCESS(p_hls_fptosi_float_i);

    ~p_hls_fptosi_float_i();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<1> > p_Result_s_reg_185;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > p_Val2_2_fu_166_p3;
    sc_signal< sc_lv<32> > p_Val2_2_reg_190;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<32> > p_Val2_s_fu_44_p1;
    sc_signal< sc_lv<23> > loc_V_1_fu_66_p1;
    sc_signal< sc_lv<25> > tmp_3_i_i_fu_70_p4;
    sc_signal< sc_lv<8> > loc_V_fu_56_p4;
    sc_signal< sc_lv<9> > tmp_i_i_i_cast1_fu_84_p1;
    sc_signal< sc_lv<9> > sh_assign_fu_88_p2;
    sc_signal< sc_lv<8> > tmp_5_i_i_fu_102_p2;
    sc_signal< sc_lv<1> > isNeg_fu_94_p3;
    sc_signal< sc_lv<9> > tmp_5_i_i_cast_fu_108_p1;
    sc_signal< sc_lv<9> > sh_assign_1_fu_112_p3;
    sc_signal< sc_lv<32> > sh_assign_1_cast_fu_120_p1;
    sc_signal< sc_lv<25> > sh_assign_1_cast_cas_fu_124_p1;
    sc_signal< sc_lv<79> > tmp_3_i_i_cast2_fu_80_p1;
    sc_signal< sc_lv<79> > tmp_7_i_i_fu_128_p1;
    sc_signal< sc_lv<25> > tmp_8_i_i_fu_132_p2;
    sc_signal< sc_lv<1> > tmp_fu_144_p3;
    sc_signal< sc_lv<79> > tmp_i_i_fu_138_p2;
    sc_signal< sc_lv<32> > tmp_13_fu_152_p1;
    sc_signal< sc_lv<32> > tmp_14_fu_156_p4;
    sc_signal< sc_lv<32> > p_Val2_6_i_i_fu_174_p2;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<9> ap_const_lv9_181;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_return();
    void thread_isNeg_fu_94_p3();
    void thread_loc_V_1_fu_66_p1();
    void thread_loc_V_fu_56_p4();
    void thread_p_Val2_2_fu_166_p3();
    void thread_p_Val2_6_i_i_fu_174_p2();
    void thread_p_Val2_s_fu_44_p1();
    void thread_sh_assign_1_cast_cas_fu_124_p1();
    void thread_sh_assign_1_cast_fu_120_p1();
    void thread_sh_assign_1_fu_112_p3();
    void thread_sh_assign_fu_88_p2();
    void thread_tmp_13_fu_152_p1();
    void thread_tmp_14_fu_156_p4();
    void thread_tmp_3_i_i_cast2_fu_80_p1();
    void thread_tmp_3_i_i_fu_70_p4();
    void thread_tmp_5_i_i_cast_fu_108_p1();
    void thread_tmp_5_i_i_fu_102_p2();
    void thread_tmp_7_i_i_fu_128_p1();
    void thread_tmp_8_i_i_fu_132_p2();
    void thread_tmp_fu_144_p3();
    void thread_tmp_i_i_fu_138_p2();
    void thread_tmp_i_i_i_cast1_fu_84_p1();
};

}

using namespace ap_rtl;

#endif