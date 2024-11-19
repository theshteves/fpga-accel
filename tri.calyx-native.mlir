module attributes {calyx.entrypoint = "triangle" } {
calyx.component @triangle(%in0: i32, %clk: i1 {clk=1}, %reset: i1 {reset=1}, %go: i1 {go=1}) -> (%out0: i32, %done: i1 {done=1}) {
  %std_add_2.left, %std_add_2.right, %std_add_2.out = calyx.std_add @std_add_2 {data=1} : i32, i32, i32
  %std_add_1.left, %std_add_1.right, %std_add_1.out = calyx.std_add @std_add_1 {data=1} : i32, i32, i32
  %std_slt_0.left, %std_slt_0.right, %std_slt_0.out = calyx.std_slt @std_slt_0 {control=1} : i32, i32, i1
  %while_0_arg1_reg.in, %while_0_arg1_reg.write_en, %while_0_arg1_reg.clk, %while_0_arg1_reg.reset, %while_0_arg1_reg.out, %while_0_arg1_reg.done = calyx.register @while_0_arg1_reg {data=1} : i32, i1, i1, i1, i32, i1
  %while_0_arg0_reg.in, %while_0_arg0_reg.write_en, %while_0_arg0_reg.clk, %while_0_arg0_reg.reset, %while_0_arg0_reg.out, %while_0_arg0_reg.done = calyx.register @while_0_arg0_reg {data=1} : i32, i1, i1, i1, i32, i1
  %ret_arg0_reg.in, %ret_arg0_reg.write_en, %ret_arg0_reg.clk, %ret_arg0_reg.reset, %ret_arg0_reg.out, %ret_arg0_reg.done = calyx.register @ret_arg0_reg {data=1} : i32, i1, i1, i1, i32, i1
  %_1_32.out = hw.constant 1 : i32
  %_1_1.out = hw.constant 1 : i1
  %_0_32.out = hw.constant 0 : i32
  %comb_reg.in, %comb_reg.write_en, %comb_reg.clk, %comb_reg.reset, %comb_reg.out, %comb_reg.done = calyx.register @comb_reg {generated=1} : i1, i1, i1, i1, i1, i1
  %fsm.in, %fsm.write_en, %fsm.clk, %fsm.reset, %fsm.out, %fsm.done = calyx.register @fsm {generated=1} : i1, i1, i1, i1, i1, i1
  %ud.out = calyx.undefined @ud {generated=1} : i1
  %adder.left, %adder.right, %adder.out = calyx.std_add @adder {generated=1} : i1, i1, i1
  %_0_1.out = hw.constant 0 : i1
  %signal_reg.in, %signal_reg.write_en, %signal_reg.clk, %signal_reg.reset, %signal_reg.out, %signal_reg.done = calyx.register @signal_reg {generated=1} : i1, i1, i1, i1, i1, i1
  %pd.in, %pd.write_en, %pd.clk, %pd.reset, %pd.out, %pd.done = calyx.register @pd {generated=1} : i1, i1, i1, i1, i1, i1
  %pd0.in, %pd0.write_en, %pd0.clk, %pd0.reset, %pd0.out, %pd0.done = calyx.register @pd0 {generated=1} : i1, i1, i1, i1, i1, i1
  %fsm0.in, %fsm0.write_en, %fsm0.clk, %fsm0.reset, %fsm0.out, %fsm0.done = calyx.register @fsm0 {generated=1} : i3, i1, i1, i1, i3, i1
  %_5_3.out = hw.constant 5 : i3
  %_0_3.out = hw.constant 0 : i3
  %_1_3.out = hw.constant 1 : i3
  %_2_3.out = hw.constant 2 : i3
  %_3_3.out = hw.constant 3 : i3
  %_4_3.out = hw.constant 4 : i3
  %assign_while_0_latch_go.in, %assign_while_0_latch_go.out = calyx.std_wire @assign_while_0_latch_go {generated=1} : i1, i1
  %assign_while_0_latch_done.in, %assign_while_0_latch_done.out = calyx.std_wire @assign_while_0_latch_done {generated=1} : i1, i1
  %invoke0_go.in, %invoke0_go.out = calyx.std_wire @invoke0_go {generated=1} : i1, i1
  %invoke0_done.in, %invoke0_done.out = calyx.std_wire @invoke0_done {generated=1} : i1, i1
  %invoke1_go.in, %invoke1_go.out = calyx.std_wire @invoke1_go {generated=1} : i1, i1
  %invoke1_done.in, %invoke1_done.out = calyx.std_wire @invoke1_done {generated=1} : i1, i1
  %invoke2_go.in, %invoke2_go.out = calyx.std_wire @invoke2_go {generated=1} : i1, i1
  %invoke2_done.in, %invoke2_done.out = calyx.std_wire @invoke2_done {generated=1} : i1, i1
  %early_reset_bb0_10_go.in, %early_reset_bb0_10_go.out = calyx.std_wire @early_reset_bb0_10_go {generated=1} : i1, i1
  %early_reset_bb0_10_done.in, %early_reset_bb0_10_done.out = calyx.std_wire @early_reset_bb0_10_done {generated=1} : i1, i1
  %wrapper_early_reset_bb0_10_go.in, %wrapper_early_reset_bb0_10_go.out = calyx.std_wire @wrapper_early_reset_bb0_10_go {generated=1} : i1, i1
  %wrapper_early_reset_bb0_10_done.in, %wrapper_early_reset_bb0_10_done.out = calyx.std_wire @wrapper_early_reset_bb0_10_done {generated=1} : i1, i1
  %par0_go.in, %par0_go.out = calyx.std_wire @par0_go {generated=1} : i1, i1
  %par0_done.in, %par0_done.out = calyx.std_wire @par0_done {generated=1} : i1, i1
  %tdcc_go.in, %tdcc_go.out = calyx.std_wire @tdcc_go {generated=1} : i1, i1
  %tdcc_done.in, %tdcc_done.out = calyx.std_wire @tdcc_done {generated=1} : i1, i1
  calyx.wires {
    calyx.assign %assign_while_0_latch_go.in = 