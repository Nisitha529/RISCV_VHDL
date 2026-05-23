// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_decode_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_decode_stage___024root.h"

VL_ATTR_COLD void Vtb_decode_stage___024root___eval_static(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_decode_stage___024root___eval_final(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_decode_stage___024root___eval_triggers__stl(Vtb_decode_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decode_stage___024root___dump_triggers__stl(Vtb_decode_stage___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_decode_stage___024root___eval_stl(Vtb_decode_stage___024root* vlSelf);

VL_ATTR_COLD void Vtb_decode_stage___024root___eval_settle(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_decode_stage___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_decode_stage___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_decode_stage.sv", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_decode_stage___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decode_stage___024root___dump_triggers__stl(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_decode_stage___024root___act_comb__TOP__0(Vtb_decode_stage___024root* vlSelf);

VL_ATTR_COLD void Vtb_decode_stage___024root___eval_stl(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtb_decode_stage___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decode_stage___024root___dump_triggers__act(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_decode_stage.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_decode_stage.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decode_stage___024root___dump_triggers__nba(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_decode_stage.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_decode_stage.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_decode_stage___024root___ctor_var_reset(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_decode_stage__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_decode_stage__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_decode_stage__DOT__instruction_in = VL_RAND_RESET_I(32);
    vlSelf->tb_decode_stage__DOT__program_counter_in = VL_RAND_RESET_I(32);
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = VL_RAND_RESET_Q(38);
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = VL_RAND_RESET_Q(38);
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = VL_RAND_RESET_Q(38);
    vlSelf->tb_decode_stage__DOT__status_forwards_in = VL_RAND_RESET_I(4);
    vlSelf->tb_decode_stage__DOT__status_backwards_in = VL_RAND_RESET_I(2);
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in = VL_RAND_RESET_I(32);
    vlSelf->tb_decode_stage__DOT__rs1_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->tb_decode_stage__DOT__rs2_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->tb_decode_stage__DOT__program_counter_reg_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_decode_stage__DOT__instruction_reg_out);
    vlSelf->tb_decode_stage__DOT__status_forwards_out = VL_RAND_RESET_I(4);
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_out = VL_RAND_RESET_I(32);
    vlSelf->tb_decode_stage__DOT__dut__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->tb_decode_stage__DOT__dut__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_fwd = VL_RAND_RESET_I(32);
    vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_fwd = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed);
    vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_used = VL_RAND_RESET_I(1);
    vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_used = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__tb_decode_stage__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
