// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtri__pch.h"
#include "Vtri.h"
#include "Vtri___024root.h"
#include "Vtri___024unit.h"

// FUNCTIONS
Vtri__Syms::~Vtri__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtri__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtri__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtri__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtri__Syms::Vtri__Syms(VerilatedContext* contextp, const char* namep, Vtri* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(431);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_std_sdiv_pipe.configure(this, name(), "std_sdiv_pipe", "std_sdiv_pipe", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_std_sdiv_pipe__comp.configure(this, name(), "std_sdiv_pipe.comp", "comp", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_triangle_tb.configure(this, name(), "triangle_tb", "triangle_tb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_triangle_tb__dut.configure(this, name(), "triangle_tb.dut", "dut", -9, VerilatedScope::SCOPE_OTHER);
}
