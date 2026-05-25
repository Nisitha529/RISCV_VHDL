// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top_cpu__Syms.h"


VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_sub__TOP__0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_top_cpu ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBit(c+150,"external_interrupt_in", false,-1);
    tracep->declBit(c+150,"timer_interrupt_in", false,-1);
    tracep->declBus(c+1,"if_id_instr", false,-1, 31,0);
    tracep->declBus(c+2,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+3,"id_ex_rs1", false,-1, 31,0);
    tracep->declBus(c+4,"id_ex_rs2", false,-1, 31,0);
    tracep->declBus(c+5,"id_ex_pc", false,-1, 31,0);
    tracep->declArray(c+6,"id_ex_instr", false,-1, 64,0);
    tracep->declBus(c+9,"ex_mem_source_data", false,-1, 31,0);
    tracep->declBus(c+10,"ex_mem_rd_data", false,-1, 31,0);
    tracep->declBus(c+5,"ex_mem_pc", false,-1, 31,0);
    tracep->declBus(c+11,"ex_mem_next_pc", false,-1, 31,0);
    tracep->declArray(c+6,"ex_mem_instr", false,-1, 64,0);
    tracep->declQuad(c+12,"ex_mem_fwd", false,-1, 37,0);
    tracep->declBus(c+14,"mem_wb_source_data", false,-1, 31,0);
    tracep->declBus(c+15,"mem_wb_rd_data", false,-1, 31,0);
    tracep->declBus(c+16,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+17,"mem_wb_next_pc", false,-1, 31,0);
    tracep->declArray(c+18,"mem_wb_instr", false,-1, 64,0);
    tracep->declQuad(c+21,"mem_wb_fwd", false,-1, 37,0);
    tracep->declQuad(c+23,"wb_fwd", false,-1, 37,0);
    tracep->declBus(c+25,"decode_backwards_out", false,-1, 1,0);
    tracep->declBus(c+26,"execute_backwards_out", false,-1, 1,0);
    tracep->declBus(c+27,"memory_backwards_out", false,-1, 1,0);
    tracep->declBus(c+151,"writeback_backwards_out", false,-1, 1,0);
    tracep->declBus(c+28,"decode_jump_addr", false,-1, 31,0);
    tracep->declBus(c+29,"execute_jump_addr", false,-1, 31,0);
    tracep->declBus(c+30,"memory_jump_addr", false,-1, 31,0);
    tracep->declBus(c+152,"writeback_jump_addr", false,-1, 31,0);
    tracep->declBit(c+31,"stall", false,-1);
    tracep->declBit(c+31,"load_use_hazard", false,-1);
    tracep->declBus(c+32,"decode_backwards_in", false,-1, 1,0);
    tracep->pushNamePrefix("decode_inst ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+1,"instruction_in", false,-1, 31,0);
    tracep->declBus(c+2,"program_counter_in", false,-1, 31,0);
    tracep->declQuad(c+12,"exe_forwarding_in", false,-1, 37,0);
    tracep->declQuad(c+21,"mem_forwarding_in", false,-1, 37,0);
    tracep->declQuad(c+23,"wb_forwarding_in", false,-1, 37,0);
    tracep->declBus(c+3,"rs1_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+4,"rs2_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+5,"program_counter_reg_out", false,-1, 31,0);
    tracep->declArray(c+6,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+153,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+33,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+32,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+25,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+29,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+28,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+34,"opcode", false,-1, 6,0);
    tracep->declBus(c+35,"rd", false,-1, 4,0);
    tracep->declBus(c+36,"rs1", false,-1, 4,0);
    tracep->declBus(c+37,"rs2", false,-1, 4,0);
    tracep->declBus(c+38,"funct3", false,-1, 2,0);
    tracep->declBus(c+39,"funct7", false,-1, 6,0);
    tracep->declBus(c+40,"imm_type", false,-1, 2,0);
    tracep->declBus(c+41,"imm_out", false,-1, 31,0);
    tracep->declBus(c+42,"rs1_raw", false,-1, 31,0);
    tracep->declBus(c+43,"rs2_raw", false,-1, 31,0);
    tracep->declBus(c+44,"rs1_fwd", false,-1, 31,0);
    tracep->declBus(c+45,"rs2_fwd", false,-1, 31,0);
    tracep->declArray(c+46,"instr_packed", false,-1, 64,0);
    tracep->declBit(c+49,"downstream_stall", false,-1);
    tracep->declBit(c+50,"downstream_jump", false,-1);
    tracep->declBit(c+49,"stall", false,-1);
    tracep->declBit(c+50,"flush", false,-1);
    tracep->declBit(c+51,"rs1_used", false,-1);
    tracep->declBit(c+52,"rs2_used", false,-1);
    tracep->declBus(c+53,"csr_addr", false,-1, 11,0);
    tracep->pushNamePrefix("decoder_inst ");
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+34,"opcode", false,-1, 6,0);
    tracep->declBus(c+35,"rd", false,-1, 4,0);
    tracep->declBus(c+38,"funct3", false,-1, 2,0);
    tracep->declBus(c+36,"rs1", false,-1, 4,0);
    tracep->declBus(c+37,"rs2", false,-1, 4,0);
    tracep->declBus(c+39,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_inst ");
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+40,"imm_type", false,-1, 2,0);
    tracep->declBus(c+41,"imm_out", false,-1, 31,0);
    tracep->declBus(c+54,"imm_i", false,-1, 31,0);
    tracep->declBus(c+55,"imm_s", false,-1, 31,0);
    tracep->declBus(c+56,"imm_b", false,-1, 31,0);
    tracep->declBus(c+57,"imm_u", false,-1, 31,0);
    tracep->declBus(c+58,"imm_j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_inst ");
    tracep->declBus(c+154,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+155,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+36,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+37,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+59,"write_enable", false,-1);
    tracep->declBus(c+60,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+15,"rd_data", false,-1, 31,0);
    tracep->declBus(c+42,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+43,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+61+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+93,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("execute_inst ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+3,"rs1_data_in", false,-1, 31,0);
    tracep->declBus(c+4,"rs2_data_in", false,-1, 31,0);
    tracep->declArray(c+6,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+5,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+9,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+10,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+6,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+5,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+11,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+12,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+153,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+94,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+27,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+26,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+30,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+29,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+95,"alu_op", false,-1, 3,0);
    tracep->declBit(c+96,"alu_use_imm", false,-1);
    tracep->declBit(c+97,"is_branch", false,-1);
    tracep->declBit(c+98,"is_jump", false,-1);
    tracep->declBit(c+99,"is_store", false,-1);
    tracep->declBit(c+100,"is_load", false,-1);
    tracep->declBit(c+101,"is_jalr", false,-1);
    tracep->declBus(c+3,"op1", false,-1, 31,0);
    tracep->declBus(c+102,"op2", false,-1, 31,0);
    tracep->declBus(c+103,"alu_result", false,-1, 31,0);
    tracep->declBit(c+104,"alu_zero", false,-1);
    tracep->declBit(c+105,"take_branch", false,-1);
    tracep->declBus(c+106,"jump_target", false,-1, 31,0);
    tracep->declBus(c+11,"next_pc", false,-1, 31,0);
    tracep->declBus(c+10,"rd_value", false,-1, 31,0);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+154,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"op1", false,-1, 31,0);
    tracep->declBus(c+102,"op2", false,-1, 31,0);
    tracep->declBus(c+95,"alu_op", false,-1, 3,0);
    tracep->declBus(c+103,"result", false,-1, 31,0);
    tracep->declBit(c+104,"zero", false,-1);
    tracep->declBus(c+107,"shamt", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch_inst ");
    tracep->declBus(c+154,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+1,"instruction_reg_out", false,-1, 31,0);
    tracep->declBus(c+2,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+108,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+25,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+28,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+156,"NOP_INSTR", false,-1, 31,0);
    tracep->declBus(c+109,"wb_state", false,-1, 0,0);
    tracep->declBus(c+110,"pc", false,-1, 31,0);
    tracep->declBus(c+111,"request_pc", false,-1, 31,0);
    tracep->declBit(c+112,"pending_valid", false,-1);
    tracep->declBus(c+113,"pending_instr", false,-1, 31,0);
    tracep->declBus(c+114,"pending_pc", false,-1, 31,0);
    tracep->declBus(c+115,"pending_status", false,-1, 3,0);
    tracep->declBit(c+116,"kill_response", false,-1);
    tracep->declBit(c+117,"downstream_stall", false,-1);
    tracep->declBit(c+118,"downstream_jump", false,-1);
    tracep->declBit(c+146,"response_valid", false,-1);
    tracep->declBit(c+157,"response_is_error", false,-1);
    tracep->declBit(c+119,"can_request", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory_inst ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+9,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+10,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+6,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+5,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+11,"next_program_counter_in", false,-1, 31,0);
    tracep->declBus(c+14,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+15,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+18,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+16,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+17,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+21,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+153,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+120,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+151,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+27,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+152,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+30,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBit(c+121,"is_load", false,-1);
    tracep->declBit(c+122,"is_store", false,-1);
    tracep->declBus(c+123,"mem_width", false,-1, 5,0);
    tracep->declBus(c+124,"wb_sel", false,-1, 3,0);
    tracep->declBus(c+125,"wb_state", false,-1, 1,0);
    tracep->declBus(c+147,"load_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("writeback_inst ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+14,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+15,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+18,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+16,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+17,"next_program_counter_in", false,-1, 31,0);
    tracep->declBit(c+150,"external_interrupt_in", false,-1);
    tracep->declBit(c+150,"timer_interrupt_in", false,-1);
    tracep->declQuad(c+23,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+153,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+151,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+152,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBit(c+126,"writes_rd", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+148,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+149,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_sub__TOP__instruction__0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+158,"NOP", false,-1, 64,0);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_sub__TOP__constants__0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_sub__TOP__constants__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+161,"MEMORY_START", false,-1, 31,0);
    tracep->declBus(c+162,"MEMORY_SIZE", false,-1, 31,0);
    tracep->declBus(c+163,"LEDS_START", false,-1, 31,0);
    tracep->declBus(c+164,"LEDS_SIZE", false,-1, 31,0);
    tracep->declBus(c+165,"BUTTONS_START", false,-1, 31,0);
    tracep->declBus(c+164,"BUTTONS_SIZE", false,-1, 31,0);
    tracep->declBus(c+166,"SWITCHES_START", false,-1, 31,0);
    tracep->declBus(c+164,"SWITCHES_SIZE", false,-1, 31,0);
    tracep->declBus(c+167,"SEGMENTS_START", false,-1, 31,0);
    tracep->declBus(c+164,"SEGMENTS_SIZE", false,-1, 31,0);
    tracep->declBus(c+168,"UART_START", false,-1, 31,0);
    tracep->declBus(c+164,"UART_SIZE", false,-1, 31,0);
    tracep->declBus(c+169,"TIMER_START", false,-1, 31,0);
    tracep->declBus(c+170,"TIMER_SIZE", false,-1, 31,0);
    tracep->declBus(c+171,"VGA_START", false,-1, 31,0);
    tracep->declBus(c+172,"VGA_SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"TEST_START", false,-1, 31,0);
    tracep->declBus(c+170,"TEST_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+175,"NOP", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__wb_imem__0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__wb_imem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+127,"adr", false,-1, 31,0);
    tracep->declBus(c+128,"sel", false,-1, 3,0);
    tracep->declBus(c+129,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+139,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+130,"cyc", false,-1);
    tracep->declBit(c+131,"stb", false,-1);
    tracep->declBit(c+132,"we", false,-1);
    tracep->declBit(c+140,"ack", false,-1);
    tracep->declBit(c+157,"err", false,-1);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__wb_dmem__0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__wb_dmem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+133,"adr", false,-1, 31,0);
    tracep->declBus(c+134,"sel", false,-1, 3,0);
    tracep->declBus(c+135,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+141,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+136,"cyc", false,-1);
    tracep->declBit(c+137,"stb", false,-1);
    tracep->declBit(c+138,"we", false,-1);
    tracep->declBit(c+142,"ack", false,-1);
    tracep->declBit(c+143,"err", false,-1);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_top(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_top\n"); );
    // Body
    Vtb_top_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("constants ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__constants__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instruction ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__instruction__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tb_top_cpu ");
    tracep->pushNamePrefix("dut ");
    tracep->pushNamePrefix("fetch_inst ");
    tracep->pushNamePrefix("wb\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__wb_imem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory_fetch_port\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__wb_imem__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory_inst ");
    tracep->pushNamePrefix("wb\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__wb_dmem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory_mem_port\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__wb_dmem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_dmem\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__wb_dmem__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_imem\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__wb_imem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_register(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_top_cpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_top_cpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_top_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_full_sub_0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_full_top_0\n"); );
    // Init
    Vtb_top_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_cpu___024root*>(voidSelf);
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top_cpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_full_sub_0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h3441a5c4__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc),32);
    bufp->fullIData(oldp+3,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1),32);
    bufp->fullIData(oldp+4,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc),32);
    bufp->fullWData(oldp+6,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr),65);
    bufp->fullIData(oldp+9,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data),32);
    bufp->fullIData(oldp+10,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value),32);
    bufp->fullIData(oldp+11,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump)
                               ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr)
                                   ? (0xfffffffeU & 
                                      (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                                       + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U]))
                                   : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                                      + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U]))
                               : (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                                   & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch))
                                   ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                                      + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U])
                                   : ((IData)(4U) + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc)))),32);
    bufp->fullQData(oldp+12,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_fwd),38);
    bufp->fullIData(oldp+14,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data),32);
    bufp->fullIData(oldp+15,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data),32);
    bufp->fullIData(oldp+16,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc),32);
    bufp->fullWData(oldp+18,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr),65);
    bufp->fullQData(oldp+21,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_fwd),38);
    bufp->fullQData(oldp+23,(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_fwd),38);
    bufp->fullCData(oldp+25,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out),2);
    bufp->fullCData(oldp+26,(((((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                                & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch)) 
                               | (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump))
                               ? 2U : 0U)),2);
    bufp->fullCData(oldp+27,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_backwards_out),2);
    bufp->fullIData(oldp+28,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_addr),32);
    bufp->fullIData(oldp+29,(((((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                                & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch)) 
                               | (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump))
                               ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump)
                                   ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr)
                                       ? (0xfffffffeU 
                                          & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                                             + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U]))
                                       : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                                          + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U]))
                                   : (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                                       & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch))
                                       ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                                          + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U])
                                       : ((IData)(4U) 
                                          + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc)))
                               : 0U)),32);
    bufp->fullIData(oldp+30,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_jump_addr),32);
    bufp->fullBit(oldp+31,(vlSelf->tb_top_cpu__DOT__dut__DOT__load_use_hazard));
    bufp->fullCData(oldp+32,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in),2);
    bufp->fullCData(oldp+33,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__status_forwards_out),4);
    bufp->fullCData(oldp+34,((0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)),7);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+36,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+37,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+38,((7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+39,((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+40,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_type),3);
    bufp->fullIData(oldp+41,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_out),32);
    bufp->fullIData(oldp+42,(((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                               >> 0xfU)))
                               ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs
                              [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+43,(((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                               >> 0x14U)))
                               ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs
                              [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+44,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_fwd),32);
    bufp->fullIData(oldp+45,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_fwd),32);
    bufp->fullWData(oldp+46,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed),65);
    bufp->fullBit(oldp+49,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))));
    bufp->fullBit(oldp+50,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))));
    bufp->fullBit(oldp+51,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used));
    bufp->fullBit(oldp+52,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used));
    bufp->fullSData(oldp+53,((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                              >> 0x14U)),12);
    bufp->fullIData(oldp+54,((((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+55,((((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+56,((((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                           >> 0x1fU))) 
                               << 0xdU) | ((0x1000U 
                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                       >> 7U))))))),32);
    bufp->fullIData(oldp+57,((0xfffff000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)),32);
    bufp->fullIData(oldp+58,((((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                           >> 0x1fU))) 
                               << 0x15U) | ((0x100000U 
                                             & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                >> 0xbU)) 
                                            | ((0xff000U 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr) 
                                               | ((0x800U 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                        >> 0x14U))))))),32);
    bufp->fullBit(oldp+59,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT____Vcellinp__regfile_inst__write_enable));
    bufp->fullCData(oldp+60,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U] 
                                       >> 0x16U))),5);
    bufp->fullIData(oldp+61,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+62,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+63,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+64,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+65,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+66,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+67,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+68,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+69,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+70,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+71,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+72,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+73,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+74,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+75,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+76,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+77,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+78,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+79,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+80,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+81,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+82,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+83,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+84,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+85,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+86,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+87,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+88,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+89,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+90,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+91,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+92,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[31]),32);
    bufp->fullIData(oldp+93,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__i),32);
    bufp->fullCData(oldp+94,(((0x31U == (0x3fU & ((
                                                   vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[2U] 
                                                   << 5U) 
                                                  | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                                     >> 0x1bU))))
                               ? 4U : 0U)),4);
    bufp->fullCData(oldp+95,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op),4);
    bufp->fullBit(oldp+96,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm));
    bufp->fullBit(oldp+97,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch));
    bufp->fullBit(oldp+98,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump));
    bufp->fullBit(oldp+99,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store));
    bufp->fullBit(oldp+100,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load));
    bufp->fullBit(oldp+101,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr));
    bufp->fullIData(oldp+102,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2),32);
    bufp->fullIData(oldp+103,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result),32);
    bufp->fullBit(oldp+104,((0U == vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)));
    bufp->fullBit(oldp+105,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch));
    bufp->fullIData(oldp+106,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U]),32);
    bufp->fullCData(oldp+107,((0x1fU & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2)),5);
    bufp->fullCData(oldp+108,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__status_forwards_out),4);
    bufp->fullBit(oldp+109,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state));
    bufp->fullIData(oldp+110,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc),32);
    bufp->fullIData(oldp+111,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc),32);
    bufp->fullBit(oldp+112,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid));
    bufp->fullIData(oldp+113,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr),32);
    bufp->fullIData(oldp+114,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc),32);
    bufp->fullCData(oldp+115,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status),4);
    bufp->fullBit(oldp+116,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response));
    bufp->fullBit(oldp+117,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out))));
    bufp->fullBit(oldp+118,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out))));
    bufp->fullBit(oldp+119,((1U & (~ ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state) 
                                      | ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid) 
                                         | ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out)) 
                                            | (2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out)))))))));
    bufp->fullCData(oldp+120,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__status_forwards_out),4);
    bufp->fullBit(oldp+121,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load));
    bufp->fullBit(oldp+122,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store));
    bufp->fullCData(oldp+123,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__mem_width),6);
    bufp->fullCData(oldp+124,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel),4);
    bufp->fullCData(oldp+125,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state),2);
    bufp->fullBit(oldp+126,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd));
    bufp->fullIData(oldp+127,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.adr),32);
    bufp->fullCData(oldp+128,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.sel),4);
    bufp->fullIData(oldp+129,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.dat_mosi),32);
    bufp->fullBit(oldp+130,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.cyc));
    bufp->fullBit(oldp+131,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.stb));
    bufp->fullBit(oldp+132,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.we));
    bufp->fullIData(oldp+133,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.adr),32);
    bufp->fullCData(oldp+134,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.sel),4);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_mosi),32);
    bufp->fullBit(oldp+136,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.cyc));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.stb));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.we));
    bufp->fullIData(oldp+139,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.dat_miso),32);
    bufp->fullBit(oldp+140,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.ack));
    bufp->fullIData(oldp+141,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso),32);
    bufp->fullBit(oldp+142,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.ack));
    bufp->fullBit(oldp+143,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.err));
    bufp->fullBit(oldp+144,(vlSelf->tb_top_cpu__DOT__clk));
    bufp->fullBit(oldp+145,(vlSelf->tb_top_cpu__DOT__rst));
    bufp->fullBit(oldp+146,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid));
    bufp->fullIData(oldp+147,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__load_data),32);
    bufp->fullIData(oldp+148,(vlSelf->tb_top_cpu__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+149,(vlSelf->tb_top_cpu__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+150,(0U));
    bufp->fullCData(oldp+151,(0U),2);
    bufp->fullIData(oldp+152,(0U),32);
    bufp->fullCData(oldp+153,(0U),4);
    bufp->fullIData(oldp+154,(0x20U),32);
    bufp->fullIData(oldp+155,(5U),32);
    bufp->fullIData(oldp+156,(0x13U),32);
    bufp->fullBit(oldp+157,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.err));
    __Vtemp_h3441a5c4__0[0U] = 0U;
    __Vtemp_h3441a5c4__0[1U] = 0x90000000U;
    __Vtemp_h3441a5c4__0[2U] = 0U;
    bufp->fullWData(oldp+158,(__Vtemp_h3441a5c4__0),65);
    bufp->fullIData(oldp+161,(0x10000U),32);
    bufp->fullIData(oldp+162,(0x2000U),32);
    bufp->fullIData(oldp+163,(0x80000U),32);
    bufp->fullIData(oldp+164,(1U),32);
    bufp->fullIData(oldp+165,(0x81000U),32);
    bufp->fullIData(oldp+166,(0x82000U),32);
    bufp->fullIData(oldp+167,(0x83000U),32);
    bufp->fullIData(oldp+168,(0x84000U),32);
    bufp->fullIData(oldp+169,(0x85000U),32);
    bufp->fullIData(oldp+170,(5U),32);
    bufp->fullIData(oldp+171,(0x90000U),32);
    bufp->fullIData(oldp+172,(0x9600U),32);
    bufp->fullIData(oldp+173,(0x120000U),32);
    bufp->fullIData(oldp+174,(0x40000U),32);
    bufp->fullIData(oldp+175,(0x13U),32);
}
