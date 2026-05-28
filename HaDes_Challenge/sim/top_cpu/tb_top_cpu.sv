`timescale 1ns/1ps

interface wishbone_interface;
    logic        cyc;
    logic        stb;
    logic        ack;
    logic        err;
    logic [31:0] adr;
    logic [3:0]  sel;
    logic        we;
    logic [31:0] dat_mosi;
    logic [31:0] dat_miso;

    modport master (
        output cyc,
        output stb,
        input  ack,
        input  err,
        output adr,
        output sel,
        output we,
        output dat_mosi,
        input  dat_miso
    );

    modport slave (
        input  cyc,
        input  stb,
        output ack,
        output err,
        input  adr,
        input  sel,
        input  we,
        input  dat_mosi,
        output dat_miso
    );
endinterface

module tb_top_cpu;

    logic clk;
    logic rst;

    logic external_interrupt_in;
    logic timer_interrupt_in;

    wishbone_interface fetch_wb();
    wishbone_interface mem_wb();

    int pass_count;
    int fail_count;

    localparam int IMEM_WORDS = 2048;
    localparam int DMEM_BYTES = 8192;

    logic [31:0] imem [0:IMEM_WORDS-1];
    logic [7:0]  dmem [0:DMEM_BYTES-1];

    localparam logic [31:0] RESET_PC        = constants::RESET_ADDRESS;
    localparam logic [31:0] DATA_BASE       = 32'h0000_0100;
    localparam logic [31:0] TRAP_PC         = RESET_PC + 32'h0000_0300;
    localparam logic [31:0] JALR_TARGET_PC  = RESET_PC + 32'h0000_0500;
    localparam logic [31:0] FETCH_FAULT_PC  = RESET_PC + 32'h0000_0600;
    localparam logic [31:0] DATA_FAULT_ADDR = 32'h0000_0400;

    localparam logic [31:0] MCAUSE_INSTR_MISALIGNED = 32'd0;
    localparam logic [31:0] MCAUSE_INSTR_FAULT      = 32'd1;
    localparam logic [31:0] MCAUSE_ILLEGAL          = 32'd2;
    localparam logic [31:0] MCAUSE_BREAKPOINT       = 32'd3;
    localparam logic [31:0] MCAUSE_LOAD_MISALIGNED  = 32'd4;
    localparam logic [31:0] MCAUSE_LOAD_FAULT       = 32'd5;
    localparam logic [31:0] MCAUSE_STORE_MISALIGNED = 32'd6;
    localparam logic [31:0] MCAUSE_STORE_FAULT      = 32'd7;
    localparam logic [31:0] MCAUSE_ECALL_MMODE      = 32'd11;

    localparam logic [31:0] MCAUSE_TIMER_INTERRUPT  = 32'h8000_0007;
    localparam logic [31:0] MCAUSE_EXT_INTERRUPT    = 32'h8000_000B;

    localparam logic [31:0] MSTATUS_MIE = 32'h0000_0008;
    localparam logic [31:0] MIE_MTIE    = 32'h0000_0080;
    localparam logic [31:0] MIE_MEIE    = 32'h0000_0800;

    logic [31:0] expected_auipc_value;
    logic [31:0] expected_jalr_link_value;

    cpu dut (
        .clk                   (clk),
        .rst                   (rst),
        .memory_fetch_port     (fetch_wb.master),
        .memory_mem_port       (mem_wb.master),
        .external_interrupt_in (external_interrupt_in),
        .timer_interrupt_in    (timer_interrupt_in)
    );

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    // ------------------------------------------------------------------
    // Instruction encoders
    // ------------------------------------------------------------------
    function automatic logic [31:0] enc_r(
        input logic [6:0] funct7,
        input logic [4:0] rs2,
        input logic [4:0] rs1,
        input logic [2:0] funct3,
        input logic [4:0] rd,
        input logic [6:0] opcode
    );
        enc_r = {funct7, rs2, rs1, funct3, rd, opcode};
    endfunction

    function automatic logic [31:0] enc_i(
        input logic signed [11:0] imm,
        input logic [4:0] rs1,
        input logic [2:0] funct3,
        input logic [4:0] rd,
        input logic [6:0] opcode
    );
        enc_i = {imm[11:0], rs1, funct3, rd, opcode};
    endfunction

    function automatic logic [31:0] enc_s(
        input logic signed [11:0] imm,
        input logic [4:0] rs2,
        input logic [4:0] rs1,
        input logic [2:0] funct3,
        input logic [6:0] opcode
    );
        enc_s = {imm[11:5], rs2, rs1, funct3, imm[4:0], opcode};
    endfunction

    function automatic logic [31:0] enc_b(
        input logic signed [12:0] imm,
        input logic [4:0] rs2,
        input logic [4:0] rs1,
        input logic [2:0] funct3,
        input logic [6:0] opcode
    );
        enc_b = {imm[12], imm[10:5], rs2, rs1, funct3, imm[4:1], imm[11], opcode};
    endfunction

    function automatic logic [31:0] enc_u(
        input logic [19:0] imm20,
        input logic [4:0] rd,
        input logic [6:0] opcode
    );
        enc_u = {imm20, rd, opcode};
    endfunction

    function automatic logic [31:0] enc_j(
        input logic signed [20:0] imm,
        input logic [4:0] rd,
        input logic [6:0] opcode
    );
        enc_j = {imm[20], imm[10:1], imm[11], imm[19:12], rd, opcode};
    endfunction

    function automatic logic [31:0] addi(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        addi = enc_i(imm, rs1, 3'b000, rd, 7'b0010011);
    endfunction

    function automatic logic [31:0] andi(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        andi = enc_i(imm, rs1, 3'b111, rd, 7'b0010011);
    endfunction

    function automatic logic [31:0] ori(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        ori = enc_i(imm, rs1, 3'b110, rd, 7'b0010011);
    endfunction

    function automatic logic [31:0] xori(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        xori = enc_i(imm, rs1, 3'b100, rd, 7'b0010011);
    endfunction

    function automatic logic [31:0] slti(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        slti = enc_i(imm, rs1, 3'b010, rd, 7'b0010011);
    endfunction

    function automatic logic [31:0] sltiu(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        sltiu = enc_i(imm, rs1, 3'b011, rd, 7'b0010011);
    endfunction

    function automatic logic [31:0] slli(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] shamt);
        slli = {7'b0000000, shamt, rs1, 3'b001, rd, 7'b0010011};
    endfunction

    function automatic logic [31:0] srli(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] shamt);
        srli = {7'b0000000, shamt, rs1, 3'b101, rd, 7'b0010011};
    endfunction

    function automatic logic [31:0] srai(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] shamt);
        srai = {7'b0100000, shamt, rs1, 3'b101, rd, 7'b0010011};
    endfunction

    function automatic logic [31:0] add_instr(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        add_instr = enc_r(7'b0000000, rs2, rs1, 3'b000, rd, 7'b0110011);
    endfunction

    function automatic logic [31:0] sub_instr(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        sub_instr = enc_r(7'b0100000, rs2, rs1, 3'b000, rd, 7'b0110011);
    endfunction

    function automatic logic [31:0] and_instr(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        and_instr = enc_r(7'b0000000, rs2, rs1, 3'b111, rd, 7'b0110011);
    endfunction

    function automatic logic [31:0] or_instr(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        or_instr = enc_r(7'b0000000, rs2, rs1, 3'b110, rd, 7'b0110011);
    endfunction

    function automatic logic [31:0] xor_instr(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        xor_instr = enc_r(7'b0000000, rs2, rs1, 3'b100, rd, 7'b0110011);
    endfunction

    function automatic logic [31:0] sll_instr(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        sll_instr = enc_r(7'b0000000, rs2, rs1, 3'b001, rd, 7'b0110011);
    endfunction

    function automatic logic [31:0] srl_instr(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        srl_instr = enc_r(7'b0000000, rs2, rs1, 3'b101, rd, 7'b0110011);
    endfunction

    function automatic logic [31:0] sra_instr(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        sra_instr = enc_r(7'b0100000, rs2, rs1, 3'b101, rd, 7'b0110011);
    endfunction

    function automatic logic [31:0] slt_instr(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        slt_instr = enc_r(7'b0000000, rs2, rs1, 3'b010, rd, 7'b0110011);
    endfunction

    function automatic logic [31:0] sltu_instr(input logic [4:0] rd, input logic [4:0] rs1, input logic [4:0] rs2);
        sltu_instr = enc_r(7'b0000000, rs2, rs1, 3'b011, rd, 7'b0110011);
    endfunction

    function automatic logic [31:0] lb(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        lb = enc_i(imm, rs1, 3'b000, rd, 7'b0000011);
    endfunction

    function automatic logic [31:0] lh(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        lh = enc_i(imm, rs1, 3'b001, rd, 7'b0000011);
    endfunction

    function automatic logic [31:0] lw(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        lw = enc_i(imm, rs1, 3'b010, rd, 7'b0000011);
    endfunction

    function automatic logic [31:0] lbu(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        lbu = enc_i(imm, rs1, 3'b100, rd, 7'b0000011);
    endfunction

    function automatic logic [31:0] lhu(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        lhu = enc_i(imm, rs1, 3'b101, rd, 7'b0000011);
    endfunction

    function automatic logic [31:0] sb(input logic [4:0] rs2, input logic [4:0] rs1, input logic signed [11:0] imm);
        sb = enc_s(imm, rs2, rs1, 3'b000, 7'b0100011);
    endfunction

    function automatic logic [31:0] sh(input logic [4:0] rs2, input logic [4:0] rs1, input logic signed [11:0] imm);
        sh = enc_s(imm, rs2, rs1, 3'b001, 7'b0100011);
    endfunction

    function automatic logic [31:0] sw(input logic [4:0] rs2, input logic [4:0] rs1, input logic signed [11:0] imm);
        sw = enc_s(imm, rs2, rs1, 3'b010, 7'b0100011);
    endfunction

    function automatic logic [31:0] beq(input logic [4:0] rs1, input logic [4:0] rs2, input logic signed [12:0] imm);
        beq = enc_b(imm, rs2, rs1, 3'b000, 7'b1100011);
    endfunction

    function automatic logic [31:0] bne(input logic [4:0] rs1, input logic [4:0] rs2, input logic signed [12:0] imm);
        bne = enc_b(imm, rs2, rs1, 3'b001, 7'b1100011);
    endfunction

    function automatic logic [31:0] blt(input logic [4:0] rs1, input logic [4:0] rs2, input logic signed [12:0] imm);
        blt = enc_b(imm, rs2, rs1, 3'b100, 7'b1100011);
    endfunction

    function automatic logic [31:0] bge(input logic [4:0] rs1, input logic [4:0] rs2, input logic signed [12:0] imm);
        bge = enc_b(imm, rs2, rs1, 3'b101, 7'b1100011);
    endfunction

    function automatic logic [31:0] bltu(input logic [4:0] rs1, input logic [4:0] rs2, input logic signed [12:0] imm);
        bltu = enc_b(imm, rs2, rs1, 3'b110, 7'b1100011);
    endfunction

    function automatic logic [31:0] bgeu(input logic [4:0] rs1, input logic [4:0] rs2, input logic signed [12:0] imm);
        bgeu = enc_b(imm, rs2, rs1, 3'b111, 7'b1100011);
    endfunction

    function automatic logic [31:0] jal(input logic [4:0] rd, input logic signed [20:0] imm);
        jal = enc_j(imm, rd, 7'b1101111);
    endfunction

    function automatic logic [31:0] jalr(input logic [4:0] rd, input logic [4:0] rs1, input logic signed [11:0] imm);
        jalr = enc_i(imm, rs1, 3'b000, rd, 7'b1100111);
    endfunction

    function automatic logic [31:0] lui(input logic [4:0] rd, input logic [19:0] imm20);
        lui = enc_u(imm20, rd, 7'b0110111);
    endfunction

    function automatic logic [31:0] auipc(input logic [4:0] rd, input logic [19:0] imm20);
        auipc = enc_u(imm20, rd, 7'b0010111);
    endfunction

    function automatic logic [31:0] csrrw(input logic [4:0] rd, input logic [11:0] csr_addr, input logic [4:0] rs1);
        csrrw = {csr_addr, rs1, 3'b001, rd, 7'b1110011};
    endfunction

    function automatic logic [31:0] csrrs(input logic [4:0] rd, input logic [11:0] csr_addr, input logic [4:0] rs1);
        csrrs = {csr_addr, rs1, 3'b010, rd, 7'b1110011};
    endfunction

    function automatic logic [31:0] csrrc(input logic [4:0] rd, input logic [11:0] csr_addr, input logic [4:0] rs1);
        csrrc = {csr_addr, rs1, 3'b011, rd, 7'b1110011};
    endfunction

    function automatic logic [31:0] ecall();
        ecall = 32'h0000_0073;
    endfunction

    function automatic logic [31:0] ebreak();
        ebreak = 32'h0010_0073;
    endfunction

    function automatic logic [31:0] mret();
        mret = 32'h3020_0073;
    endfunction

    function automatic logic [31:0] nop();
        nop = 32'h0000_0013;
    endfunction

    // ------------------------------------------------------------------
    // Memory helpers
    // ------------------------------------------------------------------
    task automatic clear_memories();
        int i;
        begin
            for (i = 0; i < IMEM_WORDS; i++) begin
                imem[i] = nop();
            end

            for (i = 0; i < DMEM_BYTES; i++) begin
                dmem[i] = 8'h00;
            end
        end
    endtask

    task automatic put_instr(input logic [31:0] addr, input logic [31:0] instr);
        int unsigned idx;
        begin
            idx = (addr - RESET_PC) >> 2;

            if (idx >= IMEM_WORDS) begin
                $display("[TB ERROR] instruction address out of range: 0x%08h", addr);
                $fatal;
            end

            imem[idx] = instr;
        end
    endtask

    function automatic logic [31:0] load_word(input logic [31:0] addr);
        load_word = {dmem[addr + 3], dmem[addr + 2], dmem[addr + 1], dmem[addr + 0]};
    endfunction

    task automatic check32(input string name, input logic [31:0] actual, input logic [31:0] expected);
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=0x%08h expected=0x%08h", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic reset_cpu();
        begin
            external_interrupt_in = 1'b0;
            timer_interrupt_in    = 1'b0;

            rst = 1'b1;
            repeat (6) @(posedge clk);
            rst = 1'b0;
            repeat (2) @(posedge clk);
        end
    endtask

    task automatic wait_for_word(
        input string name,
        input logic [31:0] addr,
        input logic [31:0] expected,
        input int timeout_limit
    );
        int timeout;
        begin
            timeout = 0;

            while (load_word(addr) !== expected) begin
                @(posedge clk);
                timeout++;

                if (timeout > timeout_limit) begin
                    $display("[FAIL] Timeout waiting for %s at 0x%08h expected 0x%08h actual 0x%08h",
                             name, addr, expected, load_word(addr));
                    fail_count++;
                    return;
                end
            end
        end
    endtask

    task automatic print_core_memory();
        begin
            $display("mem[0]   = 0x%08h", load_word(DATA_BASE + 32'd0));
            $display("mem[4]   = 0x%08h", load_word(DATA_BASE + 32'd4));
            $display("mem[8]   = 0x%08h", load_word(DATA_BASE + 32'd8));
            $display("mem[12]  = 0x%08h", load_word(DATA_BASE + 32'd12));
            $display("mem[16]  = 0x%08h", load_word(DATA_BASE + 32'd16));
            $display("mem[20]  = 0x%08h", load_word(DATA_BASE + 32'd20));
            $display("mem[24]  = 0x%08h", load_word(DATA_BASE + 32'd24));
            $display("mem[28]  = 0x%08h", load_word(DATA_BASE + 32'd28));
            $display("mem[32]  = 0x%08h", load_word(DATA_BASE + 32'd32));
            $display("mem[40]  = 0x%08h", load_word(DATA_BASE + 32'd40));
            $display("mem[44]  = 0x%08h", load_word(DATA_BASE + 32'd44));
            $display("mem[48]  = 0x%08h", load_word(DATA_BASE + 32'd48));
            $display("mem[52]  = 0x%08h", load_word(DATA_BASE + 32'd52));
        end
    endtask

    task automatic emit_taken_branch(
        inout logic [31:0] pc,
        input logic [31:0] branch_instr,
        input logic signed [11:0] good_value,
        input logic signed [11:0] bad_value,
        input logic signed [11:0] mem_offset
    );
        begin
            put_instr(pc, branch_instr); pc += 4;
            put_instr(pc, addi(5'd28, 5'd0, bad_value)); pc += 4;
            put_instr(pc, sw(5'd28, 5'd10, mem_offset)); pc += 4;
            put_instr(pc, jal(5'd0, 21'sd12)); pc += 4;
            put_instr(pc, addi(5'd28, 5'd0, good_value)); pc += 4;
            put_instr(pc, sw(5'd28, 5'd10, mem_offset)); pc += 4;
        end
    endtask

    task automatic emit_not_taken_branch(
        inout logic [31:0] pc,
        input logic [31:0] branch_instr,
        input logic signed [11:0] good_value,
        input logic signed [11:0] bad_value,
        input logic signed [11:0] mem_offset
    );
        begin
            put_instr(pc, branch_instr); pc += 4;
            put_instr(pc, addi(5'd28, 5'd0, good_value)); pc += 4;
            put_instr(pc, sw(5'd28, 5'd10, mem_offset)); pc += 4;
            put_instr(pc, jal(5'd0, 21'sd12)); pc += 4;
            put_instr(pc, addi(5'd28, 5'd0, bad_value)); pc += 4;
            put_instr(pc, sw(5'd28, 5'd10, mem_offset)); pc += 4;
        end
    endtask

    // ------------------------------------------------------------------
    // Program 1: Integrated core path + ECALL/MRET
    // ------------------------------------------------------------------
    task automatic load_core_program();
        logic [31:0] pc;
        begin
            clear_memories();

            pc = RESET_PC;

            put_instr(pc, addi(5'd10, 5'd0, 12'sd256)); pc += 4;

            put_instr(pc, addi(5'd1, 5'd0, 12'sd10)); pc += 4;
            put_instr(pc, addi(5'd2, 5'd0, 12'sd20)); pc += 4;
            put_instr(pc, add_instr(5'd3, 5'd1, 5'd2)); pc += 4;
            put_instr(pc, sw(5'd3, 5'd10, 12'sd0)); pc += 4;

            put_instr(pc, lw(5'd4, 5'd10, 12'sd0)); pc += 4;
            put_instr(pc, add_instr(5'd5, 5'd4, 5'd1)); pc += 4;
            put_instr(pc, sw(5'd5, 5'd10, 12'sd4)); pc += 4;

            put_instr(pc, beq(5'd5, 5'd3, 13'sd8)); pc += 4;
            put_instr(pc, addi(5'd6, 5'd0, 12'sd11)); pc += 4;
            put_instr(pc, sw(5'd6, 5'd10, 12'sd8)); pc += 4;

            put_instr(pc, beq(5'd5, 5'd5, 13'sd8)); pc += 4;
            put_instr(pc, addi(5'd7, 5'd0, 12'sd99)); pc += 4;
            put_instr(pc, addi(5'd7, 5'd0, 12'sd77)); pc += 4;
            put_instr(pc, sw(5'd7, 5'd10, 12'sd12)); pc += 4;

            put_instr(pc, jal(5'd8, 21'sd8)); pc += 4;
            put_instr(pc, addi(5'd8, 5'd0, 12'sd99)); pc += 4;
            put_instr(pc, addi(5'd8, 5'd0, 12'sd88)); pc += 4;
            put_instr(pc, sw(5'd8, 5'd10, 12'sd16)); pc += 4;

            put_instr(pc, addi(5'd16, 5'd0, 12'sd170)); pc += 4;
            put_instr(pc, sb(5'd16, 5'd10, 12'sd40)); pc += 4;
            put_instr(pc, sb(5'd16, 5'd10, 12'sd41)); pc += 4;
            put_instr(pc, sb(5'd16, 5'd10, 12'sd42)); pc += 4;
            put_instr(pc, sb(5'd16, 5'd10, 12'sd43)); pc += 4;

            put_instr(pc, addi(5'd17, 5'd0, 12'sd119)); pc += 4;
            put_instr(pc, sh(5'd17, 5'd10, 12'sd44)); pc += 4;
            put_instr(pc, sh(5'd17, 5'd10, 12'sd46)); pc += 4;

            put_instr(pc, lb(5'd18, 5'd10, 12'sd40)); pc += 4;
            put_instr(pc, sw(5'd18, 5'd10, 12'sd48)); pc += 4;
            put_instr(pc, lbu(5'd19, 5'd10, 12'sd40)); pc += 4;
            put_instr(pc, sw(5'd19, 5'd10, 12'sd52)); pc += 4;

            put_instr(pc, lui(5'd11, TRAP_PC[31:12])); pc += 4;
            put_instr(pc, addi(5'd11, 5'd11, TRAP_PC[11:0])); pc += 4;
            put_instr(pc, csrrw(5'd0, 12'h305, 5'd11)); pc += 4;

            put_instr(pc, ecall()); pc += 4;

            put_instr(pc, addi(5'd14, 5'd0, 12'sd55)); pc += 4;
            put_instr(pc, sw(5'd14, 5'd10, 12'sd24)); pc += 4;

            put_instr(pc, addi(5'd15, 5'd0, 12'sd1)); pc += 4;
            put_instr(pc, sw(5'd15, 5'd10, 12'sd28)); pc += 4;

            put_instr(pc, jal(5'd0, 21'sd0)); pc += 4;

            pc = TRAP_PC;

            put_instr(pc, addi(5'd12, 5'd0, 12'sd123)); pc += 4;
            put_instr(pc, sw(5'd12, 5'd10, 12'sd20)); pc += 4;

            put_instr(pc, csrrs(5'd13, 12'h342, 5'd0)); pc += 4;
            put_instr(pc, sw(5'd13, 5'd10, 12'sd32)); pc += 4;

            put_instr(pc, csrrs(5'd13, 12'h341, 5'd0)); pc += 4;
            put_instr(pc, addi(5'd13, 5'd13, 12'sd4)); pc += 4;
            put_instr(pc, csrrw(5'd0, 12'h341, 5'd13)); pc += 4;

            put_instr(pc, mret()); pc += 4;
        end
    endtask

    task automatic run_core_program();
        begin
            $display("\n============================================================");
            $display("TEST 1: Core RV32I + load-use + branch/JAL + byte/half + ECALL/MRET");
            $display("============================================================");

            load_core_program();
            reset_cpu();

            wait_for_word("core final marker", DATA_BASE + 32'd28, 32'd1, 3000);

            print_core_memory();

            check32("core ADD result mem[0]",              load_word(DATA_BASE + 32'd0),  32'd30);
            check32("core load-use result mem[4]",         load_word(DATA_BASE + 32'd4),  32'd40);
            check32("core branch not taken mem[8]",        load_word(DATA_BASE + 32'd8),  32'd11);
            check32("core branch taken mem[12]",           load_word(DATA_BASE + 32'd12), 32'd77);
            check32("core JAL path mem[16]",               load_word(DATA_BASE + 32'd16), 32'd88);
            check32("core trap handler marker mem[20]",    load_word(DATA_BASE + 32'd20), 32'd123);
            check32("core post-MRET continuation mem[24]", load_word(DATA_BASE + 32'd24), 32'd55);
            check32("core final marker mem[28]",           load_word(DATA_BASE + 32'd28), 32'd1);
            check32("core ECALL mcause mem[32]",           load_word(DATA_BASE + 32'd32), 32'd11);
            check32("core SB packed word mem[40]",         load_word(DATA_BASE + 32'd40), 32'hAAAA_AAAA);
            check32("core SH packed word mem[44]",         load_word(DATA_BASE + 32'd44), 32'h0077_0077);
            check32("core LB sign result mem[48]",         load_word(DATA_BASE + 32'd48), 32'hFFFF_FFAA);
            check32("core LBU result mem[52]",             load_word(DATA_BASE + 32'd52), 32'h0000_00AA);
        end
    endtask

    // ------------------------------------------------------------------
    // Program 2: Focused remaining RV32I ALU/branch/JALR variants
    // ------------------------------------------------------------------
    task automatic load_alu_branch_jalr_program();
        logic [31:0] pc;
        begin
            clear_memories();

            expected_auipc_value     = 32'd0;
            expected_jalr_link_value = 32'd0;

            pc = RESET_PC;

            put_instr(pc, addi(5'd10, 5'd0, 12'sd256)); pc += 4;

            put_instr(pc, addi(5'd1,  5'd0, 12'sd15)); pc += 4;
            put_instr(pc, addi(5'd2,  5'd0, 12'sd5));  pc += 4;
            put_instr(pc, add_instr(5'd3, 5'd1, 5'd2)); pc += 4;
            put_instr(pc, sw(5'd3, 5'd10, 12'sd64)); pc += 4;

            put_instr(pc, sub_instr(5'd3, 5'd1, 5'd2)); pc += 4;
            put_instr(pc, sw(5'd3, 5'd10, 12'sd68)); pc += 4;

            put_instr(pc, and_instr(5'd3, 5'd1, 5'd2)); pc += 4;
            put_instr(pc, sw(5'd3, 5'd10, 12'sd72)); pc += 4;

            put_instr(pc, or_instr(5'd3, 5'd1, 5'd2)); pc += 4;
            put_instr(pc, sw(5'd3, 5'd10, 12'sd76)); pc += 4;

            put_instr(pc, xor_instr(5'd3, 5'd1, 5'd2)); pc += 4;
            put_instr(pc, sw(5'd3, 5'd10, 12'sd80)); pc += 4;

            put_instr(pc, addi(5'd4, 5'd0, 12'sd1)); pc += 4;
            put_instr(pc, addi(5'd5, 5'd0, 12'sd3)); pc += 4;
            put_instr(pc, sll_instr(5'd6, 5'd4, 5'd5)); pc += 4;
            put_instr(pc, sw(5'd6, 5'd10, 12'sd84)); pc += 4;

            put_instr(pc, addi(5'd7, 5'd0, 12'sd128)); pc += 4;
            put_instr(pc, srl_instr(5'd8, 5'd7, 5'd5)); pc += 4;
            put_instr(pc, sw(5'd8, 5'd10, 12'sd88)); pc += 4;

            put_instr(pc, addi(5'd9, 5'd0, -12'sd16)); pc += 4;
            put_instr(pc, addi(5'd5, 5'd0, 12'sd2)); pc += 4;
            put_instr(pc, sra_instr(5'd11, 5'd9, 5'd5)); pc += 4;
            put_instr(pc, sw(5'd11, 5'd10, 12'sd92)); pc += 4;

            put_instr(pc, addi(5'd12, 5'd0, -12'sd1)); pc += 4;
            put_instr(pc, addi(5'd13, 5'd0, 12'sd1)); pc += 4;
            put_instr(pc, slt_instr(5'd14, 5'd12, 5'd13)); pc += 4;
            put_instr(pc, sw(5'd14, 5'd10, 12'sd96)); pc += 4;

            put_instr(pc, sltu_instr(5'd14, 5'd12, 5'd13)); pc += 4;
            put_instr(pc, sw(5'd14, 5'd10, 12'sd100)); pc += 4;

            put_instr(pc, addi(5'd15, 5'd1, -12'sd3)); pc += 4;
            put_instr(pc, sw(5'd15, 5'd10, 12'sd104)); pc += 4;

            put_instr(pc, andi(5'd15, 5'd1, 12'sd6)); pc += 4;
            put_instr(pc, sw(5'd15, 5'd10, 12'sd108)); pc += 4;

            put_instr(pc, addi(5'd16, 5'd0, 12'sd32)); pc += 4;
            put_instr(pc, ori(5'd15, 5'd16, 12'sd5)); pc += 4;
            put_instr(pc, sw(5'd15, 5'd10, 12'sd112)); pc += 4;

            put_instr(pc, addi(5'd16, 5'd0, 12'sd42)); pc += 4;
            put_instr(pc, xori(5'd15, 5'd16, 12'sd15)); pc += 4;
            put_instr(pc, sw(5'd15, 5'd10, 12'sd116)); pc += 4;

            put_instr(pc, addi(5'd17, 5'd0, -12'sd1)); pc += 4;
            put_instr(pc, slti(5'd15, 5'd17, 12'sd1)); pc += 4;
            put_instr(pc, sw(5'd15, 5'd10, 12'sd120)); pc += 4;

            put_instr(pc, sltiu(5'd15, 5'd17, 12'sd1)); pc += 4;
            put_instr(pc, sw(5'd15, 5'd10, 12'sd124)); pc += 4;

            put_instr(pc, addi(5'd18, 5'd0, 12'sd1)); pc += 4;
            put_instr(pc, slli(5'd15, 5'd18, 5'd4)); pc += 4;
            put_instr(pc, sw(5'd15, 5'd10, 12'sd128)); pc += 4;

            put_instr(pc, addi(5'd18, 5'd0, 12'sd128)); pc += 4;
            put_instr(pc, srli(5'd15, 5'd18, 5'd3)); pc += 4;
            put_instr(pc, sw(5'd15, 5'd10, 12'sd132)); pc += 4;

            put_instr(pc, addi(5'd18, 5'd0, -12'sd16)); pc += 4;
            put_instr(pc, srai(5'd15, 5'd18, 5'd2)); pc += 4;
            put_instr(pc, sw(5'd15, 5'd10, 12'sd136)); pc += 4;

            put_instr(pc, lui(5'd21, 20'h12345)); pc += 4;
            put_instr(pc, sw(5'd21, 5'd10, 12'sd140)); pc += 4;

            expected_auipc_value = pc;
            put_instr(pc, auipc(5'd22, 20'h00000)); pc += 4;
            put_instr(pc, sw(5'd22, 5'd10, 12'sd144)); pc += 4;

            put_instr(pc, addi(5'd1, 5'd0, 12'sd5)); pc += 4;
            put_instr(pc, addi(5'd2, 5'd0, 12'sd7)); pc += 4;
            put_instr(pc, addi(5'd3, 5'd0, -12'sd1)); pc += 4;
            put_instr(pc, addi(5'd4, 5'd0, 12'sd1)); pc += 4;

            emit_taken_branch(pc, beq(5'd1, 5'd1, 13'sd16), 12'sd101, 12'sd999, 12'sd148);
            emit_taken_branch(pc, bne(5'd1, 5'd2, 13'sd16), 12'sd102, 12'sd999, 12'sd152);
            emit_taken_branch(pc, blt(5'd3, 5'd4, 13'sd16), 12'sd103, 12'sd999, 12'sd156);
            emit_taken_branch(pc, bge(5'd4, 5'd3, 13'sd16), 12'sd104, 12'sd999, 12'sd160);
            emit_taken_branch(pc, bltu(5'd4, 5'd3, 13'sd16), 12'sd105, 12'sd999, 12'sd164);
            emit_taken_branch(pc, bgeu(5'd3, 5'd4, 13'sd16), 12'sd106, 12'sd999, 12'sd168);

            emit_not_taken_branch(pc, beq(5'd1, 5'd2, 13'sd16), 12'sd111, 12'sd999, 12'sd172);
            emit_not_taken_branch(pc, bne(5'd1, 5'd1, 13'sd16), 12'sd112, 12'sd999, 12'sd176);
            emit_not_taken_branch(pc, blt(5'd4, 5'd3, 13'sd16), 12'sd113, 12'sd999, 12'sd180);
            emit_not_taken_branch(pc, bge(5'd3, 5'd4, 13'sd16), 12'sd114, 12'sd999, 12'sd184);
            emit_not_taken_branch(pc, bltu(5'd3, 5'd4, 13'sd16), 12'sd115, 12'sd999, 12'sd188);
            emit_not_taken_branch(pc, bgeu(5'd4, 5'd3, 13'sd16), 12'sd116, 12'sd999, 12'sd192);

            put_instr(pc, lui(5'd22, JALR_TARGET_PC[31:12])); pc += 4;
            put_instr(pc, addi(5'd22, 5'd22, JALR_TARGET_PC[11:0])); pc += 4;

            expected_jalr_link_value = pc + 32'd4;
            put_instr(pc, jalr(5'd23, 5'd22, 12'sd0)); pc += 4;

            put_instr(pc, addi(5'd28, 5'd0, 12'sd999)); pc += 4;
            put_instr(pc, sw(5'd28, 5'd10, 12'sd200)); pc += 4;
            put_instr(pc, jal(5'd0, 21'sd0)); pc += 4;

            pc = JALR_TARGET_PC;

            put_instr(pc, sw(5'd23, 5'd10, 12'sd196)); pc += 4;
            put_instr(pc, addi(5'd28, 5'd0, 12'sd1)); pc += 4;
            put_instr(pc, sw(5'd28, 5'd10, 12'sd200)); pc += 4;
            put_instr(pc, jal(5'd0, 21'sd0)); pc += 4;
        end
    endtask

    task automatic run_alu_branch_jalr_program();
        begin
            $display("\n============================================================");
            $display("TEST 2: Focused RV32I ALU + branch variants + JALR");
            $display("============================================================");

            load_alu_branch_jalr_program();
            reset_cpu();

            wait_for_word("ALU/branch/JALR final marker", DATA_BASE + 32'd200, 32'd1, 5000);

            check32("ADD",        load_word(DATA_BASE + 32'd64),  32'd20);
            check32("SUB",        load_word(DATA_BASE + 32'd68),  32'd10);
            check32("AND",        load_word(DATA_BASE + 32'd72),  32'd5);
            check32("OR",         load_word(DATA_BASE + 32'd76),  32'd15);
            check32("XOR",        load_word(DATA_BASE + 32'd80),  32'd10);
            check32("SLL",        load_word(DATA_BASE + 32'd84),  32'd8);
            check32("SRL",        load_word(DATA_BASE + 32'd88),  32'd16);
            check32("SRA",        load_word(DATA_BASE + 32'd92),  32'hFFFF_FFFC);
            check32("SLT",        load_word(DATA_BASE + 32'd96),  32'd1);
            check32("SLTU",       load_word(DATA_BASE + 32'd100), 32'd0);

            check32("ADDI",       load_word(DATA_BASE + 32'd104), 32'd12);
            check32("ANDI",       load_word(DATA_BASE + 32'd108), 32'd6);
            check32("ORI",        load_word(DATA_BASE + 32'd112), 32'd37);
            check32("XORI",       load_word(DATA_BASE + 32'd116), 32'd37);
            check32("SLTI",       load_word(DATA_BASE + 32'd120), 32'd1);
            check32("SLTIU",      load_word(DATA_BASE + 32'd124), 32'd0);
            check32("SLLI",       load_word(DATA_BASE + 32'd128), 32'd16);
            check32("SRLI",       load_word(DATA_BASE + 32'd132), 32'd16);
            check32("SRAI",       load_word(DATA_BASE + 32'd136), 32'hFFFF_FFFC);
            check32("LUI",        load_word(DATA_BASE + 32'd140), 32'h1234_5000);
            check32("AUIPC",      load_word(DATA_BASE + 32'd144), expected_auipc_value);

            check32("BEQ taken",  load_word(DATA_BASE + 32'd148), 32'd101);
            check32("BNE taken",  load_word(DATA_BASE + 32'd152), 32'd102);
            check32("BLT taken",  load_word(DATA_BASE + 32'd156), 32'd103);
            check32("BGE taken",  load_word(DATA_BASE + 32'd160), 32'd104);
            check32("BLTU taken", load_word(DATA_BASE + 32'd164), 32'd105);
            check32("BGEU taken", load_word(DATA_BASE + 32'd168), 32'd106);

            check32("BEQ not taken",  load_word(DATA_BASE + 32'd172), 32'd111);
            check32("BNE not taken",  load_word(DATA_BASE + 32'd176), 32'd112);
            check32("BLT not taken",  load_word(DATA_BASE + 32'd180), 32'd113);
            check32("BGE not taken",  load_word(DATA_BASE + 32'd184), 32'd114);
            check32("BLTU not taken", load_word(DATA_BASE + 32'd188), 32'd115);
            check32("BGEU not taken", load_word(DATA_BASE + 32'd192), 32'd116);

            check32("JALR link",       load_word(DATA_BASE + 32'd196), expected_jalr_link_value);
            check32("JALR final path", load_word(DATA_BASE + 32'd200), 32'd1);
        end
    endtask

    // ------------------------------------------------------------------
    // Program 3: Generic exception/fault test
    // ------------------------------------------------------------------
    task automatic load_exception_program(input logic [31:0] fault_instr);
        logic [31:0] pc;
        begin
            clear_memories();

            pc = RESET_PC;

            put_instr(pc, addi(5'd10, 5'd0, 12'sd256)); pc += 4;
            put_instr(pc, lui(5'd11, TRAP_PC[31:12])); pc += 4;
            put_instr(pc, addi(5'd11, 5'd11, TRAP_PC[11:0])); pc += 4;
            put_instr(pc, csrrw(5'd0, 12'h305, 5'd11)); pc += 4;

            put_instr(pc, addi(5'd1, 5'd0, 12'sd123)); pc += 4;
            put_instr(pc, addi(5'd20, 5'd0, 12'sd1024)); pc += 4;

            put_instr(pc, fault_instr); pc += 4;

            put_instr(pc, addi(5'd2, 5'd0, 12'sd99)); pc += 4;
            put_instr(pc, sw(5'd2, 5'd10, 12'sd16)); pc += 4;

            put_instr(pc, jal(5'd0, 21'sd0)); pc += 4;

            pc = TRAP_PC;

            put_instr(pc, addi(5'd3, 5'd0, 12'sd85)); pc += 4;
            put_instr(pc, sw(5'd3, 5'd10, 12'sd0)); pc += 4;

            put_instr(pc, csrrs(5'd4, 12'h342, 5'd0)); pc += 4;
            put_instr(pc, sw(5'd4, 5'd10, 12'sd4)); pc += 4;

            put_instr(pc, csrrs(5'd5, 12'h343, 5'd0)); pc += 4;
            put_instr(pc, sw(5'd5, 5'd10, 12'sd8)); pc += 4;

            put_instr(pc, addi(5'd6, 5'd0, 12'sd1)); pc += 4;
            put_instr(pc, sw(5'd6, 5'd10, 12'sd12)); pc += 4;

            put_instr(pc, jal(5'd0, 21'sd0)); pc += 4;
        end
    endtask

    task automatic run_exception_test(
        input string name,
        input logic [31:0] fault_instr,
        input logic [31:0] expected_mcause,
        input logic [31:0] expected_mtval,
        input logic check_mtval
    );
        begin
            $display("\n============================================================");
            $display("EXCEPTION TEST: %s", name);
            $display("============================================================");

            load_exception_program(fault_instr);
            reset_cpu();

            wait_for_word({name, " final marker"}, DATA_BASE + 32'd12, 32'd1, 3000);

            check32({name, " handler marker mem[0]"}, load_word(DATA_BASE + 32'd0), 32'd85);
            check32({name, " mcause mem[4]"},         load_word(DATA_BASE + 32'd4), expected_mcause);

            if (check_mtval) begin
                check32({name, " mtval mem[8]"}, load_word(DATA_BASE + 32'd8), expected_mtval);
            end

            check32({name, " final marker mem[12]"}, load_word(DATA_BASE + 32'd12), 32'd1);
            check32({name, " skipped path mem[16]"}, load_word(DATA_BASE + 32'd16), 32'd0);
        end
    endtask

    task automatic load_fetch_fault_program();
        logic [31:0] pc;
        logic signed [31:0] fetch_fault_delta;
        logic signed [20:0] fetch_fault_offset;
        begin
            clear_memories();

            pc = RESET_PC;

            put_instr(pc, addi(5'd10, 5'd0, 12'sd256)); pc += 4;
            put_instr(pc, lui(5'd11, TRAP_PC[31:12])); pc += 4;
            put_instr(pc, addi(5'd11, 5'd11, TRAP_PC[11:0])); pc += 4;
            put_instr(pc, csrrw(5'd0, 12'h305, 5'd11)); pc += 4;

            fetch_fault_delta  = $signed(FETCH_FAULT_PC) - $signed(pc);
            fetch_fault_offset = fetch_fault_delta[20:0];

            put_instr(pc, jal(5'd0, fetch_fault_offset)); pc += 4;

            put_instr(pc, jal(5'd0, 21'sd0)); pc += 4;

            pc = TRAP_PC;

            put_instr(pc, addi(5'd3, 5'd0, 12'sd85)); pc += 4;
            put_instr(pc, sw(5'd3, 5'd10, 12'sd0)); pc += 4;

            put_instr(pc, csrrs(5'd4, 12'h342, 5'd0)); pc += 4;
            put_instr(pc, sw(5'd4, 5'd10, 12'sd4)); pc += 4;

            put_instr(pc, addi(5'd6, 5'd0, 12'sd1)); pc += 4;
            put_instr(pc, sw(5'd6, 5'd10, 12'sd12)); pc += 4;

            put_instr(pc, jal(5'd0, 21'sd0)); pc += 4;
        end
    endtask

    task automatic run_fetch_fault_test();
        begin
            $display("\n============================================================");
            $display("EXCEPTION TEST: FETCH_FAULT");
            $display("============================================================");

            load_fetch_fault_program();
            reset_cpu();

            wait_for_word("FETCH_FAULT final marker", DATA_BASE + 32'd12, 32'd1, 3000);

            check32("FETCH_FAULT handler marker mem[0]", load_word(DATA_BASE + 32'd0), 32'd85);
            check32("FETCH_FAULT mcause mem[4]",         load_word(DATA_BASE + 32'd4), MCAUSE_INSTR_FAULT);
            check32("FETCH_FAULT final marker mem[12]",  load_word(DATA_BASE + 32'd12), 32'd1);
        end
    endtask

    // ------------------------------------------------------------------
    // Program 4: Interrupt tests
    // ------------------------------------------------------------------
    task automatic load_interrupt_program(input logic enable_timer, input logic enable_external);
        logic [31:0] pc;
        logic [31:0] mie_value;
        begin
            clear_memories();

            mie_value = 32'd0;
            if (enable_timer)    mie_value |= MIE_MTIE;
            if (enable_external) mie_value |= MIE_MEIE;

            pc = RESET_PC;

            put_instr(pc, addi(5'd10, 5'd0, 12'sd256)); pc += 4;

            put_instr(pc, lui(5'd11, TRAP_PC[31:12])); pc += 4;
            put_instr(pc, addi(5'd11, 5'd11, TRAP_PC[11:0])); pc += 4;
            put_instr(pc, csrrw(5'd0, 12'h305, 5'd11)); pc += 4;

            put_instr(pc, addi(5'd12, 5'd0, mie_value[11:0])); pc += 4;
            put_instr(pc, csrrw(5'd0, 12'h304, 5'd12)); pc += 4;

            put_instr(pc, addi(5'd13, 5'd0, MSTATUS_MIE[11:0])); pc += 4;
            put_instr(pc, csrrw(5'd0, 12'h300, 5'd13)); pc += 4;

            put_instr(pc, addi(5'd14, 5'd0, 12'sd1)); pc += 4;
            put_instr(pc, sw(5'd14, 5'd10, 12'sd0)); pc += 4;

            put_instr(pc, jal(5'd0, 21'sd0)); pc += 4;

            pc = TRAP_PC;

            put_instr(pc, addi(5'd15, 5'd0, 12'sd102)); pc += 4;
            put_instr(pc, sw(5'd15, 5'd10, 12'sd4)); pc += 4;

            put_instr(pc, csrrs(5'd16, 12'h342, 5'd0)); pc += 4;
            put_instr(pc, sw(5'd16, 5'd10, 12'sd8)); pc += 4;

            put_instr(pc, addi(5'd17, 5'd0, 12'sd1)); pc += 4;
            put_instr(pc, sw(5'd17, 5'd10, 12'sd12)); pc += 4;

            put_instr(pc, jal(5'd0, 21'sd0)); pc += 4;
        end
    endtask

    task automatic run_interrupt_test(
        input string name,
        input logic enable_timer,
        input logic enable_external,
        input logic fire_timer,
        input logic fire_external,
        input logic [31:0] expected_mcause
    );
        begin
            $display("\n============================================================");
            $display("INTERRUPT TEST: %s", name);
            $display("============================================================");

            load_interrupt_program(enable_timer, enable_external);
            reset_cpu();

            wait_for_word({name, " ready marker"}, DATA_BASE + 32'd0, 32'd1, 3000);

            @(negedge clk);
            timer_interrupt_in    = fire_timer;
            external_interrupt_in = fire_external;

            repeat (8) @(posedge clk);

            @(negedge clk);
            timer_interrupt_in    = 1'b0;
            external_interrupt_in = 1'b0;

            wait_for_word({name, " final marker"}, DATA_BASE + 32'd12, 32'd1, 3000);

            check32({name, " irq marker mem[4]"}, load_word(DATA_BASE + 32'd4), 32'd102);
            check32({name, " mcause mem[8]"},     load_word(DATA_BASE + 32'd8), expected_mcause);
            check32({name, " final mem[12]"},     load_word(DATA_BASE + 32'd12), 32'd1);
        end
    endtask

    // ------------------------------------------------------------------
    // Wishbone instruction memory model
    //
    // IMPORTANT:
    // Corrected fetch_stage drives:
    //
    //     fetch_wb.adr = PC >> 2
    //
    // Therefore this testbench reconstructs:
    //
    //     fetch_pc_byte = fetch_wb.adr << 2
    //
    // before indexing imem[].
    // ------------------------------------------------------------------
    logic [31:0] fetch_pc_byte;
    logic [31:0] fetch_word_index;

    always_comb begin
        fetch_pc_byte    = {fetch_wb.adr[29:0], 2'b00};
        fetch_word_index = (fetch_pc_byte - RESET_PC) >> 2;
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            fetch_wb.ack      <= 1'b0;
            fetch_wb.err      <= 1'b0;
            fetch_wb.dat_miso <= 32'd0;
        end else begin
            fetch_wb.ack <= fetch_wb.cyc && fetch_wb.stb &&
                            (fetch_pc_byte != FETCH_FAULT_PC);

            fetch_wb.err <= fetch_wb.cyc && fetch_wb.stb &&
                            (fetch_pc_byte == FETCH_FAULT_PC);

            if (fetch_wb.cyc && fetch_wb.stb) begin
                if ((fetch_pc_byte >= RESET_PC) &&
                    (fetch_word_index < IMEM_WORDS)) begin
                    fetch_wb.dat_miso <= imem[fetch_word_index];
                end else begin
                    fetch_wb.dat_miso <= nop();
                end
            end
        end
    end

    // ------------------------------------------------------------------
    // Wishbone data memory model
    //
    // Data accesses remain byte-addressed.
    // ------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            mem_wb.ack      <= 1'b0;
            mem_wb.err      <= 1'b0;
            mem_wb.dat_miso <= 32'd0;
        end else begin
            mem_wb.ack <= mem_wb.cyc && mem_wb.stb &&
                          (mem_wb.adr != DATA_FAULT_ADDR);

            mem_wb.err <= mem_wb.cyc && mem_wb.stb &&
                          (mem_wb.adr == DATA_FAULT_ADDR);

            if (mem_wb.cyc && mem_wb.stb) begin
                if (mem_wb.adr + 3 < DMEM_BYTES) begin
                    if (mem_wb.we && (mem_wb.adr != DATA_FAULT_ADDR)) begin
                        if (mem_wb.sel[0]) dmem[mem_wb.adr + 0] <= mem_wb.dat_mosi[7:0];
                        if (mem_wb.sel[1]) dmem[mem_wb.adr + 1] <= mem_wb.dat_mosi[15:8];
                        if (mem_wb.sel[2]) dmem[mem_wb.adr + 2] <= mem_wb.dat_mosi[23:16];
                        if (mem_wb.sel[3]) dmem[mem_wb.adr + 3] <= mem_wb.dat_mosi[31:24];
                    end

                    mem_wb.dat_miso <= {
                        dmem[mem_wb.adr + 3],
                        dmem[mem_wb.adr + 2],
                        dmem[mem_wb.adr + 1],
                        dmem[mem_wb.adr + 0]
                    };
                end else begin
                    mem_wb.dat_miso <= 32'd0;
                end
            end
        end
    end

    // ------------------------------------------------------------------
    // Test sequence
    // ------------------------------------------------------------------
    initial begin
        pass_count = 0;
        fail_count = 0;

        external_interrupt_in = 1'b0;
        timer_interrupt_in    = 1'b0;
        rst                   = 1'b0;

        run_core_program();

        run_alu_branch_jalr_program();

        run_exception_test("ILLEGAL_INSTRUCTION",
                           32'hFFFF_FFFF,
                           MCAUSE_ILLEGAL,
                           32'd0,
                           1'b0);

        run_exception_test("EBREAK",
                           ebreak(),
                           MCAUSE_BREAKPOINT,
                           32'd0,
                           1'b0);

        run_exception_test("LOAD_MISALIGNED",
                           lw(5'd1, 5'd10, 12'sd2),
                           MCAUSE_LOAD_MISALIGNED,
                           DATA_BASE + 32'd2,
                           1'b1);

        run_exception_test("STORE_MISALIGNED",
                           sw(5'd1, 5'd10, 12'sd2),
                           MCAUSE_STORE_MISALIGNED,
                           DATA_BASE + 32'd2,
                           1'b1);

        run_exception_test("LOAD_FAULT",
                           lw(5'd1, 5'd20, 12'sd0),
                           MCAUSE_LOAD_FAULT,
                           DATA_FAULT_ADDR,
                           1'b1);

        run_exception_test("STORE_FAULT",
                           sw(5'd1, 5'd20, 12'sd0),
                           MCAUSE_STORE_FAULT,
                           DATA_FAULT_ADDR,
                           1'b1);

        run_fetch_fault_test();

        run_interrupt_test("TIMER_INTERRUPT",
                           1'b1,
                           1'b0,
                           1'b1,
                           1'b0,
                           MCAUSE_TIMER_INTERRUPT);

        run_interrupt_test("EXTERNAL_INTERRUPT",
                           1'b0,
                           1'b1,
                           1'b0,
                           1'b1,
                           MCAUSE_EXT_INTERRUPT);

        run_interrupt_test("EXTERNAL_PRIORITY_OVER_TIMER",
                           1'b1,
                           1'b1,
                           1'b1,
                           1'b1,
                           MCAUSE_EXT_INTERRUPT);

        $display("\n========================================");
        $display("EXTENDED COMPREHENSIVE TOP_CPU TEST SUMMARY");
        $display("PASSED: %0d", pass_count);
        $display("FAILED: %0d", fail_count);
        $display("========================================");

        if (fail_count == 0) begin
            $display("ALL EXTENDED COMPREHENSIVE TOP_CPU TESTS PASSED");
            $finish;
        end else begin
            $display("EXTENDED COMPREHENSIVE TOP_CPU TESTS FAILED");
            $fatal;
        end
    end

    initial begin
        $dumpfile("tb_top_cpu.vcd");
        $dumpvars(0, tb_top_cpu);
    end

    initial begin
        repeat (80000) @(posedge clk);
        $display("[FAIL] Global simulation timeout");
        $fatal;
    end

endmodule