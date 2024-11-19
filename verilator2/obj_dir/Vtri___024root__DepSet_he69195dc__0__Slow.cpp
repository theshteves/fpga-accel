// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtri.h for the primary calling header

#include "Vtri__pch.h"
#include "Vtri__Syms.h"
#include "Vtri___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtri___024root___dump_triggers__stl(Vtri___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtri___024root___eval_triggers__stl(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtri___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtri___024root___stl_sequent__TOP__0(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ triangle_tb__DOT__dut__DOT___guard16;
    triangle_tb__DOT__dut__DOT___guard16 = 0;
    CData/*0:0*/ triangle_tb__DOT__dut__DOT___guard24;
    triangle_tb__DOT__dut__DOT___guard24 = 0;
    CData/*0:0*/ triangle_tb__DOT__dut__DOT___guard32;
    triangle_tb__DOT__dut__DOT___guard32 = 0;
    CData/*0:0*/ triangle_tb__DOT__dut__DOT___guard38;
    triangle_tb__DOT__dut__DOT___guard38 = 0;
    CData/*0:0*/ triangle_tb__DOT__dut__DOT___guard47;
    triangle_tb__DOT__dut__DOT___guard47 = 0;
    CData/*0:0*/ triangle_tb__DOT__dut__DOT___guard56;
    triangle_tb__DOT__dut__DOT___guard56 = 0;
    CData/*0:0*/ triangle_tb__DOT__dut__DOT___guard62;
    triangle_tb__DOT__dut__DOT___guard62 = 0;
    CData/*0:0*/ triangle_tb__DOT__dut__DOT___guard83;
    triangle_tb__DOT__dut__DOT___guard83 = 0;
    CData/*0:0*/ triangle_tb__DOT__dut__DOT___guard100;
    triangle_tb__DOT__dut__DOT___guard100 = 0;
    CData/*0:0*/ triangle_tb__DOT__dut__DOT____VdfgExtracted_hd45544ee__0;
    triangle_tb__DOT__dut__DOT____VdfgExtracted_hd45544ee__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    vlSelfRef.std_signext__02Eout = vlSelfRef.std_signext__02Ein;
    vlSelfRef.std_const_mult__02Eout = vlSelfRef.std_const_mult__02Ein;
    vlSelfRef.std_fp_smult_pipe__02Eout = (IData)((vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__out_tmp 
                                                   >> 0x10U));
    vlSelfRef.std_fp_smult_pipe__02Edone = vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__done_buf
        [1U];
    vlSelfRef.std_mult_pipe__02Eout = (IData)(vlSelfRef.std_mult_pipe__DOT__comp__DOT__out_tmp);
    vlSelfRef.std_mult_pipe__02Edone = vlSelfRef.std_mult_pipe__DOT__comp__DOT__done_buf
        [1U];
    vlSelfRef.std_smult_pipe__02Eout = (IData)(vlSelfRef.std_smult_pipe__DOT__comp__DOT__out_tmp);
    vlSelfRef.std_smult_pipe__02Edone = vlSelfRef.std_smult_pipe__DOT__comp__DOT__done_buf
        [1U];
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
    vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__finished 
        = ((0x2fU == (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__idx)) 
           & (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__running));
    vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__finished 
        = ((0U == vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient_msk) 
           & (IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__running));
    vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_write_en 
        = (((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_done)) 
            & (4U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out))) 
           & (IData)(vlSelfRef.triangle_tb__DOT__go));
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
    vlSelfRef.std_fp_sdiv_pipe__DOT__different_signs 
        = ((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__left_sign) 
           ^ (IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__right_sign));
    vlSelfRef.std_sdiv_pipe__DOT__different_signs = 
        ((IData)(vlSelfRef.std_sdiv_pipe__DOT__left_sign) 
         ^ (IData)(vlSelfRef.std_sdiv_pipe__DOT__right_sign));
    vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in 
        = (((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out)) 
            & (0U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out))) 
           & (IData)(vlSelfRef.triangle_tb__DOT__go));
    vlSelfRef.triangle_tb__DOT__dut__DOT__tdcc_done_in 
        = (5U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out));
    triangle_tb__DOT__dut__DOT___guard62 = (((4U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)) 
                                             & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_done)) 
                                            & (IData)(vlSelfRef.triangle_tb__DOT__go));
    triangle_tb__DOT__dut__DOT___guard16 = (((0U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)) 
                                             & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out)) 
                                            & (IData)(vlSelfRef.triangle_tb__DOT__go));
    vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en 
        = ((((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out)) 
             & (1U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out))) 
            | ((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out)) 
               & (3U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)))) 
           & (IData)(vlSelfRef.triangle_tb__DOT__go));
    vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_done_in 
        = ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_done) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_done));
    vlSelfRef.triangle_tb__DOT__dut__DOT___guard21 
        = ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_out) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out));
    vlSelfRef.triangle_tb__DOT__dut__DOT___guard44 
        = ((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_out)) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out));
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
    vlSelfRef.std_sdiv_pipe__02Eout_quotient = ((IData)(vlSelfRef.std_sdiv_pipe__DOT__different_signs)
                                                 ? 
                                                (- vlSelfRef.std_sdiv_pipe__DOT__comp_out_q)
                                                 : vlSelfRef.std_sdiv_pipe__DOT__comp_out_q);
    vlSelfRef.std_sdiv_pipe__DOT__out_rem_intermediate 
        = (((IData)(vlSelfRef.std_sdiv_pipe__DOT__different_signs) 
            & (0U != vlSelfRef.std_sdiv_pipe__DOT__comp_out_r))
            ? (vlSelfRef.std_sdiv_pipe__DOT__right_save 
               - vlSelfRef.std_sdiv_pipe__DOT__comp_out_r)
            : vlSelfRef.std_sdiv_pipe__DOT__comp_out_r);
    vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_in 
        = ((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out)) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in));
    vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_in 
        = ((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out)) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en));
    triangle_tb__DOT__dut__DOT___guard38 = (((2U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)) 
                                             & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_done_in)) 
                                            & (IData)(vlSelfRef.triangle_tb__DOT__go));
    vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in 
        = (((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_done_in)) 
            & (2U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out))) 
           & (IData)(vlSelfRef.triangle_tb__DOT__go));
    triangle_tb__DOT__dut__DOT___guard24 = (((1U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)) 
                                             & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT___guard21)) 
                                            & (IData)(vlSelfRef.triangle_tb__DOT__go));
    triangle_tb__DOT__dut__DOT___guard32 = (((3U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)) 
                                             & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT___guard21)) 
                                            & (IData)(vlSelfRef.triangle_tb__DOT__go));
    triangle_tb__DOT__dut__DOT___guard47 = (((1U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)) 
                                             & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT___guard44)) 
                                            & (IData)(vlSelfRef.triangle_tb__DOT__go));
    triangle_tb__DOT__dut__DOT___guard56 = (((3U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)) 
                                             & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT___guard44)) 
                                            & (IData)(vlSelfRef.triangle_tb__DOT__go));
    vlSelfRef.std_fp_sdiv_pipe__02Eout_remainder = 
        ((IData)(vlSelfRef.std_fp_sdiv_pipe__DOT__right_sign)
          ? (- vlSelfRef.std_fp_sdiv_pipe__DOT__out_rem_intermediate)
          : vlSelfRef.std_fp_sdiv_pipe__DOT__out_rem_intermediate);
    vlSelfRef.std_sdiv_pipe__02Eout_remainder = ((IData)(vlSelfRef.std_sdiv_pipe__DOT__right_sign)
                                                  ? 
                                                 (- vlSelfRef.std_sdiv_pipe__DOT__out_rem_intermediate)
                                                  : vlSelfRef.std_sdiv_pipe__DOT__out_rem_intermediate);
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_in))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tri.fud-generated-from-calyx-native.with-timing.sv:1430: Assertion failed in %Ntriangle_tb.dut: Multiple assignment to port `signal_reg.in'.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 1430, "", false);
    }
    vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_write_en 
        = ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out) 
           | (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_in))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tri.fud-generated-from-calyx-native.with-timing.sv:1364: Assertion failed in %Ntriangle_tb.dut: Multiple assignment to port `signal_reg0.in'.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 1364, "", false);
    }
    vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_write_en 
        = ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out) 
           | (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tri.fud-generated-from-calyx-native.with-timing.sv:1391: Assertion failed in %Ntriangle_tb.dut: Multiple assignment to port `std_add_2.left'.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 1391, "", false);
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tri.fud-generated-from-calyx-native.with-timing.sv:1400: Assertion failed in %Ntriangle_tb.dut: Multiple assignment to port `std_add_2.right'.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 1400, "", false);
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tri.fud-generated-from-calyx-native.with-timing.sv:1412: Assertion failed in %Ntriangle_tb.dut: Multiple assignment to port `while_0_arg0_reg.in'.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 1412, "", false);
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tri.fud-generated-from-calyx-native.with-timing.sv:1446: Assertion failed in %Ntriangle_tb.dut: Multiple assignment to port `while_0_arg1_reg.in'.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 1446, "", false);
    }
    vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_write_en 
        = ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in) 
           | (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in));
    vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_in 
        = ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in)
            ? ((IData)(1U) + vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out)
            : ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in)
                ? 1U : 0U));
    vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_left 
        = ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
            ? vlSelfRef.triangle_tb__DOT__in0 : ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in)
                                                  ? vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_out
                                                  : 0U));
    triangle_tb__DOT__dut__DOT___guard83 = ((IData)(triangle_tb__DOT__dut__DOT___guard24) 
                                            | (IData)(triangle_tb__DOT__dut__DOT___guard32));
    vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_write_en 
        = ((((((((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__tdcc_done_in) 
                 | (IData)(triangle_tb__DOT__dut__DOT___guard16)) 
                | (IData)(triangle_tb__DOT__dut__DOT___guard24)) 
               | (IData)(triangle_tb__DOT__dut__DOT___guard32)) 
              | (IData)(triangle_tb__DOT__dut__DOT___guard38)) 
             | (IData)(triangle_tb__DOT__dut__DOT___guard47)) 
            | (IData)(triangle_tb__DOT__dut__DOT___guard56)) 
           | (IData)(triangle_tb__DOT__dut__DOT___guard62));
    triangle_tb__DOT__dut__DOT___guard100 = ((IData)(triangle_tb__DOT__dut__DOT___guard47) 
                                             | (IData)(triangle_tb__DOT__dut__DOT___guard56));
    vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_out 
        = (vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_left 
           + ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in)
               ? vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out
               : ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                   ? 1U : 0U)));
    vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_in = 
        ((IData)(triangle_tb__DOT__dut__DOT___guard62)
          ? 5U : ((IData)(triangle_tb__DOT__dut__DOT___guard83)
                   ? 2U : ((IData)(triangle_tb__DOT__dut__DOT___guard100)
                            ? 4U : ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__tdcc_done_in)
                                     ? 0U : ((IData)(triangle_tb__DOT__dut__DOT___guard16)
                                              ? 1U : 
                                             ((IData)(triangle_tb__DOT__dut__DOT___guard38)
                                               ? 3U
                                               : 0U))))));
    triangle_tb__DOT__dut__DOT____VdfgExtracted_hd45544ee__0 
        = (1U & (~ VL_ONEHOT0_I((((IData)(triangle_tb__DOT__dut__DOT___guard38) 
                                  << 5U) | (((IData)(triangle_tb__DOT__dut__DOT___guard16) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__tdcc_done_in) 
                                                << 3U) 
                                               | (((IData)(triangle_tb__DOT__dut__DOT___guard100) 
                                                   << 2U) 
                                                  | (((IData)(triangle_tb__DOT__dut__DOT___guard83) 
                                                      << 1U) 
                                                     | (IData)(triangle_tb__DOT__dut__DOT___guard62)))))))));
    if (VL_UNLIKELY(triangle_tb__DOT__dut__DOT____VdfgExtracted_hd45544ee__0)) {
        VL_WRITEF_NX("[%0t] %%Fatal: tri.fud-generated-from-calyx-native.with-timing.sv:1352: Assertion failed in %Ntriangle_tb.dut: Multiple assignment to port `fsm.in'.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 1352, "", false);
    }
}
