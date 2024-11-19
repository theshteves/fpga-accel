`timescale 1ns/1ps

module triangle_tb;
  // Declare signals that match module ports
  logic [31:0] in0;
  logic clk;
  logic reset;
  logic go;
  logic [31:0] out0;
  logic done;

  // Instantiate the DUT (Design Under Test)
  triangle dut (
    .in0(in0),
    .clk(clk),
    .reset(reset),
    .go(go),
    .out0(out0),
    .done(done)
  );

  // Clock generation
  always #5 clk = ~clk;  // 100MHz clock (10ns period)

  // Test stimulus
  initial begin
    // Set up waveform dumping
    $dumpfile("triangle.vcd");
    $dumpvars(0, triangle_tb);

    // Initialize signals
    clk = 0;
    reset = 1;
    go = 0;
    in0 = 0;

    // Reset sequence
    #20 reset = 0;

    // Test case 1
    #10;
    in0 = 32'd5;  // Test with input value 5
    go = 1;

    // Wait for completion
    @(posedge done);
    #10 go = 0;

    // Add more test cases here

    // End simulation
    #100 $finish;
  end

  // Optional: Monitor changes
  initial begin
    $monitor("Time=%0t reset=%b go=%b in0=%0d out0=%0d done=%b",
             $time, reset, go, in0, out0, done);
  end

endmodule
