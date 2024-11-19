// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtri.h for the primary calling header

#include "Vtri__pch.h"
#include "Vtri___024root.h"

VL_ATTR_COLD void Vtri___024root___eval_initial__TOP(Vtri___024root* vlSelf);
VlCoroutine Vtri___024root___eval_initial__TOP__Vtiming__0(Vtri___024root* vlSelf);
VlCoroutine Vtri___024root___eval_initial__TOP__Vtiming__1(Vtri___024root* vlSelf);

void Vtri___024root___eval_initial(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtri___024root___eval_initial__TOP(vlSelf);
    Vtri___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtri___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__init_one_reg__02Eclk__0 
        = vlSelfRef.init_one_reg__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__std_fp_smult_pipe__02Eclk__0 
        = vlSelfRef.std_fp_smult_pipe__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__std_fp_sdiv_pipe__02Eclk__0 
        = vlSelfRef.std_fp_sdiv_pipe__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__std_mult_pipe__02Eclk__0 
        = vlSelfRef.std_mult_pipe__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__std_smult_pipe__02Eclk__0 
        = vlSelfRef.std_smult_pipe__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__std_sdiv_pipe__02Eclk__0 
        = vlSelfRef.std_sdiv_pipe__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__dut__DOT__ret_arg0_reg_out__0 
        = vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_out;
    vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__dut__DOT__tdcc_done_in__0 
        = vlSelfRef.triangle_tb__DOT__dut__DOT__tdcc_done_in;
    vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__go__0 
        = vlSelfRef.triangle_tb__DOT__go;
    vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__in0__0 
        = vlSelfRef.triangle_tb__DOT__in0;
    vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__reset__0 
        = vlSelfRef.triangle_tb__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__clk__0 
        = vlSelfRef.triangle_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtri___024root___eval_initial__TOP__Vtiming__1(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "../tri.tb.sv", 
                                             23);
        vlSelfRef.triangle_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.triangle_tb__DOT__clk)));
    }
}

void Vtri___024root___ico_sequent__TOP__0(Vtri___024root* vlSelf);

