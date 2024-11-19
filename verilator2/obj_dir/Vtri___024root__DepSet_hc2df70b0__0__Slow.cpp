// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtri.h for the primary calling header

#include "Vtri__pch.h"
#include "Vtri___024root.h"

VL_ATTR_COLD void Vtri___024root___eval_static(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtri___024root___eval_initial__TOP(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.std_const__02Eout = 0x20U;
}

VL_ATTR_COLD void Vtri___024root___eval_final(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtri___024root___dump_triggers__stl(Vtri___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtri___024root___eval_phase__stl(Vtri___024root* vlSelf);

VL_ATTR_COLD void Vtri___024root___eval_settle(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtri___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtri___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtri___024root___dump_triggers__stl(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtri___024root___stl_sequent__TOP__0(Vtri___024root* vlSelf);
VL_ATTR_COLD void Vtri___024root____Vm_traceActivitySetAll(Vtri___024root* vlSelf);

VL_ATTR_COLD void Vtri___024root___eval_stl(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtri___024root___stl_sequent__TOP__0(vlSelf);
        Vtri___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtri___024root___eval_triggers__stl(Vtri___024root* vlSelf);

VL_ATTR_COLD bool Vtri___024root___eval_phase__stl(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtri___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtri___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtri___024root___dump_triggers__ico(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtri___024root___dump_triggers__act(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge init_one_reg.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge std_fp_smult_pipe.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge std_fp_sdiv_pipe.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge std_mult_pipe.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge std_smult_pipe.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge std_sdiv_pipe.clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] triangle_tb.dut.ret_arg0_reg_out)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] triangle_tb.dut.tdcc_done_in)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([changed] triangle_tb.go)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] triangle_tb.in0)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([changed] triangle_tb.reset)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge triangle_tb.clk)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge triangle_tb.dut.tdcc_done_in)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtri___024root___dump_triggers__nba(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge init_one_reg.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge std_fp_smult_pipe.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge std_fp_sdiv_pipe.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge std_mult_pipe.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge std_smult_pipe.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge std_sdiv_pipe.clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] triangle_tb.dut.ret_arg0_reg_out)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] triangle_tb.dut.tdcc_done_in)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([changed] triangle_tb.go)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] triangle_tb.in0)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([changed] triangle_tb.reset)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge triangle_tb.clk)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge triangle_tb.dut.tdcc_done_in)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtri___024root____Vm_traceActivitySetAll(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
}

