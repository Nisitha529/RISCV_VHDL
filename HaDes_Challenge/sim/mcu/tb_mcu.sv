`timescale 1ns/1ps

module tb_mcu;

    import constants::*;

    // ------------------------------------------------------------------
    // Simulation parameters
    // ------------------------------------------------------------------
    localparam real TB_CLK_FREQUENCY_MHZ = 100.0;
    localparam int  TB_UART_BAUD_RATE    = 115200;

    // ------------------------------------------------------------------
    // Clocks
    // ------------------------------------------------------------------
    logic clk;
    logic clk_mem;
    logic clk_vga;

    // ------------------------------------------------------------------
    // MCU IO
    // ------------------------------------------------------------------
    logic [15:0] switches_async;
    logic [15:0] leds;

    logic [7:0] segments;
    logic [3:0] segments_select;

    logic [4:0] buttons_async;

    logic [3:0] vga_red;
    logic [3:0] vga_blue;
    logic [3:0] vga_green;
    logic       vga_hsync;
    logic       vga_vsync;

    logic uart_rx_async;
    logic uart_tx;

    int pass_count;
    int fail_count;

    // ------------------------------------------------------------------
    // Addressing model
    //
    // Your CPU PC is byte-addressed:
    //   RESET_ADDRESS, RESET_ADDRESS+4, RESET_ADDRESS+8, ...
    //
    // Your fetch-stage Wishbone address is word-addressed:
    //   wb.adr = PC >> 2
    //
    // Therefore, the instruction RAM preload address must start at:
    //   RESET_ADDRESS >> 2
    //
    // For the standard HaDes-V constants this normally equals MEMORY_START.
    // ------------------------------------------------------------------
    localparam logic [31:0] PROGRAM_FETCH_START = {2'b00, RESET_ADDRESS[31:2]};

    // Runtime data addresses are normal CPU byte addresses.
    localparam logic [31:0] RESULT_BASE           = MEMORY_START + 32'h0000_0200;

    localparam logic [31:0] RESULT_BOOT_MARKER    = RESULT_BASE + 32'd0;
    localparam logic [31:0] RESULT_LED_MARKER     = RESULT_BASE + 32'd4;
    localparam logic [31:0] RESULT_SWITCH_READ    = RESULT_BASE + 32'd8;
    localparam logic [31:0] RESULT_BUTTON_READ    = RESULT_BASE + 32'd12;
    localparam logic [31:0] RESULT_RAM_WORD       = RESULT_BASE + 32'd16;
    localparam logic [31:0] RESULT_SEGMENT_MARKER = RESULT_BASE + 32'd20;
    localparam logic [31:0] RESULT_FINAL_MARKER   = RESULT_BASE + 32'd24;

    localparam logic signed [11:0] OFF_BOOT_MARKER    = 12'sd0;
    localparam logic signed [11:0] OFF_LED_MARKER     = 12'sd4;
    localparam logic signed [11:0] OFF_SWITCH_READ    = 12'sd8;
    localparam logic signed [11:0] OFF_BUTTON_READ    = 12'sd12;
    localparam logic signed [11:0] OFF_RAM_WORD       = 12'sd16;
    localparam logic signed [11:0] OFF_SEGMENT_MARKER = 12'sd20;
    localparam logic signed [11:0] OFF_FINAL_MARKER   = 12'sd24;

    localparam logic [15:0] EXPECTED_SWITCHES = 16'hCAFE;
    localparam logic [4:0]  EXPECTED_BUTTONS  = 5'b10110;
    localparam logic [15:0] EXPECTED_LEDS     = 16'hA5A5;

    localparam logic [31:0] RAM_WORD_VALUE    = 32'h1234_ABCD;
    localparam logic [31:0] FINAL_VALUE       = 32'hCAFE_BABE;

    // Provided wishbone_ram memory[] is indexed directly by Wishbone address offset.
    localparam int RAM_WORDS = MEMORY_SIZE;

    // ------------------------------------------------------------------
    // DUT
    // ------------------------------------------------------------------
    mcu #(
        .CLK_FREQUENCY_MHZ (TB_CLK_FREQUENCY_MHZ),
        .UART_BAUD_RATE    (TB_UART_BAUD_RATE)
    ) dut (
        .clk               (clk),
        .clk_mem           (clk_mem),
        .clk_vga           (clk_vga),

        .switches_async    (switches_async),

        .leds              (leds),

        .segments          (segments),
        .segments_select   (segments_select),

        .buttons_async     (buttons_async),

        .vga_red           (vga_red),
        .vga_blue          (vga_blue),
        .vga_green         (vga_green),
        .vga_hsync         (vga_hsync),
        .vga_vsync         (vga_vsync),

        .uart_rx_async     (uart_rx_async),
        .uart_tx           (uart_tx)
    );

    // ------------------------------------------------------------------
    // Clock generation
    // ------------------------------------------------------------------
    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
        clk_mem = 1'b0;
        forever #5 clk_mem = ~clk_mem;
    end

    initial begin
        clk_vga = 1'b0;
        forever #20 clk_vga = ~clk_vga;
    end

    // ------------------------------------------------------------------
    // Instruction encoders
    // ------------------------------------------------------------------
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

    function automatic logic [31:0] addi(
        input logic [4:0] rd,
        input logic [4:0] rs1,
        input logic signed [11:0] imm
    );
        addi = enc_i(imm, rs1, 3'b000, rd, 7'b0010011);
    endfunction

    function automatic logic [31:0] lw(
        input logic [4:0] rd,
        input logic [4:0] rs1,
        input logic signed [11:0] imm
    );
        lw = enc_i(imm, rs1, 3'b010, rd, 7'b0000011);
    endfunction

    function automatic logic [31:0] sw(
        input logic [4:0] rs2,
        input logic [4:0] rs1,
        input logic signed [11:0] imm
    );
        sw = enc_s(imm, rs2, rs1, 3'b010, 7'b0100011);
    endfunction

    function automatic logic [31:0] lui(
        input logic [4:0] rd,
        input logic [19:0] imm20
    );
        lui = enc_u(imm20, rd, 7'b0110111);
    endfunction

    function automatic logic [31:0] jal(
        input logic [4:0] rd,
        input logic signed [20:0] imm
    );
        jal = enc_j(imm, rd, 7'b1101111);
    endfunction

    function automatic logic [31:0] nop();
        nop = 32'h0000_0013;
    endfunction

    // ------------------------------------------------------------------
    // RAM helpers
    //
    // This RAM is 32-bit-word storage indexed directly by Wishbone address:
    //   dut.ram.memory[wb_addr - MEMORY_START]
    //
    // Do not shift by 2 here.
    // ------------------------------------------------------------------
    function automatic int unsigned ram_index(input logic [31:0] wb_addr);
        begin
            ram_index = wb_addr - MEMORY_START;
        end
    endfunction

    task automatic write_ram_word(
        input logic [31:0] wb_addr,
        input logic [31:0] data
    );
        int unsigned index;
        begin
            index = ram_index(wb_addr);

            if (index >= RAM_WORDS) begin
                $display("[TB ERROR] RAM write out of range wb_addr=0x%08h index=%0d MEMORY_START=0x%08h",
                         wb_addr, index, MEMORY_START);
                $fatal;
            end

            dut.ram.memory[index] = data;
        end
    endtask

    function automatic logic [31:0] read_ram_word(
        input logic [31:0] wb_addr
    );
        int unsigned index;
        begin
            index = ram_index(wb_addr);

            if (index >= RAM_WORDS) begin
                $display("[TB ERROR] RAM read out of range wb_addr=0x%08h index=%0d MEMORY_START=0x%08h",
                         wb_addr, index, MEMORY_START);
                read_ram_word = 32'hDEAD_DEAD;
            end else begin
                read_ram_word = dut.ram.memory[index];
            end
        end
    endfunction

    task automatic clear_ram();
        int i;
        begin
            for (i = 0; i < RAM_WORDS; i++) begin
                dut.ram.memory[i] = 32'd0;
            end
        end
    endtask

    // ------------------------------------------------------------------
    // Program write helper
    //
    // Program preload address is in fetch-Wishbone address domain.
    // Since fetch address increments by +1 per instruction, pc increments
    // by +1 here.
    // ------------------------------------------------------------------
    task automatic put_instr(
        inout logic [31:0] pc,
        input logic [31:0] instr
    );
        begin
            write_ram_word(pc, instr);
            pc += 32'd1;
        end
    endtask

    // ------------------------------------------------------------------
    // Address loading helper
    //
    // Emits:
    //   lui  rd, upper20(value + 0x800)
    //   addi rd, rd, signed_lower12
    //
    // pc here is fetch-Wishbone instruction address and increments by +1
    // per emitted instruction.
    // ------------------------------------------------------------------
    task automatic emit_li(
        inout logic [31:0] pc,
        input logic [4:0] rd,
        input logic [31:0] value
    );
        logic [31:0] rounded;
        logic [19:0] upper20;
        logic [31:0] upper_value;
        logic [31:0] lower_diff;
        logic signed [11:0] lower12;
        begin
            rounded     = value + 32'h0000_0800;
            upper20     = rounded[31:12];
            upper_value = {upper20, 12'd0};
            lower_diff  = value - upper_value;
            lower12     = lower_diff[11:0];

            put_instr(pc, lui(rd, upper20));

            if (lower12 != 12'sd0) begin
                put_instr(pc, addi(rd, rd, lower12));
            end
        end
    endtask

    // ------------------------------------------------------------------
    // Check helpers
    // ------------------------------------------------------------------
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

    task automatic check16(
        input string name,
        input logic [15:0] actual,
        input logic [15:0] expected
    );
        begin
            if (actual !== expected) begin
                $display("[FAIL] %s: actual=0x%04h expected=0x%04h", name, actual, expected);
                fail_count++;
            end else begin
                $display("[PASS] %s", name);
                pass_count++;
            end
        end
    endtask

    task automatic wait_for_ram_word(
        input string name,
        input logic [31:0] wb_addr,
        input logic [31:0] expected,
        input int timeout_cycles
    );
        int timeout;
        begin
            timeout = 0;

            while (read_ram_word(wb_addr) !== expected) begin
                @(posedge clk);
                timeout++;

                if (timeout > timeout_cycles) begin
                    $display("[FAIL] Timeout waiting for %s at wb_addr=0x%08h actual=0x%08h expected=0x%08h",
                             name, wb_addr, read_ram_word(wb_addr), expected);
                    fail_count++;
                    return;
                end
            end
        end
    endtask

    // ------------------------------------------------------------------
    // Reset + preload
    //
    // mcu.sv has internal reset:
    //   rst <= buttons[0]
    //
    // The safest simulation sequence is:
    //   1. Force internal reset high.
    //   2. Let peripherals/RAM clear.
    //   3. Preload RAM at negedge while reset is still forced.
    //   4. Release reset.
    // ------------------------------------------------------------------
    task automatic reset_preload_and_release();
        begin
            force dut.rst = 1'b1;

            repeat (12) @(posedge clk);

            @(negedge clk);
            load_mcu_program();

            $display("[TB] RESET_ADDRESS       = 0x%08h", RESET_ADDRESS);
            $display("[TB] RESET_ADDRESS >> 2  = 0x%08h", PROGRAM_FETCH_START);
            $display("[TB] MEMORY_START        = 0x%08h", MEMORY_START);
            $display("[TB] First instr preload = 0x%08h", read_ram_word(PROGRAM_FETCH_START));

            release dut.rst;

            repeat (12) @(posedge clk);
        end
    endtask

    // ------------------------------------------------------------------
    // MCU integration program
    //
    // This test uses word stores/loads for RAM because the provided
    // wishbone_ram stores 32-bit words by direct Wishbone address index.
    // CPU byte/halfword correctness is already covered by tb_top_cpu.
    // ------------------------------------------------------------------
    task automatic load_mcu_program();
        logic [31:0] pc;
        begin
            clear_ram();

            pc = PROGRAM_FETCH_START;

            // x10 = RESULT_BASE
            emit_li(pc, 5'd10, RESULT_BASE);

            // Boot marker: RAM[RESULT_BOOT_MARKER] = 0x11111111
            emit_li(pc, 5'd1, 32'h1111_1111);
            put_instr(pc, sw(5'd1, 5'd10, OFF_BOOT_MARKER));

            // LED peripheral write
            emit_li(pc, 5'd11, LEDS_START);
            emit_li(pc, 5'd2, {16'd0, EXPECTED_LEDS});
            put_instr(pc, sw(5'd2, 5'd11, 12'sd0));

            // LED marker
            emit_li(pc, 5'd3, 32'h2222_2222);
            put_instr(pc, sw(5'd3, 5'd10, OFF_LED_MARKER));

            // Switch peripheral read
            emit_li(pc, 5'd12, SWITCHES_START);
            put_instr(pc, lw(5'd4, 5'd12, 12'sd0));
            put_instr(pc, sw(5'd4, 5'd10, OFF_SWITCH_READ));

            // Button peripheral read
            emit_li(pc, 5'd13, BUTTONS_START);
            put_instr(pc, lw(5'd5, 5'd13, 12'sd0));
            put_instr(pc, sw(5'd5, 5'd10, OFF_BUTTON_READ));

            // RAM word write through MCU memory bus
            emit_li(pc, 5'd6, RAM_WORD_VALUE);
            put_instr(pc, sw(5'd6, 5'd10, OFF_RAM_WORD));

            // Seven-segment peripheral write
            emit_li(pc, 5'd14, SEGMENTS_START);
            emit_li(pc, 5'd8, 32'h0000_5A0F);
            put_instr(pc, sw(5'd8, 5'd14, 12'sd0));

            // Segment marker
            emit_li(pc, 5'd9, 32'h3333_3333);
            put_instr(pc, sw(5'd9, 5'd10, OFF_SEGMENT_MARKER));

            // Final marker
            emit_li(pc, 5'd15, FINAL_VALUE);
            put_instr(pc, sw(5'd15, 5'd10, OFF_FINAL_MARKER));

            // Infinite loop
            put_instr(pc, jal(5'd0, 21'sd0));
        end
    endtask

    // ------------------------------------------------------------------
    // Main test sequence
    // ------------------------------------------------------------------
    initial begin
        pass_count = 0;
        fail_count = 0;

        // buttons_async[0] is reset. Keep it low; reset is forced internally.
        buttons_async     = EXPECTED_BUTTONS;
        buttons_async[0]  = 1'b0;

        switches_async    = EXPECTED_SWITCHES;
        uart_rx_async     = 1'b1;   // UART idle high

        repeat (4) @(posedge clk);

        $display("\n============================================================");
        $display("MCU INTEGRATION TEST");
        $display("============================================================");

        reset_preload_and_release();

        wait_for_ram_word("MCU final marker", RESULT_FINAL_MARKER, FINAL_VALUE, 50000);

        $display("\n--- MCU RAM result dump ---");
        $display("BOOT_MARKER    = 0x%08h", read_ram_word(RESULT_BOOT_MARKER));
        $display("LED_MARKER     = 0x%08h", read_ram_word(RESULT_LED_MARKER));
        $display("SWITCH_READ    = 0x%08h", read_ram_word(RESULT_SWITCH_READ));
        $display("BUTTON_READ    = 0x%08h", read_ram_word(RESULT_BUTTON_READ));
        $display("RAM_WORD       = 0x%08h", read_ram_word(RESULT_RAM_WORD));
        $display("SEGMENT_MARKER = 0x%08h", read_ram_word(RESULT_SEGMENT_MARKER));
        $display("FINAL_MARKER   = 0x%08h", read_ram_word(RESULT_FINAL_MARKER));

        check32("boot marker written through RAM",      read_ram_word(RESULT_BOOT_MARKER),    32'h1111_1111);
        check32("LED marker written through RAM",       read_ram_word(RESULT_LED_MARKER),     32'h2222_2222);
        check32("switches readback stored to RAM",      read_ram_word(RESULT_SWITCH_READ),    {16'd0, EXPECTED_SWITCHES});
        check32("buttons readback stored to RAM",       read_ram_word(RESULT_BUTTON_READ),    {27'd0, EXPECTED_BUTTONS});
        check32("RAM word store through MCU RAM",       read_ram_word(RESULT_RAM_WORD),       RAM_WORD_VALUE);
        check32("segment marker written through RAM",   read_ram_word(RESULT_SEGMENT_MARKER), 32'h3333_3333);
        check32("final marker written through RAM",     read_ram_word(RESULT_FINAL_MARKER),   FINAL_VALUE);

        check16("LED output peripheral", leds, EXPECTED_LEDS);

        if ((^segments === 1'bx) || (^segments_select === 1'bx)) begin
            $display("[FAIL] seven-segment outputs contain X: segments=0x%02h select=0x%01h",
                     segments, segments_select);
            fail_count++;
        end else begin
            $display("[PASS] seven-segment outputs are driven: segments=0x%02h select=0x%01h",
                     segments, segments_select);
            pass_count++;
        end

        if (uart_tx === 1'bx) begin
            $display("[FAIL] UART TX is X");
            fail_count++;
        end else begin
            $display("[PASS] UART TX is driven: uart_tx=%0b", uart_tx);
            pass_count++;
        end

        if ((^vga_red === 1'bx) ||
            (^vga_green === 1'bx) ||
            (^vga_blue === 1'bx) ||
            (vga_hsync === 1'bx) ||
            (vga_vsync === 1'bx)) begin
            $display("[FAIL] VGA outputs contain X");
            fail_count++;
        end else begin
            $display("[PASS] VGA outputs are driven");
            pass_count++;
        end

        $display("\n========================================");
        $display("COMPREHENSIVE MCU TEST SUMMARY");
        $display("PASSED: %0d", pass_count);
        $display("FAILED: %0d", fail_count);
        $display("========================================");

        if (fail_count == 0) begin
            $display("ALL MCU TESTS PASSED");
            $finish;
        end else begin
            $display("MCU TESTS FAILED");
            $fatal;
        end
    end

    initial begin
        $dumpfile("tb_mcu.vcd");
        $dumpvars(0, tb_mcu);
    end

    initial begin
        repeat (120000) @(posedge clk);
        $display("[FAIL] Global MCU simulation timeout");
        $display("BOOT_MARKER    currently = 0x%08h", read_ram_word(RESULT_BOOT_MARKER));
        $display("FINAL_MARKER   currently = 0x%08h", read_ram_word(RESULT_FINAL_MARKER));
        $display("LEDs           currently = 0x%04h", leds);
        $fatal;
    end

endmodule