void Vtri___024root___eval_ico(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtri___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtri___024root___ico_sequent__TOP__0(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    vlSelfRef.std_signext__02Eout = vlSelfRef.std_signext__02Ein;
    vlSelfRef.std_const_mult__02Eout = vlSelfRef.std_const_mult__02Ein;
    vlSelfRef.std_sdiv_pipe__DOT__right_abs = ((vlSelfRef.std_sdiv_pipe__02Eright 
                                                >> 0x1fU)
                                                ? (- vlSelfRef.std_sdiv_pipe__02Eright)
                                                : vlSelfRef.std_sdiv_pipe__02Eright);
    vlSelfRef.std_fp_add__02Eout = (vlSelfRef.std_fp_add__02Eleft 
                                    + vlSelfRef.std_fp_add__02Eright);
    vlSelfRef.std_fp_sub__02Eout = (vlSelfRef.std_fp_sub__02Eleft 
                                    - vlSelfRef.std_fp_sub__02Eright);
    vlSelfRef.std_fp_gt__02Eout = (vlSelfRef.std_fp_gt__02Eleft 
                                   > vlSelfRef.std_fp_gt__02Eright);
    vlSelfRef.std_fp_sadd__02Eout = (vlSelfRef.std_fp_sadd__02Eleft 
                                     + vlSelfRef.std_fp_sadd__02Eright);
    vlSelfRef.std_fp_ssub__02Eout = (vlSelfRef.std_fp_ssub__02Eleft 
                                     - vlSelfRef.std_fp_ssub__02Eright);
    vlSelfRef.std_fp_sgt__02Eout = VL_GTS_III(32, vlSelfRef.std_fp_sgt__02Eleft, vlSelfRef.std_fp_sgt__02Eright);
    vlSelfRef.std_fp_slt__02Eout = VL_LTS_III(32, vlSelfRef.std_fp_slt__02Eleft, vlSelfRef.std_fp_slt__02Eright);
    vlSelfRef.std_sadd__02Eout = (vlSelfRef.std_sadd__02Eleft 
                                  + vlSelfRef.std_sadd__02Eright);
    vlSelfRef.std_ssub__02Eout = (vlSelfRef.std_ssub__02Eleft 
                                  - vlSelfRef.std_ssub__02Eright);
    vlSelfRef.std_sgt__02Eout = VL_GTS_III(32, vlSelfRef.std_sgt__02Eleft, vlSelfRef.std_sgt__02Eright);
    vlSelfRef.std_seq__02Eout = (vlSelfRef.std_seq__02Eleft 
                                 == vlSelfRef.std_seq__02Eright);
    vlSelfRef.std_sneq__02Eout = (vlSelfRef.std_sneq__02Eleft 
                                  != vlSelfRef.std_sneq__02Eright);
    vlSelfRef.std_sge__02Eout = VL_GTES_III(32, vlSelfRef.std_sge__02Eleft, vlSelfRef.std_sge__02Eright);
    vlSelfRef.std_sle__02Eout = VL_LTES_III(32, vlSelfRef.std_sle__02Eleft, vlSelfRef.std_sle__02Eright);
    vlSelfRef.std_slsh__02Eout = VL_SHIFTL_III(32,32,32, vlSelfRef.std_slsh__02Eleft, vlSelfRef.std_slsh__02Eright);
    vlSelfRef.std_srsh__02Eout = VL_SHIFTRS_III(32,32,32, vlSelfRef.std_srsh__02Eleft, vlSelfRef.std_srsh__02Eright);
    vlSelfRef.std_lsh__02Eout = VL_SHIFTL_III(32,32,32, vlSelfRef.std_lsh__02Eleft, vlSelfRef.std_lsh__02Eright);
    vlSelfRef.std_fp_sdiv_pipe__DOT__left_abs = ((vlSelfRef.std_fp_sdiv_pipe__02Eleft 
                                                  >> 0x1fU)
                                                  ? 
                                                 (- vlSelfRef.std_fp_sdiv_pipe__02Eleft)
                                                  : vlSelfRef.std_fp_sdiv_pipe__02Eleft);
    vlSelfRef.std_sdiv_pipe__DOT__left_abs = ((vlSelfRef.std_sdiv_pipe__02Eleft 
                                               >> 0x1fU)
                                               ? (- vlSelfRef.std_sdiv_pipe__02Eleft)
                                               : vlSelfRef.std_sdiv_pipe__02Eleft);
    vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__start 
        = ((~ (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__running)) 
           & (IData)(vlSelfRef.std_fp_sdiv_pipe__02Ego));
    vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__start 
        = ((~ (IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__running)) 
           & (IData)(vlSelfRef.std_sdiv_pipe__02Ego));
    vlSelfRef.std_fp_sdiv_pipe__DOT__right_abs = ((vlSelfRef.std_fp_sdiv_pipe__02Eright 
                                                   >> 0x1fU)
                                                   ? 
                                                  (- vlSelfRef.std_fp_sdiv_pipe__02Eright)
                                                   : vlSelfRef.std_fp_sdiv_pipe__02Eright);
    vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__dividend_is_zero 
        = ((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__start) 
           & (0U == vlSelfRef.std_fp_sdiv_pipe__DOT__left_abs));
    vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend_is_zero 
        = ((IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__start) 
           & (0U == vlSelfRef.std_sdiv_pipe__DOT__left_abs));
    if ((vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc 
         >= (QData)((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__right_abs)))) {
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc 
                                 - (QData)((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__right_abs))));
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h57fb2b04__0 
            = (((QData)((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient 
                                          >> 0x1fU))));
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc_next 
            = vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h57fb2b04__0;
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h5969ae7c__0 
            = (1U | (vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient 
                     << 1U));
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient_next 
            = vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h5969ae7c__0;
    } else {
        __Vtemp_2[0U] = vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient;
        __Vtemp_2[1U] = (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc);
        __Vtemp_2[2U] = (IData)((vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc 
                                 >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_3, __Vtemp_2, 1U);
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_3[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_3[1U]))));
        __Vtemp_6[0U] = vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient;
        __Vtemp_6[1U] = (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc);
        __Vtemp_6[2U] = (IData)((vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc 
                                 >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_7, __Vtemp_6, 1U);
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient_next 
            = __Vtemp_7[0U];
    }
}

