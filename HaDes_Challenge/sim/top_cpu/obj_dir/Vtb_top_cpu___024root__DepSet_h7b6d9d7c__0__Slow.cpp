// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_cpu.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_cpu___024root.h"

VL_ATTR_COLD void Vtb_top_cpu___024root___eval_static(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_top_cpu___024root___eval_final(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_top_cpu___024root___eval_triggers__stl(Vtb_top_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_cpu___024root___dump_triggers__stl(Vtb_top_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_top_cpu___024root___eval_stl(Vtb_top_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_cpu___024root___eval_settle(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_top_cpu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_top_cpu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_top_cpu.sv", 39, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_top_cpu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_cpu___024root___dump_triggers__stl(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_cpu___024root___stl_sequent__TOP__0(Vtb_top_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_cpu___024root___eval_stl(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtb_top_cpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_cpu___024root___dump_triggers__act(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_top_cpu.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_top_cpu.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_cpu___024root___dump_triggers__nba(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_top_cpu.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_top_cpu.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_cpu___024root___ctor_var_reset(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_top_cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__pass_count = 0;
    vlSelf->tb_top_cpu__DOT__fail_count = 0;
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_top_cpu__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->tb_top_cpu__DOT__dmem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_status = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction);
    vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction);
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding = VL_RAND_RESET_Q(38);
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction);
    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding = VL_RAND_RESET_Q(38);
    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding = VL_RAND_RESET_Q(38);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out = VL_RAND_RESET_I(2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_out = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_backwards_out = VL_RAND_RESET_I(2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_jump_address_out = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_jump_address_out = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in = VL_RAND_RESET_I(2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in = VL_RAND_RESET_I(2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in = VL_RAND_RESET_I(2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction);
    vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs1_used = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs2_used = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard_raw = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_status_in = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_selected = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_selected = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_fence_i = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_system_or_csr = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__next_pc_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_or_jump_redirect = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__fetch_misaligned = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__forward_valid_comb = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__status_backwards_comb = VL_RAND_RESET_I(2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__jump_address_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state = VL_RAND_RESET_I(2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__valid_memory_op = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__access_misaligned = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__store_data_comb = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_store_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_sel = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__launch_memory_op = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_cyc_comb = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_stb_comb = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel_comb = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_we_comb = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_dat_mosi_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_load_value_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_fault_status_comb = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0 = 0;
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtvec = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mepc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mcause = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtval = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mip = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__is_csr = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd_normal = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__pipeline_exception = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__timer_interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__external_interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_cause = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_cause = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_tval = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_address = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_writes_rd_comb = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_rd_data_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_hc0a4638a__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_hcb080270__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_h8f4b082b__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__868__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__868__producer_instr);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__868__producer_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__868__consumer_instr);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__868__consumer_uses_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__868__consumer_uses_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__869__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__869__instr);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__870__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__870__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__871__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__871__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__872__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__872__producer_instr);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__872__producer_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__872__consumer_instr);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__872__consumer_uses_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__872__consumer_uses_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__873__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__873__instr);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__874__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__874__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__875__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__875__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__876__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__876__producer_instr);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__876__producer_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__876__consumer_instr);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__876__consumer_uses_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__876__consumer_uses_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__877__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__877__instr);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__878__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__878__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__879__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__879__op_i = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigrprev__TOP__tb_top_cpu__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
