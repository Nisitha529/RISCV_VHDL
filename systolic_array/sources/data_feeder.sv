`timescale 1ns/1ps

module data_feeder #(
    parameter N          = 4,
    parameter DATA_WIDTH = 32
)(
    input                           clk,
    input                           rst_n,
    input                           start,   // one-cycle pulse

    input      [DATA_WIDTH-1:0]     mata [0:N-1][0:N-1],
    input      [DATA_WIDTH-1:0]     matb [0:N-1][0:N-1],

    output reg [DATA_WIDTH-1:0]     inp_north [0:N-1],
    output reg [DATA_WIDTH-1:0]     inp_west  [0:N-1],

    output reg                      valid,
    output reg                      done
);

    integer i;
    integer t;

    reg active;
    reg valid_d;

    localparam integer LAST_T = (3*N - 2);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            t       <= 0;
            active  <= 0;
            valid   <= 0;
            valid_d <= 0;
            done    <= 0;

            for (i = 0; i < N; i = i + 1) begin
                inp_north[i] <= 0;
                inp_west[i]  <= 0;
            end
        end else begin
            //----------------------------------
            // start pulse arms a new run
            //----------------------------------
            if (start) begin
                t       <= 0;
                active  <= 1;
                valid   <= 0;
                valid_d <= 0;
                done    <= 0;

                for (i = 0; i < N; i = i + 1) begin
                    inp_north[i] <= 0;
                    inp_west[i]  <= 0;
                end
            end
            //----------------------------------
            // active run
            //----------------------------------
            else if (active) begin
                for (i = 0; i < N; i = i + 1) begin
                    // A flows right
                    if ((t - i) >= 0 && (t - i) < N)
                        inp_west[i] <= mata[i][t - i];
                    else
                        inp_west[i] <= 0;

                    // B flows down
                    if ((t - i) >= 0 && (t - i) < N)
                        inp_north[i] <= matb[t - i][i];
                    else
                        inp_north[i] <= 0;
                end

                // align valid with registered outputs seen by PEs
                valid   <= valid_d;
                valid_d <= 1'b1;

                if (t == LAST_T) begin
                    active  <= 0;
                    done    <= 1'b1;
                    valid_d <= 1'b0;
                end else begin
                    t <= t + 1;
                end
            end
            //----------------------------------
            // idle
            //----------------------------------
            else begin
                valid   <= 1'b0;
                valid_d <= 1'b0;
                done    <= done; // hold until next start
            end
        end
    end

endmodule