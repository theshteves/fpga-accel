// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtri.h for the primary calling header

#ifndef VERILATED_VTRI___024ROOT_H_
#define VERILATED_VTRI___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtri___024unit;


class Vtri__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtri___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtri___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(init_one_reg__02Eclk,0,0);
        VL_IN8(std_fp_smult_pipe__02Eclk,0,0);
        VL_IN8(std_fp_sdiv_pipe__02Eclk,0,0);
        VL_IN8(std_mult_pipe__02Eclk,0,0);
        VL_IN8(std_smult_pipe__02Eclk,0,0);
        VL_IN8(std_sdiv_pipe__02Eclk,0,0);
        CData/*0:0*/ triangle_tb__DOT__clk;
        CData/*0:0*/ triangle_tb__DOT__reset;
        CData/*0:0*/ triangle_tb__DOT__go;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__tdcc_done_in;
        VL_OUT8(std_fp_gt__02Eout,0,0);
        VL_OUT8(std_fp_sgt__02Eout,0,0);
        VL_OUT8(std_fp_slt__02Eout,0,0);
        VL_OUT8(std_sgt__02Eout,0,0);
        VL_OUT8(std_seq__02Eout,0,0);
        VL_OUT8(std_sneq__02Eout,0,0);
        VL_OUT8(std_sge__02Eout,0,0);
        VL_OUT8(std_sle__02Eout,0,0);
        VL_IN8(write_en,0,0);
        VL_IN8(init_one_reg__02Ereset,0,0);
        VL_OUT8(init_one_reg__02Edone,0,0);
        VL_IN8(std_fp_smult_pipe__02Ereset,0,0);
        VL_IN8(std_fp_smult_pipe__02Ego,0,0);
        VL_OUT8(std_fp_smult_pipe__02Edone,0,0);
        VL_IN8(std_fp_sdiv_pipe__02Ego,0,0);
        VL_IN8(std_fp_sdiv_pipe__02Ereset,0,0);
        VL_OUT8(std_fp_sdiv_pipe__02Edone,0,0);
        VL_IN8(std_mult_pipe__02Ereset,0,0);
        VL_IN8(std_mult_pipe__02Ego,0,0);
        VL_OUT8(std_mult_pipe__02Edone,0,0);
        VL_IN8(std_smult_pipe__02Ereset,0,0);
        VL_IN8(std_smult_pipe__02Ego,0,0);
        VL_OUT8(std_smult_pipe__02Edone,0,0);
        VL_IN8(std_sdiv_pipe__02Ereset,0,0);
        VL_IN8(std_sdiv_pipe__02Ego,0,0);
        VL_OUT8(std_sdiv_pipe__02Edone,0,0);
        CData/*0:0*/ std_fp_sdiv_pipe__DOT__different_signs;
        CData/*0:0*/ std_fp_sdiv_pipe__DOT__left_sign;
        CData/*0:0*/ std_fp_sdiv_pipe__DOT__right_sign;
        CData/*5:0*/ std_fp_sdiv_pipe__DOT__comp__DOT__idx;
        CData/*0:0*/ std_fp_sdiv_pipe__DOT__comp__DOT__start;
        CData/*0:0*/ std_fp_sdiv_pipe__DOT__comp__DOT__running;
        CData/*0:0*/ std_fp_sdiv_pipe__DOT__comp__DOT__finished;
        CData/*0:0*/ std_fp_sdiv_pipe__DOT__comp__DOT__dividend_is_zero;
        CData/*0:0*/ std_sdiv_pipe__DOT__different_signs;
        CData/*0:0*/ std_sdiv_pipe__DOT__left_sign;
        CData/*0:0*/ std_sdiv_pipe__DOT__right_sign;
        CData/*0:0*/ std_sdiv_pipe__DOT__comp__DOT__start;
        CData/*0:0*/ std_sdiv_pipe__DOT__comp__DOT__running;
        CData/*0:0*/ std_sdiv_pipe__DOT__comp__DOT__finished;
        CData/*0:0*/ std_sdiv_pipe__DOT__comp__DOT__dividend_is_zero;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__while_0_arg1_reg_write_en;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__while_0_arg1_reg_done;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__while_0_arg0_reg_done;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__ret_arg0_reg_write_en;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__ret_arg0_reg_done;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__comb_reg_write_en;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__comb_reg_out;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__comb_reg_done;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__signal_reg_in;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__signal_reg_write_en;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__signal_reg_out;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__signal_reg_done;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__signal_reg0_in;
    };
    struct {
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__signal_reg0_write_en;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__signal_reg0_out;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__signal_reg0_done;
        CData/*2:0*/ triangle_tb__DOT__dut__DOT__fsm_in;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__fsm_write_en;
        CData/*2:0*/ triangle_tb__DOT__dut__DOT__fsm_out;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__fsm_done;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__assign_while_0_latch_done_in;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT___guard21;
        CData/*0:0*/ triangle_tb__DOT__dut__DOT___guard44;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__init_one_reg__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__std_fp_smult_pipe__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__std_fp_sdiv_pipe__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__std_mult_pipe__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__std_smult_pipe__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__std_sdiv_pipe__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__triangle_tb__DOT__dut__DOT__tdcc_done_in__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__triangle_tb__DOT__go__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__triangle_tb__DOT__reset__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__triangle_tb__DOT__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_IN(std_fp_add__02Eleft,31,0);
        VL_IN(std_fp_add__02Eright,31,0);
        VL_OUT(std_fp_add__02Eout,31,0);
        VL_IN(std_fp_sub__02Eleft,31,0);
        VL_IN(std_fp_sub__02Eright,31,0);
        VL_OUT(std_fp_sub__02Eout,31,0);
        VL_IN(std_fp_gt__02Eleft,31,0);
        VL_IN(std_fp_gt__02Eright,31,0);
        VL_IN(std_fp_sadd__02Eleft,31,0);
        VL_IN(std_fp_sadd__02Eright,31,0);
        VL_OUT(std_fp_sadd__02Eout,31,0);
        VL_IN(std_fp_ssub__02Eleft,31,0);
        VL_IN(std_fp_ssub__02Eright,31,0);
        VL_OUT(std_fp_ssub__02Eout,31,0);
        VL_IN(std_fp_sgt__02Eleft,31,0);
        VL_IN(std_fp_sgt__02Eright,31,0);
        VL_IN(std_fp_slt__02Eleft,31,0);
        VL_IN(std_fp_slt__02Eright,31,0);
        VL_IN(std_sadd__02Eleft,31,0);
        VL_IN(std_sadd__02Eright,31,0);
        VL_OUT(std_sadd__02Eout,31,0);
        VL_IN(std_ssub__02Eleft,31,0);
        VL_IN(std_ssub__02Eright,31,0);
        VL_OUT(std_ssub__02Eout,31,0);
        VL_IN(std_sgt__02Eleft,31,0);
        VL_IN(std_sgt__02Eright,31,0);
        VL_IN(std_seq__02Eleft,31,0);
        VL_IN(std_seq__02Eright,31,0);
        VL_IN(std_sneq__02Eleft,31,0);
        VL_IN(std_sneq__02Eright,31,0);
        VL_IN(std_sge__02Eleft,31,0);
        VL_IN(std_sge__02Eright,31,0);
        VL_IN(std_sle__02Eleft,31,0);
        VL_IN(std_sle__02Eright,31,0);
        VL_IN(std_slsh__02Eleft,31,0);
        VL_IN(std_slsh__02Eright,31,0);
        VL_OUT(std_slsh__02Eout,31,0);
        VL_IN(std_srsh__02Eleft,31,0);
    };
    struct {
        VL_IN(std_srsh__02Eright,31,0);
        VL_OUT(std_srsh__02Eout,31,0);
        VL_IN(std_signext__02Ein,31,0);
        VL_OUT(std_signext__02Eout,31,0);
        VL_IN(std_const_mult__02Ein,31,0);
        VL_OUT(std_const_mult__02Eout,31,0);
        VL_OUT(std_const__02Eout,31,0);
        VL_IN(std_lsh__02Eleft,31,0);
        VL_IN(std_lsh__02Eright,31,0);
        VL_OUT(std_lsh__02Eout,31,0);
        VL_IN(init_one_reg__02Ein,31,0);
        VL_OUT(init_one_reg__02Eout,31,0);
        VL_IN(std_fp_smult_pipe__02Eleft,31,0);
        VL_IN(std_fp_smult_pipe__02Eright,31,0);
        VL_OUT(std_fp_smult_pipe__02Eout,31,0);
        VL_IN(std_fp_sdiv_pipe__02Eleft,31,0);
        VL_IN(std_fp_sdiv_pipe__02Eright,31,0);
        VL_OUT(std_fp_sdiv_pipe__02Eout_quotient,31,0);
        VL_OUT(std_fp_sdiv_pipe__02Eout_remainder,31,0);
        VL_IN(std_mult_pipe__02Eleft,31,0);
        VL_IN(std_mult_pipe__02Eright,31,0);
        VL_OUT(std_mult_pipe__02Eout,31,0);
        VL_IN(std_smult_pipe__02Eleft,31,0);
        VL_IN(std_smult_pipe__02Eright,31,0);
        VL_OUT(std_smult_pipe__02Eout,31,0);
        VL_IN(std_sdiv_pipe__02Eleft,31,0);
        VL_IN(std_sdiv_pipe__02Eright,31,0);
        VL_OUT(std_sdiv_pipe__02Eout_quotient,31,0);
        VL_OUT(std_sdiv_pipe__02Eout_remainder,31,0);
        IData/*31:0*/ std_fp_smult_pipe__DOT__comp__DOT__rtmp;
        IData/*31:0*/ std_fp_smult_pipe__DOT__comp__DOT__ltmp;
        IData/*31:0*/ std_fp_sdiv_pipe__DOT__left_abs;
        IData/*31:0*/ std_fp_sdiv_pipe__DOT__right_abs;
        IData/*31:0*/ std_fp_sdiv_pipe__DOT__comp_out_q;
        IData/*31:0*/ std_fp_sdiv_pipe__DOT__comp_out_r;
        IData/*31:0*/ std_fp_sdiv_pipe__DOT__right_save;
        IData/*31:0*/ std_fp_sdiv_pipe__DOT__out_rem_intermediate;
        IData/*31:0*/ std_fp_sdiv_pipe__DOT__comp__DOT__quotient;
        IData/*31:0*/ std_fp_sdiv_pipe__DOT__comp__DOT__quotient_next;
        IData/*31:0*/ std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h5969ae7c__0;
        IData/*31:0*/ std_mult_pipe__DOT__comp__DOT__rtmp;
        IData/*31:0*/ std_mult_pipe__DOT__comp__DOT__ltmp;
        IData/*31:0*/ std_smult_pipe__DOT__comp__DOT__rtmp;
        IData/*31:0*/ std_smult_pipe__DOT__comp__DOT__ltmp;
        IData/*31:0*/ std_sdiv_pipe__DOT__left_abs;
        IData/*31:0*/ std_sdiv_pipe__DOT__right_abs;
        IData/*31:0*/ std_sdiv_pipe__DOT__comp_out_q;
        IData/*31:0*/ std_sdiv_pipe__DOT__comp_out_r;
        IData/*31:0*/ std_sdiv_pipe__DOT__right_save;
        IData/*31:0*/ std_sdiv_pipe__DOT__out_rem_intermediate;
        IData/*31:0*/ std_sdiv_pipe__DOT__l;
        IData/*31:0*/ std_sdiv_pipe__DOT__r;
        IData/*31:0*/ std_sdiv_pipe__DOT__comp__DOT__dividend;
        IData/*31:0*/ std_sdiv_pipe__DOT__comp__DOT__quotient;
        IData/*31:0*/ std_sdiv_pipe__DOT__comp__DOT__quotient_msk;
        IData/*31:0*/ std_sdiv_pipe__DOT__comp__DOT__l;
        IData/*31:0*/ std_sdiv_pipe__DOT__comp__DOT__r;
        IData/*31:0*/ triangle_tb__DOT__in0;
        IData/*31:0*/ triangle_tb__DOT__dut__DOT__std_add_2_left;
        IData/*31:0*/ triangle_tb__DOT__dut__DOT__std_add_2_out;
        IData/*31:0*/ triangle_tb__DOT__dut__DOT__while_0_arg1_reg_out;
        IData/*31:0*/ triangle_tb__DOT__dut__DOT__while_0_arg0_reg_in;
        IData/*31:0*/ triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out;
        IData/*31:0*/ triangle_tb__DOT__dut__DOT__ret_arg0_reg_out;
    };
    struct {
        IData/*31:0*/ __Vtrigprevexpr___TOP__triangle_tb__DOT__dut__DOT__ret_arg0_reg_out__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__triangle_tb__DOT__in0__0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ std_fp_smult_pipe__DOT__comp__DOT__out_tmp;
        QData/*32:0*/ std_fp_sdiv_pipe__DOT__comp__DOT__acc;
        QData/*32:0*/ std_fp_sdiv_pipe__DOT__comp__DOT__acc_next;
        QData/*32:0*/ std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h57fb2b04__0;
        QData/*63:0*/ std_mult_pipe__DOT__comp__DOT__out_tmp;
        QData/*63:0*/ std_smult_pipe__DOT__comp__DOT__out_tmp;
        QData/*62:0*/ std_sdiv_pipe__DOT__comp__DOT__divisor;
        VlUnpacked<CData/*0:0*/, 2> std_fp_smult_pipe__DOT__comp__DOT__done_buf;
        VlUnpacked<CData/*0:0*/, 2> std_mult_pipe__DOT__comp__DOT__done_buf;
        VlUnpacked<CData/*0:0*/, 2> std_smult_pipe__DOT__comp__DOT__done_buf;
        VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc471045e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<14> __VactTriggered;
    VlTriggerVec<14> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtri__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtri___024root(Vtri__Syms* symsp, const char* v__name);
    ~Vtri___024root();
    VL_UNCOPYABLE(Vtri___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
