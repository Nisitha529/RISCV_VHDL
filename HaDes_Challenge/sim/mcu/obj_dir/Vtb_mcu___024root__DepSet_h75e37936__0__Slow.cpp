// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mcu.h for the primary calling header

#include "verilated.h"

#include "Vtb_mcu___024root.h"

VL_ATTR_COLD void Vtb_mcu___024root___eval_static__TOP(Vtb_mcu___024root* vlSelf);

VL_ATTR_COLD void Vtb_mcu___024root___eval_static(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_static\n"); );
    // Body
    Vtb_mcu___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_mcu___024root___eval_static__TOP(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_mcu__DOT__dut__DOT__rst = 1U;
}

VL_ATTR_COLD void Vtb_mcu___024root___eval_final(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_mcu___024root___eval_triggers__stl(Vtb_mcu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mcu___024root___dump_triggers__stl(Vtb_mcu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_mcu___024root___eval_stl(Vtb_mcu___024root* vlSelf);

VL_ATTR_COLD void Vtb_mcu___024root___eval_settle(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_mcu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_mcu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_mcu.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_mcu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mcu___024root___dump_triggers__stl(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_mcu.dut.cpu.memory_inst.launch_memory_op)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mcu___024root___stl_sequent__TOP__0(Vtb_mcu___024root* vlSelf);
void Vtb_mcu___024root___act_sequent__TOP__0(Vtb_mcu___024root* vlSelf);

VL_ATTR_COLD void Vtb_mcu___024root___eval_stl(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtb_mcu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        Vtb_mcu___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mcu___024root___dump_triggers__act(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_mcu.dut.cpu.memory_inst.launch_memory_op)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_mcu.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_mcu.clk_mem)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_mcu.clk_vga)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge tb_mcu.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mcu___024root___dump_triggers__nba(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_mcu.dut.cpu.memory_inst.launch_memory_op)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_mcu.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_mcu.clk_mem)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_mcu.clk_vga)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge tb_mcu.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mcu___024root___ctor_var_reset(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_mcu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__clk_mem = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__clk_vga = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__switches_async = VL_RAND_RESET_I(16);
    vlSelf->tb_mcu__DOT__segments_select = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__buttons_async = VL_RAND_RESET_I(5);
    vlSelf->tb_mcu__DOT__vga_red = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__vga_blue = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__vga_green = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__vga_hsync = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__vga_vsync = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__uart_rx_async = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__pass_count = 0;
    vlSelf->tb_mcu__DOT__fail_count = 0;
    vlSelf->tb_mcu__DOT__dut__DOT__buttons = VL_RAND_RESET_I(5);
    vlSelf->tb_mcu__DOT__dut__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceRd = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceEn = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceVal = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__timer_interrupt = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__external_interrupt = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding = VL_RAND_RESET_Q(38);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding = VL_RAND_RESET_Q(38);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding = VL_RAND_RESET_Q(38);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_out = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_backwards_out = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_jump_address_out = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_jump_address_out = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_status_in = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__request_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_instr = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_status = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__kill_response = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__response_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__can_request = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_used = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_used = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_fence_i = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2 = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__take_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__next_pc_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_or_jump_redirect = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__fetch_misaligned = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__rd_value_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__forward_valid_comb = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__status_backwards_comb = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__jump_address_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__valid_memory_op = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__access_misaligned = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__store_data_comb = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_store_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_sel = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_store = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_load_value_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__live_load_value_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_fault_status_comb = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0 = 0;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtvec = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mepc = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mcause = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtval = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mip = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__is_csr = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__writes_rd_normal = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__pipeline_exception = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__timer_interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__external_interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_cause = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_cause = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_tval = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_address = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_writes_rd_comb = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_rd_data_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_hc0a4638a__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_hcb080270__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_h8f4b082b__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__err = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select = VL_RAND_RESET_I(9);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack = VL_RAND_RESET_I(9);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(288, vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__leds_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__wb_write_sel = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__wb_write_sel = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_err_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_err_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_full = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_sig = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_sig = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 0;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state = 0;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_sig = VL_RAND_RESET_I(8);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_rx_status = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_status = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state = 0;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state = 0;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_err_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_read_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__wishbone_we = VL_RAND_RESET_I(4);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT____Vcellout__vga_memory__wb_read_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__column = VL_RAND_RESET_I(10);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__row = VL_RAND_RESET_I(10);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx = VL_RAND_RESET_I(19);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__hsync = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vsync = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__draw = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__draw_delayed = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset = VL_RAND_RESET_I(5);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset_delayed = VL_RAND_RESET_I(5);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__color = VL_RAND_RESET_I(12);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__hsync_delayed = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vsync_delayed = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state = 0;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__next_state = 0;
    for (int __Vi0 = 0; __Vi0 < 38400; ++__Vi0) {
        vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__wb_read_pipeline = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__vga_read_pipeline = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h6855bf08__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h683e2b0c__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h6852d903__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h68574cc7__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_stb = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__0__KET____DOT__button_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__1__KET____DOT__button_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__2__KET____DOT__button_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__3__KET____DOT__button_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__4__KET____DOT__button_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_instr);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_uses_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_uses_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_instr);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_uses_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_uses_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_instr);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_uses_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_uses_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v0 = 0;
    vlSelf->__Vdlyvlsb__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v0 = 0;
    vlSelf->__Vdlyvval__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v0 = 0;
    vlSelf->__Vdlyvdim0__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v1 = 0;
    vlSelf->__Vdlyvlsb__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v1 = 0;
    vlSelf->__Vdlyvval__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v1 = 0;
    vlSelf->__Vdlyvdim0__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v2 = 0;
    vlSelf->__Vdlyvlsb__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v2 = 0;
    vlSelf->__Vdlyvval__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v2 = 0;
    vlSelf->__Vdlyvdim0__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v3 = 0;
    vlSelf->__Vdlyvlsb__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v3 = 0;
    vlSelf->__Vdlyvval__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v3 = 0;
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk_mem = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk_vga = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
