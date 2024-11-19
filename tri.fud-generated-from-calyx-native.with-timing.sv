`timescale 1ns/1ps
/* verilator lint_off MULTITOP */
/// =================== Unsigned, Fixed Point =========================
module std_fp_add #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    output logic [WIDTH-1:0] out
);
  assign out = left + right;
endmodule

module std_fp_sub #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    output logic [WIDTH-1:0] out
);
  assign out = left - right;
endmodule

module std_fp_mult_pipe #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16,
    parameter SIGNED = 0
) (
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    input  logic             go,
    input  logic             clk,
    input  logic             reset,
    output logic [WIDTH-1:0] out,
    output logic             done
);
  logic [WIDTH-1:0]          rtmp;
  logic [WIDTH-1:0]          ltmp;
  logic [(WIDTH << 1) - 1:0] out_tmp;
  // Buffer used to walk through the 3 cycles of the pipeline.
  logic done_buf[1:0];

  assign done = done_buf[1];

  assign out = out_tmp[(WIDTH << 1) - INT_WIDTH - 1 : WIDTH - INT_WIDTH];

  // If the done buffer is completely empty and go is high then execution
  // just started.
  logic start;
  assign start = go;

  // Start sending the done signal.
  always_ff @(posedge clk) begin
    if (start)
      done_buf[0] <= 1;
    else
      done_buf[0] <= 0;
  end

  // Push the done signal through the pipeline.
  always_ff @(posedge clk) begin
    if (go) begin
      done_buf[1] <= done_buf[0];
    end else begin
      done_buf[1] <= 0;
    end
  end

  // Register the inputs
  always_ff @(posedge clk) begin
    if (reset) begin
      rtmp <= 0;
      ltmp <= 0;
    end else if (go) begin
      if (SIGNED) begin
        rtmp <= $signed(right);
        ltmp <= $signed(left);
      end else begin
        rtmp <= right;
        ltmp <= left;
      end
    end else begin
      rtmp <= 0;
      ltmp <= 0;
    end

  end

  // Compute the output and save it into out_tmp
  always_ff @(posedge clk) begin
    if (reset) begin
      out_tmp <= 0;
    end else if (go) begin
      if (SIGNED) begin
        // In the first cycle, this performs an invalid computation because
        // ltmp and rtmp only get their actual values in cycle 1
        out_tmp <= $signed(
          { {WIDTH{ltmp[WIDTH-1]}}, ltmp} *
          { {WIDTH{rtmp[WIDTH-1]}}, rtmp}
        );
      end else begin
        out_tmp <= ltmp * rtmp;
      end
    end else begin
      out_tmp <= out_tmp;
    end
  end
endmodule

/* verilator lint_off WIDTH */
module std_fp_div_pipe #(
  parameter WIDTH = 32,
  parameter INT_WIDTH = 16,
  parameter FRAC_WIDTH = 16
) (
    input  logic             go,
    input  logic             clk,
    input  logic             reset,
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    output logic [WIDTH-1:0] out_remainder,
    output logic [WIDTH-1:0] out_quotient,
    output logic             done
);
    localparam ITERATIONS = WIDTH + FRAC_WIDTH;

    logic [WIDTH-1:0] quotient, quotient_next;
    logic [WIDTH:0] acc, acc_next;
    logic [$clog2(ITERATIONS)-1:0] idx;
    logic start, running, finished, dividend_is_zero;

    assign start = go && !running;
    assign dividend_is_zero = start && left == 0;
    assign finished = idx == ITERATIONS - 1 && running;

    always_ff @(posedge clk) begin
      if (reset || finished || dividend_is_zero)
        running <= 0;
      else if (start)
        running <= 1;
      else
        running <= running;
    end

    always_comb begin
      if (acc >= {1'b0, right}) begin
        acc_next = acc - right;
        {acc_next, quotient_next} = {acc_next[WIDTH-1:0], quotient, 1'b1};
      end else begin
        {acc_next, quotient_next} = {acc, quotient} << 1;
      end
    end

    // `done` signaling
    always_ff @(posedge clk) begin
      if (dividend_is_zero || finished)
        done <= 1;
      else
        done <= 0;
    end

    always_ff @(posedge clk) begin
      if (running)
        idx <= idx + 1;
      else
        idx <= 0;
    end

    always_ff @(posedge clk) begin
      if (reset) begin
        out_quotient <= 0;
        out_remainder <= 0;
      end else if (start) begin
        out_quotient <= 0;
        out_remainder <= left;
      end else if (go == 0) begin
        out_quotient <= out_quotient;
        out_remainder <= out_remainder;
      end else if (dividend_is_zero) begin
        out_quotient <= 0;
        out_remainder <= 0;
      end else if (finished) begin
        out_quotient <= quotient_next;
        out_remainder <= out_remainder;
      end else begin
        out_quotient <= out_quotient;
        if (right <= out_remainder)
          out_remainder <= out_remainder - right;
        else
          out_remainder <= out_remainder;
      end
    end

    always_ff @(posedge clk) begin
      if (reset) begin
        acc <= 0;
        quotient <= 0;
      end else if (start) begin
        {acc, quotient} <= {{WIDTH{1'b0}}, left, 1'b0};
      end else begin
        acc <= acc_next;
        quotient <= quotient_next;
      end
    end
endmodule

module std_fp_gt #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    output logic             out
);
  assign out = left > right;
endmodule

/// =================== Signed, Fixed Point =========================
module std_fp_sadd #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);
  assign out = $signed(left + right);
endmodule

module std_fp_ssub #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);

  assign out = $signed(left - right);
endmodule

module std_fp_smult_pipe #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  [WIDTH-1:0]              left,
    input  [WIDTH-1:0]              right,
    input  logic                    reset,
    input  logic                    go,
    input  logic                    clk,
    output logic [WIDTH-1:0]        out,
    output logic                    done
);
  std_fp_mult_pipe #(
    .WIDTH(WIDTH),
    .INT_WIDTH(INT_WIDTH),
    .FRAC_WIDTH(FRAC_WIDTH),
    .SIGNED(1)
  ) comp (
    .clk(clk),
    .done(done),
    .reset(reset),
    .go(go),
    .left(left),
    .right(right),
    .out(out)
  );
endmodule

module std_fp_sdiv_pipe #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input                     clk,
    input                     go,
    input                     reset,
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out_quotient,
    output signed [WIDTH-1:0] out_remainder,
    output logic              done
);

  logic signed [WIDTH-1:0] left_abs, right_abs, comp_out_q, comp_out_r, right_save, out_rem_intermediate;

  // Registers to figure out how to transform outputs.
  logic different_signs, left_sign, right_sign;

  // Latch the value of control registers so that their available after
  // go signal becomes low.
  always_ff @(posedge clk) begin
    if (go) begin
      right_save <= right_abs;
      left_sign <= left[WIDTH-1];
      right_sign <= right[WIDTH-1];
    end else begin
      left_sign <= left_sign;
      right_save <= right_save;
      right_sign <= right_sign;
    end
  end

  assign right_abs = right[WIDTH-1] ? -right : right;
  assign left_abs = left[WIDTH-1] ? -left : left;

  assign different_signs = left_sign ^ right_sign;
  assign out_quotient = different_signs ? -comp_out_q : comp_out_q;

  // Remainder is computed as:
  //  t0 = |left| % |right|
  //  t1 = if left * right < 0 and t0 != 0 then |right| - t0 else t0
  //  rem = if right < 0 then -t1 else t1
  assign out_rem_intermediate = different_signs & |comp_out_r ? $signed(right_save - comp_out_r) : comp_out_r;
  assign out_remainder = right_sign ? -out_rem_intermediate : out_rem_intermediate;

  std_fp_div_pipe #(
    .WIDTH(WIDTH),
    .INT_WIDTH(INT_WIDTH),
    .FRAC_WIDTH(FRAC_WIDTH)
  ) comp (
    .reset(reset),
    .clk(clk),
    .done(done),
    .go(go),
    .left(left_abs),
    .right(right_abs),
    .out_quotient(comp_out_q),
    .out_remainder(comp_out_r)
  );
endmodule

module std_fp_sgt #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  logic signed [WIDTH-1:0] left,
    input  logic signed [WIDTH-1:0] right,
    output logic signed             out
);
  assign out = $signed(left > right);
endmodule

module std_fp_slt #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
   input logic signed [WIDTH-1:0] left,
   input logic signed [WIDTH-1:0] right,
   output logic signed            out
);
  assign out = $signed(left < right);
endmodule

/// =================== Unsigned, Bitnum =========================
module std_mult_pipe #(
    parameter WIDTH = 32
) (
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    input  logic             reset,
    input  logic             go,
    input  logic             clk,
    output logic [WIDTH-1:0] out,
    output logic             done
);
  std_fp_mult_pipe #(
    .WIDTH(WIDTH),
    .INT_WIDTH(WIDTH),
    .FRAC_WIDTH(0),
    .SIGNED(0)
  ) comp (
    .reset(reset),
    .clk(clk),
    .done(done),
    .go(go),
    .left(left),
    .right(right),
    .out(out)
  );
endmodule

module std_div_pipe #(
    parameter WIDTH = 32
) (
    input                    reset,
    input                    clk,
    input                    go,
    input        [WIDTH-1:0] left,
    input        [WIDTH-1:0] right,
    output logic [WIDTH-1:0] out_remainder,
    output logic [WIDTH-1:0] out_quotient,
    output logic             done
);

  logic [WIDTH-1:0] dividend;
  logic [(WIDTH-1)*2:0] divisor;
  logic [WIDTH-1:0] quotient;
  logic [WIDTH-1:0] quotient_msk;
  logic start, running, finished, dividend_is_zero;

  assign start = go && !running;
  assign finished = quotient_msk == 0 && running;
  assign dividend_is_zero = start && left == 0;

  always_ff @(posedge clk) begin
    // Early return if the divisor is zero.
    if (finished || dividend_is_zero)
      done <= 1;
    else
      done <= 0;
  end

  always_ff @(posedge clk) begin
    if (reset || finished || dividend_is_zero)
      running <= 0;
    else if (start)
      running <= 1;
    else
      running <= running;
  end

  // Outputs
  always_ff @(posedge clk) begin
    if (dividend_is_zero || start) begin
      out_quotient <= 0;
      out_remainder <= 0;
    end else if (finished) begin
      out_quotient <= quotient;
      out_remainder <= dividend;
    end else begin
      // Otherwise, explicitly latch the values.
      out_quotient <= out_quotient;
      out_remainder <= out_remainder;
    end
  end

  // Calculate the quotient mask.
  always_ff @(posedge clk) begin
    if (start)
      quotient_msk <= 1 << WIDTH - 1;
    else if (running)
      quotient_msk <= quotient_msk >> 1;
    else
      quotient_msk <= quotient_msk;
  end

  // Calculate the quotient.
  always_ff @(posedge clk) begin
    if (start)
      quotient <= 0;
    else if (divisor <= dividend)
      quotient <= quotient | quotient_msk;
    else
      quotient <= quotient;
  end

  // Calculate the dividend.
  always_ff @(posedge clk) begin
    if (start)
      dividend <= left;
    else if (divisor <= dividend)
      dividend <= dividend - divisor;
    else
      dividend <= dividend;
  end

  always_ff @(posedge clk) begin
    if (start) begin
      divisor <= right << WIDTH - 1;
    end else if (finished) begin
      divisor <= 0;
    end else begin
      divisor <= divisor >> 1;
    end
  end

  // Simulation self test against unsynthesizable implementation.
  `ifdef VERILATOR
    logic [WIDTH-1:0] l, r;
    always_ff @(posedge clk) begin
      if (go) begin
        l <= left;
        r <= right;
      end else begin
        l <= l;
        r <= r;
      end
    end

    always @(posedge clk) begin
      if (done && $unsigned(out_remainder) != $unsigned(l % r))
        $error(
          "\nstd_div_pipe (Remainder): Computed and golden outputs do not match!\n",
          "left: %0d", $unsigned(l),
          "  right: %0d\n", $unsigned(r),
          "expected: %0d", $unsigned(l % r),
          "  computed: %0d", $unsigned(out_remainder)
        );

      if (done && $unsigned(out_quotient) != $unsigned(l / r))
        $error(
          "\nstd_div_pipe (Quotient): Computed and golden outputs do not match!\n",
          "left: %0d", $unsigned(l),
          "  right: %0d\n", $unsigned(r),
          "expected: %0d", $unsigned(l / r),
          "  computed: %0d", $unsigned(out_quotient)
        );
    end
  `endif
endmodule

/// =================== Signed, Bitnum =========================
module std_sadd #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);
  assign out = $signed(left + right);
endmodule

module std_ssub #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);
  assign out = $signed(left - right);
endmodule

module std_smult_pipe #(
    parameter WIDTH = 32
) (
    input  logic                    reset,
    input  logic                    go,
    input  logic                    clk,
    input  signed       [WIDTH-1:0] left,
    input  signed       [WIDTH-1:0] right,
    output logic signed [WIDTH-1:0] out,
    output logic                    done
);
  std_fp_mult_pipe #(
    .WIDTH(WIDTH),
    .INT_WIDTH(WIDTH),
    .FRAC_WIDTH(0),
    .SIGNED(1)
  ) comp (
    .reset(reset),
    .clk(clk),
    .done(done),
    .go(go),
    .left(left),
    .right(right),
    .out(out)
  );
endmodule

/* verilator lint_off WIDTH */
module std_sdiv_pipe #(
    parameter WIDTH = 32
) (
    input                           reset,
    input                           clk,
    input                           go,
    input  logic signed [WIDTH-1:0] left,
    input  logic signed [WIDTH-1:0] right,
    output logic signed [WIDTH-1:0] out_quotient,
    output logic signed [WIDTH-1:0] out_remainder,
    output logic                    done
);

  logic signed [WIDTH-1:0] left_abs, right_abs, comp_out_q, comp_out_r, right_save, out_rem_intermediate;

  // Registers to figure out how to transform outputs.
  logic different_signs, left_sign, right_sign;

  // Latch the value of control registers so that their available after
  // go signal becomes low.
  always_ff @(posedge clk) begin
    if (go) begin
      right_save <= right_abs;
      left_sign <= left[WIDTH-1];
      right_sign <= right[WIDTH-1];
    end else begin
      left_sign <= left_sign;
      right_save <= right_save;
      right_sign <= right_sign;
    end
  end

  assign right_abs = right[WIDTH-1] ? -right : right;
  assign left_abs = left[WIDTH-1] ? -left : left;

  assign different_signs = left_sign ^ right_sign;
  assign out_quotient = different_signs ? -comp_out_q : comp_out_q;

  // Remainder is computed as:
  //  t0 = |left| % |right|
  //  t1 = if left * right < 0 and t0 != 0 then |right| - t0 else t0
  //  rem = if right < 0 then -t1 else t1
  assign out_rem_intermediate = different_signs & |comp_out_r ? $signed(right_save - comp_out_r) : comp_out_r;
  assign out_remainder = right_sign ? -out_rem_intermediate : out_rem_intermediate;

  std_div_pipe #(
    .WIDTH(WIDTH)
  ) comp (
    .reset(reset),
    .clk(clk),
    .done(done),
    .go(go),
    .left(left_abs),
    .right(right_abs),
    .out_quotient(comp_out_q),
    .out_remainder(comp_out_r)
  );

  // Simulation self test against unsynthesizable implementation.
  `ifdef VERILATOR
    logic signed [WIDTH-1:0] l, r;
    always_ff @(posedge clk) begin
      if (go) begin
        l <= left;
        r <= right;
      end else begin
        l <= l;
        r <= r;
      end
    end

    always @(posedge clk) begin
      if (done && out_quotient != $signed(l / r))
        $error(
          "\nstd_sdiv_pipe (Quotient): Computed and golden outputs do not match!\n",
          "left: %0d", l,
          "  right: %0d\n", r,
          "expected: %0d", $signed(l / r),
          "  computed: %0d", $signed(out_quotient),
        );
      if (done && out_remainder != $signed(((l % r) + r) % r))
        $error(
          "\nstd_sdiv_pipe (Remainder): Computed and golden outputs do not match!\n",
          "left: %0d", l,
          "  right: %0d\n", r,
          "expected: %0d", $signed(((l % r) + r) % r),
          "  computed: %0d", $signed(out_remainder),
        );
    end
  `endif
endmodule

module std_sgt #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left > right);
endmodule

module std_slt #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left < right);
endmodule

module std_seq #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left == right);
endmodule

module std_sneq #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left != right);
endmodule

module std_sge #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left >= right);
endmodule

module std_sle #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left <= right);
endmodule

module std_slsh #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);
  assign out = left <<< right;
endmodule

module std_srsh #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);
  assign out = left >>> right;
endmodule

// Signed extension
module std_signext #(
  parameter IN_WIDTH  = 32,
  parameter OUT_WIDTH = 32
) (
  input wire logic [IN_WIDTH-1:0]  in,
  output logic     [OUT_WIDTH-1:0] out
);
  localparam EXTEND = OUT_WIDTH - IN_WIDTH;
  assign out = { {EXTEND {in[IN_WIDTH-1]}}, in};

  `ifdef VERILATOR
    always_comb begin
      if (IN_WIDTH > OUT_WIDTH)
        $error(
          "std_signext: Output width less than input width\n",
          "IN_WIDTH: %0d", IN_WIDTH,
          "OUT_WIDTH: %0d", OUT_WIDTH
        );
    end
  `endif
endmodule

module std_const_mult #(
    parameter WIDTH = 32,
    parameter VALUE = 1
) (
    input  signed [WIDTH-1:0] in,
    output signed [WIDTH-1:0] out
);
  assign out = in * VALUE;
endmodule

module undef #(
    parameter WIDTH = 32
) (
   output logic [WIDTH-1:0] out
);
assign out = 'x;
endmodule

module std_const #(
    parameter WIDTH = 32,
    parameter VALUE = 32
) (
   output logic [WIDTH-1:0] out
);
assign out = VALUE;
endmodule

module std_wire #(
    parameter WIDTH = 32
) (
   input wire logic [WIDTH-1:0] in,
   output logic [WIDTH-1:0] out
);
assign out = in;
endmodule

module std_add #(
    parameter WIDTH = 32
) (
   input wire logic [WIDTH-1:0] left,
   input wire logic [WIDTH-1:0] right,
   output logic [WIDTH-1:0] out
);
assign out = left + right;
endmodule

module std_lsh #(
    parameter WIDTH = 32
) (
   input wire logic [WIDTH-1:0] left,
   input wire logic [WIDTH-1:0] right,
   output logic [WIDTH-1:0] out
);
assign out = left << right;
endmodule

module std_reg #(
    parameter WIDTH = 32
) (
   input wire logic [WIDTH-1:0] in,
   input wire logic write_en,
   input wire logic clk,
   input wire logic reset,
   output logic [WIDTH-1:0] out,
   output logic done
);
always_ff @(posedge clk) begin
    if (reset) begin
       out <= 0;
       done <= 0;
    end else if (write_en) begin
      out <= in;
      done <= 1'd1;
    end else done <= 1'd0;
  end
endmodule

module init_one_reg #(
    parameter WIDTH = 32
) (
   input wire logic [WIDTH-1:0] in,
   input wire logic write_en,
   input wire logic clk,
   input wire logic reset,
   output logic [WIDTH-1:0] out,
   output logic done
);
always_ff @(posedge clk) begin
    if (reset) begin
       out <= 1;
       done <= 0;
    end else if (write_en) begin
      out <= in;
      done <= 1'd1;
    end else done <= 1'd0;
  end
endmodule

module triangle(
  input logic [31:0] in0,
  input logic clk,
  input logic reset,
  input logic go,
  output logic [31:0] out0,
  output logic done
);
// COMPONENT START: triangle
logic [31:0] std_add_2_left;
logic [31:0] std_add_2_right;
logic [31:0] std_add_2_out;
logic [31:0] std_add_1_left;
logic [31:0] std_add_1_right;
logic [31:0] std_add_1_out;
logic [31:0] std_slt_0_left;
logic [31:0] std_slt_0_right;
logic std_slt_0_out;
logic [31:0] while_0_arg1_reg_in;
logic while_0_arg1_reg_write_en;
logic while_0_arg1_reg_clk;
logic while_0_arg1_reg_reset;
logic [31:0] while_0_arg1_reg_out;
logic while_0_arg1_reg_done;
logic [31:0] while_0_arg0_reg_in;
logic while_0_arg0_reg_write_en;
logic while_0_arg0_reg_clk;
logic while_0_arg0_reg_reset;
logic [31:0] while_0_arg0_reg_out;
logic while_0_arg0_reg_done;
logic [31:0] ret_arg0_reg_in;
logic ret_arg0_reg_write_en;
logic ret_arg0_reg_clk;
logic ret_arg0_reg_reset;
logic [31:0] ret_arg0_reg_out;
logic ret_arg0_reg_done;
logic comb_reg_in;
logic comb_reg_write_en;
logic comb_reg_clk;
logic comb_reg_reset;
logic comb_reg_out;
logic comb_reg_done;
logic ud_out;
logic ud1_out;
logic signal_reg_in;
logic signal_reg_write_en;
logic signal_reg_clk;
logic signal_reg_reset;
logic signal_reg_out;
logic signal_reg_done;
logic signal_reg0_in;
logic signal_reg0_write_en;
logic signal_reg0_clk;
logic signal_reg0_reset;
logic signal_reg0_out;
logic signal_reg0_done;
logic [2:0] fsm_in;
logic fsm_write_en;
logic fsm_clk;
logic fsm_reset;
logic [2:0] fsm_out;
logic fsm_done;
logic assign_while_0_latch_go_in;
logic assign_while_0_latch_go_out;
logic assign_while_0_latch_done_in;
logic assign_while_0_latch_done_out;
logic invoke2_go_in;
logic invoke2_go_out;
logic invoke2_done_in;
logic invoke2_done_out;
logic early_reset_static_par_thread_go_in;
logic early_reset_static_par_thread_go_out;
logic early_reset_static_par_thread_done_in;
logic early_reset_static_par_thread_done_out;
logic early_reset_bb0_100_go_in;
logic early_reset_bb0_100_go_out;
logic early_reset_bb0_100_done_in;
logic early_reset_bb0_100_done_out;
logic wrapper_early_reset_static_par_thread_go_in;
logic wrapper_early_reset_static_par_thread_go_out;
logic wrapper_early_reset_static_par_thread_done_in;
logic wrapper_early_reset_static_par_thread_done_out;
logic wrapper_early_reset_bb0_100_go_in;
logic wrapper_early_reset_bb0_100_go_out;
logic wrapper_early_reset_bb0_100_done_in;
logic wrapper_early_reset_bb0_100_done_out;
logic tdcc_go_in;
logic tdcc_go_out;
logic tdcc_done_in;
logic tdcc_done_out;
std_add # (
    .WIDTH(32)
) std_add_2 (
    .left(std_add_2_left),
    .out(std_add_2_out),
    .right(std_add_2_right)
);
std_add # (
    .WIDTH(32)
) std_add_1 (
    .left(std_add_1_left),
    .out(std_add_1_out),
    .right(std_add_1_right)
);
std_slt # (
    .WIDTH(32)
) std_slt_0 (
    .left(std_slt_0_left),
    .out(std_slt_0_out),
    .right(std_slt_0_right)
);
std_reg # (
    .WIDTH(32)
) while_0_arg1_reg (
    .clk(while_0_arg1_reg_clk),
    .done(while_0_arg1_reg_done),
    .in(while_0_arg1_reg_in),
    .out(while_0_arg1_reg_out),
    .reset(while_0_arg1_reg_reset),
    .write_en(while_0_arg1_reg_write_en)
);
std_reg # (
    .WIDTH(32)
) while_0_arg0_reg (
    .clk(while_0_arg0_reg_clk),
    .done(while_0_arg0_reg_done),
    .in(while_0_arg0_reg_in),
    .out(while_0_arg0_reg_out),
    .reset(while_0_arg0_reg_reset),
    .write_en(while_0_arg0_reg_write_en)
);
std_reg # (
    .WIDTH(32)
) ret_arg0_reg (
    .clk(ret_arg0_reg_clk),
    .done(ret_arg0_reg_done),
    .in(ret_arg0_reg_in),
    .out(ret_arg0_reg_out),
    .reset(ret_arg0_reg_reset),
    .write_en(ret_arg0_reg_write_en)
);
std_reg # (
    .WIDTH(1)
) comb_reg (
    .clk(comb_reg_clk),
    .done(comb_reg_done),
    .in(comb_reg_in),
    .out(comb_reg_out),
    .reset(comb_reg_reset),
    .write_en(comb_reg_write_en)
);
undef # (
    .WIDTH(1)
) ud (
    .out(ud_out)
);
undef # (
    .WIDTH(1)
) ud1 (
    .out(ud1_out)
);
std_reg # (
    .WIDTH(1)
) signal_reg (
    .clk(signal_reg_clk),
    .done(signal_reg_done),
    .in(signal_reg_in),
    .out(signal_reg_out),
    .reset(signal_reg_reset),
    .write_en(signal_reg_write_en)
);
std_reg # (
    .WIDTH(1)
) signal_reg0 (
    .clk(signal_reg0_clk),
    .done(signal_reg0_done),
    .in(signal_reg0_in),
    .out(signal_reg0_out),
    .reset(signal_reg0_reset),
    .write_en(signal_reg0_write_en)
);
std_reg # (
    .WIDTH(3)
) fsm (
    .clk(fsm_clk),
    .done(fsm_done),
    .in(fsm_in),
    .out(fsm_out),
    .reset(fsm_reset),
    .write_en(fsm_write_en)
);
std_wire # (
    .WIDTH(1)
) assign_while_0_latch_go (
    .in(assign_while_0_latch_go_in),
    .out(assign_while_0_latch_go_out)
);
std_wire # (
    .WIDTH(1)
) assign_while_0_latch_done (
    .in(assign_while_0_latch_done_in),
    .out(assign_while_0_latch_done_out)
);
std_wire # (
    .WIDTH(1)
) invoke2_go (
    .in(invoke2_go_in),
    .out(invoke2_go_out)
);
std_wire # (
    .WIDTH(1)
) invoke2_done (
    .in(invoke2_done_in),
    .out(invoke2_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_par_thread_go (
    .in(early_reset_static_par_thread_go_in),
    .out(early_reset_static_par_thread_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_par_thread_done (
    .in(early_reset_static_par_thread_done_in),
    .out(early_reset_static_par_thread_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_bb0_100_go (
    .in(early_reset_bb0_100_go_in),
    .out(early_reset_bb0_100_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_bb0_100_done (
    .in(early_reset_bb0_100_done_in),
    .out(early_reset_bb0_100_done_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_static_par_thread_go (
    .in(wrapper_early_reset_static_par_thread_go_in),
    .out(wrapper_early_reset_static_par_thread_go_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_static_par_thread_done (
    .in(wrapper_early_reset_static_par_thread_done_in),
    .out(wrapper_early_reset_static_par_thread_done_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_bb0_100_go (
    .in(wrapper_early_reset_bb0_100_go_in),
    .out(wrapper_early_reset_bb0_100_go_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_bb0_100_done (
    .in(wrapper_early_reset_bb0_100_done_in),
    .out(wrapper_early_reset_bb0_100_done_out)
);
std_wire # (
    .WIDTH(1)
) tdcc_go (
    .in(tdcc_go_in),
    .out(tdcc_go_out)
);
std_wire # (
    .WIDTH(1)
) tdcc_done (
    .in(tdcc_done_in),
    .out(tdcc_done_out)
);
wire _guard0 = 1;
wire _guard1 = assign_while_0_latch_done_out;
wire _guard2 = ~_guard1;
wire _guard3 = fsm_out == 3'd2;
wire _guard4 = _guard2 & _guard3;
wire _guard5 = tdcc_go_out;
wire _guard6 = _guard4 & _guard5;
wire _guard7 = while_0_arg1_reg_done;
wire _guard8 = while_0_arg0_reg_done;
wire _guard9 = _guard7 & _guard8;
wire _guard10 = tdcc_done_out;
wire _guard11 = fsm_out == 3'd5;
wire _guard12 = fsm_out == 3'd0;
wire _guard13 = wrapper_early_reset_static_par_thread_done_out;
wire _guard14 = _guard12 & _guard13;
wire _guard15 = tdcc_go_out;
wire _guard16 = _guard14 & _guard15;
wire _guard17 = _guard11 | _guard16;
wire _guard18 = fsm_out == 3'd1;
wire _guard19 = wrapper_early_reset_bb0_100_done_out;
wire _guard20 = comb_reg_out;
wire _guard21 = _guard19 & _guard20;
wire _guard22 = _guard18 & _guard21;
wire _guard23 = tdcc_go_out;
wire _guard24 = _guard22 & _guard23;
wire _guard25 = _guard17 | _guard24;
wire _guard26 = fsm_out == 3'd3;
wire _guard27 = wrapper_early_reset_bb0_100_done_out;
wire _guard28 = comb_reg_out;
wire _guard29 = _guard27 & _guard28;
wire _guard30 = _guard26 & _guard29;
wire _guard31 = tdcc_go_out;
wire _guard32 = _guard30 & _guard31;
wire _guard33 = _guard25 | _guard32;
wire _guard34 = fsm_out == 3'd2;
wire _guard35 = assign_while_0_latch_done_out;
wire _guard36 = _guard34 & _guard35;
wire _guard37 = tdcc_go_out;
wire _guard38 = _guard36 & _guard37;
wire _guard39 = _guard33 | _guard38;
wire _guard40 = fsm_out == 3'd1;
wire _guard41 = wrapper_early_reset_bb0_100_done_out;
wire _guard42 = comb_reg_out;
wire _guard43 = ~_guard42;
wire _guard44 = _guard41 & _guard43;
wire _guard45 = _guard40 & _guard44;
wire _guard46 = tdcc_go_out;
wire _guard47 = _guard45 & _guard46;
wire _guard48 = _guard39 | _guard47;
wire _guard49 = fsm_out == 3'd3;
wire _guard50 = wrapper_early_reset_bb0_100_done_out;
wire _guard51 = comb_reg_out;
wire _guard52 = ~_guard51;
wire _guard53 = _guard50 & _guard52;
wire _guard54 = _guard49 & _guard53;
wire _guard55 = tdcc_go_out;
wire _guard56 = _guard54 & _guard55;
wire _guard57 = _guard48 | _guard56;
wire _guard58 = fsm_out == 3'd4;
wire _guard59 = invoke2_done_out;
wire _guard60 = _guard58 & _guard59;
wire _guard61 = tdcc_go_out;
wire _guard62 = _guard60 & _guard61;
wire _guard63 = _guard57 | _guard62;
wire _guard64 = fsm_out == 3'd4;
wire _guard65 = invoke2_done_out;
wire _guard66 = _guard64 & _guard65;
wire _guard67 = tdcc_go_out;
wire _guard68 = _guard66 & _guard67;
wire _guard69 = fsm_out == 3'd1;
wire _guard70 = wrapper_early_reset_bb0_100_done_out;
wire _guard71 = comb_reg_out;
wire _guard72 = _guard70 & _guard71;
wire _guard73 = _guard69 & _guard72;
wire _guard74 = tdcc_go_out;
wire _guard75 = _guard73 & _guard74;
wire _guard76 = fsm_out == 3'd3;
wire _guard77 = wrapper_early_reset_bb0_100_done_out;
wire _guard78 = comb_reg_out;
wire _guard79 = _guard77 & _guard78;
wire _guard80 = _guard76 & _guard79;
wire _guard81 = tdcc_go_out;
wire _guard82 = _guard80 & _guard81;
wire _guard83 = _guard75 | _guard82;
wire _guard84 = fsm_out == 3'd1;
wire _guard85 = wrapper_early_reset_bb0_100_done_out;
wire _guard86 = comb_reg_out;
wire _guard87 = ~_guard86;
wire _guard88 = _guard85 & _guard87;
wire _guard89 = _guard84 & _guard88;
wire _guard90 = tdcc_go_out;
wire _guard91 = _guard89 & _guard90;
wire _guard92 = fsm_out == 3'd3;
wire _guard93 = wrapper_early_reset_bb0_100_done_out;
wire _guard94 = comb_reg_out;
wire _guard95 = ~_guard94;
wire _guard96 = _guard93 & _guard95;
wire _guard97 = _guard92 & _guard96;
wire _guard98 = tdcc_go_out;
wire _guard99 = _guard97 & _guard98;
wire _guard100 = _guard91 | _guard99;
wire _guard101 = fsm_out == 3'd5;
wire _guard102 = fsm_out == 3'd0;
wire _guard103 = wrapper_early_reset_static_par_thread_done_out;
wire _guard104 = _guard102 & _guard103;
wire _guard105 = tdcc_go_out;
wire _guard106 = _guard104 & _guard105;
wire _guard107 = fsm_out == 3'd2;
wire _guard108 = assign_while_0_latch_done_out;
wire _guard109 = _guard107 & _guard108;
wire _guard110 = tdcc_go_out;
wire _guard111 = _guard109 & _guard110;
wire _guard112 = signal_reg0_out;
wire _guard113 = _guard0 & _guard0;
wire _guard114 = signal_reg0_out;
wire _guard115 = ~_guard114;
wire _guard116 = _guard113 & _guard115;
wire _guard117 = wrapper_early_reset_bb0_100_go_out;
wire _guard118 = _guard116 & _guard117;
wire _guard119 = _guard112 | _guard118;
wire _guard120 = _guard0 & _guard0;
wire _guard121 = signal_reg0_out;
wire _guard122 = ~_guard121;
wire _guard123 = _guard120 & _guard122;
wire _guard124 = wrapper_early_reset_bb0_100_go_out;
wire _guard125 = _guard123 & _guard124;
wire _guard126 = signal_reg0_out;
wire _guard127 = invoke2_done_out;
wire _guard128 = ~_guard127;
wire _guard129 = fsm_out == 3'd4;
wire _guard130 = _guard128 & _guard129;
wire _guard131 = tdcc_go_out;
wire _guard132 = _guard130 & _guard131;
wire _guard133 = wrapper_early_reset_static_par_thread_done_out;
wire _guard134 = ~_guard133;
wire _guard135 = fsm_out == 3'd0;
wire _guard136 = _guard134 & _guard135;
wire _guard137 = tdcc_go_out;
wire _guard138 = _guard136 & _guard137;
wire _guard139 = early_reset_bb0_100_go_out;
wire _guard140 = early_reset_bb0_100_go_out;
wire _guard141 = invoke2_go_out;
wire _guard142 = invoke2_go_out;
wire _guard143 = early_reset_bb0_100_go_out;
wire _guard144 = early_reset_bb0_100_go_out;
wire _guard145 = early_reset_bb0_100_go_out;
wire _guard146 = assign_while_0_latch_go_out;
wire _guard147 = assign_while_0_latch_go_out;
wire _guard148 = early_reset_bb0_100_go_out;
wire _guard149 = assign_while_0_latch_go_out;
wire _guard150 = early_reset_static_par_thread_go_out;
wire _guard151 = _guard149 | _guard150;
wire _guard152 = assign_while_0_latch_go_out;
wire _guard153 = early_reset_static_par_thread_go_out;
wire _guard154 = assign_while_0_latch_go_out;
wire _guard155 = assign_while_0_latch_go_out;
wire _guard156 = wrapper_early_reset_bb0_100_go_out;
wire _guard157 = wrapper_early_reset_bb0_100_done_out;
wire _guard158 = ~_guard157;
wire _guard159 = fsm_out == 3'd1;
wire _guard160 = _guard158 & _guard159;
wire _guard161 = tdcc_go_out;
wire _guard162 = _guard160 & _guard161;
wire _guard163 = wrapper_early_reset_bb0_100_done_out;
wire _guard164 = ~_guard163;
wire _guard165 = fsm_out == 3'd3;
wire _guard166 = _guard164 & _guard165;
wire _guard167 = tdcc_go_out;
wire _guard168 = _guard166 & _guard167;
wire _guard169 = _guard162 | _guard168;
wire _guard170 = signal_reg_out;
wire _guard171 = _guard0 & _guard0;
wire _guard172 = signal_reg_out;
wire _guard173 = ~_guard172;
wire _guard174 = _guard171 & _guard173;
wire _guard175 = wrapper_early_reset_static_par_thread_go_out;
wire _guard176 = _guard174 & _guard175;
wire _guard177 = _guard170 | _guard176;
wire _guard178 = _guard0 & _guard0;
wire _guard179 = signal_reg_out;
wire _guard180 = ~_guard179;
wire _guard181 = _guard178 & _guard180;
wire _guard182 = wrapper_early_reset_static_par_thread_go_out;
wire _guard183 = _guard181 & _guard182;
wire _guard184 = signal_reg_out;
wire _guard185 = wrapper_early_reset_static_par_thread_go_out;
wire _guard186 = signal_reg_out;
wire _guard187 = fsm_out == 3'd5;
wire _guard188 = assign_while_0_latch_go_out;
wire _guard189 = early_reset_static_par_thread_go_out;
wire _guard190 = _guard188 | _guard189;
wire _guard191 = early_reset_static_par_thread_go_out;
wire _guard192 = assign_while_0_latch_go_out;
wire _guard193 = signal_reg0_out;
assign assign_while_0_latch_go_in = _guard6;
assign assign_while_0_latch_done_in = _guard9;
assign done = _guard10;
assign out0 = ret_arg0_reg_out;
assign fsm_write_en = _guard63;
assign fsm_clk = clk;
assign fsm_reset = reset;
assign fsm_in =
  _guard68 ? 3'd5 :
  _guard83 ? 3'd2 :
  _guard100 ? 3'd4 :
  _guard101 ? 3'd0 :
  _guard106 ? 3'd1 :
  _guard111 ? 3'd3 :
  3'd0;
always_comb begin
  if(~$onehot0({_guard111, _guard106, _guard101, _guard100, _guard83, _guard68})) begin
    $fatal(2, "Multiple assignment to port `fsm.in'.");
