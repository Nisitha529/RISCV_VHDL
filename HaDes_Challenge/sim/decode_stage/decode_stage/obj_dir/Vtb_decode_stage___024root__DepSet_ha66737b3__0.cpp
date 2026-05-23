// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_decode_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_decode_stage___024root.h"

VL_ATTR_COLD void Vtb_decode_stage___024root___eval_initial__TOP(Vtb_decode_stage___024root* vlSelf);
VlCoroutine Vtb_decode_stage___024root___eval_initial__TOP__0(Vtb_decode_stage___024root* vlSelf);
VlCoroutine Vtb_decode_stage___024root___eval_initial__TOP__1(Vtb_decode_stage___024root* vlSelf);
VlCoroutine Vtb_decode_stage___024root___eval_initial__TOP__2(Vtb_decode_stage___024root* vlSelf);

void Vtb_decode_stage___024root___eval_initial(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_initial\n"); );
    // Body
    Vtb_decode_stage___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_decode_stage___024root___eval_initial__TOP__0(vlSelf);
    Vtb_decode_stage___024root___eval_initial__TOP__1(vlSelf);
    Vtb_decode_stage___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_decode_stage__DOT__clk 
        = vlSelf->tb_decode_stage__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_decode_stage___024root___eval_initial__TOP__0(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_decode_stage__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "tb_decode_stage.sv", 
                                           15);
        vlSelf->tb_decode_stage__DOT__clk = (1U & (~ (IData)(vlSelf->tb_decode_stage__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_decode_stage___024root___eval_initial__TOP__1(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__1__instr;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__instr = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__1__pc;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__pc = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__1__exe_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__exe_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__1__mem_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__mem_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__1__wb_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__wb_fwd = 0;
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__1__fwd_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__1__back_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__back_status = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__1__jump_addr_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__jump_addr_in = 0;
    std::string __Vtask_tb_decode_stage__DOT__check_outputs__2__test_name;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_rs1_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_rs1_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_rs2_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_rs2_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_pc_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_pc_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg);
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_status_fwd_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_status_fwd_out = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_status_back_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_status_back_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_jump_addr_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_jump_addr_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__4__instr;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__instr = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__4__pc;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__pc = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__4__exe_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__exe_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__4__mem_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__mem_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__4__wb_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__wb_fwd = 0;
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__4__fwd_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__4__back_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__back_status = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__4__jump_addr_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__jump_addr_in = 0;
    std::string __Vtask_tb_decode_stage__DOT__check_outputs__5__test_name;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_rs1_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_rs1_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_rs2_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_rs2_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_pc_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_pc_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg);
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_status_fwd_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_status_fwd_out = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_status_back_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_status_back_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_jump_addr_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_jump_addr_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__7__instr;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__instr = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__7__pc;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__pc = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__7__exe_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__exe_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__7__mem_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__mem_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__7__wb_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__wb_fwd = 0;
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__7__fwd_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__7__back_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__back_status = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__7__jump_addr_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__jump_addr_in = 0;
    std::string __Vtask_tb_decode_stage__DOT__check_outputs__8__test_name;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_rs1_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_rs1_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_rs2_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_rs2_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_pc_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_pc_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg);
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_status_fwd_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_status_fwd_out = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_status_back_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_status_back_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_jump_addr_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_jump_addr_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__10__instr;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__instr = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__10__pc;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__pc = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__10__exe_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__exe_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__10__mem_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__mem_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__10__wb_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__wb_fwd = 0;
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__10__fwd_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__10__back_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__back_status = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__10__jump_addr_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__jump_addr_in = 0;
    std::string __Vtask_tb_decode_stage__DOT__check_outputs__11__test_name;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_rs1_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_rs1_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_rs2_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_rs2_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_pc_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_pc_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg);
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_status_fwd_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_status_fwd_out = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_status_back_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_status_back_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_jump_addr_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_jump_addr_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__13__instr;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__instr = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__13__pc;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__pc = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__13__exe_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__exe_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__13__mem_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__mem_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__13__wb_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__wb_fwd = 0;
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__13__fwd_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__13__back_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__back_status = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__13__jump_addr_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__jump_addr_in = 0;
    std::string __Vtask_tb_decode_stage__DOT__check_outputs__14__test_name;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_rs1_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_rs1_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_rs2_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_rs2_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_pc_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_pc_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg);
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_status_fwd_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_status_fwd_out = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_status_back_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_status_back_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_jump_addr_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_jump_addr_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__16__instr;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__instr = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__16__pc;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__pc = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__16__exe_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__exe_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__16__mem_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__mem_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__16__wb_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__wb_fwd = 0;
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__16__fwd_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__16__back_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__back_status = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__16__jump_addr_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__jump_addr_in = 0;
    std::string __Vtask_tb_decode_stage__DOT__check_outputs__17__test_name;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_rs1_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_rs1_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_rs2_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_rs2_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_pc_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_pc_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg);
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_status_fwd_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_status_fwd_out = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_status_back_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_status_back_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_jump_addr_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_jump_addr_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__18__instr;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__instr = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__18__pc;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__pc = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__18__exe_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__exe_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__18__mem_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__mem_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__18__wb_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__wb_fwd = 0;
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__18__fwd_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__18__back_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__back_status = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__18__jump_addr_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__jump_addr_in = 0;
    std::string __Vtask_tb_decode_stage__DOT__check_outputs__19__test_name;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_rs1_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_rs1_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_rs2_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_rs2_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_pc_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_pc_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg);
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_status_fwd_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_status_fwd_out = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_status_back_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_status_back_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_jump_addr_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_jump_addr_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__21__instr;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__instr = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__21__pc;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__pc = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__21__exe_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__exe_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__21__mem_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__mem_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__21__wb_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__wb_fwd = 0;
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__21__fwd_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__21__back_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__back_status = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__21__jump_addr_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__jump_addr_in = 0;
    std::string __Vtask_tb_decode_stage__DOT__check_outputs__22__test_name;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_rs1_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_rs1_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_rs2_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_rs2_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_pc_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_pc_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg);
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_status_fwd_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_status_fwd_out = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_status_back_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_status_back_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_jump_addr_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_jump_addr_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__23__instr;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__instr = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__23__pc;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__pc = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__23__exe_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__exe_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__23__mem_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__mem_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__23__wb_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__wb_fwd = 0;
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__23__fwd_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__23__back_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__back_status = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__23__jump_addr_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__jump_addr_in = 0;
    std::string __Vtask_tb_decode_stage__DOT__check_outputs__24__test_name;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_rs1_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_rs1_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_rs2_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_rs2_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_pc_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_pc_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg);
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_status_fwd_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_status_fwd_out = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_status_back_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_status_back_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_jump_addr_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_jump_addr_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__27__instr;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__instr = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__27__pc;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__pc = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__27__exe_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__exe_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__27__mem_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__mem_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__27__wb_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__wb_fwd = 0;
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__27__fwd_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__27__back_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__back_status = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__27__jump_addr_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__jump_addr_in = 0;
    std::string __Vtask_tb_decode_stage__DOT__check_outputs__28__test_name;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_rs1_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_rs1_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_rs2_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_rs2_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_pc_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_pc_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg);
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_status_fwd_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_status_fwd_out = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_status_back_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_status_back_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_jump_addr_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_jump_addr_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__29__instr;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__instr = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__29__pc;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__pc = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__29__exe_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__exe_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__29__mem_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__mem_fwd = 0;
    QData/*37:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__29__wb_fwd;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__wb_fwd = 0;
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__29__fwd_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__fwd_status = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__29__back_status;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__back_status = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__apply_inputs__29__jump_addr_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__jump_addr_in = 0;
    std::string __Vtask_tb_decode_stage__DOT__check_outputs__30__test_name;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_rs1_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_rs1_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_rs2_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_rs2_reg = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_pc_reg;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_pc_reg = 0;
    VlWide<3>/*64:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg;
    VL_ZERO_W(65, __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg);
    CData/*3:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_status_fwd_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_status_fwd_out = 0;
    CData/*1:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_status_back_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_status_back_out = 0;
    IData/*31:0*/ __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_jump_addr_out;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_jump_addr_out = 0;
    // Body
    vlSelf->tb_decode_stage__DOT__rst = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = 0x13U;
    vlSelf->tb_decode_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_decode_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_decode_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in = 0U;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0ULL;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       278);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       278);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       278);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__rst = 0U;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0x2000000141ULL;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__jump_addr_in = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__back_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__fwd_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__wb_fwd 
        = vlSelf->tb_decode_stage__DOT__wb_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__mem_fwd 
        = vlSelf->tb_decode_stage__DOT__mem_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__exe_fwd 
        = vlSelf->tb_decode_stage__DOT__exe_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__pc = 0x1000U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__1__instr = 0x508113U;
    co_await vlSelf->__VtrigSched_h222ba3d2__0.trigger(
                                                       "@(negedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = __Vtask_tb_decode_stage__DOT__apply_inputs__1__instr;
    vlSelf->tb_decode_stage__DOT__program_counter_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__1__pc;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__1__exe_fwd;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__1__mem_fwd;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__1__wb_fwd;
    vlSelf->tb_decode_stage__DOT__status_forwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__1__fwd_status;
    vlSelf->tb_decode_stage__DOT__status_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__1__back_status;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__1__jump_addr_in;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_decode_stage.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_jump_addr_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_status_back_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_status_fwd_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[0U] = 5U;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[1U] = 0x90825005U;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[2U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_pc_reg = 0x1000U;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_rs2_reg = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_rs1_reg = 0xaU;
    __Vtask_tb_decode_stage__DOT__check_outputs__2__test_name = 
        std::string{"ADDI decode"};
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_rs1_reg))) {
        VL_WRITEF("[FAIL] %@: rs1_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_rs1_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 153, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_rs2_reg))) {
        VL_WRITEF("[FAIL] %@: rs2_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_rs2_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 159, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_pc_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 165, "");
    }
    if (VL_UNLIKELY(((0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                          >> 0x1bU))) 
                     != (0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[2U] 
                                   << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[1U] 
                                             >> 0x1bU)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out.op = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  6,(0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[2U] 
                               << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[1U] 
                                         >> 0x1bU))));
        VL_FINISH_MT("tb_decode_stage.sv", 171, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x16U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[1U] 
                                                 >> 0x16U))))) {
        VL_WRITEF("[FAIL] %@: rd_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[1U] 
                                             >> 0x16U)));
        VL_FINISH_MT("tb_decode_stage.sv", 177, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x11U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[1U] 
                                                 >> 0x11U))))) {
        VL_WRITEF("[FAIL] %@: rs1_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x11U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[1U] 
                                             >> 0x11U)));
        VL_FINISH_MT("tb_decode_stage.sv", 183, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0xcU)) != (0x1fU 
                                             & (__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[1U] 
                                                >> 0xcU))))) {
        VL_WRITEF("[FAIL] %@: rs2_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),5,(0x1fU & 
                                           (__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[1U] 
                                            >> 0xcU)));
        VL_FINISH_MT("tb_decode_stage.sv", 189, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[0U]))) {
        VL_WRITEF("[FAIL] %@: immediate = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[0U]);
        VL_FINISH_MT("tb_decode_stage.sv", 195, "");
    }
    if (VL_UNLIKELY(((0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]) 
                     != (0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[1U])))) {
        VL_WRITEF("[FAIL] %@: csr = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]),
                  12,(0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_instr_reg[1U]));
        VL_FINISH_MT("tb_decode_stage.sv", 201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_status_fwd_out)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_status_fwd_out);
        VL_FINISH_MT("tb_decode_stage.sv", 207, "");
    }
    if (VL_UNLIKELY(((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                       | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                           >> 0x1bU)))))
                       ? 2U : 0U) != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_status_back_out)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_status_back_out));
        VL_FINISH_MT("tb_decode_stage.sv", 213, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__2__exp_jump_addr_out))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name),
                  32,vlSelf->tb_decode_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__2__exp_jump_addr_out);
        VL_FINISH_MT("tb_decode_stage.sv", 219, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_decode_stage__DOT__check_outputs__2__test_name));
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0x2000000141ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0x2000000282ULL;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__jump_addr_in = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__back_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__fwd_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__wb_fwd 
        = vlSelf->tb_decode_stage__DOT__wb_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__mem_fwd 
        = vlSelf->tb_decode_stage__DOT__mem_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__exe_fwd 
        = vlSelf->tb_decode_stage__DOT__exe_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__pc = 0x1004U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__4__instr = 0x2081b3U;
    co_await vlSelf->__VtrigSched_h222ba3d2__0.trigger(
                                                       "@(negedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = __Vtask_tb_decode_stage__DOT__apply_inputs__4__instr;
    vlSelf->tb_decode_stage__DOT__program_counter_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__4__pc;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__4__exe_fwd;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__4__mem_fwd;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__4__wb_fwd;
    vlSelf->tb_decode_stage__DOT__status_forwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__4__fwd_status;
    vlSelf->tb_decode_stage__DOT__status_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__4__back_status;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__4__jump_addr_in;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_decode_stage.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_jump_addr_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_status_back_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_status_fwd_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[0U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[1U] = 0xd8c22002U;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[2U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_pc_reg = 0x1004U;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_rs2_reg = 0x14U;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_rs1_reg = 0xaU;
    __Vtask_tb_decode_stage__DOT__check_outputs__5__test_name = 
        std::string{"ADD decode"};
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_rs1_reg))) {
        VL_WRITEF("[FAIL] %@: rs1_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_rs1_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 153, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_rs2_reg))) {
        VL_WRITEF("[FAIL] %@: rs2_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_rs2_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 159, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_pc_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 165, "");
    }
    if (VL_UNLIKELY(((0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                          >> 0x1bU))) 
                     != (0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[2U] 
                                   << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[1U] 
                                             >> 0x1bU)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out.op = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  6,(0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[2U] 
                               << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[1U] 
                                         >> 0x1bU))));
        VL_FINISH_MT("tb_decode_stage.sv", 171, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x16U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[1U] 
                                                 >> 0x16U))))) {
        VL_WRITEF("[FAIL] %@: rd_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[1U] 
                                             >> 0x16U)));
        VL_FINISH_MT("tb_decode_stage.sv", 177, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x11U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[1U] 
                                                 >> 0x11U))))) {
        VL_WRITEF("[FAIL] %@: rs1_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x11U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[1U] 
                                             >> 0x11U)));
        VL_FINISH_MT("tb_decode_stage.sv", 183, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0xcU)) != (0x1fU 
                                             & (__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[1U] 
                                                >> 0xcU))))) {
        VL_WRITEF("[FAIL] %@: rs2_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),5,(0x1fU & 
                                           (__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[1U] 
                                            >> 0xcU)));
        VL_FINISH_MT("tb_decode_stage.sv", 189, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[0U]))) {
        VL_WRITEF("[FAIL] %@: immediate = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[0U]);
        VL_FINISH_MT("tb_decode_stage.sv", 195, "");
    }
    if (VL_UNLIKELY(((0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]) 
                     != (0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[1U])))) {
        VL_WRITEF("[FAIL] %@: csr = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]),
                  12,(0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_instr_reg[1U]));
        VL_FINISH_MT("tb_decode_stage.sv", 201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_status_fwd_out)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_status_fwd_out);
        VL_FINISH_MT("tb_decode_stage.sv", 207, "");
    }
    if (VL_UNLIKELY(((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                       | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                           >> 0x1bU)))))
                       ? 2U : 0U) != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_status_back_out)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_status_back_out));
        VL_FINISH_MT("tb_decode_stage.sv", 213, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__5__exp_jump_addr_out))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name),
                  32,vlSelf->tb_decode_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__5__exp_jump_addr_out);
        VL_FINISH_MT("tb_decode_stage.sv", 219, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_decode_stage__DOT__check_outputs__5__test_name));
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = 0x2000000544ULL;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__jump_addr_in = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__back_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__fwd_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__wb_fwd 
        = vlSelf->tb_decode_stage__DOT__wb_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__mem_fwd 
        = vlSelf->tb_decode_stage__DOT__mem_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__exe_fwd 
        = vlSelf->tb_decode_stage__DOT__exe_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__pc = 0x1008U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__7__instr = 0x120293U;
    co_await vlSelf->__VtrigSched_h222ba3d2__0.trigger(
                                                       "@(negedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = __Vtask_tb_decode_stage__DOT__apply_inputs__7__instr;
    vlSelf->tb_decode_stage__DOT__program_counter_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__7__pc;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__7__exe_fwd;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__7__mem_fwd;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__7__wb_fwd;
    vlSelf->tb_decode_stage__DOT__status_forwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__7__fwd_status;
    vlSelf->tb_decode_stage__DOT__status_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__7__back_status;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__7__jump_addr_in;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_decode_stage.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_jump_addr_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_status_back_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_status_fwd_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[0U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[1U] = 0x91481001U;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[2U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_pc_reg = 0x1008U;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_rs2_reg = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_rs1_reg = 0x2aU;
    __Vtask_tb_decode_stage__DOT__check_outputs__8__test_name = 
        std::string{"EX forwarding"};
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_rs1_reg))) {
        VL_WRITEF("[FAIL] %@: rs1_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_rs1_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 153, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_rs2_reg))) {
        VL_WRITEF("[FAIL] %@: rs2_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_rs2_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 159, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_pc_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 165, "");
    }
    if (VL_UNLIKELY(((0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                          >> 0x1bU))) 
                     != (0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[2U] 
                                   << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[1U] 
                                             >> 0x1bU)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out.op = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  6,(0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[2U] 
                               << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[1U] 
                                         >> 0x1bU))));
        VL_FINISH_MT("tb_decode_stage.sv", 171, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x16U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[1U] 
                                                 >> 0x16U))))) {
        VL_WRITEF("[FAIL] %@: rd_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[1U] 
                                             >> 0x16U)));
        VL_FINISH_MT("tb_decode_stage.sv", 177, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x11U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[1U] 
                                                 >> 0x11U))))) {
        VL_WRITEF("[FAIL] %@: rs1_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x11U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[1U] 
                                             >> 0x11U)));
        VL_FINISH_MT("tb_decode_stage.sv", 183, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0xcU)) != (0x1fU 
                                             & (__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[1U] 
                                                >> 0xcU))))) {
        VL_WRITEF("[FAIL] %@: rs2_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),5,(0x1fU & 
                                           (__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[1U] 
                                            >> 0xcU)));
        VL_FINISH_MT("tb_decode_stage.sv", 189, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[0U]))) {
        VL_WRITEF("[FAIL] %@: immediate = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[0U]);
        VL_FINISH_MT("tb_decode_stage.sv", 195, "");
    }
    if (VL_UNLIKELY(((0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]) 
                     != (0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[1U])))) {
        VL_WRITEF("[FAIL] %@: csr = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]),
                  12,(0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_instr_reg[1U]));
        VL_FINISH_MT("tb_decode_stage.sv", 201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_status_fwd_out)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_status_fwd_out);
        VL_FINISH_MT("tb_decode_stage.sv", 207, "");
    }
    if (VL_UNLIKELY(((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                       | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                           >> 0x1bU)))))
                       ? 2U : 0U) != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_status_back_out)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_status_back_out));
        VL_FINISH_MT("tb_decode_stage.sv", 213, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__8__exp_jump_addr_out))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name),
                  32,vlSelf->tb_decode_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__8__exp_jump_addr_out);
        VL_FINISH_MT("tb_decode_stage.sv", 219, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_decode_stage__DOT__check_outputs__8__test_name));
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0x2000000c66ULL;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__jump_addr_in = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__back_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__fwd_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__wb_fwd 
        = vlSelf->tb_decode_stage__DOT__wb_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__mem_fwd 
        = vlSelf->tb_decode_stage__DOT__mem_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__exe_fwd 
        = vlSelf->tb_decode_stage__DOT__exe_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__pc = 0x100cU;
    __Vtask_tb_decode_stage__DOT__apply_inputs__10__instr = 0x230393U;
    co_await vlSelf->__VtrigSched_h222ba3d2__0.trigger(
                                                       "@(negedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = __Vtask_tb_decode_stage__DOT__apply_inputs__10__instr;
    vlSelf->tb_decode_stage__DOT__program_counter_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__10__pc;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__10__exe_fwd;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__10__mem_fwd;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__10__wb_fwd;
    vlSelf->tb_decode_stage__DOT__status_forwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__10__fwd_status;
    vlSelf->tb_decode_stage__DOT__status_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__10__back_status;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__10__jump_addr_in;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_decode_stage.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_jump_addr_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_status_back_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_status_fwd_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[0U] = 2U;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[1U] = 0x91cc2002U;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[2U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_pc_reg = 0x100cU;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_rs2_reg = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_rs1_reg = 0x63U;
    __Vtask_tb_decode_stage__DOT__check_outputs__11__test_name = 
        std::string{"MEM forwarding"};
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_rs1_reg))) {
        VL_WRITEF("[FAIL] %@: rs1_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_rs1_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 153, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_rs2_reg))) {
        VL_WRITEF("[FAIL] %@: rs2_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_rs2_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 159, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_pc_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 165, "");
    }
    if (VL_UNLIKELY(((0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                          >> 0x1bU))) 
                     != (0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[2U] 
                                   << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[1U] 
                                             >> 0x1bU)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out.op = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  6,(0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[2U] 
                               << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[1U] 
                                         >> 0x1bU))));
        VL_FINISH_MT("tb_decode_stage.sv", 171, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x16U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[1U] 
                                                 >> 0x16U))))) {
        VL_WRITEF("[FAIL] %@: rd_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[1U] 
                                             >> 0x16U)));
        VL_FINISH_MT("tb_decode_stage.sv", 177, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x11U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[1U] 
                                                 >> 0x11U))))) {
        VL_WRITEF("[FAIL] %@: rs1_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x11U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[1U] 
                                             >> 0x11U)));
        VL_FINISH_MT("tb_decode_stage.sv", 183, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0xcU)) != (0x1fU 
                                             & (__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[1U] 
                                                >> 0xcU))))) {
        VL_WRITEF("[FAIL] %@: rs2_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),5,(0x1fU & 
                                           (__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[1U] 
                                            >> 0xcU)));
        VL_FINISH_MT("tb_decode_stage.sv", 189, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[0U]))) {
        VL_WRITEF("[FAIL] %@: immediate = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[0U]);
        VL_FINISH_MT("tb_decode_stage.sv", 195, "");
    }
    if (VL_UNLIKELY(((0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]) 
                     != (0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[1U])))) {
        VL_WRITEF("[FAIL] %@: csr = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]),
                  12,(0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_instr_reg[1U]));
        VL_FINISH_MT("tb_decode_stage.sv", 201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_status_fwd_out)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_status_fwd_out);
        VL_FINISH_MT("tb_decode_stage.sv", 207, "");
    }
    if (VL_UNLIKELY(((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                       | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                           >> 0x1bU)))))
                       ? 2U : 0U) != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_status_back_out)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_status_back_out));
        VL_FINISH_MT("tb_decode_stage.sv", 213, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__11__exp_jump_addr_out))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name),
                  32,vlSelf->tb_decode_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__11__exp_jump_addr_out);
        VL_FINISH_MT("tb_decode_stage.sv", 219, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_decode_stage__DOT__check_outputs__11__test_name));
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = 0x3555400021ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0x3777600021ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0x3999800021ULL;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__jump_addr_in = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__back_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__fwd_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__wb_fwd 
        = vlSelf->tb_decode_stage__DOT__wb_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__mem_fwd 
        = vlSelf->tb_decode_stage__DOT__mem_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__exe_fwd 
        = vlSelf->tb_decode_stage__DOT__exe_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__pc = 0x1010U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__13__instr = 0x108113U;
    co_await vlSelf->__VtrigSched_h222ba3d2__0.trigger(
                                                       "@(negedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = __Vtask_tb_decode_stage__DOT__apply_inputs__13__instr;
    vlSelf->tb_decode_stage__DOT__program_counter_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__13__pc;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__13__exe_fwd;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__13__mem_fwd;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__13__wb_fwd;
    vlSelf->tb_decode_stage__DOT__status_forwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__13__fwd_status;
    vlSelf->tb_decode_stage__DOT__status_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__13__back_status;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__13__jump_addr_in;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_decode_stage.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_jump_addr_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_status_back_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_status_fwd_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[0U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[1U] = 0x90821001U;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[2U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_pc_reg = 0x1010U;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_rs2_reg = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_rs1_reg = 0xaaaa0001U;
    __Vtask_tb_decode_stage__DOT__check_outputs__14__test_name = 
        std::string{"FORWARDING PRIORITY EX OVER MEM/WB"};
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_rs1_reg))) {
        VL_WRITEF("[FAIL] %@: rs1_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_rs1_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 153, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_rs2_reg))) {
        VL_WRITEF("[FAIL] %@: rs2_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_rs2_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 159, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_pc_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 165, "");
    }
    if (VL_UNLIKELY(((0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                          >> 0x1bU))) 
                     != (0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[2U] 
                                   << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[1U] 
                                             >> 0x1bU)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out.op = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  6,(0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[2U] 
                               << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[1U] 
                                         >> 0x1bU))));
        VL_FINISH_MT("tb_decode_stage.sv", 171, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x16U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[1U] 
                                                 >> 0x16U))))) {
        VL_WRITEF("[FAIL] %@: rd_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[1U] 
                                             >> 0x16U)));
        VL_FINISH_MT("tb_decode_stage.sv", 177, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x11U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[1U] 
                                                 >> 0x11U))))) {
        VL_WRITEF("[FAIL] %@: rs1_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x11U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[1U] 
                                             >> 0x11U)));
        VL_FINISH_MT("tb_decode_stage.sv", 183, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0xcU)) != (0x1fU 
                                             & (__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[1U] 
                                                >> 0xcU))))) {
        VL_WRITEF("[FAIL] %@: rs2_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),5,(0x1fU & 
                                           (__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[1U] 
                                            >> 0xcU)));
        VL_FINISH_MT("tb_decode_stage.sv", 189, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[0U]))) {
        VL_WRITEF("[FAIL] %@: immediate = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[0U]);
        VL_FINISH_MT("tb_decode_stage.sv", 195, "");
    }
    if (VL_UNLIKELY(((0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]) 
                     != (0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[1U])))) {
        VL_WRITEF("[FAIL] %@: csr = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]),
                  12,(0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_instr_reg[1U]));
        VL_FINISH_MT("tb_decode_stage.sv", 201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_status_fwd_out)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_status_fwd_out);
        VL_FINISH_MT("tb_decode_stage.sv", 207, "");
    }
    if (VL_UNLIKELY(((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                       | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                           >> 0x1bU)))))
                       ? 2U : 0U) != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_status_back_out)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_status_back_out));
        VL_FINISH_MT("tb_decode_stage.sv", 213, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__14__exp_jump_addr_out))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name),
                  32,vlSelf->tb_decode_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__14__exp_jump_addr_out);
        VL_FINISH_MT("tb_decode_stage.sv", 219, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_decode_stage__DOT__check_outputs__14__test_name));
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0x2000000141ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0x2000000282ULL;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__jump_addr_in = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__back_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__fwd_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__wb_fwd 
        = vlSelf->tb_decode_stage__DOT__wb_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__mem_fwd 
        = vlSelf->tb_decode_stage__DOT__mem_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__exe_fwd 
        = vlSelf->tb_decode_stage__DOT__exe_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__pc = 0x1014U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__16__instr = 0x2081b3U;
    co_await vlSelf->__VtrigSched_h222ba3d2__0.trigger(
                                                       "@(negedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = __Vtask_tb_decode_stage__DOT__apply_inputs__16__instr;
    vlSelf->tb_decode_stage__DOT__program_counter_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__16__pc;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__16__exe_fwd;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__16__mem_fwd;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__16__wb_fwd;
    vlSelf->tb_decode_stage__DOT__status_forwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__16__fwd_status;
    vlSelf->tb_decode_stage__DOT__status_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__16__back_status;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__16__jump_addr_in;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_decode_stage.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_jump_addr_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_status_back_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_status_fwd_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[0U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[1U] = 0xd8c22002U;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[2U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_pc_reg = 0x1014U;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_rs2_reg = 0x14U;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_rs1_reg = 0xaU;
    __Vtask_tb_decode_stage__DOT__check_outputs__17__test_name = 
        std::string{"STALL BASELINE"};
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_rs1_reg))) {
        VL_WRITEF("[FAIL] %@: rs1_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_rs1_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 153, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_rs2_reg))) {
        VL_WRITEF("[FAIL] %@: rs2_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_rs2_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 159, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_pc_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 165, "");
    }
    if (VL_UNLIKELY(((0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                          >> 0x1bU))) 
                     != (0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[2U] 
                                   << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[1U] 
                                             >> 0x1bU)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out.op = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  6,(0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[2U] 
                               << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[1U] 
                                         >> 0x1bU))));
        VL_FINISH_MT("tb_decode_stage.sv", 171, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x16U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[1U] 
                                                 >> 0x16U))))) {
        VL_WRITEF("[FAIL] %@: rd_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[1U] 
                                             >> 0x16U)));
        VL_FINISH_MT("tb_decode_stage.sv", 177, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x11U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[1U] 
                                                 >> 0x11U))))) {
        VL_WRITEF("[FAIL] %@: rs1_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x11U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[1U] 
                                             >> 0x11U)));
        VL_FINISH_MT("tb_decode_stage.sv", 183, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0xcU)) != (0x1fU 
                                             & (__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[1U] 
                                                >> 0xcU))))) {
        VL_WRITEF("[FAIL] %@: rs2_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),5,(0x1fU & 
                                           (__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[1U] 
                                            >> 0xcU)));
        VL_FINISH_MT("tb_decode_stage.sv", 189, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[0U]))) {
        VL_WRITEF("[FAIL] %@: immediate = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[0U]);
        VL_FINISH_MT("tb_decode_stage.sv", 195, "");
    }
    if (VL_UNLIKELY(((0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]) 
                     != (0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[1U])))) {
        VL_WRITEF("[FAIL] %@: csr = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]),
                  12,(0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_instr_reg[1U]));
        VL_FINISH_MT("tb_decode_stage.sv", 201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_status_fwd_out)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_status_fwd_out);
        VL_FINISH_MT("tb_decode_stage.sv", 207, "");
    }
    if (VL_UNLIKELY(((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                       | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                           >> 0x1bU)))))
                       ? 2U : 0U) != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_status_back_out)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_status_back_out));
        VL_FINISH_MT("tb_decode_stage.sv", 213, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__17__exp_jump_addr_out))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name),
                  32,vlSelf->tb_decode_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__17__exp_jump_addr_out);
        VL_FINISH_MT("tb_decode_stage.sv", 219, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_decode_stage__DOT__check_outputs__17__test_name));
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__jump_addr_in = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__back_status = 1U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__fwd_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__wb_fwd 
        = vlSelf->tb_decode_stage__DOT__wb_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__mem_fwd 
        = vlSelf->tb_decode_stage__DOT__mem_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__exe_fwd 
        = vlSelf->tb_decode_stage__DOT__exe_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__pc = 0x1018U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__18__instr = 0x310133U;
    co_await vlSelf->__VtrigSched_h222ba3d2__0.trigger(
                                                       "@(negedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = __Vtask_tb_decode_stage__DOT__apply_inputs__18__instr;
    vlSelf->tb_decode_stage__DOT__program_counter_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__18__pc;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__18__exe_fwd;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__18__mem_fwd;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__18__wb_fwd;
    vlSelf->tb_decode_stage__DOT__status_forwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__18__fwd_status;
    vlSelf->tb_decode_stage__DOT__status_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__18__back_status;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__18__jump_addr_in;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_decode_stage.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_jump_addr_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_status_back_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_status_fwd_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[0U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[1U] = 0xd8c22002U;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[2U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_pc_reg = 0x1014U;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_rs2_reg = 0x14U;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_rs1_reg = 0xaU;
    __Vtask_tb_decode_stage__DOT__check_outputs__19__test_name = 
        std::string{"STALL HOLD"};
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_rs1_reg))) {
        VL_WRITEF("[FAIL] %@: rs1_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_rs1_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 153, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_rs2_reg))) {
        VL_WRITEF("[FAIL] %@: rs2_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_rs2_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 159, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_pc_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 165, "");
    }
    if (VL_UNLIKELY(((0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                          >> 0x1bU))) 
                     != (0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[2U] 
                                   << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[1U] 
                                             >> 0x1bU)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out.op = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  6,(0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[2U] 
                               << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[1U] 
                                         >> 0x1bU))));
        VL_FINISH_MT("tb_decode_stage.sv", 171, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x16U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[1U] 
                                                 >> 0x16U))))) {
        VL_WRITEF("[FAIL] %@: rd_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[1U] 
                                             >> 0x16U)));
        VL_FINISH_MT("tb_decode_stage.sv", 177, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x11U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[1U] 
                                                 >> 0x11U))))) {
        VL_WRITEF("[FAIL] %@: rs1_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x11U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[1U] 
                                             >> 0x11U)));
        VL_FINISH_MT("tb_decode_stage.sv", 183, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0xcU)) != (0x1fU 
                                             & (__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[1U] 
                                                >> 0xcU))))) {
        VL_WRITEF("[FAIL] %@: rs2_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),5,(0x1fU & 
                                           (__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[1U] 
                                            >> 0xcU)));
        VL_FINISH_MT("tb_decode_stage.sv", 189, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[0U]))) {
        VL_WRITEF("[FAIL] %@: immediate = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[0U]);
        VL_FINISH_MT("tb_decode_stage.sv", 195, "");
    }
    if (VL_UNLIKELY(((0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]) 
                     != (0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[1U])))) {
        VL_WRITEF("[FAIL] %@: csr = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]),
                  12,(0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_instr_reg[1U]));
        VL_FINISH_MT("tb_decode_stage.sv", 201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_status_fwd_out)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_status_fwd_out);
        VL_FINISH_MT("tb_decode_stage.sv", 207, "");
    }
    if (VL_UNLIKELY(((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                       | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                           >> 0x1bU)))))
                       ? 2U : 0U) != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_status_back_out)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_status_back_out));
        VL_FINISH_MT("tb_decode_stage.sv", 213, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__19__exp_jump_addr_out))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name),
                  32,vlSelf->tb_decode_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__19__exp_jump_addr_out);
        VL_FINISH_MT("tb_decode_stage.sv", 219, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_decode_stage__DOT__check_outputs__19__test_name));
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0ULL;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__jump_addr_in = 0x2000U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__back_status = 2U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__fwd_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__wb_fwd 
        = vlSelf->tb_decode_stage__DOT__wb_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__mem_fwd 
        = vlSelf->tb_decode_stage__DOT__mem_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__exe_fwd 
        = vlSelf->tb_decode_stage__DOT__exe_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__pc = 0x101cU;
    __Vtask_tb_decode_stage__DOT__apply_inputs__21__instr = 0x2081b3U;
    co_await vlSelf->__VtrigSched_h222ba3d2__0.trigger(
                                                       "@(negedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = __Vtask_tb_decode_stage__DOT__apply_inputs__21__instr;
    vlSelf->tb_decode_stage__DOT__program_counter_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__21__pc;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__21__exe_fwd;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__21__mem_fwd;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__21__wb_fwd;
    vlSelf->tb_decode_stage__DOT__status_forwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__21__fwd_status;
    vlSelf->tb_decode_stage__DOT__status_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__21__back_status;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__21__jump_addr_in;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_decode_stage.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_jump_addr_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_status_back_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_status_fwd_out = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[0U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[1U] = 0x90000000U;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[2U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_pc_reg = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_rs2_reg = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_rs1_reg = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__22__test_name = 
        std::string{"JUMP FLUSH"};
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_rs1_reg))) {
        VL_WRITEF("[FAIL] %@: rs1_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_rs1_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 153, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_rs2_reg))) {
        VL_WRITEF("[FAIL] %@: rs2_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_rs2_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 159, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_pc_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 165, "");
    }
    if (VL_UNLIKELY(((0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                          >> 0x1bU))) 
                     != (0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[2U] 
                                   << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[1U] 
                                             >> 0x1bU)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out.op = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  6,(0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[2U] 
                               << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[1U] 
                                         >> 0x1bU))));
        VL_FINISH_MT("tb_decode_stage.sv", 171, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x16U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[1U] 
                                                 >> 0x16U))))) {
        VL_WRITEF("[FAIL] %@: rd_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[1U] 
                                             >> 0x16U)));
        VL_FINISH_MT("tb_decode_stage.sv", 177, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x11U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[1U] 
                                                 >> 0x11U))))) {
        VL_WRITEF("[FAIL] %@: rs1_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x11U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[1U] 
                                             >> 0x11U)));
        VL_FINISH_MT("tb_decode_stage.sv", 183, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0xcU)) != (0x1fU 
                                             & (__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[1U] 
                                                >> 0xcU))))) {
        VL_WRITEF("[FAIL] %@: rs2_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),5,(0x1fU & 
                                           (__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[1U] 
                                            >> 0xcU)));
        VL_FINISH_MT("tb_decode_stage.sv", 189, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[0U]))) {
        VL_WRITEF("[FAIL] %@: immediate = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[0U]);
        VL_FINISH_MT("tb_decode_stage.sv", 195, "");
    }
    if (VL_UNLIKELY(((0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]) 
                     != (0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[1U])))) {
        VL_WRITEF("[FAIL] %@: csr = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]),
                  12,(0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_instr_reg[1U]));
        VL_FINISH_MT("tb_decode_stage.sv", 201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_status_fwd_out)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_status_fwd_out);
        VL_FINISH_MT("tb_decode_stage.sv", 207, "");
    }
    if (VL_UNLIKELY(((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                       | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                           >> 0x1bU)))))
                       ? 2U : 0U) != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_status_back_out)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_status_back_out));
        VL_FINISH_MT("tb_decode_stage.sv", 213, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__22__exp_jump_addr_out))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name),
                  32,vlSelf->tb_decode_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__22__exp_jump_addr_out);
        VL_FINISH_MT("tb_decode_stage.sv", 219, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_decode_stage__DOT__check_outputs__22__test_name));
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0x2000000141ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0x2000000282ULL;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__jump_addr_in = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__back_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__fwd_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__wb_fwd 
        = vlSelf->tb_decode_stage__DOT__wb_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__mem_fwd 
        = vlSelf->tb_decode_stage__DOT__mem_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__exe_fwd 
        = vlSelf->tb_decode_stage__DOT__exe_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__pc = 0x3000U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__23__instr = 0x208463U;
    co_await vlSelf->__VtrigSched_h222ba3d2__0.trigger(
                                                       "@(negedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = __Vtask_tb_decode_stage__DOT__apply_inputs__23__instr;
    vlSelf->tb_decode_stage__DOT__program_counter_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__23__pc;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__23__exe_fwd;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__23__mem_fwd;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__23__wb_fwd;
    vlSelf->tb_decode_stage__DOT__status_forwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__23__fwd_status;
    vlSelf->tb_decode_stage__DOT__status_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__23__back_status;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__23__jump_addr_in;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_decode_stage.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_jump_addr_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_status_back_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_status_fwd_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[0U] = 8U;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[1U] = 0x22022002U;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[2U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_pc_reg = 0x3000U;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_rs2_reg = 0x14U;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_rs1_reg = 0xaU;
    __Vtask_tb_decode_stage__DOT__check_outputs__24__test_name = 
        std::string{"BEQ decode"};
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_rs1_reg))) {
        VL_WRITEF("[FAIL] %@: rs1_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_rs1_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 153, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_rs2_reg))) {
        VL_WRITEF("[FAIL] %@: rs2_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_rs2_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 159, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_pc_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 165, "");
    }
    if (VL_UNLIKELY(((0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                          >> 0x1bU))) 
                     != (0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[2U] 
                                   << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[1U] 
                                             >> 0x1bU)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out.op = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  6,(0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[2U] 
                               << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[1U] 
                                         >> 0x1bU))));
        VL_FINISH_MT("tb_decode_stage.sv", 171, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x16U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[1U] 
                                                 >> 0x16U))))) {
        VL_WRITEF("[FAIL] %@: rd_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[1U] 
                                             >> 0x16U)));
        VL_FINISH_MT("tb_decode_stage.sv", 177, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x11U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[1U] 
                                                 >> 0x11U))))) {
        VL_WRITEF("[FAIL] %@: rs1_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x11U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[1U] 
                                             >> 0x11U)));
        VL_FINISH_MT("tb_decode_stage.sv", 183, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0xcU)) != (0x1fU 
                                             & (__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[1U] 
                                                >> 0xcU))))) {
        VL_WRITEF("[FAIL] %@: rs2_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),5,(0x1fU & 
                                           (__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[1U] 
                                            >> 0xcU)));
        VL_FINISH_MT("tb_decode_stage.sv", 189, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[0U]))) {
        VL_WRITEF("[FAIL] %@: immediate = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[0U]);
        VL_FINISH_MT("tb_decode_stage.sv", 195, "");
    }
    if (VL_UNLIKELY(((0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]) 
                     != (0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[1U])))) {
        VL_WRITEF("[FAIL] %@: csr = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]),
                  12,(0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_instr_reg[1U]));
        VL_FINISH_MT("tb_decode_stage.sv", 201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_status_fwd_out)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_status_fwd_out);
        VL_FINISH_MT("tb_decode_stage.sv", 207, "");
    }
    if (VL_UNLIKELY(((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                       | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                           >> 0x1bU)))))
                       ? 2U : 0U) != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_status_back_out)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_status_back_out));
        VL_FINISH_MT("tb_decode_stage.sv", 213, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__24__exp_jump_addr_out))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name),
                  32,vlSelf->tb_decode_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__24__exp_jump_addr_out);
        VL_FINISH_MT("tb_decode_stage.sv", 219, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_decode_stage__DOT__check_outputs__24__test_name));
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in = 0ULL;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in = 0ULL;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__jump_addr_in = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__back_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__fwd_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__wb_fwd 
        = vlSelf->tb_decode_stage__DOT__wb_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__mem_fwd 
        = vlSelf->tb_decode_stage__DOT__mem_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__exe_fwd 
        = vlSelf->tb_decode_stage__DOT__exe_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__pc = 0x4000U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__27__instr = 0x300110f3U;
    co_await vlSelf->__VtrigSched_h222ba3d2__0.trigger(
                                                       "@(negedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = __Vtask_tb_decode_stage__DOT__apply_inputs__27__instr;
    vlSelf->tb_decode_stage__DOT__program_counter_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__27__pc;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__27__exe_fwd;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__27__mem_fwd;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__27__wb_fwd;
    vlSelf->tb_decode_stage__DOT__status_forwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__27__fwd_status;
    vlSelf->tb_decode_stage__DOT__status_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__27__back_status;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__27__jump_addr_in;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_decode_stage.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_jump_addr_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_status_back_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_status_fwd_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[0U] = 0x300U;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[1U] = 0x48440300U;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_pc_reg = 0x4000U;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_rs2_reg = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_rs1_reg = 0x14U;
    __Vtask_tb_decode_stage__DOT__check_outputs__28__test_name = 
        std::string{"CSRRW decode"};
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_rs1_reg))) {
        VL_WRITEF("[FAIL] %@: rs1_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_rs1_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 153, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_rs2_reg))) {
        VL_WRITEF("[FAIL] %@: rs2_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_rs2_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 159, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_pc_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 165, "");
    }
    if (VL_UNLIKELY(((0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                          >> 0x1bU))) 
                     != (0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[2U] 
                                   << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[1U] 
                                             >> 0x1bU)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out.op = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  6,(0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[2U] 
                               << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[1U] 
                                         >> 0x1bU))));
        VL_FINISH_MT("tb_decode_stage.sv", 171, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x16U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[1U] 
                                                 >> 0x16U))))) {
        VL_WRITEF("[FAIL] %@: rd_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[1U] 
                                             >> 0x16U)));
        VL_FINISH_MT("tb_decode_stage.sv", 177, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x11U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[1U] 
                                                 >> 0x11U))))) {
        VL_WRITEF("[FAIL] %@: rs1_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x11U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[1U] 
                                             >> 0x11U)));
        VL_FINISH_MT("tb_decode_stage.sv", 183, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0xcU)) != (0x1fU 
                                             & (__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[1U] 
                                                >> 0xcU))))) {
        VL_WRITEF("[FAIL] %@: rs2_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),5,(0x1fU & 
                                           (__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[1U] 
                                            >> 0xcU)));
        VL_FINISH_MT("tb_decode_stage.sv", 189, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[0U]))) {
        VL_WRITEF("[FAIL] %@: immediate = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[0U]);
        VL_FINISH_MT("tb_decode_stage.sv", 195, "");
    }
    if (VL_UNLIKELY(((0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]) 
                     != (0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[1U])))) {
        VL_WRITEF("[FAIL] %@: csr = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]),
                  12,(0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_instr_reg[1U]));
        VL_FINISH_MT("tb_decode_stage.sv", 201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_status_fwd_out)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_status_fwd_out);
        VL_FINISH_MT("tb_decode_stage.sv", 207, "");
    }
    if (VL_UNLIKELY(((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                       | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                           >> 0x1bU)))))
                       ? 2U : 0U) != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_status_back_out)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_status_back_out));
        VL_FINISH_MT("tb_decode_stage.sv", 213, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__28__exp_jump_addr_out))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name),
                  32,vlSelf->tb_decode_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__28__exp_jump_addr_out);
        VL_FINISH_MT("tb_decode_stage.sv", 219, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_decode_stage__DOT__check_outputs__28__test_name));
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__jump_addr_in = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__back_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__fwd_status = 0U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__wb_fwd 
        = vlSelf->tb_decode_stage__DOT__wb_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__mem_fwd 
        = vlSelf->tb_decode_stage__DOT__mem_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__exe_fwd 
        = vlSelf->tb_decode_stage__DOT__exe_forwarding_in;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__pc = 0x5000U;
    __Vtask_tb_decode_stage__DOT__apply_inputs__29__instr = 0xffffffffU;
    co_await vlSelf->__VtrigSched_h222ba3d2__0.trigger(
                                                       "@(negedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__instruction_in = __Vtask_tb_decode_stage__DOT__apply_inputs__29__instr;
    vlSelf->tb_decode_stage__DOT__program_counter_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__29__pc;
    vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__29__exe_fwd;
    vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__29__mem_fwd;
    vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__29__wb_fwd;
    vlSelf->tb_decode_stage__DOT__status_forwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__29__fwd_status;
    vlSelf->tb_decode_stage__DOT__status_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__29__back_status;
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_decode_stage__DOT__apply_inputs__29__jump_addr_in;
    co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                       "@(posedge tb_decode_stage.clk)", 
                                                       "tb_decode_stage.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_decode_stage.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_jump_addr_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_status_back_out = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_status_fwd_out = 4U;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[0U] = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[1U] = 0x8fffffffU;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[2U] = 1U;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_pc_reg = 0x5000U;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_rs2_reg = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_rs1_reg = 0U;
    __Vtask_tb_decode_stage__DOT__check_outputs__30__test_name = 
        std::string{"ILLEGAL instruction"};
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_rs1_reg))) {
        VL_WRITEF("[FAIL] %@: rs1_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_rs1_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 153, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_rs2_reg))) {
        VL_WRITEF("[FAIL] %@: rs2_data_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_rs2_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 159, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_pc_reg))) {
        VL_WRITEF("[FAIL] %@: program_counter_reg_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_pc_reg);
        VL_FINISH_MT("tb_decode_stage.sv", 165, "");
    }
    if (VL_UNLIKELY(((0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                          >> 0x1bU))) 
                     != (0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[2U] 
                                   << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[1U] 
                                             >> 0x1bU)))))) {
        VL_WRITEF("[FAIL] %@: instruction_reg_out.op = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  6,(0x3fU & ((__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[2U] 
                               << 5U) | (__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[1U] 
                                         >> 0x1bU))));
        VL_FINISH_MT("tb_decode_stage.sv", 171, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x16U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[1U] 
                                                 >> 0x16U))))) {
        VL_WRITEF("[FAIL] %@: rd_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[1U] 
                                             >> 0x16U)));
        VL_FINISH_MT("tb_decode_stage.sv", 177, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0x11U)) != (0x1fU 
                                              & (__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[1U] 
                                                 >> 0x11U))))) {
        VL_WRITEF("[FAIL] %@: rs1_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x11U)),5,(0x1fU & 
                                            (__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[1U] 
                                             >> 0x11U)));
        VL_FINISH_MT("tb_decode_stage.sv", 183, "");
    }
    if (VL_UNLIKELY(((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                               >> 0xcU)) != (0x1fU 
                                             & (__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[1U] 
                                                >> 0xcU))))) {
        VL_WRITEF("[FAIL] %@: rs2_address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),5,(0x1fU & 
                                           (__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[1U] 
                                            >> 0xcU)));
        VL_FINISH_MT("tb_decode_stage.sv", 189, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[0U]))) {
        VL_WRITEF("[FAIL] %@: immediate = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[0U]);
        VL_FINISH_MT("tb_decode_stage.sv", 195, "");
    }
    if (VL_UNLIKELY(((0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]) 
                     != (0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[1U])))) {
        VL_WRITEF("[FAIL] %@: csr = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]),
                  12,(0xfffU & __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_instr_reg[1U]));
        VL_FINISH_MT("tb_decode_stage.sv", 201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out) 
                     != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_status_fwd_out)))) {
        VL_WRITEF("[FAIL] %@: status_forwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_out),
                  4,__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_status_fwd_out);
        VL_FINISH_MT("tb_decode_stage.sv", 207, "");
    }
    if (VL_UNLIKELY(((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                       | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                           >> 0x1bU)))))
                       ? 2U : 0U) != (IData)(__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_status_back_out)))) {
        VL_WRITEF("[FAIL] %@: status_backwards_out = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),2,(IData)(__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_status_back_out));
        VL_FINISH_MT("tb_decode_stage.sv", 213, "");
    }
    if (VL_UNLIKELY((vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
                     != __Vtask_tb_decode_stage__DOT__check_outputs__30__exp_jump_addr_out))) {
        VL_WRITEF("[FAIL] %@: jump_address_backwards_out = %x, expected %x\n",
                  -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name),
                  32,vlSelf->tb_decode_stage__DOT__jump_address_backwards_out,
                  32,__Vtask_tb_decode_stage__DOT__check_outputs__30__exp_jump_addr_out);
        VL_FINISH_MT("tb_decode_stage.sv", 219, "");
    }
    VL_WRITEF("[PASS] %@\n\n=====================================\nALL DECODE_STAGE TESTS PASSED\n=====================================\n\n",
              -1,&(__Vtask_tb_decode_stage__DOT__check_outputs__30__test_name));
    VL_FINISH_MT("tb_decode_stage.sv", 742, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_decode_stage___024root___eval_initial__TOP__2(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h222ba413__0.trigger(
                                                           "@(posedge tb_decode_stage.clk)", 
                                                           "tb_decode_stage.sv", 
                                                           230);
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_decode_stage.sv", 
                                           231);
        VL_WRITEF("--------------------------------\nTIME                       = %0t\ninstruction_in             = %x\nprogram_counter_in         = %x\nstatus_forwards_in         = %0#\nstatus_backwards_in        = %0#\nrs1_data_reg_out           = %x\nrs2_data_reg_out           = %x\nprogram_counter_reg_out    = %x\ninstruction_reg_out.op     = %0#\ninstruction_reg_out.rd     = %0#\ninstruction_reg_out.rs1    = %0#\ninstruction_reg_out.rs2    = %0#\ninstruction_reg_out.imm    = %x\ninstruction_reg_out.csr    = %0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_decode_stage__DOT__instruction_in,
                  32,vlSelf->tb_decode_stage__DOT__program_counter_in,
                  4,(IData)(vlSelf->tb_decode_stage__DOT__status_forwards_in),
                  2,vlSelf->tb_decode_stage__DOT__status_backwards_in,
                  32,vlSelf->tb_decode_stage__DOT__rs1_data_reg_out,
                  32,vlSelf->tb_decode_stage__DOT__rs2_data_reg_out,
                  32,vlSelf->tb_decode_stage__DOT__program_counter_reg_out,
                  6,(0x3fU & ((vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
                               << 5U) | (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                         >> 0x1bU))),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0x16U)),5,(0x1fU & 
                                            (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                                             >> 0x11U)),
                  5,(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
                              >> 0xcU)),32,vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U],
                  12,(0xfffU & vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U]));
        VL_WRITEF("status_forwards_out        = %0#\nstatus_backwards_out       = %0#\njump_address_backwards_out = %x\n--------------------------------\n",
                  4,vlSelf->tb_decode_stage__DOT__status_forwards_out,
                  2,(((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                        << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1bU)))) 
                      | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
                      ? 2U : 0U),32,(((2U == (0x3fU 
                                              & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                                  << 5U) 
                                                 | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                    >> 0x1bU)))) 
                                      | (3U == (0x3fU 
                                                & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                      >> 0x1bU)))))
                                      ? (vlSelf->tb_decode_stage__DOT__dut__DOT__imm_out 
                                         + vlSelf->tb_decode_stage__DOT__program_counter_in)
                                      : 0U));
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtb_decode_stage__ConstPool__TABLE_hf0a4cee6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_decode_stage__ConstPool__TABLE_hacfd7032_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_decode_stage__ConstPool__TABLE_h7b4a29a2_0;