void Vtri___024root___eval_triggers__ico(Vtri___024root* vlSelf);

bool Vtri___024root___eval_phase__ico(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtri___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtri___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtri___024root___act_comb__TOP__0(Vtri___024root* vlSelf);

void Vtri___024root___eval_act(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x3000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtri___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vtri___024root___nba_sequent__TOP__0(Vtri___024root* vlSelf);
void Vtri___024root___nba_sequent__TOP__1(Vtri___024root* vlSelf);
void Vtri___024root___nba_sequent__TOP__2(Vtri___024root* vlSelf);
void Vtri___024root___nba_sequent__TOP__3(Vtri___024root* vlSelf);
void Vtri___024root___nba_sequent__TOP__4(Vtri___024root* vlSelf);
void Vtri___024root___nba_sequent__TOP__5(Vtri___024root* vlSelf);
void Vtri___024root___nba_sequent__TOP__6(Vtri___024root* vlSelf);
void Vtri___024root___nba_sequent__TOP__7(Vtri___024root* vlSelf);
void Vtri___024root___nba_comb__TOP__0(Vtri___024root* vlSelf);

void Vtri___024root___eval_nba(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtri___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtri___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtri___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtri___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtri___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x7c0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtri___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtri___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtri___024root___nba_sequent__TOP__7(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x3800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtri___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
}

VL_INLINE_OPT void Vtri___024root___nba_sequent__TOP__1(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlyVal__std_fp_smult_pipe__DOT__comp__DOT__done_buf__v0;
    __VdlyVal__std_fp_smult_pipe__DOT__comp__DOT__done_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__std_fp_smult_pipe__DOT__comp__DOT__done_buf__v1;
    __VdlyVal__std_fp_smult_pipe__DOT__comp__DOT__done_buf__v1 = 0;
    // Body
    __VdlyVal__std_fp_smult_pipe__DOT__comp__DOT__done_buf__v0 
        = vlSelfRef.std_fp_smult_pipe__02Ego;
    __VdlyVal__std_fp_smult_pipe__DOT__comp__DOT__done_buf__v1 
        = ((IData)(vlSelfRef.std_fp_smult_pipe__02Ego) 
           && vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__done_buf
           [0U]);
    if (vlSelfRef.std_fp_smult_pipe__02Ereset) {
        vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__out_tmp = 0ULL;
        vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__ltmp = 0U;
        vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__rtmp = 0U;
    } else if (vlSelfRef.std_fp_smult_pipe__02Ego) {
        vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__out_tmp 
            = ((((QData)((IData)((- (IData)((vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__ltmp 
                                             >> 0x1fU))))) 
                 << 0x20U) | (QData)((IData)(vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__ltmp))) 
               * (((QData)((IData)((- (IData)((vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__rtmp 
                                               >> 0x1fU))))) 
                   << 0x20U) | (QData)((IData)(vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__rtmp))));
        vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__ltmp 
            = vlSelfRef.std_fp_smult_pipe__02Eleft;
        vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__rtmp 
            = vlSelfRef.std_fp_smult_pipe__02Eright;
    } else {
        vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__out_tmp 
            = vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__out_tmp;
        vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__ltmp = 0U;
        vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__rtmp = 0U;
    }
    vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__done_buf[0U] 
        = __VdlyVal__std_fp_smult_pipe__DOT__comp__DOT__done_buf__v0;
    vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__done_buf[1U] 
        = __VdlyVal__std_fp_smult_pipe__DOT__comp__DOT__done_buf__v1;
    vlSelfRef.std_fp_smult_pipe__02Edone = vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__done_buf
        [1U];
    vlSelfRef.std_fp_smult_pipe__02Eout = (IData)((vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__out_tmp 
                                                   >> 0x10U));
}

VL_INLINE_OPT void Vtri___024root___nba_sequent__TOP__2(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlyVal__std_mult_pipe__DOT__comp__DOT__done_buf__v0;
    __VdlyVal__std_mult_pipe__DOT__comp__DOT__done_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__std_mult_pipe__DOT__comp__DOT__done_buf__v1;
    __VdlyVal__std_mult_pipe__DOT__comp__DOT__done_buf__v1 = 0;
    // Body
    __VdlyVal__std_mult_pipe__DOT__comp__DOT__done_buf__v0 
        = vlSelfRef.std_mult_pipe__02Ego;
    __VdlyVal__std_mult_pipe__DOT__comp__DOT__done_buf__v1 
        = ((IData)(vlSelfRef.std_mult_pipe__02Ego) 
           && vlSelfRef.std_mult_pipe__DOT__comp__DOT__done_buf
           [0U]);
    if (vlSelfRef.std_mult_pipe__02Ereset) {
        vlSelfRef.std_mult_pipe__DOT__comp__DOT__out_tmp = 0ULL;
        vlSelfRef.std_mult_pipe__DOT__comp__DOT__ltmp = 0U;
        vlSelfRef.std_mult_pipe__DOT__comp__DOT__rtmp = 0U;
    } else if (vlSelfRef.std_mult_pipe__02Ego) {
        vlSelfRef.std_mult_pipe__DOT__comp__DOT__out_tmp 
            = ((QData)((IData)(vlSelfRef.std_mult_pipe__DOT__comp__DOT__ltmp)) 
               * (QData)((IData)(vlSelfRef.std_mult_pipe__DOT__comp__DOT__rtmp)));
        vlSelfRef.std_mult_pipe__DOT__comp__DOT__ltmp 
            = vlSelfRef.std_mult_pipe__02Eleft;
        vlSelfRef.std_mult_pipe__DOT__comp__DOT__rtmp 
            = vlSelfRef.std_mult_pipe__02Eright;
    } else {
        vlSelfRef.std_mult_pipe__DOT__comp__DOT__out_tmp 
            = vlSelfRef.std_mult_pipe__DOT__comp__DOT__out_tmp;
        vlSelfRef.std_mult_pipe__DOT__comp__DOT__ltmp = 0U;
        vlSelfRef.std_mult_pipe__DOT__comp__DOT__rtmp = 0U;
    }
    vlSelfRef.std_mult_pipe__DOT__comp__DOT__done_buf[0U] 
        = __VdlyVal__std_mult_pipe__DOT__comp__DOT__done_buf__v0;
    vlSelfRef.std_mult_pipe__DOT__comp__DOT__done_buf[1U] 
        = __VdlyVal__std_mult_pipe__DOT__comp__DOT__done_buf__v1;
    vlSelfRef.std_mult_pipe__02Edone = vlSelfRef.std_mult_pipe__DOT__comp__DOT__done_buf
        [1U];
    vlSelfRef.std_mult_pipe__02Eout = (IData)(vlSelfRef.std_mult_pipe__DOT__comp__DOT__out_tmp);
}

VL_INLINE_OPT void Vtri___024root___nba_sequent__TOP__3(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlyVal__std_smult_pipe__DOT__comp__DOT__done_buf__v0;
    __VdlyVal__std_smult_pipe__DOT__comp__DOT__done_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__std_smult_pipe__DOT__comp__DOT__done_buf__v1;
    __VdlyVal__std_smult_pipe__DOT__comp__DOT__done_buf__v1 = 0;
    // Body
    __VdlyVal__std_smult_pipe__DOT__comp__DOT__done_buf__v0 
        = vlSelfRef.std_smult_pipe__02Ego;
    __VdlyVal__std_smult_pipe__DOT__comp__DOT__done_buf__v1 
        = ((IData)(vlSelfRef.std_smult_pipe__02Ego) 
           && vlSelfRef.std_smult_pipe__DOT__comp__DOT__done_buf
           [0U]);
    if (vlSelfRef.std_smult_pipe__02Ereset) {
        vlSelfRef.std_smult_pipe__DOT__comp__DOT__out_tmp = 0ULL;
        vlSelfRef.std_smult_pipe__DOT__comp__DOT__ltmp = 0U;
        vlSelfRef.std_smult_pipe__DOT__comp__DOT__rtmp = 0U;
    } else if (vlSelfRef.std_smult_pipe__02Ego) {
        vlSelfRef.std_smult_pipe__DOT__comp__DOT__out_tmp 
            = ((((QData)((IData)((- (IData)((vlSelfRef.std_smult_pipe__DOT__comp__DOT__ltmp 
                                             >> 0x1fU))))) 
                 << 0x20U) | (QData)((IData)(vlSelfRef.std_smult_pipe__DOT__comp__DOT__ltmp))) 
               * (((QData)((IData)((- (IData)((vlSelfRef.std_smult_pipe__DOT__comp__DOT__rtmp 
                                               >> 0x1fU))))) 
                   << 0x20U) | (QData)((IData)(vlSelfRef.std_smult_pipe__DOT__comp__DOT__rtmp))));
        vlSelfRef.std_smult_pipe__DOT__comp__DOT__ltmp 
            = vlSelfRef.std_smult_pipe__02Eleft;
        vlSelfRef.std_smult_pipe__DOT__comp__DOT__rtmp 
            = vlSelfRef.std_smult_pipe__02Eright;
    } else {
        vlSelfRef.std_smult_pipe__DOT__comp__DOT__out_tmp 
            = vlSelfRef.std_smult_pipe__DOT__comp__DOT__out_tmp;
        vlSelfRef.std_smult_pipe__DOT__comp__DOT__ltmp = 0U;
        vlSelfRef.std_smult_pipe__DOT__comp__DOT__rtmp = 0U;
    }
    vlSelfRef.std_smult_pipe__DOT__comp__DOT__done_buf[0U] 
        = __VdlyVal__std_smult_pipe__DOT__comp__DOT__done_buf__v0;
    vlSelfRef.std_smult_pipe__DOT__comp__DOT__done_buf[1U] 
        = __VdlyVal__std_smult_pipe__DOT__comp__DOT__done_buf__v1;
    vlSelfRef.std_smult_pipe__02Edone = vlSelfRef.std_smult_pipe__DOT__comp__DOT__done_buf
        [1U];
    vlSelfRef.std_smult_pipe__02Eout = (IData)(vlSelfRef.std_smult_pipe__DOT__comp__DOT__out_tmp);
}

VL_INLINE_OPT void Vtri___024root___nba_sequent__TOP__4(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___nba_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    // Body
    vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__idx 
        = ((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__running)
            ? (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__idx)))
            : 0U);
    if (vlSelfRef.std_fp_sdiv_pipe__02Ego) {
        vlSelfRef.std_fp_sdiv_pipe__DOT__right_save 
            = vlSelfRef.std_fp_sdiv_pipe__DOT__right_abs;
        vlSelfRef.std_fp_sdiv_pipe__DOT__left_sign 
            = (1U & (vlSelfRef.std_fp_sdiv_pipe__02Eleft 
                     >> 0x1fU));
        vlSelfRef.std_fp_sdiv_pipe__DOT__right_sign 
            = (1U & (vlSelfRef.std_fp_sdiv_pipe__02Eright 
                     >> 0x1fU));
    } else {
        vlSelfRef.std_fp_sdiv_pipe__DOT__right_save 
            = vlSelfRef.std_fp_sdiv_pipe__DOT__right_save;
        vlSelfRef.std_fp_sdiv_pipe__DOT__left_sign 
            = (1U & (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__left_sign));
        vlSelfRef.std_fp_sdiv_pipe__DOT__right_sign 
            = (1U & (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__right_sign));
    }
    if (vlSelfRef.std_fp_sdiv_pipe__02Ereset) {
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_q = 0U;
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r = 0U;
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc = 0ULL;
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient = 0U;
    } else if (vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__start) {
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_q = 0U;
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r 
            = vlSelfRef.std_fp_sdiv_pipe__DOT__left_abs;
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc 
            = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__left_abs)) 
                                 >> 0x1fU));
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient 
            = ((IData)((QData)((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__left_abs))) 
               << 1U);
    } else {
        if (vlSelfRef.std_fp_sdiv_pipe__02Ego) {
            if (vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__dividend_is_zero) {
                vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_q = 0U;
                vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r = 0U;
            } else if (vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__finished) {
                vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_q 
                    = vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient_next;
                vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r 
                    = vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r;
            } else {
                vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_q 
                    = vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_q;
                vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r 
                    = ((vlSelfRef.std_fp_sdiv_pipe__DOT__right_abs 
                        <= vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r)
                        ? (vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r 
                           - vlSelfRef.std_fp_sdiv_pipe__DOT__right_abs)
                        : vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r);
            }
        } else {
            vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_q 
                = vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_q;
            vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r 
                = vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r;
        }
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc 
            = (0x1ffffffffULL & vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc_next);
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient 
            = vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient_next;
    }
    vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__running 
        = ((~ (((IData)(vlSelfRef.std_fp_sdiv_pipe__02Ereset) 
                | (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__finished)) 
               | (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__dividend_is_zero))) 
           & ((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__start) 
              | (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__running)));
    vlSelfRef.std_fp_sdiv_pipe__02Edone = ((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__dividend_is_zero) 
                                           | (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__finished));
    vlSelfRef.std_fp_sdiv_pipe__DOT__different_signs 
        = ((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__left_sign) 
           ^ (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__right_sign));
    vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__finished 
        = ((0x2fU == (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__idx)) 
           & (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__running));
    vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__start 
        = ((~ (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__running)) 
           & (IData)(vlSelfRef.std_fp_sdiv_pipe__02Ego));
    if ((vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc 
         >= (QData)((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__right_abs)))) {
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc 
                                 - (QData)((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__right_abs))));
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h57fb2b04__0 
            = (((QData)((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient 
                                          >> 0x1fU))));
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc_next 
            = vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h57fb2b04__0;
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h5969ae7c__0 
            = (1U | (vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient 
                     << 1U));
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient_next 
            = vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT____Vconcswap_1_h5969ae7c__0;
    } else {
        __Vtemp_9[0U] = vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient;
        __Vtemp_9[1U] = (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc);
        __Vtemp_9[2U] = (IData)((vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc 
                                 >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_10, __Vtemp_9, 1U);
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_10[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_10[1U]))));
        __Vtemp_13[0U] = vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient;
        __Vtemp_13[1U] = (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc);
        __Vtemp_13[2U] = (IData)((vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc 
                                  >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_14, __Vtemp_13, 1U);
        vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient_next 
            = __Vtemp_14[0U];
    }
    vlSelfRef.std_fp_sdiv_pipe__02Eout_quotient = ((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__different_signs)
                                                    ? 
                                                   (- vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_q)
                                                    : vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_q);
    vlSelfRef.std_fp_sdiv_pipe__DOT__out_rem_intermediate 
        = (((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__different_signs) 
            & (0U != vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r))
            ? (vlSelfRef.std_fp_sdiv_pipe__DOT__right_save 
               - vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r)
            : vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r);
    vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__dividend_is_zero 
        = ((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__start) 
           & (0U == vlSelfRef.std_fp_sdiv_pipe__DOT__left_abs));
    vlSelfRef.std_fp_sdiv_pipe__02Eout_remainder = 
        ((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__right_sign)
          ? (- vlSelfRef.std_fp_sdiv_pipe__DOT__out_rem_intermediate)
          : vlSelfRef.std_fp_sdiv_pipe__DOT__out_rem_intermediate);
}

