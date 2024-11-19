// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtri__Syms.h"


void Vtri___024root__trace_chg_0_sub_0(Vtri___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtri___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root__trace_chg_0\n"); );
    // Init
    Vtri___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtri___024root*>(voidSelf);
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtri___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtri___024root__trace_chg_0_sub_0(Vtri___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.std_fp_sdiv_pipe__DOT__left_abs),32);
        bufp->chgIData(oldp+1,(vlSelfRef.std_fp_sdiv_pipe__DOT__right_abs),32);
        bufp->chgIData(oldp+2,(vlSelfRef.std_sdiv_pipe__DOT__left_abs),32);
        bufp->chgIData(oldp+3,(vlSelfRef.std_sdiv_pipe__DOT__right_abs),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U] 
                     | vlSelfRef.__Vm_traceActivity
                     [9U]))) {
        bufp->chgIData(oldp+4,(vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_left),32);
        bufp->chgIData(oldp+5,(vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_out),32);
        bufp->chgIData(oldp+6,(((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                                 ? vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_out
                                 : 0U)),32);
        bufp->chgIData(oldp+7,(((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in)
                                 ? 0U : ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in)
                                          ? vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_out
                                          : 0U))),32);
        bufp->chgBit(oldp+8,(vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_write_en));
        bufp->chgBit(oldp+9,(vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_write_en));
        bufp->chgBit(oldp+10,(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en));
        bufp->chgBit(oldp+11,(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_in));
        bufp->chgBit(oldp+12,(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_write_en));
        bufp->chgBit(oldp+13,(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_in));
        bufp->chgBit(oldp+14,(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_write_en));
        bufp->chgCData(oldp+15,(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_in),3);
        bufp->chgBit(oldp+16,(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_write_en));
        bufp->chgBit(oldp+17,(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in));
        bufp->chgBit(oldp+18,(vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+19,(vlSelfRef.std_sdiv_pipe__DOT__comp_out_q),32);
        bufp->chgIData(oldp+20,(vlSelfRef.std_sdiv_pipe__DOT__comp_out_r),32);
        bufp->chgIData(oldp+21,(vlSelfRef.std_sdiv_pipe__DOT__right_save),32);
        bufp->chgIData(oldp+22,(vlSelfRef.std_sdiv_pipe__DOT__out_rem_intermediate),32);
        bufp->chgBit(oldp+23,(vlSelfRef.std_sdiv_pipe__DOT__different_signs));
        bufp->chgBit(oldp+24,(vlSelfRef.std_sdiv_pipe__DOT__left_sign));
        bufp->chgBit(oldp+25,(vlSelfRef.std_sdiv_pipe__DOT__right_sign));
        bufp->chgIData(oldp+26,(vlSelfRef.std_sdiv_pipe__DOT__l),32);
        bufp->chgIData(oldp+27,(vlSelfRef.std_sdiv_pipe__DOT__r),32);
        bufp->chgIData(oldp+28,(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend),32);
        bufp->chgQData(oldp+29,(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__divisor),63);
        bufp->chgIData(oldp+31,(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient),32);
        bufp->chgIData(oldp+32,(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__quotient_msk),32);
        bufp->chgBit(oldp+33,(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__running));
        bufp->chgBit(oldp+34,(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__finished));
        bufp->chgIData(oldp+35,(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__l),32);
        bufp->chgIData(oldp+36,(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__r),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+37,(vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__rtmp),32);
        bufp->chgIData(oldp+38,(vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__ltmp),32);
        bufp->chgQData(oldp+39,(vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__out_tmp),64);
        bufp->chgBit(oldp+41,(vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__done_buf[0]));
        bufp->chgBit(oldp+42,(vlSelfRef.std_fp_smult_pipe__DOT__comp__DOT__done_buf[1]));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+43,(vlSelfRef.std_mult_pipe__DOT__comp__DOT__rtmp),32);
        bufp->chgIData(oldp+44,(vlSelfRef.std_mult_pipe__DOT__comp__DOT__ltmp),32);
        bufp->chgQData(oldp+45,(vlSelfRef.std_mult_pipe__DOT__comp__DOT__out_tmp),64);
        bufp->chgBit(oldp+47,(vlSelfRef.std_mult_pipe__DOT__comp__DOT__done_buf[0]));
        bufp->chgBit(oldp+48,(vlSelfRef.std_mult_pipe__DOT__comp__DOT__done_buf[1]));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+49,(vlSelfRef.std_smult_pipe__DOT__comp__DOT__rtmp),32);
        bufp->chgIData(oldp+50,(vlSelfRef.std_smult_pipe__DOT__comp__DOT__ltmp),32);
        bufp->chgQData(oldp+51,(vlSelfRef.std_smult_pipe__DOT__comp__DOT__out_tmp),64);
        bufp->chgBit(oldp+53,(vlSelfRef.std_smult_pipe__DOT__comp__DOT__done_buf[0]));
        bufp->chgBit(oldp+54,(vlSelfRef.std_smult_pipe__DOT__comp__DOT__done_buf[1]));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+55,(vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_q),32);
        bufp->chgIData(oldp+56,(vlSelfRef.std_fp_sdiv_pipe__DOT__comp_out_r),32);
        bufp->chgIData(oldp+57,(vlSelfRef.std_fp_sdiv_pipe__DOT__right_save),32);
        bufp->chgIData(oldp+58,(vlSelfRef.std_fp_sdiv_pipe__DOT__out_rem_intermediate),32);
        bufp->chgBit(oldp+59,(vlSelfRef.std_fp_sdiv_pipe__DOT__different_signs));
        bufp->chgBit(oldp+60,(vlSelfRef.std_fp_sdiv_pipe__DOT__left_sign));
        bufp->chgBit(oldp+61,(vlSelfRef.std_fp_sdiv_pipe__DOT__right_sign));
        bufp->chgIData(oldp+62,(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient),32);
        bufp->chgQData(oldp+63,(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc),33);
        bufp->chgCData(oldp+65,(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__idx),6);
        bufp->chgBit(oldp+66,(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__running));
        bufp->chgBit(oldp+67,(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__finished));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+68,(vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_out),32);
        bufp->chgBit(oldp+69,(vlSelfRef.triangle_tb__DOT__dut__DOT__tdcc_done_in));
        bufp->chgIData(oldp+70,(vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out),32);
        bufp->chgIData(oldp+71,(((IData)(1U) + vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out)),32);
        bufp->chgIData(oldp+72,(vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_out),32);
        bufp->chgBit(oldp+73,(vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg1_reg_done));
        bufp->chgBit(oldp+74,(vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_done));
        bufp->chgBit(oldp+75,(vlSelfRef.triangle_tb__DOT__dut__DOT__ret_arg0_reg_done));
        bufp->chgBit(oldp+76,(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_out));
        bufp->chgBit(oldp+77,(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_done));
        bufp->chgBit(oldp+78,(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_out));
        bufp->chgBit(oldp+79,(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg_done));
        bufp->chgBit(oldp+80,(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_out));
        bufp->chgBit(oldp+81,(vlSelfRef.triangle_tb__DOT__dut__DOT__signal_reg0_done));
        bufp->chgCData(oldp+82,(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_out),3);
        bufp->chgBit(oldp+83,(vlSelfRef.triangle_tb__DOT__dut__DOT__fsm_done));
        bufp->chgBit(oldp+84,(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_done_in));
    }
    bufp->chgIData(oldp+85,(vlSelfRef.std_fp_add__02Eleft),32);
    bufp->chgIData(oldp+86,(vlSelfRef.std_fp_add__02Eright),32);
    bufp->chgIData(oldp+87,(vlSelfRef.std_fp_add__02Eout),32);
    bufp->chgIData(oldp+88,(vlSelfRef.std_fp_sub__02Eleft),32);
    bufp->chgIData(oldp+89,(vlSelfRef.std_fp_sub__02Eright),32);
    bufp->chgIData(oldp+90,(vlSelfRef.std_fp_sub__02Eout),32);
    bufp->chgIData(oldp+91,(vlSelfRef.std_fp_gt__02Eleft),32);
    bufp->chgIData(oldp+92,(vlSelfRef.std_fp_gt__02Eright),32);
    bufp->chgBit(oldp+93,(vlSelfRef.std_fp_gt__02Eout));
    bufp->chgIData(oldp+94,(vlSelfRef.std_fp_sadd__02Eleft),32);
    bufp->chgIData(oldp+95,(vlSelfRef.std_fp_sadd__02Eright),32);
    bufp->chgIData(oldp+96,(vlSelfRef.std_fp_sadd__02Eout),32);
    bufp->chgIData(oldp+97,(vlSelfRef.std_fp_ssub__02Eleft),32);
    bufp->chgIData(oldp+98,(vlSelfRef.std_fp_ssub__02Eright),32);
    bufp->chgIData(oldp+99,(vlSelfRef.std_fp_ssub__02Eout),32);
    bufp->chgIData(oldp+100,(vlSelfRef.std_fp_smult_pipe__02Eleft),32);
    bufp->chgIData(oldp+101,(vlSelfRef.std_fp_smult_pipe__02Eright),32);
    bufp->chgBit(oldp+102,(vlSelfRef.std_fp_smult_pipe__02Ereset));
    bufp->chgBit(oldp+103,(vlSelfRef.std_fp_smult_pipe__02Ego));
    bufp->chgBit(oldp+104,(vlSelfRef.std_fp_smult_pipe__02Eclk));
    bufp->chgIData(oldp+105,(vlSelfRef.std_fp_smult_pipe__02Eout),32);
    bufp->chgBit(oldp+106,(vlSelfRef.std_fp_smult_pipe__02Edone));
    bufp->chgBit(oldp+107,(vlSelfRef.std_fp_sdiv_pipe__02Eclk));
    bufp->chgBit(oldp+108,(vlSelfRef.std_fp_sdiv_pipe__02Ego));
    bufp->chgBit(oldp+109,(vlSelfRef.std_fp_sdiv_pipe__02Ereset));
    bufp->chgIData(oldp+110,(vlSelfRef.std_fp_sdiv_pipe__02Eleft),32);
    bufp->chgIData(oldp+111,(vlSelfRef.std_fp_sdiv_pipe__02Eright),32);
    bufp->chgIData(oldp+112,(vlSelfRef.std_fp_sdiv_pipe__02Eout_quotient),32);
    bufp->chgIData(oldp+113,(vlSelfRef.std_fp_sdiv_pipe__02Eout_remainder),32);
    bufp->chgBit(oldp+114,(vlSelfRef.std_fp_sdiv_pipe__02Edone));
    bufp->chgIData(oldp+115,(vlSelfRef.std_fp_sgt__02Eleft),32);
    bufp->chgIData(oldp+116,(vlSelfRef.std_fp_sgt__02Eright),32);
    bufp->chgBit(oldp+117,(vlSelfRef.std_fp_sgt__02Eout));
    bufp->chgIData(oldp+118,(vlSelfRef.std_fp_slt__02Eleft),32);
    bufp->chgIData(oldp+119,(vlSelfRef.std_fp_slt__02Eright),32);
    bufp->chgBit(oldp+120,(vlSelfRef.std_fp_slt__02Eout));
    bufp->chgIData(oldp+121,(vlSelfRef.std_mult_pipe__02Eleft),32);
    bufp->chgIData(oldp+122,(vlSelfRef.std_mult_pipe__02Eright),32);
    bufp->chgBit(oldp+123,(vlSelfRef.std_mult_pipe__02Ereset));
    bufp->chgBit(oldp+124,(vlSelfRef.std_mult_pipe__02Ego));
    bufp->chgBit(oldp+125,(vlSelfRef.std_mult_pipe__02Eclk));
    bufp->chgIData(oldp+126,(vlSelfRef.std_mult_pipe__02Eout),32);
    bufp->chgBit(oldp+127,(vlSelfRef.std_mult_pipe__02Edone));
    bufp->chgIData(oldp+128,(vlSelfRef.std_sadd__02Eleft),32);
    bufp->chgIData(oldp+129,(vlSelfRef.std_sadd__02Eright),32);
    bufp->chgIData(oldp+130,(vlSelfRef.std_sadd__02Eout),32);
    bufp->chgIData(oldp+131,(vlSelfRef.std_ssub__02Eleft),32);
    bufp->chgIData(oldp+132,(vlSelfRef.std_ssub__02Eright),32);
    bufp->chgIData(oldp+133,(vlSelfRef.std_ssub__02Eout),32);
    bufp->chgBit(oldp+134,(vlSelfRef.std_smult_pipe__02Ereset));
    bufp->chgBit(oldp+135,(vlSelfRef.std_smult_pipe__02Ego));
    bufp->chgBit(oldp+136,(vlSelfRef.std_smult_pipe__02Eclk));
    bufp->chgIData(oldp+137,(vlSelfRef.std_smult_pipe__02Eleft),32);
    bufp->chgIData(oldp+138,(vlSelfRef.std_smult_pipe__02Eright),32);
    bufp->chgIData(oldp+139,(vlSelfRef.std_smult_pipe__02Eout),32);
    bufp->chgBit(oldp+140,(vlSelfRef.std_smult_pipe__02Edone));
    bufp->chgBit(oldp+141,(vlSelfRef.std_sdiv_pipe__02Ereset));
    bufp->chgBit(oldp+142,(vlSelfRef.std_sdiv_pipe__02Eclk));
    bufp->chgBit(oldp+143,(vlSelfRef.std_sdiv_pipe__02Ego));
    bufp->chgIData(oldp+144,(vlSelfRef.std_sdiv_pipe__02Eleft),32);
    bufp->chgIData(oldp+145,(vlSelfRef.std_sdiv_pipe__02Eright),32);
    bufp->chgIData(oldp+146,(vlSelfRef.std_sdiv_pipe__02Eout_quotient),32);
    bufp->chgIData(oldp+147,(vlSelfRef.std_sdiv_pipe__02Eout_remainder),32);
    bufp->chgBit(oldp+148,(vlSelfRef.std_sdiv_pipe__02Edone));
    bufp->chgIData(oldp+149,(vlSelfRef.std_sgt__02Eleft),32);
    bufp->chgIData(oldp+150,(vlSelfRef.std_sgt__02Eright),32);
    bufp->chgBit(oldp+151,(vlSelfRef.std_sgt__02Eout));
    bufp->chgIData(oldp+152,(vlSelfRef.std_seq__02Eleft),32);
    bufp->chgIData(oldp+153,(vlSelfRef.std_seq__02Eright),32);
    bufp->chgBit(oldp+154,(vlSelfRef.std_seq__02Eout));
    bufp->chgIData(oldp+155,(vlSelfRef.std_sneq__02Eleft),32);
    bufp->chgIData(oldp+156,(vlSelfRef.std_sneq__02Eright),32);
    bufp->chgBit(oldp+157,(vlSelfRef.std_sneq__02Eout));
    bufp->chgIData(oldp+158,(vlSelfRef.std_sge__02Eleft),32);
    bufp->chgIData(oldp+159,(vlSelfRef.std_sge__02Eright),32);
    bufp->chgBit(oldp+160,(vlSelfRef.std_sge__02Eout));
    bufp->chgIData(oldp+161,(vlSelfRef.std_sle__02Eleft),32);
    bufp->chgIData(oldp+162,(vlSelfRef.std_sle__02Eright),32);
    bufp->chgBit(oldp+163,(vlSelfRef.std_sle__02Eout));
    bufp->chgIData(oldp+164,(vlSelfRef.std_slsh__02Eleft),32);
    bufp->chgIData(oldp+165,(vlSelfRef.std_slsh__02Eright),32);
    bufp->chgIData(oldp+166,(vlSelfRef.std_slsh__02Eout),32);
    bufp->chgIData(oldp+167,(vlSelfRef.std_srsh__02Eleft),32);
    bufp->chgIData(oldp+168,(vlSelfRef.std_srsh__02Eright),32);
    bufp->chgIData(oldp+169,(vlSelfRef.std_srsh__02Eout),32);
    bufp->chgIData(oldp+170,(vlSelfRef.std_signext__02Ein),32);
    bufp->chgIData(oldp+171,(vlSelfRef.std_signext__02Eout),32);
    bufp->chgIData(oldp+172,(vlSelfRef.std_const_mult__02Ein),32);
    bufp->chgIData(oldp+173,(vlSelfRef.std_const_mult__02Eout),32);
    bufp->chgIData(oldp+174,(vlSelfRef.std_const__02Eout),32);
    bufp->chgIData(oldp+175,(vlSelfRef.std_lsh__02Eleft),32);
    bufp->chgIData(oldp+176,(vlSelfRef.std_lsh__02Eright),32);
    bufp->chgIData(oldp+177,(vlSelfRef.std_lsh__02Eout),32);
    bufp->chgIData(oldp+178,(vlSelfRef.init_one_reg__02Ein),32);
    bufp->chgBit(oldp+179,(vlSelfRef.write_en));
    bufp->chgBit(oldp+180,(vlSelfRef.init_one_reg__02Eclk));
    bufp->chgBit(oldp+181,(vlSelfRef.init_one_reg__02Ereset));
    bufp->chgIData(oldp+182,(vlSelfRef.init_one_reg__02Eout),32);
    bufp->chgBit(oldp+183,(vlSelfRef.init_one_reg__02Edone));
    bufp->chgIData(oldp+184,(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__quotient_next),32);
    bufp->chgQData(oldp+185,(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__acc_next),33);
    bufp->chgBit(oldp+187,(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__start));
    bufp->chgBit(oldp+188,(vlSelfRef.std_fp_sdiv_pipe__DOT__comp__DOT__dividend_is_zero));
    bufp->chgBit(oldp+189,(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__start));
    bufp->chgBit(oldp+190,(vlSelfRef.std_sdiv_pipe__DOT__comp__DOT__dividend_is_zero));
    bufp->chgIData(oldp+191,(vlSelfRef.triangle_tb__DOT__in0),32);
    bufp->chgBit(oldp+192,(vlSelfRef.triangle_tb__DOT__clk));
    bufp->chgBit(oldp+193,(vlSelfRef.triangle_tb__DOT__reset));
    bufp->chgBit(oldp+194,(vlSelfRef.triangle_tb__DOT__go));
    bufp->chgIData(oldp+195,(((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in)
                               ? vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out
                               : ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                                   ? 1U : 0U))),32);
    bufp->chgIData(oldp+196,(((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                               ? vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out
                               : 0U)),32);
    bufp->chgBit(oldp+197,(VL_LTS_III(32, ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                                            ? vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out
                                            : 0U), 
                                      ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                                        ? vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_out
                                        : 0U))));
    bufp->chgIData(oldp+198,(((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__assign_while_0_latch_go_in)
                               ? ((IData)(1U) + vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out)
                               : ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__early_reset_static_par_thread_go_in)
                                   ? 1U : 0U))),32);
    bufp->chgBit(oldp+199,(((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en) 
                            & VL_LTS_III(32, ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                                               ? vlSelfRef.triangle_tb__DOT__dut__DOT__while_0_arg0_reg_out
                                               : 0U), 
                                         ((IData)(vlSelfRef.triangle_tb__DOT__dut__DOT__comb_reg_write_en)
                                           ? vlSelfRef.triangle_tb__DOT__dut__DOT__std_add_2_out
                                           : 0U)))));
}

void Vtri___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtri___024root__trace_cleanup\n"); );
    // Init
    Vtri___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtri___024root*>(voidSelf);
    Vtri__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