end
end
assign signal_reg0_write_en = _guard119;
assign signal_reg0_clk = clk;
assign signal_reg0_reset = reset;
assign signal_reg0_in =
  _guard125 ? 1'd1 :
  _guard126 ? 1'd0 :
  1'd0;
always_comb begin
  if(~$onehot0({_guard126, _guard125})) begin
    $fatal(2, "Multiple assignment to port `signal_reg0.in'.");
end
end
assign invoke2_go_in = _guard132;
assign wrapper_early_reset_static_par_thread_go_in = _guard138;
assign std_slt_0_left =
  _guard139 ? while_0_arg0_reg_out :
  32'd0;
assign std_slt_0_right =
  _guard140 ? std_add_2_out :
  32'd0;
assign ret_arg0_reg_write_en = _guard141;
assign ret_arg0_reg_clk = clk;
assign ret_arg0_reg_reset = reset;
assign ret_arg0_reg_in = while_0_arg1_reg_out;
assign comb_reg_write_en = _guard143;
assign comb_reg_clk = clk;
assign comb_reg_reset = reset;
assign comb_reg_in =
  _guard144 ? std_slt_0_out :
  1'd0;
assign std_add_2_left =
  _guard145 ? in0 :
  _guard146 ? while_0_arg1_reg_out :
  'x;
