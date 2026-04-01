`timescale 1ns/1ps

`include "cpu_defines.vh"
`include "memory_defines.vh"

`define TEST "addi"

module tb_cpu_selfcheck;

  // ------------------------------------------------------------
  // Clock / Reset
  // ------------------------------------------------------------
  logic clk;
  logic resetn;

  initial begin
    clk    = 1'b0;
    resetn = 1'b0;
    #200;
    resetn = 1'b1;
  end

  always #5 clk = ~clk;   // 100 MHz

  // ------------------------------------------------------------
  // CPU <-> IMEM
  // ------------------------------------------------------------
  logic         imem_ready;
  logic         imem_valid;
  logic [31:0]  imem_addr;
  logic [31:0]  imem_rdata;

  // ------------------------------------------------------------
  // CPU <-> DMEM
  // ------------------------------------------------------------
  logic         dmem_ready;
  logic         dmem_valid;
  logic [31:0]  dmem_addr;
  logic         dmem_write_enable;
  logic [1:0]   dmem_access_width;
  logic [31:0]  dmem_wdata;
  logic [31:0]  dmem_rdata;

  assign imem_ready = 1'b1;
  assign dmem_ready = 1'b1;

  // ------------------------------------------------------------
  // DUT
  // ------------------------------------------------------------
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
  );

  inst_memory inst_mem (
    .en   (1'b1),
    .addr (imem_addr),
    .data (imem_rdata)
  );

  data_memory data_mem (
    .clk           (clk),
    .addr          (dmem_addr),
    .write_enable  (dmem_write_enable),
    .access_enable (dmem_valid),
    .access_width  (dmem_access_width),
    .wdata         (dmem_wdata),
    .rdata         (dmem_rdata)
  );

  // ------------------------------------------------------------
  // Wave dump
  // ------------------------------------------------------------
  initial begin
    $dumpfile("cpu_selfcheck.vcd");
    $dumpvars(0, tb_cpu_selfcheck);
  end

  // ------------------------------------------------------------
  // Local parameters
  // ------------------------------------------------------------
  localparam integer MAX_CYCLES = 200000;
  localparam [31:0]  EBREAK     = 32'h00100073;
  localparam [31:0]  NOP        = 32'h00000013;

  // ------------------------------------------------------------
  // Delayed monitor signals (for logging only)
  // ------------------------------------------------------------
  logic         imem_ready_d, imem_valid_d;
  logic [31:0]  imem_addr_d, imem_rdata_d;

  logic         dmem_ready_d, dmem_valid_d, dmem_we_d;
  logic [1:0]   dmem_width_d;
  logic [31:0]  dmem_addr_d, dmem_wdata_d, dmem_rdata_d;

  // ------------------------------------------------------------
  // Register snapshot
  // ------------------------------------------------------------
  logic [31:0] regs [0:31];

  // ------------------------------------------------------------
  // Reference memory model
  // ------------------------------------------------------------
  logic [31:0] ref_data_rom [0:`DATA_ROM_MEMORY_SIZE_WORDS-1];
  logic [31:0] ref_data_ram [0:`DATA_RAM_MEMORY_SIZE_WORDS-1];

  integer i;
  integer cycles;
  logic [31:0] expected_raw_read;

  initial begin
    cycles = 0;

    for (i = 0; i < `DATA_ROM_MEMORY_SIZE_WORDS; i = i + 1)
      ref_data_rom[i] = 32'h00000000;

    for (i = 0; i < `DATA_RAM_MEMORY_SIZE_WORDS; i = i + 1)
      ref_data_ram[i] = 32'h00000000;
  end

  // ------------------------------------------------------------
  // Helpers
  // ------------------------------------------------------------
  function automatic bit in_data_rom(input logic [31:0] addr);
    begin
      in_data_rom = (addr >= `DATA_ROM_BASE_ADDRESS) &&
                    (addr < (`DATA_ROM_BASE_ADDRESS + `DATA_ROM_MEMORY_SIZE_BYTES));
    end
  endfunction

  function automatic bit in_data_ram(input logic [31:0] addr);
    begin
      in_data_ram = (addr >= `DATA_RAM_BASE_ADDRESS) &&
                    (addr < (`DATA_RAM_BASE_ADDRESS + `DATA_RAM_MEMORY_SIZE_BYTES));
    end
  endfunction

  function automatic bit valid_dmem_alignment(
    input logic [31:0] addr,
    input logic [1:0]  width
  );
    begin
      case (width)
        `MEM_ACCESS_WIDTH_32: valid_dmem_alignment = (addr[1:0] == 2'b00);
        `MEM_ACCESS_WIDTH_16: valid_dmem_alignment = (addr[0]   == 1'b0);
        default:              valid_dmem_alignment = 1'b1;
      endcase
    end
  endfunction

  function automatic [31:0] do_raw_read(
    input logic [31:0] addr,
    input logic [1:0]  width
  );
    reg [31:0] word;
    reg [31:0] result;
    integer idx;
    begin
      result = 32'hFFFF_FFFF;

      if (in_data_rom(addr)) begin
        idx  = (addr - `DATA_ROM_BASE_ADDRESS) >> 2;
        word = ref_data_rom[idx];
      end
      else if (in_data_ram(addr)) begin
        idx  = (addr - `DATA_RAM_BASE_ADDRESS) >> 2;
        word = ref_data_ram[idx];
      end
      else begin
        do_raw_read = 32'hFFFF_FFFF;
        return do_raw_read;
      end

      if (!valid_dmem_alignment(addr, width)) begin
        do_raw_read = 32'hFFFF_FFFF;
        return do_raw_read;
      end

      case (width)
        `MEM_ACCESS_WIDTH_32: result = word;

        `MEM_ACCESS_WIDTH_16: begin
          if (addr[1] == 1'b0)
            result = {16'h0000, word[15:0]};
          else
            result = {16'h0000, word[31:16]};
        end

        default: begin
          case (addr[1:0])
            2'b00: result = {24'h000000, word[7:0]};
            2'b01: result = {24'h000000, word[15:8]};
            2'b10: result = {24'h000000, word[23:16]};
            2'b11: result = {24'h000000, word[31:24]};
          endcase
        end
      endcase

      do_raw_read = result;
    end
  endfunction

  task automatic do_raw_write(
    input logic [31:0] addr,
    input logic [1:0]  width,
    input logic [31:0] wdata
  );
    integer idx;
    reg [31:0] tmp;
    begin
      if (!in_data_ram(addr))
        return;

      if (!valid_dmem_alignment(addr, width))
        return;

      idx = (addr - `DATA_RAM_BASE_ADDRESS) >> 2;
      tmp = ref_data_ram[idx];

      case (width)
        `MEM_ACCESS_WIDTH_32: tmp = wdata;

        `MEM_ACCESS_WIDTH_16: begin
          if (addr[1] == 1'b0)
            tmp[15:0]  = wdata[15:0];
          else
            tmp[31:16] = wdata[15:0];
        end

        default: begin
          case (addr[1:0])
            2'b00: tmp[7:0]   = wdata[7:0];
            2'b01: tmp[15:8]  = wdata[7:0];
            2'b10: tmp[23:16] = wdata[7:0];
            2'b11: tmp[31:24] = wdata[7:0];
          endcase
        end
      endcase

      ref_data_ram[idx] = tmp;
    end
  endtask

  task automatic sample_regs;
    integer k;
    begin
      for (k = 0; k < 32; k = k + 1)
        regs[k] = cpu_dut.regfile_inst.regs[k];
    end
  endtask

  task automatic fail_test(input string msg);
    begin
      $display("--------------------------------------------------");
      $display("TB FAIL: %s", msg);
      $display("Time=%0t  Cycle=%0d", $time, cycles);
      $display("PC=%h  Instr=%h", imem_addr, imem_rdata);
      $display("x10=%h  x11=%h", regs[10], regs[11]);
      $display("--------------------------------------------------");
      $fatal(1);
    end
  endtask

  function automatic string reg_name(input logic [4:0] r);
    begin
      reg_name = $sformatf("x%0d", r);
    end
  endfunction

  function automatic string to_mnemonic(input logic [31:0] instr);
    reg [6:0]  opc;
    reg [2:0]  f3;
    reg [6:0]  f7;
    reg [4:0]  rd, rs1, rs2;
    reg [31:0] imm_i, imm_s, imm_b, imm_u, imm_j;
    begin
      opc = instr[6:0];
      f3  = instr[14:12];
      f7  = instr[31:25];
      rd  = instr[11:7];
      rs1 = instr[19:15];
      rs2 = instr[24:20];

      imm_i = {{20{instr[31]}}, instr[31:20]};
      imm_s = {{20{instr[31]}}, instr[31:25], instr[11:7]};
      imm_b = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};
      imm_u = {instr[31:12], 12'd0};
      imm_j = {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};

      if (opc == 7'b0110111) begin
        to_mnemonic = $sformatf("lui %s, %h", reg_name(rd), imm_u);
        return;
      end
      if (opc == 7'b0010111) begin
        to_mnemonic = $sformatf("auipc %s, %h", reg_name(rd), imm_u);
        return;
      end
      if (opc == 7'b1101111) begin
        to_mnemonic = $sformatf("jal %s, %h", reg_name(rd), imm_j);
        return;
      end
      if (opc == 7'b1100111 && f3 == 3'b000) begin
        to_mnemonic = $sformatf("jalr %s, %h(%s)", reg_name(rd), imm_i, reg_name(rs1));
        return;
      end

      if (opc == 7'b1100011) begin
        case (f3)
          3'b000: to_mnemonic = $sformatf("beq %s, %s, %h",  reg_name(rs1), reg_name(rs2), imm_b);
          3'b001: to_mnemonic = $sformatf("bne %s, %s, %h",  reg_name(rs1), reg_name(rs2), imm_b);
          3'b100: to_mnemonic = $sformatf("blt %s, %s, %h",  reg_name(rs1), reg_name(rs2), imm_b);
          3'b101: to_mnemonic = $sformatf("bge %s, %s, %h",  reg_name(rs1), reg_name(rs2), imm_b);
          3'b110: to_mnemonic = $sformatf("bltu %s, %s, %h", reg_name(rs1), reg_name(rs2), imm_b);
          3'b111: to_mnemonic = $sformatf("bgeu %s, %s, %h", reg_name(rs1), reg_name(rs2), imm_b);
          default: to_mnemonic = "branch?";
        endcase
        return;
      end

      if (opc == 7'b0000011) begin
        case (f3)
          3'b000: to_mnemonic = $sformatf("lb %s, %h(%s)",  reg_name(rd), imm_i, reg_name(rs1));
          3'b001: to_mnemonic = $sformatf("lh %s, %h(%s)",  reg_name(rd), imm_i, reg_name(rs1));
          3'b010: to_mnemonic = $sformatf("lw %s, %h(%s)",  reg_name(rd), imm_i, reg_name(rs1));
          3'b100: to_mnemonic = $sformatf("lbu %s, %h(%s)", reg_name(rd), imm_i, reg_name(rs1));
          3'b101: to_mnemonic = $sformatf("lhu %s, %h(%s)", reg_name(rd), imm_i, reg_name(rs1));
          default: to_mnemonic = "load?";
        endcase
        return;
      end

      if (opc == 7'b0100011) begin
        case (f3)
          3'b000: to_mnemonic = $sformatf("sb %s, %h(%s)", reg_name(rs2), imm_s, reg_name(rs1));
          3'b001: to_mnemonic = $sformatf("sh %s, %h(%s)", reg_name(rs2), imm_s, reg_name(rs1));
          3'b010: to_mnemonic = $sformatf("sw %s, %h(%s)", reg_name(rs2), imm_s, reg_name(rs1));
          default: to_mnemonic = "store?";
        endcase
        return;
      end

      if (opc == 7'b0010011) begin
        case (f3)
          3'b000: to_mnemonic = $sformatf("addi %s, %s, %h",  reg_name(rd), reg_name(rs1), imm_i);
          3'b010: to_mnemonic = $sformatf("slti %s, %s, %h",  reg_name(rd), reg_name(rs1), imm_i);
          3'b011: to_mnemonic = $sformatf("sltiu %s, %s, %h", reg_name(rd), reg_name(rs1), imm_i);
          3'b100: to_mnemonic = $sformatf("xori %s, %s, %h",  reg_name(rd), reg_name(rs1), imm_i);
          3'b110: to_mnemonic = $sformatf("ori %s, %s, %h",   reg_name(rd), reg_name(rs1), imm_i);
          3'b111: to_mnemonic = $sformatf("andi %s, %s, %h",  reg_name(rd), reg_name(rs1), imm_i);
          3'b001: to_mnemonic = $sformatf("slli %s, %s, %0d", reg_name(rd), reg_name(rs1), instr[24:20]);
          3'b101: begin
            if (f7 == 7'b0000000)
              to_mnemonic = $sformatf("srli %s, %s, %0d", reg_name(rd), reg_name(rs1), instr[24:20]);
            else
              to_mnemonic = $sformatf("srai %s, %s, %0d", reg_name(rd), reg_name(rs1), instr[24:20]);
          end
          default: to_mnemonic = "op-imm?";
        endcase
        return;
      end

      if (opc == 7'b0110011) begin
        case (f3)
          3'b000: begin
            if (f7 == 7'b0000000)
              to_mnemonic = $sformatf("add %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
            else
              to_mnemonic = $sformatf("sub %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
          end
          3'b001: to_mnemonic = $sformatf("sll %s, %s, %s",  reg_name(rd), reg_name(rs1), reg_name(rs2));
          3'b010: to_mnemonic = $sformatf("slt %s, %s, %s",  reg_name(rd), reg_name(rs1), reg_name(rs2));
          3'b011: to_mnemonic = $sformatf("sltu %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
          3'b100: to_mnemonic = $sformatf("xor %s, %s, %s",  reg_name(rd), reg_name(rs1), reg_name(rs2));
          3'b101: begin
            if (f7 == 7'b0000000)
              to_mnemonic = $sformatf("srl %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
            else
              to_mnemonic = $sformatf("sra %s, %s, %s", reg_name(rd), reg_name(rs1), reg_name(rs2));
          end
          3'b110: to_mnemonic = $sformatf("or %s, %s, %s",   reg_name(rd), reg_name(rs1), reg_name(rs2));
          3'b111: to_mnemonic = $sformatf("and %s, %s, %s",  reg_name(rd), reg_name(rs1), reg_name(rs2));
          default: to_mnemonic = "op?";
        endcase
        return;
      end

      if (opc == 7'b1110011) begin
        if (instr[31:20] == 12'h000) begin
          to_mnemonic = "ecall";
          return;
        end
        if (instr[31:20] == 12'h001) begin
          to_mnemonic = "ebreak";
          return;
        end
        to_mnemonic = "system?";
        return;
      end

      if (instr == NOP)
        to_mnemonic = "nop";
      else
        to_mnemonic = "unknown";
    end
  endfunction

  // ------------------------------------------------------------
  // Main monitor / checker
  // ------------------------------------------------------------
  always @(posedge clk) begin
    if (!resetn) begin
      cycles       <= 0;

      imem_ready_d <= 1'b0;
      imem_valid_d <= 1'b0;
      imem_addr_d  <= 32'h0;
      imem_rdata_d <= 32'h0;

      dmem_ready_d <= 1'b0;
      dmem_valid_d <= 1'b0;
      dmem_we_d    <= 1'b0;
      dmem_width_d <= 2'b0;
      dmem_addr_d  <= 32'h0;
      dmem_wdata_d <= 32'h0;
      dmem_rdata_d <= 32'h0;
    end
    else begin
      cycles <= cycles + 1;

      sample_regs();

      // --------------------------------------------------------
      // Immediate EBREAK handling (FIX)
      // --------------------------------------------------------
      if (imem_ready && imem_valid && imem_rdata == EBREAK) begin
        if (regs[10] == 32'h0000_0101) begin
          $display("--------------------------------------------------");
          $display("RVTEST (%s) : OK", `TEST);
          $display("Completed in %0d cycles", cycles);
          $display("PC=%08h  INSTR=%08h", imem_addr, imem_rdata);
          $display("--------------------------------------------------");
          $finish;
        end
        else if (regs[10] == 32'h0000_0102) begin
          fail_test($sformatf("RVTEST (%s) reported KO, test number x11=%0d", `TEST, regs[11]));
        end
        else begin
          fail_test($sformatf("unexpected EBREAK convention state: x10=%08h x11=%08h", regs[10], regs[11]));
        end
      end

      // one-cycle delayed copies for logging / memory checks
      imem_ready_d <= imem_ready;
      imem_valid_d <= imem_valid;
      imem_addr_d  <= imem_addr;
      imem_rdata_d <= imem_rdata;

      dmem_ready_d <= dmem_ready;
      dmem_valid_d <= dmem_valid;
      dmem_we_d    <= dmem_write_enable;
      dmem_width_d <= dmem_access_width;
      dmem_addr_d  <= dmem_addr;
      dmem_wdata_d <= dmem_wdata;
      dmem_rdata_d <= dmem_rdata;

      // --------------------------------------------------------
      // Basic invariants
      // --------------------------------------------------------
      if (regs[0] !== 32'h0000_0000)
        fail_test($sformatf("x0 is not zero: x0=%h", regs[0]));

      if (imem_valid !== 1'b1)
        fail_test("imem_valid deasserted unexpectedly");

      if (imem_addr[1:0] !== 2'b00)
        fail_test($sformatf("instruction fetch address not word aligned: %h", imem_addr));

      if (dmem_valid) begin
        case (dmem_access_width)
          `MEM_ACCESS_WIDTH_32:
            if (dmem_addr[1:0] !== 2'b00)
              fail_test($sformatf("misaligned word data access at %h", dmem_addr));

          `MEM_ACCESS_WIDTH_16:
            if (dmem_addr[0] !== 1'b0)
              fail_test($sformatf("misaligned halfword data access at %h", dmem_addr));

          default: begin
          end
        endcase
      end

      // --------------------------------------------------------
      // Optional transaction trace
      // --------------------------------------------------------
      if (imem_ready_d && imem_valid_d) begin
        $display("[INST] cycle=%0d pc=%08h instr=%08h  %s",
                 cycles, imem_addr_d, imem_rdata_d, to_mnemonic(imem_rdata_d));
      end

      if (dmem_ready_d && dmem_valid_d) begin
        if (dmem_we_d) begin
          $display("[DATA-W] cycle=%0d addr=%08h width=%0d wdata=%08h",
                   cycles, dmem_addr_d, dmem_width_d, dmem_wdata_d);
        end
        else begin
          $display("[DATA-R] cycle=%0d addr=%08h width=%0d rdata=%08h",
                   cycles, dmem_addr_d, dmem_width_d, dmem_rdata_d);
        end
      end

      // --------------------------------------------------------
      // Self-check data memory behavior
      // --------------------------------------------------------
      if (dmem_ready_d && dmem_valid_d) begin
        if (dmem_we_d) begin
          do_raw_write(dmem_addr_d, dmem_width_d, dmem_wdata_d);
        end
        else begin
          expected_raw_read = do_raw_read(dmem_addr_d, dmem_width_d);
          if (dmem_rdata_d !== expected_raw_read) begin
            fail_test($sformatf(
              "data read mismatch at addr=%08h width=%0d expected=%08h got=%08h",
              dmem_addr_d, dmem_width_d, expected_raw_read, dmem_rdata_d
            ));
          end
        end
      end

      // --------------------------------------------------------
      // Timeout
      // --------------------------------------------------------
      if (cycles >= MAX_CYCLES)
        fail_test($sformatf("timeout after %0d cycles", MAX_CYCLES));
    end
  end

endmodule