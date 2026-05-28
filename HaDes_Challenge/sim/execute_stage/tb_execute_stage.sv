`timescale 1ns/1ps

module tb_execute_stage;

    logic clk;
    logic rst;

    logic [31:0]   rs1_data_in;
    logic [31:0]   rs2_data_in;
    instruction::t instruction_in;
    logic [31:0]   program_counter_in;

    logic [31:0]   source_data_reg_out;
    logic [31:0]   rd_data_reg_out;
    instruction::t instruction_reg_out;
    logic [31:0]   program_counter_reg_out;
    logic [31:0]   next_program_counter_reg_out;
    forwarding::t  forwarding_out;

    pipeline_status::forwards_t  status_forwards_in;
    pipeline_status::forwards_t  status_forwards_out;
    pipeline_status::backwards_t status_backwards_in;
    pipeline_status::backwards_t status_backwards_out;
    logic [31:0] jump_address_backwards_in;
    logic [31:0] jump_address_backwards_out;

    int pass_count;
    int fail_count;

    execute_stage dut (
        .clk                         (clk),
        .rst                         (rst),

        .rs1_data_in                 (rs1_data_in),
        .rs2_data_in                 (rs2_data_in),
        .instruction_in              (instruction_in),
        .program_counter_in          (program_counter_in),

        .source_data_reg_out         (source_data_reg_out),
        .rd_data_reg_out             (rd_data_reg_out),
        .instruction_reg_out         (instruction_reg_out),
        .program_counter_reg_out     (program_counter_reg_out),
        .next_program_counter_reg_out(next_program_counter_reg_out),
        .forwarding_out              (forwarding_out),

        .status_forwards_in          (status_forwards_in),
        .status_forwards_out         (status_forwards_out),
        .status_backwards_in         (status_backwards_in),
        .status_backwards_out        (status_backwards_out),
        .jump_address_backwards_in   (jump_address_backwards_in),
        .jump_address_backwards_out  (jump_address_backwards_out)
    );

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    function automatic instruction::t make_instr(
        input op::t        op_i,
        input logic [4:0]  rd_i,
        input logic [4:0]  rs1_i,
        input logic [4:0]  rs2_i,
        input csr::t       csr_i,
        input logic [31:0] imm_i
    );
        begin
            make_instr = '{
                op:          op_i,
                rd_address:  rd_i,
                rs1_address: rs1_i,
                rs2_address: rs2_i,
                csr:         csr_i,
                immediate:   imm_i
            };
        end
    endfunction

    task automatic check32(
        input string name,
        input logic [31:0] actual,
        input logic [31:0] expected
    );
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

    task automatic check5(
        input string name,
        input logic [4:0] actual,
        input logic [4:0] expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0d expected=%0d", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check_bit(
        input string name,
        input logic actual,
        input logic expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0b expected=%0b", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check_op(
        input string name,
        input op::t actual,
        input op::t expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0d expected=%0d", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check_fwd_status(
        input string name,
        input pipeline_status::forwards_t actual,
        input pipeline_status::forwards_t expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0d expected=%0d", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic check_bwd_status(
        input string name,
        input pipeline_status::backwards_t actual,
        input pipeline_status::backwards_t expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=%0d expected=%0d", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic drive_valid(
        input string       name,
        input op::t        op_i,
        input logic [4:0]  rd_i,
        input logic [4:0]  rs1_i,
        input logic [4:0]  rs2_i,
        input logic [31:0] rs1_val,
        input logic [31:0] rs2_val,
        input logic [31:0] pc_i,
        input logic [31:0] imm_i
    );
        begin
            $display("\n--- %s ---", name);

            @(negedge clk);
            rs1_data_in                = rs1_val;
            rs2_data_in                = rs2_val;
            program_counter_in         = pc_i;
            instruction_in             = make_instr(op_i, rd_i, rs1_i, rs2_i, csr::t'(12'h000), imm_i);
            status_forwards_in         = pipeline_status::VALID;
            status_backwards_in        = pipeline_status::READY;
            jump_address_backwards_in  = 32'd0;

            @(posedge clk);
            #1;
        end
    endtask

    task automatic check_common(
        input string name,
        input op::t expected_op,
        input logic [31:0] expected_pc,
        input pipeline_status::forwards_t expected_fwd_status
    );
        begin
            check_op({name, " op"}, instruction_reg_out.op, expected_op);
            check32({name, " pc"}, program_counter_reg_out, expected_pc);
            check_fwd_status({name, " forward status"}, status_forwards_out, expected_fwd_status);
        end
    endtask

    task automatic check_forwarding(
        input string name,
        input logic expected_valid,
        input logic [4:0] expected_addr,
        input logic [31:0] expected_data
    );
        begin
            check_bit({name, " forwarding valid"}, forwarding_out.data_valid, expected_valid);
            check5({name, " forwarding addr"}, forwarding_out.address, expected_addr);
            check32({name, " forwarding data"}, forwarding_out.data, expected_data);
        end
    endtask

    task automatic test_alu(
        input string name,
        input op::t op_i,
        input logic [31:0] a,
        input logic [31:0] b,
        input logic [31:0] imm,
        input logic use_imm_expected,
        input logic [31:0] expected
    );
        logic [31:0] operand_b;
        begin
            operand_b = use_imm_expected ? imm : b;

            drive_valid(name, op_i, 5'd10, 5'd1, 5'd2, a, b, 32'h0000_1000, imm);

            check_common(name, op_i, 32'h0000_1000, pipeline_status::VALID);
            check32({name, " rd result"}, rd_data_reg_out, expected);
            check32({name, " next pc"}, next_program_counter_reg_out, 32'h0000_1004);
            check32({name, " source data"}, source_data_reg_out, 32'd0);
            check_bwd_status({name, " backward status"}, status_backwards_out, pipeline_status::READY);
            check32({name, " jump addr"}, jump_address_backwards_out, 32'd0);
            check_forwarding(name, 1'b1, 5'd10, expected);
        end
    endtask

    task automatic test_branch(
        input string name,
        input op::t op_i,
        input logic [31:0] a,
        input logic [31:0] b,
        input logic [31:0] pc_i,
        input logic [31:0] imm_i,
        input logic expected_taken
    );
        logic [31:0] expected_next_pc;
        begin
            expected_next_pc = expected_taken ? (pc_i + imm_i) : (pc_i + 32'd4);

            drive_valid(name, op_i, 5'd0, 5'd1, 5'd2, a, b, pc_i, imm_i);

            check_common(name, op_i, pc_i, pipeline_status::VALID);
            check32({name, " rd result"}, rd_data_reg_out, 32'd0);
            check32({name, " next pc"}, next_program_counter_reg_out, expected_next_pc);
            check_forwarding(name, 1'b0, 5'd0, 32'd0);

            if (expected_taken) begin
                check_bwd_status({name, " taken jump status"}, status_backwards_out, pipeline_status::JUMP);
                check32({name, " jump addr"}, jump_address_backwards_out, expected_next_pc);
            end else begin
                check_bwd_status({name, " not taken status"}, status_backwards_out, pipeline_status::READY);
                check32({name, " jump addr"}, jump_address_backwards_out, 32'd0);
            end
        end
    endtask

    initial begin
        pass_count = 0;
        fail_count = 0;

        rs1_data_in               = 32'd0;
        rs2_data_in               = 32'd0;
        program_counter_in        = 32'd0;
        instruction_in            = instruction::NOP;
        status_forwards_in        = pipeline_status::BUBBLE;
        status_backwards_in       = pipeline_status::READY;
        jump_address_backwards_in = 32'd0;

        rst = 1'b1;
        repeat (3) @(posedge clk);
        #1;

        check32("reset source", source_data_reg_out, 32'd0);
        check32("reset rd", rd_data_reg_out, 32'd0);
        check_op("reset instr NOP", instruction_reg_out.op, instruction::NOP.op);
        check_fwd_status("reset status", status_forwards_out, pipeline_status::BUBBLE);
        check_bwd_status("reset backward", status_backwards_out, pipeline_status::READY);
        check_bit("reset forwarding valid", forwarding_out.data_valid, 1'b0);

        rst = 1'b0;

        test_alu("ADD",   op::ADD,   32'd10, 32'd20, 32'd0, 1'b0, 32'd30);
        test_alu("SUB",   op::SUB,   32'd20, 32'd10, 32'd0, 1'b0, 32'd10);
        test_alu("AND",   op::AND,   32'hF0F0_0000, 32'h0FF0_0000, 32'd0, 1'b0, 32'h00F0_0000);
        test_alu("OR",    op::OR,    32'hF000_0000, 32'h0F00_0000, 32'd0, 1'b0, 32'hFF00_0000);
        test_alu("XOR",   op::XOR,   32'hAAAA_5555, 32'hFFFF_0000, 32'd0, 1'b0, 32'h5555_5555);
        test_alu("SLL",   op::SLL,   32'h0000_0001, 32'd4, 32'd0, 1'b0, 32'h0000_0010);
        test_alu("SRL",   op::SRL,   32'h8000_0000, 32'd4, 32'd0, 1'b0, 32'h0800_0000);
        test_alu("SRA",   op::SRA,   32'h8000_0000, 32'd4, 32'd0, 1'b0, 32'hF800_0000);
        test_alu("SLT true",  op::SLT,  32'hFFFF_FFFE, 32'd1, 32'd0, 1'b0, 32'd1);
        test_alu("SLT false", op::SLT,  32'd5, 32'd1, 32'd0, 1'b0, 32'd0);
        test_alu("SLTU true", op::SLTU, 32'd1, 32'd5, 32'd0, 1'b0, 32'd1);
        test_alu("SLTU false",op::SLTU, 32'hFFFF_FFFF, 32'd1, 32'd0, 1'b0, 32'd0);

        test_alu("ADDI",  op::ADDI,  32'd10, 32'd0, 32'd7, 1'b1, 32'd17);
        test_alu("ANDI",  op::ANDI,  32'hFFFF_00FF, 32'd0, 32'h0000_0F0F, 1'b1, 32'h0000_000F);
        test_alu("ORI",   op::ORI,   32'h0000_F000, 32'd0, 32'h0000_00FF, 1'b1, 32'h0000_F0FF);
        test_alu("XORI",  op::XORI,  32'hAAAA_0000, 32'd0, 32'h0000_FFFF, 1'b1, 32'hAAAA_FFFF);
        test_alu("SLLI",  op::SLLI,  32'h0000_0001, 32'd0, 32'd8, 1'b1, 32'h0000_0100);
        test_alu("SRLI",  op::SRLI,  32'h8000_0000, 32'd0, 32'd8, 1'b1, 32'h0080_0000);
        test_alu("SRAI",  op::SRAI,  32'h8000_0000, 32'd0, 32'd8, 1'b1, 32'hFF80_0000);
        test_alu("SLTI",  op::SLTI,  32'hFFFF_FFFE, 32'd0, 32'd1, 1'b1, 32'd1);
        test_alu("SLTIU", op::SLTIU, 32'd1, 32'd0, 32'd5, 1'b1, 32'd1);

        drive_valid("LUI", op::LUI, 5'd11, 5'd0, 5'd0, 32'd0, 32'd0, 32'h2000, 32'h1234_5000);
        check32("LUI rd", rd_data_reg_out, 32'h1234_5000);
        check_forwarding("LUI", 1'b1, 5'd11, 32'h1234_5000);

        drive_valid("AUIPC", op::AUIPC, 5'd12, 5'd0, 5'd0, 32'd0, 32'd0, 32'h2000, 32'h0000_0100);
        check32("AUIPC rd", rd_data_reg_out, 32'h0000_2100);
        check_forwarding("AUIPC", 1'b1, 5'd12, 32'h0000_2100);

        drive_valid("LW address", op::LW, 5'd13, 5'd1, 5'd0, 32'h800, 32'd0, 32'h3000, 32'h20);
        check32("LW address rd_data", rd_data_reg_out, 32'h820);
        check_forwarding("LW no EX forwarding", 1'b0, 5'd13, 32'h820);
        check_bwd_status("LW no redirect", status_backwards_out, pipeline_status::READY);

        drive_valid("SW address/data", op::SW, 5'd0, 5'd1, 5'd2, 32'h800, 32'hDEAD_BEEF, 32'h3004, 32'h24);
        check32("SW address rd_data", rd_data_reg_out, 32'h824);
        check32("SW source store data", source_data_reg_out, 32'hDEAD_BEEF);
        check_forwarding("SW no forwarding", 1'b0, 5'd0, 32'h824);

        drive_valid("JAL", op::JAL, 5'd14, 5'd0, 5'd0, 32'd0, 32'd0, 32'h4000, 32'h40);
        check32("JAL link", rd_data_reg_out, 32'h4004);
        check32("JAL target", next_program_counter_reg_out, 32'h4040);
        check_bwd_status("JAL redirect", status_backwards_out, pipeline_status::JUMP);
        check32("JAL jump addr", jump_address_backwards_out, 32'h4040);
        check_forwarding("JAL forwarding", 1'b1, 5'd14, 32'h4004);

        drive_valid("JALR", op::JALR, 5'd15, 5'd1, 5'd0, 32'h5003, 32'd0, 32'h5000, 32'h5);
        check32("JALR link", rd_data_reg_out, 32'h5004);
        check32("JALR target masked bit0", next_program_counter_reg_out, 32'h5008);
        check_bwd_status("JALR redirect", status_backwards_out, pipeline_status::JUMP);
        check32("JALR jump addr", jump_address_backwards_out, 32'h5008);
        check_forwarding("JALR forwarding", 1'b1, 5'd15, 32'h5004);

        test_branch("BEQ taken",  op::BEQ,  32'd5, 32'd5, 32'h6000, 32'h20, 1'b1);
        test_branch("BEQ not",    op::BEQ,  32'd5, 32'd6, 32'h6004, 32'h20, 1'b0);
        test_branch("BNE taken",  op::BNE,  32'd5, 32'd6, 32'h6008, 32'h20, 1'b1);
        test_branch("BNE not",    op::BNE,  32'd5, 32'd5, 32'h600C, 32'h20, 1'b0);
        test_branch("BLT taken",  op::BLT,  32'hFFFF_FFFE, 32'd1, 32'h6010, 32'h20, 1'b1);
        test_branch("BGE taken",  op::BGE,  32'd5, 32'd1, 32'h6014, 32'h20, 1'b1);
        test_branch("BLTU taken", op::BLTU, 32'd1, 32'd5, 32'h6018, 32'h20, 1'b1);
        test_branch("BGEU taken", op::BGEU, 32'hFFFF_FFFF, 32'd1, 32'h601C, 32'h20, 1'b1);

        drive_valid("FENCE", op::FENCE, 5'd0, 5'd0, 5'd0, 32'd0, 32'd0, 32'h7000, 32'd0);
        check_common("FENCE", op::FENCE, 32'h7000, pipeline_status::VALID);
        check_bwd_status("FENCE no redirect", status_backwards_out, pipeline_status::READY);
        check_forwarding("FENCE no forwarding", 1'b0, 5'd0, 32'd0);

        drive_valid("WFI", op::WFI, 5'd0, 5'd0, 5'd0, 32'd0, 32'd0, 32'h7004, 32'd0);
        check_common("WFI", op::WFI, 32'h7004, pipeline_status::VALID);
        check_bwd_status("WFI no redirect", status_backwards_out, pipeline_status::READY);

        drive_valid("FENCE_I", op::FENCE_I, 5'd0, 5'd0, 5'd0, 32'd0, 32'd0, 32'h7008, 32'd0);
        check_common("FENCE_I", op::FENCE_I, 32'h7008, pipeline_status::VALID);
        check32("FENCE_I next pc", next_program_counter_reg_out, 32'h700C);
        check_bwd_status("FENCE_I redirect", status_backwards_out, pipeline_status::JUMP);
        check32("FENCE_I jump addr", jump_address_backwards_out, 32'h700C);

        drive_valid("CSRRW source", op::CSRRW, 5'd16, 5'd1, 5'd0, 32'hABCD_1234, 32'd0, 32'h8000, 32'd0);
        check32("CSRRW source_data", source_data_reg_out, 32'hABCD_1234);
        check32("CSRRW rd placeholder", rd_data_reg_out, 32'd0);
        check_forwarding("CSRRW no EX forwarding", 1'b0, 5'd16, 32'd0);

        drive_valid("CSRRSI source", op::CSRRSI, 5'd17, 5'd0, 5'd0, 32'd0, 32'd0, 32'h8004, 32'd7);
        check32("CSRRSI source_data zimm", source_data_reg_out, 32'd7);
        check32("CSRRSI rd placeholder", rd_data_reg_out, 32'd0);
        check_forwarding("CSRRSI no EX forwarding", 1'b0, 5'd17, 32'd0);

        drive_valid("misaligned BEQ target", op::BEQ, 5'd0, 5'd1, 5'd2, 32'd1, 32'd1, 32'h9000, 32'd2);
        check_fwd_status("misaligned branch status", status_forwards_out, pipeline_status::FETCH_MISALIGNED);
        check_bwd_status("misaligned branch no redirect", status_backwards_out, pipeline_status::READY);

        drive_valid("misaligned JAL target", op::JAL, 5'd18, 5'd0, 5'd0, 32'd0, 32'd0, 32'h9000, 32'd2);
        check_fwd_status("misaligned JAL status", status_forwards_out, pipeline_status::FETCH_MISALIGNED);
        check_bwd_status("misaligned JAL no redirect", status_backwards_out, pipeline_status::READY);

        $display("\n--- incoming FETCH_FAULT propagation ---");
        @(negedge clk);
        rs1_data_in               = 32'd0;
        rs2_data_in               = 32'd0;
        program_counter_in        = 32'hA000;
        instruction_in            = make_instr(op::ADD, 5'd1, 5'd2, 5'd3, csr::t'(12'h000), 32'd0);
        status_forwards_in        = pipeline_status::FETCH_FAULT;
        status_backwards_in       = pipeline_status::READY;
        jump_address_backwards_in = 32'd0;

        @(posedge clk);
        #1;

        check_fwd_status("FETCH_FAULT propagated", status_forwards_out, pipeline_status::FETCH_FAULT);
        check_op("FETCH_FAULT inserts NOP", instruction_reg_out.op, instruction::NOP.op);
        check_bit("FETCH_FAULT no forwarding", forwarding_out.data_valid, 1'b0);

        $display("\n--- downstream STALL hold ---");
        drive_valid("STALL baseline ADD", op::ADD, 5'd10, 5'd1, 5'd2, 32'd3, 32'd4, 32'hB000, 32'd0);
        check32("STALL baseline rd", rd_data_reg_out, 32'd7);

        @(negedge clk);
        rs1_data_in               = 32'd100;
        rs2_data_in               = 32'd200;
        program_counter_in        = 32'hB004;
        instruction_in            = make_instr(op::SUB, 5'd11, 5'd1, 5'd2, csr::t'(12'h000), 32'd0);
        status_forwards_in        = pipeline_status::VALID;
        status_backwards_in       = pipeline_status::STALL;
        jump_address_backwards_in = 32'hDEAD_0000;

        @(posedge clk);
        #1;

        check_op("STALL holds instruction", instruction_reg_out.op, op::ADD);
        check32("STALL holds rd", rd_data_reg_out, 32'd7);
        check_bwd_status("STALL backward", status_backwards_out, pipeline_status::STALL);
        check32("STALL jump address pass", jump_address_backwards_out, 32'hDEAD_0000);

        $display("\n--- downstream JUMP flush ---");
        @(negedge clk);
        status_backwards_in       = pipeline_status::JUMP;
        jump_address_backwards_in = 32'hCAFE_BABE;

        @(posedge clk);
        #1;

        check_op("JUMP flush NOP", instruction_reg_out.op, instruction::NOP.op);
        check_fwd_status("JUMP flush BUBBLE", status_forwards_out, pipeline_status::BUBBLE);
        check_bwd_status("JUMP backward", status_backwards_out, pipeline_status::JUMP);
        check32("JUMP address pass", jump_address_backwards_out, 32'hCAFE_BABE);
        check_bit("JUMP no forwarding", forwarding_out.data_valid, 1'b0);

        $display("\n========================================");
        $display("COMPREHENSIVE EXECUTE_STAGE TEST SUMMARY");
        $display("PASSED: %0d", pass_count);
        $display("FAILED: %0d", fail_count);
        $display("========================================");

        if (fail_count == 0) begin
            $display("ALL COMPREHENSIVE EXECUTE_STAGE TESTS PASSED");
            $finish;
        end else begin
            $display("COMPREHENSIVE EXECUTE_STAGE TESTS FAILED");
            $fatal;
        end
    end

    initial begin
        $dumpfile("tb_execute_stage.vcd");
        $dumpvars(0, tb_execute_stage);
    end

    initial begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] Simulation timeout");
        $fatal;
    end

endmodule