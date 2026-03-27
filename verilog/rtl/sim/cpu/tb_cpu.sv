`include "cpu_defines.vh"
`include "memory_defines.vh"

`define TEST "addi"

module tb_cpu ();

  reg           clk        = 0;
  reg           resetn     = 0;

  wire          imem_ready = 1'b1;
  wire          imem_valid;
  wire [31 : 0] imem_addr;
  wire [31 : 0] imem_rdata;

  wire          dmem_ready = 1'b1;
  wire          dmem_valid;
  wire [31 : 0] dmem_addr;
  wire          dmem_write_enable;
  wire [1 : 0]  dmem_access_width;
  wire [31 : 0] dmem_wdata;
  wire [31 : 0] dmem_rdata;

  // wire [31 : 0] trace_regs [0 : 31];


  cpu cpu_dut (
    .clk               (clk),
    .resetn            (resetn),

    .imem_ready        (imem_ready),
    .imem_valid        (imem_valid),
    .imem_addr         (imem_addr),
    .imem_rdata        (imem_rdata),

    .dmem_ready        (dmem_ready),
    .dmem_valid        (dmem_valid),
    .dmem_addr         (dmem_addr),
    .dmem_write_enable (dmem_write_enable),
    .dmem_access_width (dmem_access_width),
    .dmem_wdata        (dmem_wdata),
    .dmem_rdata        (dmem_rdata)

//    .trace_regs        (trace_regs)
  );

  // Instruction memory (ROM)
  inst_memory inst_mem (
    .en                (1'b1),
    .addr              (imem_addr),
    .data              (imem_rdata)
  );

  // Data memory (RAM + ROM)
  data_memory data_mem (
    .clk               (clk),
    .addr              (dmem_addr),
    .write_enable      (dmem_write_enable),
    .access_enable     (dmem_valid),
    .access_width      (dmem_access_width),
    .wdata             (dmem_wdata),
    .rdata             (dmem_rdata)
  );

  // Monitor (prints instruction and data accesses, detects EBREAK)
  reg [31 : 0] imem_addr_d; 
	reg [31 : 0] imem_rdata_d;

  reg          imem_valid_d; 
	reg          imem_ready_d;

  reg [31 : 0] dmem_addr_d; 
	reg [31 : 0] dmem_wdata_d; 
	reg [31 : 0] dmem_rdata_d;

  reg          dmem_valid_d; 
	reg          dmem_ready_d;

  reg          dmem_we_d;
  reg [1 : 0]  dmem_width_d;

  reg [31 : 0] regs [0 : 31];

	integer cycles = 0;

  // Parameter for maximum cycles before timeout
  localparam MAX_CYCLES = 200000;
  localparam EBREAK = 32'h00100073;

  // Clock generation: 100 MHz (5 ns half‑period)
  always #5 clk = ~clk;

  // Reset pulse
  initial begin
    resetn = 0;

  #200;
    resetn = 1;
  end

  initial begin
    $dumpfile("cpu_waveform.vcd");
    $dumpvars(0, tb_cpu);
  end

  // Monitor process (sensitive to clock)
  always @(posedge clk) begin
    if (resetn) begin
      cycles = cycles + 1;

      // Delay signals to match the VHDL testbench
      imem_ready_d <= imem_ready;
      imem_valid_d <= imem_valid;
      imem_rdata_d <= imem_rdata;
      imem_addr_d  <= imem_addr;

      dmem_ready_d <= dmem_ready;
      dmem_valid_d <= dmem_valid;
      dmem_addr_d  <= dmem_addr;
      dmem_wdata_d <= dmem_wdata; 
      dmem_rdata_d <= dmem_rdata;
      dmem_we_d    <= dmem_write_enable;
      dmem_width_d <= dmem_access_width;

      // Copy register file from DUT's trace_regs to a local array for easier access
      for (int i = 0; i < 32; i++) begin
				regs[i] = cpu_dut.regfile_inst.regs[i];
			end

        // Instruction fetch monitor
      if (imem_ready_d && imem_valid_d) begin
        $display("[INST] Addr=%h, Word=%0d, Instruction=%h, Mnemonic=%s", imem_addr_d, imem_addr_d >> 2, imem_rdata_d, to_mnemonic(imem_rdata_d));
        
				// Dump non‑zero registers
        if (dump_registers(regs) != "") begin
          $display(dump_registers(regs));
        end

      end

      // Data memory access monitor
      if (dmem_ready_d && dmem_valid_d) begin
        $display("[DATA] Addr=%h, Word=%0d, WData=%h, RData=%h", dmem_addr_d, dmem_addr_d >> 2, dmem_wdata_d, dmem_rdata_d);
      end

      // Detect EBREAK on instruction fetch
      if (imem_valid_d && imem_ready_d && imem_rdata_d == EBREAK) begin
        if (regs[10] == 32'h00000101) begin
          $display("RVTEST (%s) : OK", `TEST);
          $finish;
        end else if (regs[10] == 32'h00000102) begin
          $display("RVTEST (%s) : KO", `TEST);
          $display("TEST_%0d is KO", regs[11]);
          $finish;
        end else begin
          $display("Semihosting EBREAK unexpected x10=0x%h", regs[10]);
          $finish;
        end
      end

      // Timeout
      if (cycles >= MAX_CYCLES) begin
        $display("Timeout after %0d cycles", MAX_CYCLES);
        $finish;
      end

    end
  end

  function automatic string reg_name(input [4 : 0] r);
    reg_name = $sformatf("x%0d", r);
  endfunction

  function automatic string dump_registers(input [31 : 0] regs[0 : 31]);
    string line;
    int i;
    int any_nonzero = 0;

    for (i = 0; i < 32; i++) begin
      if (regs[i] != 32'd0) begin
        any_nonzero = 1;
        break;

      end
    end

    if (!any_nonzero) begin
			return "";
		end

    line = "[REGS] ";
    
		for (i = 0; i < 32; i++) begin
      if (regs[i] != 32'd0) begin
        line = {line, $sformatf("x%0d=%h ", i, regs[i])};
      end
    end

    return line;

  endfunction

  function automatic string to_mnemonic(input [31 : 0] instr);
    reg [6 : 0] opc = instr[6 : 0];
    reg [2 : 0] f3  = instr[14 : 12];
    reg [6 : 0] f7  = instr[31 : 25];
    reg [4 : 0] rd  = instr[11 : 7];
    reg [4 : 0] rs1 = instr[19 : 15];
    reg [4 : 0] rs2 = instr[24 : 20];

    reg [31 : 0] imm_i;
		reg [31 : 0] imm_s; 
		reg [31 : 0] imm_b; 
		reg [31 : 0] imm_u; 
		reg [31 : 0] imm_j;

    // Immediate generation
    imm_i = { {20{instr[31]}}, instr[30 : 20] };
    imm_s = { {21{instr[31]}}, instr[30 : 25], instr[11 : 7] };
    imm_b = { {20{instr[31]}}, instr[7], instr[30 : 25], instr[11 : 8], 1'b0 };
    imm_u = { instr[31 : 12], 12'd0 };
    imm_j = { {12{instr[31]}}, instr[19 : 12], instr[20], instr[30 : 21], 1'b0 };

    // LUI / AUIPC
    if (opc == 7'b0110111) begin 
			return $sformatf("lui %s, %h", reg_name(rd), imm_u);
		end

    if (opc == 7'b0010111) begin 
			return $sformatf("auipc %s, %h", reg_name(rd), imm_u);
		end

    // Jumps
    if (opc == 7'b1101111) begin
			return $sformatf("jal %s, %h", reg_name(rd), imm_j);
		end

    if (opc == 7'b1100111 && f3 == 3'b000) begin
			return $sformatf("jalr %s, %h(%s)", reg_name(rd), imm_i, reg_name(rs1));
		end

    // Branch
    if (opc == 7'b1100011) begin
      case (f3)
        3'b000: return $sformatf("beq %s, %s, %h", reg_name(rs1), reg_name(rs2), imm_b);
        3'b001: return $sformatf("bne %s, %s, %h", reg_name(rs1), reg_name(rs2), imm_b);
        3'b100: return $sformatf("blt %s, %s, %h", reg_name(rs1), reg_name(rs2), imm_b);
        3'b101: return $sformatf("bge %s, %s, %h", reg_name(rs1), reg_name(rs2), imm_b);
        3'b110: return $sformatf("bltu %s, %s, %h", reg_name(rs1), reg_name(rs2), imm_b);
        3'b111: return $sformatf("bgeu %s, %s, %h", reg_name(rs1), reg_name(rs2), imm_b);
        
				default: return "branch?";
      
			endcase
    end

    // Loads
    if (opc == 7'b0000011) begin
      case (f3)
        3'b000: return $sformatf("lb %s, %h(%s)", reg_name(rd), imm_i, reg_name(rs1));
        3'b001: return $sformatf("lh %s, %h(%s)", reg_name(rd), imm_i, reg_name(rs1));
        3'b010: return $sformatf("lw %s, %h(%s)", reg_name(rd), imm_i, reg_name(rs1));
        3'b100: return $sformatf("lbu %s, %h(%s)", reg_name(rd), imm_i, reg_name(rs1));
        3'b101: return $sformatf("lhu %s, %h(%s)", reg_name(rd), imm_i, reg_name(rs1));
        
				default: return "load?";
      
			endcase
    end

    // Stores
    if (opc == 7'b0100011) begin
      case (f3)
        3'b000: return $sformatf("sb %s, %h(%s)", reg_name(rs2), imm_s, reg_name(rs1));
        3'b001: return $sformatf("sh %s, %h(%s)", reg_name(rs2), imm_s, reg_name(rs1));
        3'b010: return $sformatf("sw %s, %h(%s)", reg_name(rs2), imm_s, reg_name(rs1));
        
				default: return "store?";
      
			endcase
    
		end

    // OP-IMM
    if (opc == 7'b0010011) begin
      case (f3)
        3'b000: return $sformatf("addi %s, %s, %h", reg_name(rd), reg_name(rs1), imm_i);
        3'b010: return $sformatf("slti %s, %s, %h", reg_name(rd), reg_name(rs1), imm_i);
        3'b011: return $sformatf("sltiu %s, %s, %h", reg_name(rd), reg_name(rs1), imm_i);
        3'b100: return $sformatf("xori %s, %s, %h", reg_name(rd), reg_name(rs1), imm_i);
        3'b110: return $sformatf("ori %s, %s, %h", reg_name(rd), reg_name(rs1), imm_i);
        3'b111: return $sformatf("andi %s, %s, %h", reg_name(rd), reg_name(rs1), imm_i);
        3'b001: return $sformatf("slli %s, %s, %h", reg_name(rd), reg_name(rs1), instr[24:20]);
        3'b101: begin
          if (f7 == 7'b0000000) begin
            return $sformatf("srli %s, %s, %0d", reg_name(rd), reg_name(rs1), instr[24:20]);
					end else begin
            return $sformatf("srai %s, %s, %0d", reg_name(rd), reg_name(rs1), instr[24:20]);
					end
        end
        
				default: return "op-imm?";

      endcase

    end

    // OP (register-register)
    if (opc == 7'b0110011) begin
      case (f3)
        3'b000: begin
          if (f7 == 7'b0000000) begin 
						return $sformatf("add %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
					end else begin
						return $sformatf("sub %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
					end
        end

        3'b001: return $sformatf("sll %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
        3'b010: return $sformatf("slt %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
        3'b011: return $sformatf("sltu %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
        3'b100: return $sformatf("xor %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
        3'b101: begin
          if (f7 == 7'b0000000) begin
						return $sformatf("srl %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
					end else begin 
						return $sformatf("sra %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
					end
        end

        3'b110: return $sformatf("or %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
        3'b111: return $sformatf("and %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
        
				default: return "op?";

      endcase
    
		end

    // SYSTEM
    if (opc == 7'b1110011) begin
      if (instr[31:20] == 12'h000) begin
				return "ecall";
			end
      
			if (instr[31:20] == 12'h001) begin 
				return "ebreak";
			end 

      return "system?";
    end

    return "unknown";

  endfunction

endmodule