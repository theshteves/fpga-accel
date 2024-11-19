// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTRI_H_
#define VERILATED_VTRI_H_  // guard

#include "verilated.h"

class Vtri__Syms;
class Vtri___024root;
class VerilatedVcdC;
class Vtri___024unit;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtri VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtri__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&init_one_reg__02Eclk,0,0);
    VL_IN8(&std_fp_smult_pipe__02Eclk,0,0);
    VL_IN8(&std_fp_sdiv_pipe__02Eclk,0,0);
    VL_IN8(&std_mult_pipe__02Eclk,0,0);
    VL_IN8(&std_smult_pipe__02Eclk,0,0);
    VL_IN8(&std_sdiv_pipe__02Eclk,0,0);
    VL_OUT8(&std_fp_gt__02Eout,0,0);
    VL_OUT8(&std_fp_sgt__02Eout,0,0);
    VL_OUT8(&std_fp_slt__02Eout,0,0);
    VL_OUT8(&std_sgt__02Eout,0,0);
    VL_OUT8(&std_seq__02Eout,0,0);
    VL_OUT8(&std_sneq__02Eout,0,0);
    VL_OUT8(&std_sge__02Eout,0,0);
    VL_OUT8(&std_sle__02Eout,0,0);
    VL_IN8(&write_en,0,0);
    VL_IN8(&init_one_reg__02Ereset,0,0);
    VL_OUT8(&init_one_reg__02Edone,0,0);
    VL_IN8(&std_fp_smult_pipe__02Ereset,0,0);
    VL_IN8(&std_fp_smult_pipe__02Ego,0,0);
    VL_OUT8(&std_fp_smult_pipe__02Edone,0,0);
    VL_IN8(&std_fp_sdiv_pipe__02Ego,0,0);
    VL_IN8(&std_fp_sdiv_pipe__02Ereset,0,0);
    VL_OUT8(&std_fp_sdiv_pipe__02Edone,0,0);
    VL_IN8(&std_mult_pipe__02Ereset,0,0);
    VL_IN8(&std_mult_pipe__02Ego,0,0);
    VL_OUT8(&std_mult_pipe__02Edone,0,0);
    VL_IN8(&std_smult_pipe__02Ereset,0,0);
    VL_IN8(&std_smult_pipe__02Ego,0,0);
    VL_OUT8(&std_smult_pipe__02Edone,0,0);
    VL_IN8(&std_sdiv_pipe__02Ereset,0,0);
    VL_IN8(&std_sdiv_pipe__02Ego,0,0);
    VL_OUT8(&std_sdiv_pipe__02Edone,0,0);
    VL_IN(&std_fp_add__02Eleft,31,0);
    VL_IN(&std_fp_add__02Eright,31,0);
    VL_OUT(&std_fp_add__02Eout,31,0);
    VL_IN(&std_fp_sub__02Eleft,31,0);
    VL_IN(&std_fp_sub__02Eright,31,0);
    VL_OUT(&std_fp_sub__02Eout,31,0);
    VL_IN(&std_fp_gt__02Eleft,31,0);
    VL_IN(&std_fp_gt__02Eright,31,0);
    VL_IN(&std_fp_sadd__02Eleft,31,0);
    VL_IN(&std_fp_sadd__02Eright,31,0);
    VL_OUT(&std_fp_sadd__02Eout,31,0);
    VL_IN(&std_fp_ssub__02Eleft,31,0);
    VL_IN(&std_fp_ssub__02Eright,31,0);
    VL_OUT(&std_fp_ssub__02Eout,31,0);
    VL_IN(&std_fp_sgt__02Eleft,31,0);
    VL_IN(&std_fp_sgt__02Eright,31,0);
    VL_IN(&std_fp_slt__02Eleft,31,0);
    VL_IN(&std_fp_slt__02Eright,31,0);
    VL_IN(&std_sadd__02Eleft,31,0);
    VL_IN(&std_sadd__02Eright,31,0);
    VL_OUT(&std_sadd__02Eout,31,0);
    VL_IN(&std_ssub__02Eleft,31,0);
    VL_IN(&std_ssub__02Eright,31,0);
    VL_OUT(&std_ssub__02Eout,31,0);
    VL_IN(&std_sgt__02Eleft,31,0);
    VL_IN(&std_sgt__02Eright,31,0);
    VL_IN(&std_seq__02Eleft,31,0);
    VL_IN(&std_seq__02Eright,31,0);
    VL_IN(&std_sneq__02Eleft,31,0);
    VL_IN(&std_sneq__02Eright,31,0);
    VL_IN(&std_sge__02Eleft,31,0);
    VL_IN(&std_sge__02Eright,31,0);
    VL_IN(&std_sle__02Eleft,31,0);
    VL_IN(&std_sle__02Eright,31,0);
    VL_IN(&std_slsh__02Eleft,31,0);
    VL_IN(&std_slsh__02Eright,31,0);
    VL_OUT(&std_slsh__02Eout,31,0);
    VL_IN(&std_srsh__02Eleft,31,0);
    VL_IN(&std_srsh__02Eright,31,0);
    VL_OUT(&std_srsh__02Eout,31,0);
    VL_IN(&std_signext__02Ein,31,0);
    VL_OUT(&std_signext__02Eout,31,0);
    VL_IN(&std_const_mult__02Ein,31,0);
    VL_OUT(&std_const_mult__02Eout,31,0);
    VL_OUT(&std_const__02Eout,31,0);
    VL_IN(&std_lsh__02Eleft,31,0);
    VL_IN(&std_lsh__02Eright,31,0);
    VL_OUT(&std_lsh__02Eout,31,0);
    VL_IN(&init_one_reg__02Ein,31,0);
    VL_OUT(&init_one_reg__02Eout,31,0);
    VL_IN(&std_fp_smult_pipe__02Eleft,31,0);
    VL_IN(&std_fp_smult_pipe__02Eright,31,0);
    VL_OUT(&std_fp_smult_pipe__02Eout,31,0);
    VL_IN(&std_fp_sdiv_pipe__02Eleft,31,0);
    VL_IN(&std_fp_sdiv_pipe__02Eright,31,0);
    VL_OUT(&std_fp_sdiv_pipe__02Eout_quotient,31,0);
    VL_OUT(&std_fp_sdiv_pipe__02Eout_remainder,31,0);
    VL_IN(&std_mult_pipe__02Eleft,31,0);
    VL_IN(&std_mult_pipe__02Eright,31,0);
    VL_OUT(&std_mult_pipe__02Eout,31,0);
    VL_IN(&std_smult_pipe__02Eleft,31,0);
    VL_IN(&std_smult_pipe__02Eright,31,0);
    VL_OUT(&std_smult_pipe__02Eout,31,0);
    VL_IN(&std_sdiv_pipe__02Eleft,31,0);
    VL_IN(&std_sdiv_pipe__02Eright,31,0);
    VL_OUT(&std_sdiv_pipe__02Eout_quotient,31,0);
    VL_OUT(&std_sdiv_pipe__02Eout_remainder,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtri___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtri___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtri(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtri(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtri();
  private:
    VL_UNCOPYABLE(Vtri);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
