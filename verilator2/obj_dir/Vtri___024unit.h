// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtri.h for the primary calling header

#ifndef VERILATED_VTRI___024UNIT_H_
#define VERILATED_VTRI___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtri__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtri___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vtri__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtri___024unit(Vtri__Syms* symsp, const char* v__name);
    ~Vtri___024unit();
    VL_UNCOPYABLE(Vtri___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
