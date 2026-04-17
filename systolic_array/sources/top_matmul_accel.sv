`timescale 1ns/1ps

module top_matmul_accel #(
    parameter N = 4,
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 12
)(
    input  logic clk,
    input  logic rst_n,

    //----------------------------------
    // CONFIG
    //----------------------------------
    input  logic        cfg_we,
    input  logic [7:0]  cfg_addr,
    input  logic [31:0] cfg_wdata,

    //----------------------------------
    // STATUS
    //----------------------------------
    output logic [31:0] cfg_rdata,

    //----------------------------------
    // MEMORY PORT (to DPRAM port B)
    //----------------------------------
    output logic                  mem_we,
    output logic                  mem_re,
    output logic [ADDR_WIDTH-1:0] mem_addr,
    output logic [DATA_WIDTH-1:0] mem_wdata,
    input  logic [DATA_WIDTH-1:0] mem_rdata,

    output logic irq
);

    //----------------------------------
    // REGISTERS
    //----------------------------------
    logic start, busy, done;
    logic [ADDR_WIDTH-1:0] base_a, base_b, base_c;

    assign irq = done;

    always_comb begin
        case (cfg_addr)
            8'h04: cfg_rdata = {30'b0, done, busy};
            8'h08: cfg_rdata = {{(32-ADDR_WIDTH){1'b0}}, base_a};
            8'h0C: cfg_rdata = {{(32-ADDR_WIDTH){1'b0}}, base_b};
            8'h10: cfg_rdata = {{(32-ADDR_WIDTH){1'b0}}, base_c};
            default: cfg_rdata = 32'h0;
        endcase
    end

    //----------------------------------
    // LOCAL STORAGE
    //----------------------------------
    logic [DATA_WIDTH-1:0] mata [0:N-1][0:N-1];
    logic [DATA_WIDTH-1:0] matb [0:N-1][0:N-1];
    logic [63:0]           matc [0:N-1][0:N-1];

    //----------------------------------
    // CORE WIRES
    //----------------------------------
    logic feeder_valid, feeder_done;
    logic [DATA_WIDTH-1:0] inp_north [0:N-1];
    logic [DATA_WIDTH-1:0] inp_west  [0:N-1];
    logic [63:0] results [0:N*N-1];

    //----------------------------------
    // FEEDER START PULSE
    //----------------------------------
    logic compute_active_d;
    logic compute_start_pulse;

    //----------------------------------
    // FSM
    //----------------------------------
    typedef enum logic [3:0] {
        IDLE,
        READ_A_REQ,
        READ_A_WAIT1,
        READ_A_WAIT2,
        READ_B_REQ,
        READ_B_WAIT1,
        READ_B_WAIT2,
        COMPUTE,
        CAPTURE,
        WRITE_C,
        DONE_ST
    } state_t;

    state_t state;

    logic [31:0] idx;
    logic        write_hi;

    //----------------------------------
    // DRAIN
    //----------------------------------
    localparam integer DRAIN = (2*N + 2);
    logic [$clog2(DRAIN+1)-1:0] drain_cnt;

    //----------------------------------
    // FEEDER START PULSE GEN
    //----------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            compute_active_d <= 1'b0;
        else
            compute_active_d <= (state == COMPUTE);
    end

    assign compute_start_pulse = (state == COMPUTE) && !compute_active_d;

    //----------------------------------
    // FEEDER
    //----------------------------------
    data_feeder #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH)
    ) feeder (
        .clk      (clk),
        .rst_n    (rst_n),
        .start    (compute_start_pulse),
        .mata     (mata),
        .matb     (matb),
        .inp_north(inp_north),
        .inp_west (inp_west),
        .valid    (feeder_valid),
        .done     (feeder_done)
    );

    //----------------------------------
    // SYSTOLIC ARRAY
    //----------------------------------
    systolic_array_8x8 #(
        .ARRAY_WIDTH(N),
        .DATA_WIDTH(DATA_WIDTH)
    ) array (
        .clk      (clk),
        .rst_n    (rst_n),
        .rst_flush(1'b0),
        .valid    (feeder_valid),
        .inp_west (inp_west),
        .inp_north(inp_north),
        .results  (results)
    );

    //----------------------------------
    // MAIN CONTROL
    //----------------------------------
    integer r, c, z;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            start     <= 1'b0;
            busy      <= 1'b0;
            done      <= 1'b0;
            base_a    <= '0;
            base_b    <= '0;
            base_c    <= '0;

            mem_we    <= 1'b0;
            mem_re    <= 1'b0;
            mem_addr  <= '0;
            mem_wdata <= '0;

            state     <= IDLE;
            idx       <= 32'd0;
            write_hi  <= 1'b0;
            drain_cnt <= '0;

            for (r = 0; r < N; r = r + 1) begin
                for (c = 0; c < N; c = c + 1) begin
                    mata[r][c] <= '0;
                    matb[r][c] <= '0;
                    matc[r][c] <= '0;
                end
            end
        end else begin
            //----------------------------------
            // defaults
            //----------------------------------
            mem_we <= 1'b0;
            mem_re <= 1'b0;

            //----------------------------------
            // config writes
            //----------------------------------
            if (cfg_we) begin
                case (cfg_addr)
                    8'h00: start  <= cfg_wdata[0];
                    8'h08: base_a <= cfg_wdata[ADDR_WIDTH-1:0];
                    8'h0C: base_b <= cfg_wdata[ADDR_WIDTH-1:0];
                    8'h10: base_c <= cfg_wdata[ADDR_WIDTH-1:0];
                    default: ;
                endcase
            end

            //----------------------------------
            // FSM
            //----------------------------------
            case (state)

                //----------------------------------
                IDLE:
                //----------------------------------
                begin
                    done <= 1'b0;
                    if (start) begin
                        start <= 1'b0;
                        busy  <= 1'b1;
                        idx   <= 32'd0;
                        state <= READ_A_REQ;
                    end
                end

                //----------------------------------
                // READ A (sync RAM -> 2 wait states)
                //----------------------------------
                READ_A_REQ: begin
                    mem_re   <= 1'b1;
                    mem_addr <= base_a + idx;
                    state    <= READ_A_WAIT1;
                end

                READ_A_WAIT1: begin
                    state <= READ_A_WAIT2;
                end

                READ_A_WAIT2: begin
                    mata[idx / N][idx % N] <= mem_rdata;

                    if (idx == N*N-1) begin
                        idx   <= 32'd0;
                        state <= READ_B_REQ;
                    end else begin
                        idx   <= idx + 1;
                        state <= READ_A_REQ;
                    end
                end

                //----------------------------------
                // READ B (sync RAM -> 2 wait states)
                //----------------------------------
                READ_B_REQ: begin
                    mem_re   <= 1'b1;
                    mem_addr <= base_b + idx;
                    state    <= READ_B_WAIT1;
                end

                READ_B_WAIT1: begin
                    state <= READ_B_WAIT2;
                end

                READ_B_WAIT2: begin
                    matb[idx / N][idx % N] <= mem_rdata;

                    if (idx == N*N-1) begin
                        idx       <= 32'd0;
                        drain_cnt <= '0;
                        state     <= COMPUTE;
                    end else begin
                        idx   <= idx + 1;
                        state <= READ_B_REQ;
                    end
                end

                //----------------------------------
                // COMPUTE + DRAIN
                //----------------------------------
                COMPUTE: begin
                    if (feeder_done) begin
                        if (drain_cnt == DRAIN-1) begin
                            state <= CAPTURE;
                        end else begin
                            drain_cnt <= drain_cnt + 1'b1;
                        end
                    end
                end

                //----------------------------------
                // CAPTURE RESULTS
                //----------------------------------
                CAPTURE: begin
                    for (z = 0; z < N*N; z = z + 1) begin
                        matc[z / N][z % N] <= results[z];
                    end

                    idx      <= 32'd0;
                    write_hi <= 1'b0;
                    state    <= WRITE_C;
                end

                //----------------------------------
                // WRITE 64-bit C as 2x32-bit words
                //----------------------------------
                WRITE_C: begin
                    mem_we <= 1'b1;

                    if (!write_hi) begin
                        mem_addr  <= base_c + (idx << 1);
                        mem_wdata <= matc[idx / N][idx % N][31:0];
                        write_hi  <= 1'b1;
                    end else begin
                        mem_addr  <= base_c + (idx << 1) + 1;
                        mem_wdata <= matc[idx / N][idx % N][63:32];
                        write_hi  <= 1'b0;

                        if (idx == N*N-1) begin
                            state <= DONE_ST;
                        end else begin
                            idx <= idx + 1;
                        end
                    end
                end

                //----------------------------------
                // DONE
                //----------------------------------
                DONE_ST: begin
                    busy  <= 1'b0;
                    done  <= 1'b1;
                    state <= IDLE;
                end

                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule