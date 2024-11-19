// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtri__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtri::Vtri(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtri__Syms(contextp(), _vcname__, this)}
    , init_one_reg__02Eclk{vlSymsp->TOP.init_one_reg__02Eclk}
    , std_fp_smult_pipe__02Eclk{vlSymsp->TOP.std_fp_smult_pipe__02Eclk}
    , std_fp_sdiv_pipe__02Eclk{vlSymsp->TOP.std_fp_sdiv_pipe__02Eclk}
    , std_mult_pipe__02Eclk{vlSymsp->TOP.std_mult_pipe__02Eclk}
    , std_smult_pipe__02Eclk{vlSymsp->TOP.std_smult_pipe__02Eclk}
    , std_sdiv_pipe__02Eclk{vlSymsp->TOP.std_sdiv_pipe__02Eclk}
    , std_fp_gt__02Eout{vlSymsp->TOP.std_fp_gt__02Eout}
    , std_fp_sgt__02Eout{vlSymsp->TOP.std_fp_sgt__02Eout}
    , std_fp_slt__02Eout{vlSymsp->TOP.std_fp_slt__02Eout}
    , std_sgt__02Eout{vlSymsp->TOP.std_sgt__02Eout}
    , std_seq__02Eout{vlSymsp->TOP.std_seq__02Eout}
    , std_sneq__02Eout{vlSymsp->TOP.std_sneq__02Eout}
    , std_sge__02Eout{vlSymsp->TOP.std_sge__02Eout}
    , std_sle__02Eout{vlSymsp->TOP.std_sle__02Eout}
    , write_en{vlSymsp->TOP.write_en}
    , init_one_reg__02Ereset{vlSymsp->TOP.init_one_reg__02Ereset}
    , init_one_reg__02Edone{vlSymsp->TOP.init_one_reg__02Edone}
    , std_fp_smult_pipe__02Ereset{vlSymsp->TOP.std_fp_smult_pipe__02Ereset}
    , std_fp_smult_pipe__02Ego{vlSymsp->TOP.std_fp_smult_pipe__02Ego}
    , std_fp_smult_pipe__02Edone{vlSymsp->TOP.std_fp_smult_pipe__02Edone}
    , std_fp_sdiv_pipe__02Ego{vlSymsp->TOP.std_fp_sdiv_pipe__02Ego}
    , std_fp_sdiv_pipe__02Ereset{vlSymsp->TOP.std_fp_sdiv_pipe__02Ereset}
    , std_fp_sdiv_pipe__02Edone{vlSymsp->TOP.std_fp_sdiv_pipe__02Edone}
    , std_mult_pipe__02Ereset{vlSymsp->TOP.std_mult_pipe__02Ereset}
    , std_mult_pipe__02Ego{vlSymsp->TOP.std_mult_pipe__02Ego}
    , std_mult_pipe__02Edone{vlSymsp->TOP.std_mult_pipe__02Edone}
    , std_smult_pipe__02Ereset{vlSymsp->TOP.std_smult_pipe__02Ereset}
    , std_smult_pipe__02Ego{vlSymsp->TOP.std_smult_pipe__02Ego}
    , std_smult_pipe__02Edone{vlSymsp->TOP.std_smult_pipe__02Edone}
    , std_sdiv_pipe__02Ereset{vlSymsp->TOP.std_sdiv_pipe__02Ereset}
    , std_sdiv_pipe__02Ego{vlSymsp->TOP.std_sdiv_pipe__02Ego}
    , std_sdiv_pipe__02Edone{vlSymsp->TOP.std_sdiv_pipe__02Edone}
    , std_fp_add__02Eleft{vlSymsp->TOP.std_fp_add__02Eleft}
    , std_fp_add__02Eright{vlSymsp->TOP.std_fp_add__02Eright}
    , std_fp_add__02Eout{vlSymsp->TOP.std_fp_add__02Eout}
    , std_fp_sub__02Eleft{vlSymsp->TOP.std_fp_sub__02Eleft}
    , std_fp_sub__02Eright{vlSymsp->TOP.std_fp_sub__02Eright}
    , std_fp_sub__02Eout{vlSymsp->TOP.std_fp_sub__02Eout}
    , std_fp_gt__02Eleft{vlSymsp->TOP.std_fp_gt__02Eleft}
    , std_fp_gt__02Eright{vlSymsp->TOP.std_fp_gt__02Eright}
    , std_fp_sadd__02Eleft{vlSymsp->TOP.std_fp_sadd__02Eleft}
    , std_fp_sadd__02Eright{vlSymsp->TOP.std_fp_sadd__02Eright}
    , std_fp_sadd__02Eout{vlSymsp->TOP.std_fp_sadd__02Eout}
    , std_fp_ssub__02Eleft{vlSymsp->TOP.std_fp_ssub__02Eleft}
    , std_fp_ssub__02Eright{vlSymsp->TOP.std_fp_ssub__02Eright}
    , std_fp_ssub__02Eout{vlSymsp->TOP.std_fp_ssub__02Eout}
    , std_fp_sgt__02Eleft{vlSymsp->TOP.std_fp_sgt__02Eleft}
    , std_fp_sgt__02Eright{vlSymsp->TOP.std_fp_sgt__02Eright}
    , std_fp_slt__02Eleft{vlSymsp->TOP.std_fp_slt__02Eleft}
    , std_fp_slt__02Eright{vlSymsp->TOP.std_fp_slt__02Eright}
    , std_sadd__02Eleft{vlSymsp->TOP.std_sadd__02Eleft}
    , std_sadd__02Eright{vlSymsp->TOP.std_sadd__02Eright}
    , std_sadd__02Eout{vlSymsp->TOP.std_sadd__02Eout}
    , std_ssub__02Eleft{vlSymsp->TOP.std_ssub__02Eleft}
    , std_ssub__02Eright{vlSymsp->TOP.std_ssub__02Eright}
    , std_ssub__02Eout{vlSymsp->TOP.std_ssub__02Eout}
    , std_sgt__02Eleft{vlSymsp->TOP.std_sgt__02Eleft}
    , std_sgt__02Eright{vlSymsp->TOP.std_sgt__02Eright}
    , std_seq__02Eleft{vlSymsp->TOP.std_seq__02Eleft}
    , std_seq__02Eright{vlSymsp->TOP.std_seq__02Eright}
    , std_sneq__02Eleft{vlSymsp->TOP.std_sneq__02Eleft}
    , std_sneq__02Eright{vlSymsp->TOP.std_sneq__02Eright}
    , std_sge__02Eleft{vlSymsp->TOP.std_sge__02Eleft}
    , std_sge__02Eright{vlSymsp->TOP.std_sge__02Eright}
    , std_sle__02Eleft{vlSymsp->TOP.std_sle__02Eleft}
    , std_sle__02Eright{vlSymsp->TOP.std_sle__02Eright}
    , std_slsh__02Eleft{vlSymsp->TOP.std_slsh__02Eleft}
    , std_slsh__02Eright{vlSymsp->TOP.std_slsh__02Eright}
    , std_slsh__02Eout{vlSymsp->TOP.std_slsh__02Eout}
    , std_srsh__02Eleft{vlSymsp->TOP.std_srsh__02Eleft}
    , std_srsh__02Eright{vlSymsp->TOP.std_srsh__02Eright}
    , std_srsh__02Eout{vlSymsp->TOP.std_srsh__02Eout}
    , std_signext__02Ein{vlSymsp->TOP.std_signext__02Ein}
    , std_signext__02Eout{vlSymsp->TOP.std_signext__02Eout}
    , std_const_mult__02Ein{vlSymsp->TOP.std_const_mult__02Ein}
    , std_const_mult__02Eout{vlSymsp->TOP.std_const_mult__02Eout}
    , std_const__02Eout{vlSymsp->TOP.std_const__02Eout}
    , std_lsh__02Eleft{vlSymsp->TOP.std_lsh__02Eleft}
    , std_lsh__02Eright{vlSymsp->TOP.std_lsh__02Eright}
    , std_lsh__02Eout{vlSymsp->TOP.std_lsh__02Eout}
    , init_one_reg__02Ein{vlSymsp->TOP.init_one_reg__02Ein}
    , init_one_reg__02Eout{vlSymsp->TOP.init_one_reg__02Eout}
    , std_fp_smult_pipe__02Eleft{vlSymsp->TOP.std_fp_smult_pipe__02Eleft}
    , std_fp_smult_pipe__02Eright{vlSymsp->TOP.std_fp_smult_pipe__02Eright}
    , std_fp_smult_pipe__02Eout{vlSymsp->TOP.std_fp_smult_pipe__02Eout}
    , std_fp_sdiv_pipe__02Eleft{vlSymsp->TOP.std_fp_sdiv_pipe__02Eleft}
    , std_fp_sdiv_pipe__02Eright{vlSymsp->TOP.std_fp_sdiv_pipe__02Eright}
    , std_fp_sdiv_pipe__02Eout_quotient{vlSymsp->TOP.std_fp_sdiv_pipe__02Eout_quotient}
    , std_fp_sdiv_pipe__02Eout_remainder{vlSymsp->TOP.std_fp_sdiv_pipe__02Eout_remainder}
    , std_mult_pipe__02Eleft{vlSymsp->TOP.std_mult_pipe__02Eleft}
    , std_mult_pipe__02Eright{vlSymsp->TOP.std_mult_pipe__02Eright}
    , std_mult_pipe__02Eout{vlSymsp->TOP.std_mult_pipe__02Eout}
    , std_smult_pipe__02Eleft{vlSymsp->TOP.std_smult_pipe__02Eleft}
    , std_smult_pipe__02Eright{vlSymsp->TOP.std_smult_pipe__02Eright}
    , std_smult_pipe__02Eout{vlSymsp->TOP.std_smult_pipe__02Eout}
    , std_sdiv_pipe__02Eleft{vlSymsp->TOP.std_sdiv_pipe__02Eleft}
    , std_sdiv_pipe__02Eright{vlSymsp->TOP.std_sdiv_pipe__02Eright}
    , std_sdiv_pipe__02Eout_quotient{vlSymsp->TOP.std_sdiv_pipe__02Eout_quotient}
    , std_sdiv_pipe__02Eout_remainder{vlSymsp->TOP.std_sdiv_pipe__02Eout_remainder}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtri::Vtri(const char* _vcname__)
    : Vtri(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtri::~Vtri() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtri___024root___eval_debug_assertions(Vtri___024root* vlSelf);
#endif  // VL_DEBUG
void Vtri___024root___eval_static(Vtri___024root* vlSelf);
void Vtri___024root___eval_initial(Vtri___024root* vlSelf);
void Vtri___024root___eval_settle(Vtri___024root* vlSelf);
void Vtri___024root___eval(Vtri___024root* vlSelf);

void Vtri::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtri::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtri___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtri___024root___eval_static(&(vlSymsp->TOP));
        Vtri___024root___eval_initial(&(vlSymsp->TOP));
        Vtri___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtri___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtri::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtri::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtri::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtri::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtri::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtri___024root___eval_final(Vtri___024root* vlSelf);

VL_ATTR_COLD void Vtri::final() {
    Vtri___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtri::hierName() const { return vlSymsp->name(); }
const char* Vtri::modelName() const { return "Vtri"; }
unsigned Vtri::threads() const { return 1; }
void Vtri::prepareClone() const { contextp()->prepareClone(); }
void Vtri::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtri::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtri___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtri___024root__trace_init_top(Vtri___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtri___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtri___024root*>(voidSelf);
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtri___024root__trace_decl_types(tracep);
    Vtri___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtri___024root__trace_register(Vtri___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtri::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtri::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtri___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
