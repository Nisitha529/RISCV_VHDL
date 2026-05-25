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
                VL_FATAL_MT("tb_top_cpu.sv", 4, "", "Settle region did not converge.");
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge tb_top_cpu.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_top_cpu.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge tb_top_cpu.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_top_cpu.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top_cpu__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top_cpu__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_cpu__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_top_cpu__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr);
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_fwd = VL_RAND_RESET_Q(38);
    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr);
    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_fwd = VL_RAND_RESET_Q(38);
    vlSelf->tb_top_cpu__DOT__dut__DOT__wb_fwd = VL_RAND_RESET_Q(38);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out = VL_RAND_RESET_I(2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_backwards_out = VL_RAND_RESET_I(2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_jump_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__load_use_hazard = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in = VL_RAND_RESET_I(2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__status_forwards_out = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__can_request = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__status_forwards_out = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_fwd = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_fwd = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT____Vcellinp__regfile_inst__write_enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__status_forwards_out = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__mem_width = VL_RAND_RESET_I(6);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel = VL_RAND_RESET_I(4);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state = VL_RAND_RESET_I(2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__load_data = VL_RAND_RESET_I(32);
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__tb_top_cpu__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
