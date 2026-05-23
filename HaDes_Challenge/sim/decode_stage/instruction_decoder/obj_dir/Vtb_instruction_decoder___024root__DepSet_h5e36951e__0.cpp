// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_instruction_decoder.h for the primary calling header

#include "verilated.h"

#include "Vtb_instruction_decoder___024root.h"

VlCoroutine Vtb_instruction_decoder___024root___eval_initial__TOP__0(Vtb_instruction_decoder___024root* vlSelf);

void Vtb_instruction_decoder___024root___eval_initial(Vtb_instruction_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_instruction_decoder___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_instruction_decoder___024root___eval_initial__TOP__0(Vtb_instruction_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root___eval_initial__TOP__0\n"); );
    // Init
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__0__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__0__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__1__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__1__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__2__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__2__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__3__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__3__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__4__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__4__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__5__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__5__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__6__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__6__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__7__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__7__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__8__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__8__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__9__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__9__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__10__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__10__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__11__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__11__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__12__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__12__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__13__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__13__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__14__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__14__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__15__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__15__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__16__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__16__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__17__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__17__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__18__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__18__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__19__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__19__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__20__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__20__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__21__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__21__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__22__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__22__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__23__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__23__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__24__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__24__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__25__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__25__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__26__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__26__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__27__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__27__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__28__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__28__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__29__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__29__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_imm = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__instr;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_rs1 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_imm = 0;
    SData/*11:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_csr;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_csr = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__instr;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_rs1 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_imm = 0;
    SData/*11:0*/ __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_csr;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_csr = 0;
    std::string __Vtask_tb_instruction_decoder__DOT__check_instr__32__test_name;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__32__instr;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__instr = 0;
    CData/*5:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_op;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_op = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rd;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rd = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rs1;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rs1 = 0;
    CData/*4:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rs2;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rs2 = 0;
    IData/*31:0*/ __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_imm;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_imm = 0;
    // Body
    VL_WRITEF("\nStarting instruction_decoder self-checking test...\n\n");
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_imm = 0xaU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rs2 = 0xaU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rs1 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rd = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_op = 0x12U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__instr = 0xa00093U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__0__test_name = 
        std::string{"ADDI x1,x0,10"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in = 0xa00093U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__0__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__0__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__0__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__0__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_imm = 0xffffffffU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rs2 = 0x1fU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rs1 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rd = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_op = 0x12U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__instr = 0xfff00113U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__1__test_name = 
        std::string{"ADDI x2,x0,-1"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__1__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__1__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__1__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__1__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__1__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_imm = 5U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rs2 = 5U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rs1 = 4U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rd = 3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_op = 0x13U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__instr = 0x522193U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__2__test_name = 
        std::string{"SLTI x3,x4,5"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__2__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__2__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__2__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__2__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__2__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_imm = 0xfU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rs2 = 0xfU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rs1 = 6U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rd = 5U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_op = 0x17U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__instr = 0xf37293U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__3__test_name = 
        std::string{"ANDI x5,x6,15"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__3__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__3__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__3__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__3__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__3__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_imm = 3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rs2 = 3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rs1 = 8U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rd = 7U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_op = 0x18U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__instr = 0x341393U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__4__test_name = 
        std::string{"SLLI x7,x8,3"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__4__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__4__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__4__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__4__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__4__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_imm = 4U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rs2 = 4U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rs1 = 0xaU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rd = 9U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_op = 0x19U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__instr = 0x455493U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__5__test_name = 
        std::string{"SRLI x9,x10,4"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__5__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__5__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__5__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__5__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__5__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_imm = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rs2 = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rs1 = 0xcU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rd = 0xbU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_op = 0x1aU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__instr = 0x40265593U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__6__test_name = 
        std::string{"SRAI x11,x12,2"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__6__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__6__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__6__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__6__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__6__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rs2 = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rs1 = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rd = 3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_op = 0x1bU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__instr = 0x2081b3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__7__test_name = 
        std::string{"ADD x3,x1,x2"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__7__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__7__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__7__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__7__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__7__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rs2 = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rs1 = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rd = 3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_op = 0x1cU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__instr = 0x402081b3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__8__test_name = 
        std::string{"SUB x3,x1,x2"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__8__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__8__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__8__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__8__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__8__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rs2 = 0xfU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rs1 = 0xeU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rd = 0xdU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_op = 0x24U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__instr = 0xf776b3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__9__test_name = 
        std::string{"AND x13,x14,x15"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__9__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__9__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__9__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__9__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__9__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rs2 = 0xfU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rs1 = 0xeU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rd = 0xdU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_op = 0x23U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__instr = 0xf766b3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__10__test_name = 
        std::string{"OR x13,x14,x15"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__10__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__10__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__10__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__10__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__10__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rs2 = 0xfU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rs1 = 0xeU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rd = 0xdU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_op = 0x20U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__instr = 0xf746b3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__11__test_name = 
        std::string{"XOR x13,x14,x15"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__11__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__11__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__11__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__11__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__11__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_imm = 0xcU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rs2 = 0xcU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rs1 = 6U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rd = 5U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_op = 0xcU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__instr = 0xc32283U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__12__test_name = 
        std::string{"LW x5,12(x6)"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__12__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__12__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__12__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__12__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__12__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_imm = 0xfffffffcU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rs2 = 0x1cU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rs1 = 6U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rd = 5U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_op = 0xaU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__instr = 0xffc30283U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__13__test_name = 
        std::string{"LB x5,-4(x6)"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__13__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__13__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__13__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__13__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__13__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_imm = 8U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rs2 = 8U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rs1 = 6U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rd = 5U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_op = 0xeU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__instr = 0x835283U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__14__test_name = 
        std::string{"LHU x5,8(x6)"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__14__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__14__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__14__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__14__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__14__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_imm = 0x10U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rs2 = 5U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rs1 = 6U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rd = 0x10U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_op = 0x11U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__instr = 0x532823U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__15__test_name = 
        std::string{"SW x5,16(x6)"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__15__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__15__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__15__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__15__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__15__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_imm = 0xfffffff8U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rs2 = 5U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rs1 = 6U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rd = 0x18U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_op = 0xfU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__instr = 0xfe530c23U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__16__test_name = 
        std::string{"SB x5,-8(x6)"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__16__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__16__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__16__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__16__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__16__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_imm = 8U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rs2 = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rs1 = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rd = 8U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_op = 4U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__instr = 0x208463U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__17__test_name = 
        std::string{"BEQ x1,x2,+8"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__17__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__17__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__17__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__17__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__17__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_imm = 0xfffffffcU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rs2 = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rs1 = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rd = 0x1dU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_op = 5U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__instr = 0xfe209ee3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__18__test_name = 
        std::string{"BNE x1,x2,-4"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__18__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__18__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__18__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__18__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__18__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_imm = 0x12345000U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rs2 = 3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rs1 = 8U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rd = 0xaU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_op = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__instr = 0x12345537U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__19__test_name = 
        std::string{"LUI x10,0x12345"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__19__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__19__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__19__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__19__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__19__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_imm = 0xabcde000U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rs2 = 0x1cU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rs1 = 0x1bU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rd = 0xbU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_op = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__instr = 0xabcde597U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__20__test_name = 
        std::string{"AUIPC x11,0xABCDE"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__20__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__20__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__20__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__20__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__20__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_imm = 0x10U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rs2 = 0x10U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rs1 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rd = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_op = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__instr = 0x10000efU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__21__test_name = 
        std::string{"JAL x1,+16"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__21__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__21__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__21__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__21__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__21__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_imm = 0x14U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rs2 = 0x14U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rs1 = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rd = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_op = 3U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__instr = 0x14100e7U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__22__test_name = 
        std::string{"JALR x1,20(x2)"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__22__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__22__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__22__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__22__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__22__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_imm = 0x14U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rs2 = 0x14U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rs1 = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rd = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_op = 0x31U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__instr = 0x14120e7U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__23__test_name = 
        std::string{"ILLEGAL JALR funct3"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__23__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__23__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__23__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__23__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__23__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rs2 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rs1 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rd = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_op = 0x25U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__instr = 0xfU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__24__test_name = 
        std::string{"FENCE"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__24__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__24__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__24__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__24__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__24__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rs2 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rs1 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rd = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_op = 0x26U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__instr = 0x100fU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__25__test_name = 
        std::string{"FENCE.I"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__25__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__25__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__25__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__25__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__25__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rs2 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rs1 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rd = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_op = 0x27U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__instr = 0x73U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__26__test_name = 
        std::string{"ECALL"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__26__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__26__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__26__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__26__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__26__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rs2 = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rs1 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rd = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_op = 0x28U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__instr = 0x100073U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__27__test_name = 
        std::string{"EBREAK"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__27__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__27__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__27__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__27__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__27__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rs2 = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rs1 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rd = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_op = 0x2fU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__instr = 0x30200073U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__28__test_name = 
        std::string{"MRET"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__28__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__28__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__28__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__28__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__28__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rs2 = 5U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rs1 = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rd = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_op = 0x30U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__instr = 0x10500073U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__29__test_name = 
        std::string{"WFI"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__29__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__29__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__29__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__29__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__29__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_csr = 0x300U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_imm = 0x300U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_rs1 = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_rd = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_op = 0x29U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__instr = 0x300110f3U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__test_name = 
        std::string{"CSRRW x1,mstatus,x2"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_rs1))) 
                      | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                         != __Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_imm)) 
                     | ((0xfffU & vlSelf->tb_instruction_decoder__DOT__instruction_out[1U]) 
                        != (IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_csr))))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\nExpected CSR       = %0#\nActual   CSR       = %0#\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),32,__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U],
                  12,(IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__expected_csr),
                  12,(0xfffU & vlSelf->tb_instruction_decoder__DOT__instruction_out[1U]));
        VL_FINISH_MT("tb_instruction_decoder.sv", 115, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__30__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_csr = 0x300U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_imm = 0x300U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_rs1 = 2U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_rd = 1U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_op = 0x29U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__instr = 0x300110f3U;
    __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__test_name = 
        std::string{"CSRRW x1,mstatus,x2"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_rs1))) 
                      | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                         != __Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_imm)) 
                     | ((0xfffU & vlSelf->tb_instruction_decoder__DOT__instruction_out[1U]) 
                        != (IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_csr))))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\nExpected CSR       = %0#\nActual   CSR       = %0#\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),32,__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U],
                  12,(IData)(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__expected_csr),
                  12,(0xfffU & vlSelf->tb_instruction_decoder__DOT__instruction_out[1U]));
        VL_FINISH_MT("tb_instruction_decoder.sv", 115, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_csr_instr__31__test_name));
    }
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_imm = 0U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rs2 = 0x1fU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rs1 = 0x1fU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rd = 0x1fU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_op = 0x31U;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__instr = 0xffffffffU;
    __Vtask_tb_instruction_decoder__DOT__check_instr__32__test_name = 
        std::string{"ILLEGAL all ones"};
    vlSelf->tb_instruction_decoder__DOT__instruction_in 
        = __Vtask_tb_instruction_decoder__DOT__check_instr__32__instr;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_instruction_decoder.sv", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((((0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                                    << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                              >> 0x1bU))) 
                         != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_op)) 
                        | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                     >> 0x16U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rd))) 
                       | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                    >> 0x11U)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rs1))) 
                      | ((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                   >> 0xcU)) != (IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rs2))) 
                     | (vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                        != __Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_imm)))) {
        VL_WRITEF("[FAIL] %@\nInstruction        = %x\nExpected OP        = %0#\nActual   OP        = %0#\nExpected RD        = %0#\nActual   RD        = %0#\nExpected RS1       = %0#\nActual   RS1       = %0#\nExpected RS2       = %0#\nActual   RS2       = %0#\nExpected IMM       = %x\nActual   IMM       = %x\n",
                  -1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__32__test_name),
                  32,__Vtask_tb_instruction_decoder__DOT__check_instr__32__instr,
                  6,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_op),
                  6,(0x3fU & ((vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                               << 5U) | (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                                         >> 0x1bU))),
                  5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rd),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x16U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rs1),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0x11U)),5,(IData)(__Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_rs2),
                  5,(0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                              >> 0xcU)),32,__Vtask_tb_instruction_decoder__DOT__check_instr__32__expected_imm,
                  32,vlSelf->tb_instruction_decoder__DOT__instruction_out[0U]);
        VL_FINISH_MT("tb_instruction_decoder.sv", 65, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_instruction_decoder__DOT__check_instr__32__test_name));
    }
    VL_WRITEF("\nALL INSTRUCTION_DECODER TESTS PASSED\n\n");
    VL_FINISH_MT("tb_instruction_decoder.sv", 543, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtb_instruction_decoder___024root___act_sequent__TOP__0(Vtb_instruction_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_instruction_decoder__DOT__dut__DOT__alu_op = 0U;
    if ((IData)((0x40000033U == (0xfe00707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__alu_op = 2U;
    } else if (((IData)((0x2013U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                | (IData)((0x2033U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__alu_op = 9U;
    } else if (((IData)((0x3013U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                | (IData)((0x3033U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__alu_op = 0xaU;
    } else if (((IData)((0x7013U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                | (IData)((0x7033U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__alu_op = 3U;
    } else if (((IData)((0x6013U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                | (IData)((0x6033U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__alu_op = 4U;
    } else if (((IData)((0x4013U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                | (IData)((0x4033U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__alu_op = 5U;
    } else if (((IData)((0x1013U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                | (IData)((0x1033U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__alu_op = 6U;
    } else if (((IData)((0x5013U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                | (IData)((0x5033U == (0x707fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__alu_op 
            = ((0x20U == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                          >> 0x19U)) ? 8U : 7U);
    }
    vlSelf->tb_instruction_decoder__DOT__dut__DOT__write_rd = 1U;
    if (((0x63U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)) 
         | (0x23U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__write_rd = 0U;
    }
    vlSelf->tb_instruction_decoder__DOT__dut__DOT__mem_width = 0x20U;
    if (((3U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)) 
         | (0x23U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__mem_width 
            = ((0x4000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                ? ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                    ? 0x20U : ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                ? 0x10U : 8U)) : ((0x2000U 
                                                   & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                   ? 0x20U
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                    ? 0x10U
                                                    : 8U)));
    }
    vlSelf->tb_instruction_decoder__DOT__dut__DOT__jump = 0U;
    if (((0x6fU == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)) 
         | (0x67U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__jump = 1U;
    }
    vlSelf->tb_instruction_decoder__DOT__dut__DOT__branch = 0U;
    if ((0x63U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__branch = 1U;
    }
    vlSelf->tb_instruction_decoder__DOT__dut__DOT__rd_data_src = 0U;
    if ((0x17U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__rd_data_src = 1U;
    } else if (((0x6fU == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)) 
                | (0x67U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__rd_data_src = 2U;
    } else if ((0x37U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__rd_data_src = 3U;
    } else if ((3U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__rd_data_src = 4U;
    }
    vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type = 7U;
    if (((0x37U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)) 
         | (0x17U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type = 3U;
    } else if ((0x6fU == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type = 4U;
    } else if ((0x63U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type = 2U;
    } else if ((0x23U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type = 1U;
    } else if ((((0x13U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)) 
                 | (3U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                | (0x67U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)))) {
        vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type = 0U;
    }
    vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
        = ((0xfffU & vlSelf->tb_instruction_decoder__DOT__instruction_out[1U]) 
           | (0xfffff000U & (0x88000000U | ((0x7c00000U 
                                             & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                << 0xfU)) 
                                            | ((0x3e0000U 
                                                & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                   << 2U)) 
                                               | (0x1f000U 
                                                  & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                     >> 8U)))))));
    vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] = 1U;
    vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                     >> 0x14U))) << 0x20U) 
                   | (QData)((IData)(((4U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                       ? ((2U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                                    ? 0U
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                 >> 0x1fU))) 
                                                     << 0x15U) 
                                                    | ((0x100000U 
                                                        & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                           >> 0xbU)) 
                                                       | ((0xff000U 
                                                           & vlSelf->tb_instruction_decoder__DOT__instruction_in) 
                                                          | ((0x800U 
                                                              & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                   >> 0x14U))))))))
                                       : ((2U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                           ? ((1U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                               ? (0xfffff000U 
                                                  & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                               : ((
                                                   (- (IData)(
                                                              (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                 >> 7U)))))))
                                           : ((1U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                               ? ((
                                                   (- (IData)(
                                                              (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                           >> 7U))))
                                               : ((
                                                   (- (IData)(
                                                              (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                     >> 0x14U)))))))));
    vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
        = ((0xfffff000U & vlSelf->tb_instruction_decoder__DOT__instruction_out[1U]) 
           | (IData)(((((QData)((IData)((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                         >> 0x14U))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((4U 
                                                      & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                                        ? 0U
                                                        : 
                                                       (((- (IData)(
                                                                    (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                     >> 0x1fU))) 
                                                         << 0x15U) 
                                                        | ((0x100000U 
                                                            & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->tb_instruction_decoder__DOT__instruction_in) 
                                                              | ((0x800U 
                                                                  & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                       >> 0x14U))))))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                        : 
                                                       (((- (IData)(
                                                                    (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                     >> 0x1fU))) 
                                                         << 0xdU) 
                                                        | ((0x1000U 
                                                            & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                               >> 0x13U)) 
                                                           | ((0x800U 
                                                               & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                  << 4U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                     >> 0x14U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                       >> 7U)))))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0xfe0U 
                                                            & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                 >> 7U))))
                                                        : 
                                                       (((- (IData)(
                                                                    (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                           >> 0x14U)))))))) 
                      >> 0x20U)));
    if ((0x73U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) {
        if ((0U != (7U & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                          >> 0xcU)))) {
            vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                = ((0x7ffffffU & vlSelf->tb_instruction_decoder__DOT__instruction_out[1U]) 
                   | (((0x4000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                        ? ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                            ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                ? 0x2eU : 0x2dU) : 
                           ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                             ? 0x2cU : 0x31U)) : ((0x2000U 
                                                   & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                    ? 0x2bU
                                                    : 0x2aU)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                    ? 0x29U
                                                    : 0x31U))) 
                      << 0x1bU));
            vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                = (1U & (((0x4000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                           ? ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                               ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                   ? 0x2eU : 0x2dU)
                               : ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                   ? 0x2cU : 0x31U))
                           : ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                               ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                   ? 0x2bU : 0x2aU)
                               : ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                   ? 0x29U : 0x31U))) 
                         >> 5U));
            vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                = (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                   >> 0x14U);
        } else {
            vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
                = ((0x7ffffffU & vlSelf->tb_instruction_decoder__DOT__instruction_out[1U]) 
                   | (((0U == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                               >> 0x14U)) ? 0x27U : 
                       ((1U == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                >> 0x14U)) ? 0x28U : 
                        ((0x302U == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                     >> 0x14U)) ? 0x2fU
                          : ((0x105U == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                         >> 0x14U))
                              ? 0x30U : 0x31U)))) << 0x1bU));
            vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
                = (1U & (((0U == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                  >> 0x14U)) ? 0x27U
                           : ((1U == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                      >> 0x14U)) ? 0x28U
                               : ((0x302U == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                              >> 0x14U))
                                   ? 0x2fU : ((0x105U 
                                               == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                   >> 0x14U))
                                               ? 0x30U
                                               : 0x31U)))) 
                         >> 5U));
            vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] = 0U;
        }
    } else if ((0x13U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) {
        vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
            = ((0x7ffffffU & vlSelf->tb_instruction_decoder__DOT__instruction_out[1U]) 
               | (((0x4000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                    ? ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                        ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                            ? 0x17U : 0x16U) : ((0x1000U 
                                                 & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                   >> 0x19U))
                                                  ? 0x19U
                                                  : 0x1aU)
                                                 : 0x15U))
                    : ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                        ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                            ? 0x14U : 0x13U) : ((0x1000U 
                                                 & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                 ? 0x18U
                                                 : 0x12U))) 
                  << 0x1bU));
        vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
            = (1U & (((0x4000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                       ? ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                           ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                               ? 0x17U : 0x16U) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                      >> 0x19U))
                                                     ? 0x19U
                                                     : 0x1aU)
                                                    : 0x15U))
                       : ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                           ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                               ? 0x14U : 0x13U) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                    ? 0x18U
                                                    : 0x12U))) 
                     >> 5U));
        if (((1U == (7U & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                           >> 0xcU))) | (5U == (7U 
                                                & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                   >> 0xcU))))) {
            vlSelf->tb_instruction_decoder__DOT__instruction_out[0U] 
                = (0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                            >> 0x14U));
        }
    } else {
        vlSelf->tb_instruction_decoder__DOT__instruction_out[1U] 
            = ((0x7ffffffU & vlSelf->tb_instruction_decoder__DOT__instruction_out[1U]) 
               | (((0x33U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                    ? ((0x4000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                        ? ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                            ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                ? 0x24U : 0x23U) : 
                           ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                             ? ((0U == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                        >> 0x19U)) ? 0x21U
                                 : 0x22U) : 0x20U))
                        : ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                            ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                ? 0x1fU : 0x1eU) : 
                           ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                             ? 0x1dU : ((0U == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                >> 0x19U))
                                         ? 0x1bU : 0x1cU))))
                    : ((3U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                        ? ((0x4000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                            ? ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                ? 0x31U : ((0x1000U 
                                            & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                            ? 0xeU : 0xdU))
                            : ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                    ? 0x31U : 0xcU)
                                : ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                    ? 0xbU : 0xaU)))
                        : ((0x23U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                            ? ((0U == (7U & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                             >> 0xcU)))
                                ? 0xfU : ((1U == (7U 
                                                  & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                     >> 0xcU)))
                                           ? 0x10U : 
                                          ((2U == (7U 
                                                   & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                      >> 0xcU)))
                                            ? 0x11U
                                            : 0x31U)))
                            : ((0x63U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                ? ((0x4000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                    ? ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                        ? ((0x1000U 
                                            & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                            ? 9U : 8U)
                                        : ((0x1000U 
                                            & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                            ? 7U : 6U))
                                    : ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                        ? 0x31U : (
                                                   (0x1000U 
                                                    & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                    ? 5U
                                                    : 4U)))
                                : ((0x37U == (0x7fU 
                                              & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                    ? 0U : ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                             ? 1U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                              ? 2U : 
                                             ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                       >> 0xcU)))
                                                   ? 3U
                                                   : 0x31U)
                                               : ((0xfU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                        >> 0xcU)))
                                                    ? 0x25U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                         >> 0xcU)))
                                                     ? 0x26U
                                                     : 0x31U))
                                                   : 0x31U))))))))) 
                  << 0x1bU));
        vlSelf->tb_instruction_decoder__DOT__instruction_out[2U] 
            = (1U & (((0x33U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                       ? ((0x4000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                           ? ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                               ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                   ? 0x24U : 0x23U)
                               : ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                   ? ((0U == (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                              >> 0x19U))
                                       ? 0x21U : 0x22U)
                                   : 0x20U)) : ((0x2000U 
                                                 & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                  ? 0x1fU
                                                  : 0x1eU)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                                  ? 0x1dU
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                    >> 0x19U))
                                                   ? 0x1bU
                                                   : 0x1cU))))
                       : ((3U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                           ? ((0x4000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                               ? ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                   ? 0x31U : ((0x1000U 
                                               & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                               ? 0xeU
                                               : 0xdU))
                               : ((0x2000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                   ? ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                       ? 0x31U : 0xcU)
                                   : ((0x1000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                       ? 0xbU : 0xaU)))
                           : ((0x23U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                               ? ((0U == (7U & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                >> 0xcU)))
                                   ? 0xfU : ((1U == 
                                              (7U & 
                                               (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                >> 0xcU)))
                                              ? 0x10U
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                      >> 0xcU)))
                                                  ? 0x11U
                                                  : 0x31U)))
                               : ((0x63U == (0x7fU 
                                             & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                   ? ((0x4000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                       ? ((0x2000U 
                                           & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                           ? ((0x1000U 
                                               & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                               ? 9U
                                               : 8U)
                                           : ((0x1000U 
                                               & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                               ? 7U
                                               : 6U))
                                       : ((0x2000U 
                                           & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                           ? 0x31U : 
                                          ((0x1000U 
                                            & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                            ? 5U : 4U)))
                                   : ((0x37U == (0x7fU 
                                                 & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                       ? 0U : ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                                ? 1U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                                    ? 2U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                          >> 0xcU)))
                                                      ? 3U
                                                      : 0x31U)
                                                     : 
                                                    ((0xfU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->tb_instruction_decoder__DOT__instruction_in))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                           >> 0xcU)))
                                                       ? 0x25U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                            >> 0xcU)))
                                                        ? 0x26U
                                                        : 0x31U))
                                                      : 0x31U))))))))) 
                     >> 5U));
    }
}

void Vtb_instruction_decoder___024root___eval_act(Vtb_instruction_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vtb_instruction_decoder___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_instruction_decoder___024root___eval_nba(Vtb_instruction_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_instruction_decoder___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_instruction_decoder___024root___eval_triggers__act(Vtb_instruction_decoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_instruction_decoder___024root___dump_triggers__act(Vtb_instruction_decoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_instruction_decoder___024root___timing_resume(Vtb_instruction_decoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_instruction_decoder___024root___dump_triggers__nba(Vtb_instruction_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_instruction_decoder___024root___eval(Vtb_instruction_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            Vtb_instruction_decoder___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_instruction_decoder___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_instruction_decoder.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_instruction_decoder___024root___timing_resume(vlSelf);
                Vtb_instruction_decoder___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_instruction_decoder___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_instruction_decoder.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_instruction_decoder___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_instruction_decoder___024root___timing_resume(Vtb_instruction_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb_instruction_decoder___024root___eval_debug_assertions(Vtb_instruction_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
