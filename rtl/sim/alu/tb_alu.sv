module tb_alu;

  typedef enum {
    ALU_OP_TYPE_ADD,
    ALU_OP_TYPE_PASS,
    ALU_OP_TYPE_SUB,
    ALU_OP_TYPE_AND,
    ALU_OP_TYPE_OR,
    ALU_OP_TYPE_XOR,
    ALU_OP_TYPE_SLL,
    ALU_OP_TYPE_SRL,
    ALU_OP_TYPE_SRA,
    ALU_OP_TYPE_SLT,
    ALU_OP_TYPE_SLTU
  } alu_op_t;

  // DUT signals
  logic    [31:0] op1;
  logic    [31:0] op2;
  alu_op_t        aluop;
  logic    [31:0] result;

  // Instantiate the ALU (SystemVerilog version)
  alu dut_alu (
    .op1    (op1),
    .op2    (op2),
    .aluop  (aluop),
    .result (result)
  );

  //---------------------------------------------------------------------------
  // Constant arrays for corner-case test values
  // Declared as localparams at module level to avoid syntax issues in tasks.
  //---------------------------------------------------------------------------
  localparam logic [31:0] CORNER_A[0:5] = '{
      32'h00000000, 32'hFFFFFFFF, 32'h55555555,
      32'hAAAAAAAA, 32'h80000000, 32'h7FFFFFFF
  };

  localparam logic [31:0] CORNER_B[0:5] = '{
      32'h00000000, 32'hFFFFFFFF, 32'h55555555,
      32'hAAAAAAAA, 32'h00000001, 32'h0000001F
  };

  //---------------------------------------------------------------------------
  // Expected result function
  //---------------------------------------------------------------------------
  function automatic logic [31:0] expected(
    input logic [31:0] a,
    input logic [31:0] b,
    input alu_op_t     op
  );
    logic [4:0] shamt;
    shamt = b[4:0];   

    case (op)
      ALU_OP_TYPE_ADD:  return a + b;
      ALU_OP_TYPE_PASS: return b;
      ALU_OP_TYPE_SUB:  return a - b;
      ALU_OP_TYPE_AND:  return a & b;
      ALU_OP_TYPE_OR:   return a | b;
      ALU_OP_TYPE_XOR:  return a ^ b;
      ALU_OP_TYPE_SLL:  return a << shamt;
      ALU_OP_TYPE_SRL:  return a >> shamt;
      ALU_OP_TYPE_SRA:  return $signed(a) >>> shamt;
      ALU_OP_TYPE_SLT:  return ($signed(a) < $signed(b)) ? 32'd1 : 32'd0;
      ALU_OP_TYPE_SLTU: return (a < b) ? 32'd1 : 32'd0;
      default:          return 32'd0;
    endcase
  endfunction

  int       error_count      = 0;
  int       test_count       = 0;
  const int NUM_RANDOM_TESTS = 100;

  //---------------------------------------------------------------------------
  // Main test sequence
  //---------------------------------------------------------------------------
  initial begin
    $display("ALU Testbench started");

    // Dump waveforms for GTKWave
    $dumpfile("alu_waveform.vcd");
    $dumpvars(0, tb_alu);

    test_op(ALU_OP_TYPE_ADD);
    test_op(ALU_OP_TYPE_PASS);
    test_op(ALU_OP_TYPE_SUB);
    test_op(ALU_OP_TYPE_AND);
    test_op(ALU_OP_TYPE_OR);
    test_op(ALU_OP_TYPE_XOR);
    test_op(ALU_OP_TYPE_SLL);
    test_op(ALU_OP_TYPE_SRL);
    test_op(ALU_OP_TYPE_SRA);
    test_op(ALU_OP_TYPE_SLT);
    test_op(ALU_OP_TYPE_SLTU);

    if (error_count == 0) begin
      $display("SUCCESS: All %0d tests passed.", test_count);
    end else begin
      $display("FAILURE: %0d errors out of %0d tests.", error_count, test_count);
    end

    $finish;
  end

  //---------------------------------------------------------------------------
  // Task to test one operation type
  //---------------------------------------------------------------------------
  task test_op(input alu_op_t op);
    string op_name;

    case (op)
      ALU_OP_TYPE_ADD:  op_name = "ADD";
      ALU_OP_TYPE_PASS: op_name = "PASS";
      ALU_OP_TYPE_SUB:  op_name = "SUB";
      ALU_OP_TYPE_AND:  op_name = "AND";
      ALU_OP_TYPE_OR:   op_name = "OR";
      ALU_OP_TYPE_XOR:  op_name = "XOR";
      ALU_OP_TYPE_SLL:  op_name = "SLL";
      ALU_OP_TYPE_SRL:  op_name = "SRL";
      ALU_OP_TYPE_SRA:  op_name = "SRA";
      ALU_OP_TYPE_SLT:  op_name = "SLT";
      ALU_OP_TYPE_SLTU: op_name = "SLTU";
    endcase

    $display("Testing %s ...", op_name);

    // Corner cases - iterate over the constant arrays
    for (int i = 0; i < 6; i++) begin
      for (int j = 0; j < 6; j++) begin
        test_vector(op, CORNER_A[i], CORNER_B[j], op_name);
      end
    end

    // Random tests
    repeat (NUM_RANDOM_TESTS) begin
      test_vector(op, $random, $random, op_name);
    end
  endtask

  //---------------------------------------------------------------------------
  // Task to apply a single test vector and check the result
  //---------------------------------------------------------------------------
  task test_vector(input alu_op_t op, input logic [31:0] a, input logic [31:0] b,
                   input string op_name);
    logic [31:0] exp;
    // Apply inputs
    op1 = a;
    op2 = b;
    aluop = op;
    // Small delay for combinational logic
    #1;
    // Compute expected
    exp = expected(a, b, op);
    test_count++;
    if (result !== exp) begin
      $error("Mismatch for %s: op1=%h, op2=%h, expected=%h, got=%h",
             op_name, a, b, exp, result);
      error_count++;
    end
  endtask

endmodule