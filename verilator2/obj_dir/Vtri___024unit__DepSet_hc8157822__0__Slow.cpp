// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtri.h for the primary calling header

#include "Vtri__pch.h"
#include "Vtri___024unit.h"

VL_ATTR_COLD void Vtri___024unit___ctor_var_reset(Vtri___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtri___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
