// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_execute_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_execute_stage___024root.h"

VlCoroutine Vtb_execute_stage___024root___eval_initial__TOP__0(Vtb_execute_stage___024root* vlSelf);
VlCoroutine Vtb_execute_stage___024root___eval_initial__TOP__1(Vtb_execute_stage___024root* vlSelf);
VlCoroutine Vtb_execute_stage___024root___eval_initial__TOP__2(Vtb_execute_stage___024root* vlSelf);

void Vtb_execute_stage___024root___eval_initial(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_execute_stage___024root___eval_initial__TOP__0(vlSelf);
    Vtb_execute_stage___024root___eval_initial__TOP__1(vlSelf);
    Vtb_execute_stage___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_execute_stage__DOT__clk 
        = vlSelf->tb_execute_stage__DOT__clk;
    vlSelf->__Vtrigrprev__TOP__tb_execute_stage__DOT__rst 
        = vlSelf->tb_execute_stage__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtb_execute_stage___024root___eval_initial__TOP__0(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_execute_stage__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "tb_execute_stage.sv", 
                                           9);
        vlSelf->tb_execute_stage__DOT__clk = (1U & 
                                              (~ (IData)(vlSelf->tb_execute_stage__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_execute_stage___024root___eval_initial__TOP__1(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->tb_execute_stage__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       13);
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       13);
    vlSelf->tb_execute_stage__DOT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vtb_execute_stage___024root___eval_initial__TOP__2(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_initial__TOP__2\n"); );
    // Init
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__0__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__0__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__0__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__0__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__0__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__0__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_jump_addr = 0;
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__1__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__1__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__1__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__1__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__1__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__1__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_jump_addr = 0;
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__2__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__2__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__2__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__2__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__2__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__2__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_jump_addr = 0;
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__3__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__3__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__3__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__3__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__3__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__3__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_jump_addr = 0;
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__4__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__4__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__4__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__4__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__4__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__4__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_jump_addr = 0;
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__5__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__5__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__5__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__5__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__5__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__5__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_jump_addr = 0;
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__6__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__6__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__6__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__6__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__6__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__6__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_jump_addr = 0;
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__7__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__7__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__7__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__7__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__7__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__7__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_jump_addr = 0;
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__8__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__8__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__8__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__8__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__8__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__8__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_jump_addr = 0;
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__9__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__9__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__9__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__9__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__9__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__9__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_jump_addr = 0;
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__10__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__10__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__10__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__10__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__10__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__10__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_jump_addr = 0;
    std::string __Vtask_tb_execute_stage__DOT__apply_and_check__11__test_name;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__11__rs1;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__11__rs2;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__rs2 = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__11__instr;
    VL_ZERO_W(65, __Vtask_tb_execute_stage__DOT__apply_and_check__11__instr);
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__11__pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__pc = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_source;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_source = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_rd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_rd = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_next_pc;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_next_pc = 0;
    QData/*37:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_fwd;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_fwd = 0;
    CData/*1:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_back_status;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_jump_addr;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_jump_addr = 0;
    // Body
    while (vlSelf->tb_execute_stage__DOT__rst) {
        co_await vlSelf->__VtrigSched_h170f52d1__0.trigger(
                                                           "@([changed] tb_execute_stage.rst)", 
                                                           "tb_execute_stage.sv", 
                                                           95);
    }
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_jump_addr = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_back_status = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_fwd = 0x20000003c3ULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_next_pc = 0x1004U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_rd = 0x1eU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_source = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__pc = 0x1000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__instr[0U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__instr[1U] = 0xd8c22000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__rs2 = 0x14U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__rs1 = 0xaU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__0__test_name = 
        std::string{"ADD"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__0__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__0__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__0__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__0__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__0__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__0__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__0__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__0__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__0__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__0__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__0__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__0__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__0__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__0__test_name));
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_jump_addr = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_back_status = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_fwd = 0x20000001e5ULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_next_pc = 0x1008U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_rd = 0xfU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_source = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__pc = 0x1004U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__instr[0U] = 5U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__instr[1U] = 0x91420000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__rs2 = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__rs1 = 0xaU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__1__test_name = 
        std::string{"ADDI"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__1__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__1__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__1__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__1__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__1__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__1__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__1__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__1__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__1__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__1__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__1__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__1__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__1__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__1__test_name));
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_jump_addr = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_back_status = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_fwd = 0x2000000146ULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_next_pc = 0x100cU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_rd = 0xaU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_source = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__pc = 0x1008U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__instr[0U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__instr[1U] = 0xe1841000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__rs2 = 0xaU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__rs1 = 0x14U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__2__test_name = 
        std::string{"SUB"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__2__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__2__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__2__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__2__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__2__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__2__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__2__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__2__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__2__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__2__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__2__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__2__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__2__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__2__test_name));
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_jump_addr = 0x2008U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_back_status = 2U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_fwd = 0ULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_next_pc = 0x2008U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_rd = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_source = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__pc = 0x2000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__instr[0U] = 8U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__instr[1U] = 0x20022000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__rs2 = 0xaU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__rs1 = 0xaU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__3__test_name = 
        std::string{"BEQ taken"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__3__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__3__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__3__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__3__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__3__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__3__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__3__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__3__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__3__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__3__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__3__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__3__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__3__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__3__test_name));
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_jump_addr = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_back_status = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_fwd = 0ULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_next_pc = 0x2008U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_rd = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_source = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__pc = 0x2004U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__instr[0U] = 8U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__instr[1U] = 0x28022000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__rs2 = 0xaU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__rs1 = 0xaU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__4__test_name = 
        std::string{"BNE not taken"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__4__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__4__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__4__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__4__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__4__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__4__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__4__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__4__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__4__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__4__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__4__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__4__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__4__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__4__test_name));
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_jump_addr = 0x2018U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_back_status = 2U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_fwd = 0ULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_next_pc = 0x2018U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_rd = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_source = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__pc = 0x2010U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__instr[0U] = 8U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__instr[1U] = 0x28022000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__rs2 = 0x14U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__rs1 = 0xaU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__5__test_name = 
        std::string{"BNE taken"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__5__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__5__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__5__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__5__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__5__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__5__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__5__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__5__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__5__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__5__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__5__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__5__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__5__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__5__test_name));
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_jump_addr = 0x3010U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_back_status = 2U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_fwd = 0x2000060081ULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_next_pc = 0x3010U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_rd = 0x3004U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_source = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__pc = 0x3000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__instr[0U] = 0x10U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__instr[1U] = 0x10400000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__rs2 = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__rs1 = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__6__test_name = 
        std::string{"JAL"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__6__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__6__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__6__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__6__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__6__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__6__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__6__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__6__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__6__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__6__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__6__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__6__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__6__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__6__test_name));
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_jump_addr = 0x6cU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_back_status = 2U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_fwd = 0x2000080082ULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_next_pc = 0x6cU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_rd = 0x4004U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_source = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__pc = 0x4000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__instr[0U] = 8U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__instr[1U] = 0x18860000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__rs2 = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__rs1 = 0x64U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__7__test_name = 
        std::string{"JALR"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__7__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__7__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__7__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__7__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__7__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__7__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__7__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__7__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__7__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__7__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__7__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__7__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__7__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__7__test_name));
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_jump_addr = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_back_status = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_fwd = 0x22468a000aULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_next_pc = 0x5004U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_rd = 0x12345000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_source = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__pc = 0x5000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__instr[0U] = 0x12345000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__instr[1U] = 0x2800000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__rs2 = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__rs1 = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__8__test_name = 
        std::string{"LUI"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__8__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__8__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__8__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__8__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__8__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__8__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__8__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__8__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__8__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__8__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__8__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__8__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__8__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__8__test_name));
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_jump_addr = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_back_status = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_fwd = 0x3579c6000bULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_next_pc = 0x5004U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_rd = 0xabce3000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_source = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__pc = 0x5000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__instr[0U] = 0xabcde000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__instr[1U] = 0xac00000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__rs2 = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__rs1 = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__9__test_name = 
        std::string{"AUIPC"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__9__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__9__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__9__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__9__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__9__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__9__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__9__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__9__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__9__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__9__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__9__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__9__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__9__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__9__test_name));
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_jump_addr = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_back_status = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_fwd = 0ULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_next_pc = 0x6004U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_rd = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_source = 0x2aU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__pc = 0x6000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__instr[0U] = 0x10U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__instr[1U] = 0x880c5000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__rs2 = 0x2aU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__rs1 = 0x64U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__10__test_name = 
        std::string{"SW"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__10__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__10__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__10__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__10__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__10__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__10__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__10__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__10__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__10__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__10__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__10__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__10__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__10__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__10__test_name));
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_jump_addr = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_back_status = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_fwd = 0x2000001b88ULL;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_next_pc = 0x7004U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_rd = 0xdcU;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_source = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__pc = 0x7000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__instr[0U] = 0x14U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__instr[1U] = 0x62120000U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__instr[2U] = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__rs2 = 0U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__rs1 = 0xc8U;
    __Vtask_tb_execute_stage__DOT__apply_and_check__11__test_name = 
        std::string{"LW"};
    co_await vlSelf->__VtrigSched_hc23b5f27__0.trigger(
                                                       "@(negedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_execute_stage__DOT__rs1_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__11__rs1;
    vlSelf->tb_execute_stage__DOT__rs2_data_in = __Vtask_tb_execute_stage__DOT__apply_and_check__11__rs2;
    vlSelf->tb_execute_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__11__instr[0U];
    vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__11__instr[1U];
    vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__11__instr[2U];
    vlSelf->tb_execute_stage__DOT__program_counter_in 
        = __Vtask_tb_execute_stage__DOT__apply_and_check__11__pc;
    vlSelf->tb_execute_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_execute_stage__DOT__jump_address_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                       "@(posedge tb_execute_stage.clk)", 
                                                       "tb_execute_stage.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_execute_stage.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_source))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__11__test_name),
                  32,vlSelf->tb_execute_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_source);
        VL_FINISH_MT("tb_execute_stage.sv", 66, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_rd))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__11__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_rd);
        VL_FINISH_MT("tb_execute_stage.sv", 70, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
                     != __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_next_pc))) {
        VL_WRITEF("[FAIL] %@: next_pc = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__11__test_name),
                  32,vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc,
                  32,__Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_next_pc);
        VL_FINISH_MT("tb_execute_stage.sv", 74, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_execute_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_execute_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__11__test_name));
        VL_FINISH_MT("tb_execute_stage.sv", 80, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? 2U : 0U) != (IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__11__test_name),
                  2,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                       & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                      | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_back_status));
        VL_FINISH_MT("tb_execute_stage.sv", 84, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U) != __Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address = %x, expected %x\n",
                  -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__11__test_name),
                  32,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                        & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                       | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc
                       : 0U),32,__Vtask_tb_execute_stage__DOT__apply_and_check__11__exp_jump_addr);
        VL_FINISH_MT("tb_execute_stage.sv", 88, "");
    }
    VL_WRITEF("[PASS] %@\n\n=====================================\nALL EXECUTE_STAGE TESTS PASSED\n=====================================\n\n",
              -1,&(__Vtask_tb_execute_stage__DOT__apply_and_check__11__test_name));
    VL_FINISH_MT("tb_execute_stage.sv", 209, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtb_execute_stage___024root___act_comb__TOP__0(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_store = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 0U;
    if ((1U & vlSelf->tb_execute_stage__DOT__instruction_in[2U])) {
        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 3U;
                        }
                    }
                } else {
                    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op 
                        = ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                ? 4U : 8U) : ((0x8000000U 
                                               & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                               ? 7U
                                               : 5U));
                }
            }
        }
    } else if ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                >> 0x1fU)) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op 
            = ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                ? ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                    ? ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 0xaU : 9U) : ((0x8000000U 
                                             & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                             ? 6U : 2U))
                    : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 0U : 8U) : ((0x8000000U 
                                           & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                           ? 7U : 6U)))
                : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                    ? ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 3U : 4U) : ((0x8000000U 
                                           & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                           ? 5U : 0xaU))
                    : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 9U : 0U) : 0U)));
    } else if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op 
            = ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                ? 0U : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                         ? 0U : 2U));
    } else if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 2U;
    } else if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                         >> 0x1cU)))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 1U;
    }
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 0U;
    if ((1U & (~ vlSelf->tb_execute_stage__DOT__instruction_in[2U]))) {
        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 1U;
                        }
                    } else {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 1U;
                    }
                } else if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 1U;
                }
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch = 1U;
                    }
                }
            } else if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch = 1U;
            }
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump = 1U;
                        if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr = 1U;
                        }
                    }
                }
            }
        }
        if ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_store = 1U;
                    }
                }
            }
            if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
                        }
                    } else {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
                    }
                }
            } else {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
            }
        } else if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
            if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_store = 1U;
                    }
                }
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
            } else if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
            }
        } else if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                             >> 0x1dU)))) {
            if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
                }
            } else {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
            }
        }
    }
    vlSelf->tb_execute_stage__DOT__source_data_reg_out 
        = ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store)
            ? vlSelf->tb_execute_stage__DOT__rs2_data_in
            : 0U);
    vlSelf->tb_execute_stage__DOT__dut__DOT__op2 = 
        ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm)
          ? vlSelf->tb_execute_stage__DOT__instruction_in[0U]
          : vlSelf->tb_execute_stage__DOT__rs2_data_in);
    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result 
        = ((8U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
            ? ((4U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                ? 0U : ((2U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                         ? ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                             ? 0U : ((vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                      < vlSelf->tb_execute_stage__DOT__dut__DOT__op2)
                                      ? 1U : 0U)) : 
                        ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                          ? (VL_LTS_III(32, vlSelf->tb_execute_stage__DOT__rs1_data_in, vlSelf->tb_execute_stage__DOT__dut__DOT__op2)
                              ? 1U : 0U) : VL_SHIFTRS_III(32,32,5, vlSelf->tb_execute_stage__DOT__rs1_data_in, 
                                                          (0x1fU 
                                                           & vlSelf->tb_execute_stage__DOT__dut__DOT__op2)))))
            : ((4U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                ? ((2U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           >> (0x1fU & vlSelf->tb_execute_stage__DOT__dut__DOT__op2))
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           << (0x1fU & vlSelf->tb_execute_stage__DOT__dut__DOT__op2)))
                    : ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           ^ vlSelf->tb_execute_stage__DOT__dut__DOT__op2)
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           | vlSelf->tb_execute_stage__DOT__dut__DOT__op2)))
                : ((2U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           & vlSelf->tb_execute_stage__DOT__dut__DOT__op2)
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           - vlSelf->tb_execute_stage__DOT__dut__DOT__op2))
                    : ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? vlSelf->tb_execute_stage__DOT__dut__DOT__op2
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           + vlSelf->tb_execute_stage__DOT__dut__DOT__op2)))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value 
        = (((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
            | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store))
            ? 0U : ((1U & vlSelf->tb_execute_stage__DOT__instruction_in[2U])
                     ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                     : ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                         >> 0x1fU) ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                         : ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                             ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                             : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                 ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                 : ((0x10000000U & 
                                     vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                     ? ((0x8000000U 
                                         & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                         ? ((IData)(4U) 
                                            + vlSelf->tb_execute_stage__DOT__program_counter_in)
                                         : ((IData)(4U) 
                                            + vlSelf->tb_execute_stage__DOT__program_counter_in))
                                     : ((0x8000000U 
                                         & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                         ? (vlSelf->tb_execute_stage__DOT__program_counter_in 
                                            + vlSelf->tb_execute_stage__DOT__instruction_in[0U])
                                         : vlSelf->tb_execute_stage__DOT__instruction_in[0U])))))));
    vlSelf->tb_execute_stage__DOT__forwarding_out = 
        (((QData)((IData)((1U & (~ ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                                    | ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store) 
                                       | (0U == (0x1fU 
                                                 & (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                    >> 0x16U))))))))) 
          << 0x25U) | (((QData)((IData)((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                                          | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store))
                                          ? 0U : ((1U 
                                                   & vlSelf->tb_execute_stage__DOT__instruction_in[2U])
                                                   ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                                   : 
                                                  ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                    >> 0x1fU)
                                                    ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                     ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                                     : 
                                                    ((0x20000000U 
                                                      & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                      ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                                      : 
                                                     ((0x10000000U 
                                                       & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                       ? 
                                                      ((0x8000000U 
                                                        & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                        ? 
                                                       ((IData)(4U) 
                                                        + vlSelf->tb_execute_stage__DOT__program_counter_in)
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelf->tb_execute_stage__DOT__program_counter_in))
                                                       : 
                                                      ((0x8000000U 
                                                        & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                        ? 
                                                       (vlSelf->tb_execute_stage__DOT__program_counter_in 
                                                        + 
                                                        vlSelf->tb_execute_stage__DOT__instruction_in[0U])
                                                        : 
                                                       vlSelf->tb_execute_stage__DOT__instruction_in[0U]))))))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                     >> 0x16U))))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch = 0U;
    if (vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch 
            = ((~ vlSelf->tb_execute_stage__DOT__instruction_in[2U]) 
               & ((~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                      >> 0x1fU)) & ((0x40000000U & 
                                     vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                     ? (IData)(((0U 
                                                 == 
                                                 (0x30000000U 
                                                  & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) 
                                                & ((0x8000000U 
                                                    & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                    ? 
                                                   (0U 
                                                    == vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                                    : 
                                                   (1U 
                                                    == vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result))))
                                     : ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                         >> 0x1dU) 
                                        & ((0x10000000U 
                                            & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                            ? ((0x8000000U 
                                                & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                ? (0U 
                                                   == vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                                : (1U 
                                                   == vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result))
                                            : ((0x8000000U 
                                                & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                ? (0U 
                                                   != vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                                : (0U 
                                                   == vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)))))));
    }
    vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc 
        = ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump)
            ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr)
                ? (0xfffffffeU & (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                  + vlSelf->tb_execute_stage__DOT__instruction_in[0U]))
                : (vlSelf->tb_execute_stage__DOT__program_counter_in 
                   + vlSelf->tb_execute_stage__DOT__instruction_in[0U]))
            : (((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch))
                ? (vlSelf->tb_execute_stage__DOT__program_counter_in 
                   + vlSelf->tb_execute_stage__DOT__instruction_in[0U])
                : ((IData)(4U) + vlSelf->tb_execute_stage__DOT__program_counter_in)));
}

void Vtb_execute_stage___024root___eval_act(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_act\n"); );
    // Body
    if ((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
          | vlSelf->__VactTriggered.at(2U)) | vlSelf->__VactTriggered.at(3U))) {
        Vtb_execute_stage___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_execute_stage___024root___eval_nba(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_nba\n"); );
    // Body
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
          | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(3U))) {
        Vtb_execute_stage___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_execute_stage___024root___eval_triggers__act(Vtb_execute_stage___024root* vlSelf);
void Vtb_execute_stage___024root___timing_commit(Vtb_execute_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_execute_stage___024root___dump_triggers__act(Vtb_execute_stage___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_execute_stage___024root___timing_resume(Vtb_execute_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_execute_stage___024root___dump_triggers__nba(Vtb_execute_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_execute_stage___024root___eval(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_execute_stage___024root___eval_triggers__act(vlSelf);
            Vtb_execute_stage___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_execute_stage___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_execute_stage.sv", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_execute_stage___024root___timing_resume(vlSelf);
                Vtb_execute_stage___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_execute_stage___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_execute_stage.sv", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_execute_stage___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_execute_stage___024root___timing_commit(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(1U))))) {
        vlSelf->__VtrigSched_hc23b5e66__0.commit("@(posedge tb_execute_stage.clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(2U))))) {
        vlSelf->__VtrigSched_h170f52d1__0.commit("@([changed] tb_execute_stage.rst)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(3U))))) {
        vlSelf->__VtrigSched_hc23b5f27__0.commit("@(negedge tb_execute_stage.clk)");
    }
}

void Vtb_execute_stage___024root___timing_resume(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VtrigSched_hc23b5e66__0.resume("@(posedge tb_execute_stage.clk)");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VtrigSched_h170f52d1__0.resume("@([changed] tb_execute_stage.rst)");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        vlSelf->__VtrigSched_hc23b5f27__0.resume("@(negedge tb_execute_stage.clk)");
    }
}

#ifdef VL_DEBUG
void Vtb_execute_stage___024root___eval_debug_assertions(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