VL_ATTR_COLD void Vtri___024root___ctor_var_reset(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->std_fp_add__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_fp_add__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_fp_add__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sub__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sub__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sub__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_fp_gt__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_fp_gt__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_fp_gt__02Eout = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sadd__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sadd__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sadd__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_fp_ssub__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_fp_ssub__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_fp_ssub__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sgt__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sgt__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sgt__02Eout = VL_RAND_RESET_I(1);
    vlSelf->std_fp_slt__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_fp_slt__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_fp_slt__02Eout = VL_RAND_RESET_I(1);
    vlSelf->std_sadd__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_sadd__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_sadd__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_ssub__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_ssub__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_ssub__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_sgt__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_sgt__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_sgt__02Eout = VL_RAND_RESET_I(1);
    vlSelf->std_seq__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_seq__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_seq__02Eout = VL_RAND_RESET_I(1);
    vlSelf->std_sneq__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_sneq__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_sneq__02Eout = VL_RAND_RESET_I(1);
    vlSelf->std_sge__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_sge__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_sge__02Eout = VL_RAND_RESET_I(1);
    vlSelf->std_sle__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_sle__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_sle__02Eout = VL_RAND_RESET_I(1);
    vlSelf->std_slsh__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_slsh__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_slsh__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_srsh__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_srsh__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_srsh__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_signext__02Ein = VL_RAND_RESET_I(32);
    vlSelf->std_signext__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_const_mult__02Ein = VL_RAND_RESET_I(32);
    vlSelf->std_const_mult__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_const__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_lsh__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_lsh__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_lsh__02Eout = VL_RAND_RESET_I(32);
    vlSelf->init_one_reg__02Ein = VL_RAND_RESET_I(32);
    vlSelf->write_en = VL_RAND_RESET_I(1);
    vlSelf->init_one_reg__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->init_one_reg__02Ereset = VL_RAND_RESET_I(1);
    vlSelf->init_one_reg__02Eout = VL_RAND_RESET_I(32);
    vlSelf->init_one_reg__02Edone = VL_RAND_RESET_I(1);
    vlSelf->std_fp_smult_pipe__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_fp_smult_pipe__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_fp_smult_pipe__02Ereset = VL_RAND_RESET_I(1);
    vlSelf->std_fp_smult_pipe__02Ego = VL_RAND_RESET_I(1);
    vlSelf->std_fp_smult_pipe__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->std_fp_smult_pipe__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_fp_smult_pipe__02Edone = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sdiv_pipe__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sdiv_pipe__02Ego = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sdiv_pipe__02Ereset = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sdiv_pipe__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__02Eout_quotient = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__02Eout_remainder = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__02Edone = VL_RAND_RESET_I(1);
    vlSelf->std_mult_pipe__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_mult_pipe__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_mult_pipe__02Ereset = VL_RAND_RESET_I(1);
    vlSelf->std_mult_pipe__02Ego = VL_RAND_RESET_I(1);
    vlSelf->std_mult_pipe__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->std_mult_pipe__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_mult_pipe__02Edone = VL_RAND_RESET_I(1);
    vlSelf->std_smult_pipe__02Ereset = VL_RAND_RESET_I(1);
    vlSelf->std_smult_pipe__02Ego = VL_RAND_RESET_I(1);
    vlSelf->std_smult_pipe__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->std_smult_pipe__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_smult_pipe__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_smult_pipe__02Eout = VL_RAND_RESET_I(32);
    vlSelf->std_smult_pipe__02Edone = VL_RAND_RESET_I(1);
    vlSelf->std_sdiv_pipe__02Ereset = VL_RAND_RESET_I(1);
    vlSelf->std_sdiv_pipe__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->std_sdiv_pipe__02Ego = VL_RAND_RESET_I(1);
    vlSelf->std_sdiv_pipe__02Eleft = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__02Eright = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__02Eout_quotient = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__02Eout_remainder = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__02Edone = VL_RAND_RESET_I(1);
    vlSelf->std_fp_smult_pipe__DOT__comp__DOT__rtmp = VL_RAND_RESET_I(32);
    vlSelf->std_fp_smult_pipe__DOT__comp__DOT__ltmp = VL_RAND_RESET_I(32);
    vlSelf->std_fp_smult_pipe__DOT__comp__DOT__out_tmp = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->std_fp_smult_pipe__DOT__comp__DOT__done_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->std_fp_sdiv_pipe__DOT__left_abs = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__DOT__right_abs = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__DOT__comp_out_q = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__DOT__comp_out_r = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__DOT__right_save = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__DOT__out_rem_intermediate = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__DOT__different_signs = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sdiv_pipe__DOT__left_sign = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sdiv_pipe__DOT__right_sign = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sdiv_pipe__DOT__comp__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__DOT__comp__DOT__quotient_next = VL_RAND_RESET_I(32);
    vlSelf->std_fp_sdiv_pipe__DOT__comp__DOT__acc = VL_RAND_RESET_Q(33);
    vlSelf->std_fp_sdiv_pipe__DOT__comp__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->std_fp_sdiv_pipe__DOT__comp__DOT__idx = VL_RAND_RESET_I(6);
    vlSelf->std_fp_sdiv_pipe__DOT__comp__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sdiv_pipe__DOT__comp__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sdiv_pipe__DOT__comp__DOT__finished = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sdiv_pipe__DOT__comp__DOT__dividend_is_zero = VL_RAND_RESET_I(1);
    vlSelf->std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h57fb2b04__0 = VL_RAND_RESET_Q(33);
    vlSelf->std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h5969ae7c__0 = VL_RAND_RESET_I(32);
    vlSelf->std_mult_pipe__DOT__comp__DOT__rtmp = VL_RAND_RESET_I(32);
    vlSelf->std_mult_pipe__DOT__comp__DOT__ltmp = VL_RAND_RESET_I(32);
    vlSelf->std_mult_pipe__DOT__comp__DOT__out_tmp = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->std_mult_pipe__DOT__comp__DOT__done_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->std_smult_pipe__DOT__comp__DOT__rtmp = VL_RAND_RESET_I(32);
    vlSelf->std_smult_pipe__DOT__comp__DOT__ltmp = VL_RAND_RESET_I(32);
    vlSelf->std_smult_pipe__DOT__comp__DOT__out_tmp = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->std_smult_pipe__DOT__comp__DOT__done_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->std_sdiv_pipe__DOT__left_abs = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__right_abs = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__comp_out_q = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__comp_out_r = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__right_save = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__out_rem_intermediate = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__different_signs = VL_RAND_RESET_I(1);
    vlSelf->std_sdiv_pipe__DOT__left_sign = VL_RAND_RESET_I(1);
    vlSelf->std_sdiv_pipe__DOT__right_sign = VL_RAND_RESET_I(1);
    vlSelf->std_sdiv_pipe__DOT__l = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__comp__DOT__dividend = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__comp__DOT__divisor = VL_RAND_RESET_Q(63);
    vlSelf->std_sdiv_pipe__DOT__comp__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__comp__DOT__quotient_msk = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__comp__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->std_sdiv_pipe__DOT__comp__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->std_sdiv_pipe__DOT__comp__DOT__finished = VL_RAND_RESET_I(1);
    vlSelf->std_sdiv_pipe__DOT__comp__DOT__dividend_is_zero = VL_RAND_RESET_I(1);
    vlSelf->std_sdiv_pipe__DOT__comp__DOT__l = VL_RAND_RESET_I(32);
    vlSelf->std_sdiv_pipe__DOT__comp__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->triangle_tb__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->triangle_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__go = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__std_add_2_left = VL_RAND_RESET_I(32);
    vlSelf->triangle_tb__DOT__dut__DOT__std_add_2_out = VL_RAND_RESET_I(32);
    vlSelf->triangle_tb__DOT__dut__DOT__while_0_arg1_reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__while_0_arg1_reg_out = VL_RAND_RESET_I(32);
    vlSelf->triangle_tb__DOT__dut__DOT__while_0_arg1_reg_done = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__while_0_arg0_reg_in = VL_RAND_RESET_I(32);
    vlSelf->triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out = VL_RAND_RESET_I(32);
    vlSelf->triangle_tb__DOT__dut__DOT__while_0_arg0_reg_done = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__ret_arg0_reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__ret_arg0_reg_out = VL_RAND_RESET_I(32);
    vlSelf->triangle_tb__DOT__dut__DOT__ret_arg0_reg_done = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__comb_reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__comb_reg_out = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__comb_reg_done = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__signal_reg_in = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__signal_reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__signal_reg_out = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__signal_reg_done = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__signal_reg0_in = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__signal_reg0_write_en = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__signal_reg0_out = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__signal_reg0_done = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__fsm_in = VL_RAND_RESET_I(3);
    vlSelf->triangle_tb__DOT__dut__DOT__fsm_write_en = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__fsm_out = VL_RAND_RESET_I(3);
    vlSelf->triangle_tb__DOT__dut__DOT__fsm_done = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__assign_while_0_latch_done_in = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT__tdcc_done_in = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT___guard21 = VL_RAND_RESET_I(1);
    vlSelf->triangle_tb__DOT__dut__DOT___guard44 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__init_one_reg__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__std_fp_smult_pipe__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__std_fp_sdiv_pipe__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__std_mult_pipe__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__std_smult_pipe__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__std_sdiv_pipe__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__triangle_tb__DOT__dut__DOT__ret_arg0_reg_out__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__triangle_tb__DOT__dut__DOT__tdcc_done_in__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__triangle_tb__DOT__go__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__triangle_tb__DOT__in0__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__triangle_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__triangle_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
