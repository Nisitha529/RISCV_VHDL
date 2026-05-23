// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_memory_stage___024root.h"

VL_ATTR_COLD void Vtb_memory_stage___024root___eval_initial__TOP(Vtb_memory_stage___024root* vlSelf);
VlCoroutine Vtb_memory_stage___024root___eval_initial__TOP__0(Vtb_memory_stage___024root* vlSelf);
VlCoroutine Vtb_memory_stage___024root___eval_initial__TOP__1(Vtb_memory_stage___024root* vlSelf);
VlCoroutine Vtb_memory_stage___024root___eval_initial__TOP__2(Vtb_memory_stage___024root* vlSelf);

void Vtb_memory_stage___024root___eval_initial(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_initial\n"); );
    // Body
    Vtb_memory_stage___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_memory_stage___024root___eval_initial__TOP__0(vlSelf);
    Vtb_memory_stage___024root___eval_initial__TOP__1(vlSelf);
    Vtb_memory_stage___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__clk 
        = vlSelf->tb_memory_stage__DOT__clk;
    vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__rst 
        = vlSelf->tb_memory_stage__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtb_memory_stage___024root___eval_initial__TOP__0(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_memory_stage__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "tb_memory_stage.sv", 
                                           9);
        vlSelf->tb_memory_stage__DOT__clk = (1U & (~ (IData)(vlSelf->tb_memory_stage__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_memory_stage___024root___eval_initial__TOP__1(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->tb_memory_stage__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       13);
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       13);
    vlSelf->tb_memory_stage__DOT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vtb_memory_stage___024root___eval_initial__TOP__2(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_initial__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__0__src;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__src = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__0__rd;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__rd = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__0__instr;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__apply_and_advance__0__instr);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__0__pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__pc = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__0__next_pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__next_pc = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__0__fwd_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__0__back_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__0__jump_addr;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__jump_addr = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_outputs__1__test_name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_source_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_source_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_rd_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_rd_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_instr_reg);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_pc_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_next_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_next_pc_reg = 0;
    QData/*37:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_fwd;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_fwd = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_fwd_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_back_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_jump_addr;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_jump_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__2__src;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__src = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__2__rd;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__rd = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__2__instr;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__apply_and_advance__2__instr);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__2__pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__pc = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__2__next_pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__next_pc = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__2__fwd_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__2__back_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__2__jump_addr;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__jump_addr = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_outputs__3__test_name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_source_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_source_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_rd_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_rd_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_instr_reg);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_pc_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_next_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_next_pc_reg = 0;
    QData/*37:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_fwd;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_fwd = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_fwd_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_back_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_jump_addr;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_jump_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__4__src;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__src = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__4__rd;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__rd = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__4__instr;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__apply_and_advance__4__instr);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__4__pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__pc = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__4__next_pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__next_pc = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__4__fwd_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__4__back_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__4__jump_addr;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__jump_addr = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_outputs__5__test_name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_source_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_source_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_rd_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_rd_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_instr_reg);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_pc_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_next_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_next_pc_reg = 0;
    QData/*37:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_fwd;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_fwd = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_fwd_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_back_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_jump_addr;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_jump_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__6__src;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__src = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__6__rd;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__rd = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__6__instr;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__apply_and_advance__6__instr);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__6__pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__pc = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__6__next_pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__next_pc = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__6__fwd_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__6__back_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__6__jump_addr;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__jump_addr = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_outputs__7__test_name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_source_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_source_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_rd_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_rd_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_instr_reg);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_pc_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_next_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_next_pc_reg = 0;
    QData/*37:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_fwd;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_fwd = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_fwd_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_back_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_jump_addr;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_jump_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__8__src;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__src = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__8__rd;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__rd = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__8__instr;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__apply_and_advance__8__instr);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__8__pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__pc = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__8__next_pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__next_pc = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__8__fwd_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__8__back_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__8__jump_addr;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__jump_addr = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_outputs__9__test_name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_source_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_source_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_rd_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_rd_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_instr_reg);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_pc_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_next_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_next_pc_reg = 0;
    QData/*37:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_fwd;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_fwd = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_fwd_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_back_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_jump_addr;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_jump_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__10__src;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__src = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__10__rd;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__rd = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__10__instr;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__apply_and_advance__10__instr);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__10__pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__pc = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__10__next_pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__next_pc = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__10__fwd_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__10__back_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__10__jump_addr;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__jump_addr = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_outputs__11__test_name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_source_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_source_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_rd_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_rd_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_instr_reg);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_pc_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_next_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_next_pc_reg = 0;
    QData/*37:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_fwd;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_fwd = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_fwd_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_back_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_jump_addr;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_jump_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__12__src;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__src = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__12__rd;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__rd = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__12__instr;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__apply_and_advance__12__instr);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__12__pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__pc = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__12__next_pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__next_pc = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__12__fwd_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__12__back_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__12__jump_addr;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__jump_addr = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_outputs__13__test_name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_source_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_source_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_rd_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_rd_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_instr_reg);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_pc_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_next_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_next_pc_reg = 0;
    QData/*37:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_fwd;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_fwd = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_fwd_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_back_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_jump_addr;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_jump_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__14__src;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__src = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__14__rd;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__rd = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__14__instr;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__apply_and_advance__14__instr);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__14__pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__pc = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__14__next_pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__next_pc = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__14__fwd_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__14__back_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__14__jump_addr;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__jump_addr = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_outputs__15__test_name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_source_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_source_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_rd_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_rd_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_instr_reg);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_pc_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_next_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_next_pc_reg = 0;
    QData/*37:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_fwd;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_fwd = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_fwd_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_back_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_jump_addr;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_jump_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__16__src;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__src = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__16__rd;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__rd = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__16__instr;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__apply_and_advance__16__instr);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__16__pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__pc = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__16__next_pc;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__next_pc = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__16__fwd_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__16__back_status;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__apply_and_advance__16__jump_addr;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__jump_addr = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_outputs__17__test_name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_source_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_source_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_rd_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_rd_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_instr_reg);
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_pc_reg = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_next_pc_reg;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_next_pc_reg = 0;
    QData/*37:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_fwd;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_fwd = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_fwd_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_back_status;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_back_status = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_jump_addr;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_jump_addr = 0;
    // Body
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    while (vlSelf->tb_memory_stage__DOT__rst) {
        co_await vlSelf->__VtrigSched_h6f28b0b0__0.trigger(
                                                           "@([changed] tb_memory_stage.rst)", 
                                                           "tb_memory_stage.sv", 
                                                           176);
    }
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__back_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__next_pc = 0x1004U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__pc = 0x1000U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__instr[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__instr[1U] = 0xd8400000U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__instr[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__rd = 0x12345678U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__0__src = 0U;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__0__src;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__0__rd;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__0__instr[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__0__instr[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__0__instr[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__0__pc;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__0__next_pc;
    vlSelf->tb_memory_stage__DOT__status_forwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__0__fwd_status;
    vlSelf->tb_memory_stage__DOT__status_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__0__back_status;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__0__jump_addr;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_back_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_fwd = 0x22468acf01ULL;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_next_pc_reg = 0x1004U;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_pc_reg = 0x1000U;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_instr_reg[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_instr_reg[1U] = 0xd8400000U;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_instr_reg[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_rd_reg = 0x12345678U;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_source_reg = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__1__test_name = 
        std::string{"ALU passthrough"};
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_source_reg))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__1__test_name),
                  32,vlSelf->tb_memory_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_source_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 130, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_rd_reg))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__1__test_name),
                  32,vlSelf->tb_memory_stage__DOT__rd_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_rd_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 134, "");
    }
    if (VL_UNLIKELY((((0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                           >> 0x1bU))) 
                      != (0x3fU & ((__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_instr_reg[2U] 
                                    << 5U) | (__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_instr_reg[1U] 
                                              >> 0x1bU)))) 
                     | ((0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                  >> 0x16U)) != (0x1fU 
                                                 & (__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_instr_reg[1U] 
                                                    >> 0x16U)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__1__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 139, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__1__test_name),
                  32,vlSelf->tb_memory_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 143, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_next_pc_reg))) {
        VL_WRITEF("[FAIL] %@: next_program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__1__test_name),
                  32,vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_next_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 147, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_memory_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__1__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 153, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_fwd_status)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__1__test_name),
                  4,(IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_fwd_status);
        VL_FINISH_MT("tb_memory_stage.sv", 157, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__1__test_name),
                  2,(IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out),
                  2,__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_back_status);
        VL_FINISH_MT("tb_memory_stage.sv", 161, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__1__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__1__test_name),
                  32,vlSelf->tb_memory_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__1__exp_jump_addr);
        VL_FINISH_MT("tb_memory_stage.sv", 165, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_outputs__1__test_name));
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__back_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__next_pc = 0x100cU;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__pc = 0x1008U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__instr[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__instr[1U] = 0x60800000U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__instr[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__rd = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__2__src = 0U;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__2__src;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__2__rd;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__2__instr[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__2__instr[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__2__instr[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__2__pc;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__2__next_pc;
    vlSelf->tb_memory_stage__DOT__status_forwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__2__fwd_status;
    vlSelf->tb_memory_stage__DOT__status_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__2__back_status;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__2__jump_addr;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       200);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       200);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_back_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_fwd = 0x22468acf02ULL;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_next_pc_reg = 0x100cU;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_pc_reg = 0x1008U;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_instr_reg[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_instr_reg[1U] = 0x60800000U;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_instr_reg[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_rd_reg = 0x12345678U;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_source_reg = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__3__test_name = 
        std::string{"LW word load"};
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_source_reg))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__3__test_name),
                  32,vlSelf->tb_memory_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_source_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 130, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_rd_reg))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__3__test_name),
                  32,vlSelf->tb_memory_stage__DOT__rd_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_rd_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 134, "");
    }
    if (VL_UNLIKELY((((0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                           >> 0x1bU))) 
                      != (0x3fU & ((__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_instr_reg[2U] 
                                    << 5U) | (__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_instr_reg[1U] 
                                              >> 0x1bU)))) 
                     | ((0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                  >> 0x16U)) != (0x1fU 
                                                 & (__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_instr_reg[1U] 
                                                    >> 0x16U)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__3__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 139, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__3__test_name),
                  32,vlSelf->tb_memory_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 143, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_next_pc_reg))) {
        VL_WRITEF("[FAIL] %@: next_program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__3__test_name),
                  32,vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_next_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 147, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_memory_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__3__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 153, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_fwd_status)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__3__test_name),
                  4,(IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_fwd_status);
        VL_FINISH_MT("tb_memory_stage.sv", 157, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__3__test_name),
                  2,(IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out),
                  2,__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_back_status);
        VL_FINISH_MT("tb_memory_stage.sv", 161, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__3__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__3__test_name),
                  32,vlSelf->tb_memory_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__3__exp_jump_addr);
        VL_FINISH_MT("tb_memory_stage.sv", 165, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_outputs__3__test_name));
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__back_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__next_pc = 0x1014U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__pc = 0x1010U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__instr[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__instr[1U] = 0x88003000U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__instr[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__rd = 0x10U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__4__src = 0xdeadbeefU;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__4__src;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__4__rd;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__4__instr[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__4__instr[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__4__instr[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__4__pc;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__4__next_pc;
    vlSelf->tb_memory_stage__DOT__status_forwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__4__fwd_status;
    vlSelf->tb_memory_stage__DOT__status_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__4__back_status;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__4__jump_addr;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_back_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_fwd = 0ULL;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_next_pc_reg = 0x1014U;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_pc_reg = 0x1010U;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_instr_reg[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_instr_reg[1U] = 0x88003000U;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_instr_reg[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_rd_reg = 0x10U;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_source_reg = 0xdeadbeefU;
    __Vtask_tb_memory_stage__DOT__check_outputs__5__test_name = 
        std::string{"SW word store"};
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_source_reg))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__5__test_name),
                  32,vlSelf->tb_memory_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_source_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 130, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_rd_reg))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__5__test_name),
                  32,vlSelf->tb_memory_stage__DOT__rd_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_rd_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 134, "");
    }
    if (VL_UNLIKELY((((0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                           >> 0x1bU))) 
                      != (0x3fU & ((__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_instr_reg[2U] 
                                    << 5U) | (__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_instr_reg[1U] 
                                              >> 0x1bU)))) 
                     | ((0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                  >> 0x16U)) != (0x1fU 
                                                 & (__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_instr_reg[1U] 
                                                    >> 0x16U)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__5__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 139, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__5__test_name),
                  32,vlSelf->tb_memory_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 143, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_next_pc_reg))) {
        VL_WRITEF("[FAIL] %@: next_program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__5__test_name),
                  32,vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_next_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 147, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_memory_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__5__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 153, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_fwd_status)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__5__test_name),
                  4,(IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_fwd_status);
        VL_FINISH_MT("tb_memory_stage.sv", 157, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__5__test_name),
                  2,(IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out),
                  2,__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_back_status);
        VL_FINISH_MT("tb_memory_stage.sv", 161, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__5__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__5__test_name),
                  32,vlSelf->tb_memory_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__5__exp_jump_addr);
        VL_FINISH_MT("tb_memory_stage.sv", 165, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_outputs__5__test_name));
    if (VL_UNLIKELY((0xdeadbeefU != vlSelf->tb_memory_stage__DOT__memory
                     [4U]))) {
        VL_WRITEF("[FAIL] Store check: memory[4]=%x, expected DEADBEEF\n",
                  32,vlSelf->tb_memory_stage__DOT__memory
                  [4U]);
        VL_FINISH_MT("tb_memory_stage.sv", 224, "");
    }
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__back_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__next_pc = 0x101cU;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__pc = 0x1018U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__instr[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__instr[1U] = 0x51000000U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__instr[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__rd = 1U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__6__src = 0U;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__6__src;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__6__rd;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__6__instr[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__6__instr[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__6__instr[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__6__pc;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__6__next_pc;
    vlSelf->tb_memory_stage__DOT__status_forwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__6__fwd_status;
    vlSelf->tb_memory_stage__DOT__status_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__6__back_status;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__6__jump_addr;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       234);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       234);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_back_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_fwd = 0x2000000ac4ULL;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_next_pc_reg = 0x101cU;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_pc_reg = 0x1018U;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_instr_reg[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_instr_reg[1U] = 0x51000000U;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_instr_reg[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_rd_reg = 0x56U;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_source_reg = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__7__test_name = 
        std::string{"LB signed byte"};
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_source_reg))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__7__test_name),
                  32,vlSelf->tb_memory_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_source_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 130, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_rd_reg))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__7__test_name),
                  32,vlSelf->tb_memory_stage__DOT__rd_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_rd_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 134, "");
    }
    if (VL_UNLIKELY((((0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                           >> 0x1bU))) 
                      != (0x3fU & ((__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_instr_reg[2U] 
                                    << 5U) | (__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_instr_reg[1U] 
                                              >> 0x1bU)))) 
                     | ((0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                  >> 0x16U)) != (0x1fU 
                                                 & (__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_instr_reg[1U] 
                                                    >> 0x16U)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__7__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 139, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__7__test_name),
                  32,vlSelf->tb_memory_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 143, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_next_pc_reg))) {
        VL_WRITEF("[FAIL] %@: next_program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__7__test_name),
                  32,vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_next_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 147, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_memory_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__7__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 153, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_fwd_status)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__7__test_name),
                  4,(IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_fwd_status);
        VL_FINISH_MT("tb_memory_stage.sv", 157, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__7__test_name),
                  2,(IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out),
                  2,__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_back_status);
        VL_FINISH_MT("tb_memory_stage.sv", 161, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__7__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__7__test_name),
                  32,vlSelf->tb_memory_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__7__exp_jump_addr);
        VL_FINISH_MT("tb_memory_stage.sv", 165, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_outputs__7__test_name));
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__back_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__next_pc = 0x1024U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__pc = 0x1020U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__instr[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__instr[1U] = 0x69400000U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__instr[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__rd = 2U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__8__src = 0U;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__8__src;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__8__rd;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__8__instr[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__8__instr[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__8__instr[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__8__pc;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__8__next_pc;
    vlSelf->tb_memory_stage__DOT__status_forwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__8__fwd_status;
    vlSelf->tb_memory_stage__DOT__status_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__8__back_status;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__8__jump_addr;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       249);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       249);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_back_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_fwd = 0x2000000685ULL;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_next_pc_reg = 0x1024U;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_pc_reg = 0x1020U;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_instr_reg[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_instr_reg[1U] = 0x69400000U;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_instr_reg[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_rd_reg = 0x34U;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_source_reg = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__9__test_name = 
        std::string{"LBU unsigned byte"};
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_source_reg))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__9__test_name),
                  32,vlSelf->tb_memory_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_source_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 130, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_rd_reg))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__9__test_name),
                  32,vlSelf->tb_memory_stage__DOT__rd_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_rd_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 134, "");
    }
    if (VL_UNLIKELY((((0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                           >> 0x1bU))) 
                      != (0x3fU & ((__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_instr_reg[2U] 
                                    << 5U) | (__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_instr_reg[1U] 
                                              >> 0x1bU)))) 
                     | ((0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                  >> 0x16U)) != (0x1fU 
                                                 & (__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_instr_reg[1U] 
                                                    >> 0x16U)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__9__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 139, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__9__test_name),
                  32,vlSelf->tb_memory_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 143, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_next_pc_reg))) {
        VL_WRITEF("[FAIL] %@: next_program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__9__test_name),
                  32,vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_next_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 147, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_memory_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__9__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 153, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_fwd_status)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__9__test_name),
                  4,(IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_fwd_status);
        VL_FINISH_MT("tb_memory_stage.sv", 157, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__9__test_name),
                  2,(IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out),
                  2,__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_back_status);
        VL_FINISH_MT("tb_memory_stage.sv", 161, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__9__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__9__test_name),
                  32,vlSelf->tb_memory_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__9__exp_jump_addr);
        VL_FINISH_MT("tb_memory_stage.sv", 165, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_outputs__9__test_name));
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__back_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__next_pc = 0x102cU;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__pc = 0x1028U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__instr[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__instr[1U] = 0x59800000U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__instr[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__rd = 2U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__10__src = 0U;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__10__src;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__10__rd;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__10__instr[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__10__instr[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__10__instr[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__10__pc;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__10__next_pc;
    vlSelf->tb_memory_stage__DOT__status_forwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__10__fwd_status;
    vlSelf->tb_memory_stage__DOT__status_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__10__back_status;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__10__jump_addr;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       264);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       264);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_back_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_fwd = 0x2000024686ULL;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_next_pc_reg = 0x102cU;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_pc_reg = 0x1028U;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_instr_reg[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_instr_reg[1U] = 0x59800000U;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_instr_reg[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_rd_reg = 0x1234U;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_source_reg = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__11__test_name = 
        std::string{"LH signed halfword"};
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_source_reg))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__11__test_name),
                  32,vlSelf->tb_memory_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_source_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 130, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_rd_reg))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__11__test_name),
                  32,vlSelf->tb_memory_stage__DOT__rd_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_rd_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 134, "");
    }
    if (VL_UNLIKELY((((0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                           >> 0x1bU))) 
                      != (0x3fU & ((__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_instr_reg[2U] 
                                    << 5U) | (__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_instr_reg[1U] 
                                              >> 0x1bU)))) 
                     | ((0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                  >> 0x16U)) != (0x1fU 
                                                 & (__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_instr_reg[1U] 
                                                    >> 0x16U)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__11__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 139, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__11__test_name),
                  32,vlSelf->tb_memory_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 143, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_next_pc_reg))) {
        VL_WRITEF("[FAIL] %@: next_program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__11__test_name),
                  32,vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_next_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 147, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_memory_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__11__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 153, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_fwd_status)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__11__test_name),
                  4,(IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_fwd_status);
        VL_FINISH_MT("tb_memory_stage.sv", 157, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__11__test_name),
                  2,(IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out),
                  2,__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_back_status);
        VL_FINISH_MT("tb_memory_stage.sv", 161, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__11__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__11__test_name),
                  32,vlSelf->tb_memory_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__11__exp_jump_addr);
        VL_FINISH_MT("tb_memory_stage.sv", 165, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_outputs__11__test_name));
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__back_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__next_pc = 0x1034U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__pc = 0x1030U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__instr[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__instr[1U] = 0x71c00000U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__instr[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__rd = 2U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__12__src = 0U;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__12__src;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__12__rd;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__12__instr[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__12__instr[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__12__instr[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__12__pc;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__12__next_pc;
    vlSelf->tb_memory_stage__DOT__status_forwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__12__fwd_status;
    vlSelf->tb_memory_stage__DOT__status_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__12__back_status;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__12__jump_addr;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_back_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_fwd = 0x2000024687ULL;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_next_pc_reg = 0x1034U;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_pc_reg = 0x1030U;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_instr_reg[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_instr_reg[1U] = 0x71c00000U;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_instr_reg[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_rd_reg = 0x1234U;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_source_reg = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__13__test_name = 
        std::string{"LHU unsigned halfword"};
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_source_reg))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__13__test_name),
                  32,vlSelf->tb_memory_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_source_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 130, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_rd_reg))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__13__test_name),
                  32,vlSelf->tb_memory_stage__DOT__rd_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_rd_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 134, "");
    }
    if (VL_UNLIKELY((((0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                           >> 0x1bU))) 
                      != (0x3fU & ((__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_instr_reg[2U] 
                                    << 5U) | (__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_instr_reg[1U] 
                                              >> 0x1bU)))) 
                     | ((0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                  >> 0x16U)) != (0x1fU 
                                                 & (__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_instr_reg[1U] 
                                                    >> 0x16U)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__13__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 139, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__13__test_name),
                  32,vlSelf->tb_memory_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 143, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_next_pc_reg))) {
        VL_WRITEF("[FAIL] %@: next_program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__13__test_name),
                  32,vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_next_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 147, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_memory_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__13__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 153, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_fwd_status)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__13__test_name),
                  4,(IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_fwd_status);
        VL_FINISH_MT("tb_memory_stage.sv", 157, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__13__test_name),
                  2,(IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out),
                  2,__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_back_status);
        VL_FINISH_MT("tb_memory_stage.sv", 161, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__13__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__13__test_name),
                  32,vlSelf->tb_memory_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__13__exp_jump_addr);
        VL_FINISH_MT("tb_memory_stage.sv", 165, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_outputs__13__test_name));
    vlSelf->tb_memory_stage__DOT__force_error = 1U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__back_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__next_pc = 0x103cU;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__pc = 0x1038U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__instr[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__instr[1U] = 0x62000000U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__instr[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__rd = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__14__src = 0U;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__14__src;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__14__rd;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__14__instr[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__14__instr[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__14__instr[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__14__pc;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__14__next_pc;
    vlSelf->tb_memory_stage__DOT__status_forwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__14__fwd_status;
    vlSelf->tb_memory_stage__DOT__status_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__14__back_status;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__14__jump_addr;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       295);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       295);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_back_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_fwd = 0ULL;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_next_pc_reg = 0x103cU;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_pc_reg = 0x1038U;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_instr_reg[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_instr_reg[1U] = 0x62000000U;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_instr_reg[2U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_rd_reg = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_source_reg = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__15__test_name = 
        std::string{"Wishbone error"};
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_source_reg))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__15__test_name),
                  32,vlSelf->tb_memory_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_source_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 130, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_rd_reg))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__15__test_name),
                  32,vlSelf->tb_memory_stage__DOT__rd_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_rd_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 134, "");
    }
    if (VL_UNLIKELY((((0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                           >> 0x1bU))) 
                      != (0x3fU & ((__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_instr_reg[2U] 
                                    << 5U) | (__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_instr_reg[1U] 
                                              >> 0x1bU)))) 
                     | ((0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                  >> 0x16U)) != (0x1fU 
                                                 & (__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_instr_reg[1U] 
                                                    >> 0x16U)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__15__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 139, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__15__test_name),
                  32,vlSelf->tb_memory_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 143, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_next_pc_reg))) {
        VL_WRITEF("[FAIL] %@: next_program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__15__test_name),
                  32,vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_next_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 147, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_memory_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__15__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 153, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_fwd_status)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__15__test_name),
                  4,(IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_fwd_status);
        VL_FINISH_MT("tb_memory_stage.sv", 157, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__15__test_name),
                  2,(IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out),
                  2,__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_back_status);
        VL_FINISH_MT("tb_memory_stage.sv", 161, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__15__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__15__test_name),
                  32,vlSelf->tb_memory_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__15__exp_jump_addr);
        VL_FINISH_MT("tb_memory_stage.sv", 165, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_outputs__15__test_name));
    vlSelf->tb_memory_stage__DOT__force_error = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__back_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__fwd_status = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__next_pc = 0x1044U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__pc = 0x1040U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__instr[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__instr[1U] = 0x88000000U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__instr[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__rd = 0U;
    __Vtask_tb_memory_stage__DOT__apply_and_advance__16__src = 0U;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__16__src;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__apply_and_advance__16__rd;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__16__instr[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__16__instr[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__16__instr[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__16__pc;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__16__next_pc;
    vlSelf->tb_memory_stage__DOT__status_forwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__16__fwd_status;
    vlSelf->tb_memory_stage__DOT__status_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__16__back_status;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_memory_stage__DOT__apply_and_advance__16__jump_addr;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_jump_addr = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_back_status = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_fwd_status = 4U;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_fwd = 0ULL;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_next_pc_reg = 0x1044U;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_pc_reg = 0x1040U;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_instr_reg[0U] = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_instr_reg[1U] = 0x88000000U;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_instr_reg[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_rd_reg = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_source_reg = 0U;
    __Vtask_tb_memory_stage__DOT__check_outputs__17__test_name = 
        std::string{"Illegal instruction"};
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__source_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_source_reg))) {
        VL_WRITEF("[FAIL] %@: source_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__17__test_name),
                  32,vlSelf->tb_memory_stage__DOT__source_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_source_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 130, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_rd_reg))) {
        VL_WRITEF("[FAIL] %@: rd_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__17__test_name),
                  32,vlSelf->tb_memory_stage__DOT__rd_data_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_rd_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 134, "");
    }
    if (VL_UNLIKELY((((0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                           >> 0x1bU))) 
                      != (0x3fU & ((__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_instr_reg[2U] 
                                    << 5U) | (__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_instr_reg[1U] 
                                              >> 0x1bU)))) 
                     | ((0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                                  >> 0x16U)) != (0x1fU 
                                                 & (__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_instr_reg[1U] 
                                                    >> 0x16U)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__17__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 139, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__17__test_name),
                  32,vlSelf->tb_memory_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 143, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_next_pc_reg))) {
        VL_WRITEF("[FAIL] %@: next_program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__17__test_name),
                  32,vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_next_pc_reg);
        VL_FINISH_MT("tb_memory_stage.sv", 147, "");
    }
    if (VL_UNLIKELY(((((1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                      >> 0x25U))) != 
                       (1U & (IData)((__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_fwd 
                                      >> 0x25U)))) 
                      | ((IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                                  >> 5U)) != (IData)(
                                                     (__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_fwd 
                                                      >> 5U)))) 
                     | ((0x1fU & (IData)(vlSelf->tb_memory_stage__DOT__forwarding_out)) 
                        != (0x1fU & (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_fwd)))))) {
        VL_WRITEF("[FAIL] %@: forwarding_out mismatch\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__17__test_name));
        VL_FINISH_MT("tb_memory_stage.sv", 153, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_fwd_status)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__17__test_name),
                  4,(IData)(vlSelf->tb_memory_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_fwd_status);
        VL_FINISH_MT("tb_memory_stage.sv", 157, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out) 
                     != (IData)(__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_back_status)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__17__test_name),
                  2,(IData)(vlSelf->tb_memory_stage__DOT__status_backwards_out),
                  2,__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_back_status);
        VL_FINISH_MT("tb_memory_stage.sv", 161, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_memory_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_memory_stage__DOT__check_outputs__17__exp_jump_addr))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__17__test_name),
                  32,vlSelf->tb_memory_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_memory_stage__DOT__check_outputs__17__exp_jump_addr);
        VL_FINISH_MT("tb_memory_stage.sv", 165, "");
    }
    VL_WRITEF("[PASS] %@\n\n=====================================\nALL MEMORY_STAGE TESTS PASSED\n=====================================\n\n",
              -1,&(__Vtask_tb_memory_stage__DOT__check_outputs__17__test_name));
    VL_FINISH_MT("tb_memory_stage.sv", 322, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vtb_memory_stage___024root___act_comb__TOP__0(Vtb_memory_stage___024root* vlSelf);

void Vtb_memory_stage___024root___eval_act(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_act\n"); );
    // Body
    if ((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
          | vlSelf->__VactTriggered.at(2U)) | vlSelf->__VactTriggered.at(3U))) {
        Vtb_memory_stage___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_memory_stage___024root___nba_sequent__TOP__0(Vtb_memory_stage___024root* vlSelf);
void Vtb_memory_stage___024root___nba_sequent__TOP__1(Vtb_memory_stage___024root* vlSelf);
void Vtb_memory_stage___024root___nba_comb__TOP__0(Vtb_memory_stage___024root* vlSelf);

void Vtb_memory_stage___024root___eval_nba(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtb_memory_stage___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_memory_stage___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
          | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(3U))) {
        Vtb_memory_stage___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void Vtb_memory_stage___024root___eval_triggers__act(Vtb_memory_stage___024root* vlSelf);
void Vtb_memory_stage___024root___timing_commit(Vtb_memory_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory_stage___024root___dump_triggers__act(Vtb_memory_stage___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_memory_stage___024root___timing_resume(Vtb_memory_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory_stage___024root___dump_triggers__nba(Vtb_memory_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_memory_stage___024root___eval(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval\n"); );
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
            Vtb_memory_stage___024root___eval_triggers__act(vlSelf);
            Vtb_memory_stage___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_memory_stage___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_memory_stage.sv", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_memory_stage___024root___timing_resume(vlSelf);
                Vtb_memory_stage___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_memory_stage___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_memory_stage.sv", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_memory_stage___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_memory_stage___024root___timing_commit(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(1U))))) {
        vlSelf->__VtrigSched_h83711720__0.commit("@(posedge tb_memory_stage.clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(3U))))) {
        vlSelf->__VtrigSched_h6f28b0b0__0.commit("@([changed] tb_memory_stage.rst)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0U))))) {
        vlSelf->__VtrigSched_h837116d9__0.commit("@(negedge tb_memory_stage.clk)");
    }
}

void Vtb_memory_stage___024root___timing_resume(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VtrigSched_h83711720__0.resume("@(posedge tb_memory_stage.clk)");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        vlSelf->__VtrigSched_h6f28b0b0__0.resume("@([changed] tb_memory_stage.rst)");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VtrigSched_h837116d9__0.resume("@(negedge tb_memory_stage.clk)");
    }
}

#ifdef VL_DEBUG
void Vtb_memory_stage___024root___eval_debug_assertions(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