VL_INLINE_OPT void Vtri___024root___nba_sequent__TOP__6(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___nba_sequent__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.init_one_reg__02Edone = ((1U & (~ (IData)(vlSelfRef.init_one_reg__02Ereset))) 
                                       && (IData)(vlSelfRef.write_en));
    if (vlSelfRef.init_one_reg__02Ereset) {
        vlSelfRef.init_one_reg__02Eout = 1U;
    } else if (vlSelfRef.write_en) {
        vlSelfRef.init_one_reg__02Eout = vlSelfRef.init_one_reg__02Ein;
    }
}

VL_INLINE_OPT void Vtri___024root___nba_sequent__TOP__7(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___nba_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_done 
        = ((1U & (~ (IData)(vlSelfRef.triangle_tb__DOT__reset))) 
           && (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_write_en));
    vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_done 
        = ((1U & (~ (IData)(vlSelfRef.triangle_tb__DOT__reset))) 
           && (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_write_en));
    vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_done 
        = ((1U & (~ (IData)(vlSelfRef.triangle_tb__DOT__reset))) 
           && (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_write_en));
    vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_done 
        = ((1U & (~ (IData)(vlSelfRef.triangle_tb__DOT__reset))) 
           && (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en));
    vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_done 
        = ((1U & (~ (IData)(vlSelfRef.triangle_tb__DOT__reset))) 
           && (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_write_en));
    vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_done 
        = ((1U & (~ (IData)(vlSelfRef.triangle_tb__DOT__reset))) 
           && (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_write_en));
    vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_done 
        = ((1U & (~ (IData)(vlSelfRef.triangle_tb__DOT__reset))) 
           && (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_write_en));
    if (vlSelfRef.triangle_tb__DOT__reset) {
        vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out = 0U;
        vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out = 0U;
        vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_out = 0U;
        vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out = 0U;
        vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_out = 0U;
        vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out = 0U;
        vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_out = 0U;
    } else {
        if (vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_write_en) {
            vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out 
                = vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_in;
        }
        if (vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_write_en) {
            vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out 
                = vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_in;
        }
        if (vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en) {
            vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_out 
                = ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en) 
                   & VL_LTS_III(32, ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                                      ? vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out
                                      : 0U), ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                                               ? vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_out
                                               : 0U)));
        }
        if (vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_write_en) {
            vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out 
                = vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_in;
        }
        if (vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_write_en) {
            vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_out 
                = vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_out;
        }
        if (vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_write_en) {
            vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out 
                = vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_in;
            vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_out 
                = ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in)
                    ? 0U : ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in)
                             ? vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_out
                             : 0U));
        }
    }
    vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_done_in 
        = ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_done) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_done));
    vlSelfRef.triangle_tb__DOT__dut__DOT___guard21 
        = ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_out) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out));
    vlSelfRef.triangle_tb__DOT__dut__DOT___guard44 
        = ((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_out)) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out));
    vlSelfRef.triangle_tb__DOT__dut__DOT__tdcc_done_in 
        = (5U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out));
}

