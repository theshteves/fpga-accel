// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTRI__SYMS_H_
#define VERILATED_VTRI__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtri.h"

// INCLUDE MODULE CLASSES
#include "Vtri___024root.h"
#include "Vtri___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtri__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtri* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtri___024root                 TOP;
    Vtri___024unit                 TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_std_sdiv_pipe;
    VerilatedScope __Vscope_std_sdiv_pipe__comp;
    VerilatedScope __Vscope_triangle_tb;
    VerilatedScope __Vscope_triangle_tb__dut;

    // CONSTRUCTORS
    Vtri__Syms(VerilatedContext* contextp, const char* namep, Vtri* modelp);
    ~Vtri__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
