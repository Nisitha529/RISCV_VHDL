// writeback_stage.sv
`timescale 1ns/1ps

module writeback_stage (
    input logic clk,
    input logic rst,

    input logic [31:0]   source_data_in,
    input logic [31:0]   rd_data_in,
    input instruction::t instruction_in,
    input logic [31:0]   program_counter_in,
    input logic [31:0]   next_program_counter_in,

    input logic external_interrupt_in,
    input logic timer_interrupt_in,

    output forwarding::t forwarding_out,

    input  pipeline_status::forwards_t  status_forwards_in,
    output pipeline_status::backwards_t status_backwards_out,
    output logic [31:0] jump_address_backwards_out
);

    // ------------------------------------------------------------------
    // Machine CSR addresses
    // ------------------------------------------------------------------
    localparam logic [11:0] CSR_MSTATUS = 12'h300;
    localparam logic [11:0] CSR_MIE     = 12'h304;
    localparam logic [11:0] CSR_MTVEC   = 12'h305;
    localparam logic [11:0] CSR_MEPC    = 12'h341;
    localparam logic [11:0] CSR_MCAUSE  = 12'h342;
    localparam logic [11:0] CSR_MTVAL   = 12'h343;
    localparam logic [11:0] CSR_MIP     = 12'h344;

    // mstatus bits
    localparam int MSTATUS_MIE_BIT  = 3;
    localparam int MSTATUS_MPIE_BIT = 7;

    // mie/mip interrupt bits
    localparam int IRQ_MTIE_BIT = 7;
    localparam int IRQ_MEIE_BIT = 11;

    // mcause values
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

    // ------------------------------------------------------------------
    // CSR register bank
    // ------------------------------------------------------------------
    logic [31:0] csr_mstatus;
    logic [31:0] csr_mie;
    logic [31:0] csr_mtvec;
    logic [31:0] csr_mepc;
    logic [31:0] csr_mcause;
    logic [31:0] csr_mtval;
    logic [31:0] csr_mip;

    logic [11:0] csr_addr;

    assign csr_addr = instruction_in.csr;

    // ------------------------------------------------------------------
    // Instruction classification
    // ------------------------------------------------------------------
    logic is_valid;
    logic is_csr;
    logic is_mret;
    logic is_ecall;
    logic is_ebreak;

    assign is_valid = (status_forwards_in == pipeline_status::VALID);

    always_comb begin
        is_csr = 1'b0;

        unique case (instruction_in.op)
            op::CSRRW,
            op::CSRRS,
            op::CSRRC,
            op::CSRRWI,
            op::CSRRSI,
            op::CSRRCI: begin
                is_csr = 1'b1;
            end

            default: begin
                is_csr = 1'b0;
            end
        endcase
    end

    assign is_mret   = (instruction_in.op == op::MRET);
    assign is_ecall  = (instruction_in.op == op::ECALL);
    assign is_ebreak = (instruction_in.op == op::EBREAK);

    // ------------------------------------------------------------------
    // CSR read mux
    // ------------------------------------------------------------------
    logic [31:0] csr_read_data;

    always_comb begin
        unique case (csr_addr)
            CSR_MSTATUS: csr_read_data = csr_mstatus;
            CSR_MIE:     csr_read_data = csr_mie;
            CSR_MTVEC:   csr_read_data = csr_mtvec;
            CSR_MEPC:    csr_read_data = csr_mepc;
            CSR_MCAUSE:  csr_read_data = csr_mcause;
            CSR_MTVAL:   csr_read_data = csr_mtval;
            CSR_MIP:     csr_read_data = csr_mip;
            default:     csr_read_data = 32'd0;
        endcase
    end

    // ------------------------------------------------------------------
    // CSR write-data generation
    //
    // source_data_in must contain:
    //   - rs1 value for CSRRW/CSRRS/CSRRC
    //   - zimm value for CSRRWI/CSRRSI/CSRRCI
    // ------------------------------------------------------------------
    logic [31:0] csr_write_data;
    logic        csr_write_enable;

    always_comb begin
        csr_write_data   = csr_read_data;
        csr_write_enable = 1'b0;

        if (is_valid && is_csr) begin
            unique case (instruction_in.op)
                op::CSRRW,
                op::CSRRWI: begin
                    csr_write_data   = source_data_in;
                    csr_write_enable = 1'b1;
                end

                op::CSRRS,
                op::CSRRSI: begin
                    csr_write_data   = csr_read_data | source_data_in;
                    csr_write_enable = (source_data_in != 32'd0);
                end

                op::CSRRC,
                op::CSRRCI: begin
                    csr_write_data   = csr_read_data & ~source_data_in;
                    csr_write_enable = (source_data_in != 32'd0);
                end

                default: begin
                    csr_write_data   = csr_read_data;
                    csr_write_enable = 1'b0;
                end
            endcase
        end
    end

    // ------------------------------------------------------------------
    // Normal integer writeback classification
    // ------------------------------------------------------------------
    logic writes_rd_normal;

    always_comb begin
        writes_rd_normal = 1'b0;

        unique case (instruction_in.op)
            op::LUI,
            op::AUIPC,
            op::JAL,
            op::JALR,

            op::LB,
            op::LH,
            op::LW,
            op::LBU,
            op::LHU,

            op::ADDI,
            op::SLTI,
            op::SLTIU,
            op::ANDI,
            op::ORI,
            op::XORI,
            op::SLLI,
            op::SRLI,
            op::SRAI,

            op::ADD,
            op::SUB,
            op::SLL,
            op::SLT,
            op::SLTU,
            op::XOR,
            op::SRL,
            op::SRA,
            op::OR,
            op::AND: begin
                writes_rd_normal = 1'b1;
            end

            default: begin
                writes_rd_normal = 1'b0;
            end
        endcase
    end

    // ------------------------------------------------------------------
    // Exception decode from pipeline status
    //
    // Important:
    // ECALL/EBREAK may arrive as status_forwards_in == ECALL/EBREAK
    // from decode_stage, not necessarily as VALID + instruction op.
    // ------------------------------------------------------------------
    logic        pipeline_exception;
    logic [31:0] exception_cause;
    logic [31:0] exception_tval;

    always_comb begin
        pipeline_exception = 1'b0;
        exception_cause    = 32'd0;
        exception_tval     = 32'd0;

        unique case (status_forwards_in)
            pipeline_status::FETCH_MISALIGNED: begin
                pipeline_exception = 1'b1;
                exception_cause    = MCAUSE_INSTR_MISALIGNED;
                exception_tval     = next_program_counter_in;
            end

            pipeline_status::FETCH_FAULT: begin
                pipeline_exception = 1'b1;
                exception_cause    = MCAUSE_INSTR_FAULT;
                exception_tval     = program_counter_in;
            end

            pipeline_status::ILLEGAL_INSTRUCTION: begin
                pipeline_exception = 1'b1;
                exception_cause    = MCAUSE_ILLEGAL;
                exception_tval     = 32'd0;
            end

            pipeline_status::ECALL: begin
                pipeline_exception = 1'b1;
                exception_cause    = MCAUSE_ECALL_MMODE;
                exception_tval     = 32'd0;
            end

            pipeline_status::EBREAK: begin
                pipeline_exception = 1'b1;
                exception_cause    = MCAUSE_BREAKPOINT;
                exception_tval     = 32'd0;
            end

            pipeline_status::LOAD_MISALIGNED: begin
                pipeline_exception = 1'b1;
                exception_cause    = MCAUSE_LOAD_MISALIGNED;
                exception_tval     = rd_data_in;
            end

            pipeline_status::LOAD_FAULT: begin
                pipeline_exception = 1'b1;
                exception_cause    = MCAUSE_LOAD_FAULT;
                exception_tval     = rd_data_in;
            end

            pipeline_status::STORE_MISALIGNED: begin
                pipeline_exception = 1'b1;
                exception_cause    = MCAUSE_STORE_MISALIGNED;
                exception_tval     = rd_data_in;
            end

            pipeline_status::STORE_FAULT: begin
                pipeline_exception = 1'b1;
                exception_cause    = MCAUSE_STORE_FAULT;
                exception_tval     = rd_data_in;
            end

            default: begin
                pipeline_exception = 1'b0;
                exception_cause    = 32'd0;
                exception_tval     = 32'd0;
            end
        endcase
    end

    // ------------------------------------------------------------------
    // Interrupt detection
    // ------------------------------------------------------------------
    logic global_interrupt_enable;
    logic timer_interrupt_enabled;
    logic external_interrupt_enabled;

    logic timer_interrupt_taken;
    logic external_interrupt_taken;

    logic interrupt_taken;
    logic [31:0] interrupt_cause;

    assign global_interrupt_enable    = csr_mstatus[MSTATUS_MIE_BIT];
    assign timer_interrupt_enabled    = csr_mie[IRQ_MTIE_BIT];
    assign external_interrupt_enabled = csr_mie[IRQ_MEIE_BIT];

    assign timer_interrupt_taken =
        global_interrupt_enable &&
        timer_interrupt_enabled &&
        timer_interrupt_in;

    assign external_interrupt_taken =
        global_interrupt_enable &&
        external_interrupt_enabled &&
        external_interrupt_in;

    always_comb begin
        interrupt_taken = 1'b0;
        interrupt_cause = 32'd0;

        if (external_interrupt_taken) begin
            interrupt_taken = 1'b1;
            interrupt_cause = MCAUSE_EXT_INTERRUPT;
        end else if (timer_interrupt_taken) begin
            interrupt_taken = 1'b1;
            interrupt_cause = MCAUSE_TIMER_INTERRUPT;
        end
    end

    // ------------------------------------------------------------------
    // Trap / redirect decision
    // ------------------------------------------------------------------
    logic trap_taken;
    logic [31:0] trap_cause;
    logic [31:0] trap_tval;

    always_comb begin
        trap_taken = 1'b0;
        trap_cause = 32'd0;
        trap_tval  = 32'd0;

        if (interrupt_taken) begin
            trap_taken = 1'b1;
            trap_cause = interrupt_cause;
            trap_tval  = 32'd0;
        end else if (pipeline_exception) begin
            trap_taken = 1'b1;
            trap_cause = exception_cause;
            trap_tval  = exception_tval;
        end else if (is_valid && is_ecall) begin
            // Defensive path for alternative decode implementations.
            trap_taken = 1'b1;
            trap_cause = MCAUSE_ECALL_MMODE;
            trap_tval  = 32'd0;
        end else if (is_valid && is_ebreak) begin
            // Defensive path for alternative decode implementations.
            trap_taken = 1'b1;
            trap_cause = MCAUSE_BREAKPOINT;
            trap_tval  = 32'd0;
        end
    end

    logic redirect_taken;
    logic [31:0] redirect_address;

    always_comb begin
        redirect_taken   = 1'b0;
        redirect_address = 32'd0;

        if (trap_taken) begin
            redirect_taken   = 1'b1;
            redirect_address = csr_mtvec;
        end else if (is_valid && is_mret) begin
            redirect_taken   = 1'b1;
            redirect_address = csr_mepc;
        end
    end

    // ------------------------------------------------------------------
    // Redirect outputs are combinational.
    //
    // CPU-level trap/MRET recovery needs this immediately visible.
    // Forwarding remains registered to preserve old-CSR-value semantics.
    // ------------------------------------------------------------------
    assign status_backwards_out =
        redirect_taken ? pipeline_status::JUMP : pipeline_status::READY;

    assign jump_address_backwards_out =
        redirect_taken ? redirect_address : 32'd0;

    // ------------------------------------------------------------------
    // Forwarding decision
    //
    // CSR instructions forward OLD CSR value. Therefore forwarding output
    // is registered in always_ff below.
    // ------------------------------------------------------------------
    logic        wb_writes_rd_comb;
    logic [31:0] wb_rd_data_comb;

    always_comb begin
        wb_writes_rd_comb = 1'b0;
        wb_rd_data_comb   = rd_data_in;

        if (is_valid && !trap_taken && !is_mret) begin
            if (is_csr) begin
                wb_writes_rd_comb = (instruction_in.rd_address != 5'd0);
                wb_rd_data_comb   = csr_read_data;
            end else if (writes_rd_normal) begin
                wb_writes_rd_comb = (instruction_in.rd_address != 5'd0);
                wb_rd_data_comb   = rd_data_in;
            end
        end
    end

    // ------------------------------------------------------------------
    // Sequential CSR commit and registered forwarding
    // ------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            csr_mstatus <= 32'd0;
            csr_mie     <= 32'd0;
            csr_mtvec   <= 32'd0;
            csr_mepc    <= 32'd0;
            csr_mcause  <= 32'd0;
            csr_mtval   <= 32'd0;
            csr_mip     <= 32'd0;

            forwarding_out.data_valid <= 1'b0;
            forwarding_out.data       <= 32'd0;
            forwarding_out.address    <= 5'd0;
        end else begin
            forwarding_out.data_valid <= wb_writes_rd_comb;
            forwarding_out.data       <= wb_rd_data_comb;
            forwarding_out.address    <= instruction_in.rd_address;

            // Reflect raw pending interrupt inputs.
            // Explicit CSR_MIP writes below override the whole register.
            csr_mip[IRQ_MTIE_BIT] <= timer_interrupt_in;
            csr_mip[IRQ_MEIE_BIT] <= external_interrupt_in;

            if (trap_taken) begin
                csr_mepc   <= program_counter_in;
                csr_mcause <= trap_cause;
                csr_mtval  <= trap_tval;

                csr_mstatus[MSTATUS_MPIE_BIT] <= csr_mstatus[MSTATUS_MIE_BIT];
                csr_mstatus[MSTATUS_MIE_BIT]  <= 1'b0;
            end else if (is_valid && is_mret) begin
                csr_mstatus[MSTATUS_MIE_BIT]  <= csr_mstatus[MSTATUS_MPIE_BIT];
                csr_mstatus[MSTATUS_MPIE_BIT] <= 1'b1;
            end else if (csr_write_enable) begin
                unique case (csr_addr)
                    CSR_MSTATUS: csr_mstatus <= csr_write_data;
                    CSR_MIE:     csr_mie     <= csr_write_data;
                    CSR_MTVEC:   csr_mtvec   <= csr_write_data;
                    CSR_MEPC:    csr_mepc    <= csr_write_data;
                    CSR_MCAUSE:  csr_mcause  <= csr_write_data;
                    CSR_MTVAL:   csr_mtval   <= csr_write_data;
                    CSR_MIP:     csr_mip     <= csr_write_data;
                    default: ;
                endcase
            end
        end
    end

endmodule