VL_INLINE_OPT void Vtb_decode_stage___024root___act_comb__TOP__0(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in);
    vlSelf->tb_decode_stage__DOT__dut__DOT__imm_type 
        = Vtb_decode_stage__ConstPool__TABLE_hf0a4cee6_0
        [__Vtableidx1];
    __Vtableidx2 = (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in);
    vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_used 
        = Vtb_decode_stage__ConstPool__TABLE_hacfd7032_0
        [__Vtableidx2];
    vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_used 
        = Vtb_decode_stage__ConstPool__TABLE_h7b4a29a2_0
        [__Vtableidx2];
    vlSelf->tb_decode_stage__DOT__dut__DOT__imm_out 
        = ((4U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_type))
            ? ((2U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_type))
                ? 0U : ((1U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_type))
                         ? 0U : (((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_decode_stage__DOT__instruction_in) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_type))
                ? ((1U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_type))
                    ? (0xfffff000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                    : (((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                       >> 7U)))))))
                : ((1U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_type))
                    ? (((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->tb_decode_stage__DOT__instruction_in 
                          >> 0x14U)))));
    vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_fwd 
        = ((0U == (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                            >> 0xfU))) ? 0U : vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs
           [(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                      >> 0xfU))]);
    if (vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_used) {
        if ((((IData)((vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
                       >> 0x25U)) & ((0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__exe_forwarding_in)) 
                                     == (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  >> 0xfU)))) 
             & (0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                >> 0xfU))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_fwd 
                = (IData)((vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
                           >> 5U));
        } else if ((((IData)((vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
                              >> 0x25U)) & ((0x1fU 
                                             & (IData)(vlSelf->tb_decode_stage__DOT__mem_forwarding_in)) 
                                            == (0x1fU 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0xfU)))) 
                    & (0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                       >> 0xfU))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_fwd 
                = (IData)((vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
                           >> 5U));
        } else if ((((IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                              >> 0x25U)) & ((0x1fU 
                                             & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in)) 
                                            == (0x1fU 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0xfU)))) 
                    & (0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                       >> 0xfU))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_fwd 
                = (IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                           >> 5U));
        }
    }
    vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_fwd 
        = ((0U == (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                            >> 0x14U))) ? 0U : vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs
           [(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                      >> 0x14U))]);
    if (vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_used) {
        if ((((IData)((vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
                       >> 0x25U)) & ((0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__exe_forwarding_in)) 
                                     == (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  >> 0x14U)))) 
             & (0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                >> 0x14U))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_fwd 
                = (IData)((vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
                           >> 5U));
        } else if ((((IData)((vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
                              >> 0x25U)) & ((0x1fU 
                                             & (IData)(vlSelf->tb_decode_stage__DOT__mem_forwarding_in)) 
                                            == (0x1fU 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0x14U)))) 
                    & (0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                       >> 0x14U))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_fwd 
                = (IData)((vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
                           >> 5U));
        } else if ((((IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                              >> 0x25U)) & ((0x1fU 
                                             & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in)) 
                                            == (0x1fU 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0x14U)))) 
                    & (0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                       >> 0x14U))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_fwd 
                = (IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                           >> 5U));
        }
    } else {
        vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_fwd = 0U;
    }
    vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
        = ((0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]) 
           | (0xfffff000U & (0x88000000U | ((0x7c00000U 
                                             & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                << 0xfU)) 
                                            | ((0x3e0000U 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   << 2U)) 
                                               | (0x1f000U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 8U)))))));
    vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] = 1U;
    vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                     >> 0x14U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_out))));
    vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
        = ((0xfffff000U & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]) 
           | (IData)(((((QData)((IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                         >> 0x14U))) 
                        << 0x20U) | (QData)((IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_out))) 
                      >> 0x20U)));
    if ((0x73U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) {
        if ((0U != (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                          >> 0xcU)))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]) 
                   | (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                        ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                            ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                ? 0x2eU : 0x2dU) : 
                           ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                             ? 0x2cU : 0x31U)) : ((0x2000U 
                                                   & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                    ? 0x2bU
                                                    : 0x2aU)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                    ? 0x29U
                                                    : 0x31U))) 
                      << 0x1bU));
            vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                = (1U & (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                           ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                               ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                   ? 0x2eU : 0x2dU)
                               : ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                   ? 0x2cU : 0x31U))
                           : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                               ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                   ? 0x2bU : 0x2aU)
                               : ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                   ? 0x29U : 0x31U))) 
                         >> 5U));
            vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[0U] 
                = (vlSelf->tb_decode_stage__DOT__instruction_in 
                   >> 0x14U);
        } else {
            vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]) 
                   | (((0U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                               >> 0x14U)) ? 0x27U : 
                       ((1U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                >> 0x14U)) ? 0x28U : 
                        ((0x302U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                     >> 0x14U)) ? 0x2fU
                          : ((0x105U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                         >> 0x14U))
                              ? 0x30U : 0x31U)))) << 0x1bU));
            vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                = (1U & (((0U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                  >> 0x14U)) ? 0x27U
                           : ((1U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                      >> 0x14U)) ? 0x28U
                               : ((0x302U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                              >> 0x14U))
                                   ? 0x2fU : ((0x105U 
                                               == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0x14U))
                                               ? 0x30U
                                               : 0x31U)))) 
                         >> 5U));
            vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[0U] = 0U;
        }
    } else if ((0x13U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]) 
               | (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                    ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                        ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                            ? 0x17U : 0x16U) : ((0x1000U 
                                                 & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0x19U))
                                                  ? 0x19U
                                                  : 0x1aU)
                                                 : 0x15U))
                    : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                        ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                            ? 0x14U : 0x13U) : ((0x1000U 
                                                 & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                 ? 0x18U
                                                 : 0x12U))) 
                  << 0x1bU));
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
            = (1U & (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                       ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                           ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                               ? 0x17U : 0x16U) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                      >> 0x19U))
                                                     ? 0x19U
                                                     : 0x1aU)
                                                    : 0x15U))
                       : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                           ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                               ? 0x14U : 0x13U) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                    ? 0x18U
                                                    : 0x12U))) 
                     >> 5U));
        if (((1U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                           >> 0xcU))) | (5U == (7U 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0xcU))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[0U] 
                = (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                            >> 0x14U));
        }
    } else if ((0x33U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]) 
               | (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                    ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                        ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                            ? 0x24U : 0x23U) : ((0x1000U 
                                                 & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0x19U))
                                                  ? 0x21U
                                                  : 0x22U)
                                                 : 0x20U))
                    : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                        ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                            ? 0x1fU : 0x1eU) : ((0x1000U 
                                                 & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                 ? 0x1dU
                                                 : 
                                                ((0U 
                                                  == 
                                                  (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0x19U))
                                                  ? 0x1bU
                                                  : 0x1cU)))) 
                  << 0x1bU));
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
            = (1U & (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                       ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                           ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                               ? 0x24U : 0x23U) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                      >> 0x19U))
                                                     ? 0x21U
                                                     : 0x22U)
                                                    : 0x20U))
                       : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                           ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                               ? 0x1fU : 0x1eU) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                    ? 0x1dU
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                      >> 0x19U))
                                                     ? 0x1bU
                                                     : 0x1cU)))) 
                     >> 5U));
    } else if ((3U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]) 
               | (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                    ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                        ? 0x31U : ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                    ? 0xeU : 0xdU))
                    : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                        ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                            ? 0x31U : 0xcU) : ((0x1000U 
                                                & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                ? 0xbU
                                                : 0xaU))) 
                  << 0x1bU));
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
            = (1U & (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                       ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                           ? 0x31U : ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                       ? 0xeU : 0xdU))
                       : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                           ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                               ? 0x31U : 0xcU) : ((0x1000U 
                                                   & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                   ? 0xbU
                                                   : 0xaU))) 
                     >> 5U));
    } else if ((0x23U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]) 
               | (((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                 >> 0xcU))) ? 0xfU : 
                   ((1U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                  >> 0xcU))) ? 0x10U
                     : ((2U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                      >> 0xcU))) ? 0x11U
                         : 0x31U))) << 0x1bU));
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
            = (1U & (((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                    >> 0xcU))) ? 0xfU
                       : ((1U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                        >> 0xcU))) ? 0x10U
                           : ((2U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                            >> 0xcU)))
                               ? 0x11U : 0x31U))) >> 5U));
    } else if ((0x63U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]) 
               | (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                    ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                        ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                            ? 9U : 8U) : ((0x1000U 
                                           & vlSelf->tb_decode_stage__DOT__instruction_in)
                                           ? 7U : 6U))
                    : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                        ? 0x31U : ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                    ? 5U : 4U))) << 0x1bU));
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
            = (1U & (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                       ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                           ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                               ? 9U : 8U) : ((0x1000U 
                                              & vlSelf->tb_decode_stage__DOT__instruction_in)
                                              ? 7U : 6U))
                       : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                           ? 0x31U : ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                       ? 5U : 4U))) 
                     >> 5U));
    } else if ((0x37U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
            = (0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]);
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
            = (0x8000000U | (0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]));
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] = 0U;
    } else if ((0x6fU == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
            = (0x10000000U | (0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]));
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] = 0U;
    } else if ((0x67U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]) 
               | (((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                 >> 0xcU))) ? 3U : 0x31U) 
                  << 0x1bU));
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
            = (1U & (((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                    >> 0xcU))) ? 3U
                       : 0x31U) >> 5U));
    } else if ((0xfU == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]) 
               | (((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                 >> 0xcU))) ? 0x25U
                    : ((1U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                     >> 0xcU))) ? 0x26U
                        : 0x31U)) << 0x1bU));
        vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
            = (1U & (((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                    >> 0xcU))) ? 0x25U
                       : ((1U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                        >> 0xcU))) ? 0x26U
                           : 0x31U)) >> 5U));
    }
    vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
        = (((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                              << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                        >> 0x1bU)))) 
            | (3U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1bU)))))
            ? (vlSelf->tb_decode_stage__DOT__dut__DOT__imm_out 
               + vlSelf->tb_decode_stage__DOT__program_counter_in)
            : 0U);
}

