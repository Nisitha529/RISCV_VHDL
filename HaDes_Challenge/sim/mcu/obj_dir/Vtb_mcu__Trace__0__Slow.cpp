// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_mcu__Syms.h"


VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_mcu ");
    tracep->declDouble(c+465,"TB_CLK_FREQUENCY_MHZ", false,-1);
    tracep->declBus(c+467,"TB_UART_BAUD_RATE", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+452,"clk_mem", false,-1);
    tracep->declBit(c+453,"clk_vga", false,-1);
    tracep->declBus(c+1,"switches_async", false,-1, 15,0);
    tracep->declBus(c+130,"leds", false,-1, 15,0);
    tracep->declBus(c+131,"segments", false,-1, 7,0);
    tracep->declBus(c+132,"segments_select", false,-1, 3,0);
    tracep->declBus(c+2,"buttons_async", false,-1, 4,0);
    tracep->declBus(c+415,"vga_red", false,-1, 3,0);
    tracep->declBus(c+416,"vga_blue", false,-1, 3,0);
    tracep->declBus(c+417,"vga_green", false,-1, 3,0);
    tracep->declBit(c+418,"vga_hsync", false,-1);
    tracep->declBit(c+419,"vga_vsync", false,-1);
    tracep->declBit(c+3,"uart_rx_async", false,-1);
    tracep->declBit(c+133,"uart_tx", false,-1);
    tracep->declBus(c+4,"pass_count", false,-1, 31,0);
    tracep->declBus(c+5,"fail_count", false,-1, 31,0);
    tracep->declBus(c+468,"PROGRAM_FETCH_START", false,-1, 31,0);
    tracep->declBus(c+469,"RESULT_BASE", false,-1, 31,0);
    tracep->declBus(c+469,"RESULT_BOOT_MARKER", false,-1, 31,0);
    tracep->declBus(c+470,"RESULT_LED_MARKER", false,-1, 31,0);
    tracep->declBus(c+471,"RESULT_SWITCH_READ", false,-1, 31,0);
    tracep->declBus(c+472,"RESULT_BUTTON_READ", false,-1, 31,0);
    tracep->declBus(c+473,"RESULT_RAM_WORD", false,-1, 31,0);
    tracep->declBus(c+474,"RESULT_SEGMENT_MARKER", false,-1, 31,0);
    tracep->declBus(c+475,"RESULT_FINAL_MARKER", false,-1, 31,0);
    tracep->declBus(c+476,"OFF_BOOT_MARKER", false,-1, 11,0);
    tracep->declBus(c+477,"OFF_LED_MARKER", false,-1, 11,0);
    tracep->declBus(c+478,"OFF_SWITCH_READ", false,-1, 11,0);
    tracep->declBus(c+479,"OFF_BUTTON_READ", false,-1, 11,0);
    tracep->declBus(c+480,"OFF_RAM_WORD", false,-1, 11,0);
    tracep->declBus(c+481,"OFF_SEGMENT_MARKER", false,-1, 11,0);
    tracep->declBus(c+482,"OFF_FINAL_MARKER", false,-1, 11,0);
    tracep->declBus(c+483,"EXPECTED_SWITCHES", false,-1, 15,0);
    tracep->declBus(c+484,"EXPECTED_BUTTONS", false,-1, 4,0);
    tracep->declBus(c+485,"EXPECTED_LEDS", false,-1, 15,0);
    tracep->declBus(c+486,"RAM_WORD_VALUE", false,-1, 31,0);
    tracep->declBus(c+487,"FINAL_VALUE", false,-1, 31,0);
    tracep->declBus(c+488,"RAM_WORDS", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declDouble(c+465,"CLK_FREQUENCY_MHZ", false,-1);
    tracep->declBus(c+467,"UART_BAUD_RATE", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+452,"clk_mem", false,-1);
    tracep->declBit(c+453,"clk_vga", false,-1);
    tracep->declBus(c+1,"switches_async", false,-1, 15,0);
    tracep->declBus(c+130,"leds", false,-1, 15,0);
    tracep->declBus(c+131,"segments", false,-1, 7,0);
    tracep->declBus(c+132,"segments_select", false,-1, 3,0);
    tracep->declBus(c+2,"buttons_async", false,-1, 4,0);
    tracep->declBus(c+415,"vga_red", false,-1, 3,0);
    tracep->declBus(c+416,"vga_blue", false,-1, 3,0);
    tracep->declBus(c+417,"vga_green", false,-1, 3,0);
    tracep->declBit(c+418,"vga_hsync", false,-1);
    tracep->declBit(c+419,"vga_vsync", false,-1);
    tracep->declBit(c+3,"uart_rx_async", false,-1);
    tracep->declBit(c+133,"uart_tx", false,-1);
    tracep->declBus(c+134,"buttons", false,-1, 4,0);
    tracep->declBus(c+135,"switches", false,-1, 15,0);
    tracep->declBit(c+136,"uart_rx", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+137,"test_interrupt", false,-1);
    tracep->declBit(c+27,"uart_interrupt", false,-1);
    tracep->declBit(c+138,"timer_interrupt", false,-1);
    tracep->declBit(c+39,"external_interrupt", false,-1);
    tracep->pushNamePrefix("button_conditioning ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("button_conditioning[0] ");
    tracep->pushNamePrefix("button_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+6,"async_in", false,-1);
    tracep->declBit(c+139,"sync_out", false,-1);
    tracep->declBus(c+140,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("button_conditioning[1] ");
    tracep->pushNamePrefix("button_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+7,"async_in", false,-1);
    tracep->declBit(c+141,"sync_out", false,-1);
    tracep->declBus(c+142,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("button_conditioning[2] ");
    tracep->pushNamePrefix("button_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+8,"async_in", false,-1);
    tracep->declBit(c+143,"sync_out", false,-1);
    tracep->declBus(c+144,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("button_conditioning[3] ");
    tracep->pushNamePrefix("button_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+9,"async_in", false,-1);
    tracep->declBit(c+145,"sync_out", false,-1);
    tracep->declBus(c+146,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("button_conditioning[4] ");
    tracep->pushNamePrefix("button_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+10,"async_in", false,-1);
    tracep->declBit(c+147,"sync_out", false,-1);
    tracep->declBus(c+148,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+39,"external_interrupt_in", false,-1);
    tracep->declBit(c+138,"timer_interrupt_in", false,-1);
    tracep->declBus(c+149,"if_id_instruction", false,-1, 31,0);
    tracep->declBus(c+150,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+151,"if_id_status", false,-1, 3,0);
    tracep->declBus(c+152,"id_ex_rs1_data", false,-1, 31,0);
    tracep->declBus(c+153,"id_ex_rs2_data", false,-1, 31,0);
    tracep->declBus(c+154,"id_ex_pc", false,-1, 31,0);
    tracep->declArray(c+155,"id_ex_instruction", false,-1, 64,0);
    tracep->declBus(c+158,"id_ex_status", false,-1, 3,0);
    tracep->declBus(c+159,"ex_mem_source_data", false,-1, 31,0);
    tracep->declBus(c+160,"ex_mem_rd_data", false,-1, 31,0);
    tracep->declArray(c+161,"ex_mem_instruction", false,-1, 64,0);
    tracep->declBus(c+164,"ex_mem_pc", false,-1, 31,0);
    tracep->declBus(c+165,"ex_mem_next_pc", false,-1, 31,0);
    tracep->declQuad(c+166,"ex_mem_forwarding", false,-1, 37,0);
    tracep->declBus(c+168,"ex_mem_status", false,-1, 3,0);
    tracep->declBus(c+169,"mem_wb_source_data", false,-1, 31,0);
    tracep->declBus(c+170,"mem_wb_rd_data", false,-1, 31,0);
    tracep->declArray(c+171,"mem_wb_instruction", false,-1, 64,0);
    tracep->declBus(c+174,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+175,"mem_wb_next_pc", false,-1, 31,0);
    tracep->declQuad(c+176,"mem_wb_forwarding", false,-1, 37,0);
    tracep->declBus(c+178,"mem_wb_status", false,-1, 3,0);
    tracep->declQuad(c+179,"wb_forwarding", false,-1, 37,0);
    tracep->declBus(c+40,"decode_backwards_out", false,-1, 1,0);
    tracep->declBus(c+41,"decode_jump_address_out", false,-1, 31,0);
    tracep->declBus(c+181,"execute_backwards_out", false,-1, 1,0);
    tracep->declBus(c+182,"execute_jump_address_out", false,-1, 31,0);
    tracep->declBus(c+42,"memory_backwards_out", false,-1, 1,0);
    tracep->declBus(c+43,"memory_jump_address_out", false,-1, 31,0);
    tracep->declBus(c+44,"writeback_backwards_out", false,-1, 1,0);
    tracep->declBus(c+45,"writeback_jump_address_out", false,-1, 31,0);
    tracep->declBus(c+455,"fetch_backwards_in", false,-1, 1,0);
    tracep->declBus(c+456,"fetch_jump_address_in", false,-1, 31,0);
    tracep->declBus(c+46,"decode_backwards_in", false,-1, 1,0);
    tracep->declBus(c+47,"decode_jump_address_in", false,-1, 31,0);
    tracep->declBus(c+48,"execute_backwards_in", false,-1, 1,0);
    tracep->declBus(c+49,"execute_jump_address_in", false,-1, 31,0);
    tracep->declBus(c+50,"memory_backwards_in", false,-1, 1,0);
    tracep->declBus(c+51,"memory_jump_address_in", false,-1, 31,0);
    tracep->declArray(c+183,"if_id_decoded_instruction", false,-1, 64,0);
    tracep->declBit(c+186,"id_rs1_used", false,-1);
    tracep->declBit(c+187,"id_rs2_used", false,-1);
    tracep->declBit(c+188,"late_result_use_hazard_raw", false,-1);
    tracep->declBit(c+52,"wb_redirect", false,-1);
    tracep->declBit(c+189,"ex_redirect", false,-1);
    tracep->declBus(c+45,"wb_redirect_addr", false,-1, 31,0);
    tracep->declBus(c+182,"ex_redirect_addr", false,-1, 31,0);
    tracep->declBit(c+28,"any_redirect", false,-1);
    tracep->declBit(c+53,"memory_busy_stall", false,-1);
    tracep->declBit(c+54,"late_result_use_hazard", false,-1);
    tracep->declBus(c+55,"decode_status_in", false,-1, 3,0);
    tracep->pushNamePrefix("decode_inst ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+149,"instruction_in", false,-1, 31,0);
    tracep->declBus(c+150,"program_counter_in", false,-1, 31,0);
    tracep->declQuad(c+166,"exe_forwarding_in", false,-1, 37,0);
    tracep->declQuad(c+176,"mem_forwarding_in", false,-1, 37,0);
    tracep->declQuad(c+179,"wb_forwarding_in", false,-1, 37,0);
    tracep->declBus(c+152,"rs1_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+153,"rs2_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+154,"program_counter_reg_out", false,-1, 31,0);
    tracep->declArray(c+155,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+55,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+158,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+46,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+40,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+47,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+41,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declArray(c+190,"decoded_instruction", false,-1, 64,0);
    tracep->declBus(c+193,"rs1_raw", false,-1, 31,0);
    tracep->declBus(c+194,"rs2_raw", false,-1, 31,0);
    tracep->declBus(c+195,"rs1_selected", false,-1, 31,0);
    tracep->declBus(c+196,"rs2_selected", false,-1, 31,0);
    tracep->declBit(c+197,"rs1_used", false,-1);
    tracep->declBit(c+198,"rs2_used", false,-1);
    tracep->declBit(c+56,"downstream_stall", false,-1);
    tracep->declBit(c+57,"downstream_jump", false,-1);
    tracep->pushNamePrefix("instruction_decoder_inst ");
    tracep->declBus(c+489,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"instruction_in", false,-1, 31,0);
    tracep->declArray(c+190,"instruction_out", false,-1, 64,0);
    tracep->declBus(c+199,"opcode", false,-1, 6,0);
    tracep->declBus(c+200,"rd", false,-1, 4,0);
    tracep->declBus(c+201,"funct3", false,-1, 2,0);
    tracep->declBus(c+202,"rs1", false,-1, 4,0);
    tracep->declBus(c+203,"rs2", false,-1, 4,0);
    tracep->declBus(c+204,"funct7", false,-1, 6,0);
    tracep->declBus(c+205,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+206,"imm_type", false,-1, 2,0);
    tracep->declBus(c+207,"imm_out", false,-1, 31,0);
    tracep->pushNamePrefix("immediate_generator_inst ");
    tracep->declBus(c+149,"instr", false,-1, 31,0);
    tracep->declBus(c+206,"imm_type", false,-1, 2,0);
    tracep->declBus(c+207,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register_file_inst ");
    tracep->declBus(c+489,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+490,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+208,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+209,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+210,"write_enable", false,-1);
    tracep->declBus(c+211,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+212,"rd_data", false,-1, 31,0);
    tracep->declBus(c+193,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+194,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+213+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+245,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("execute_inst ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+152,"rs1_data_in", false,-1, 31,0);
    tracep->declBus(c+153,"rs2_data_in", false,-1, 31,0);
    tracep->declArray(c+155,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+154,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+159,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+160,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+161,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+164,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+165,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+166,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+158,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+168,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+48,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+181,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+49,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+182,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBit(c+58,"downstream_stall", false,-1);
    tracep->declBit(c+59,"downstream_jump", false,-1);
    tracep->declBus(c+246,"alu_op", false,-1, 3,0);
    tracep->declBit(c+247,"alu_use_imm", false,-1);
    tracep->declBit(c+248,"is_branch", false,-1);
    tracep->declBit(c+249,"is_jump", false,-1);
    tracep->declBit(c+250,"is_jalr", false,-1);
    tracep->declBit(c+251,"is_load", false,-1);
    tracep->declBit(c+252,"is_store", false,-1);
    tracep->declBit(c+253,"is_fence_i", false,-1);
    tracep->declBit(c+254,"is_system_or_csr", false,-1);
    tracep->declBus(c+152,"alu_op1", false,-1, 31,0);
    tracep->declBus(c+255,"alu_op2", false,-1, 31,0);
    tracep->declBus(c+256,"alu_result", false,-1, 31,0);
    tracep->declBit(c+257,"alu_zero", false,-1);
    tracep->declBit(c+258,"take_branch", false,-1);
    tracep->declBus(c+259,"branch_target", false,-1, 31,0);
    tracep->declBus(c+260,"jump_target", false,-1, 31,0);
    tracep->declBus(c+261,"next_pc_comb", false,-1, 31,0);
    tracep->declBit(c+262,"branch_or_jump_redirect", false,-1);
    tracep->declBit(c+263,"fetch_misaligned", false,-1);
    tracep->declBus(c+264,"rd_value_comb", false,-1, 31,0);
    tracep->declBus(c+265,"source_data_comb", false,-1, 31,0);
    tracep->declBit(c+266,"forward_valid_comb", false,-1);
    tracep->declBus(c+267,"status_forward_comb", false,-1, 3,0);
    tracep->declBus(c+60,"status_backwards_comb", false,-1, 1,0);
    tracep->declBus(c+61,"jump_address_comb", false,-1, 31,0);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+489,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+152,"op1", false,-1, 31,0);
    tracep->declBus(c+255,"op2", false,-1, 31,0);
    tracep->declBus(c+246,"alu_op", false,-1, 3,0);
    tracep->declBus(c+256,"result", false,-1, 31,0);
    tracep->declBit(c+257,"zero", false,-1);
    tracep->declBus(c+268,"shamt", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch_inst ");
    tracep->declBus(c+489,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+149,"instruction_reg_out", false,-1, 31,0);
    tracep->declBus(c+150,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+151,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+455,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+456,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+491,"NOP_INSTR", false,-1, 31,0);
    tracep->declBus(c+442,"wb_state", false,-1, 0,0);
    tracep->declBus(c+443,"pc", false,-1, 31,0);
    tracep->declBus(c+444,"request_pc", false,-1, 31,0);
    tracep->declBit(c+269,"pending_valid", false,-1);
    tracep->declBus(c+270,"pending_instr", false,-1, 31,0);
    tracep->declBus(c+271,"pending_pc", false,-1, 31,0);
    tracep->declBus(c+272,"pending_status", false,-1, 3,0);
    tracep->declBit(c+273,"kill_response", false,-1);
    tracep->declBit(c+457,"downstream_stall", false,-1);
    tracep->declBit(c+458,"downstream_jump", false,-1);
    tracep->declBit(c+459,"response_valid", false,-1);
    tracep->declBit(c+436,"response_is_error", false,-1);
    tracep->declBit(c+460,"can_request", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_instruction_decoder ");
    tracep->declBus(c+489,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"instruction_in", false,-1, 31,0);
    tracep->declArray(c+183,"instruction_out", false,-1, 64,0);
    tracep->declBus(c+199,"opcode", false,-1, 6,0);
    tracep->declBus(c+200,"rd", false,-1, 4,0);
    tracep->declBus(c+201,"funct3", false,-1, 2,0);
    tracep->declBus(c+202,"rs1", false,-1, 4,0);
    tracep->declBus(c+203,"rs2", false,-1, 4,0);
    tracep->declBus(c+204,"funct7", false,-1, 6,0);
    tracep->declBus(c+205,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+274,"imm_type", false,-1, 2,0);
    tracep->declBus(c+275,"imm_out", false,-1, 31,0);
    tracep->pushNamePrefix("immediate_generator_inst ");
    tracep->declBus(c+149,"instr", false,-1, 31,0);
    tracep->declBus(c+274,"imm_type", false,-1, 2,0);
    tracep->declBus(c+275,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory_inst ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+159,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+160,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+161,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+164,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+165,"next_program_counter_in", false,-1, 31,0);
    tracep->declBus(c+169,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+170,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+171,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+174,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+175,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+176,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+168,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+178,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+50,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+42,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+51,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+43,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+276,"wb_state", false,-1, 1,0);
    tracep->declBit(c+62,"downstream_jump", false,-1);
    tracep->declBit(c+277,"is_load", false,-1);
    tracep->declBit(c+278,"is_store", false,-1);
    tracep->declBit(c+279,"valid_memory_op", false,-1);
    tracep->declBit(c+280,"valid_non_memory_op", false,-1);
    tracep->declBit(c+281,"access_misaligned", false,-1);
    tracep->declBus(c+282,"misaligned_status_comb", false,-1, 3,0);
    tracep->declBus(c+283,"byte_sel_comb", false,-1, 3,0);
    tracep->declBus(c+284,"store_data_comb", false,-1, 31,0);
    tracep->declArray(c+285,"active_instr", false,-1, 64,0);
    tracep->declBus(c+288,"active_source_data", false,-1, 31,0);
    tracep->declBus(c+289,"active_addr", false,-1, 31,0);
    tracep->declBus(c+290,"active_store_data", false,-1, 31,0);
    tracep->declBus(c+291,"active_pc", false,-1, 31,0);
    tracep->declBus(c+292,"active_next_pc", false,-1, 31,0);
    tracep->declBus(c+293,"active_sel", false,-1, 3,0);
    tracep->declBit(c+294,"active_is_load", false,-1);
    tracep->declBit(c+295,"active_is_store", false,-1);
    tracep->declBit(c+63,"launch_memory_op", false,-1);
    tracep->declBit(c+64,"wb_cyc_comb", false,-1);
    tracep->declBit(c+65,"wb_stb_comb", false,-1);
    tracep->declBus(c+66,"wb_adr_comb", false,-1, 31,0);
    tracep->declBus(c+67,"wb_sel_comb", false,-1, 3,0);
    tracep->declBit(c+68,"wb_we_comb", false,-1);
    tracep->declBus(c+69,"wb_dat_mosi_comb", false,-1, 31,0);
    tracep->declBus(c+461,"active_load_value_comb", false,-1, 31,0);
    tracep->declBus(c+462,"live_load_value_comb", false,-1, 31,0);
    tracep->declBus(c+296,"active_fault_status_comb", false,-1, 3,0);
    tracep->declBus(c+297,"live_fault_status_comb", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("writeback_inst ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+169,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+170,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+171,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+174,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+175,"next_program_counter_in", false,-1, 31,0);
    tracep->declBit(c+39,"external_interrupt_in", false,-1);
    tracep->declBit(c+138,"timer_interrupt_in", false,-1);
    tracep->declQuad(c+179,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+178,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+44,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+45,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+492,"CSR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+493,"CSR_MIE", false,-1, 11,0);
    tracep->declBus(c+494,"CSR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+495,"CSR_MEPC", false,-1, 11,0);
    tracep->declBus(c+496,"CSR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+497,"CSR_MTVAL", false,-1, 11,0);
    tracep->declBus(c+498,"CSR_MIP", false,-1, 11,0);
    tracep->declBus(c+499,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->declBus(c+500,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+500,"IRQ_MTIE_BIT", false,-1, 31,0);
    tracep->declBus(c+501,"IRQ_MEIE_BIT", false,-1, 31,0);
    tracep->declBus(c+502,"MCAUSE_INSTR_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+503,"MCAUSE_INSTR_FAULT", false,-1, 31,0);
    tracep->declBus(c+504,"MCAUSE_ILLEGAL", false,-1, 31,0);
    tracep->declBus(c+505,"MCAUSE_BREAKPOINT", false,-1, 31,0);
    tracep->declBus(c+506,"MCAUSE_LOAD_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+507,"MCAUSE_LOAD_FAULT", false,-1, 31,0);
    tracep->declBus(c+508,"MCAUSE_STORE_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+509,"MCAUSE_STORE_FAULT", false,-1, 31,0);
    tracep->declBus(c+510,"MCAUSE_ECALL_MMODE", false,-1, 31,0);
    tracep->declBus(c+511,"MCAUSE_TIMER_INTERRUPT", false,-1, 31,0);
    tracep->declBus(c+512,"MCAUSE_EXT_INTERRUPT", false,-1, 31,0);
    tracep->declBus(c+298,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+299,"csr_mie", false,-1, 31,0);
    tracep->declBus(c+300,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+301,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+302,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+303,"csr_mtval", false,-1, 31,0);
    tracep->declBus(c+304,"csr_mip", false,-1, 31,0);
    tracep->declBus(c+305,"csr_addr", false,-1, 11,0);
    tracep->declBit(c+306,"is_valid", false,-1);
    tracep->declBit(c+307,"is_csr", false,-1);
    tracep->declBit(c+308,"is_mret", false,-1);
    tracep->declBit(c+309,"is_ecall", false,-1);
    tracep->declBit(c+310,"is_ebreak", false,-1);
    tracep->declBus(c+311,"csr_read_data", false,-1, 31,0);
    tracep->declBus(c+312,"csr_write_data", false,-1, 31,0);
    tracep->declBit(c+313,"csr_write_enable", false,-1);
    tracep->declBit(c+314,"writes_rd_normal", false,-1);
    tracep->declBit(c+315,"pipeline_exception", false,-1);
    tracep->declBus(c+316,"exception_cause", false,-1, 31,0);
    tracep->declBus(c+317,"exception_tval", false,-1, 31,0);
    tracep->declBit(c+318,"global_interrupt_enable", false,-1);
    tracep->declBit(c+319,"timer_interrupt_enabled", false,-1);
    tracep->declBit(c+320,"external_interrupt_enabled", false,-1);
    tracep->declBit(c+321,"timer_interrupt_taken", false,-1);
    tracep->declBit(c+70,"external_interrupt_taken", false,-1);
    tracep->declBit(c+71,"interrupt_taken", false,-1);
    tracep->declBus(c+72,"interrupt_cause", false,-1, 31,0);
    tracep->declBit(c+73,"trap_taken", false,-1);
    tracep->declBus(c+74,"trap_cause", false,-1, 31,0);
    tracep->declBus(c+75,"trap_tval", false,-1, 31,0);
    tracep->declBit(c+76,"redirect_taken", false,-1);
    tracep->declBus(c+77,"redirect_address", false,-1, 31,0);
    tracep->declBit(c+78,"wb_writes_rd_comb", false,-1);
    tracep->declBus(c+79,"wb_rd_data_comb", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("peripheral_bus_interconnect ");
    tracep->declBus(c+513,"NUM_SLAVES", false,-1, 31,0);
    tracep->declArray(c+514,"SLAVE_ADDRESS", false,-1, 287,0);
    tracep->declArray(c+523,"SLAVE_SIZE", false,-1, 287,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+463,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+118,"ack", false,-1);
    tracep->declBit(c+464,"err", false,-1);
    tracep->declBus(c+80,"select", false,-1, 8,0);
    tracep->declBit(c+81,"invalid_address", false,-1);
    tracep->declBus(c+322,"count", false,-1, 7,0);
    tracep->declBit(c+323,"timeout", false,-1);
    tracep->declBus(c+119,"masked_ack", false,-1, 8,0);
    tracep->declBus(c+120,"masked_err", false,-1, 8,0);
    tracep->declArray(c+121,"masked_dat_miso", false,-1, 287,0);
    tracep->declBus(c+532,"slave_i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+533,"ADDRESS", false,-1, 31,0);
    tracep->declBus(c+534,"SIZE", false,-1, 31,0);
    tracep->declBit(c+452,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("switch_conditioning ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("switch_conditioning[0] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+11,"async_in", false,-1);
    tracep->declBit(c+324,"sync_out", false,-1);
    tracep->declBus(c+325,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[10] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+12,"async_in", false,-1);
    tracep->declBit(c+326,"sync_out", false,-1);
    tracep->declBus(c+327,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[11] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+13,"async_in", false,-1);
    tracep->declBit(c+328,"sync_out", false,-1);
    tracep->declBus(c+329,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[12] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+14,"async_in", false,-1);
    tracep->declBit(c+330,"sync_out", false,-1);
    tracep->declBus(c+331,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[13] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+15,"async_in", false,-1);
    tracep->declBit(c+332,"sync_out", false,-1);
    tracep->declBus(c+333,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[14] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+16,"async_in", false,-1);
    tracep->declBit(c+334,"sync_out", false,-1);
    tracep->declBus(c+335,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[15] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+17,"async_in", false,-1);
    tracep->declBit(c+336,"sync_out", false,-1);
    tracep->declBus(c+337,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[1] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+18,"async_in", false,-1);
    tracep->declBit(c+338,"sync_out", false,-1);
    tracep->declBus(c+339,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[2] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+19,"async_in", false,-1);
    tracep->declBit(c+340,"sync_out", false,-1);
    tracep->declBus(c+341,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[3] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+20,"async_in", false,-1);
    tracep->declBit(c+342,"sync_out", false,-1);
    tracep->declBus(c+343,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[4] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+21,"async_in", false,-1);
    tracep->declBit(c+344,"sync_out", false,-1);
    tracep->declBus(c+345,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[5] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+22,"async_in", false,-1);
    tracep->declBit(c+346,"sync_out", false,-1);
    tracep->declBus(c+347,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[6] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+23,"async_in", false,-1);
    tracep->declBit(c+348,"sync_out", false,-1);
    tracep->declBus(c+349,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[7] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+24,"async_in", false,-1);
    tracep->declBit(c+350,"sync_out", false,-1);
    tracep->declBus(c+351,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[8] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+25,"async_in", false,-1);
    tracep->declBit(c+352,"sync_out", false,-1);
    tracep->declBus(c+353,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("switch_conditioning[9] ");
    tracep->pushNamePrefix("switch_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+26,"async_in", false,-1);
    tracep->declBit(c+354,"sync_out", false,-1);
    tracep->declBus(c+355,"stages", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uart_rx_sync ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+3,"async_in", false,-1);
    tracep->declBit(c+136,"sync_out", false,-1);
    tracep->declBus(c+356,"stages", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_buttons ");
    tracep->declBus(c+535,"ADDRESS", false,-1, 31,0);
    tracep->declBus(c+536,"SIZE", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+134,"buttons", false,-1, 4,0);
    tracep->declBus(c+69,"wb_dat_mosi", false,-1, 31,0);
    tracep->declBit(c+29,"wb_access", false,-1);
    tracep->declBus(c+30,"wb_write_sel", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_leds ");
    tracep->declBus(c+537,"ADDRESS", false,-1, 31,0);
    tracep->declBus(c+536,"SIZE", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+130,"leds", false,-1, 15,0);
    tracep->declBus(c+130,"leds_reg", false,-1, 15,0);
    tracep->declBus(c+69,"wb_dat_mosi", false,-1, 31,0);
    tracep->declBit(c+31,"wb_access", false,-1);
    tracep->declBus(c+82,"wb_write_sel", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_segments ");
    tracep->declBus(c+538,"ADDRESS", false,-1, 31,0);
    tracep->declBus(c+536,"SIZE", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+131,"segments", false,-1, 7,0);
    tracep->declBus(c+132,"segments_select", false,-1, 3,0);
    tracep->declBus(c+357,"segments_reg", false,-1, 31,0);
    tracep->declBus(c+69,"wb_dat_mosi", false,-1, 31,0);
    tracep->declBit(c+32,"wb_access", false,-1);
    tracep->declBus(c+83,"wb_write_sel", false,-1, 3,0);
    tracep->declBus(c+132,"segments_select_reg", false,-1, 3,0);
    tracep->declBus(c+358,"timer", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_switches ");
    tracep->declBus(c+539,"ADDRESS", false,-1, 31,0);
    tracep->declBus(c+536,"SIZE", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+135,"switches", false,-1, 15,0);
    tracep->declBus(c+69,"wb_dat_mosi", false,-1, 31,0);
    tracep->declBit(c+33,"wb_access", false,-1);
    tracep->declBus(c+34,"wb_write_sel", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_test ");
    tracep->declBus(c+540,"ADDRESS", false,-1, 31,0);
    tracep->declBus(c+541,"SIZE", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+137,"interrupt", false,-1);
    tracep->declBus(c+84,"offset", false,-1, 31,0);
    tracep->declBus(c+359,"test_reg", false,-1, 31,0);
    tracep->declBit(c+360,"test_stb", false,-1);
    tracep->declBit(c+85,"test_sel", false,-1);
    tracep->declBit(c+85,"test_ack", false,-1);
    tracep->declBus(c+361,"interrupt_counter", false,-1, 31,0);
    tracep->declBit(c+362,"interrupt_enable", false,-1);
    tracep->declBit(c+86,"interrupt_sel", false,-1);
    tracep->declBit(c+86,"interrupt_ack", false,-1);
    tracep->declBus(c+363,"counter", false,-1, 31,0);
    tracep->declBit(c+87,"counter_sel", false,-1);
    tracep->declBit(c+87,"counter_ack", false,-1);
    tracep->declBus(c+364,"stall_reg", false,-1, 31,0);
    tracep->declBus(c+365,"stall_count", false,-1, 1,0);
    tracep->declBit(c+88,"stall_sel", false,-1);
    tracep->declBit(c+89,"stall_ack", false,-1);
    tracep->declBit(c+90,"error_sel", false,-1);
    tracep->declBit(c+35,"error_err", false,-1);
    tracep->declBit(c+91,"wishbone_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_timer ");
    tracep->declBus(c+542,"ADDRESS", false,-1, 31,0);
    tracep->declBus(c+541,"SIZE", false,-1, 31,0);
    tracep->declBus(c+543,"CLK_FREQUENCY_MHZ", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+138,"interrupt", false,-1);
    tracep->declBus(c+544,"ADDRESS_MTIMESTATUS", false,-1, 31,0);
    tracep->declBus(c+545,"ADDRESS_MTIME", false,-1, 31,0);
    tracep->declBus(c+546,"ADDRESS_MTIMEH", false,-1, 31,0);
    tracep->declBus(c+547,"ADDRESS_MTIMECMP", false,-1, 31,0);
    tracep->declBus(c+548,"ADDRESS_MTIMECMPH", false,-1, 31,0);
    tracep->declBus(c+549,"mtime_status", false,-1, 31,0);
    tracep->declQuad(c+366,"mtime", false,-1, 63,0);
    tracep->declQuad(c+368,"mtimecmp", false,-1, 63,0);
    tracep->declBus(c+69,"wb_dat_mosi", false,-1, 31,0);
    tracep->declBit(c+36,"wb_access", false,-1);
    tracep->declBus(c+92,"wb_write_sel", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_uart ");
    tracep->declBus(c+550,"ADDRESS", false,-1, 31,0);
    tracep->declBus(c+536,"SIZE", false,-1, 31,0);
    tracep->declBus(c+551,"BAUD_RATE", false,-1, 31,0);
    tracep->declDouble(c+465,"CLK_FREQUENCY_MHZ", false,-1);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+136,"rx_serial_in", false,-1);
    tracep->declBit(c+133,"tx_serial_out", false,-1);
    tracep->declBit(c+27,"interrupt", false,-1);
    tracep->declBus(c+552,"TX_EMPTY_IDX", false,-1, 31,0);
    tracep->declBus(c+553,"TX_IE_IDX", false,-1, 31,0);
    tracep->declBus(c+554,"TX_ERR_IDX", false,-1, 31,0);
    tracep->declBus(c+555,"RX_FULL_IDX", false,-1, 31,0);
    tracep->declBus(c+556,"RX_IE_IDX", false,-1, 31,0);
    tracep->declBus(c+557,"RX_ERR_IDX", false,-1, 31,0);
    tracep->declBus(c+558,"BUFFER_IDX", false,-1, 31,0);
    tracep->declBus(c+370,"tx_buffer_reg", false,-1, 7,0);
    tracep->declBit(c+371,"tx_err_reg", false,-1);
    tracep->declBit(c+372,"tx_intr_enable_reg", false,-1);
    tracep->declBit(c+373,"tx_buffer_empty", false,-1);
    tracep->declBus(c+374,"rx_buffer_reg", false,-1, 7,0);
    tracep->declBit(c+375,"rx_err_reg", false,-1);
    tracep->declBit(c+376,"rx_intr_enable_reg", false,-1);
    tracep->declBit(c+93,"rx_buffer_full", false,-1);
    tracep->declBit(c+94,"rx_intr_enable_sig", false,-1);
    tracep->declBit(c+95,"tx_intr_enable_sig", false,-1);
    tracep->declBit(c+377,"tx_start", false,-1);
    tracep->declBit(c+378,"tx_done", false,-1);
    tracep->declBit(c+379,"tx_active", false,-1);
    tracep->declBus(c+380,"tx_state", false,-1, 31,0);
    tracep->declBus(c+381,"rx_recieved_byte_sig", false,-1, 7,0);
    tracep->declBit(c+382,"rx_done", false,-1);
    tracep->declBit(c+383,"rx_receiver_err_sig", false,-1);
    tracep->declBus(c+384,"rx_state", false,-1, 31,0);
    tracep->declBus(c+96,"rx_buffer_sig", false,-1, 7,0);
    tracep->declBus(c+69,"wb_dat_mosi", false,-1, 31,0);
    tracep->declBit(c+97,"wb_access", false,-1);
    tracep->declBus(c+98,"wb_write_sel", false,-1, 3,0);
    tracep->declBit(c+99,"wb_read_rx_buffer", false,-1);
    tracep->declBit(c+100,"wb_write_tx_buffer", false,-1);
    tracep->declBit(c+101,"wb_read_rx_status", false,-1);
    tracep->declBit(c+102,"wb_write_rx_status", false,-1);
    tracep->declBit(c+103,"wb_read_tx_status", false,-1);
    tracep->declBit(c+104,"wb_write_tx_status", false,-1);
    tracep->pushNamePrefix("uart_rx_module ");
    tracep->declBus(c+559,"CLKS_PER_BIT", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+136,"rx_serial_in", false,-1);
    tracep->declBus(c+381,"rx_byte_out", false,-1, 7,0);
    tracep->declBit(c+382,"rx_done_out", false,-1);
    tracep->declBit(c+383,"rx_error_out", false,-1);
    tracep->declBus(c+381,"rx_byte_reg", false,-1, 7,0);
    tracep->declBus(c+385,"clk_count", false,-1, 31,0);
    tracep->declBus(c+386,"bit_idx", false,-1, 3,0);
    tracep->declBus(c+387,"rx_state", false,-1, 31,0);
    tracep->declBit(c+383,"rx_err_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_tx_module ");
    tracep->declBus(c+559,"CLKS_PER_BIT", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+377,"tx_start_in", false,-1);
    tracep->declBus(c+370,"tx_byte_in", false,-1, 7,0);
    tracep->declBit(c+133,"tx_serial_out", false,-1);
    tracep->declBit(c+378,"tx_done_out", false,-1);
    tracep->declBit(c+379,"tx_active_out", false,-1);
    tracep->declBus(c+388,"tx_byte_reg", false,-1, 7,0);
    tracep->declBus(c+389,"clk_count", false,-1, 31,0);
    tracep->declBus(c+390,"bit_idx", false,-1, 3,0);
    tracep->declBus(c+391,"tx_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_vga ");
    tracep->declBus(c+560,"ADDRESS", false,-1, 31,0);
    tracep->declBus(c+561,"SIZE", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+453,"clk_vga", false,-1);
    tracep->declBit(c+419,"vga_vsync", false,-1);
    tracep->declBit(c+418,"vga_hsync", false,-1);
    tracep->declBus(c+415,"vga_r", false,-1, 3,0);
    tracep->declBus(c+417,"vga_g", false,-1, 3,0);
    tracep->declBus(c+416,"vga_b", false,-1, 3,0);
    tracep->declBus(c+562,"LINE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+557,"LINE_FRONT_PORCH", false,-1, 31,0);
    tracep->declBus(c+563,"LINE_SYNC_PULSE", false,-1, 31,0);
    tracep->declBus(c+564,"LINE_BACK_PORCH", false,-1, 31,0);
    tracep->declBus(c+565,"FRAME_HEIGHT", false,-1, 31,0);
    tracep->declBus(c+566,"FRAME_FRONT_PORCH", false,-1, 31,0);
    tracep->declBus(c+567,"FRAME_SYNC_PULSE", false,-1, 31,0);
    tracep->declBus(c+568,"FRAME_BACK_PORCH", false,-1, 31,0);
    tracep->declBus(c+569,"PIXEL_COUNT", false,-1, 31,0);
    tracep->pushNamePrefix("PALETTE");
    tracep->declBus(c+570,"[0]", false,-1, 11,0);
    tracep->declBus(c+571,"[1]", false,-1, 11,0);
    tracep->declBus(c+572,"[2]", false,-1, 11,0);
    tracep->declBus(c+573,"[3]", false,-1, 11,0);
    tracep->declBus(c+574,"[4]", false,-1, 11,0);
    tracep->declBus(c+575,"[5]", false,-1, 11,0);
    tracep->declBus(c+576,"[6]", false,-1, 11,0);
    tracep->declBus(c+577,"[7]", false,-1, 11,0);
    tracep->declBus(c+578,"[8]", false,-1, 11,0);
    tracep->declBus(c+579,"[9]", false,-1, 11,0);
    tracep->declBus(c+580,"[10]", false,-1, 11,0);
    tracep->declBus(c+581,"[11]", false,-1, 11,0);
    tracep->declBus(c+582,"[12]", false,-1, 11,0);
    tracep->declBus(c+583,"[13]", false,-1, 11,0);
    tracep->declBus(c+584,"[14]", false,-1, 11,0);
    tracep->declBus(c+585,"[15]", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+420,"vga_read_data", false,-1, 31,0);
    tracep->declBus(c+421,"vga_address", false,-1, 15,0);
    tracep->declBus(c+105,"wishbone_we", false,-1, 3,0);
    tracep->declBus(c+586,"COLUMN_COUNTER_MAX", false,-1, 31,0);
    tracep->declBus(c+566,"COLUMN_COUNTER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+587,"LINE_COUNTER_MAX", false,-1, 31,0);
    tracep->declBus(c+566,"LINE_COUNTER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+588,"PIXEL_COUNTER_MAX", false,-1, 31,0);
    tracep->declBus(c+589,"PIXEL_COUNTER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+422,"column", false,-1, 9,0);
    tracep->declBus(c+423,"row", false,-1, 9,0);
    tracep->declBus(c+424,"pixel_idx", false,-1, 18,0);
    tracep->declBit(c+425,"hsync", false,-1);
    tracep->declBit(c+426,"vsync", false,-1);
    tracep->declBus(c+427,"pixel", false,-1, 3,0);
    tracep->declBit(c+428,"draw", false,-1);
    tracep->declBit(c+429,"draw_delayed", false,-1);
    tracep->declBus(c+430,"pixel_offset", false,-1, 4,0);
    tracep->declBus(c+431,"pixel_offset_delayed", false,-1, 4,0);
    tracep->declBus(c+432,"color", false,-1, 11,0);
    tracep->declBit(c+433,"hsync_delayed", false,-1);
    tracep->declBit(c+434,"vsync_delayed", false,-1);
    tracep->declBus(c+392,"state", false,-1, 31,0);
    tracep->declBus(c+106,"next_state", false,-1, 31,0);
    tracep->pushNamePrefix("vga_memory ");
    tracep->declBit(c+453,"clk_vga", false,-1);
    tracep->declBus(c+421,"vga_address", false,-1, 15,0);
    tracep->declBus(c+420,"vga_read_data", false,-1, 31,0);
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBus(c+107,"wb_address", false,-1, 15,0);
    tracep->declBus(c+393,"wb_read_data", false,-1, 31,0);
    tracep->declBus(c+105,"wb_write_enable", false,-1, 3,0);
    tracep->declBus(c+69,"wb_write_data", false,-1, 31,0);
    tracep->declBus(c+394,"wb_read_pipeline", false,-1, 31,0);
    tracep->declBus(c+435,"vga_read_pipeline", false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__instruction__0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+590,"NOP", false,-1, 64,0);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__constants__0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__constants__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+533,"MEMORY_START", false,-1, 31,0);
    tracep->declBus(c+534,"MEMORY_SIZE", false,-1, 31,0);
    tracep->declBus(c+537,"LEDS_START", false,-1, 31,0);
    tracep->declBus(c+536,"LEDS_SIZE", false,-1, 31,0);
    tracep->declBus(c+535,"BUTTONS_START", false,-1, 31,0);
    tracep->declBus(c+536,"BUTTONS_SIZE", false,-1, 31,0);
    tracep->declBus(c+539,"SWITCHES_START", false,-1, 31,0);
    tracep->declBus(c+536,"SWITCHES_SIZE", false,-1, 31,0);
    tracep->declBus(c+538,"SEGMENTS_START", false,-1, 31,0);
    tracep->declBus(c+536,"SEGMENTS_SIZE", false,-1, 31,0);
    tracep->declBus(c+550,"UART_START", false,-1, 31,0);
    tracep->declBus(c+536,"UART_SIZE", false,-1, 31,0);
    tracep->declBus(c+542,"TIMER_START", false,-1, 31,0);
    tracep->declBus(c+541,"TIMER_SIZE", false,-1, 31,0);
    tracep->declBus(c+560,"VGA_START", false,-1, 31,0);
    tracep->declBus(c+561,"VGA_SIZE", false,-1, 31,0);
    tracep->declBus(c+540,"TEST_START", false,-1, 31,0);
    tracep->declBus(c+541,"TEST_SIZE", false,-1, 31,0);
    tracep->declBus(c+593,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+594,"NOP", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__fetch_bus__0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__fetch_bus__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+445,"adr", false,-1, 31,0);
    tracep->declBus(c+446,"sel", false,-1, 3,0);
    tracep->declBus(c+447,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+437,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+448,"cyc", false,-1);
    tracep->declBit(c+449,"stb", false,-1);
    tracep->declBit(c+450,"we", false,-1);
    tracep->declBit(c+438,"ack", false,-1);
    tracep->declBit(c+436,"err", false,-1);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus__0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+66,"adr", false,-1, 31,0);
    tracep->declBus(c+67,"sel", false,-1, 3,0);
    tracep->declBus(c+69,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+463,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+64,"cyc", false,-1);
    tracep->declBit(c+65,"stb", false,-1);
    tracep->declBit(c+68,"we", false,-1);
    tracep->declBit(c+118,"ack", false,-1);
    tracep->declBit(c+464,"err", false,-1);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET____0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+66,"adr", false,-1, 31,0);
    tracep->declBus(c+67,"sel", false,-1, 3,0);
    tracep->declBus(c+69,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+37,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+64,"cyc", false,-1);
    tracep->declBit(c+108,"stb", false,-1);
    tracep->declBit(c+68,"we", false,-1);
    tracep->declBit(c+109,"ack", false,-1);
    tracep->declBit(c+38,"err", false,-1);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET____0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+66,"adr", false,-1, 31,0);
    tracep->declBus(c+67,"sel", false,-1, 3,0);
    tracep->declBus(c+69,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+393,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+64,"cyc", false,-1);
    tracep->declBit(c+110,"stb", false,-1);
    tracep->declBit(c+68,"we", false,-1);
    tracep->declBit(c+395,"ack", false,-1);
    tracep->declBit(c+396,"err", false,-1);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+66,"adr", false,-1, 31,0);
    tracep->declBus(c+67,"sel", false,-1, 3,0);
    tracep->declBus(c+69,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+397,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+64,"cyc", false,-1);
    tracep->declBit(c+111,"stb", false,-1);
    tracep->declBit(c+68,"we", false,-1);
    tracep->declBit(c+398,"ack", false,-1);
    tracep->declBit(c+399,"err", false,-1);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+66,"adr", false,-1, 31,0);
    tracep->declBus(c+67,"sel", false,-1, 3,0);
    tracep->declBus(c+69,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+400,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+64,"cyc", false,-1);
    tracep->declBit(c+112,"stb", false,-1);
    tracep->declBit(c+68,"we", false,-1);
    tracep->declBit(c+401,"ack", false,-1);
    tracep->declBit(c+402,"err", false,-1);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+66,"adr", false,-1, 31,0);
    tracep->declBus(c+67,"sel", false,-1, 3,0);
    tracep->declBus(c+69,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+403,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+64,"cyc", false,-1);
    tracep->declBit(c+113,"stb", false,-1);
    tracep->declBit(c+68,"we", false,-1);
    tracep->declBit(c+404,"ack", false,-1);
    tracep->declBit(c+405,"err", false,-1);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+66,"adr", false,-1, 31,0);
    tracep->declBus(c+67,"sel", false,-1, 3,0);
    tracep->declBus(c+69,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+406,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+64,"cyc", false,-1);
    tracep->declBit(c+114,"stb", false,-1);
    tracep->declBit(c+68,"we", false,-1);
    tracep->declBit(c+407,"ack", false,-1);
    tracep->declBit(c+408,"err", false,-1);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+66,"adr", false,-1, 31,0);
    tracep->declBus(c+67,"sel", false,-1, 3,0);
    tracep->declBus(c+69,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+409,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+64,"cyc", false,-1);
    tracep->declBit(c+115,"stb", false,-1);
    tracep->declBit(c+68,"we", false,-1);
    tracep->declBit(c+410,"ack", false,-1);
    tracep->declBit(c+411,"err", false,-1);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+66,"adr", false,-1, 31,0);
    tracep->declBus(c+67,"sel", false,-1, 3,0);
    tracep->declBus(c+69,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+412,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+64,"cyc", false,-1);
    tracep->declBit(c+116,"stb", false,-1);
    tracep->declBit(c+68,"we", false,-1);
    tracep->declBit(c+413,"ack", false,-1);
    tracep->declBit(c+414,"err", false,-1);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET____0(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+66,"adr", false,-1, 31,0);
    tracep->declBus(c+67,"sel", false,-1, 3,0);
    tracep->declBus(c+69,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+439,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+64,"cyc", false,-1);
    tracep->declBit(c+117,"stb", false,-1);
    tracep->declBit(c+68,"we", false,-1);
    tracep->declBit(c+440,"ack", false,-1);
    tracep->declBit(c+441,"err", false,-1);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_init_top(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_init_top\n"); );
    // Body
    Vtb_mcu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("constants ");
    Vtb_mcu___024root__trace_init_sub__TOP__constants__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instruction ");
    Vtb_mcu___024root__trace_init_sub__TOP__instruction__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tb_mcu ");
    tracep->pushNamePrefix("dut ");
    tracep->pushNamePrefix("cpu ");
    tracep->pushNamePrefix("fetch_inst ");
    tracep->pushNamePrefix("wb\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__fetch_bus__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory_fetch_port\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__fetch_bus__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory_inst ");
    tracep->pushNamePrefix("wb\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory_mem_port\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch_bus\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__fetch_bus__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bus_slaves[0]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bus_slaves[1]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bus_slaves[2]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bus_slaves[3]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bus_slaves[4]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bus_slaves[5]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bus_slaves[6]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bus_slaves[7]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bus_slaves[8]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_bus\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("peripheral_bus_interconnect ");
    tracep->pushNamePrefix("master\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("slaves[0]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("slaves[1]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("slaves[2]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("slaves[3]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("slaves[4]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("slaves[5]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("slaves[6]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("slaves[7]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("slaves[8]\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->pushNamePrefix("port_a\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__fetch_bus__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("port_b\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_buttons ");
    tracep->pushNamePrefix("wishbone\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_leds ");
    tracep->pushNamePrefix("wishbone\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_segments ");
    tracep->pushNamePrefix("wishbone\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_switches ");
    tracep->pushNamePrefix("wishbone\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_test ");
    tracep->pushNamePrefix("wishbone\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_timer ");
    tracep->pushNamePrefix("wishbone\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_uart ");
    tracep->pushNamePrefix("wishbone\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_vga ");
    tracep->pushNamePrefix("wishbone\211 ");
    Vtb_mcu___024root__trace_init_sub__TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_mcu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_mcu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_mcu___024root__trace_register(Vtb_mcu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_mcu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_mcu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_mcu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_mcu___024root__trace_full_sub_0(Vtb_mcu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_mcu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_full_top_0\n"); );
    // Init
    Vtb_mcu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mcu___024root*>(voidSelf);
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_mcu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<9>/*287:0*/ Vtb_mcu__ConstPool__CONST_hc3a067f1_0;
extern const VlWide<9>/*287:0*/ Vtb_mcu__ConstPool__CONST_hb5910dbb_0;

VL_ATTR_COLD void Vtb_mcu___024root__trace_full_sub_0(Vtb_mcu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h3441a5c4__0;
    // Body
    bufp->fullSData(oldp+1,(vlSelf->tb_mcu__DOT__switches_async),16);
    bufp->fullCData(oldp+2,(vlSelf->tb_mcu__DOT__buttons_async),5);
    bufp->fullBit(oldp+3,(vlSelf->tb_mcu__DOT__uart_rx_async));
    bufp->fullIData(oldp+4,(vlSelf->tb_mcu__DOT__pass_count),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_mcu__DOT__fail_count),32);
    bufp->fullBit(oldp+6,((1U & (IData)(vlSelf->tb_mcu__DOT__buttons_async))));
    bufp->fullBit(oldp+7,((1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                 >> 1U))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                 >> 2U))));
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                 >> 3U))));
    bufp->fullBit(oldp+10,((1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                  >> 4U))));
    bufp->fullBit(oldp+11,((1U & (IData)(vlSelf->tb_mcu__DOT__switches_async))));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 0xaU))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 0xeU))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 1U))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 2U))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 3U))));
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 4U))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 5U))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 6U))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 7U))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 8U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                  >> 9U))));
    bufp->fullBit(oldp+27,((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_full) 
                             & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_sig)) 
                            | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_empty) 
                               & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_sig)))));
    bufp->fullBit(oldp+28,(((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                                     ? 2U : 0U)) | 
                            (2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out)))));
    bufp->fullBit(oldp+29,((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                               & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.stb)) 
                              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.ack))) 
                             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.err))) 
                            & ((0x81000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                               & (0x81001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)))));
    bufp->fullCData(oldp+30,((((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                   & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.stb)) 
                                  & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.ack))) 
                                 & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.err))) 
                                & ((0x81000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                   & (0x81001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
                               & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))
                               ? (0xfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb))
                               : 0U)),4);
    bufp->fullBit(oldp+31,((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                               & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.stb)) 
                              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.ack))) 
                             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.err))) 
                            & ((0x80000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                               & (0x80001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)))));
    bufp->fullBit(oldp+32,((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                               & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.stb)) 
                              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.ack))) 
                             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.err))) 
                            & ((0x83000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                               & (0x83001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)))));
    bufp->fullBit(oldp+33,((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                               & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.stb)) 
                              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.ack))) 
                             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.err))) 
                            & ((0x82000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                               & (0x82001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)))));
    bufp->fullCData(oldp+34,((((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                   & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.stb)) 
                                  & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.ack))) 
                                 & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.err))) 
                                & ((0x82000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                   & (0x82001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
                               & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))
                               ? (0xfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb))
                               : 0U)),4);
    bufp->fullBit(oldp+35,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel) 
                            & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count)))));
    bufp->fullBit(oldp+36,((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                               & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.stb)) 
                              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.ack))) 
                             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.err))) 
                            & ((0x85000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                               & (0x85005U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)))));
    bufp->fullIData(oldp+37,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel)
                               ? vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter
                               : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel)
                                   ? vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter
                                   : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_ack)
                                       ? vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_reg
                                       : 0U)))),32);
    bufp->fullBit(oldp+38,(((((0x120000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                              & (0x120005U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)) 
                             & (~ ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel) 
                                   | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel) 
                                      | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel) 
                                         | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel) 
                                            | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_sel))))))) 
                            | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel) 
                               & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count))))));
    bufp->fullBit(oldp+39,(vlSelf->tb_mcu__DOT__dut__DOT__external_interrupt));
    bufp->fullCData(oldp+40,(((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))
                               ? 2U : ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))
                                        ? 1U : 0U))),2);
    bufp->fullIData(oldp+41,(((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))
                               ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in
                               : ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))
                                   ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in
                                   : 0U))),32);
    bufp->fullCData(oldp+42,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_backwards_out),2);
    bufp->fullIData(oldp+43,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_jump_address_out),32);
    bufp->fullCData(oldp+44,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                               ? 2U : 0U)),2);
    bufp->fullIData(oldp+45,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_jump_address_out),32);
    bufp->fullCData(oldp+46,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in),2);
    bufp->fullIData(oldp+47,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in),32);
    bufp->fullCData(oldp+48,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in),2);
    bufp->fullIData(oldp+49,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in),32);
    bufp->fullCData(oldp+50,(((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                                       ? 2U : 0U)) ? 2U
                               : 0U)),2);
    bufp->fullIData(oldp+51,(((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                                       ? 2U : 0U)) ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_jump_address_out
                               : 0U)),32);
    bufp->fullBit(oldp+52,((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                                    ? 2U : 0U))));
    bufp->fullBit(oldp+53,((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_backwards_out))));
    bufp->fullBit(oldp+54,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard));
    bufp->fullCData(oldp+55,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_status_in),4);
    bufp->fullBit(oldp+56,((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))));
    bufp->fullBit(oldp+57,((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))));
    bufp->fullBit(oldp+58,((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in))));
    bufp->fullBit(oldp+59,((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in))));
    bufp->fullCData(oldp+60,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__status_backwards_comb),2);
    bufp->fullIData(oldp+61,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__jump_address_comb),32);
    bufp->fullBit(oldp+62,((2U == ((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                                            ? 2U : 0U))
                                    ? 2U : 0U))));
    bufp->fullBit(oldp+63,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op));
    bufp->fullBit(oldp+64,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb));
    bufp->fullBit(oldp+65,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb));
    bufp->fullIData(oldp+66,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb),32);
    bufp->fullCData(oldp+67,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb),4);
    bufp->fullBit(oldp+68,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb));
    bufp->fullIData(oldp+69,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb),32);
    bufp->fullBit(oldp+70,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__external_interrupt_taken));
    bufp->fullBit(oldp+71,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_taken));
    bufp->fullIData(oldp+72,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_cause),32);
    bufp->fullBit(oldp+73,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken));
    bufp->fullIData(oldp+74,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_cause),32);
    bufp->fullIData(oldp+75,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_tval),32);
    bufp->fullBit(oldp+76,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken));
    bufp->fullIData(oldp+77,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_address),32);
    bufp->fullBit(oldp+78,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_writes_rd_comb));
    bufp->fullIData(oldp+79,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_rd_data_comb),32);
    bufp->fullSData(oldp+80,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select),9);
    bufp->fullBit(oldp+81,((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                             & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb)) 
                            & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select)))));
    bufp->fullCData(oldp+82,(vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__wb_write_sel),4);
    bufp->fullCData(oldp+83,(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__wb_write_sel),4);
    bufp->fullIData(oldp+84,((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb 
                              - (IData)(0x120000U))),32);
    bufp->fullBit(oldp+85,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel));
    bufp->fullBit(oldp+86,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel));
    bufp->fullBit(oldp+87,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel));
    bufp->fullBit(oldp+88,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_sel));
    bufp->fullBit(oldp+89,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_ack));
    bufp->fullBit(oldp+90,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel));
    bufp->fullBit(oldp+91,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel) 
                            | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel) 
                               | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel) 
                                  | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel) 
                                     | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_sel)))))));
    bufp->fullCData(oldp+92,(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel),4);
    bufp->fullBit(oldp+93,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_full));
    bufp->fullBit(oldp+94,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_sig));
    bufp->fullBit(oldp+95,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_sig));
    bufp->fullCData(oldp+96,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_sig),8);
    bufp->fullBit(oldp+97,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access));
    bufp->fullCData(oldp+98,((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
                               & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))
                               ? (0xfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb))
                               : 0U)),4);
    bufp->fullBit(oldp+99,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer));
    bufp->fullBit(oldp+100,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer));
    bufp->fullBit(oldp+101,((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
                              & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))) 
                             & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb) 
                                >> 2U))));
    bufp->fullBit(oldp+102,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_rx_status));
    bufp->fullBit(oldp+103,((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
                              & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))) 
                             & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb) 
                                >> 3U))));
    bufp->fullBit(oldp+104,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_status));
    bufp->fullCData(oldp+105,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__wishbone_we),4);
    bufp->fullIData(oldp+106,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__next_state),32);
    bufp->fullSData(oldp+107,((0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)),16);
    bufp->fullBit(oldp+108,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__.stb));
    bufp->fullBit(oldp+109,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel) 
                             | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel) 
                                | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel) 
                                   | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_ack))))));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET__.stb));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.stb));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.stb));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.stb));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.stb));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.stb));
    bufp->fullBit(oldp+116,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.stb));
    bufp->fullBit(oldp+117,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.stb));
    bufp->fullBit(oldp+118,((0U != (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack))));
    bufp->fullSData(oldp+119,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack),9);
    bufp->fullSData(oldp+120,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err),9);
    bufp->fullWData(oldp+121,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso),288);
    bufp->fullSData(oldp+130,(vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__leds_reg),16);
    bufp->fullCData(oldp+131,((0xffU & ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                         ? ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                  ? 0xffU
                                                  : 
                                                 (~ vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                  ? 
                                                 (~ 
                                                  (vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                                                   >> 8U))
                                                  : 0xffU))
                                             : ((2U 
                                                 & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                  ? 
                                                 (~ 
                                                  (vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                                                   >> 0x10U))
                                                  : 0xffU)
                                                 : 0xffU))
                                         : ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                  ? 
                                                 (~ 
                                                  (vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                                                   >> 0x18U))
                                                  : 0xffU)
                                                 : 0xffU)
                                             : 0xffU)))),8);
    bufp->fullCData(oldp+132,(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg),4);
    bufp->fullBit(oldp+133,(((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                             | ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                                | ((2U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                                   & ((3U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                                      | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg)))))));
    bufp->fullCData(oldp+134,(vlSelf->tb_mcu__DOT__dut__DOT__buttons),5);
    bufp->fullSData(oldp+135,(((0x8000U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages) 
                                           << 0xeU)) 
                               | ((0x4000U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages) 
                                              << 0xdU)) 
                                  | ((0x2000U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages) 
                                                 << 0xcU)) 
                                     | ((0x1000U & 
                                         ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages) 
                                          << 0xbU)) 
                                        | ((0x800U 
                                            & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages) 
                                               << 0xaU)) 
                                           | ((0x400U 
                                               & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages) 
                                                  << 9U)) 
                                              | ((0x200U 
                                                  & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages) 
                                                     << 8U)) 
                                                 | ((0x100U 
                                                     & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages) 
                                                        << 7U)) 
                                                    | ((0x80U 
                                                        & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages) 
                                                           << 6U)) 
                                                       | ((0x40U 
                                                           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages) 
                                                              << 5U)) 
                                                          | ((0x20U 
                                                              & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages) 
                                                                 << 4U)) 
                                                             | ((0x10U 
                                                                 & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages) 
                                                                    << 3U)) 
                                                                | ((8U 
                                                                    & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages) 
                                                                       << 2U)) 
                                                                   | ((4U 
                                                                       & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages) 
                                                                          << 1U)) 
                                                                      | ((2U 
                                                                          & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages)) 
                                                                         | (1U 
                                                                            & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages) 
                                                                               >> 1U)))))))))))))))))),16);
    bufp->fullBit(oldp+136,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullBit(oldp+137,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_enable) 
                             & (0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter))));
    bufp->fullBit(oldp+138,(vlSelf->tb_mcu__DOT__dut__DOT__timer_interrupt));
    bufp->fullBit(oldp+139,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__0__KET____DOT__button_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+140,(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__0__KET____DOT__button_sync__DOT__stages),2);
    bufp->fullBit(oldp+141,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__1__KET____DOT__button_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+142,(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__1__KET____DOT__button_sync__DOT__stages),2);
    bufp->fullBit(oldp+143,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__2__KET____DOT__button_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+144,(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__2__KET____DOT__button_sync__DOT__stages),2);
    bufp->fullBit(oldp+145,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__3__KET____DOT__button_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+146,(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__3__KET____DOT__button_sync__DOT__stages),2);
    bufp->fullBit(oldp+147,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__4__KET____DOT__button_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+148,(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__4__KET____DOT__button_sync__DOT__stages),2);
    bufp->fullIData(oldp+149,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction),32);
    bufp->fullIData(oldp+150,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc),32);
    bufp->fullCData(oldp+151,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status),4);
    bufp->fullIData(oldp+152,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data),32);
    bufp->fullIData(oldp+153,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data),32);
    bufp->fullIData(oldp+154,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc),32);
    bufp->fullWData(oldp+155,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction),65);
    bufp->fullCData(oldp+158,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status),4);
    bufp->fullIData(oldp+159,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data),32);
    bufp->fullIData(oldp+160,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data),32);
    bufp->fullWData(oldp+161,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction),65);
    bufp->fullIData(oldp+164,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc),32);
    bufp->fullIData(oldp+165,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc),32);
    bufp->fullQData(oldp+166,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding),38);
    bufp->fullCData(oldp+168,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status),4);
    bufp->fullIData(oldp+169,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data),32);
    bufp->fullIData(oldp+170,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data),32);
    bufp->fullWData(oldp+171,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction),65);
    bufp->fullIData(oldp+174,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+175,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc),32);
    bufp->fullQData(oldp+176,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding),38);
    bufp->fullCData(oldp+178,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status),4);
    bufp->fullQData(oldp+179,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding),38);
    bufp->fullCData(oldp+181,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out),2);
    bufp->fullIData(oldp+182,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_out),32);
    bufp->fullWData(oldp+183,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction),65);
    bufp->fullBit(oldp+186,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used));
    bufp->fullBit(oldp+187,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used));
    bufp->fullBit(oldp+188,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw));
    bufp->fullBit(oldp+189,((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out))));
    bufp->fullWData(oldp+190,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction),65);
    bufp->fullIData(oldp+193,(((0U == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                                >> 0x11U)))
                                ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs
                               [(0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                          >> 0x11U))])),32);
    bufp->fullIData(oldp+194,(((0U == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                                >> 0xcU)))
                                ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs
                               [(0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                          >> 0xcU))])),32);
    bufp->fullIData(oldp+195,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected),32);
    bufp->fullIData(oldp+196,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected),32);
    bufp->fullBit(oldp+197,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_used));
    bufp->fullBit(oldp+198,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_used));
    bufp->fullCData(oldp+199,((0x7fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)),7);
    bufp->fullCData(oldp+200,((0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                        >> 7U))),5);
    bufp->fullCData(oldp+201,((7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+202,((0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+203,((0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+204,((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+205,((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+206,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type),3);
    bufp->fullIData(oldp+207,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out),32);
    bufp->fullCData(oldp+208,((0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        >> 0x11U))),5);
    bufp->fullCData(oldp+209,((0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        >> 0xcU))),5);
    bufp->fullBit(oldp+210,((1U & (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+211,((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding))),5);
    bufp->fullIData(oldp+212,((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                                       >> 5U))),32);
    bufp->fullIData(oldp+213,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+214,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+215,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+216,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+217,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+218,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+219,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+220,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+221,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+222,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+223,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+224,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+225,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+226,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+227,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+228,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+229,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+230,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+231,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+232,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+233,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+234,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+235,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+236,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+237,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+238,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+239,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+240,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+241,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+242,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+243,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+244,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[31]),32);
    bufp->fullIData(oldp+245,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__i),32);
    bufp->fullCData(oldp+246,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op),4);
    bufp->fullBit(oldp+247,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm));
    bufp->fullBit(oldp+248,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch));
    bufp->fullBit(oldp+249,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump));
    bufp->fullBit(oldp+250,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jalr));
    bufp->fullBit(oldp+251,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_load));
    bufp->fullBit(oldp+252,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store));
    bufp->fullBit(oldp+253,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_fence_i));
    bufp->fullBit(oldp+254,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr));
    bufp->fullIData(oldp+255,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2),32);
    bufp->fullIData(oldp+256,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result),32);
    bufp->fullBit(oldp+257,((0U == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)));
    bufp->fullBit(oldp+258,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__take_branch));
    bufp->fullIData(oldp+259,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_target),32);
    bufp->fullIData(oldp+260,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jalr)
                                ? (0xfffffffeU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                                  + 
                                                  vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]))
                                : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_target)),32);
    bufp->fullIData(oldp+261,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__next_pc_comb),32);
    bufp->fullBit(oldp+262,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_or_jump_redirect));
    bufp->fullBit(oldp+263,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__fetch_misaligned));
    bufp->fullIData(oldp+264,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__rd_value_comb),32);
    bufp->fullIData(oldp+265,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store)
                                ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data
                                : ((((0x29U == (0x3fU 
                                                & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                      >> 0x1bU)))) 
                                     | (0x2aU == (0x3fU 
                                                  & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                      << 5U) 
                                                     | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                        >> 0x1bU))))) 
                                    | (0x2bU == (0x3fU 
                                                 & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                     << 5U) 
                                                    | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                       >> 0x1bU)))))
                                    ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data
                                    : ((((0x2cU == 
                                          (0x3fU & 
                                           ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                               >> 0x1bU)))) 
                                         | (0x2dU == 
                                            (0x3fU 
                                             & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                   >> 0x1bU))))) 
                                        | (0x2eU == 
                                           (0x3fU & 
                                            ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                              << 5U) 
                                             | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                >> 0x1bU)))))
                                        ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]
                                        : 0U)))),32);
    bufp->fullBit(oldp+266,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__forward_valid_comb));
    bufp->fullCData(oldp+267,(((0U != (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status))
                                ? (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status)
                                : ((0x31U == (0x3fU 
                                              & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                  << 5U) 
                                                 | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                    >> 0x1bU))))
                                    ? 4U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__fetch_misaligned)
                                             ? 2U : 0U)))),4);
    bufp->fullCData(oldp+268,((0x1fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)),5);
    bufp->fullBit(oldp+269,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid));
    bufp->fullIData(oldp+270,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_instr),32);
    bufp->fullIData(oldp+271,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_pc),32);
    bufp->fullCData(oldp+272,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_status),4);
    bufp->fullBit(oldp+273,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__kill_response));
    bufp->fullCData(oldp+274,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type),3);
    bufp->fullIData(oldp+275,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_out),32);
    bufp->fullCData(oldp+276,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state),2);
    bufp->fullBit(oldp+277,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load));
    bufp->fullBit(oldp+278,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store));
    bufp->fullBit(oldp+279,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__valid_memory_op));
    bufp->fullBit(oldp+280,(((~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0)) 
                             & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status)))));
    bufp->fullBit(oldp+281,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__access_misaligned));
    bufp->fullCData(oldp+282,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load)
                                ? 5U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store)
                                         ? 7U : 0U))),4);
    bufp->fullCData(oldp+283,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb),4);
    bufp->fullIData(oldp+284,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__store_data_comb),32);
    bufp->fullWData(oldp+285,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr),65);
    bufp->fullIData(oldp+288,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data),32);
    bufp->fullIData(oldp+289,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr),32);
    bufp->fullIData(oldp+290,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_store_data),32);
    bufp->fullIData(oldp+291,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc),32);
    bufp->fullIData(oldp+292,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc),32);
    bufp->fullCData(oldp+293,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_sel),4);
    bufp->fullBit(oldp+294,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load));
    bufp->fullBit(oldp+295,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_store));
    bufp->fullCData(oldp+296,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load)
                                ? 6U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_store)
                                         ? 8U : 0U))),4);
    bufp->fullCData(oldp+297,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load)
                                ? 6U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store)
                                         ? 8U : 0U))),4);
    bufp->fullIData(oldp+298,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+299,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie),32);
    bufp->fullIData(oldp+300,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+301,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mepc),32);
    bufp->fullIData(oldp+302,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mcause),32);
    bufp->fullIData(oldp+303,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtval),32);
    bufp->fullIData(oldp+304,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mip),32);
    bufp->fullSData(oldp+305,((0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])),12);
    bufp->fullBit(oldp+306,((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))));
    bufp->fullBit(oldp+307,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__is_csr));
    bufp->fullBit(oldp+308,((0x2fU == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+309,((0x27U == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+310,((0x28U == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                   >> 0x1bU))))));
    bufp->fullIData(oldp+311,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data),32);
    bufp->fullIData(oldp+312,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data),32);
    bufp->fullBit(oldp+313,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_enable));
    bufp->fullBit(oldp+314,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__writes_rd_normal));
    bufp->fullBit(oldp+315,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__pipeline_exception));
    bufp->fullIData(oldp+316,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause),32);
    bufp->fullIData(oldp+317,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval),32);
    bufp->fullBit(oldp+318,((1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
                                   >> 3U))));
    bufp->fullBit(oldp+319,((1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie 
                                   >> 7U))));
    bufp->fullBit(oldp+320,((1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie 
                                   >> 0xbU))));
    bufp->fullBit(oldp+321,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__timer_interrupt_taken));
    bufp->fullCData(oldp+322,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__count),8);
    bufp->fullBit(oldp+323,((0xffU == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__count))));
    bufp->fullBit(oldp+324,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+325,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+326,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+327,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+328,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+329,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+330,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+331,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+332,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+333,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+334,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+335,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+336,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+337,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+338,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+339,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+340,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+341,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+342,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+343,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+344,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+345,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+346,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+347,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+348,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+349,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+350,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+351,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+352,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+353,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullBit(oldp+354,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages) 
                                   >> 1U))));
    bufp->fullCData(oldp+355,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages),2);
    bufp->fullCData(oldp+356,(vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages),2);
    bufp->fullIData(oldp+357,(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg),32);
    bufp->fullIData(oldp+358,(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer),32);
    bufp->fullIData(oldp+359,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_reg),32);
    bufp->fullBit(oldp+360,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_stb));
    bufp->fullIData(oldp+361,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter),32);
    bufp->fullBit(oldp+362,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_enable));
    bufp->fullIData(oldp+363,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter),32);
    bufp->fullIData(oldp+364,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_reg),32);
    bufp->fullCData(oldp+365,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count),2);
    bufp->fullQData(oldp+366,(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime),64);
    bufp->fullQData(oldp+368,(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp),64);
    bufp->fullCData(oldp+370,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg),8);
    bufp->fullBit(oldp+371,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_err_reg));
    bufp->fullBit(oldp+372,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_reg));
    bufp->fullBit(oldp+373,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_empty));
    bufp->fullCData(oldp+374,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg),8);
    bufp->fullBit(oldp+375,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_err_reg));
    bufp->fullBit(oldp+376,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_reg));
    bufp->fullBit(oldp+377,((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state)));
    bufp->fullBit(oldp+378,((5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state)));
    bufp->fullBit(oldp+379,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active));
    bufp->fullIData(oldp+380,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state),32);
    bufp->fullCData(oldp+381,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg),8);
    bufp->fullBit(oldp+382,((5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)));
    bufp->fullBit(oldp+383,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_err_reg));
    bufp->fullIData(oldp+384,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state),32);
    bufp->fullIData(oldp+385,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count),32);
    bufp->fullCData(oldp+386,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx),4);
    bufp->fullIData(oldp+387,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state),32);
    bufp->fullCData(oldp+388,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg),8);
    bufp->fullIData(oldp+389,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count),32);
    bufp->fullCData(oldp+390,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx),4);
    bufp->fullIData(oldp+391,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state),32);
    bufp->fullIData(oldp+392,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state),32);
    bufp->fullIData(oldp+393,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT____Vcellout__vga_memory__wb_read_data),32);
    bufp->fullIData(oldp+394,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__wb_read_pipeline),32);
    bufp->fullBit(oldp+395,((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state)));
    bufp->fullBit(oldp+396,((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state)));
    bufp->fullIData(oldp+397,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.dat_miso),32);
    bufp->fullBit(oldp+398,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.ack));
    bufp->fullBit(oldp+399,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.err));
    bufp->fullIData(oldp+400,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.dat_miso),32);
    bufp->fullBit(oldp+401,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.ack));
    bufp->fullBit(oldp+402,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.err));
    bufp->fullIData(oldp+403,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.dat_miso),32);
    bufp->fullBit(oldp+404,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.ack));
    bufp->fullBit(oldp+405,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.err));
    bufp->fullIData(oldp+406,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.dat_miso),32);
    bufp->fullBit(oldp+407,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.ack));
    bufp->fullBit(oldp+408,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.err));
    bufp->fullIData(oldp+409,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.dat_miso),32);
    bufp->fullBit(oldp+410,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.ack));
    bufp->fullBit(oldp+411,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.err));
    bufp->fullIData(oldp+412,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.dat_miso),32);
    bufp->fullBit(oldp+413,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.ack));
    bufp->fullBit(oldp+414,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.err));
    bufp->fullCData(oldp+415,(vlSelf->tb_mcu__DOT__vga_red),4);
    bufp->fullCData(oldp+416,(vlSelf->tb_mcu__DOT__vga_blue),4);
    bufp->fullCData(oldp+417,(vlSelf->tb_mcu__DOT__vga_green),4);
    bufp->fullBit(oldp+418,(vlSelf->tb_mcu__DOT__vga_hsync));
    bufp->fullBit(oldp+419,(vlSelf->tb_mcu__DOT__vga_vsync));
    bufp->fullIData(oldp+420,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_read_data),32);
    bufp->fullSData(oldp+421,((0xffffU & (vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx 
                                          >> 3U))),16);
    bufp->fullSData(oldp+422,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__column),10);
    bufp->fullSData(oldp+423,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__row),10);
    bufp->fullIData(oldp+424,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx),19);
    bufp->fullBit(oldp+425,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__hsync));
    bufp->fullBit(oldp+426,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vsync));
    bufp->fullCData(oldp+427,((0xfU & (vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_read_data 
                                       >> (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset_delayed)))),4);
    bufp->fullBit(oldp+428,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__draw));
    bufp->fullBit(oldp+429,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__draw_delayed));
    bufp->fullCData(oldp+430,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset),5);
    bufp->fullCData(oldp+431,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset_delayed),5);
    bufp->fullSData(oldp+432,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__color),12);
    bufp->fullBit(oldp+433,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__hsync_delayed));
    bufp->fullBit(oldp+434,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vsync_delayed));
    bufp->fullIData(oldp+435,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__vga_read_pipeline),32);
    bufp->fullBit(oldp+436,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.err));
    bufp->fullIData(oldp+437,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.dat_miso),32);
    bufp->fullBit(oldp+438,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.ack));
    bufp->fullIData(oldp+439,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.dat_miso),32);
    bufp->fullBit(oldp+440,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.ack));
    bufp->fullBit(oldp+441,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.err));
    bufp->fullBit(oldp+442,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state));
    bufp->fullIData(oldp+443,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pc),32);
    bufp->fullIData(oldp+444,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__request_pc),32);
    bufp->fullIData(oldp+445,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.adr),32);
    bufp->fullCData(oldp+446,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.sel),4);
    bufp->fullIData(oldp+447,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.dat_mosi),32);
    bufp->fullBit(oldp+448,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.cyc));
    bufp->fullBit(oldp+449,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.stb));
    bufp->fullBit(oldp+450,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.we));
    bufp->fullBit(oldp+451,(vlSelf->tb_mcu__DOT__clk));
    bufp->fullBit(oldp+452,(vlSelf->tb_mcu__DOT__clk_mem));
    bufp->fullBit(oldp+453,(vlSelf->tb_mcu__DOT__clk_vga));
    bufp->fullBit(oldp+454,(vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceRd));
    bufp->fullCData(oldp+455,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in),2);
    bufp->fullIData(oldp+456,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in),32);
    bufp->fullBit(oldp+457,((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in))));
    bufp->fullBit(oldp+458,((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in))));
    bufp->fullBit(oldp+459,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__response_valid));
    bufp->fullBit(oldp+460,((1U & (~ ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state) 
                                      | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid) 
                                         | ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in)) 
                                            | (2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in)))))))));
    bufp->fullIData(oldp+461,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_load_value_comb),32);
    bufp->fullIData(oldp+462,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__live_load_value_comb),32);
    bufp->fullIData(oldp+463,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso),32);
    bufp->fullBit(oldp+464,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__err));
    bufp->fullDouble(oldp+465,(100.0));
    bufp->fullIData(oldp+467,(0x1c200U),32);
    bufp->fullIData(oldp+468,(0x10000U),32);
    bufp->fullIData(oldp+469,(0x10200U),32);
    bufp->fullIData(oldp+470,(0x10204U),32);
    bufp->fullIData(oldp+471,(0x10208U),32);
    bufp->fullIData(oldp+472,(0x1020cU),32);
    bufp->fullIData(oldp+473,(0x10210U),32);
    bufp->fullIData(oldp+474,(0x10214U),32);
    bufp->fullIData(oldp+475,(0x10218U),32);
    bufp->fullSData(oldp+476,(0U),12);
    bufp->fullSData(oldp+477,(4U),12);
    bufp->fullSData(oldp+478,(8U),12);
    bufp->fullSData(oldp+479,(0xcU),12);
    bufp->fullSData(oldp+480,(0x10U),12);
    bufp->fullSData(oldp+481,(0x14U),12);
    bufp->fullSData(oldp+482,(0x18U),12);
    bufp->fullSData(oldp+483,(0xcafeU),16);
    bufp->fullCData(oldp+484,(0x16U),5);
    bufp->fullSData(oldp+485,(0xa5a5U),16);
    bufp->fullIData(oldp+486,(0x1234abcdU),32);
    bufp->fullIData(oldp+487,(0xcafebabeU),32);
    bufp->fullIData(oldp+488,(0x2000U),32);
    bufp->fullIData(oldp+489,(0x20U),32);
    bufp->fullIData(oldp+490,(5U),32);
    bufp->fullIData(oldp+491,(0x13U),32);
    bufp->fullSData(oldp+492,(0x300U),12);
    bufp->fullSData(oldp+493,(0x304U),12);
    bufp->fullSData(oldp+494,(0x305U),12);
    bufp->fullSData(oldp+495,(0x341U),12);
    bufp->fullSData(oldp+496,(0x342U),12);
    bufp->fullSData(oldp+497,(0x343U),12);
    bufp->fullSData(oldp+498,(0x344U),12);
    bufp->fullIData(oldp+499,(3U),32);
    bufp->fullIData(oldp+500,(7U),32);
    bufp->fullIData(oldp+501,(0xbU),32);
    bufp->fullIData(oldp+502,(0U),32);
    bufp->fullIData(oldp+503,(1U),32);
    bufp->fullIData(oldp+504,(2U),32);
    bufp->fullIData(oldp+505,(3U),32);
    bufp->fullIData(oldp+506,(4U),32);
    bufp->fullIData(oldp+507,(5U),32);
    bufp->fullIData(oldp+508,(6U),32);
    bufp->fullIData(oldp+509,(7U),32);
    bufp->fullIData(oldp+510,(0xbU),32);
    bufp->fullIData(oldp+511,(0x80000007U),32);
    bufp->fullIData(oldp+512,(0x8000000bU),32);
    bufp->fullIData(oldp+513,(9U),32);
    bufp->fullWData(oldp+514,(Vtb_mcu__ConstPool__CONST_hc3a067f1_0),288);
    bufp->fullWData(oldp+523,(Vtb_mcu__ConstPool__CONST_hb5910dbb_0),288);
    bufp->fullIData(oldp+532,(9U),32);
    bufp->fullIData(oldp+533,(0x10000U),32);
    bufp->fullIData(oldp+534,(0x2000U),32);
    bufp->fullIData(oldp+535,(0x81000U),32);
    bufp->fullIData(oldp+536,(1U),32);
    bufp->fullIData(oldp+537,(0x80000U),32);
    bufp->fullIData(oldp+538,(0x83000U),32);
    bufp->fullIData(oldp+539,(0x82000U),32);
    bufp->fullIData(oldp+540,(0x120000U),32);
    bufp->fullIData(oldp+541,(5U),32);
    bufp->fullIData(oldp+542,(0x85000U),32);
    bufp->fullIData(oldp+543,(0x64U),32);
    bufp->fullIData(oldp+544,(0x85000U),32);
    bufp->fullIData(oldp+545,(0x85001U),32);
    bufp->fullIData(oldp+546,(0x85002U),32);
    bufp->fullIData(oldp+547,(0x85003U),32);
    bufp->fullIData(oldp+548,(0x85004U),32);
    bufp->fullIData(oldp+549,(0xaU),32);
    bufp->fullIData(oldp+550,(0x84000U),32);
    bufp->fullIData(oldp+551,(0x1c200U),32);
    bufp->fullIData(oldp+552,(0x1aU),32);
    bufp->fullIData(oldp+553,(0x19U),32);
    bufp->fullIData(oldp+554,(0x18U),32);
    bufp->fullIData(oldp+555,(0x12U),32);
    bufp->fullIData(oldp+556,(0x11U),32);
    bufp->fullIData(oldp+557,(0x10U),32);
    bufp->fullIData(oldp+558,(0U),32);
    bufp->fullIData(oldp+559,(0x364U),32);
    bufp->fullIData(oldp+560,(0x90000U),32);
    bufp->fullIData(oldp+561,(0x9600U),32);
    bufp->fullIData(oldp+562,(0x280U),32);
    bufp->fullIData(oldp+563,(0x60U),32);
    bufp->fullIData(oldp+564,(0x30U),32);
    bufp->fullIData(oldp+565,(0x1e0U),32);
    bufp->fullIData(oldp+566,(0xaU),32);
    bufp->fullIData(oldp+567,(2U),32);
    bufp->fullIData(oldp+568,(0x21U),32);
    bufp->fullIData(oldp+569,(0x4b000U),32);
    bufp->fullSData(oldp+570,(0U),12);
    bufp->fullSData(oldp+571,(0xaU),12);
    bufp->fullSData(oldp+572,(0xa0U),12);
    bufp->fullSData(oldp+573,(0xaaU),12);
    bufp->fullSData(oldp+574,(0xa00U),12);
    bufp->fullSData(oldp+575,(0xa0aU),12);
    bufp->fullSData(oldp+576,(0xa50U),12);
    bufp->fullSData(oldp+577,(0xaaaU),12);
    bufp->fullSData(oldp+578,(0x555U),12);
    bufp->fullSData(oldp+579,(0x55fU),12);
    bufp->fullSData(oldp+580,(0x5f5U),12);
    bufp->fullSData(oldp+581,(0x5ffU),12);
    bufp->fullSData(oldp+582,(0xf55U),12);
    bufp->fullSData(oldp+583,(0xf5fU),12);
    bufp->fullSData(oldp+584,(0xff5U),12);
    bufp->fullSData(oldp+585,(0xfffU),12);
    bufp->fullIData(oldp+586,(0x31fU),32);
    bufp->fullIData(oldp+587,(0x20cU),32);
    bufp->fullIData(oldp+588,(0x4afffU),32);
    bufp->fullIData(oldp+589,(0x13U),32);
    __Vtemp_h3441a5c4__0[0U] = 0U;
    __Vtemp_h3441a5c4__0[1U] = 0x90000000U;
    __Vtemp_h3441a5c4__0[2U] = 0U;
    bufp->fullWData(oldp+590,(__Vtemp_h3441a5c4__0),65);
    bufp->fullIData(oldp+593,(0x40000U),32);
    bufp->fullIData(oldp+594,(0x13U),32);
}