void Vtri___024root___timing_commit(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x2000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc471045e__0.commit(
                                                   "@(posedge triangle_tb.dut.tdcc_done_in)");
    }
}

void Vtri___024root___timing_resume(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc471045e__0.resume(
                                                   "@(posedge triangle_tb.dut.tdcc_done_in)");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtri___024root___eval_triggers__act(Vtri___024root* vlSelf);

bool Vtri___024root___eval_phase__act(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<14> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtri___024root___eval_triggers__act(vlSelf);
    Vtri___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtri___024root___timing_resume(vlSelf);
        Vtri___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtri___024root___eval_phase__nba(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtri___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtri___024root___dump_triggers__ico(Vtri___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtri___024root___dump_triggers__nba(Vtri___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtri___024root___dump_triggers__act(Vtri___024root* vlSelf);
#endif  // VL_DEBUG

void Vtri___024root___eval(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtri___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtri___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtri___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtri___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtri___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtri___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtri___024root___eval_debug_assertions(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.write_en & 0xfeU))) {
        Verilated::overWidthError("write_en");}
    if (VL_UNLIKELY((vlSelfRef.init_one_reg__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("init_one_reg.clk");}
    if (VL_UNLIKELY((vlSelfRef.init_one_reg__02Ereset 
                     & 0xfeU))) {
        Verilated::overWidthError("init_one_reg.reset");}
    if (VL_UNLIKELY((vlSelfRef.std_fp_smult_pipe__02Ereset 
                     & 0xfeU))) {
        Verilated::overWidthError("std_fp_smult_pipe.reset");}
    if (VL_UNLIKELY((vlSelfRef.std_fp_smult_pipe__02Ego 
                     & 0xfeU))) {
        Verilated::overWidthError("std_fp_smult_pipe.go");}
    if (VL_UNLIKELY((vlSelfRef.std_fp_smult_pipe__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("std_fp_smult_pipe.clk");}
    if (VL_UNLIKELY((vlSelfRef.std_fp_sdiv_pipe__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("std_fp_sdiv_pipe.clk");}
    if (VL_UNLIKELY((vlSelfRef.std_fp_sdiv_pipe__02Ego 
                     & 0xfeU))) {
        Verilated::overWidthError("std_fp_sdiv_pipe.go");}
    if (VL_UNLIKELY((vlSelfRef.std_fp_sdiv_pipe__02Ereset 
                     & 0xfeU))) {
        Verilated::overWidthError("std_fp_sdiv_pipe.reset");}
    if (VL_UNLIKELY((vlSelfRef.std_mult_pipe__02Ereset 
                     & 0xfeU))) {
        Verilated::overWidthError("std_mult_pipe.reset");}
    if (VL_UNLIKELY((vlSelfRef.std_mult_pipe__02Ego 
                     & 0xfeU))) {
        Verilated::overWidthError("std_mult_pipe.go");}
    if (VL_UNLIKELY((vlSelfRef.std_mult_pipe__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("std_mult_pipe.clk");}
    if (VL_UNLIKELY((vlSelfRef.std_smult_pipe__02Ereset 
                     & 0xfeU))) {
        Verilated::overWidthError("std_smult_pipe.reset");}
    if (VL_UNLIKELY((vlSelfRef.std_smult_pipe__02Ego 
                     & 0xfeU))) {
        Verilated::overWidthError("std_smult_pipe.go");}
    if (VL_UNLIKELY((vlSelfRef.std_smult_pipe__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("std_smult_pipe.clk");}
    if (VL_UNLIKELY((vlSelfRef.std_sdiv_pipe__02Ereset 
                     & 0xfeU))) {
        Verilated::overWidthError("std_sdiv_pipe.reset");}
    if (VL_UNLIKELY((vlSelfRef.std_sdiv_pipe__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("std_sdiv_pipe.clk");}
    if (VL_UNLIKELY((vlSelfRef.std_sdiv_pipe__02Ego 
                     & 0xfeU))) {
        Verilated::overWidthError("std_sdiv_pipe.go");}
}
#endif  // VL_DEBUG
