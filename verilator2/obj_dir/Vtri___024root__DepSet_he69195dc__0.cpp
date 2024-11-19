// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtri.h for the primary calling header

#include "Vtri__pch.h"
#include "Vtri__Syms.h"
#include "Vtri___024root.h"

VL_INLINE_OPT VlCoroutine Vtri___024root___eval_initial__TOP__Vtiming__0(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6e676c65U;
    __Vtemp_1[2U] = 0x74726961U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.triangle_tb__DOT__clk = 0U;
    vlSelfRef.triangle_tb__DOT__reset = 1U;
    vlSelfRef.triangle_tb__DOT__go = 0U;
    vlSelfRef.triangle_tb__DOT__in0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "../tri.tb.sv", 
                                         38);
    vlSelfRef.triangle_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../tri.tb.sv", 
                                         41);
    vlSelfRef.triangle_tb__DOT__in0 = 5U;
    vlSelfRef.triangle_tb__DOT__go = 1U;
    co_await vlSelfRef.__VtrigSched_hc471045e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge triangle_tb.dut.tdcc_done_in)", 
                                                         "../tri.tb.sv", 
                                                         46);
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../tri.tb.sv", 
                                         47);
    vlSelfRef.triangle_tb__DOT__go = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tri.tb.sv", 
                                         52);
    VL_FINISH_MT("../tri.tb.sv", 52, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtri___024root___dump_triggers__ico(Vtri___024root* vlSelf);
#endif  // VL_DEBUG

void Vtri___024root___eval_triggers__ico(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtri___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtri___024root___dump_triggers__act(Vtri___024root* vlSelf);
#endif  // VL_DEBUG

void Vtri___024root___eval_triggers__act(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.init_one_reg__02Eclk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__init_one_reg__02Eclk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.std_fp_smult_pipe__02Eclk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__std_fp_smult_pipe__02Eclk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.std_fp_sdiv_pipe__02Eclk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__std_fp_sdiv_pipe__02Eclk__0))));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.std_mult_pipe__02Eclk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__std_mult_pipe__02Eclk__0))));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.std_smult_pipe__02Eclk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__std_smult_pipe__02Eclk__0))));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.std_sdiv_pipe__02Eclk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__std_sdiv_pipe__02Eclk__0))));
    vlSelfRef.__VactTriggered.set(6U, (vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_out 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__dut__DOT__ret_arg0_reg_out__0));
    vlSelfRef.__VactTriggered.set(7U, ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__tdcc_done_in) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__dut__DOT__tdcc_done_in__0)));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSelfRef.triangle_tb__DOT__go) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__go__0)));
    vlSelfRef.__VactTriggered.set(9U, (vlSelfRef.triangle_tb__DOT__in0 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__in0__0));
    vlSelfRef.__VactTriggered.set(0xaU, ((IData)(vlSelfRef.triangle_tb__DOT__reset) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__reset__0)));
    vlSelfRef.__VactTriggered.set(0xbU, ((IData)(vlSelfRef.triangle_tb__DOT__clk) 
                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(0xcU, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(0xdU, ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__tdcc_done_in) 
                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__triangle_tb__DOT__dut__DOT__tdcc_done_in__0))));
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
        vlSelfRef.__VactTriggered.set(8U, 1U);
        vlSelfRef.__VactTriggered.set(9U, 1U);
        vlSelfRef.__VactTriggered.set(0xaU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtri___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtri___024root___act_comb__TOP__0(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___act_comb__TOP__0\n"); );
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
    // Body
    vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_write_en 
        = (((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_done)) 
            & (4U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out))) 
           & (IData)(vlSelfRef.triangle_tb__DOT__go));
    vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in 
        = (((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out)) 
            & (0U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out))) 
           & (IData)(vlSelfRef.triangle_tb__DOT__go));
    triangle_tb__DOT__dut__DOT___guard62 = (((4U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)) 
                                             & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_done)) 
                                            & (IData)(vlSelfRef.triangle_tb__DOT__go));
    triangle_tb__DOT__dut__DOT___guard16 = (((0U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)) 
                                             & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out)) 
                                            & (IData)(vlSelfRef.triangle_tb__DOT__go));
    triangle_tb__DOT__dut__DOT___guard38 = (((2U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)) 
                                             & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_done_in)) 
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
    vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en 
        = ((((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out)) 
             & (1U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out))) 
            | ((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out)) 
               & (3U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)))) 
           & (IData)(vlSelfRef.triangle_tb__DOT__go));
    vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in 
        = (((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_done_in)) 
            & (2U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out))) 
           & (IData)(vlSelfRef.triangle_tb__DOT__go));
    vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_in 
        = ((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out)) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in));
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
    vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_in 
        = ((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out)) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en));
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
    vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_out 
        = (vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_left 
           + ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in)
               ? vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out
               : ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                   ? 1U : 0U)));
    if (VL_UNLIKELY(triangle_tb__DOT__dut__DOT____VdfgExtracted_hd45544ee__0)) {
        VL_WRITEF_NX("[%0t] %%Fatal: tri.fud-generated-from-calyx-native.with-timing.sv:1352: Assertion failed in %Ntriangle_tb.dut: Multiple assignment to port `fsm.in'.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 1352, "", false);
    }
}