void Vtb_decode_stage___024root___eval_act(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_act\n"); );
    // Body
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
         | vlSelf->__VactTriggered.at(2U))) {
        Vtb_decode_stage___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_decode_stage___024root___nba_sequent__TOP__0(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v0;
    __Vdlyvset__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32;
    __Vdlyvdim0__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32;
    __Vdlyvval__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32;
    __Vdlyvset__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32 = 0;
    // Body
    __Vdlyvset__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32 = 0U;
    if (vlSelf->tb_decode_stage__DOT__rst) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__i = 0x20U;
        __Vdlyvset__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v0 = 1U;
    } else if (((IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                         >> 0x25U)) & (0U != (0x1fU 
                                              & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in))))) {
        __Vdlyvval__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32 
            = (IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                       >> 5U));
        __Vdlyvset__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32 = 1U;
        __Vdlyvdim0__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32 
            = (0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in));
    }
    if (((IData)(vlSelf->tb_decode_stage__DOT__rst) 
         | (2U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in)))) {
        vlSelf->tb_decode_stage__DOT__program_counter_reg_out = 0U;
        vlSelf->tb_decode_stage__DOT__rs2_data_reg_out = 0U;
        vlSelf->tb_decode_stage__DOT__rs1_data_reg_out = 0U;
        vlSelf->tb_decode_stage__DOT__status_forwards_out = 1U;
        vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] = 0U;
        vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] = 0x90000000U;
        vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] = 0U;
    } else if ((1U != (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))) {
        vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
            = vlSelf->tb_decode_stage__DOT__program_counter_in;
        vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
            = vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_fwd;
        vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
            = vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_fwd;
        vlSelf->tb_decode_stage__DOT__status_forwards_out 
            = ((0x31U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                    << 5U) | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                              >> 0x1bU))))
                ? 4U : 0U);
        vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
            = vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[0U];
        vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
            = vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U];
        vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
            = vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U];
    }
    if (__Vdlyvset__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v0) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[1U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[2U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[3U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[4U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[5U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[6U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[7U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[8U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[9U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0xaU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0xbU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0xcU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0xdU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0xeU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0xfU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x10U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x11U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x12U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x13U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x14U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x15U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x16U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x17U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x18U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x19U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x1aU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x1bU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x1cU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x1dU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x1eU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[__Vdlyvdim0__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32] 
            = __Vdlyvval__tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs__v32;
    }
}

void Vtb_decode_stage___024root___eval_nba(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_decode_stage___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vtb_decode_stage___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_decode_stage___024root___eval_triggers__act(Vtb_decode_stage___024root* vlSelf);
void Vtb_decode_stage___024root___timing_commit(Vtb_decode_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decode_stage___024root___dump_triggers__act(Vtb_decode_stage___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_decode_stage___024root___timing_resume(Vtb_decode_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decode_stage___024root___dump_triggers__nba(Vtb_decode_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_decode_stage___024root___eval(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
            Vtb_decode_stage___024root___eval_triggers__act(vlSelf);
            Vtb_decode_stage___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_decode_stage___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_decode_stage.sv", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_decode_stage___024root___timing_resume(vlSelf);
                Vtb_decode_stage___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_decode_stage___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_decode_stage.sv", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_decode_stage___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_decode_stage___024root___timing_commit(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0U))))) {
        vlSelf->__VtrigSched_h222ba413__0.commit("@(posedge tb_decode_stage.clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(2U))))) {
        vlSelf->__VtrigSched_h222ba3d2__0.commit("@(negedge tb_decode_stage.clk)");
    }
}

void Vtb_decode_stage___024root___timing_resume(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VtrigSched_h222ba413__0.resume("@(posedge tb_decode_stage.clk)");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VtrigSched_h222ba3d2__0.resume("@(negedge tb_decode_stage.clk)");
    }
}

#ifdef VL_DEBUG
void Vtb_decode_stage___024root___eval_debug_assertions(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