always_comb begin
  if(~$onehot0({_guard146, _guard145})) begin
    $fatal(2, "Multiple assignment to port `std_add_2.left'.");
end
end
assign std_add_2_right =
  _guard147 ? while_0_arg0_reg_out :
  _guard148 ? 32'd1 :
  'x;
always_comb begin
  if(~$onehot0({_guard148, _guard147})) begin
    $fatal(2, "Multiple assignment to port `std_add_2.right'.");
end
end
assign while_0_arg0_reg_write_en = _guard151;
assign while_0_arg0_reg_clk = clk;
assign while_0_arg0_reg_reset = reset;
assign while_0_arg0_reg_in =
  _guard152 ? std_add_1_out :
  _guard153 ? 32'd1 :
  'x;
always_comb begin
  if(~$onehot0({_guard153, _guard152})) begin
    $fatal(2, "Multiple assignment to port `while_0_arg0_reg.in'.");
end
end
assign std_add_1_left = while_0_arg0_reg_out;
assign std_add_1_right = 32'd1;
assign early_reset_bb0_100_go_in = _guard156;
assign tdcc_go_in = go;
assign wrapper_early_reset_bb0_100_go_in = _guard169;
assign early_reset_bb0_100_done_in = ud1_out;
assign signal_reg_write_en = _guard177;
assign signal_reg_clk = clk;
assign signal_reg_reset = reset;
assign signal_reg_in =
  _guard183 ? 1'd1 :
  _guard184 ? 1'd0 :
  1'd0;
always_comb begin
  if(~$onehot0({_guard184, _guard183})) begin
    $fatal(2, "Multiple assignment to port `signal_reg.in'.");
end
end
assign invoke2_done_in = ret_arg0_reg_done;
assign early_reset_static_par_thread_go_in = _guard185;
assign wrapper_early_reset_static_par_thread_done_in = _guard186;
assign tdcc_done_in = _guard187;
assign while_0_arg1_reg_write_en = _guard190;
assign while_0_arg1_reg_clk = clk;
assign while_0_arg1_reg_reset = reset;
assign while_0_arg1_reg_in =
  _guard191 ? 32'd0 :
  _guard192 ? std_add_2_out :
  'x;
always_comb begin
  if(~$onehot0({_guard192, _guard191})) begin
    $fatal(2, "Multiple assignment to port `while_0_arg1_reg.in'.");
end
end
assign early_reset_static_par_thread_done_in = ud_out;
assign wrapper_early_reset_bb0_100_done_in = _guard193;
// COMPONENT END: triangle
endmodule