VL_INLINE_OPT void Vtri___024root___nba_sequent__TOP__0(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__std_sdiv_pipe__DOT__comp__DOT__quotient;
    __Vdly__std_sdiv_pipe__DOT__comp__DOT__quotient = 0;
    IData/*31:0*/ __Vdly__std_sdiv_pipe__DOT__comp__DOT__dividend;
    __Vdly__std_sdiv_pipe__DOT__comp__DOT__dividend = 0;
    QData/*62:0*/ __Vdly__std_sdiv_pipe__DOT__comp__DOT__divisor;
    __Vdly__std_sdiv_pipe__DOT__comp__DOT__divisor = 0;
    // Body
    __Vdly__std_sdiv_pipe__DOT__comp__DOT__dividend 
        = vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend;
    __Vdly__std_sdiv_pipe__DOT__comp__DOT__divisor 
        = vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__divisor;
    __Vdly__std_sdiv_pipe__DOT__comp__DOT__quotient 
        = vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient;
    if (VL_UNLIKELY(((IData)(vlSelfRef.std_sdiv_pipe__02Edone) 
                     & (vlSelfRef.std_sdiv_pipe__02Eout_quotient 
                        != VL_DIVS_III(32, vlSelfRef.std_sdiv_pipe__DOT__l, vlSelfRef.std_sdiv_pipe__DOT__r))))) {
        VL_WRITEF_NX("[%0t] %%Error: tri.fud-generated-from-calyx-native.with-timing.sv:646: Assertion failed in %Nstd_sdiv_pipe: \nstd_sdiv_pipe (Quotient): Computed and golden outputs do not match!\nleft: %0d  right: %0d\nexpected: %0d  computed: %0d \n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.std_sdiv_pipe__DOT__l,
                     32,vlSelfRef.std_sdiv_pipe__DOT__r,
                     32,VL_DIVS_III(32, vlSelfRef.std_sdiv_pipe__DOT__l, vlSelfRef.std_sdiv_pipe__DOT__r),
                     32,vlSelfRef.std_sdiv_pipe__02Eout_quotient);
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 646, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.std_sdiv_pipe__02Edone) 
                     & (vlSelfRef.std_sdiv_pipe__02Eout_remainder 
                        != VL_MODDIVS_III(32, (VL_MODDIVS_III(32, vlSelfRef.std_sdiv_pipe__DOT__l, vlSelfRef.std_sdiv_pipe__DOT__r) 
                                               + vlSelfRef.std_sdiv_pipe__DOT__r), vlSelfRef.std_sdiv_pipe__DOT__r))))) {
        VL_WRITEF_NX("[%0t] %%Error: tri.fud-generated-from-calyx-native.with-timing.sv:654: Assertion failed in %Nstd_sdiv_pipe: \nstd_sdiv_pipe (Remainder): Computed and golden outputs do not match!\nleft: %0d  right: %0d\nexpected: %0d  computed: %0d \n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.std_sdiv_pipe__DOT__l,
                     32,vlSelfRef.std_sdiv_pipe__DOT__r,
                     32,VL_MODDIVS_III(32, (VL_MODDIVS_III(32, vlSelfRef.std_sdiv_pipe__DOT__l, vlSelfRef.std_sdiv_pipe__DOT__r) 
                                            + vlSelfRef.std_sdiv_pipe__DOT__r), vlSelfRef.std_sdiv_pipe__DOT__r),
                     32,vlSelfRef.std_sdiv_pipe__02Eout_remainder);
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 654, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.std_sdiv_pipe__02Edone) 
                     & (vlSelfRef.std_sdiv_pipe__DOT__comp_out_r 
                        != VL_MODDIV_III(32, vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__l, vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__r))))) {
        VL_WRITEF_NX("[%0t] %%Error: tri.fud-generated-from-calyx-native.with-timing.sv:504: Assertion failed in %Nstd_sdiv_pipe.comp: \nstd_div_pipe (Remainder): Computed and golden outputs do not match!\nleft: %0#  right: %0#\nexpected: %0#  computed: %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__l,
                     32,vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__r,
                     32,VL_MODDIV_III(32, vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__l, vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__r),
                     32,vlSelfRef.std_sdiv_pipe__DOT__comp_out_r);
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 504, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.std_sdiv_pipe__02Edone) 
                     & (vlSelfRef.std_sdiv_pipe__DOT__comp_out_q 
                        != VL_DIV_III(32, vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__l, vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__r))))) {
        VL_WRITEF_NX("[%0t] %%Error: tri.fud-generated-from-calyx-native.with-timing.sv:513: Assertion failed in %Nstd_sdiv_pipe.comp: \nstd_div_pipe (Quotient): Computed and golden outputs do not match!\nleft: %0#  right: %0#\nexpected: %0#  computed: %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__l,
                     32,vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__r,
                     32,VL_DIV_III(32, vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__l, vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__r),
                     32,vlSelfRef.std_sdiv_pipe__DOT__comp_out_q);
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 513, "");
    }
    if (vlSelfRef.std_sdiv_pipe__02Ego) {
        vlSelfRef.std_sdiv_pipe__DOT__l = vlSelfRef.std_sdiv_pipe__02Eleft;
        vlSelfRef.std_sdiv_pipe__DOT__r = vlSelfRef.std_sdiv_pipe__02Eright;
        vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__r 
            = vlSelfRef.std_sdiv_pipe__DOT__right_abs;
        vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__l 
            = vlSelfRef.std_sdiv_pipe__DOT__left_abs;
        vlSelfRef.std_sdiv_pipe__DOT__right_save = vlSelfRef.std_sdiv_pipe__DOT__right_abs;
        vlSelfRef.std_sdiv_pipe__DOT__left_sign = (1U 
                                                   & (vlSelfRef.std_sdiv_pipe__02Eleft 
                                                      >> 0x1fU));
        vlSelfRef.std_sdiv_pipe__DOT__right_sign = 
            (1U & (vlSelfRef.std_sdiv_pipe__02Eright 
                   >> 0x1fU));
    } else {
        vlSelfRef.std_sdiv_pipe__DOT__l = vlSelfRef.std_sdiv_pipe__DOT__l;
        vlSelfRef.std_sdiv_pipe__DOT__r = vlSelfRef.std_sdiv_pipe__DOT__r;
        vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__r 
            = vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__r;
        vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__l 
            = vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__l;
        vlSelfRef.std_sdiv_pipe__DOT__right_save = vlSelfRef.std_sdiv_pipe__DOT__right_save;
        vlSelfRef.std_sdiv_pipe__DOT__left_sign = (1U 
                                                   & (IData)(vlSelfRef.std_sdiv_pipe__DOT__left_sign));
        vlSelfRef.std_sdiv_pipe__DOT__right_sign = 
            (1U & (IData)(vlSelfRef.std_sdiv_pipe__DOT__right_sign));
    }
    if (vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__start) {
        __Vdly__std_sdiv_pipe__DOT__comp__DOT__dividend 
            = vlSelfRef.std_sdiv_pipe__DOT__left_abs;
        __Vdly__std_sdiv_pipe__DOT__comp__DOT__divisor 
            = (0x7fffffffffffffffULL & VL_SHIFTL_QQI(63,63,32, (QData)((IData)(vlSelfRef.std_sdiv_pipe__DOT__right_abs)), 0x1fU));
        __Vdly__std_sdiv_pipe__DOT__comp__DOT__quotient = 0U;
        vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient_msk = 0x80000000U;
    } else {
        if ((vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__divisor 
             <= (QData)((IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend)))) {
            __Vdly__std_sdiv_pipe__DOT__comp__DOT__dividend 
                = (vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend 
                   - (IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__divisor));
            __Vdly__std_sdiv_pipe__DOT__comp__DOT__quotient 
                = (vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient 
                   | vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient_msk);
        } else {
            __Vdly__std_sdiv_pipe__DOT__comp__DOT__dividend 
                = vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend;
            __Vdly__std_sdiv_pipe__DOT__comp__DOT__quotient 
                = vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient;
        }
        __Vdly__std_sdiv_pipe__DOT__comp__DOT__divisor 
            = (0x7fffffffffffffffULL & ((IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__finished)
                                         ? 0ULL : VL_SHIFTR_QQI(63,63,32, vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__divisor, 1U)));
        vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient_msk 
            = ((IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__running)
                ? VL_SHIFTR_III(32,32,32, vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient_msk, 1U)
                : vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient_msk);
    }
    if (((IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend_is_zero) 
         | (IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__start))) {
        vlSelfRef.std_sdiv_pipe__DOT__comp_out_q = 0U;
        vlSelfRef.std_sdiv_pipe__DOT__comp_out_r = 0U;
    } else if (vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__finished) {
        vlSelfRef.std_sdiv_pipe__DOT__comp_out_q = vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient;
        vlSelfRef.std_sdiv_pipe__DOT__comp_out_r = vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend;
    } else {
        vlSelfRef.std_sdiv_pipe__DOT__comp_out_q = vlSelfRef.std_sdiv_pipe__DOT__comp_out_q;
        vlSelfRef.std_sdiv_pipe__DOT__comp_out_r = vlSelfRef.std_sdiv_pipe__DOT__comp_out_r;
    }
    vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__running 
        = ((~ (((IData)(vlSelfRef.std_sdiv_pipe__02Ereset) 
                | (IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__finished)) 
               | (IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend_is_zero))) 
           & ((IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__start) 
              | (IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__running)));
    vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__divisor 
        = __Vdly__std_sdiv_pipe__DOT__comp__DOT__divisor;
    vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient 
        = __Vdly__std_sdiv_pipe__DOT__comp__DOT__quotient;
    vlSelfRef.std_sdiv_pipe__02Edone = ((IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__finished) 
                                        | (IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend_is_zero));
    vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend 
        = __Vdly__std_sdiv_pipe__DOT__comp__DOT__dividend;
    vlSelfRef.std_sdiv_pipe__DOT__different_signs = 
        ((IData)(vlSelfRef.std_sdiv_pipe__DOT__left_sign) 
         ^ (IData)(vlSelfRef.std_sdiv_pipe__DOT__right_sign));
    vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__finished 
        = ((0U == vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient_msk) 
           & (IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__running));
    vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__start 
        = ((~ (IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__running)) 
           & (IData)(vlSelfRef.std_sdiv_pipe__02Ego));
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
    vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend_is_zero 
        = ((IData)(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__start) 
           & (0U == vlSelfRef.std_sdiv_pipe__DOT__left_abs));
    vlSelfRef.std_sdiv_pipe__02Eout_remainder = ((IData)(vlSelfRef.std_sdiv_pipe__DOT__right_sign)
                                                  ? 
                                                 (- vlSelfRef.std_sdiv_pipe__DOT__out_rem_intermediate)
                                                  : vlSelfRef.std_sdiv_pipe__DOT__out_rem_intermediate);
}

