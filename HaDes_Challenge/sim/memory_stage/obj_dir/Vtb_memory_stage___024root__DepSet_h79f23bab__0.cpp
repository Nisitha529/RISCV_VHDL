// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_memory_stage__Syms.h"
#include "Vtb_memory_stage___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_memory_stage___024root___eval_initial__TOP__1(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_initial__TOP__1\n"); );
    // Init
    std::string __Vtask_tb_memory_stage__DOT__check_op__2__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__2__actual;
    __Vtask_tb_memory_stage__DOT__check_op__2__actual = 0;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__2__expected;
    __Vtask_tb_memory_stage__DOT__check_op__2__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__3__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__3__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__3__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__3__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__3__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__4__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__4__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__4__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__4__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__4__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__5__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__5__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__5__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__5__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__5__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__6__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__6__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__6__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__6__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__6__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__drive_non_memory__10__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__drive_non_memory__10__op_i;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__10__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__drive_non_memory__10__rd_i;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__10__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__drive_non_memory__10__rd_val;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__10__rd_val = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__drive_non_memory__10__pc_i;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__10__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__11__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__11__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__11__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__11__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__11__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__11__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__11__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__11__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__11__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__11__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__11__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__11__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_op__13__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__13__actual;
    __Vtask_tb_memory_stage__DOT__check_op__13__actual = 0;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__13__expected;
    __Vtask_tb_memory_stage__DOT__check_op__13__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__14__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__14__actual;
    __Vtask_tb_memory_stage__DOT__check32__14__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__14__expected;
    __Vtask_tb_memory_stage__DOT__check32__14__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__15__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__15__actual;
    __Vtask_tb_memory_stage__DOT__check32__15__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__15__expected;
    __Vtask_tb_memory_stage__DOT__check32__15__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__16__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__16__actual;
    __Vtask_tb_memory_stage__DOT__check32__16__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__16__expected;
    __Vtask_tb_memory_stage__DOT__check32__16__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__17__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__17__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__17__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__17__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__17__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__18__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__18__actual;
    __Vtask_tb_memory_stage__DOT__check32__18__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__18__expected;
    __Vtask_tb_memory_stage__DOT__check32__18__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__19__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__19__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__19__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__19__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__19__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__20__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__20__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__20__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__20__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__20__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__21__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__21__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__21__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__21__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__21__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__22__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__22__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__22__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__22__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__22__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_load__26__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_load__26__op_i;
    __Vtask_tb_memory_stage__DOT__test_load__26__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_load__26__rd_i;
    __Vtask_tb_memory_stage__DOT__test_load__26__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__26__addr_i;
    __Vtask_tb_memory_stage__DOT__test_load__26__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__26__memory_word;
    __Vtask_tb_memory_stage__DOT__test_load__26__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__26__expected_value;
    __Vtask_tb_memory_stage__DOT__test_load__26__expected_value = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_load__26__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_load__26__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__26__pc_i;
    __Vtask_tb_memory_stage__DOT__test_load__26__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__27__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__27__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__27__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__27__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__27__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__27__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__27__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__27__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__27__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__27__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__27__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__28__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__28__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__28__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__28__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__28__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__28__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__28__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__28__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__28__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__28__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__28__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__28__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__30__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__30__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__30__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__30__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__30__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__31__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__31__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__31__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__31__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__31__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__32__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__32__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__32__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__32__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__32__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__33__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__33__actual;
    __Vtask_tb_memory_stage__DOT__check32__33__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__33__expected;
    __Vtask_tb_memory_stage__DOT__check32__33__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__34__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__34__actual;
    __Vtask_tb_memory_stage__DOT__check4__34__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__34__expected;
    __Vtask_tb_memory_stage__DOT__check4__34__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__35__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__35__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__35__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__35__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__35__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__36__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__36__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__36__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__36__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__36__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__37__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__37__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__37__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__37__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__37__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_load_ok__38__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__38__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__38__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_value = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_rd;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_rd = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__39__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__39__actual;
    __Vtask_tb_memory_stage__DOT__check32__39__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__39__expected;
    __Vtask_tb_memory_stage__DOT__check32__39__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__40__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__40__actual;
    __Vtask_tb_memory_stage__DOT__check32__40__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__40__expected;
    __Vtask_tb_memory_stage__DOT__check32__40__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__41__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__41__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__41__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__41__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__41__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__42__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__42__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__42__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__42__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__42__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__43__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__43__actual;
    __Vtask_tb_memory_stage__DOT__check32__43__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__43__expected;
    __Vtask_tb_memory_stage__DOT__check32__43__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__44__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__44__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__44__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__44__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__44__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_load__47__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_load__47__op_i;
    __Vtask_tb_memory_stage__DOT__test_load__47__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_load__47__rd_i;
    __Vtask_tb_memory_stage__DOT__test_load__47__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__47__addr_i;
    __Vtask_tb_memory_stage__DOT__test_load__47__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__47__memory_word;
    __Vtask_tb_memory_stage__DOT__test_load__47__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__47__expected_value;
    __Vtask_tb_memory_stage__DOT__test_load__47__expected_value = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_load__47__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_load__47__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__47__pc_i;
    __Vtask_tb_memory_stage__DOT__test_load__47__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__48__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__48__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__48__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__48__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__48__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__48__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__48__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__48__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__48__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__48__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__48__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__49__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__49__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__49__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__49__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__49__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__49__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__49__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__49__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__49__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__49__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__49__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__49__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__51__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__51__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__51__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__51__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__51__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__52__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__52__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__52__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__52__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__52__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__53__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__53__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__53__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__53__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__53__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__54__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__54__actual;
    __Vtask_tb_memory_stage__DOT__check32__54__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__54__expected;
    __Vtask_tb_memory_stage__DOT__check32__54__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__55__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__55__actual;
    __Vtask_tb_memory_stage__DOT__check4__55__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__55__expected;
    __Vtask_tb_memory_stage__DOT__check4__55__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__56__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__56__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__56__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__56__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__56__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__57__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__57__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__57__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__57__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__57__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__58__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__58__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__58__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__58__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__58__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_load_ok__59__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__59__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__59__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_value = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_rd;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_rd = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__60__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__60__actual;
    __Vtask_tb_memory_stage__DOT__check32__60__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__60__expected;
    __Vtask_tb_memory_stage__DOT__check32__60__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__61__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__61__actual;
    __Vtask_tb_memory_stage__DOT__check32__61__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__61__expected;
    __Vtask_tb_memory_stage__DOT__check32__61__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__62__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__62__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__62__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__62__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__62__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__63__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__63__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__63__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__63__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__63__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__64__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__64__actual;
    __Vtask_tb_memory_stage__DOT__check32__64__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__64__expected;
    __Vtask_tb_memory_stage__DOT__check32__64__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__65__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__65__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__65__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__65__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__65__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_load__68__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_load__68__op_i;
    __Vtask_tb_memory_stage__DOT__test_load__68__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_load__68__rd_i;
    __Vtask_tb_memory_stage__DOT__test_load__68__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__68__addr_i;
    __Vtask_tb_memory_stage__DOT__test_load__68__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__68__memory_word;
    __Vtask_tb_memory_stage__DOT__test_load__68__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__68__expected_value;
    __Vtask_tb_memory_stage__DOT__test_load__68__expected_value = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_load__68__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_load__68__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__68__pc_i;
    __Vtask_tb_memory_stage__DOT__test_load__68__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__69__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__69__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__69__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__69__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__69__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__69__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__69__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__69__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__69__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__69__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__69__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__70__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__70__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__70__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__70__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__70__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__70__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__70__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__70__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__70__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__70__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__70__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__70__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__72__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__72__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__72__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__72__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__72__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__73__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__73__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__73__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__73__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__73__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__74__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__74__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__74__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__74__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__74__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__75__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__75__actual;
    __Vtask_tb_memory_stage__DOT__check32__75__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__75__expected;
    __Vtask_tb_memory_stage__DOT__check32__75__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__76__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__76__actual;
    __Vtask_tb_memory_stage__DOT__check4__76__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__76__expected;
    __Vtask_tb_memory_stage__DOT__check4__76__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__77__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__77__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__77__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__77__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__77__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__78__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__78__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__78__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__78__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__78__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__79__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__79__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__79__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__79__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__79__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_load_ok__80__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__80__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__80__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_value = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_rd;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_rd = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__81__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__81__actual;
    __Vtask_tb_memory_stage__DOT__check32__81__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__81__expected;
    __Vtask_tb_memory_stage__DOT__check32__81__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__82__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__82__actual;
    __Vtask_tb_memory_stage__DOT__check32__82__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__82__expected;
    __Vtask_tb_memory_stage__DOT__check32__82__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__83__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__83__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__83__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__83__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__83__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__84__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__84__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__84__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__84__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__84__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__85__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__85__actual;
    __Vtask_tb_memory_stage__DOT__check32__85__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__85__expected;
    __Vtask_tb_memory_stage__DOT__check32__85__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__86__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__86__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__86__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__86__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__86__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_load__89__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_load__89__op_i;
    __Vtask_tb_memory_stage__DOT__test_load__89__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_load__89__rd_i;
    __Vtask_tb_memory_stage__DOT__test_load__89__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__89__addr_i;
    __Vtask_tb_memory_stage__DOT__test_load__89__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__89__memory_word;
    __Vtask_tb_memory_stage__DOT__test_load__89__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__89__expected_value;
    __Vtask_tb_memory_stage__DOT__test_load__89__expected_value = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_load__89__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_load__89__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__89__pc_i;
    __Vtask_tb_memory_stage__DOT__test_load__89__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__90__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__90__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__90__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__90__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__90__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__90__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__90__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__90__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__90__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__90__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__90__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__91__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__91__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__91__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__91__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__91__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__91__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__91__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__91__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__91__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__91__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__91__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__91__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__93__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__93__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__93__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__93__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__93__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__94__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__94__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__94__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__94__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__94__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__95__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__95__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__95__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__95__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__95__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__96__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__96__actual;
    __Vtask_tb_memory_stage__DOT__check32__96__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__96__expected;
    __Vtask_tb_memory_stage__DOT__check32__96__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__97__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__97__actual;
    __Vtask_tb_memory_stage__DOT__check4__97__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__97__expected;
    __Vtask_tb_memory_stage__DOT__check4__97__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__98__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__98__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__98__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__98__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__98__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__99__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__99__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__99__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__99__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__99__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__100__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__100__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__100__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__100__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__100__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_load_ok__101__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__101__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__101__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_value = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_rd;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_rd = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__102__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__102__actual;
    __Vtask_tb_memory_stage__DOT__check32__102__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__102__expected;
    __Vtask_tb_memory_stage__DOT__check32__102__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__103__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__103__actual;
    __Vtask_tb_memory_stage__DOT__check32__103__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__103__expected;
    __Vtask_tb_memory_stage__DOT__check32__103__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__104__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__104__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__104__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__104__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__104__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__105__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__105__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__105__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__105__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__105__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__106__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__106__actual;
    __Vtask_tb_memory_stage__DOT__check32__106__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__106__expected;
    __Vtask_tb_memory_stage__DOT__check32__106__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__107__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__107__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__107__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__107__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__107__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_load__110__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_load__110__op_i;
    __Vtask_tb_memory_stage__DOT__test_load__110__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_load__110__rd_i;
    __Vtask_tb_memory_stage__DOT__test_load__110__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__110__addr_i;
    __Vtask_tb_memory_stage__DOT__test_load__110__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__110__memory_word;
    __Vtask_tb_memory_stage__DOT__test_load__110__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__110__expected_value;
    __Vtask_tb_memory_stage__DOT__test_load__110__expected_value = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_load__110__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_load__110__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__110__pc_i;
    __Vtask_tb_memory_stage__DOT__test_load__110__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__111__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__111__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__111__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__111__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__111__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__111__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__111__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__111__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__111__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__111__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__111__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__112__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__112__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__112__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__112__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__112__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__112__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__112__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__112__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__112__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__112__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__112__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__112__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__114__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__114__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__114__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__114__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__114__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__115__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__115__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__115__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__115__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__115__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__116__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__116__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__116__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__116__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__116__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__117__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__117__actual;
    __Vtask_tb_memory_stage__DOT__check32__117__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__117__expected;
    __Vtask_tb_memory_stage__DOT__check32__117__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__118__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__118__actual;
    __Vtask_tb_memory_stage__DOT__check4__118__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__118__expected;
    __Vtask_tb_memory_stage__DOT__check4__118__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__119__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__119__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__119__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__119__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__119__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__120__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__120__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__120__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__120__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__120__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__121__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__121__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__121__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__121__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__121__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_load_ok__122__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__122__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__122__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_value = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_rd;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_rd = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__123__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__123__actual;
    __Vtask_tb_memory_stage__DOT__check32__123__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__123__expected;
    __Vtask_tb_memory_stage__DOT__check32__123__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__124__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__124__actual;
    __Vtask_tb_memory_stage__DOT__check32__124__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__124__expected;
    __Vtask_tb_memory_stage__DOT__check32__124__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__125__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__125__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__125__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__125__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__125__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__126__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__126__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__126__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__126__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__126__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__127__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__127__actual;
    __Vtask_tb_memory_stage__DOT__check32__127__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__127__expected;
    __Vtask_tb_memory_stage__DOT__check32__127__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__128__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__128__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__128__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__128__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__128__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_load__131__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_load__131__op_i;
    __Vtask_tb_memory_stage__DOT__test_load__131__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_load__131__rd_i;
    __Vtask_tb_memory_stage__DOT__test_load__131__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__131__addr_i;
    __Vtask_tb_memory_stage__DOT__test_load__131__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__131__memory_word;
    __Vtask_tb_memory_stage__DOT__test_load__131__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__131__expected_value;
    __Vtask_tb_memory_stage__DOT__test_load__131__expected_value = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_load__131__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_load__131__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__131__pc_i;
    __Vtask_tb_memory_stage__DOT__test_load__131__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__132__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__132__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__132__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__132__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__132__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__132__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__132__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__132__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__132__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__132__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__132__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__133__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__133__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__133__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__133__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__133__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__133__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__133__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__133__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__133__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__133__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__133__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__133__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__135__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__135__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__135__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__135__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__135__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__136__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__136__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__136__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__136__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__136__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__137__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__137__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__137__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__137__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__137__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__138__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__138__actual;
    __Vtask_tb_memory_stage__DOT__check32__138__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__138__expected;
    __Vtask_tb_memory_stage__DOT__check32__138__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__139__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__139__actual;
    __Vtask_tb_memory_stage__DOT__check4__139__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__139__expected;
    __Vtask_tb_memory_stage__DOT__check4__139__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__140__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__140__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__140__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__140__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__140__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__141__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__141__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__141__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__141__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__141__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__142__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__142__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__142__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__142__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__142__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_load_ok__143__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__143__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__143__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_value = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_rd;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_rd = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__144__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__144__actual;
    __Vtask_tb_memory_stage__DOT__check32__144__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__144__expected;
    __Vtask_tb_memory_stage__DOT__check32__144__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__145__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__145__actual;
    __Vtask_tb_memory_stage__DOT__check32__145__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__145__expected;
    __Vtask_tb_memory_stage__DOT__check32__145__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__146__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__146__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__146__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__146__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__146__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__147__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__147__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__147__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__147__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__147__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__148__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__148__actual;
    __Vtask_tb_memory_stage__DOT__check32__148__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__148__expected;
    __Vtask_tb_memory_stage__DOT__check32__148__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__149__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__149__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__149__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__149__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__149__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_load__152__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_load__152__op_i;
    __Vtask_tb_memory_stage__DOT__test_load__152__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_load__152__rd_i;
    __Vtask_tb_memory_stage__DOT__test_load__152__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__152__addr_i;
    __Vtask_tb_memory_stage__DOT__test_load__152__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__152__memory_word;
    __Vtask_tb_memory_stage__DOT__test_load__152__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__152__expected_value;
    __Vtask_tb_memory_stage__DOT__test_load__152__expected_value = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_load__152__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_load__152__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__152__pc_i;
    __Vtask_tb_memory_stage__DOT__test_load__152__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__153__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__153__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__153__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__153__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__153__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__153__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__153__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__153__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__153__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__153__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__153__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__154__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__154__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__154__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__154__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__154__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__154__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__154__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__154__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__154__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__154__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__154__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__154__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__156__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__156__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__156__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__156__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__156__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__157__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__157__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__157__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__157__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__157__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__158__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__158__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__158__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__158__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__158__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__159__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__159__actual;
    __Vtask_tb_memory_stage__DOT__check32__159__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__159__expected;
    __Vtask_tb_memory_stage__DOT__check32__159__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__160__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__160__actual;
    __Vtask_tb_memory_stage__DOT__check4__160__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__160__expected;
    __Vtask_tb_memory_stage__DOT__check4__160__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__161__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__161__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__161__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__161__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__161__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__162__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__162__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__162__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__162__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__162__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__163__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__163__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__163__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__163__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__163__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_load_ok__164__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__164__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__164__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_value = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_rd;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_rd = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__165__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__165__actual;
    __Vtask_tb_memory_stage__DOT__check32__165__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__165__expected;
    __Vtask_tb_memory_stage__DOT__check32__165__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__166__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__166__actual;
    __Vtask_tb_memory_stage__DOT__check32__166__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__166__expected;
    __Vtask_tb_memory_stage__DOT__check32__166__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__167__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__167__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__167__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__167__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__167__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__168__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__168__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__168__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__168__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__168__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__169__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__169__actual;
    __Vtask_tb_memory_stage__DOT__check32__169__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__169__expected;
    __Vtask_tb_memory_stage__DOT__check32__169__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__170__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__170__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__170__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__170__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__170__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_load__173__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_load__173__op_i;
    __Vtask_tb_memory_stage__DOT__test_load__173__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_load__173__rd_i;
    __Vtask_tb_memory_stage__DOT__test_load__173__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__173__addr_i;
    __Vtask_tb_memory_stage__DOT__test_load__173__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__173__memory_word;
    __Vtask_tb_memory_stage__DOT__test_load__173__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__173__expected_value;
    __Vtask_tb_memory_stage__DOT__test_load__173__expected_value = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_load__173__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_load__173__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__173__pc_i;
    __Vtask_tb_memory_stage__DOT__test_load__173__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__174__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__174__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__174__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__174__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__174__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__174__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__174__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__174__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__174__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__174__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__174__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__175__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__175__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__175__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__175__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__175__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__175__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__175__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__175__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__175__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__175__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__175__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__175__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__177__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__177__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__177__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__177__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__177__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__178__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__178__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__178__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__178__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__178__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__179__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__179__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__179__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__179__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__179__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__180__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__180__actual;
    __Vtask_tb_memory_stage__DOT__check32__180__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__180__expected;
    __Vtask_tb_memory_stage__DOT__check32__180__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__181__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__181__actual;
    __Vtask_tb_memory_stage__DOT__check4__181__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__181__expected;
    __Vtask_tb_memory_stage__DOT__check4__181__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__182__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__182__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__182__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__182__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__182__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__183__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__183__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__183__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__183__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__183__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__184__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__184__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__184__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__184__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__184__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_load_ok__185__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__185__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__185__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_value = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_rd;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_rd = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__186__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__186__actual;
    __Vtask_tb_memory_stage__DOT__check32__186__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__186__expected;
    __Vtask_tb_memory_stage__DOT__check32__186__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__187__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__187__actual;
    __Vtask_tb_memory_stage__DOT__check32__187__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__187__expected;
    __Vtask_tb_memory_stage__DOT__check32__187__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__188__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__188__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__188__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__188__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__188__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__189__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__189__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__189__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__189__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__189__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__190__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__190__actual;
    __Vtask_tb_memory_stage__DOT__check32__190__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__190__expected;
    __Vtask_tb_memory_stage__DOT__check32__190__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__191__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__191__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__191__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__191__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__191__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_load__194__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_load__194__op_i;
    __Vtask_tb_memory_stage__DOT__test_load__194__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_load__194__rd_i;
    __Vtask_tb_memory_stage__DOT__test_load__194__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__194__addr_i;
    __Vtask_tb_memory_stage__DOT__test_load__194__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__194__memory_word;
    __Vtask_tb_memory_stage__DOT__test_load__194__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__194__expected_value;
    __Vtask_tb_memory_stage__DOT__test_load__194__expected_value = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_load__194__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_load__194__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_load__194__pc_i;
    __Vtask_tb_memory_stage__DOT__test_load__194__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__195__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__195__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__195__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__195__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__195__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__195__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__195__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__195__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__195__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__195__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__195__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__196__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__196__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__196__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__196__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__196__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__196__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__196__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__196__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__196__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__196__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__196__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__196__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__198__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__198__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__198__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__198__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__198__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__199__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__199__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__199__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__199__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__199__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__200__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__200__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__200__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__200__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__200__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__201__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__201__actual;
    __Vtask_tb_memory_stage__DOT__check32__201__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__201__expected;
    __Vtask_tb_memory_stage__DOT__check32__201__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__202__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__202__actual;
    __Vtask_tb_memory_stage__DOT__check4__202__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__202__expected;
    __Vtask_tb_memory_stage__DOT__check4__202__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__203__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__203__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__203__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__203__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__203__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__204__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__204__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__204__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__204__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__204__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__205__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__205__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__205__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__205__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__205__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_load_ok__206__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__206__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__206__memory_word = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_value = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_rd;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_rd = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__207__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__207__actual;
    __Vtask_tb_memory_stage__DOT__check32__207__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__207__expected;
    __Vtask_tb_memory_stage__DOT__check32__207__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__208__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__208__actual;
    __Vtask_tb_memory_stage__DOT__check32__208__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__208__expected;
    __Vtask_tb_memory_stage__DOT__check32__208__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__209__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__209__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__209__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__209__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__209__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__210__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__210__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__210__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__210__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__210__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__211__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__211__actual;
    __Vtask_tb_memory_stage__DOT__check32__211__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__211__expected;
    __Vtask_tb_memory_stage__DOT__check32__211__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__212__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__212__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__212__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__212__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__212__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_store__215__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_store__215__op_i;
    __Vtask_tb_memory_stage__DOT__test_store__215__op_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__215__addr_i;
    __Vtask_tb_memory_stage__DOT__test_store__215__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__215__source_i;
    __Vtask_tb_memory_stage__DOT__test_store__215__source_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__215__expected_mosi;
    __Vtask_tb_memory_stage__DOT__test_store__215__expected_mosi = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_store__215__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_store__215__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__215__pc_i;
    __Vtask_tb_memory_stage__DOT__test_store__215__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__216__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__216__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__216__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__216__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__216__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__216__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__216__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__216__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__216__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__216__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__216__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__217__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__217__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__217__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__217__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__217__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__217__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__217__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__217__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__217__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__217__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__217__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__217__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__219__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__219__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__219__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__219__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__219__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__220__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__220__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__220__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__220__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__220__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__221__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__221__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__221__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__221__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__221__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__222__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__222__actual;
    __Vtask_tb_memory_stage__DOT__check32__222__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__222__expected;
    __Vtask_tb_memory_stage__DOT__check32__222__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__223__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__223__actual;
    __Vtask_tb_memory_stage__DOT__check4__223__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__223__expected;
    __Vtask_tb_memory_stage__DOT__check4__223__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__224__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__224__actual;
    __Vtask_tb_memory_stage__DOT__check32__224__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__224__expected;
    __Vtask_tb_memory_stage__DOT__check32__224__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__225__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__225__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__225__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__225__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__225__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__226__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__226__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__226__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__226__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__226__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_store_ok__227__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__227__expected_addr;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__227__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__227__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__227__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__228__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__228__actual;
    __Vtask_tb_memory_stage__DOT__check32__228__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__228__expected;
    __Vtask_tb_memory_stage__DOT__check32__228__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__229__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__229__actual;
    __Vtask_tb_memory_stage__DOT__check32__229__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__229__expected;
    __Vtask_tb_memory_stage__DOT__check32__229__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__230__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__230__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__230__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__230__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__230__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__231__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__231__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__231__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__231__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__231__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__232__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__232__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__232__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__232__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__232__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_store__235__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_store__235__op_i;
    __Vtask_tb_memory_stage__DOT__test_store__235__op_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__235__addr_i;
    __Vtask_tb_memory_stage__DOT__test_store__235__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__235__source_i;
    __Vtask_tb_memory_stage__DOT__test_store__235__source_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__235__expected_mosi;
    __Vtask_tb_memory_stage__DOT__test_store__235__expected_mosi = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_store__235__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_store__235__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__235__pc_i;
    __Vtask_tb_memory_stage__DOT__test_store__235__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__236__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__236__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__236__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__236__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__236__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__236__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__236__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__236__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__236__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__236__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__236__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__237__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__237__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__237__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__237__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__237__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__237__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__237__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__237__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__237__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__237__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__237__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__237__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__239__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__239__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__239__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__239__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__239__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__240__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__240__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__240__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__240__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__240__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__241__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__241__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__241__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__241__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__241__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__242__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__242__actual;
    __Vtask_tb_memory_stage__DOT__check32__242__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__242__expected;
    __Vtask_tb_memory_stage__DOT__check32__242__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__243__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__243__actual;
    __Vtask_tb_memory_stage__DOT__check4__243__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__243__expected;
    __Vtask_tb_memory_stage__DOT__check4__243__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__244__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__244__actual;
    __Vtask_tb_memory_stage__DOT__check32__244__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__244__expected;
    __Vtask_tb_memory_stage__DOT__check32__244__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__245__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__245__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__245__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__245__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__245__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__246__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__246__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__246__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__246__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__246__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_store_ok__247__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__247__expected_addr;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__247__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__247__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__247__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__248__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__248__actual;
    __Vtask_tb_memory_stage__DOT__check32__248__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__248__expected;
    __Vtask_tb_memory_stage__DOT__check32__248__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__249__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__249__actual;
    __Vtask_tb_memory_stage__DOT__check32__249__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__249__expected;
    __Vtask_tb_memory_stage__DOT__check32__249__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__250__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__250__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__250__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__250__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__250__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__251__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__251__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__251__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__251__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__251__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__252__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__252__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__252__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__252__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__252__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_store__255__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_store__255__op_i;
    __Vtask_tb_memory_stage__DOT__test_store__255__op_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__255__addr_i;
    __Vtask_tb_memory_stage__DOT__test_store__255__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__255__source_i;
    __Vtask_tb_memory_stage__DOT__test_store__255__source_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__255__expected_mosi;
    __Vtask_tb_memory_stage__DOT__test_store__255__expected_mosi = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_store__255__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_store__255__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__255__pc_i;
    __Vtask_tb_memory_stage__DOT__test_store__255__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__256__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__256__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__256__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__256__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__256__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__256__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__256__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__256__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__256__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__256__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__256__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__257__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__257__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__257__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__257__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__257__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__257__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__257__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__257__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__257__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__257__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__257__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__257__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__259__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__259__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__259__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__259__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__259__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__260__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__260__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__260__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__260__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__260__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__261__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__261__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__261__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__261__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__261__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__262__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__262__actual;
    __Vtask_tb_memory_stage__DOT__check32__262__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__262__expected;
    __Vtask_tb_memory_stage__DOT__check32__262__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__263__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__263__actual;
    __Vtask_tb_memory_stage__DOT__check4__263__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__263__expected;
    __Vtask_tb_memory_stage__DOT__check4__263__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__264__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__264__actual;
    __Vtask_tb_memory_stage__DOT__check32__264__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__264__expected;
    __Vtask_tb_memory_stage__DOT__check32__264__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__265__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__265__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__265__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__265__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__265__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__266__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__266__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__266__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__266__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__266__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_store_ok__267__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__267__expected_addr;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__267__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__267__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__267__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__268__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__268__actual;
    __Vtask_tb_memory_stage__DOT__check32__268__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__268__expected;
    __Vtask_tb_memory_stage__DOT__check32__268__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__269__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__269__actual;
    __Vtask_tb_memory_stage__DOT__check32__269__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__269__expected;
    __Vtask_tb_memory_stage__DOT__check32__269__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__270__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__270__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__270__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__270__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__270__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__271__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__271__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__271__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__271__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__271__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__272__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__272__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__272__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__272__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__272__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_store__275__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_store__275__op_i;
    __Vtask_tb_memory_stage__DOT__test_store__275__op_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__275__addr_i;
    __Vtask_tb_memory_stage__DOT__test_store__275__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__275__source_i;
    __Vtask_tb_memory_stage__DOT__test_store__275__source_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__275__expected_mosi;
    __Vtask_tb_memory_stage__DOT__test_store__275__expected_mosi = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_store__275__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_store__275__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__275__pc_i;
    __Vtask_tb_memory_stage__DOT__test_store__275__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__276__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__276__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__276__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__276__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__276__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__276__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__276__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__276__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__276__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__276__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__276__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__277__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__277__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__277__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__277__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__277__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__277__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__277__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__277__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__277__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__277__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__277__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__277__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__279__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__279__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__279__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__279__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__279__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__280__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__280__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__280__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__280__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__280__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__281__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__281__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__281__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__281__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__281__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__282__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__282__actual;
    __Vtask_tb_memory_stage__DOT__check32__282__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__282__expected;
    __Vtask_tb_memory_stage__DOT__check32__282__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__283__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__283__actual;
    __Vtask_tb_memory_stage__DOT__check4__283__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__283__expected;
    __Vtask_tb_memory_stage__DOT__check4__283__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__284__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__284__actual;
    __Vtask_tb_memory_stage__DOT__check32__284__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__284__expected;
    __Vtask_tb_memory_stage__DOT__check32__284__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__285__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__285__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__285__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__285__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__285__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__286__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__286__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__286__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__286__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__286__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_store_ok__287__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__287__expected_addr;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__287__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__287__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__287__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__288__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__288__actual;
    __Vtask_tb_memory_stage__DOT__check32__288__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__288__expected;
    __Vtask_tb_memory_stage__DOT__check32__288__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__289__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__289__actual;
    __Vtask_tb_memory_stage__DOT__check32__289__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__289__expected;
    __Vtask_tb_memory_stage__DOT__check32__289__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__290__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__290__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__290__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__290__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__290__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__291__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__291__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__291__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__291__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__291__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__292__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__292__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__292__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__292__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__292__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_store__295__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_store__295__op_i;
    __Vtask_tb_memory_stage__DOT__test_store__295__op_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__295__addr_i;
    __Vtask_tb_memory_stage__DOT__test_store__295__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__295__source_i;
    __Vtask_tb_memory_stage__DOT__test_store__295__source_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__295__expected_mosi;
    __Vtask_tb_memory_stage__DOT__test_store__295__expected_mosi = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_store__295__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_store__295__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__295__pc_i;
    __Vtask_tb_memory_stage__DOT__test_store__295__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__296__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__296__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__296__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__296__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__296__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__296__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__296__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__296__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__296__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__296__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__296__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__297__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__297__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__297__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__297__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__297__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__297__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__297__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__297__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__297__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__297__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__297__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__297__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__299__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__299__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__299__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__299__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__299__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__300__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__300__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__300__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__300__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__300__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__301__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__301__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__301__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__301__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__301__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__302__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__302__actual;
    __Vtask_tb_memory_stage__DOT__check32__302__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__302__expected;
    __Vtask_tb_memory_stage__DOT__check32__302__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__303__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__303__actual;
    __Vtask_tb_memory_stage__DOT__check4__303__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__303__expected;
    __Vtask_tb_memory_stage__DOT__check4__303__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__304__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__304__actual;
    __Vtask_tb_memory_stage__DOT__check32__304__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__304__expected;
    __Vtask_tb_memory_stage__DOT__check32__304__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__305__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__305__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__305__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__305__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__305__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__306__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__306__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__306__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__306__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__306__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_store_ok__307__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__307__expected_addr;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__307__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__307__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__307__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__308__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__308__actual;
    __Vtask_tb_memory_stage__DOT__check32__308__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__308__expected;
    __Vtask_tb_memory_stage__DOT__check32__308__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__309__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__309__actual;
    __Vtask_tb_memory_stage__DOT__check32__309__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__309__expected;
    __Vtask_tb_memory_stage__DOT__check32__309__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__310__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__310__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__310__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__310__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__310__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__311__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__311__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__311__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__311__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__311__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__312__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__312__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__312__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__312__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__312__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_store__315__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_store__315__op_i;
    __Vtask_tb_memory_stage__DOT__test_store__315__op_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__315__addr_i;
    __Vtask_tb_memory_stage__DOT__test_store__315__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__315__source_i;
    __Vtask_tb_memory_stage__DOT__test_store__315__source_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__315__expected_mosi;
    __Vtask_tb_memory_stage__DOT__test_store__315__expected_mosi = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_store__315__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_store__315__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__315__pc_i;
    __Vtask_tb_memory_stage__DOT__test_store__315__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__316__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__316__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__316__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__316__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__316__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__316__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__316__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__316__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__316__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__316__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__316__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__317__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__317__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__317__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__317__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__317__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__317__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__317__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__317__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__317__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__317__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__317__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__317__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__319__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__319__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__319__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__319__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__319__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__320__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__320__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__320__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__320__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__320__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__321__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__321__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__321__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__321__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__321__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__322__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__322__actual;
    __Vtask_tb_memory_stage__DOT__check32__322__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__322__expected;
    __Vtask_tb_memory_stage__DOT__check32__322__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__323__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__323__actual;
    __Vtask_tb_memory_stage__DOT__check4__323__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__323__expected;
    __Vtask_tb_memory_stage__DOT__check4__323__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__324__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__324__actual;
    __Vtask_tb_memory_stage__DOT__check32__324__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__324__expected;
    __Vtask_tb_memory_stage__DOT__check32__324__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__325__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__325__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__325__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__325__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__325__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__326__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__326__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__326__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__326__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__326__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_store_ok__327__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__327__expected_addr;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__327__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__327__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__327__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__328__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__328__actual;
    __Vtask_tb_memory_stage__DOT__check32__328__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__328__expected;
    __Vtask_tb_memory_stage__DOT__check32__328__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__329__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__329__actual;
    __Vtask_tb_memory_stage__DOT__check32__329__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__329__expected;
    __Vtask_tb_memory_stage__DOT__check32__329__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__330__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__330__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__330__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__330__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__330__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__331__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__331__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__331__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__331__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__331__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__332__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__332__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__332__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__332__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__332__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_store__335__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_store__335__op_i;
    __Vtask_tb_memory_stage__DOT__test_store__335__op_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__335__addr_i;
    __Vtask_tb_memory_stage__DOT__test_store__335__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__335__source_i;
    __Vtask_tb_memory_stage__DOT__test_store__335__source_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__335__expected_mosi;
    __Vtask_tb_memory_stage__DOT__test_store__335__expected_mosi = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_store__335__expected_sel;
    __Vtask_tb_memory_stage__DOT__test_store__335__expected_sel = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_store__335__pc_i;
    __Vtask_tb_memory_stage__DOT__test_store__335__pc_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__336__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__336__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__336__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__336__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__336__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__336__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__336__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__336__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__336__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__336__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__336__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__337__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__337__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__337__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__337__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__337__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__337__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__337__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__337__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__337__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__337__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__337__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__337__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__339__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__339__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__339__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__339__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__339__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__340__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__340__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__340__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__340__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__340__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__341__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__341__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__341__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__341__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__341__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__342__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__342__actual;
    __Vtask_tb_memory_stage__DOT__check32__342__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__342__expected;
    __Vtask_tb_memory_stage__DOT__check32__342__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check4__343__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__343__actual;
    __Vtask_tb_memory_stage__DOT__check4__343__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check4__343__expected;
    __Vtask_tb_memory_stage__DOT__check4__343__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__344__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__344__actual;
    __Vtask_tb_memory_stage__DOT__check32__344__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__344__expected;
    __Vtask_tb_memory_stage__DOT__check32__344__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__345__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__345__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__345__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__345__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__345__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__346__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__346__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__346__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__346__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__346__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_store_ok__347__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__347__expected_addr;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__347__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__finish_store_ok__347__expected_pc;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__347__expected_pc = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__348__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__348__actual;
    __Vtask_tb_memory_stage__DOT__check32__348__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__348__expected;
    __Vtask_tb_memory_stage__DOT__check32__348__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__349__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__349__actual;
    __Vtask_tb_memory_stage__DOT__check32__349__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__349__expected;
    __Vtask_tb_memory_stage__DOT__check32__349__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__350__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__350__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__350__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__350__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__350__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__351__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__351__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__351__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__351__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__351__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__352__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__352__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__352__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__352__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__352__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_misaligned__355__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__355__op_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__355__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__355__rd_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__355__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__355__addr_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__355__addr_i = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__355__expected_status;
    __Vtask_tb_memory_stage__DOT__test_misaligned__355__expected_status = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__356__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__356__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__356__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__356__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__356__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__356__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__356__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__356__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__356__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__356__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__356__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__357__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__357__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__357__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__357__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__357__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__357__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__357__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__357__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__357__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__357__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__357__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__357__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__359__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__359__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__359__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__359__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__359__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__360__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__360__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__360__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__360__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__360__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__361__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__361__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__361__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__361__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__361__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__362__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__362__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__362__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__362__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__362__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__363__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__363__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__363__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__363__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__363__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_misaligned__367__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__367__op_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__367__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__367__rd_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__367__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__367__addr_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__367__addr_i = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__367__expected_status;
    __Vtask_tb_memory_stage__DOT__test_misaligned__367__expected_status = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__368__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__368__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__368__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__368__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__368__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__368__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__368__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__368__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__368__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__368__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__368__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__369__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__369__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__369__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__369__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__369__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__369__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__369__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__369__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__369__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__369__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__369__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__369__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__371__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__371__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__371__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__371__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__371__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__372__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__372__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__372__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__372__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__372__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__373__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__373__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__373__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__373__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__373__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__374__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__374__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__374__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__374__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__374__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__375__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__375__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__375__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__375__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__375__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_misaligned__379__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__379__op_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__379__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__379__rd_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__379__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__379__addr_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__379__addr_i = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__379__expected_status;
    __Vtask_tb_memory_stage__DOT__test_misaligned__379__expected_status = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__380__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__380__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__380__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__380__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__380__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__380__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__380__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__380__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__380__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__380__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__380__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__381__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__381__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__381__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__381__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__381__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__381__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__381__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__381__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__381__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__381__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__381__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__381__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__383__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__383__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__383__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__383__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__383__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__384__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__384__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__384__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__384__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__384__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__385__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__385__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__385__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__385__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__385__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__386__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__386__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__386__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__386__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__386__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__387__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__387__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__387__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__387__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__387__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_misaligned__391__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__391__op_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__391__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__391__rd_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__391__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__391__addr_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__391__addr_i = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__391__expected_status;
    __Vtask_tb_memory_stage__DOT__test_misaligned__391__expected_status = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__392__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__392__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__392__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__392__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__392__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__392__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__392__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__392__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__392__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__392__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__392__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__393__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__393__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__393__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__393__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__393__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__393__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__393__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__393__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__393__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__393__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__393__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__393__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__395__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__395__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__395__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__395__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__395__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__396__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__396__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__396__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__396__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__396__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__397__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__397__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__397__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__397__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__397__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__398__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__398__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__398__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__398__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__398__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__399__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__399__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__399__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__399__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__399__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__test_misaligned__403__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__403__op_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__403__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__403__rd_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__403__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__403__addr_i;
    __Vtask_tb_memory_stage__DOT__test_misaligned__403__addr_i = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__test_misaligned__403__expected_status;
    __Vtask_tb_memory_stage__DOT__test_misaligned__403__expected_status = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__404__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__404__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__404__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__404__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__404__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__404__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__404__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__404__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__404__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__404__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__404__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__405__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__405__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__405__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__405__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__405__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__405__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__405__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__405__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__405__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__405__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__405__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__405__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__407__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__407__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__407__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__407__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__407__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__408__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__408__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__408__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__408__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__408__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__409__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__409__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__409__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__409__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__409__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__410__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__410__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__410__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__410__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__410__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__411__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__411__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__411__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__411__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__411__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__415__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__415__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__415__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__415__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__415__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__415__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__415__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__415__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__415__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__415__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__415__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__416__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__416__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__416__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__416__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__416__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__416__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__416__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__416__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__416__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__416__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__416__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__416__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__418__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__418__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__418__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__418__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__418__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_fault__419__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__finish_fault__419__expected_status;
    __Vtask_tb_memory_stage__DOT__finish_fault__419__expected_status = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__420__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__420__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__420__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__420__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__420__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__421__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__421__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__421__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__421__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__421__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__422__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__422__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__422__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__422__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__422__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__start_memory_op__425__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__425__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__425__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__425__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__425__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__425__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__425__addr_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__425__store_data_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__425__store_data_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__start_memory_op__425__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__425__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__426__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__426__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__426__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__426__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__426__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__426__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__426__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__426__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__426__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__426__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__426__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__426__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__428__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__428__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__428__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__428__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__428__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__finish_fault__429__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__finish_fault__429__expected_status;
    __Vtask_tb_memory_stage__DOT__finish_fault__429__expected_status = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__430__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__430__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__430__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__430__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__430__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__431__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__431__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__431__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__431__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__431__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__432__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__432__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__432__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__432__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__432__expected = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__435__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__435__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__435__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__435__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__435__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__435__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__435__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__435__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__435__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__435__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__435__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__435__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__437__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__437__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__437__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__437__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__437__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__438__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__438__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__438__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__438__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__438__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_op__439__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__439__actual;
    __Vtask_tb_memory_stage__DOT__check_op__439__actual = 0;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__439__expected;
    __Vtask_tb_memory_stage__DOT__check_op__439__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__drive_non_memory__443__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__drive_non_memory__443__op_i;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__443__op_i = 0;
    CData/*4:0*/ __Vtask_tb_memory_stage__DOT__drive_non_memory__443__rd_i;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__443__rd_i = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__drive_non_memory__443__rd_val;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__443__rd_val = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__drive_non_memory__443__pc_i;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__443__pc_i = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__444__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__444__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__444__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__444__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__444__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__444__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__444__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__444__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__444__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__444__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__444__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__444__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_op__446__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__446__actual;
    __Vtask_tb_memory_stage__DOT__check_op__446__actual = 0;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__446__expected;
    __Vtask_tb_memory_stage__DOT__check_op__446__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__447__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__447__actual;
    __Vtask_tb_memory_stage__DOT__check32__447__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__447__expected;
    __Vtask_tb_memory_stage__DOT__check32__447__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__448__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__448__actual;
    __Vtask_tb_memory_stage__DOT__check32__448__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__448__expected;
    __Vtask_tb_memory_stage__DOT__check32__448__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__449__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__449__actual;
    __Vtask_tb_memory_stage__DOT__check32__449__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__449__expected;
    __Vtask_tb_memory_stage__DOT__check32__449__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__450__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__450__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__450__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__450__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__450__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__451__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__451__actual;
    __Vtask_tb_memory_stage__DOT__check32__451__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__451__expected;
    __Vtask_tb_memory_stage__DOT__check32__451__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__452__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__452__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__452__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__452__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__452__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__453__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__453__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__453__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__453__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__453__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__454__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__454__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__454__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__454__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__454__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__455__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__455__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__455__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__455__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__455__expected = 0;
    VlWide<3>/*64:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__459__Vfuncout;
    VL_ZERO_W(65, __Vfunc_tb_memory_stage__DOT__make_instr__459__Vfuncout);
    CData/*5:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__459__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__459__op_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__459__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__459__rd_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__459__rs1_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__459__rs1_i = 0;
    CData/*4:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__459__rs2_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__459__rs2_i = 0;
    IData/*31:0*/ __Vfunc_tb_memory_stage__DOT__make_instr__459__imm_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__459__imm_i = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_op__461__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__461__actual;
    __Vtask_tb_memory_stage__DOT__check_op__461__actual = 0;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__461__expected;
    __Vtask_tb_memory_stage__DOT__check_op__461__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__462__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__462__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__462__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__462__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__462__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__463__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__463__actual;
    __Vtask_tb_memory_stage__DOT__check32__463__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__463__expected;
    __Vtask_tb_memory_stage__DOT__check32__463__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_op__464__name;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__464__actual;
    __Vtask_tb_memory_stage__DOT__check_op__464__actual = 0;
    CData/*5:0*/ __Vtask_tb_memory_stage__DOT__check_op__464__expected;
    __Vtask_tb_memory_stage__DOT__check_op__464__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_fwd_status__465__name;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__465__actual;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__465__actual = 0;
    CData/*3:0*/ __Vtask_tb_memory_stage__DOT__check_fwd_status__465__expected;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__465__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bwd_status__466__name;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__466__actual;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__466__actual = 0;
    CData/*1:0*/ __Vtask_tb_memory_stage__DOT__check_bwd_status__466__expected;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__466__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check32__467__name;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__467__actual;
    __Vtask_tb_memory_stage__DOT__check32__467__actual = 0;
    IData/*31:0*/ __Vtask_tb_memory_stage__DOT__check32__467__expected;
    __Vtask_tb_memory_stage__DOT__check32__467__expected = 0;
    std::string __Vtask_tb_memory_stage__DOT__check_bit__468__name;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__468__actual;
    __Vtask_tb_memory_stage__DOT__check_bit__468__actual = 0;
    CData/*0:0*/ __Vtask_tb_memory_stage__DOT__check_bit__468__expected;
    __Vtask_tb_memory_stage__DOT__check_bit__468__expected = 0;
    // Body
    vlSelf->tb_memory_stage__DOT__pass_count = 0U;
    vlSelf->tb_memory_stage__DOT__fail_count = 0U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    vlSelf->tb_memory_stage__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       450);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       450);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       450);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       451);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_op__2__expected = 0x12U;
    __Vtask_tb_memory_stage__DOT__check_op__2__actual 
        = (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                     << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                               >> 0x1bU)));
    __Vtask_tb_memory_stage__DOT__check_op__2__name = 
        std::string{"reset NOP"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_op__2__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_op__2__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_op__2__name),
                  6,(IData)(__Vtask_tb_memory_stage__DOT__check_op__2__actual),
                  6,__Vtask_tb_memory_stage__DOT__check_op__2__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_op__2__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__3__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__3__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__3__name = 
        std::string{"reset BUBBLE"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__3__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__3__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__3__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__3__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__3__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__3__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__4__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__4__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__4__name = 
        std::string{"reset READY"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__4__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__4__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__4__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__4__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__4__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__4__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__5__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__5__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__5__name = 
        std::string{"reset wb.cyc"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__5__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__5__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__5__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__5__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__5__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__5__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__6__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__6__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__6__name = 
        std::string{"reset wb.stb"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__6__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__6__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__6__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__6__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__6__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__6__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    vlSelf->tb_memory_stage__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__10__pc_i = 0x100U;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__10__rd_val = 0x12345678U;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__10__rd_i = 5U;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__10__op_i = 0x1bU;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__10__name = 
        std::string{"pass ADD result"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__drive_non_memory__10__rd_val;
    __Vfunc_tb_memory_stage__DOT__make_instr__11__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__11__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__11__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__11__rd_i 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__10__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__11__op_i 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__10__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__11__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__11__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__11__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__11__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__11__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__11__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__11__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__11__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__11__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__11__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__11__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__11__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__11__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__11__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__11__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__11__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__10__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__drive_non_memory__10__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       239);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       240);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_op__13__expected 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__10__op_i;
    __Vtask_tb_memory_stage__DOT__check_op__13__actual 
        = (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                     << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                               >> 0x1bU)));
    __Vtask_tb_memory_stage__DOT__check_op__13__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__name, 
                                            std::string{" op"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_op__13__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_op__13__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_op__13__name),
                  6,(IData)(__Vtask_tb_memory_stage__DOT__check_op__13__actual),
                  6,__Vtask_tb_memory_stage__DOT__check_op__13__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_op__13__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__14__expected 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__10__rd_val;
    __Vtask_tb_memory_stage__DOT__check32__14__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__14__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__name, 
                                            std::string{" rd"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__14__actual 
         != __Vtask_tb_memory_stage__DOT__check32__14__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__14__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__14__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__14__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__14__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__15__expected 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__10__pc_i;
    __Vtask_tb_memory_stage__DOT__check32__15__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__15__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__15__actual 
         != __Vtask_tb_memory_stage__DOT__check32__15__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__15__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__15__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__15__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__15__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__16__expected 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__drive_non_memory__10__pc_i);
    __Vtask_tb_memory_stage__DOT__check32__16__actual 
        = vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__16__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__name, 
                                            std::string{" next_pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__16__actual 
         != __Vtask_tb_memory_stage__DOT__check32__16__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__16__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__16__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__16__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__16__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__17__expected 
        = (0U != (IData)(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__rd_i));
    __Vtask_tb_memory_stage__DOT__check_bit__17__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__17__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__17__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__17__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__17__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__17__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__17__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__17__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__18__expected 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__10__rd_val;
    __Vtask_tb_memory_stage__DOT__check32__18__actual 
        = (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                   >> 5U));
    __Vtask_tb_memory_stage__DOT__check32__18__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__name, 
                                            std::string{" forwarding data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__18__actual 
         != __Vtask_tb_memory_stage__DOT__check32__18__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__18__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__18__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__18__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__18__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__19__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__19__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__19__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__19__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__19__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__19__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__19__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__19__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__19__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__20__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__20__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__20__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__name, 
                                            std::string{" backward"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__20__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__20__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__20__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__20__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__20__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__20__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__21__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__21__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__21__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__name, 
                                            std::string{" wb.cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__21__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__21__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__21__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__21__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__21__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__21__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__22__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__22__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__22__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__10__name, 
                                            std::string{" wb.stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__22__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__22__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__22__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__22__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__22__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__22__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_load__26__expected_sel = 0xfU;
    __Vtask_tb_memory_stage__DOT__test_load__26__expected_value = 0xaabbccddU;
    __Vtask_tb_memory_stage__DOT__test_load__26__memory_word = 0xaabbccddU;
    __Vtask_tb_memory_stage__DOT__test_load__26__addr_i = 0x800U;
    __Vtask_tb_memory_stage__DOT__test_load__26__rd_i = 6U;
    __Vtask_tb_memory_stage__DOT__test_load__26__op_i = 0xcU;
    __Vtask_tb_memory_stage__DOT__test_load__26__name = 
        std::string{"LW"};
    __Vtask_tb_memory_stage__DOT__test_load__26__pc_i 
        = ((IData)(0x1000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__27__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_load__26__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__27__store_data_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__27__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_load__26__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__27__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_load__26__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__27__op_i 
        = __Vtask_tb_memory_stage__DOT__test_load__26__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__27__name 
        = __Vtask_tb_memory_stage__DOT__test_load__26__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__27__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__27__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__27__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__28__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__28__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__28__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__28__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__27__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__28__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__27__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__28__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__28__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__28__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__28__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__28__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__28__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__28__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__28__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__28__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__28__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__28__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__28__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__28__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__28__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__28__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__28__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__27__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__27__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__30__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__30__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__30__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__26__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__30__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__30__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__30__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__30__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__30__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__30__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__31__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__31__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__31__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__26__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__31__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__31__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__31__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__31__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__31__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__31__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__32__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__32__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__26__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__32__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__32__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__32__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__32__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__32__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__32__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__32__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__33__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__26__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__33__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__33__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__26__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__33__actual 
         != __Vtask_tb_memory_stage__DOT__check32__33__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__33__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__33__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__33__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__33__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__34__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__26__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__34__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__26__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__34__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__34__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__34__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__34__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__34__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__34__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__34__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__35__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__35__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__35__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__26__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__35__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__35__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__35__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__35__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__35__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__35__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__36__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__36__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__36__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__26__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__36__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__36__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__36__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__36__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__36__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__36__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__37__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__37__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__37__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__26__name, 
                                            std::string{" no forwarding while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__37__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__37__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__37__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__37__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__37__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__37__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_load__26__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_rd 
        = __Vtask_tb_memory_stage__DOT__test_load__26__rd_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_value 
        = __Vtask_tb_memory_stage__DOT__test_load__26__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__38__memory_word 
        = __Vtask_tb_memory_stage__DOT__test_load__26__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__38__name 
        = __Vtask_tb_memory_stage__DOT__test_load__26__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       292);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__38__memory_word;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       298);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__39__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__39__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__39__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__38__name, 
                                            std::string{" loaded value"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__39__actual 
         != __Vtask_tb_memory_stage__DOT__check32__39__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__39__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__39__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__39__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__39__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__40__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__40__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__40__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__38__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__40__actual 
         != __Vtask_tb_memory_stage__DOT__check32__40__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__40__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__40__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__40__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__40__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__41__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__41__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__41__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__38__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__41__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__41__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__41__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__41__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__41__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__41__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__42__expected 
        = (0U != (IData)(__Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_rd));
    __Vtask_tb_memory_stage__DOT__check_bit__42__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__42__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__38__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__42__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__42__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__42__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__42__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__42__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__42__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__43__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__38__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__43__actual 
        = (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                   >> 5U));
    __Vtask_tb_memory_stage__DOT__check32__43__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__38__name, 
                                            std::string{" forwarding data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__43__actual 
         != __Vtask_tb_memory_stage__DOT__check32__43__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__43__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__43__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__43__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__43__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__44__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__44__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__44__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__38__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__44__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__44__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__44__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__44__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__44__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__44__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       310);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_load__47__expected_sel = 1U;
    __Vtask_tb_memory_stage__DOT__test_load__47__expected_value = 0xffffff80U;
    __Vtask_tb_memory_stage__DOT__test_load__47__memory_word = 0x11223380U;
    __Vtask_tb_memory_stage__DOT__test_load__47__addr_i = 0x800U;
    __Vtask_tb_memory_stage__DOT__test_load__47__rd_i = 7U;
    __Vtask_tb_memory_stage__DOT__test_load__47__op_i = 0xaU;
    __Vtask_tb_memory_stage__DOT__test_load__47__name = 
        std::string{"LB byte0 sign"};
    __Vtask_tb_memory_stage__DOT__test_load__47__pc_i 
        = ((IData)(0x1000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__48__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_load__47__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__48__store_data_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__48__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_load__47__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__48__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_load__47__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__48__op_i 
        = __Vtask_tb_memory_stage__DOT__test_load__47__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__48__name 
        = __Vtask_tb_memory_stage__DOT__test_load__47__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__48__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__48__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__48__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__49__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__49__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__49__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__49__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__48__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__49__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__48__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__49__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__49__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__49__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__49__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__49__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__49__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__49__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__49__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__49__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__49__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__49__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__49__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__49__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__49__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__49__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__49__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__48__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__48__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__51__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__51__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__51__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__47__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__51__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__51__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__51__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__51__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__51__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__51__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__52__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__52__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__52__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__47__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__52__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__52__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__52__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__52__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__52__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__52__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__53__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__53__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__47__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__53__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__53__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__53__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__53__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__53__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__53__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__53__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__54__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__47__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__54__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__54__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__47__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__54__actual 
         != __Vtask_tb_memory_stage__DOT__check32__54__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__54__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__54__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__54__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__54__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__55__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__47__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__55__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__47__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__55__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__55__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__55__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__55__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__55__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__55__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__55__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__56__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__56__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__56__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__47__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__56__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__56__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__56__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__56__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__56__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__56__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__57__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__57__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__57__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__47__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__57__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__57__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__57__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__57__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__57__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__57__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__58__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__58__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__58__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__47__name, 
                                            std::string{" no forwarding while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__58__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__58__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__58__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__58__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__58__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__58__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_load__47__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_rd 
        = __Vtask_tb_memory_stage__DOT__test_load__47__rd_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_value 
        = __Vtask_tb_memory_stage__DOT__test_load__47__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__59__memory_word 
        = __Vtask_tb_memory_stage__DOT__test_load__47__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__59__name 
        = __Vtask_tb_memory_stage__DOT__test_load__47__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       292);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__59__memory_word;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       298);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__60__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__60__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__60__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__59__name, 
                                            std::string{" loaded value"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__60__actual 
         != __Vtask_tb_memory_stage__DOT__check32__60__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__60__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__60__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__60__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__60__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__61__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__61__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__61__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__59__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__61__actual 
         != __Vtask_tb_memory_stage__DOT__check32__61__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__61__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__61__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__61__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__61__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__62__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__62__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__62__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__59__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__62__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__62__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__62__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__62__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__62__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__62__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__63__expected 
        = (0U != (IData)(__Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_rd));
    __Vtask_tb_memory_stage__DOT__check_bit__63__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__63__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__59__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__63__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__63__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__63__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__63__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__63__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__63__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__64__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__59__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__64__actual 
        = (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                   >> 5U));
    __Vtask_tb_memory_stage__DOT__check32__64__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__59__name, 
                                            std::string{" forwarding data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__64__actual 
         != __Vtask_tb_memory_stage__DOT__check32__64__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__64__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__64__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__64__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__64__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__65__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__65__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__65__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__59__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__65__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__65__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__65__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__65__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__65__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__65__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       310);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_load__68__expected_sel = 2U;
    __Vtask_tb_memory_stage__DOT__test_load__68__expected_value = 0xffffff80U;
    __Vtask_tb_memory_stage__DOT__test_load__68__memory_word = 0x11228033U;
    __Vtask_tb_memory_stage__DOT__test_load__68__addr_i = 0x801U;
    __Vtask_tb_memory_stage__DOT__test_load__68__rd_i = 7U;
    __Vtask_tb_memory_stage__DOT__test_load__68__op_i = 0xaU;
    __Vtask_tb_memory_stage__DOT__test_load__68__name = 
        std::string{"LB byte1 sign"};
    __Vtask_tb_memory_stage__DOT__test_load__68__pc_i 
        = ((IData)(0x1000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__69__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_load__68__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__69__store_data_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__69__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_load__68__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__69__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_load__68__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__69__op_i 
        = __Vtask_tb_memory_stage__DOT__test_load__68__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__69__name 
        = __Vtask_tb_memory_stage__DOT__test_load__68__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__69__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__69__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__69__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__70__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__70__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__70__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__70__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__69__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__70__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__69__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__70__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__70__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__70__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__70__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__70__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__70__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__70__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__70__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__70__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__70__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__70__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__70__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__70__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__70__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__70__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__70__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__69__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__69__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__72__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__72__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__72__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__68__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__72__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__72__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__72__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__72__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__72__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__72__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__73__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__73__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__73__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__68__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__73__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__73__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__73__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__73__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__73__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__73__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__74__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__74__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__68__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__74__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__74__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__74__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__74__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__74__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__74__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__74__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__75__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__68__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__75__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__75__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__68__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__75__actual 
         != __Vtask_tb_memory_stage__DOT__check32__75__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__75__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__75__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__75__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__75__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__76__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__68__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__76__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__68__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__76__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__76__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__76__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__76__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__76__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__76__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__76__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__77__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__77__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__77__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__68__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__77__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__77__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__77__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__77__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__77__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__77__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__78__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__78__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__78__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__68__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__78__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__78__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__78__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__78__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__78__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__78__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__79__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__79__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__79__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__68__name, 
                                            std::string{" no forwarding while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__79__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__79__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__79__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__79__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__79__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__79__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_load__68__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_rd 
        = __Vtask_tb_memory_stage__DOT__test_load__68__rd_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_value 
        = __Vtask_tb_memory_stage__DOT__test_load__68__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__80__memory_word 
        = __Vtask_tb_memory_stage__DOT__test_load__68__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__80__name 
        = __Vtask_tb_memory_stage__DOT__test_load__68__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       292);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__80__memory_word;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       298);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__81__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__81__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__81__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__80__name, 
                                            std::string{" loaded value"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__81__actual 
         != __Vtask_tb_memory_stage__DOT__check32__81__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__81__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__81__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__81__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__81__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__82__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__82__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__82__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__80__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__82__actual 
         != __Vtask_tb_memory_stage__DOT__check32__82__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__82__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__82__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__82__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__82__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__83__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__83__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__83__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__80__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__83__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__83__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__83__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__83__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__83__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__83__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__84__expected 
        = (0U != (IData)(__Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_rd));
    __Vtask_tb_memory_stage__DOT__check_bit__84__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__84__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__80__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__84__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__84__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__84__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__84__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__84__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__84__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__85__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__80__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__85__actual 
        = (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                   >> 5U));
    __Vtask_tb_memory_stage__DOT__check32__85__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__80__name, 
                                            std::string{" forwarding data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__85__actual 
         != __Vtask_tb_memory_stage__DOT__check32__85__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__85__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__85__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__85__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__85__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__86__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__86__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__86__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__80__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__86__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__86__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__86__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__86__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__86__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__86__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       310);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_load__89__expected_sel = 4U;
    __Vtask_tb_memory_stage__DOT__test_load__89__expected_value = 0xaaU;
    __Vtask_tb_memory_stage__DOT__test_load__89__memory_word = 0x11aa2233U;
    __Vtask_tb_memory_stage__DOT__test_load__89__addr_i = 0x802U;
    __Vtask_tb_memory_stage__DOT__test_load__89__rd_i = 7U;
    __Vtask_tb_memory_stage__DOT__test_load__89__op_i = 0xdU;
    __Vtask_tb_memory_stage__DOT__test_load__89__name = 
        std::string{"LBU byte2"};
    __Vtask_tb_memory_stage__DOT__test_load__89__pc_i 
        = ((IData)(0x1000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__90__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_load__89__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__90__store_data_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__90__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_load__89__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__90__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_load__89__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__90__op_i 
        = __Vtask_tb_memory_stage__DOT__test_load__89__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__90__name 
        = __Vtask_tb_memory_stage__DOT__test_load__89__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__90__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__90__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__90__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__91__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__91__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__91__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__91__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__90__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__91__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__90__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__91__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__91__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__91__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__91__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__91__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__91__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__91__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__91__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__91__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__91__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__91__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__91__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__91__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__91__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__91__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__91__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__90__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__90__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__93__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__93__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__93__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__89__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__93__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__93__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__93__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__93__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__93__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__93__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__94__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__94__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__94__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__89__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__94__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__94__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__94__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__94__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__94__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__94__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__95__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__95__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__89__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__95__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__95__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__95__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__95__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__95__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__95__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__95__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__96__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__89__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__96__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__96__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__89__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__96__actual 
         != __Vtask_tb_memory_stage__DOT__check32__96__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__96__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__96__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__96__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__96__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__97__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__89__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__97__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__89__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__97__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__97__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__97__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__97__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__97__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__97__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__97__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__98__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__98__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__98__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__89__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__98__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__98__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__98__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__98__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__98__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__98__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__99__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__99__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__99__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__89__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__99__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__99__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__99__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__99__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__99__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__99__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__100__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__100__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__100__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__89__name, 
                                            std::string{" no forwarding while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__100__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__100__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__100__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__100__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__100__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__100__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_load__89__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_rd 
        = __Vtask_tb_memory_stage__DOT__test_load__89__rd_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_value 
        = __Vtask_tb_memory_stage__DOT__test_load__89__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__101__memory_word 
        = __Vtask_tb_memory_stage__DOT__test_load__89__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__101__name 
        = __Vtask_tb_memory_stage__DOT__test_load__89__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       292);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__101__memory_word;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       298);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__102__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__102__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__102__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__101__name, 
                                            std::string{" loaded value"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__102__actual 
         != __Vtask_tb_memory_stage__DOT__check32__102__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__102__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__102__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__102__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__102__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__103__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__103__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__103__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__101__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__103__actual 
         != __Vtask_tb_memory_stage__DOT__check32__103__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__103__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__103__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__103__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__103__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__104__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__104__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__104__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__101__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__104__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__104__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__104__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__104__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__104__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__104__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__105__expected 
        = (0U != (IData)(__Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_rd));
    __Vtask_tb_memory_stage__DOT__check_bit__105__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__105__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__101__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__105__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__105__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__105__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__105__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__105__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__105__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__106__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__101__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__106__actual 
        = (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                   >> 5U));
    __Vtask_tb_memory_stage__DOT__check32__106__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__101__name, 
                                            std::string{" forwarding data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__106__actual 
         != __Vtask_tb_memory_stage__DOT__check32__106__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__106__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__106__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__106__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__106__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__107__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__107__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__107__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__101__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__107__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__107__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__107__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__107__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__107__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__107__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       310);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_load__110__expected_sel = 8U;
    __Vtask_tb_memory_stage__DOT__test_load__110__expected_value = 0xaaU;
    __Vtask_tb_memory_stage__DOT__test_load__110__memory_word = 0xaa112233U;
    __Vtask_tb_memory_stage__DOT__test_load__110__addr_i = 0x803U;
    __Vtask_tb_memory_stage__DOT__test_load__110__rd_i = 7U;
    __Vtask_tb_memory_stage__DOT__test_load__110__op_i = 0xdU;
    __Vtask_tb_memory_stage__DOT__test_load__110__name = 
        std::string{"LBU byte3"};
    __Vtask_tb_memory_stage__DOT__test_load__110__pc_i 
        = ((IData)(0x1000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__111__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_load__110__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__111__store_data_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__111__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_load__110__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__111__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_load__110__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__111__op_i 
        = __Vtask_tb_memory_stage__DOT__test_load__110__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__111__name 
        = __Vtask_tb_memory_stage__DOT__test_load__110__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__111__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__111__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__111__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__112__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__112__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__112__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__112__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__111__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__112__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__111__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__112__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__112__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__112__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__112__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__112__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__112__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__112__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__112__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__112__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__112__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__112__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__112__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__112__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__112__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__112__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__112__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__111__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__111__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__114__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__114__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__114__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__110__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__114__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__114__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__114__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__114__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__114__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__114__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__115__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__115__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__115__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__110__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__115__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__115__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__115__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__115__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__115__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__115__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__116__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__116__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__110__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__116__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__116__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__116__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__116__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__116__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__116__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__116__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__117__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__110__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__117__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__117__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__110__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__117__actual 
         != __Vtask_tb_memory_stage__DOT__check32__117__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__117__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__117__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__117__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__117__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__118__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__110__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__118__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__110__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__118__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__118__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__118__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__118__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__118__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__118__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__118__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__119__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__119__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__119__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__110__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__119__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__119__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__119__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__119__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__119__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__119__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__120__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__120__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__120__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__110__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__120__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__120__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__120__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__120__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__120__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__120__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__121__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__121__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__121__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__110__name, 
                                            std::string{" no forwarding while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__121__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__121__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__121__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__121__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__121__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__121__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_load__110__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_rd 
        = __Vtask_tb_memory_stage__DOT__test_load__110__rd_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_value 
        = __Vtask_tb_memory_stage__DOT__test_load__110__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__122__memory_word 
        = __Vtask_tb_memory_stage__DOT__test_load__110__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__122__name 
        = __Vtask_tb_memory_stage__DOT__test_load__110__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       292);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__122__memory_word;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       298);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__123__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__123__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__123__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__122__name, 
                                            std::string{" loaded value"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__123__actual 
         != __Vtask_tb_memory_stage__DOT__check32__123__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__123__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__123__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__123__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__123__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__124__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__124__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__124__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__122__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__124__actual 
         != __Vtask_tb_memory_stage__DOT__check32__124__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__124__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__124__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__124__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__124__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__125__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__125__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__125__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__122__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__125__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__125__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__125__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__125__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__125__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__125__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__126__expected 
        = (0U != (IData)(__Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_rd));
    __Vtask_tb_memory_stage__DOT__check_bit__126__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__126__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__122__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__126__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__126__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__126__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__126__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__126__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__126__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__127__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__122__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__127__actual 
        = (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                   >> 5U));
    __Vtask_tb_memory_stage__DOT__check32__127__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__122__name, 
                                            std::string{" forwarding data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__127__actual 
         != __Vtask_tb_memory_stage__DOT__check32__127__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__127__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__127__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__127__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__127__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__128__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__128__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__128__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__122__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__128__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__128__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__128__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__128__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__128__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__128__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       310);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_load__131__expected_sel = 3U;
    __Vtask_tb_memory_stage__DOT__test_load__131__expected_value = 0xffff8001U;
    __Vtask_tb_memory_stage__DOT__test_load__131__memory_word = 0x12348001U;
    __Vtask_tb_memory_stage__DOT__test_load__131__addr_i = 0x800U;
    __Vtask_tb_memory_stage__DOT__test_load__131__rd_i = 8U;
    __Vtask_tb_memory_stage__DOT__test_load__131__op_i = 0xbU;
    __Vtask_tb_memory_stage__DOT__test_load__131__name = 
        std::string{"LH low sign"};
    __Vtask_tb_memory_stage__DOT__test_load__131__pc_i 
        = ((IData)(0x1000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__132__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_load__131__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__132__store_data_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__132__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_load__131__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__132__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_load__131__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__132__op_i 
        = __Vtask_tb_memory_stage__DOT__test_load__131__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__132__name 
        = __Vtask_tb_memory_stage__DOT__test_load__131__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__132__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__132__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__132__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__133__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__133__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__133__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__133__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__132__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__133__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__132__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__133__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__133__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__133__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__133__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__133__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__133__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__133__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__133__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__133__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__133__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__133__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__133__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__133__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__133__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__133__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__133__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__132__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__132__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__135__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__135__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__135__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__131__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__135__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__135__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__135__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__135__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__135__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__135__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__136__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__136__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__136__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__131__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__136__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__136__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__136__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__136__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__136__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__136__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__137__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__137__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__131__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__137__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__137__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__137__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__137__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__137__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__137__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__137__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__138__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__131__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__138__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__138__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__131__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__138__actual 
         != __Vtask_tb_memory_stage__DOT__check32__138__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__138__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__138__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__138__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__138__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__139__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__131__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__139__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__131__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__139__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__139__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__139__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__139__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__139__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__139__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__139__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__140__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__140__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__140__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__131__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__140__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__140__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__140__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__140__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__140__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__140__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__141__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__141__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__141__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__131__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__141__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__141__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__141__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__141__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__141__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__141__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__142__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__142__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__142__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__131__name, 
                                            std::string{" no forwarding while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__142__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__142__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__142__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__142__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__142__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__142__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_load__131__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_rd 
        = __Vtask_tb_memory_stage__DOT__test_load__131__rd_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_value 
        = __Vtask_tb_memory_stage__DOT__test_load__131__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__143__memory_word 
        = __Vtask_tb_memory_stage__DOT__test_load__131__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__143__name 
        = __Vtask_tb_memory_stage__DOT__test_load__131__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       292);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__143__memory_word;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       298);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__144__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__144__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__144__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__143__name, 
                                            std::string{" loaded value"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__144__actual 
         != __Vtask_tb_memory_stage__DOT__check32__144__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__144__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__144__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__144__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__144__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__145__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__145__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__145__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__143__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__145__actual 
         != __Vtask_tb_memory_stage__DOT__check32__145__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__145__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__145__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__145__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__145__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__146__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__146__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__146__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__143__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__146__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__146__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__146__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__146__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__146__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__146__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__147__expected 
        = (0U != (IData)(__Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_rd));
    __Vtask_tb_memory_stage__DOT__check_bit__147__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__147__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__143__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__147__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__147__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__147__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__147__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__147__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__147__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__148__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__143__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__148__actual 
        = (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                   >> 5U));
    __Vtask_tb_memory_stage__DOT__check32__148__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__143__name, 
                                            std::string{" forwarding data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__148__actual 
         != __Vtask_tb_memory_stage__DOT__check32__148__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__148__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__148__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__148__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__148__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__149__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__149__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__149__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__143__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__149__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__149__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__149__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__149__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__149__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__149__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       310);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_load__152__expected_sel = 0xcU;
    __Vtask_tb_memory_stage__DOT__test_load__152__expected_value = 0xffff8001U;
    __Vtask_tb_memory_stage__DOT__test_load__152__memory_word = 0x80011234U;
    __Vtask_tb_memory_stage__DOT__test_load__152__addr_i = 0x802U;
    __Vtask_tb_memory_stage__DOT__test_load__152__rd_i = 8U;
    __Vtask_tb_memory_stage__DOT__test_load__152__op_i = 0xbU;
    __Vtask_tb_memory_stage__DOT__test_load__152__name = 
        std::string{"LH high sign"};
    __Vtask_tb_memory_stage__DOT__test_load__152__pc_i 
        = ((IData)(0x1000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__153__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_load__152__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__153__store_data_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__153__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_load__152__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__153__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_load__152__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__153__op_i 
        = __Vtask_tb_memory_stage__DOT__test_load__152__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__153__name 
        = __Vtask_tb_memory_stage__DOT__test_load__152__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__153__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__153__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__153__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__154__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__154__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__154__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__154__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__153__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__154__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__153__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__154__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__154__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__154__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__154__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__154__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__154__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__154__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__154__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__154__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__154__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__154__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__154__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__154__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__154__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__154__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__154__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__153__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__153__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__156__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__156__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__156__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__152__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__156__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__156__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__156__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__156__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__156__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__156__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__157__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__157__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__157__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__152__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__157__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__157__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__157__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__157__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__157__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__157__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__158__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__158__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__152__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__158__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__158__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__158__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__158__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__158__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__158__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__158__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__159__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__152__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__159__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__159__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__152__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__159__actual 
         != __Vtask_tb_memory_stage__DOT__check32__159__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__159__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__159__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__159__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__159__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__160__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__152__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__160__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__152__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__160__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__160__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__160__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__160__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__160__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__160__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__160__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__161__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__161__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__161__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__152__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__161__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__161__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__161__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__161__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__161__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__161__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__162__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__162__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__162__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__152__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__162__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__162__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__162__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__162__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__162__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__162__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__163__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__163__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__163__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__152__name, 
                                            std::string{" no forwarding while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__163__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__163__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__163__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__163__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__163__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__163__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_load__152__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_rd 
        = __Vtask_tb_memory_stage__DOT__test_load__152__rd_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_value 
        = __Vtask_tb_memory_stage__DOT__test_load__152__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__164__memory_word 
        = __Vtask_tb_memory_stage__DOT__test_load__152__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__164__name 
        = __Vtask_tb_memory_stage__DOT__test_load__152__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       292);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__164__memory_word;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       298);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__165__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__165__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__165__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__164__name, 
                                            std::string{" loaded value"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__165__actual 
         != __Vtask_tb_memory_stage__DOT__check32__165__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__165__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__165__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__165__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__165__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__166__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__166__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__166__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__164__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__166__actual 
         != __Vtask_tb_memory_stage__DOT__check32__166__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__166__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__166__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__166__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__166__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__167__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__167__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__167__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__164__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__167__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__167__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__167__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__167__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__167__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__167__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__168__expected 
        = (0U != (IData)(__Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_rd));
    __Vtask_tb_memory_stage__DOT__check_bit__168__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__168__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__164__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__168__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__168__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__168__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__168__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__168__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__168__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__169__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__164__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__169__actual 
        = (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                   >> 5U));
    __Vtask_tb_memory_stage__DOT__check32__169__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__164__name, 
                                            std::string{" forwarding data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__169__actual 
         != __Vtask_tb_memory_stage__DOT__check32__169__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__169__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__169__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__169__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__169__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__170__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__170__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__170__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__164__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__170__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__170__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__170__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__170__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__170__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__170__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       310);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_load__173__expected_sel = 3U;
    __Vtask_tb_memory_stage__DOT__test_load__173__expected_value = 0x8001U;
    __Vtask_tb_memory_stage__DOT__test_load__173__memory_word = 0x12348001U;
    __Vtask_tb_memory_stage__DOT__test_load__173__addr_i = 0x800U;
    __Vtask_tb_memory_stage__DOT__test_load__173__rd_i = 8U;
    __Vtask_tb_memory_stage__DOT__test_load__173__op_i = 0xeU;
    __Vtask_tb_memory_stage__DOT__test_load__173__name = 
        std::string{"LHU low"};
    __Vtask_tb_memory_stage__DOT__test_load__173__pc_i 
        = ((IData)(0x1000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__174__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_load__173__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__174__store_data_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__174__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_load__173__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__174__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_load__173__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__174__op_i 
        = __Vtask_tb_memory_stage__DOT__test_load__173__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__174__name 
        = __Vtask_tb_memory_stage__DOT__test_load__173__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__174__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__174__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__174__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__175__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__175__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__175__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__175__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__174__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__175__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__174__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__175__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__175__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__175__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__175__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__175__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__175__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__175__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__175__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__175__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__175__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__175__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__175__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__175__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__175__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__175__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__175__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__174__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__174__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__177__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__177__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__177__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__173__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__177__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__177__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__177__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__177__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__177__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__177__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__178__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__178__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__178__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__173__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__178__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__178__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__178__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__178__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__178__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__178__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__179__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__179__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__173__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__179__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__179__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__179__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__179__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__179__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__179__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__179__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__180__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__173__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__180__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__180__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__173__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__180__actual 
         != __Vtask_tb_memory_stage__DOT__check32__180__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__180__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__180__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__180__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__180__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__181__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__173__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__181__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__173__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__181__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__181__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__181__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__181__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__181__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__181__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__181__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__182__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__182__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__182__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__173__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__182__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__182__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__182__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__182__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__182__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__182__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__183__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__183__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__183__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__173__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__183__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__183__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__183__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__183__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__183__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__183__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__184__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__184__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__184__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__173__name, 
                                            std::string{" no forwarding while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__184__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__184__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__184__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__184__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__184__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__184__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_load__173__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_rd 
        = __Vtask_tb_memory_stage__DOT__test_load__173__rd_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_value 
        = __Vtask_tb_memory_stage__DOT__test_load__173__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__185__memory_word 
        = __Vtask_tb_memory_stage__DOT__test_load__173__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__185__name 
        = __Vtask_tb_memory_stage__DOT__test_load__173__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       292);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__185__memory_word;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       298);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__186__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__186__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__186__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__185__name, 
                                            std::string{" loaded value"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__186__actual 
         != __Vtask_tb_memory_stage__DOT__check32__186__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__186__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__186__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__186__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__186__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__187__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__187__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__187__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__185__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__187__actual 
         != __Vtask_tb_memory_stage__DOT__check32__187__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__187__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__187__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__187__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__187__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__188__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__188__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__188__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__185__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__188__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__188__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__188__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__188__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__188__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__188__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__189__expected 
        = (0U != (IData)(__Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_rd));
    __Vtask_tb_memory_stage__DOT__check_bit__189__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__189__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__185__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__189__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__189__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__189__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__189__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__189__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__189__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__190__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__185__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__190__actual 
        = (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                   >> 5U));
    __Vtask_tb_memory_stage__DOT__check32__190__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__185__name, 
                                            std::string{" forwarding data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__190__actual 
         != __Vtask_tb_memory_stage__DOT__check32__190__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__190__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__190__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__190__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__190__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__191__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__191__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__191__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__185__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__191__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__191__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__191__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__191__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__191__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__191__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       310);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_load__194__expected_sel = 0xcU;
    __Vtask_tb_memory_stage__DOT__test_load__194__expected_value = 0x8001U;
    __Vtask_tb_memory_stage__DOT__test_load__194__memory_word = 0x80011234U;
    __Vtask_tb_memory_stage__DOT__test_load__194__addr_i = 0x802U;
    __Vtask_tb_memory_stage__DOT__test_load__194__rd_i = 8U;
    __Vtask_tb_memory_stage__DOT__test_load__194__op_i = 0xeU;
    __Vtask_tb_memory_stage__DOT__test_load__194__name = 
        std::string{"LHU high"};
    __Vtask_tb_memory_stage__DOT__test_load__194__pc_i 
        = ((IData)(0x1000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__195__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_load__194__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__195__store_data_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__195__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_load__194__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__195__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_load__194__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__195__op_i 
        = __Vtask_tb_memory_stage__DOT__test_load__194__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__195__name 
        = __Vtask_tb_memory_stage__DOT__test_load__194__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__195__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__195__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__195__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__196__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__196__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__196__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__196__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__195__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__196__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__195__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__196__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__196__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__196__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__196__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__196__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__196__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__196__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__196__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__196__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__196__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__196__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__196__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__196__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__196__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__196__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__196__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__195__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__195__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__198__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__198__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__198__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__194__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__198__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__198__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__198__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__198__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__198__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__198__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__199__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__199__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__199__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__194__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__199__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__199__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__199__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__199__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__199__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__199__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__200__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__200__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__194__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__200__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__200__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__200__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__200__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__200__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__200__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__200__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__201__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__194__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__201__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__201__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__194__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__201__actual 
         != __Vtask_tb_memory_stage__DOT__check32__201__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__201__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__201__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__201__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__201__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__202__expected 
        = __Vtask_tb_memory_stage__DOT__test_load__194__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__202__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__194__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__202__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__202__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__202__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__202__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__202__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__202__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__202__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__203__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__203__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__203__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__194__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__203__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__203__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__203__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__203__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__203__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__203__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__204__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__204__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__204__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__194__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__204__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__204__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__204__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__204__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__204__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__204__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__205__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__205__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__205__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_load__194__name, 
                                            std::string{" no forwarding while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__205__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__205__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__205__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__205__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__205__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__205__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_load__194__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_rd 
        = __Vtask_tb_memory_stage__DOT__test_load__194__rd_i;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_value 
        = __Vtask_tb_memory_stage__DOT__test_load__194__expected_value;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__206__memory_word 
        = __Vtask_tb_memory_stage__DOT__test_load__194__memory_word;
    __Vtask_tb_memory_stage__DOT__finish_load_ok__206__name 
        = __Vtask_tb_memory_stage__DOT__test_load__194__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       292);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__206__memory_word;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       298);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__207__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__207__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__207__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__206__name, 
                                            std::string{" loaded value"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__207__actual 
         != __Vtask_tb_memory_stage__DOT__check32__207__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__207__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__207__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__207__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__207__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__208__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__208__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__208__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__206__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__208__actual 
         != __Vtask_tb_memory_stage__DOT__check32__208__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__208__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__208__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__208__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__208__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__209__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__209__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__209__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__206__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__209__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__209__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__209__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__209__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__209__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__209__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__210__expected 
        = (0U != (IData)(__Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_rd));
    __Vtask_tb_memory_stage__DOT__check_bit__210__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__210__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__206__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__210__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__210__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__210__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__210__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__210__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__210__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__211__expected 
        = __Vtask_tb_memory_stage__DOT__finish_load_ok__206__expected_value;
    __Vtask_tb_memory_stage__DOT__check32__211__actual 
        = (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                   >> 5U));
    __Vtask_tb_memory_stage__DOT__check32__211__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__206__name, 
                                            std::string{" forwarding data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__211__actual 
         != __Vtask_tb_memory_stage__DOT__check32__211__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__211__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__211__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__211__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__211__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__212__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__212__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__212__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_load_ok__206__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__212__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__212__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__212__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__212__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__212__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__212__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       310);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       311);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_store__215__expected_sel = 0xfU;
    __Vtask_tb_memory_stage__DOT__test_store__215__expected_mosi = 0xdeadbeefU;
    __Vtask_tb_memory_stage__DOT__test_store__215__source_i = 0xdeadbeefU;
    __Vtask_tb_memory_stage__DOT__test_store__215__addr_i = 0x900U;
    __Vtask_tb_memory_stage__DOT__test_store__215__op_i = 0x11U;
    __Vtask_tb_memory_stage__DOT__test_store__215__name = 
        std::string{"SW"};
    __Vtask_tb_memory_stage__DOT__test_store__215__pc_i 
        = ((IData)(0x2000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__216__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_store__215__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__216__store_data_i 
        = __Vtask_tb_memory_stage__DOT__test_store__215__source_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__216__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_store__215__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__216__rd_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__216__op_i 
        = __Vtask_tb_memory_stage__DOT__test_store__215__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__216__name 
        = __Vtask_tb_memory_stage__DOT__test_store__215__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__216__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__216__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__216__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__217__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__217__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__217__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__217__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__216__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__217__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__216__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__217__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__217__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__217__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__217__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__217__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__217__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__217__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__217__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__217__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__217__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__217__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__217__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__217__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__217__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__217__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__217__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__216__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__216__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__219__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__219__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__219__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__215__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__219__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__219__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__219__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__219__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__219__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__219__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__220__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__220__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__220__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__215__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__220__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__220__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__220__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__220__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__220__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__220__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__221__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__221__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__215__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__221__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__221__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__221__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__221__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__221__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__221__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__221__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__222__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__215__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__222__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__222__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__215__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__222__actual 
         != __Vtask_tb_memory_stage__DOT__check32__222__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__222__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__222__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__222__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__222__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__223__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__215__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__223__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__215__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__223__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__223__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__223__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__223__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__223__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__223__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__223__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__224__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__215__expected_mosi;
    __Vtask_tb_memory_stage__DOT__check32__224__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__215__name, 
                                            std::string{" request data"}));
    __Vtask_tb_memory_stage__DOT__check32__224__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data
            : vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb);
    if ((__Vtask_tb_memory_stage__DOT__check32__224__actual 
         != __Vtask_tb_memory_stage__DOT__check32__224__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__224__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__224__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__224__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__224__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__225__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__225__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__225__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__215__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__225__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__225__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__225__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__225__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__225__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__225__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__226__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__226__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__226__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__215__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__226__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__226__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__226__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__226__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__226__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__226__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_store_ok__227__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_store__215__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__227__expected_addr 
        = __Vtask_tb_memory_stage__DOT__test_store__215__addr_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__227__name 
        = __Vtask_tb_memory_stage__DOT__test_store__215__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       321);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       326);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       327);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__228__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__227__expected_addr;
    __Vtask_tb_memory_stage__DOT__check32__228__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__228__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__227__name, 
                                            std::string{" address output"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__228__actual 
         != __Vtask_tb_memory_stage__DOT__check32__228__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__228__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__228__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__228__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__228__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__229__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__227__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__229__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__229__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__227__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__229__actual 
         != __Vtask_tb_memory_stage__DOT__check32__229__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__229__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__229__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__229__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__229__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__230__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__230__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__230__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__227__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__230__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__230__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__230__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__230__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__230__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__230__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__231__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__231__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__231__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__227__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__231__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__231__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__231__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__231__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__231__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__231__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__232__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__232__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__232__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__227__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__232__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__232__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__232__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__232__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__232__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__232__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       335);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       338);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       339);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_store__235__expected_sel = 1U;
    __Vtask_tb_memory_stage__DOT__test_store__235__expected_mosi = 0xaaU;
    __Vtask_tb_memory_stage__DOT__test_store__235__source_i = 0xaaU;
    __Vtask_tb_memory_stage__DOT__test_store__235__addr_i = 0x900U;
    __Vtask_tb_memory_stage__DOT__test_store__235__op_i = 0xfU;
    __Vtask_tb_memory_stage__DOT__test_store__235__name = 
        std::string{"SB byte0"};
    __Vtask_tb_memory_stage__DOT__test_store__235__pc_i 
        = ((IData)(0x2000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__236__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_store__235__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__236__store_data_i 
        = __Vtask_tb_memory_stage__DOT__test_store__235__source_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__236__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_store__235__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__236__rd_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__236__op_i 
        = __Vtask_tb_memory_stage__DOT__test_store__235__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__236__name 
        = __Vtask_tb_memory_stage__DOT__test_store__235__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__236__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__236__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__236__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__237__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__237__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__237__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__237__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__236__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__237__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__236__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__237__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__237__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__237__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__237__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__237__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__237__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__237__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__237__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__237__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__237__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__237__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__237__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__237__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__237__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__237__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__237__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__236__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__236__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__239__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__239__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__239__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__235__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__239__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__239__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__239__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__239__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__239__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__239__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__240__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__240__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__240__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__235__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__240__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__240__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__240__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__240__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__240__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__240__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__241__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__241__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__235__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__241__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__241__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__241__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__241__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__241__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__241__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__241__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__242__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__235__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__242__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__242__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__235__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__242__actual 
         != __Vtask_tb_memory_stage__DOT__check32__242__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__242__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__242__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__242__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__242__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__243__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__235__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__243__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__235__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__243__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__243__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__243__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__243__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__243__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__243__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__243__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__244__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__235__expected_mosi;
    __Vtask_tb_memory_stage__DOT__check32__244__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__235__name, 
                                            std::string{" request data"}));
    __Vtask_tb_memory_stage__DOT__check32__244__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data
            : vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb);
    if ((__Vtask_tb_memory_stage__DOT__check32__244__actual 
         != __Vtask_tb_memory_stage__DOT__check32__244__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__244__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__244__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__244__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__244__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__245__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__245__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__245__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__235__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__245__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__245__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__245__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__245__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__245__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__245__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__246__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__246__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__246__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__235__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__246__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__246__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__246__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__246__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__246__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__246__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_store_ok__247__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_store__235__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__247__expected_addr 
        = __Vtask_tb_memory_stage__DOT__test_store__235__addr_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__247__name 
        = __Vtask_tb_memory_stage__DOT__test_store__235__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       321);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       326);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       327);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__248__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__247__expected_addr;
    __Vtask_tb_memory_stage__DOT__check32__248__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__248__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__247__name, 
                                            std::string{" address output"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__248__actual 
         != __Vtask_tb_memory_stage__DOT__check32__248__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__248__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__248__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__248__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__248__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__249__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__247__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__249__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__249__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__247__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__249__actual 
         != __Vtask_tb_memory_stage__DOT__check32__249__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__249__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__249__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__249__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__249__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__250__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__250__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__250__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__247__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__250__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__250__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__250__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__250__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__250__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__250__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__251__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__251__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__251__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__247__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__251__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__251__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__251__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__251__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__251__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__251__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__252__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__252__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__252__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__247__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__252__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__252__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__252__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__252__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__252__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__252__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       335);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       338);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       339);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_store__255__expected_sel = 2U;
    __Vtask_tb_memory_stage__DOT__test_store__255__expected_mosi = 0xaa00U;
    __Vtask_tb_memory_stage__DOT__test_store__255__source_i = 0xaaU;
    __Vtask_tb_memory_stage__DOT__test_store__255__addr_i = 0x901U;
    __Vtask_tb_memory_stage__DOT__test_store__255__op_i = 0xfU;
    __Vtask_tb_memory_stage__DOT__test_store__255__name = 
        std::string{"SB byte1"};
    __Vtask_tb_memory_stage__DOT__test_store__255__pc_i 
        = ((IData)(0x2000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__256__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_store__255__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__256__store_data_i 
        = __Vtask_tb_memory_stage__DOT__test_store__255__source_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__256__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_store__255__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__256__rd_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__256__op_i 
        = __Vtask_tb_memory_stage__DOT__test_store__255__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__256__name 
        = __Vtask_tb_memory_stage__DOT__test_store__255__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__256__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__256__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__256__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__257__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__257__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__257__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__257__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__256__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__257__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__256__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__257__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__257__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__257__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__257__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__257__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__257__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__257__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__257__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__257__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__257__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__257__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__257__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__257__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__257__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__257__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__257__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__256__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__256__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__259__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__259__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__259__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__255__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__259__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__259__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__259__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__259__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__259__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__259__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__260__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__260__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__260__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__255__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__260__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__260__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__260__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__260__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__260__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__260__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__261__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__261__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__255__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__261__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__261__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__261__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__261__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__261__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__261__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__261__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__262__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__255__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__262__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__262__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__255__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__262__actual 
         != __Vtask_tb_memory_stage__DOT__check32__262__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__262__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__262__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__262__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__262__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__263__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__255__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__263__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__255__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__263__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__263__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__263__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__263__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__263__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__263__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__263__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__264__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__255__expected_mosi;
    __Vtask_tb_memory_stage__DOT__check32__264__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__255__name, 
                                            std::string{" request data"}));
    __Vtask_tb_memory_stage__DOT__check32__264__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data
            : vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb);
    if ((__Vtask_tb_memory_stage__DOT__check32__264__actual 
         != __Vtask_tb_memory_stage__DOT__check32__264__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__264__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__264__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__264__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__264__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__265__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__265__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__265__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__255__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__265__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__265__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__265__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__265__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__265__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__265__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__266__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__266__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__266__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__255__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__266__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__266__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__266__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__266__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__266__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__266__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_store_ok__267__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_store__255__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__267__expected_addr 
        = __Vtask_tb_memory_stage__DOT__test_store__255__addr_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__267__name 
        = __Vtask_tb_memory_stage__DOT__test_store__255__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       321);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       326);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       327);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__268__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__267__expected_addr;
    __Vtask_tb_memory_stage__DOT__check32__268__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__268__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__267__name, 
                                            std::string{" address output"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__268__actual 
         != __Vtask_tb_memory_stage__DOT__check32__268__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__268__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__268__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__268__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__268__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__269__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__267__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__269__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__269__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__267__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__269__actual 
         != __Vtask_tb_memory_stage__DOT__check32__269__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__269__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__269__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__269__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__269__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__270__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__270__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__270__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__267__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__270__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__270__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__270__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__270__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__270__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__270__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__271__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__271__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__271__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__267__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__271__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__271__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__271__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__271__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__271__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__271__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__272__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__272__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__272__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__267__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__272__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__272__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__272__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__272__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__272__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__272__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       335);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       338);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       339);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_store__275__expected_sel = 4U;
    __Vtask_tb_memory_stage__DOT__test_store__275__expected_mosi = 0xaa0000U;
    __Vtask_tb_memory_stage__DOT__test_store__275__source_i = 0xaaU;
    __Vtask_tb_memory_stage__DOT__test_store__275__addr_i = 0x902U;
    __Vtask_tb_memory_stage__DOT__test_store__275__op_i = 0xfU;
    __Vtask_tb_memory_stage__DOT__test_store__275__name = 
        std::string{"SB byte2"};
    __Vtask_tb_memory_stage__DOT__test_store__275__pc_i 
        = ((IData)(0x2000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__276__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_store__275__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__276__store_data_i 
        = __Vtask_tb_memory_stage__DOT__test_store__275__source_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__276__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_store__275__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__276__rd_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__276__op_i 
        = __Vtask_tb_memory_stage__DOT__test_store__275__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__276__name 
        = __Vtask_tb_memory_stage__DOT__test_store__275__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__276__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__276__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__276__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__277__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__277__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__277__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__277__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__276__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__277__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__276__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__277__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__277__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__277__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__277__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__277__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__277__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__277__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__277__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__277__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__277__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__277__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__277__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__277__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__277__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__277__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__277__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__276__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__276__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__279__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__279__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__279__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__275__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__279__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__279__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__279__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__279__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__279__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__279__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__280__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__280__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__280__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__275__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__280__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__280__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__280__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__280__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__280__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__280__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__281__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__281__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__275__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__281__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__281__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__281__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__281__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__281__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__281__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__281__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__282__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__275__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__282__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__282__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__275__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__282__actual 
         != __Vtask_tb_memory_stage__DOT__check32__282__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__282__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__282__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__282__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__282__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__283__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__275__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__283__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__275__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__283__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__283__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__283__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__283__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__283__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__283__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__283__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__284__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__275__expected_mosi;
    __Vtask_tb_memory_stage__DOT__check32__284__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__275__name, 
                                            std::string{" request data"}));
    __Vtask_tb_memory_stage__DOT__check32__284__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data
            : vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb);
    if ((__Vtask_tb_memory_stage__DOT__check32__284__actual 
         != __Vtask_tb_memory_stage__DOT__check32__284__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__284__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__284__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__284__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__284__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__285__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__285__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__285__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__275__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__285__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__285__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__285__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__285__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__285__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__285__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__286__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__286__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__286__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__275__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__286__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__286__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__286__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__286__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__286__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__286__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_store_ok__287__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_store__275__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__287__expected_addr 
        = __Vtask_tb_memory_stage__DOT__test_store__275__addr_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__287__name 
        = __Vtask_tb_memory_stage__DOT__test_store__275__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       321);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       326);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       327);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__288__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__287__expected_addr;
    __Vtask_tb_memory_stage__DOT__check32__288__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__288__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__287__name, 
                                            std::string{" address output"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__288__actual 
         != __Vtask_tb_memory_stage__DOT__check32__288__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__288__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__288__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__288__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__288__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__289__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__287__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__289__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__289__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__287__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__289__actual 
         != __Vtask_tb_memory_stage__DOT__check32__289__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__289__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__289__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__289__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__289__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__290__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__290__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__290__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__287__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__290__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__290__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__290__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__290__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__290__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__290__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__291__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__291__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__291__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__287__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__291__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__291__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__291__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__291__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__291__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__291__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__292__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__292__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__292__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__287__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__292__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__292__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__292__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__292__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__292__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__292__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       335);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       338);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       339);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_store__295__expected_sel = 8U;
    __Vtask_tb_memory_stage__DOT__test_store__295__expected_mosi = 0xaa000000U;
    __Vtask_tb_memory_stage__DOT__test_store__295__source_i = 0xaaU;
    __Vtask_tb_memory_stage__DOT__test_store__295__addr_i = 0x903U;
    __Vtask_tb_memory_stage__DOT__test_store__295__op_i = 0xfU;
    __Vtask_tb_memory_stage__DOT__test_store__295__name = 
        std::string{"SB byte3"};
    __Vtask_tb_memory_stage__DOT__test_store__295__pc_i 
        = ((IData)(0x2000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__296__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_store__295__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__296__store_data_i 
        = __Vtask_tb_memory_stage__DOT__test_store__295__source_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__296__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_store__295__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__296__rd_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__296__op_i 
        = __Vtask_tb_memory_stage__DOT__test_store__295__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__296__name 
        = __Vtask_tb_memory_stage__DOT__test_store__295__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__296__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__296__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__296__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__297__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__297__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__297__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__297__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__296__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__297__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__296__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__297__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__297__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__297__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__297__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__297__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__297__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__297__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__297__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__297__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__297__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__297__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__297__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__297__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__297__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__297__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__297__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__296__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__296__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__299__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__299__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__299__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__295__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__299__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__299__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__299__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__299__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__299__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__299__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__300__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__300__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__300__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__295__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__300__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__300__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__300__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__300__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__300__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__300__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__301__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__301__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__295__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__301__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__301__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__301__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__301__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__301__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__301__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__301__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__302__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__295__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__302__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__302__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__295__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__302__actual 
         != __Vtask_tb_memory_stage__DOT__check32__302__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__302__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__302__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__302__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__302__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__303__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__295__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__303__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__295__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__303__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__303__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__303__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__303__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__303__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__303__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__303__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__304__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__295__expected_mosi;
    __Vtask_tb_memory_stage__DOT__check32__304__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__295__name, 
                                            std::string{" request data"}));
    __Vtask_tb_memory_stage__DOT__check32__304__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data
            : vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb);
    if ((__Vtask_tb_memory_stage__DOT__check32__304__actual 
         != __Vtask_tb_memory_stage__DOT__check32__304__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__304__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__304__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__304__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__304__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__305__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__305__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__305__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__295__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__305__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__305__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__305__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__305__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__305__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__305__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__306__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__306__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__306__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__295__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__306__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__306__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__306__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__306__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__306__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__306__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_store_ok__307__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_store__295__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__307__expected_addr 
        = __Vtask_tb_memory_stage__DOT__test_store__295__addr_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__307__name 
        = __Vtask_tb_memory_stage__DOT__test_store__295__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       321);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       326);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       327);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__308__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__307__expected_addr;
    __Vtask_tb_memory_stage__DOT__check32__308__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__308__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__307__name, 
                                            std::string{" address output"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__308__actual 
         != __Vtask_tb_memory_stage__DOT__check32__308__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__308__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__308__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__308__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__308__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__309__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__307__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__309__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__309__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__307__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__309__actual 
         != __Vtask_tb_memory_stage__DOT__check32__309__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__309__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__309__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__309__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__309__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__310__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__310__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__310__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__307__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__310__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__310__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__310__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__310__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__310__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__310__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__311__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__311__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__311__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__307__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__311__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__311__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__311__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__311__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__311__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__311__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__312__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__312__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__312__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__307__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__312__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__312__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__312__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__312__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__312__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__312__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       335);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       338);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       339);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_store__315__expected_sel = 3U;
    __Vtask_tb_memory_stage__DOT__test_store__315__expected_mosi = 0xbeefU;
    __Vtask_tb_memory_stage__DOT__test_store__315__source_i = 0xbeefU;
    __Vtask_tb_memory_stage__DOT__test_store__315__addr_i = 0x900U;
    __Vtask_tb_memory_stage__DOT__test_store__315__op_i = 0x10U;
    __Vtask_tb_memory_stage__DOT__test_store__315__name = 
        std::string{"SH low"};
    __Vtask_tb_memory_stage__DOT__test_store__315__pc_i 
        = ((IData)(0x2000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__316__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_store__315__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__316__store_data_i 
        = __Vtask_tb_memory_stage__DOT__test_store__315__source_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__316__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_store__315__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__316__rd_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__316__op_i 
        = __Vtask_tb_memory_stage__DOT__test_store__315__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__316__name 
        = __Vtask_tb_memory_stage__DOT__test_store__315__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__316__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__316__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__316__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__317__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__317__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__317__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__317__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__316__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__317__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__316__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__317__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__317__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__317__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__317__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__317__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__317__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__317__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__317__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__317__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__317__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__317__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__317__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__317__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__317__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__317__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__317__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__316__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__316__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__319__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__319__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__319__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__315__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__319__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__319__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__319__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__319__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__319__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__319__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__320__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__320__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__320__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__315__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__320__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__320__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__320__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__320__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__320__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__320__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__321__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__321__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__315__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__321__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__321__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__321__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__321__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__321__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__321__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__321__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__322__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__315__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__322__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__322__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__315__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__322__actual 
         != __Vtask_tb_memory_stage__DOT__check32__322__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__322__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__322__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__322__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__322__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__323__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__315__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__323__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__315__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__323__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__323__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__323__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__323__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__323__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__323__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__323__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__324__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__315__expected_mosi;
    __Vtask_tb_memory_stage__DOT__check32__324__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__315__name, 
                                            std::string{" request data"}));
    __Vtask_tb_memory_stage__DOT__check32__324__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data
            : vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb);
    if ((__Vtask_tb_memory_stage__DOT__check32__324__actual 
         != __Vtask_tb_memory_stage__DOT__check32__324__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__324__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__324__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__324__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__324__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__325__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__325__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__325__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__315__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__325__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__325__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__325__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__325__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__325__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__325__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__326__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__326__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__326__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__315__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__326__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__326__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__326__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__326__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__326__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__326__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_store_ok__327__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_store__315__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__327__expected_addr 
        = __Vtask_tb_memory_stage__DOT__test_store__315__addr_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__327__name 
        = __Vtask_tb_memory_stage__DOT__test_store__315__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       321);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       326);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       327);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__328__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__327__expected_addr;
    __Vtask_tb_memory_stage__DOT__check32__328__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__328__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__327__name, 
                                            std::string{" address output"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__328__actual 
         != __Vtask_tb_memory_stage__DOT__check32__328__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__328__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__328__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__328__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__328__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__329__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__327__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__329__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__329__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__327__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__329__actual 
         != __Vtask_tb_memory_stage__DOT__check32__329__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__329__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__329__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__329__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__329__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__330__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__330__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__330__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__327__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__330__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__330__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__330__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__330__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__330__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__330__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__331__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__331__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__331__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__327__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__331__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__331__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__331__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__331__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__331__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__331__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__332__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__332__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__332__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__327__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__332__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__332__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__332__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__332__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__332__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__332__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       335);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       338);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       339);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_store__335__expected_sel = 0xcU;
    __Vtask_tb_memory_stage__DOT__test_store__335__expected_mosi = 0xbeef0000U;
    __Vtask_tb_memory_stage__DOT__test_store__335__source_i = 0xbeefU;
    __Vtask_tb_memory_stage__DOT__test_store__335__addr_i = 0x902U;
    __Vtask_tb_memory_stage__DOT__test_store__335__op_i = 0x10U;
    __Vtask_tb_memory_stage__DOT__test_store__335__name = 
        std::string{"SH high"};
    __Vtask_tb_memory_stage__DOT__test_store__335__pc_i 
        = ((IData)(0x2000U) + vlSelf->tb_memory_stage__DOT__pass_count);
    __Vtask_tb_memory_stage__DOT__start_memory_op__336__pc_i 
        = __Vtask_tb_memory_stage__DOT__test_store__335__pc_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__336__store_data_i 
        = __Vtask_tb_memory_stage__DOT__test_store__335__source_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__336__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_store__335__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__336__rd_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__336__op_i 
        = __Vtask_tb_memory_stage__DOT__test_store__335__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__336__name 
        = __Vtask_tb_memory_stage__DOT__test_store__335__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__336__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__336__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__336__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__337__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__337__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__337__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__337__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__336__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__337__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__336__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__337__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__337__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__337__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__337__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__337__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__337__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__337__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__337__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__337__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__337__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__337__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__337__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__337__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__337__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__337__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__337__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__336__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__336__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__339__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__339__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__339__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__335__name, 
                                            std::string{" request cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__339__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__339__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__339__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__339__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__339__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__339__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__340__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__340__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__340__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__335__name, 
                                            std::string{" request stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__340__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__340__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__340__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__340__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__340__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__340__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__341__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__341__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__335__name, 
                                            std::string{" request we"}));
    __Vtask_tb_memory_stage__DOT__check_bit__341__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__341__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__341__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__341__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__341__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__341__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__341__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__342__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__335__addr_i;
    __Vtask_tb_memory_stage__DOT__check32__342__actual 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.adr;
    __Vtask_tb_memory_stage__DOT__check32__342__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__335__name, 
                                            std::string{" request addr"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__342__actual 
         != __Vtask_tb_memory_stage__DOT__check32__342__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__342__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__342__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__342__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__342__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check4__343__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__335__expected_sel;
    __Vtask_tb_memory_stage__DOT__check4__343__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__335__name, 
                                            std::string{" request sel"}));
    __Vtask_tb_memory_stage__DOT__check4__343__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check4__343__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check4__343__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0b%04b expected=0b%04b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check4__343__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check4__343__actual),
                  4,__Vtask_tb_memory_stage__DOT__check4__343__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check4__343__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__344__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
            ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data
            : vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb);
    __Vtask_tb_memory_stage__DOT__check32__344__expected 
        = __Vtask_tb_memory_stage__DOT__test_store__335__expected_mosi;
    __Vtask_tb_memory_stage__DOT__check32__344__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__335__name, 
                                            std::string{" request data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__344__actual 
         != __Vtask_tb_memory_stage__DOT__check32__344__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__344__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__344__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__344__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__344__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__345__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__345__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__345__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__335__name, 
                                            std::string{" bubble while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__345__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__345__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__345__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__345__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__345__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__345__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__346__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__346__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__346__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_store__335__name, 
                                            std::string{" stall while busy"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__346__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__346__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__346__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__346__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__346__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__346__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_store_ok__347__expected_pc 
        = __Vtask_tb_memory_stage__DOT__test_store__335__pc_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__347__expected_addr 
        = __Vtask_tb_memory_stage__DOT__test_store__335__addr_i;
    __Vtask_tb_memory_stage__DOT__finish_store_ok__347__name 
        = __Vtask_tb_memory_stage__DOT__test_store__335__name;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       321);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       326);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       327);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check32__348__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__347__expected_addr;
    __Vtask_tb_memory_stage__DOT__check32__348__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__348__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__347__name, 
                                            std::string{" address output"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__348__actual 
         != __Vtask_tb_memory_stage__DOT__check32__348__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__348__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__348__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__348__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__348__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__349__expected 
        = __Vtask_tb_memory_stage__DOT__finish_store_ok__347__expected_pc;
    __Vtask_tb_memory_stage__DOT__check32__349__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__349__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__347__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__349__actual 
         != __Vtask_tb_memory_stage__DOT__check32__349__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__349__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__349__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__349__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__349__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__350__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__350__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__350__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__347__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__350__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__350__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__350__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__350__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__350__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__350__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__351__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__351__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__351__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__347__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__351__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__351__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__351__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__351__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__351__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__351__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__352__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__352__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__352__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_store_ok__347__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__352__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__352__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__352__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__352__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__352__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__352__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       335);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       338);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       339);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__355__expected_status = 5U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__355__addr_i = 0x801U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__355__rd_i = 1U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__355__op_i = 0xbU;
    __Vtask_tb_memory_stage__DOT__test_misaligned__355__name = 
        std::string{"LH misaligned"};
    __Vtask_tb_memory_stage__DOT__start_memory_op__356__pc_i = 0x3000U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__356__store_data_i = 0xaaaabbbbU;
    __Vtask_tb_memory_stage__DOT__start_memory_op__356__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__355__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__356__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__355__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__356__op_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__355__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__356__name 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__355__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__356__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__356__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__356__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__357__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__357__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__357__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__357__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__356__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__357__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__356__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__357__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__357__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__357__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__357__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__357__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__357__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__357__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__357__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__357__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__357__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__357__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__357__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__357__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__357__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__357__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__357__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__356__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__356__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__359__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__359__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__359__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__355__name, 
                                            std::string{" no wb.cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__359__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__359__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__359__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__359__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__359__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__359__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__360__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__360__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__360__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__355__name, 
                                            std::string{" no wb.stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__360__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__360__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__360__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__360__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__360__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__360__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__361__expected 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__355__expected_status;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__361__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__361__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__355__name, 
                                            std::string{" misaligned status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__361__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__361__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__361__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__361__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__361__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__361__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__362__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__362__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__362__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__355__name, 
                                            std::string{" no forwarding"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__362__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__362__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__362__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__362__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__362__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__362__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__363__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__363__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__363__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__355__name, 
                                            std::string{" no stall"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__363__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__363__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__363__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__363__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__363__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__363__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__367__expected_status = 5U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__367__addr_i = 0x801U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__367__rd_i = 1U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__367__op_i = 0xeU;
    __Vtask_tb_memory_stage__DOT__test_misaligned__367__name = 
        std::string{"LHU misaligned"};
    __Vtask_tb_memory_stage__DOT__start_memory_op__368__pc_i = 0x3000U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__368__store_data_i = 0xaaaabbbbU;
    __Vtask_tb_memory_stage__DOT__start_memory_op__368__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__367__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__368__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__367__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__368__op_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__367__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__368__name 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__367__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__368__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__368__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__368__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__369__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__369__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__369__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__369__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__368__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__369__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__368__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__369__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__369__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__369__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__369__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__369__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__369__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__369__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__369__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__369__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__369__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__369__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__369__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__369__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__369__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__369__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__369__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__368__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__368__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__371__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__371__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__371__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__367__name, 
                                            std::string{" no wb.cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__371__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__371__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__371__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__371__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__371__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__371__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__372__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__372__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__372__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__367__name, 
                                            std::string{" no wb.stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__372__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__372__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__372__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__372__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__372__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__372__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__373__expected 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__367__expected_status;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__373__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__373__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__367__name, 
                                            std::string{" misaligned status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__373__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__373__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__373__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__373__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__373__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__373__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__374__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__374__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__374__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__367__name, 
                                            std::string{" no forwarding"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__374__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__374__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__374__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__374__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__374__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__374__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__375__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__375__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__375__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__367__name, 
                                            std::string{" no stall"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__375__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__375__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__375__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__375__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__375__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__375__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__379__expected_status = 5U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__379__addr_i = 0x802U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__379__rd_i = 1U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__379__op_i = 0xcU;
    __Vtask_tb_memory_stage__DOT__test_misaligned__379__name = 
        std::string{"LW misaligned"};
    __Vtask_tb_memory_stage__DOT__start_memory_op__380__pc_i = 0x3000U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__380__store_data_i = 0xaaaabbbbU;
    __Vtask_tb_memory_stage__DOT__start_memory_op__380__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__379__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__380__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__379__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__380__op_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__379__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__380__name 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__379__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__380__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__380__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__380__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__381__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__381__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__381__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__381__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__380__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__381__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__380__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__381__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__381__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__381__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__381__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__381__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__381__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__381__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__381__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__381__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__381__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__381__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__381__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__381__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__381__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__381__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__381__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__380__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__380__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__383__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__383__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__383__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__379__name, 
                                            std::string{" no wb.cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__383__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__383__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__383__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__383__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__383__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__383__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__384__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__384__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__384__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__379__name, 
                                            std::string{" no wb.stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__384__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__384__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__384__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__384__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__384__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__384__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__385__expected 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__379__expected_status;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__385__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__385__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__379__name, 
                                            std::string{" misaligned status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__385__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__385__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__385__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__385__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__385__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__385__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__386__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__386__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__386__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__379__name, 
                                            std::string{" no forwarding"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__386__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__386__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__386__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__386__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__386__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__386__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__387__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__387__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__387__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__379__name, 
                                            std::string{" no stall"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__387__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__387__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__387__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__387__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__387__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__387__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__391__expected_status = 7U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__391__addr_i = 0x901U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__391__rd_i = 0U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__391__op_i = 0x10U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__391__name = 
        std::string{"SH misaligned"};
    __Vtask_tb_memory_stage__DOT__start_memory_op__392__pc_i = 0x3000U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__392__store_data_i = 0xaaaabbbbU;
    __Vtask_tb_memory_stage__DOT__start_memory_op__392__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__391__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__392__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__391__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__392__op_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__391__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__392__name 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__391__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__392__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__392__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__392__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__393__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__393__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__393__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__393__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__392__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__393__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__392__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__393__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__393__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__393__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__393__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__393__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__393__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__393__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__393__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__393__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__393__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__393__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__393__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__393__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__393__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__393__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__393__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__392__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__392__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__395__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__395__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__395__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__391__name, 
                                            std::string{" no wb.cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__395__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__395__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__395__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__395__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__395__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__395__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__396__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__396__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__396__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__391__name, 
                                            std::string{" no wb.stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__396__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__396__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__396__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__396__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__396__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__396__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__397__expected 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__391__expected_status;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__397__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__397__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__391__name, 
                                            std::string{" misaligned status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__397__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__397__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__397__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__397__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__397__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__397__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__398__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__398__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__398__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__391__name, 
                                            std::string{" no forwarding"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__398__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__398__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__398__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__398__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__398__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__398__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__399__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__399__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__399__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__391__name, 
                                            std::string{" no stall"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__399__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__399__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__399__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__399__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__399__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__399__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__403__expected_status = 7U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__403__addr_i = 0x902U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__403__rd_i = 0U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__403__op_i = 0x11U;
    __Vtask_tb_memory_stage__DOT__test_misaligned__403__name = 
        std::string{"SW misaligned"};
    __Vtask_tb_memory_stage__DOT__start_memory_op__404__pc_i = 0x3000U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__404__store_data_i = 0xaaaabbbbU;
    __Vtask_tb_memory_stage__DOT__start_memory_op__404__addr_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__403__addr_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__404__rd_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__403__rd_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__404__op_i 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__403__op_i;
    __Vtask_tb_memory_stage__DOT__start_memory_op__404__name 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__403__name;
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__404__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__404__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__404__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__405__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__405__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__405__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__405__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__404__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__405__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__404__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__405__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__405__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__405__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__405__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__405__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__405__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__405__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__405__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__405__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__405__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__405__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__405__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__405__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__405__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__405__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__405__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__404__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__404__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bit__407__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__407__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__407__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__403__name, 
                                            std::string{" no wb.cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__407__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__407__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__407__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__407__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__407__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__407__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__408__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__408__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__408__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__403__name, 
                                            std::string{" no wb.stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__408__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__408__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__408__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__408__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__408__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__408__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__409__expected 
        = __Vtask_tb_memory_stage__DOT__test_misaligned__403__expected_status;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__409__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__409__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__403__name, 
                                            std::string{" misaligned status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__409__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__409__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__409__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__409__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__409__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__409__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__410__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__410__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__410__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__403__name, 
                                            std::string{" no forwarding"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__410__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__410__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__410__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__410__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__410__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__410__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__411__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__411__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__411__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__test_misaligned__403__name, 
                                            std::string{" no stall"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__411__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__411__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__411__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__411__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__411__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__411__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__415__pc_i = 0x4000U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__415__store_data_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__415__addr_i = 0xa00U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__415__rd_i = 9U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__415__op_i = 0xcU;
    __Vtask_tb_memory_stage__DOT__start_memory_op__415__name = 
        std::string{"LOAD_FAULT"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__415__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__415__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__415__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__416__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__416__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__416__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__416__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__415__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__416__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__415__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__416__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__416__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__416__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__416__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__416__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__416__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__416__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__416__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__416__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__416__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__416__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__416__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__416__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__416__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__416__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__416__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__415__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__415__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__418__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__418__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__418__name = 
        std::string{"LOAD_FAULT busy stall"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__418__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__418__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__418__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__418__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__418__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__418__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_fault__419__expected_status = 6U;
    __Vtask_tb_memory_stage__DOT__finish_fault__419__name = 
        std::string{"LOAD_FAULT"};
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       348);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0xdeaddeadU;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       353);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       354);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__420__expected 
        = __Vtask_tb_memory_stage__DOT__finish_fault__419__expected_status;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__420__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__420__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_fault__419__name, 
                                            std::string{" fault status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__420__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__420__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__420__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__420__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__420__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__420__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__421__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__421__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__421__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_fault__419__name, 
                                            std::string{" forwarding invalid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__421__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__421__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__421__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__421__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__421__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__421__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__422__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__422__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__422__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_fault__419__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__422__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__422__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__422__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__422__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__422__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__422__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       360);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       363);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       364);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__425__pc_i = 0x4004U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__425__store_data_i = 0xfacecafeU;
    __Vtask_tb_memory_stage__DOT__start_memory_op__425__addr_i = 0xa04U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__425__rd_i = 0U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__425__op_i = 0x11U;
    __Vtask_tb_memory_stage__DOT__start_memory_op__425__name = 
        std::string{"STORE_FAULT"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__start_memory_op__425__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__425__store_data_i;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__start_memory_op__425__addr_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__426__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__426__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__426__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__426__rd_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__425__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__426__op_i 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__425__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__426__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__426__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__426__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__426__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__426__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__426__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__426__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__426__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__426__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__426__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__426__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__426__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__426__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__426__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__426__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__426__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__start_memory_op__425__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__start_memory_op__425__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       279);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       280);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__428__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__428__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__428__name = 
        std::string{"STORE_FAULT busy stall"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__428__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__428__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__428__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__428__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__428__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__428__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__finish_fault__429__expected_status = 8U;
    __Vtask_tb_memory_stage__DOT__finish_fault__429__name = 
        std::string{"STORE_FAULT"};
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       348);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 1U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0xdeaddeadU;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       353);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       354);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__430__expected 
        = __Vtask_tb_memory_stage__DOT__finish_fault__429__expected_status;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__430__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__430__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_fault__429__name, 
                                            std::string{" fault status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__430__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__430__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__430__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__430__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__430__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__430__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__431__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__431__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__431__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_fault__429__name, 
                                            std::string{" forwarding invalid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__431__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__431__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__431__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__431__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__431__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__431__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__432__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__432__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__432__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__finish_fault__429__name, 
                                            std::string{" backward ready"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__432__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__432__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__432__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__432__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__432__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__432__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       360);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       363);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       364);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n--- incoming FETCH_FAULT propagation ---\n");
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       497);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__435__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__435__rs2_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__435__rs1_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__435__rd_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__435__op_i = 0x1bU;
    __Vfunc_tb_memory_stage__DOT__make_instr__435__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__435__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__435__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__435__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__435__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__435__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__435__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__435__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__435__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__435__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__435__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__435__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__435__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__435__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__435__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__435__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0x5000U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0x5004U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 3U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       509);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__437__expected = 3U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__437__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__437__name = 
        std::string{"FETCH_FAULT propagated"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__437__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__437__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__437__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__437__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__437__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__437__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__438__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__438__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__438__name = 
        std::string{"FETCH_FAULT no forwarding"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__438__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__438__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__438__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__438__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__438__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__438__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_op__439__expected = 0x12U;
    __Vtask_tb_memory_stage__DOT__check_op__439__actual 
        = (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                     << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                               >> 0x1bU)));
    __Vtask_tb_memory_stage__DOT__check_op__439__name = 
        std::string{"FETCH_FAULT NOP"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_op__439__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_op__439__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_op__439__name),
                  6,(IData)(__Vtask_tb_memory_stage__DOT__check_op__439__actual),
                  6,__Vtask_tb_memory_stage__DOT__check_op__439__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_op__439__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n--- downstream STALL hold ---\n");
    __Vtask_tb_memory_stage__DOT__drive_non_memory__443__pc_i = 0x6000U;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__443__rd_val = 0x11112222U;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__443__rd_i = 0xaU;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__443__op_i = 0x1bU;
    __Vtask_tb_memory_stage__DOT__drive_non_memory__443__name = 
        std::string{"STALL baseline"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__name));
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = __Vtask_tb_memory_stage__DOT__drive_non_memory__443__rd_val;
    __Vfunc_tb_memory_stage__DOT__make_instr__444__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__444__rs2_i = 2U;
    __Vfunc_tb_memory_stage__DOT__make_instr__444__rs1_i = 1U;
    __Vfunc_tb_memory_stage__DOT__make_instr__444__rd_i 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__443__rd_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__444__op_i 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__443__op_i;
    __Vfunc_tb_memory_stage__DOT__make_instr__444__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__444__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__444__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__444__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__444__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__444__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__444__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__444__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__444__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__444__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__444__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__444__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__444__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__444__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__444__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__444__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__443__pc_i;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__drive_non_memory__443__pc_i);
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       239);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       240);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_op__446__expected 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__443__op_i;
    __Vtask_tb_memory_stage__DOT__check_op__446__actual 
        = (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                     << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                               >> 0x1bU)));
    __Vtask_tb_memory_stage__DOT__check_op__446__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__name, 
                                            std::string{" op"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_op__446__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_op__446__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_op__446__name),
                  6,(IData)(__Vtask_tb_memory_stage__DOT__check_op__446__actual),
                  6,__Vtask_tb_memory_stage__DOT__check_op__446__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_op__446__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__447__expected 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__443__rd_val;
    __Vtask_tb_memory_stage__DOT__check32__447__actual 
        = vlSelf->tb_memory_stage__DOT__rd_data_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__447__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__name, 
                                            std::string{" rd"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__447__actual 
         != __Vtask_tb_memory_stage__DOT__check32__447__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__447__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__447__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__447__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__447__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__448__expected 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__443__pc_i;
    __Vtask_tb_memory_stage__DOT__check32__448__actual 
        = vlSelf->tb_memory_stage__DOT__program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__448__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__448__actual 
         != __Vtask_tb_memory_stage__DOT__check32__448__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__448__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__448__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__448__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__448__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__449__expected 
        = ((IData)(4U) + __Vtask_tb_memory_stage__DOT__drive_non_memory__443__pc_i);
    __Vtask_tb_memory_stage__DOT__check32__449__actual 
        = vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out;
    __Vtask_tb_memory_stage__DOT__check32__449__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__name, 
                                            std::string{" next_pc"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__449__actual 
         != __Vtask_tb_memory_stage__DOT__check32__449__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__449__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__449__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__449__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__449__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__450__expected 
        = (0U != (IData)(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__rd_i));
    __Vtask_tb_memory_stage__DOT__check_bit__450__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__450__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__name, 
                                            std::string{" forwarding valid"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__450__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__450__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__450__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__450__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__450__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__450__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__451__expected 
        = __Vtask_tb_memory_stage__DOT__drive_non_memory__443__rd_val;
    __Vtask_tb_memory_stage__DOT__check32__451__actual 
        = (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                   >> 5U));
    __Vtask_tb_memory_stage__DOT__check32__451__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__name, 
                                            std::string{" forwarding data"}));
    if ((__Vtask_tb_memory_stage__DOT__check32__451__actual 
         != __Vtask_tb_memory_stage__DOT__check32__451__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__451__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__451__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__451__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__451__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__452__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__452__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__452__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__452__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__452__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__452__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__452__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__452__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__452__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__453__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__453__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__453__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__name, 
                                            std::string{" backward"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__453__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__453__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__453__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__453__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__453__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__453__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__454__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__454__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__454__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__name, 
                                            std::string{" wb.cyc"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__454__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__454__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__454__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__454__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__454__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__454__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__455__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__455__actual 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op));
    __Vtask_tb_memory_stage__DOT__check_bit__455__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_memory_stage__DOT__drive_non_memory__443__name, 
                                            std::string{" wb.stb"}));
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__455__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__455__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__455__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__455__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__455__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__455__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] = 0U;
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] = 0x90000000U;
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] = 0U;
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       520);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__source_data_in = 0U;
    vlSelf->tb_memory_stage__DOT__rd_data_in = 0x33334444U;
    __Vfunc_tb_memory_stage__DOT__make_instr__459__imm_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__459__rs2_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__459__rs1_i = 0U;
    __Vfunc_tb_memory_stage__DOT__make_instr__459__rd_i = 0xbU;
    __Vfunc_tb_memory_stage__DOT__make_instr__459__op_i = 0x1cU;
    __Vfunc_tb_memory_stage__DOT__make_instr__459__Vfuncout[0U] 
        = (IData)((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__459__rd_i)) 
                    << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__459__rs1_i)) 
                                  << 0x31U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__459__rs2_i)) 
                                                << 0x2cU) 
                                               | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__459__imm_i))))));
    __Vfunc_tb_memory_stage__DOT__make_instr__459__Vfuncout[1U] 
        = (((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__459__op_i) 
            << 0x1bU) | (IData)(((((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__459__rd_i)) 
                                   << 0x36U) | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__459__rs1_i)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__459__rs2_i)) 
                                                    << 0x2cU) 
                                                   | (QData)((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__459__imm_i))))) 
                                 >> 0x20U)));
    __Vfunc_tb_memory_stage__DOT__make_instr__459__Vfuncout[2U] 
        = ((IData)(__Vfunc_tb_memory_stage__DOT__make_instr__459__op_i) 
           >> 5U);
    vlSelf->tb_memory_stage__DOT__instruction_in[0U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__459__Vfuncout[0U];
    vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__459__Vfuncout[1U];
    vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
        = __Vfunc_tb_memory_stage__DOT__make_instr__459__Vfuncout[2U];
    vlSelf->tb_memory_stage__DOT__program_counter_in = 0x6004U;
    vlSelf->tb_memory_stage__DOT__next_program_counter_in = 0x6008U;
    vlSelf->tb_memory_stage__DOT__status_forwards_in = 0U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 1U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0xabcd0000U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       531);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       532);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_op__461__expected = 0x12U;
    __Vtask_tb_memory_stage__DOT__check_op__461__actual 
        = (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                     << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                               >> 0x1bU)));
    __Vtask_tb_memory_stage__DOT__check_op__461__name = 
        std::string{"STALL holds op"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_op__461__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_op__461__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_op__461__name),
                  6,(IData)(__Vtask_tb_memory_stage__DOT__check_op__461__actual),
                  6,__Vtask_tb_memory_stage__DOT__check_op__461__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_op__461__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__462__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__462__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__462__name = 
        std::string{"STALL backward"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__462__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__462__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__462__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__462__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__462__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__462__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__463__expected = 0xabcd0000U;
    __Vtask_tb_memory_stage__DOT__check32__463__actual 
        = vlSelf->tb_memory_stage__DOT__jump_address_backwards_out;
    __Vtask_tb_memory_stage__DOT__check32__463__name = 
        std::string{"STALL jump pass"};
    if ((__Vtask_tb_memory_stage__DOT__check32__463__actual 
         != __Vtask_tb_memory_stage__DOT__check32__463__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__463__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__463__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__463__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__463__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    VL_WRITEF("\n--- downstream JUMP flush ---\n");
    co_await vlSelf->__VtrigSched_h837116d9__0.trigger(
                                                       "@(negedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       539);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_memory_stage__DOT__status_backwards_in = 2U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_in = 0xcafebabeU;
    co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                       "@(posedge tb_memory_stage.clk)", 
                                                       "tb_memory_stage.sv", 
                                                       543);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_memory_stage.sv", 
                                       544);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_memory_stage__DOT__check_op__464__expected = 0x12U;
    __Vtask_tb_memory_stage__DOT__check_op__464__actual 
        = (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                     << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                               >> 0x1bU)));
    __Vtask_tb_memory_stage__DOT__check_op__464__name = 
        std::string{"JUMP flush NOP"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_op__464__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_op__464__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_op__464__name),
                  6,(IData)(__Vtask_tb_memory_stage__DOT__check_op__464__actual),
                  6,__Vtask_tb_memory_stage__DOT__check_op__464__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_op__464__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_fwd_status__465__expected = 1U;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__465__actual 
        = vlSelf->tb_memory_stage__DOT__status_forwards_out;
    __Vtask_tb_memory_stage__DOT__check_fwd_status__465__name = 
        std::string{"JUMP flush BUBBLE"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__465__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__465__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__465__name),
                  4,(IData)(__Vtask_tb_memory_stage__DOT__check_fwd_status__465__actual),
                  4,__Vtask_tb_memory_stage__DOT__check_fwd_status__465__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_fwd_status__465__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bwd_status__466__expected = 2U;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__466__actual 
        = vlSelf->tb_memory_stage__DOT__status_backwards_out;
    __Vtask_tb_memory_stage__DOT__check_bwd_status__466__name = 
        std::string{"JUMP backward"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__466__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__466__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__466__name),
                  2,(IData)(__Vtask_tb_memory_stage__DOT__check_bwd_status__466__actual),
                  2,__Vtask_tb_memory_stage__DOT__check_bwd_status__466__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bwd_status__466__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check32__467__expected = 0xcafebabeU;
    __Vtask_tb_memory_stage__DOT__check32__467__actual 
        = vlSelf->tb_memory_stage__DOT__jump_address_backwards_out;
    __Vtask_tb_memory_stage__DOT__check32__467__name = 
        std::string{"JUMP address pass"};
    if ((__Vtask_tb_memory_stage__DOT__check32__467__actual 
         != __Vtask_tb_memory_stage__DOT__check32__467__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check32__467__name),
                  32,__Vtask_tb_memory_stage__DOT__check32__467__actual,
                  32,__Vtask_tb_memory_stage__DOT__check32__467__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check32__467__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    __Vtask_tb_memory_stage__DOT__check_bit__468__expected = 0U;
    __Vtask_tb_memory_stage__DOT__check_bit__468__actual 
        = (1U & (IData)((vlSelf->tb_memory_stage__DOT__forwarding_out 
                         >> 0x25U)));
    __Vtask_tb_memory_stage__DOT__check_bit__468__name = 
        std::string{"JUMP no forwarding"};
    if (((IData)(__Vtask_tb_memory_stage__DOT__check_bit__468__actual) 
         != (IData)(__Vtask_tb_memory_stage__DOT__check_bit__468__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_memory_stage__DOT__check_bit__468__name),
                  1,(IData)(__Vtask_tb_memory_stage__DOT__check_bit__468__actual),
                  1,__Vtask_tb_memory_stage__DOT__check_bit__468__expected);
        vlSelf->tb_memory_stage__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_memory_stage__DOT__check_bit__468__name));
        vlSelf->tb_memory_stage__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_memory_stage__DOT__pass_count);
    }
    VL_WRITEF("\n========================================\nCOMPREHENSIVE MEMORY_STAGE TEST SUMMARY\nPASSED: %0d\nFAILED: %0d\n========================================\n",
              32,vlSelf->tb_memory_stage__DOT__pass_count,
              32,vlSelf->tb_memory_stage__DOT__fail_count);
    if ((0U == vlSelf->tb_memory_stage__DOT__fail_count)) {
        VL_WRITEF("ALL COMPREHENSIVE MEMORY_STAGE TESTS PASSED\n");
        VL_FINISH_MT("tb_memory_stage.sv", 560, "");
    } else {
        VL_WRITEF("COMPREHENSIVE MEMORY_STAGE TESTS FAILED\n[%0t] %%Error: tb_memory_stage.sv:563: Assertion failed in %Ntb_memory_stage\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_memory_stage.sv", 563, "");
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}
