// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtri.h for the primary calling header

#include "Vtri__pch.h"
#include "Vtri__Syms.h"
#include "Vtri___024unit.h"

void Vtri___024unit___ctor_var_reset(Vtri___024unit* vlSelf);

Vtri___024unit::Vtri___024unit(Vtri__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtri___024unit___ctor_var_reset(this);
}

void Vtri___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtri___024unit::~Vtri___024unit() {
}