VL_INLINE_OPT void Vtri___024root___nba_sequent__TOP__5(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF_NX("Time=%0t reset=%b go=%b in0=%0# out0=%0# done=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.triangle_tb__DOT__reset),
                     1,vlSelfRef.triangle_tb__DOT__go,
                     32,vlSelfRef.triangle_tb__DOT__in0,
                     32,vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_out,
                     1,(IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__tdcc_done_in));
    }
}

VL_INLINE_OPT void Vtri___024root___nba_comb__TOP__0(Vtri___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root___nba_comb__TOP__0\n"); );
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
    // Body
    vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_write_en 
        = (((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_done)) 
            & (4U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out))) 
           & (IData)(vlSelfRef.triangle_tb__DOT__go));
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
    triangle_tb__DOT__dut__DOT___guard38 = (((2U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out)) 
                                             & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_done_in)) 
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
    vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in 
        = (((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out)) 
            & (0U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out))) 
           & (IData)(vlSelfRef.triangle_tb__DOT__go));
    vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in 
        = (((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_done_in)) 
            & (2U == (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out))) 
           & (IData)(vlSelfRef.triangle_tb__DOT__go));
    vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_in 
        = ((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out)) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en));
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
    vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_in 
        = ((~ (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out)) 
           & (IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in));
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
    vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_out 
        = (vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_left 
           + ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in)
               ? vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out
               : ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                   ? 1U : 0U)));
    if (VL_UNLIKELY(triangle_tb__DOT__dut__DOT____VdfgExtracted_hd45544ee__0)) {
        VL_WRITEF_NX("[%0t] %%Fatal: tri.fud-generated-from-calyx-native.with-timing.sv:1352: Assertion failed in %Ntriangle_tb.dut: Multiple assignment to port `fsm.in'.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../tri.fud-generated-from-calyx-native.with-timing.sv", 1352, "", false);
    }
}
