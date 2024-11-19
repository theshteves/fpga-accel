// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtri.h for the primary calling header

#include "Vtri__pch.h"
#include "Vtri__Syms.h"
#include "Vtri___024root.h"

void Vtri___024root___ctor_var_reset(Vtri___024root* vlSelf);

Vtri___024root::Vtri___024root(Vtri__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtri___024root___ctor_var_reset(this);
}

void Vtri___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtri___024root::~Vtri___024root() {
}
