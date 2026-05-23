// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_memory_stage___024root.h"

VL_ATTR_COLD void Vtb_memory_stage___024root___eval_static(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_memory_stage___024root___eval_initial__TOP(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_memory_stage__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->tb_memory_stage__DOT__unnamedblk1__DOT__i)) {
        vlSelf->tb_memory_stage__DOT__memory[(0x3ffU 
                                              & vlSelf->tb_memory_stage__DOT__unnamedblk1__DOT__i)] = 0xdeadbeefU;
        vlSelf->tb_memory_stage__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->tb_memory_stage__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->tb_memory_stage__DOT__memory[0U] = 0x12345678U;
    vlSelf->tb_memory_stage__DOT__memory[2U] = 0xaabbccddU;
    vlSelf->tb_memory_stage__DOT__memory[4U] = 0x11223344U;
    vlSelf->tb_memory_stage__DOT__force_error = 0U;
}

VL_ATTR_COLD void Vtb_memory_stage___024root___eval_final(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_memory_stage___024root___eval_triggers__stl(Vtb_memory_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory_stage___024root___dump_triggers__stl(Vtb_memory_stage___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_memory_stage___024root___eval_stl(Vtb_memory_stage___024root* vlSelf);

VL_ATTR_COLD void Vtb_memory_stage___024root___eval_settle(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_memory_stage___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_memory_stage___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_memory_stage.sv", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_memory_stage___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory_stage___024root___dump_triggers__stl(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_memory_stage___024root___act_comb__TOP__0(Vtb_memory_stage___024root* vlSelf);

VL_ATTR_COLD void Vtb_memory_stage___024root___eval_stl(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtb_memory_stage___024root___act_comb__TOP__0(vlSelf);
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
VL_ATTR_COLD void Vtb_memory_stage___024root___dump_triggers__act(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge tb_memory_stage.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_memory_stage.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] tb_memory_stage.rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory_stage___024root___dump_triggers__nba(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge tb_memory_stage.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_memory_stage.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] tb_memory_stage.rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_memory_stage___024root___ctor_var_reset(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_memory_stage__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_memory_stage__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_memory_stage__DOT__source_data_in = VL_RAND_RESET_I(32);
    vlSelf->tb_memory_stage__DOT__rd_data_in = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_memory_stage__DOT__instruction_in);
    vlSelf->tb_memory_stage__DOT__program_counter_in = VL_RAND_RESET_I(32);
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = VL_RAND_RESET_I(32);
    vlSelf->tb_memory_stage__DOT__source_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->tb_memory_stage__DOT__rd_data_reg_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_memory_stage__DOT__instruction_reg_out);
    vlSelf->tb_memory_stage__DOT__program_counter_reg_out = VL_RAND_RESET_I(32);
    vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out = VL_RAND_RESET_I(32);
    vlSelf->tb_memory_stage__DOT__forwarding_out = VL_RAND_RESET_Q(38);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = VL_RAND_RESET_I(4);
    vlSelf->tb_memory_stage__DOT__status_forwards_out = VL_RAND_RESET_I(4);
    vlSelf->tb_memory_stage__DOT__status_backwards_in = VL_RAND_RESET_I(2);
    vlSelf->tb_memory_stage__DOT__status_backwards_out = VL_RAND_RESET_I(2);
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = VL_RAND_RESET_I(32);
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_memory_stage__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_memory_stage__DOT__force_error = VL_RAND_RESET_I(1);
    vlSelf->tb_memory_stage__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_memory_stage__DOT__dut__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->tb_memory_stage__DOT__dut__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width = VL_RAND_RESET_I(6);
    vlSelf->tb_memory_stage__DOT__dut__DOT__wb_sel = VL_RAND_RESET_I(4);
    vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state = VL_RAND_RESET_I(2);
    vlSelf->tb_memory_stage__DOT__dut__DOT__load_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
