// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mcu.h for the primary calling header

#include "verilated.h"

#include "Vtb_mcu__Syms.h"
#include "Vtb_mcu___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_mcu___024root___eval_initial__TOP__3(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_initial__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__clear_ram__2__i;
    __Vtask_tb_mcu__DOT__clear_ram__2__i = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__3__rd;
    __Vtask_tb_mcu__DOT__emit_li__3__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__3__value;
    __Vtask_tb_mcu__DOT__emit_li__3__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__3__rounded;
    __Vtask_tb_mcu__DOT__emit_li__3__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__3__upper20;
    __Vtask_tb_mcu__DOT__emit_li__3__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__3__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__3__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__3__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__3__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__3__lower12;
    __Vtask_tb_mcu__DOT__emit_li__3__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__4__instr;
    __Vtask_tb_mcu__DOT__put_instr__4__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__5__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__5__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__5__rd;
    __Vfunc_tb_mcu__DOT__lui__5__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__5__imm20;
    __Vfunc_tb_mcu__DOT__lui__5__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__6__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__6__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__6__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__6__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__6__rd;
    __Vfunc_tb_mcu__DOT__enc_u__6__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__6__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__6__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__7__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__7__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__7__data;
    __Vtask_tb_mcu__DOT__write_ram_word__7__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__7__index;
    __Vtask_tb_mcu__DOT__write_ram_word__7__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__8__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__8__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__8__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__9__instr;
    __Vtask_tb_mcu__DOT__put_instr__9__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__10__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__10__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__10__rd;
    __Vfunc_tb_mcu__DOT__addi__10__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__10__rs1;
    __Vfunc_tb_mcu__DOT__addi__10__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__10__imm;
    __Vfunc_tb_mcu__DOT__addi__10__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__11__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__11__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__11__imm;
    __Vfunc_tb_mcu__DOT__enc_i__11__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__11__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__11__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__11__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__11__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__11__rd;
    __Vfunc_tb_mcu__DOT__enc_i__11__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__11__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__11__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__12__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__12__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__12__data;
    __Vtask_tb_mcu__DOT__write_ram_word__12__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__12__index;
    __Vtask_tb_mcu__DOT__write_ram_word__12__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__13__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__13__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__13__wb_addr = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__14__rd;
    __Vtask_tb_mcu__DOT__emit_li__14__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__14__value;
    __Vtask_tb_mcu__DOT__emit_li__14__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__14__rounded;
    __Vtask_tb_mcu__DOT__emit_li__14__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__14__upper20;
    __Vtask_tb_mcu__DOT__emit_li__14__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__14__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__14__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__14__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__14__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__14__lower12;
    __Vtask_tb_mcu__DOT__emit_li__14__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__15__instr;
    __Vtask_tb_mcu__DOT__put_instr__15__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__16__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__16__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__16__rd;
    __Vfunc_tb_mcu__DOT__lui__16__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__16__imm20;
    __Vfunc_tb_mcu__DOT__lui__16__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__17__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__17__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__17__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__17__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__17__rd;
    __Vfunc_tb_mcu__DOT__enc_u__17__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__17__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__17__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__18__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__18__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__18__data;
    __Vtask_tb_mcu__DOT__write_ram_word__18__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__18__index;
    __Vtask_tb_mcu__DOT__write_ram_word__18__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__19__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__19__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__19__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__20__instr;
    __Vtask_tb_mcu__DOT__put_instr__20__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__21__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__21__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__21__rd;
    __Vfunc_tb_mcu__DOT__addi__21__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__21__rs1;
    __Vfunc_tb_mcu__DOT__addi__21__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__21__imm;
    __Vfunc_tb_mcu__DOT__addi__21__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__22__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__22__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__22__imm;
    __Vfunc_tb_mcu__DOT__enc_i__22__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__22__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__22__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__22__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__22__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__22__rd;
    __Vfunc_tb_mcu__DOT__enc_i__22__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__22__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__22__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__23__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__23__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__23__data;
    __Vtask_tb_mcu__DOT__write_ram_word__23__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__23__index;
    __Vtask_tb_mcu__DOT__write_ram_word__23__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__24__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__24__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__24__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__25__instr;
    __Vtask_tb_mcu__DOT__put_instr__25__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__sw__26__Vfuncout;
    __Vfunc_tb_mcu__DOT__sw__26__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__26__rs2;
    __Vfunc_tb_mcu__DOT__sw__26__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__26__rs1;
    __Vfunc_tb_mcu__DOT__sw__26__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__sw__26__imm;
    __Vfunc_tb_mcu__DOT__sw__26__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_s__27__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_s__27__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_s__27__imm;
    __Vfunc_tb_mcu__DOT__enc_s__27__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__27__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__27__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__27__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__27__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_s__27__funct3;
    __Vfunc_tb_mcu__DOT__enc_s__27__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_s__27__opcode;
    __Vfunc_tb_mcu__DOT__enc_s__27__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__28__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__28__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__28__data;
    __Vtask_tb_mcu__DOT__write_ram_word__28__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__28__index;
    __Vtask_tb_mcu__DOT__write_ram_word__28__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__29__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__29__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__29__wb_addr = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__30__rd;
    __Vtask_tb_mcu__DOT__emit_li__30__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__30__value;
    __Vtask_tb_mcu__DOT__emit_li__30__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__30__rounded;
    __Vtask_tb_mcu__DOT__emit_li__30__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__30__upper20;
    __Vtask_tb_mcu__DOT__emit_li__30__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__30__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__30__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__30__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__30__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__30__lower12;
    __Vtask_tb_mcu__DOT__emit_li__30__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__31__instr;
    __Vtask_tb_mcu__DOT__put_instr__31__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__32__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__32__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__32__rd;
    __Vfunc_tb_mcu__DOT__lui__32__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__32__imm20;
    __Vfunc_tb_mcu__DOT__lui__32__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__33__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__33__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__33__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__33__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__33__rd;
    __Vfunc_tb_mcu__DOT__enc_u__33__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__33__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__33__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__34__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__34__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__34__data;
    __Vtask_tb_mcu__DOT__write_ram_word__34__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__34__index;
    __Vtask_tb_mcu__DOT__write_ram_word__34__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__35__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__35__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__35__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__36__instr;
    __Vtask_tb_mcu__DOT__put_instr__36__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__37__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__37__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__37__rd;
    __Vfunc_tb_mcu__DOT__addi__37__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__37__rs1;
    __Vfunc_tb_mcu__DOT__addi__37__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__37__imm;
    __Vfunc_tb_mcu__DOT__addi__37__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__38__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__38__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__38__imm;
    __Vfunc_tb_mcu__DOT__enc_i__38__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__38__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__38__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__38__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__38__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__38__rd;
    __Vfunc_tb_mcu__DOT__enc_i__38__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__38__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__38__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__39__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__39__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__39__data;
    __Vtask_tb_mcu__DOT__write_ram_word__39__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__39__index;
    __Vtask_tb_mcu__DOT__write_ram_word__39__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__40__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__40__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__40__wb_addr = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__41__rd;
    __Vtask_tb_mcu__DOT__emit_li__41__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__41__value;
    __Vtask_tb_mcu__DOT__emit_li__41__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__41__rounded;
    __Vtask_tb_mcu__DOT__emit_li__41__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__41__upper20;
    __Vtask_tb_mcu__DOT__emit_li__41__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__41__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__41__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__41__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__41__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__41__lower12;
    __Vtask_tb_mcu__DOT__emit_li__41__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__42__instr;
    __Vtask_tb_mcu__DOT__put_instr__42__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__43__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__43__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__43__rd;
    __Vfunc_tb_mcu__DOT__lui__43__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__43__imm20;
    __Vfunc_tb_mcu__DOT__lui__43__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__44__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__44__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__44__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__44__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__44__rd;
    __Vfunc_tb_mcu__DOT__enc_u__44__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__44__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__44__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__45__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__45__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__45__data;
    __Vtask_tb_mcu__DOT__write_ram_word__45__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__45__index;
    __Vtask_tb_mcu__DOT__write_ram_word__45__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__46__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__46__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__46__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__47__instr;
    __Vtask_tb_mcu__DOT__put_instr__47__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__48__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__48__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__48__rd;
    __Vfunc_tb_mcu__DOT__addi__48__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__48__rs1;
    __Vfunc_tb_mcu__DOT__addi__48__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__48__imm;
    __Vfunc_tb_mcu__DOT__addi__48__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__49__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__49__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__49__imm;
    __Vfunc_tb_mcu__DOT__enc_i__49__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__49__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__49__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__49__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__49__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__49__rd;
    __Vfunc_tb_mcu__DOT__enc_i__49__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__49__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__49__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__50__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__50__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__50__data;
    __Vtask_tb_mcu__DOT__write_ram_word__50__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__50__index;
    __Vtask_tb_mcu__DOT__write_ram_word__50__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__51__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__51__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__51__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__52__instr;
    __Vtask_tb_mcu__DOT__put_instr__52__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__sw__53__Vfuncout;
    __Vfunc_tb_mcu__DOT__sw__53__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__53__rs2;
    __Vfunc_tb_mcu__DOT__sw__53__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__53__rs1;
    __Vfunc_tb_mcu__DOT__sw__53__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__sw__53__imm;
    __Vfunc_tb_mcu__DOT__sw__53__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_s__54__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_s__54__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_s__54__imm;
    __Vfunc_tb_mcu__DOT__enc_s__54__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__54__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__54__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__54__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__54__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_s__54__funct3;
    __Vfunc_tb_mcu__DOT__enc_s__54__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_s__54__opcode;
    __Vfunc_tb_mcu__DOT__enc_s__54__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__55__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__55__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__55__data;
    __Vtask_tb_mcu__DOT__write_ram_word__55__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__55__index;
    __Vtask_tb_mcu__DOT__write_ram_word__55__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__56__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__56__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__56__wb_addr = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__57__rd;
    __Vtask_tb_mcu__DOT__emit_li__57__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__57__value;
    __Vtask_tb_mcu__DOT__emit_li__57__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__57__rounded;
    __Vtask_tb_mcu__DOT__emit_li__57__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__57__upper20;
    __Vtask_tb_mcu__DOT__emit_li__57__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__57__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__57__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__57__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__57__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__57__lower12;
    __Vtask_tb_mcu__DOT__emit_li__57__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__58__instr;
    __Vtask_tb_mcu__DOT__put_instr__58__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__59__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__59__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__59__rd;
    __Vfunc_tb_mcu__DOT__lui__59__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__59__imm20;
    __Vfunc_tb_mcu__DOT__lui__59__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__60__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__60__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__60__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__60__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__60__rd;
    __Vfunc_tb_mcu__DOT__enc_u__60__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__60__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__60__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__61__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__61__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__61__data;
    __Vtask_tb_mcu__DOT__write_ram_word__61__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__61__index;
    __Vtask_tb_mcu__DOT__write_ram_word__61__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__62__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__62__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__62__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__63__instr;
    __Vtask_tb_mcu__DOT__put_instr__63__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__64__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__64__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__64__rd;
    __Vfunc_tb_mcu__DOT__addi__64__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__64__rs1;
    __Vfunc_tb_mcu__DOT__addi__64__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__64__imm;
    __Vfunc_tb_mcu__DOT__addi__64__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__65__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__65__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__65__imm;
    __Vfunc_tb_mcu__DOT__enc_i__65__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__65__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__65__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__65__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__65__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__65__rd;
    __Vfunc_tb_mcu__DOT__enc_i__65__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__65__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__65__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__66__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__66__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__66__data;
    __Vtask_tb_mcu__DOT__write_ram_word__66__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__66__index;
    __Vtask_tb_mcu__DOT__write_ram_word__66__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__67__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__67__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__67__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__68__instr;
    __Vtask_tb_mcu__DOT__put_instr__68__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__sw__69__Vfuncout;
    __Vfunc_tb_mcu__DOT__sw__69__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__69__rs2;
    __Vfunc_tb_mcu__DOT__sw__69__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__69__rs1;
    __Vfunc_tb_mcu__DOT__sw__69__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__sw__69__imm;
    __Vfunc_tb_mcu__DOT__sw__69__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_s__70__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_s__70__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_s__70__imm;
    __Vfunc_tb_mcu__DOT__enc_s__70__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__70__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__70__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__70__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__70__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_s__70__funct3;
    __Vfunc_tb_mcu__DOT__enc_s__70__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_s__70__opcode;
    __Vfunc_tb_mcu__DOT__enc_s__70__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__71__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__71__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__71__data;
    __Vtask_tb_mcu__DOT__write_ram_word__71__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__71__index;
    __Vtask_tb_mcu__DOT__write_ram_word__71__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__72__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__72__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__72__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__72__wb_addr = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__73__rd;
    __Vtask_tb_mcu__DOT__emit_li__73__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__73__value;
    __Vtask_tb_mcu__DOT__emit_li__73__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__73__rounded;
    __Vtask_tb_mcu__DOT__emit_li__73__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__73__upper20;
    __Vtask_tb_mcu__DOT__emit_li__73__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__73__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__73__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__73__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__73__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__73__lower12;
    __Vtask_tb_mcu__DOT__emit_li__73__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__74__instr;
    __Vtask_tb_mcu__DOT__put_instr__74__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__75__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__75__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__75__rd;
    __Vfunc_tb_mcu__DOT__lui__75__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__75__imm20;
    __Vfunc_tb_mcu__DOT__lui__75__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__76__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__76__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__76__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__76__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__76__rd;
    __Vfunc_tb_mcu__DOT__enc_u__76__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__76__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__76__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__77__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__77__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__77__data;
    __Vtask_tb_mcu__DOT__write_ram_word__77__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__77__index;
    __Vtask_tb_mcu__DOT__write_ram_word__77__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__78__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__78__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__78__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__78__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__79__instr;
    __Vtask_tb_mcu__DOT__put_instr__79__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__80__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__80__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__80__rd;
    __Vfunc_tb_mcu__DOT__addi__80__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__80__rs1;
    __Vfunc_tb_mcu__DOT__addi__80__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__80__imm;
    __Vfunc_tb_mcu__DOT__addi__80__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__81__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__81__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__81__imm;
    __Vfunc_tb_mcu__DOT__enc_i__81__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__81__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__81__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__81__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__81__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__81__rd;
    __Vfunc_tb_mcu__DOT__enc_i__81__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__81__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__81__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__82__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__82__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__82__data;
    __Vtask_tb_mcu__DOT__write_ram_word__82__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__82__index;
    __Vtask_tb_mcu__DOT__write_ram_word__82__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__83__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__83__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__83__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__83__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__84__instr;
    __Vtask_tb_mcu__DOT__put_instr__84__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lw__85__Vfuncout;
    __Vfunc_tb_mcu__DOT__lw__85__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lw__85__rd;
    __Vfunc_tb_mcu__DOT__lw__85__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lw__85__rs1;
    __Vfunc_tb_mcu__DOT__lw__85__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__lw__85__imm;
    __Vfunc_tb_mcu__DOT__lw__85__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__86__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__86__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__86__imm;
    __Vfunc_tb_mcu__DOT__enc_i__86__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__86__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__86__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__86__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__86__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__86__rd;
    __Vfunc_tb_mcu__DOT__enc_i__86__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__86__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__86__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__87__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__87__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__87__data;
    __Vtask_tb_mcu__DOT__write_ram_word__87__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__87__index;
    __Vtask_tb_mcu__DOT__write_ram_word__87__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__88__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__88__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__88__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__88__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__89__instr;
    __Vtask_tb_mcu__DOT__put_instr__89__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__sw__90__Vfuncout;
    __Vfunc_tb_mcu__DOT__sw__90__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__90__rs2;
    __Vfunc_tb_mcu__DOT__sw__90__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__90__rs1;
    __Vfunc_tb_mcu__DOT__sw__90__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__sw__90__imm;
    __Vfunc_tb_mcu__DOT__sw__90__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_s__91__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_s__91__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_s__91__imm;
    __Vfunc_tb_mcu__DOT__enc_s__91__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__91__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__91__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__91__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__91__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_s__91__funct3;
    __Vfunc_tb_mcu__DOT__enc_s__91__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_s__91__opcode;
    __Vfunc_tb_mcu__DOT__enc_s__91__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__92__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__92__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__92__data;
    __Vtask_tb_mcu__DOT__write_ram_word__92__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__92__index;
    __Vtask_tb_mcu__DOT__write_ram_word__92__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__93__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__93__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__93__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__93__wb_addr = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__94__rd;
    __Vtask_tb_mcu__DOT__emit_li__94__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__94__value;
    __Vtask_tb_mcu__DOT__emit_li__94__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__94__rounded;
    __Vtask_tb_mcu__DOT__emit_li__94__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__94__upper20;
    __Vtask_tb_mcu__DOT__emit_li__94__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__94__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__94__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__94__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__94__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__94__lower12;
    __Vtask_tb_mcu__DOT__emit_li__94__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__95__instr;
    __Vtask_tb_mcu__DOT__put_instr__95__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__96__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__96__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__96__rd;
    __Vfunc_tb_mcu__DOT__lui__96__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__96__imm20;
    __Vfunc_tb_mcu__DOT__lui__96__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__97__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__97__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__97__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__97__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__97__rd;
    __Vfunc_tb_mcu__DOT__enc_u__97__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__97__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__97__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__98__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__98__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__98__data;
    __Vtask_tb_mcu__DOT__write_ram_word__98__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__98__index;
    __Vtask_tb_mcu__DOT__write_ram_word__98__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__99__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__99__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__99__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__99__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__100__instr;
    __Vtask_tb_mcu__DOT__put_instr__100__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__101__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__101__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__101__rd;
    __Vfunc_tb_mcu__DOT__addi__101__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__101__rs1;
    __Vfunc_tb_mcu__DOT__addi__101__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__101__imm;
    __Vfunc_tb_mcu__DOT__addi__101__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__102__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__102__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__102__imm;
    __Vfunc_tb_mcu__DOT__enc_i__102__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__102__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__102__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__102__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__102__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__102__rd;
    __Vfunc_tb_mcu__DOT__enc_i__102__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__102__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__102__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__103__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__103__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__103__data;
    __Vtask_tb_mcu__DOT__write_ram_word__103__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__103__index;
    __Vtask_tb_mcu__DOT__write_ram_word__103__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__104__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__104__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__104__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__104__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__105__instr;
    __Vtask_tb_mcu__DOT__put_instr__105__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lw__106__Vfuncout;
    __Vfunc_tb_mcu__DOT__lw__106__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lw__106__rd;
    __Vfunc_tb_mcu__DOT__lw__106__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lw__106__rs1;
    __Vfunc_tb_mcu__DOT__lw__106__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__lw__106__imm;
    __Vfunc_tb_mcu__DOT__lw__106__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__107__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__107__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__107__imm;
    __Vfunc_tb_mcu__DOT__enc_i__107__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__107__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__107__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__107__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__107__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__107__rd;
    __Vfunc_tb_mcu__DOT__enc_i__107__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__107__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__107__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__108__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__108__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__108__data;
    __Vtask_tb_mcu__DOT__write_ram_word__108__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__108__index;
    __Vtask_tb_mcu__DOT__write_ram_word__108__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__109__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__109__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__109__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__109__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__110__instr;
    __Vtask_tb_mcu__DOT__put_instr__110__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__sw__111__Vfuncout;
    __Vfunc_tb_mcu__DOT__sw__111__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__111__rs2;
    __Vfunc_tb_mcu__DOT__sw__111__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__111__rs1;
    __Vfunc_tb_mcu__DOT__sw__111__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__sw__111__imm;
    __Vfunc_tb_mcu__DOT__sw__111__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_s__112__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_s__112__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_s__112__imm;
    __Vfunc_tb_mcu__DOT__enc_s__112__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__112__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__112__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__112__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__112__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_s__112__funct3;
    __Vfunc_tb_mcu__DOT__enc_s__112__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_s__112__opcode;
    __Vfunc_tb_mcu__DOT__enc_s__112__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__113__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__113__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__113__data;
    __Vtask_tb_mcu__DOT__write_ram_word__113__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__113__index;
    __Vtask_tb_mcu__DOT__write_ram_word__113__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__114__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__114__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__114__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__114__wb_addr = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__115__rd;
    __Vtask_tb_mcu__DOT__emit_li__115__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__115__value;
    __Vtask_tb_mcu__DOT__emit_li__115__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__115__rounded;
    __Vtask_tb_mcu__DOT__emit_li__115__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__115__upper20;
    __Vtask_tb_mcu__DOT__emit_li__115__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__115__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__115__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__115__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__115__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__115__lower12;
    __Vtask_tb_mcu__DOT__emit_li__115__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__116__instr;
    __Vtask_tb_mcu__DOT__put_instr__116__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__117__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__117__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__117__rd;
    __Vfunc_tb_mcu__DOT__lui__117__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__117__imm20;
    __Vfunc_tb_mcu__DOT__lui__117__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__118__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__118__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__118__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__118__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__118__rd;
    __Vfunc_tb_mcu__DOT__enc_u__118__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__118__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__118__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__119__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__119__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__119__data;
    __Vtask_tb_mcu__DOT__write_ram_word__119__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__119__index;
    __Vtask_tb_mcu__DOT__write_ram_word__119__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__120__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__120__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__120__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__120__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__121__instr;
    __Vtask_tb_mcu__DOT__put_instr__121__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__122__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__122__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__122__rd;
    __Vfunc_tb_mcu__DOT__addi__122__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__122__rs1;
    __Vfunc_tb_mcu__DOT__addi__122__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__122__imm;
    __Vfunc_tb_mcu__DOT__addi__122__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__123__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__123__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__123__imm;
    __Vfunc_tb_mcu__DOT__enc_i__123__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__123__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__123__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__123__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__123__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__123__rd;
    __Vfunc_tb_mcu__DOT__enc_i__123__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__123__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__123__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__124__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__124__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__124__data;
    __Vtask_tb_mcu__DOT__write_ram_word__124__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__124__index;
    __Vtask_tb_mcu__DOT__write_ram_word__124__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__125__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__125__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__125__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__125__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__126__instr;
    __Vtask_tb_mcu__DOT__put_instr__126__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__sw__127__Vfuncout;
    __Vfunc_tb_mcu__DOT__sw__127__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__127__rs2;
    __Vfunc_tb_mcu__DOT__sw__127__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__127__rs1;
    __Vfunc_tb_mcu__DOT__sw__127__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__sw__127__imm;
    __Vfunc_tb_mcu__DOT__sw__127__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_s__128__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_s__128__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_s__128__imm;
    __Vfunc_tb_mcu__DOT__enc_s__128__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__128__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__128__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__128__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__128__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_s__128__funct3;
    __Vfunc_tb_mcu__DOT__enc_s__128__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_s__128__opcode;
    __Vfunc_tb_mcu__DOT__enc_s__128__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__129__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__129__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__129__data;
    __Vtask_tb_mcu__DOT__write_ram_word__129__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__129__index;
    __Vtask_tb_mcu__DOT__write_ram_word__129__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__130__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__130__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__130__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__130__wb_addr = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__131__rd;
    __Vtask_tb_mcu__DOT__emit_li__131__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__131__value;
    __Vtask_tb_mcu__DOT__emit_li__131__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__131__rounded;
    __Vtask_tb_mcu__DOT__emit_li__131__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__131__upper20;
    __Vtask_tb_mcu__DOT__emit_li__131__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__131__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__131__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__131__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__131__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__131__lower12;
    __Vtask_tb_mcu__DOT__emit_li__131__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__132__instr;
    __Vtask_tb_mcu__DOT__put_instr__132__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__133__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__133__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__133__rd;
    __Vfunc_tb_mcu__DOT__lui__133__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__133__imm20;
    __Vfunc_tb_mcu__DOT__lui__133__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__134__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__134__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__134__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__134__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__134__rd;
    __Vfunc_tb_mcu__DOT__enc_u__134__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__134__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__134__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__135__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__135__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__135__data;
    __Vtask_tb_mcu__DOT__write_ram_word__135__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__135__index;
    __Vtask_tb_mcu__DOT__write_ram_word__135__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__136__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__136__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__136__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__136__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__137__instr;
    __Vtask_tb_mcu__DOT__put_instr__137__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__138__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__138__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__138__rd;
    __Vfunc_tb_mcu__DOT__addi__138__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__138__rs1;
    __Vfunc_tb_mcu__DOT__addi__138__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__138__imm;
    __Vfunc_tb_mcu__DOT__addi__138__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__139__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__139__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__139__imm;
    __Vfunc_tb_mcu__DOT__enc_i__139__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__139__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__139__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__139__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__139__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__139__rd;
    __Vfunc_tb_mcu__DOT__enc_i__139__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__139__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__139__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__140__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__140__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__140__data;
    __Vtask_tb_mcu__DOT__write_ram_word__140__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__140__index;
    __Vtask_tb_mcu__DOT__write_ram_word__140__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__141__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__141__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__141__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__141__wb_addr = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__142__rd;
    __Vtask_tb_mcu__DOT__emit_li__142__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__142__value;
    __Vtask_tb_mcu__DOT__emit_li__142__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__142__rounded;
    __Vtask_tb_mcu__DOT__emit_li__142__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__142__upper20;
    __Vtask_tb_mcu__DOT__emit_li__142__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__142__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__142__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__142__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__142__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__142__lower12;
    __Vtask_tb_mcu__DOT__emit_li__142__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__143__instr;
    __Vtask_tb_mcu__DOT__put_instr__143__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__144__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__144__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__144__rd;
    __Vfunc_tb_mcu__DOT__lui__144__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__144__imm20;
    __Vfunc_tb_mcu__DOT__lui__144__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__145__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__145__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__145__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__145__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__145__rd;
    __Vfunc_tb_mcu__DOT__enc_u__145__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__145__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__145__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__146__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__146__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__146__data;
    __Vtask_tb_mcu__DOT__write_ram_word__146__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__146__index;
    __Vtask_tb_mcu__DOT__write_ram_word__146__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__147__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__147__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__147__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__147__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__148__instr;
    __Vtask_tb_mcu__DOT__put_instr__148__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__149__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__149__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__149__rd;
    __Vfunc_tb_mcu__DOT__addi__149__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__149__rs1;
    __Vfunc_tb_mcu__DOT__addi__149__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__149__imm;
    __Vfunc_tb_mcu__DOT__addi__149__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__150__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__150__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__150__imm;
    __Vfunc_tb_mcu__DOT__enc_i__150__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__150__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__150__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__150__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__150__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__150__rd;
    __Vfunc_tb_mcu__DOT__enc_i__150__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__150__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__150__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__151__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__151__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__151__data;
    __Vtask_tb_mcu__DOT__write_ram_word__151__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__151__index;
    __Vtask_tb_mcu__DOT__write_ram_word__151__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__152__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__152__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__152__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__152__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__153__instr;
    __Vtask_tb_mcu__DOT__put_instr__153__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__sw__154__Vfuncout;
    __Vfunc_tb_mcu__DOT__sw__154__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__154__rs2;
    __Vfunc_tb_mcu__DOT__sw__154__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__154__rs1;
    __Vfunc_tb_mcu__DOT__sw__154__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__sw__154__imm;
    __Vfunc_tb_mcu__DOT__sw__154__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_s__155__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_s__155__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_s__155__imm;
    __Vfunc_tb_mcu__DOT__enc_s__155__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__155__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__155__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__155__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__155__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_s__155__funct3;
    __Vfunc_tb_mcu__DOT__enc_s__155__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_s__155__opcode;
    __Vfunc_tb_mcu__DOT__enc_s__155__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__156__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__156__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__156__data;
    __Vtask_tb_mcu__DOT__write_ram_word__156__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__156__index;
    __Vtask_tb_mcu__DOT__write_ram_word__156__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__157__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__157__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__157__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__157__wb_addr = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__158__rd;
    __Vtask_tb_mcu__DOT__emit_li__158__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__158__value;
    __Vtask_tb_mcu__DOT__emit_li__158__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__158__rounded;
    __Vtask_tb_mcu__DOT__emit_li__158__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__158__upper20;
    __Vtask_tb_mcu__DOT__emit_li__158__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__158__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__158__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__158__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__158__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__158__lower12;
    __Vtask_tb_mcu__DOT__emit_li__158__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__159__instr;
    __Vtask_tb_mcu__DOT__put_instr__159__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__160__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__160__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__160__rd;
    __Vfunc_tb_mcu__DOT__lui__160__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__160__imm20;
    __Vfunc_tb_mcu__DOT__lui__160__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__161__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__161__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__161__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__161__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__161__rd;
    __Vfunc_tb_mcu__DOT__enc_u__161__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__161__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__161__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__162__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__162__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__162__data;
    __Vtask_tb_mcu__DOT__write_ram_word__162__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__162__index;
    __Vtask_tb_mcu__DOT__write_ram_word__162__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__163__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__163__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__163__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__163__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__164__instr;
    __Vtask_tb_mcu__DOT__put_instr__164__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__165__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__165__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__165__rd;
    __Vfunc_tb_mcu__DOT__addi__165__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__165__rs1;
    __Vfunc_tb_mcu__DOT__addi__165__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__165__imm;
    __Vfunc_tb_mcu__DOT__addi__165__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__166__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__166__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__166__imm;
    __Vfunc_tb_mcu__DOT__enc_i__166__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__166__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__166__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__166__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__166__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__166__rd;
    __Vfunc_tb_mcu__DOT__enc_i__166__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__166__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__166__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__167__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__167__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__167__data;
    __Vtask_tb_mcu__DOT__write_ram_word__167__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__167__index;
    __Vtask_tb_mcu__DOT__write_ram_word__167__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__168__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__168__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__168__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__168__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__169__instr;
    __Vtask_tb_mcu__DOT__put_instr__169__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__sw__170__Vfuncout;
    __Vfunc_tb_mcu__DOT__sw__170__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__170__rs2;
    __Vfunc_tb_mcu__DOT__sw__170__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__170__rs1;
    __Vfunc_tb_mcu__DOT__sw__170__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__sw__170__imm;
    __Vfunc_tb_mcu__DOT__sw__170__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_s__171__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_s__171__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_s__171__imm;
    __Vfunc_tb_mcu__DOT__enc_s__171__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__171__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__171__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__171__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__171__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_s__171__funct3;
    __Vfunc_tb_mcu__DOT__enc_s__171__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_s__171__opcode;
    __Vfunc_tb_mcu__DOT__enc_s__171__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__172__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__172__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__172__data;
    __Vtask_tb_mcu__DOT__write_ram_word__172__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__172__index;
    __Vtask_tb_mcu__DOT__write_ram_word__172__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__173__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__173__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__173__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__173__wb_addr = 0;
    CData/*4:0*/ __Vtask_tb_mcu__DOT__emit_li__174__rd;
    __Vtask_tb_mcu__DOT__emit_li__174__rd = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__174__value;
    __Vtask_tb_mcu__DOT__emit_li__174__value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__174__rounded;
    __Vtask_tb_mcu__DOT__emit_li__174__rounded = 0;
    IData/*19:0*/ __Vtask_tb_mcu__DOT__emit_li__174__upper20;
    __Vtask_tb_mcu__DOT__emit_li__174__upper20 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__174__upper_value;
    __Vtask_tb_mcu__DOT__emit_li__174__upper_value = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__emit_li__174__lower_diff;
    __Vtask_tb_mcu__DOT__emit_li__174__lower_diff = 0;
    SData/*11:0*/ __Vtask_tb_mcu__DOT__emit_li__174__lower12;
    __Vtask_tb_mcu__DOT__emit_li__174__lower12 = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__175__instr;
    __Vtask_tb_mcu__DOT__put_instr__175__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__lui__176__Vfuncout;
    __Vfunc_tb_mcu__DOT__lui__176__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__lui__176__rd;
    __Vfunc_tb_mcu__DOT__lui__176__rd = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__lui__176__imm20;
    __Vfunc_tb_mcu__DOT__lui__176__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_u__177__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_u__177__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_mcu__DOT__enc_u__177__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__177__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_u__177__rd;
    __Vfunc_tb_mcu__DOT__enc_u__177__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_u__177__opcode;
    __Vfunc_tb_mcu__DOT__enc_u__177__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__178__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__178__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__178__data;
    __Vtask_tb_mcu__DOT__write_ram_word__178__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__178__index;
    __Vtask_tb_mcu__DOT__write_ram_word__178__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__179__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__179__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__179__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__179__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__180__instr;
    __Vtask_tb_mcu__DOT__put_instr__180__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__addi__181__Vfuncout;
    __Vfunc_tb_mcu__DOT__addi__181__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__181__rd;
    __Vfunc_tb_mcu__DOT__addi__181__rd = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__addi__181__rs1;
    __Vfunc_tb_mcu__DOT__addi__181__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__addi__181__imm;
    __Vfunc_tb_mcu__DOT__addi__181__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_i__182__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_i__182__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_i__182__imm;
    __Vfunc_tb_mcu__DOT__enc_i__182__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__182__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__182__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_i__182__funct3;
    __Vfunc_tb_mcu__DOT__enc_i__182__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_i__182__rd;
    __Vfunc_tb_mcu__DOT__enc_i__182__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_i__182__opcode;
    __Vfunc_tb_mcu__DOT__enc_i__182__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__183__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__183__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__183__data;
    __Vtask_tb_mcu__DOT__write_ram_word__183__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__183__index;
    __Vtask_tb_mcu__DOT__write_ram_word__183__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__184__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__184__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__184__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__184__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__185__instr;
    __Vtask_tb_mcu__DOT__put_instr__185__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__sw__186__Vfuncout;
    __Vfunc_tb_mcu__DOT__sw__186__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__186__rs2;
    __Vfunc_tb_mcu__DOT__sw__186__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__sw__186__rs1;
    __Vfunc_tb_mcu__DOT__sw__186__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__sw__186__imm;
    __Vfunc_tb_mcu__DOT__sw__186__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_s__187__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_s__187__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_mcu__DOT__enc_s__187__imm;
    __Vfunc_tb_mcu__DOT__enc_s__187__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__187__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__187__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_s__187__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__187__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_mcu__DOT__enc_s__187__funct3;
    __Vfunc_tb_mcu__DOT__enc_s__187__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_s__187__opcode;
    __Vfunc_tb_mcu__DOT__enc_s__187__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__188__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__188__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__188__data;
    __Vtask_tb_mcu__DOT__write_ram_word__188__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__188__index;
    __Vtask_tb_mcu__DOT__write_ram_word__188__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__189__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__189__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__189__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__189__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__put_instr__190__instr;
    __Vtask_tb_mcu__DOT__put_instr__190__instr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__jal__191__Vfuncout;
    __Vfunc_tb_mcu__DOT__jal__191__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__jal__191__rd;
    __Vfunc_tb_mcu__DOT__jal__191__rd = 0;
    IData/*20:0*/ __Vfunc_tb_mcu__DOT__jal__191__imm;
    __Vfunc_tb_mcu__DOT__jal__191__imm = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__enc_j__192__Vfuncout;
    __Vfunc_tb_mcu__DOT__enc_j__192__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_mcu__DOT__enc_j__192__imm;
    __Vfunc_tb_mcu__DOT__enc_j__192__imm = 0;
    CData/*4:0*/ __Vfunc_tb_mcu__DOT__enc_j__192__rd;
    __Vfunc_tb_mcu__DOT__enc_j__192__rd = 0;
    CData/*6:0*/ __Vfunc_tb_mcu__DOT__enc_j__192__opcode;
    __Vfunc_tb_mcu__DOT__enc_j__192__opcode = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__193__wb_addr;
    __Vtask_tb_mcu__DOT__write_ram_word__193__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__193__data;
    __Vtask_tb_mcu__DOT__write_ram_word__193__data = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__write_ram_word__193__index;
    __Vtask_tb_mcu__DOT__write_ram_word__193__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__194__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__194__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__194__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__194__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__195__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__195__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__195__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__195__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__195__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__195__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__196__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__196__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__196__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__196__wb_addr = 0;
    std::string __Vtask_tb_mcu__DOT__wait_for_ram_word__197__name;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__wait_for_ram_word__197__wb_addr;
    __Vtask_tb_mcu__DOT__wait_for_ram_word__197__wb_addr = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__wait_for_ram_word__197__expected;
    __Vtask_tb_mcu__DOT__wait_for_ram_word__197__expected = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__wait_for_ram_word__197__timeout_cycles;
    __Vtask_tb_mcu__DOT__wait_for_ram_word__197__timeout_cycles = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__wait_for_ram_word__197__timeout;
    __Vtask_tb_mcu__DOT__wait_for_ram_word__197__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__198__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__198__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__198__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__198__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__198__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__198__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__199__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__199__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__199__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__199__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__200__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__200__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__200__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__200__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__200__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__200__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__201__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__201__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__201__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__201__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__202__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__202__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__202__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__202__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__202__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__202__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__203__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__203__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__203__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__203__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__204__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__204__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__204__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__204__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__204__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__204__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__205__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__205__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__205__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__205__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__206__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__206__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__206__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__206__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__206__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__206__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__207__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__207__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__207__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__207__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__208__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__208__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__208__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__208__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__208__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__208__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__209__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__209__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__209__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__209__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__210__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__210__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__210__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__210__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__210__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__210__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__211__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__211__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__211__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__211__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__212__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__212__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__212__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__212__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__212__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__212__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__213__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__213__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__213__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__213__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__214__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__214__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__214__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__214__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__214__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__214__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__215__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__215__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__215__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__215__wb_addr = 0;
    std::string __Vtask_tb_mcu__DOT__check32__216__name;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__216__actual;
    __Vtask_tb_mcu__DOT__check32__216__actual = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__216__expected;
    __Vtask_tb_mcu__DOT__check32__216__expected = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__217__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__217__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__217__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__217__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__217__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__217__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__218__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__218__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__218__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__218__wb_addr = 0;
    std::string __Vtask_tb_mcu__DOT__check32__219__name;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__219__actual;
    __Vtask_tb_mcu__DOT__check32__219__actual = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__219__expected;
    __Vtask_tb_mcu__DOT__check32__219__expected = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__220__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__220__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__220__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__220__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__220__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__220__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__221__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__221__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__221__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__221__wb_addr = 0;
    std::string __Vtask_tb_mcu__DOT__check32__222__name;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__222__actual;
    __Vtask_tb_mcu__DOT__check32__222__actual = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__222__expected;
    __Vtask_tb_mcu__DOT__check32__222__expected = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__223__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__223__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__223__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__223__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__223__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__223__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__224__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__224__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__224__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__224__wb_addr = 0;
    std::string __Vtask_tb_mcu__DOT__check32__225__name;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__225__actual;
    __Vtask_tb_mcu__DOT__check32__225__actual = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__225__expected;
    __Vtask_tb_mcu__DOT__check32__225__expected = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__226__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__226__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__226__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__226__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__226__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__226__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__227__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__227__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__227__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__227__wb_addr = 0;
    std::string __Vtask_tb_mcu__DOT__check32__228__name;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__228__actual;
    __Vtask_tb_mcu__DOT__check32__228__actual = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__228__expected;
    __Vtask_tb_mcu__DOT__check32__228__expected = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__229__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__229__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__229__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__229__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__229__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__229__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__230__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__230__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__230__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__230__wb_addr = 0;
    std::string __Vtask_tb_mcu__DOT__check32__231__name;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__231__actual;
    __Vtask_tb_mcu__DOT__check32__231__actual = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__231__expected;
    __Vtask_tb_mcu__DOT__check32__231__expected = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__232__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__232__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__232__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__232__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__232__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__232__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__233__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__233__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__233__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__233__wb_addr = 0;
    std::string __Vtask_tb_mcu__DOT__check32__234__name;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__234__actual;
    __Vtask_tb_mcu__DOT__check32__234__actual = 0;
    IData/*31:0*/ __Vtask_tb_mcu__DOT__check32__234__expected;
    __Vtask_tb_mcu__DOT__check32__234__expected = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__235__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__235__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__235__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__235__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__235__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__235__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__236__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__236__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__236__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__236__wb_addr = 0;
    std::string __Vtask_tb_mcu__DOT__check16__237__name;
    SData/*15:0*/ __Vtask_tb_mcu__DOT__check16__237__actual;
    __Vtask_tb_mcu__DOT__check16__237__actual = 0;
    SData/*15:0*/ __Vtask_tb_mcu__DOT__check16__237__expected;
    __Vtask_tb_mcu__DOT__check16__237__expected = 0;
    // Body
    vlSelf->tb_mcu__DOT__pass_count = 0U;
    vlSelf->tb_mcu__DOT__fail_count = 0U;
    vlSelf->tb_mcu__DOT__buttons_async = 0x16U;
    vlSelf->tb_mcu__DOT__buttons_async = (0x1eU & (IData)(vlSelf->tb_mcu__DOT__buttons_async));
    vlSelf->tb_mcu__DOT__switches_async = 0xcafeU;
    vlSelf->tb_mcu__DOT__uart_rx_async = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       494);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       494);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       494);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       494);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n============================================================\nMCU INTEGRATION TEST\n============================================================\n");
    vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceEn = 1U;
    vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceVal = 1U;
    vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceRd = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       402);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7882__0.trigger(
                                                       "@(negedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       404);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_mcu__DOT__clear_ram__2__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_mcu__DOT__clear_ram__2__i)) {
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__clear_ram__2__i)] = 0U;
        __Vtask_tb_mcu__DOT__clear_ram__2__i = ((IData)(1U) 
                                                + __Vtask_tb_mcu__DOT__clear_ram__2__i);
    }
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 0x10000U;
    __Vtask_tb_mcu__DOT__emit_li__3__value = 0x10200U;
    __Vtask_tb_mcu__DOT__emit_li__3__rd = 0xaU;
    __Vtask_tb_mcu__DOT__emit_li__3__rounded = ((IData)(0x800U) 
                                                + __Vtask_tb_mcu__DOT__emit_li__3__value);
    __Vtask_tb_mcu__DOT__emit_li__3__upper20 = (__Vtask_tb_mcu__DOT__emit_li__3__rounded 
                                                >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__3__upper_value = 
        (__Vtask_tb_mcu__DOT__emit_li__3__upper20 << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__3__lower_diff = (__Vtask_tb_mcu__DOT__emit_li__3__value 
                                                   - __Vtask_tb_mcu__DOT__emit_li__3__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__3__lower12 = (0xfffU 
                                                & __Vtask_tb_mcu__DOT__emit_li__3__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__5__imm20 = __Vtask_tb_mcu__DOT__emit_li__3__upper20;
    __Vfunc_tb_mcu__DOT__lui__5__rd = __Vtask_tb_mcu__DOT__emit_li__3__rd;
    __Vfunc_tb_mcu__DOT__enc_u__6__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__6__rd = __Vfunc_tb_mcu__DOT__lui__5__rd;
    __Vfunc_tb_mcu__DOT__enc_u__6__imm20 = __Vfunc_tb_mcu__DOT__lui__5__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__6__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__6__imm20 
                                                << 0xcU) 
                                               | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__6__rd) 
                                                   << 7U) 
                                                  | (IData)(__Vfunc_tb_mcu__DOT__enc_u__6__opcode)));
    __Vfunc_tb_mcu__DOT__lui__5__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__6__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__4__instr = __Vfunc_tb_mcu__DOT__lui__5__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__7__data = __Vtask_tb_mcu__DOT__put_instr__4__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__7__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__8__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__7__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__8__Vfuncout = (__Vfunc_tb_mcu__DOT__ram_index__8__wb_addr 
                                                   - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__7__index = __Vfunc_tb_mcu__DOT__ram_index__8__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__7__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__7__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__7__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__7__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__7__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__3__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__10__imm = __Vtask_tb_mcu__DOT__emit_li__3__lower12;
        __Vfunc_tb_mcu__DOT__addi__10__rs1 = __Vtask_tb_mcu__DOT__emit_li__3__rd;
        __Vfunc_tb_mcu__DOT__addi__10__rd = __Vtask_tb_mcu__DOT__emit_li__3__rd;
        __Vfunc_tb_mcu__DOT__enc_i__11__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__11__rd = __Vfunc_tb_mcu__DOT__addi__10__rd;
        __Vfunc_tb_mcu__DOT__enc_i__11__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__11__rs1 = __Vfunc_tb_mcu__DOT__addi__10__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__11__imm = __Vfunc_tb_mcu__DOT__addi__10__imm;
        __Vfunc_tb_mcu__DOT__enc_i__11__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__11__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__11__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__11__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__11__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__11__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__10__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__11__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__9__instr = __Vfunc_tb_mcu__DOT__addi__10__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__12__data 
            = __Vtask_tb_mcu__DOT__put_instr__9__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__12__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__13__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__12__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__13__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__13__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__12__index 
            = __Vfunc_tb_mcu__DOT__ram_index__13__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__12__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__12__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__12__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__12__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__12__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vtask_tb_mcu__DOT__emit_li__14__value = 0x11111111U;
    __Vtask_tb_mcu__DOT__emit_li__14__rd = 1U;
    __Vtask_tb_mcu__DOT__emit_li__14__rounded = ((IData)(0x800U) 
                                                 + __Vtask_tb_mcu__DOT__emit_li__14__value);
    __Vtask_tb_mcu__DOT__emit_li__14__upper20 = (__Vtask_tb_mcu__DOT__emit_li__14__rounded 
                                                 >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__14__upper_value = 
        (__Vtask_tb_mcu__DOT__emit_li__14__upper20 
         << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__14__lower_diff = 
        (__Vtask_tb_mcu__DOT__emit_li__14__value - __Vtask_tb_mcu__DOT__emit_li__14__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__14__lower12 = (0xfffU 
                                                 & __Vtask_tb_mcu__DOT__emit_li__14__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__16__imm20 = __Vtask_tb_mcu__DOT__emit_li__14__upper20;
    __Vfunc_tb_mcu__DOT__lui__16__rd = __Vtask_tb_mcu__DOT__emit_li__14__rd;
    __Vfunc_tb_mcu__DOT__enc_u__17__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__17__rd = __Vfunc_tb_mcu__DOT__lui__16__rd;
    __Vfunc_tb_mcu__DOT__enc_u__17__imm20 = __Vfunc_tb_mcu__DOT__lui__16__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__17__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__17__imm20 
                                                 << 0xcU) 
                                                | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__17__rd) 
                                                    << 7U) 
                                                   | (IData)(__Vfunc_tb_mcu__DOT__enc_u__17__opcode)));
    __Vfunc_tb_mcu__DOT__lui__16__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__17__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__15__instr = __Vfunc_tb_mcu__DOT__lui__16__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__18__data = __Vtask_tb_mcu__DOT__put_instr__15__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__18__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__19__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__18__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__19__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__19__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__18__index 
        = __Vfunc_tb_mcu__DOT__ram_index__19__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__18__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__18__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__18__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__18__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__18__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__14__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__21__imm = __Vtask_tb_mcu__DOT__emit_li__14__lower12;
        __Vfunc_tb_mcu__DOT__addi__21__rs1 = __Vtask_tb_mcu__DOT__emit_li__14__rd;
        __Vfunc_tb_mcu__DOT__addi__21__rd = __Vtask_tb_mcu__DOT__emit_li__14__rd;
        __Vfunc_tb_mcu__DOT__enc_i__22__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__22__rd = __Vfunc_tb_mcu__DOT__addi__21__rd;
        __Vfunc_tb_mcu__DOT__enc_i__22__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__22__rs1 = __Vfunc_tb_mcu__DOT__addi__21__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__22__imm = __Vfunc_tb_mcu__DOT__addi__21__imm;
        __Vfunc_tb_mcu__DOT__enc_i__22__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__22__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__22__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__22__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__22__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__22__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__21__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__22__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__20__instr = __Vfunc_tb_mcu__DOT__addi__21__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__23__data 
            = __Vtask_tb_mcu__DOT__put_instr__20__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__23__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__24__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__23__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__24__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__24__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__23__index 
            = __Vfunc_tb_mcu__DOT__ram_index__24__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__23__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__23__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__23__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__23__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__23__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vfunc_tb_mcu__DOT__sw__26__imm = 0U;
    __Vfunc_tb_mcu__DOT__sw__26__rs1 = 0xaU;
    __Vfunc_tb_mcu__DOT__sw__26__rs2 = 1U;
    __Vfunc_tb_mcu__DOT__enc_s__27__opcode = 0x23U;
    __Vfunc_tb_mcu__DOT__enc_s__27__funct3 = 2U;
    __Vfunc_tb_mcu__DOT__enc_s__27__rs1 = __Vfunc_tb_mcu__DOT__sw__26__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__27__rs2 = __Vfunc_tb_mcu__DOT__sw__26__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__27__imm = __Vfunc_tb_mcu__DOT__sw__26__imm;
    __Vfunc_tb_mcu__DOT__enc_s__27__Vfuncout = ((0xfe000000U 
                                                 & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__27__imm) 
                                                    << 0x14U)) 
                                                | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__27__rs2) 
                                                    << 0x14U) 
                                                   | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__27__rs1) 
                                                       << 0xfU) 
                                                      | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__27__funct3) 
                                                          << 0xcU) 
                                                         | ((0xf80U 
                                                             & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__27__imm) 
                                                                << 7U)) 
                                                            | (IData)(__Vfunc_tb_mcu__DOT__enc_s__27__opcode))))));
    __Vfunc_tb_mcu__DOT__sw__26__Vfuncout = __Vfunc_tb_mcu__DOT__enc_s__27__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__25__instr = __Vfunc_tb_mcu__DOT__sw__26__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__28__data = __Vtask_tb_mcu__DOT__put_instr__25__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__28__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__29__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__28__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__29__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__29__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__28__index 
        = __Vfunc_tb_mcu__DOT__ram_index__29__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__28__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__28__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__28__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__28__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__28__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    __Vtask_tb_mcu__DOT__emit_li__30__value = 0x80000U;
    __Vtask_tb_mcu__DOT__emit_li__30__rd = 0xbU;
    __Vtask_tb_mcu__DOT__emit_li__30__rounded = ((IData)(0x800U) 
                                                 + __Vtask_tb_mcu__DOT__emit_li__30__value);
    __Vtask_tb_mcu__DOT__emit_li__30__upper20 = (__Vtask_tb_mcu__DOT__emit_li__30__rounded 
                                                 >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__30__upper_value = 
        (__Vtask_tb_mcu__DOT__emit_li__30__upper20 
         << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__30__lower_diff = 
        (__Vtask_tb_mcu__DOT__emit_li__30__value - __Vtask_tb_mcu__DOT__emit_li__30__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__30__lower12 = (0xfffU 
                                                 & __Vtask_tb_mcu__DOT__emit_li__30__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__32__imm20 = __Vtask_tb_mcu__DOT__emit_li__30__upper20;
    __Vfunc_tb_mcu__DOT__lui__32__rd = __Vtask_tb_mcu__DOT__emit_li__30__rd;
    __Vfunc_tb_mcu__DOT__enc_u__33__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__33__rd = __Vfunc_tb_mcu__DOT__lui__32__rd;
    __Vfunc_tb_mcu__DOT__enc_u__33__imm20 = __Vfunc_tb_mcu__DOT__lui__32__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__33__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__33__imm20 
                                                 << 0xcU) 
                                                | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__33__rd) 
                                                    << 7U) 
                                                   | (IData)(__Vfunc_tb_mcu__DOT__enc_u__33__opcode)));
    __Vfunc_tb_mcu__DOT__lui__32__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__33__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__31__instr = __Vfunc_tb_mcu__DOT__lui__32__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__34__data = __Vtask_tb_mcu__DOT__put_instr__31__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__34__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__35__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__34__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__35__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__35__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__34__index 
        = __Vfunc_tb_mcu__DOT__ram_index__35__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__34__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__34__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__34__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__34__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__34__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__30__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__37__imm = __Vtask_tb_mcu__DOT__emit_li__30__lower12;
        __Vfunc_tb_mcu__DOT__addi__37__rs1 = __Vtask_tb_mcu__DOT__emit_li__30__rd;
        __Vfunc_tb_mcu__DOT__addi__37__rd = __Vtask_tb_mcu__DOT__emit_li__30__rd;
        __Vfunc_tb_mcu__DOT__enc_i__38__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__38__rd = __Vfunc_tb_mcu__DOT__addi__37__rd;
        __Vfunc_tb_mcu__DOT__enc_i__38__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__38__rs1 = __Vfunc_tb_mcu__DOT__addi__37__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__38__imm = __Vfunc_tb_mcu__DOT__addi__37__imm;
        __Vfunc_tb_mcu__DOT__enc_i__38__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__38__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__38__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__38__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__38__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__38__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__37__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__38__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__36__instr = __Vfunc_tb_mcu__DOT__addi__37__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__39__data 
            = __Vtask_tb_mcu__DOT__put_instr__36__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__39__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__40__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__39__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__40__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__40__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__39__index 
            = __Vfunc_tb_mcu__DOT__ram_index__40__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__39__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__39__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__39__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__39__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__39__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vtask_tb_mcu__DOT__emit_li__41__value = 0xa5a5U;
    __Vtask_tb_mcu__DOT__emit_li__41__rd = 2U;
    __Vtask_tb_mcu__DOT__emit_li__41__rounded = ((IData)(0x800U) 
                                                 + __Vtask_tb_mcu__DOT__emit_li__41__value);
    __Vtask_tb_mcu__DOT__emit_li__41__upper20 = (__Vtask_tb_mcu__DOT__emit_li__41__rounded 
                                                 >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__41__upper_value = 
        (__Vtask_tb_mcu__DOT__emit_li__41__upper20 
         << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__41__lower_diff = 
        (__Vtask_tb_mcu__DOT__emit_li__41__value - __Vtask_tb_mcu__DOT__emit_li__41__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__41__lower12 = (0xfffU 
                                                 & __Vtask_tb_mcu__DOT__emit_li__41__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__43__imm20 = __Vtask_tb_mcu__DOT__emit_li__41__upper20;
    __Vfunc_tb_mcu__DOT__lui__43__rd = __Vtask_tb_mcu__DOT__emit_li__41__rd;
    __Vfunc_tb_mcu__DOT__enc_u__44__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__44__rd = __Vfunc_tb_mcu__DOT__lui__43__rd;
    __Vfunc_tb_mcu__DOT__enc_u__44__imm20 = __Vfunc_tb_mcu__DOT__lui__43__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__44__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__44__imm20 
                                                 << 0xcU) 
                                                | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__44__rd) 
                                                    << 7U) 
                                                   | (IData)(__Vfunc_tb_mcu__DOT__enc_u__44__opcode)));
    __Vfunc_tb_mcu__DOT__lui__43__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__44__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__42__instr = __Vfunc_tb_mcu__DOT__lui__43__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__45__data = __Vtask_tb_mcu__DOT__put_instr__42__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__45__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__46__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__45__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__46__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__46__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__45__index 
        = __Vfunc_tb_mcu__DOT__ram_index__46__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__45__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__45__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__45__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__45__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__45__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__41__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__48__imm = __Vtask_tb_mcu__DOT__emit_li__41__lower12;
        __Vfunc_tb_mcu__DOT__addi__48__rs1 = __Vtask_tb_mcu__DOT__emit_li__41__rd;
        __Vfunc_tb_mcu__DOT__addi__48__rd = __Vtask_tb_mcu__DOT__emit_li__41__rd;
        __Vfunc_tb_mcu__DOT__enc_i__49__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__49__rd = __Vfunc_tb_mcu__DOT__addi__48__rd;
        __Vfunc_tb_mcu__DOT__enc_i__49__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__49__rs1 = __Vfunc_tb_mcu__DOT__addi__48__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__49__imm = __Vfunc_tb_mcu__DOT__addi__48__imm;
        __Vfunc_tb_mcu__DOT__enc_i__49__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__49__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__49__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__49__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__49__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__49__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__48__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__49__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__47__instr = __Vfunc_tb_mcu__DOT__addi__48__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__50__data 
            = __Vtask_tb_mcu__DOT__put_instr__47__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__50__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__51__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__50__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__51__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__51__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__50__index 
            = __Vfunc_tb_mcu__DOT__ram_index__51__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__50__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__50__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__50__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__50__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__50__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vfunc_tb_mcu__DOT__sw__53__imm = 0U;
    __Vfunc_tb_mcu__DOT__sw__53__rs1 = 0xbU;
    __Vfunc_tb_mcu__DOT__sw__53__rs2 = 2U;
    __Vfunc_tb_mcu__DOT__enc_s__54__opcode = 0x23U;
    __Vfunc_tb_mcu__DOT__enc_s__54__funct3 = 2U;
    __Vfunc_tb_mcu__DOT__enc_s__54__rs1 = __Vfunc_tb_mcu__DOT__sw__53__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__54__rs2 = __Vfunc_tb_mcu__DOT__sw__53__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__54__imm = __Vfunc_tb_mcu__DOT__sw__53__imm;
    __Vfunc_tb_mcu__DOT__enc_s__54__Vfuncout = ((0xfe000000U 
                                                 & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__54__imm) 
                                                    << 0x14U)) 
                                                | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__54__rs2) 
                                                    << 0x14U) 
                                                   | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__54__rs1) 
                                                       << 0xfU) 
                                                      | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__54__funct3) 
                                                          << 0xcU) 
                                                         | ((0xf80U 
                                                             & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__54__imm) 
                                                                << 7U)) 
                                                            | (IData)(__Vfunc_tb_mcu__DOT__enc_s__54__opcode))))));
    __Vfunc_tb_mcu__DOT__sw__53__Vfuncout = __Vfunc_tb_mcu__DOT__enc_s__54__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__52__instr = __Vfunc_tb_mcu__DOT__sw__53__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__55__data = __Vtask_tb_mcu__DOT__put_instr__52__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__55__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__56__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__55__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__56__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__56__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__55__index 
        = __Vfunc_tb_mcu__DOT__ram_index__56__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__55__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__55__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__55__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__55__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__55__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    __Vtask_tb_mcu__DOT__emit_li__57__value = 0x22222222U;
    __Vtask_tb_mcu__DOT__emit_li__57__rd = 3U;
    __Vtask_tb_mcu__DOT__emit_li__57__rounded = ((IData)(0x800U) 
                                                 + __Vtask_tb_mcu__DOT__emit_li__57__value);
    __Vtask_tb_mcu__DOT__emit_li__57__upper20 = (__Vtask_tb_mcu__DOT__emit_li__57__rounded 
                                                 >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__57__upper_value = 
        (__Vtask_tb_mcu__DOT__emit_li__57__upper20 
         << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__57__lower_diff = 
        (__Vtask_tb_mcu__DOT__emit_li__57__value - __Vtask_tb_mcu__DOT__emit_li__57__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__57__lower12 = (0xfffU 
                                                 & __Vtask_tb_mcu__DOT__emit_li__57__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__59__imm20 = __Vtask_tb_mcu__DOT__emit_li__57__upper20;
    __Vfunc_tb_mcu__DOT__lui__59__rd = __Vtask_tb_mcu__DOT__emit_li__57__rd;
    __Vfunc_tb_mcu__DOT__enc_u__60__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__60__rd = __Vfunc_tb_mcu__DOT__lui__59__rd;
    __Vfunc_tb_mcu__DOT__enc_u__60__imm20 = __Vfunc_tb_mcu__DOT__lui__59__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__60__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__60__imm20 
                                                 << 0xcU) 
                                                | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__60__rd) 
                                                    << 7U) 
                                                   | (IData)(__Vfunc_tb_mcu__DOT__enc_u__60__opcode)));
    __Vfunc_tb_mcu__DOT__lui__59__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__60__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__58__instr = __Vfunc_tb_mcu__DOT__lui__59__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__61__data = __Vtask_tb_mcu__DOT__put_instr__58__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__61__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__62__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__61__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__62__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__62__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__61__index 
        = __Vfunc_tb_mcu__DOT__ram_index__62__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__61__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__61__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__61__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__61__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__61__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__57__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__64__imm = __Vtask_tb_mcu__DOT__emit_li__57__lower12;
        __Vfunc_tb_mcu__DOT__addi__64__rs1 = __Vtask_tb_mcu__DOT__emit_li__57__rd;
        __Vfunc_tb_mcu__DOT__addi__64__rd = __Vtask_tb_mcu__DOT__emit_li__57__rd;
        __Vfunc_tb_mcu__DOT__enc_i__65__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__65__rd = __Vfunc_tb_mcu__DOT__addi__64__rd;
        __Vfunc_tb_mcu__DOT__enc_i__65__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__65__rs1 = __Vfunc_tb_mcu__DOT__addi__64__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__65__imm = __Vfunc_tb_mcu__DOT__addi__64__imm;
        __Vfunc_tb_mcu__DOT__enc_i__65__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__65__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__65__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__65__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__65__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__65__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__64__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__65__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__63__instr = __Vfunc_tb_mcu__DOT__addi__64__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__66__data 
            = __Vtask_tb_mcu__DOT__put_instr__63__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__66__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__67__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__66__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__67__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__67__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__66__index 
            = __Vfunc_tb_mcu__DOT__ram_index__67__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__66__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__66__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__66__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__66__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__66__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vfunc_tb_mcu__DOT__sw__69__imm = 4U;
    __Vfunc_tb_mcu__DOT__sw__69__rs1 = 0xaU;
    __Vfunc_tb_mcu__DOT__sw__69__rs2 = 3U;
    __Vfunc_tb_mcu__DOT__enc_s__70__opcode = 0x23U;
    __Vfunc_tb_mcu__DOT__enc_s__70__funct3 = 2U;
    __Vfunc_tb_mcu__DOT__enc_s__70__rs1 = __Vfunc_tb_mcu__DOT__sw__69__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__70__rs2 = __Vfunc_tb_mcu__DOT__sw__69__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__70__imm = __Vfunc_tb_mcu__DOT__sw__69__imm;
    __Vfunc_tb_mcu__DOT__enc_s__70__Vfuncout = ((0xfe000000U 
                                                 & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__70__imm) 
                                                    << 0x14U)) 
                                                | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__70__rs2) 
                                                    << 0x14U) 
                                                   | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__70__rs1) 
                                                       << 0xfU) 
                                                      | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__70__funct3) 
                                                          << 0xcU) 
                                                         | ((0xf80U 
                                                             & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__70__imm) 
                                                                << 7U)) 
                                                            | (IData)(__Vfunc_tb_mcu__DOT__enc_s__70__opcode))))));
    __Vfunc_tb_mcu__DOT__sw__69__Vfuncout = __Vfunc_tb_mcu__DOT__enc_s__70__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__68__instr = __Vfunc_tb_mcu__DOT__sw__69__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__71__data = __Vtask_tb_mcu__DOT__put_instr__68__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__71__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__72__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__71__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__72__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__72__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__71__index 
        = __Vfunc_tb_mcu__DOT__ram_index__72__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__71__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__71__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__71__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__71__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__71__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    __Vtask_tb_mcu__DOT__emit_li__73__value = 0x82000U;
    __Vtask_tb_mcu__DOT__emit_li__73__rd = 0xcU;
    __Vtask_tb_mcu__DOT__emit_li__73__rounded = ((IData)(0x800U) 
                                                 + __Vtask_tb_mcu__DOT__emit_li__73__value);
    __Vtask_tb_mcu__DOT__emit_li__73__upper20 = (__Vtask_tb_mcu__DOT__emit_li__73__rounded 
                                                 >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__73__upper_value = 
        (__Vtask_tb_mcu__DOT__emit_li__73__upper20 
         << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__73__lower_diff = 
        (__Vtask_tb_mcu__DOT__emit_li__73__value - __Vtask_tb_mcu__DOT__emit_li__73__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__73__lower12 = (0xfffU 
                                                 & __Vtask_tb_mcu__DOT__emit_li__73__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__75__imm20 = __Vtask_tb_mcu__DOT__emit_li__73__upper20;
    __Vfunc_tb_mcu__DOT__lui__75__rd = __Vtask_tb_mcu__DOT__emit_li__73__rd;
    __Vfunc_tb_mcu__DOT__enc_u__76__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__76__rd = __Vfunc_tb_mcu__DOT__lui__75__rd;
    __Vfunc_tb_mcu__DOT__enc_u__76__imm20 = __Vfunc_tb_mcu__DOT__lui__75__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__76__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__76__imm20 
                                                 << 0xcU) 
                                                | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__76__rd) 
                                                    << 7U) 
                                                   | (IData)(__Vfunc_tb_mcu__DOT__enc_u__76__opcode)));
    __Vfunc_tb_mcu__DOT__lui__75__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__76__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__74__instr = __Vfunc_tb_mcu__DOT__lui__75__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__77__data = __Vtask_tb_mcu__DOT__put_instr__74__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__77__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__78__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__77__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__78__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__78__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__77__index 
        = __Vfunc_tb_mcu__DOT__ram_index__78__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__77__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__77__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__77__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__77__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__77__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__73__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__80__imm = __Vtask_tb_mcu__DOT__emit_li__73__lower12;
        __Vfunc_tb_mcu__DOT__addi__80__rs1 = __Vtask_tb_mcu__DOT__emit_li__73__rd;
        __Vfunc_tb_mcu__DOT__addi__80__rd = __Vtask_tb_mcu__DOT__emit_li__73__rd;
        __Vfunc_tb_mcu__DOT__enc_i__81__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__81__rd = __Vfunc_tb_mcu__DOT__addi__80__rd;
        __Vfunc_tb_mcu__DOT__enc_i__81__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__81__rs1 = __Vfunc_tb_mcu__DOT__addi__80__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__81__imm = __Vfunc_tb_mcu__DOT__addi__80__imm;
        __Vfunc_tb_mcu__DOT__enc_i__81__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__81__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__81__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__81__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__81__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__81__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__80__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__81__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__79__instr = __Vfunc_tb_mcu__DOT__addi__80__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__82__data 
            = __Vtask_tb_mcu__DOT__put_instr__79__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__82__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__83__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__82__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__83__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__83__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__82__index 
            = __Vfunc_tb_mcu__DOT__ram_index__83__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__82__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__82__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__82__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__82__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__82__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vfunc_tb_mcu__DOT__lw__85__imm = 0U;
    __Vfunc_tb_mcu__DOT__lw__85__rs1 = 0xcU;
    __Vfunc_tb_mcu__DOT__lw__85__rd = 4U;
    __Vfunc_tb_mcu__DOT__enc_i__86__opcode = 3U;
    __Vfunc_tb_mcu__DOT__enc_i__86__rd = __Vfunc_tb_mcu__DOT__lw__85__rd;
    __Vfunc_tb_mcu__DOT__enc_i__86__funct3 = 2U;
    __Vfunc_tb_mcu__DOT__enc_i__86__rs1 = __Vfunc_tb_mcu__DOT__lw__85__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__86__imm = __Vfunc_tb_mcu__DOT__lw__85__imm;
    __Vfunc_tb_mcu__DOT__enc_i__86__Vfuncout = (((IData)(__Vfunc_tb_mcu__DOT__enc_i__86__imm) 
                                                 << 0x14U) 
                                                | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__86__rs1) 
                                                    << 0xfU) 
                                                   | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__86__funct3) 
                                                       << 0xcU) 
                                                      | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__86__rd) 
                                                          << 7U) 
                                                         | (IData)(__Vfunc_tb_mcu__DOT__enc_i__86__opcode)))));
    __Vfunc_tb_mcu__DOT__lw__85__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__86__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__84__instr = __Vfunc_tb_mcu__DOT__lw__85__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__87__data = __Vtask_tb_mcu__DOT__put_instr__84__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__87__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__88__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__87__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__88__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__88__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__87__index 
        = __Vfunc_tb_mcu__DOT__ram_index__88__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__87__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__87__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__87__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__87__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__87__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    __Vfunc_tb_mcu__DOT__sw__90__imm = 8U;
    __Vfunc_tb_mcu__DOT__sw__90__rs1 = 0xaU;
    __Vfunc_tb_mcu__DOT__sw__90__rs2 = 4U;
    __Vfunc_tb_mcu__DOT__enc_s__91__opcode = 0x23U;
    __Vfunc_tb_mcu__DOT__enc_s__91__funct3 = 2U;
    __Vfunc_tb_mcu__DOT__enc_s__91__rs1 = __Vfunc_tb_mcu__DOT__sw__90__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__91__rs2 = __Vfunc_tb_mcu__DOT__sw__90__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__91__imm = __Vfunc_tb_mcu__DOT__sw__90__imm;
    __Vfunc_tb_mcu__DOT__enc_s__91__Vfuncout = ((0xfe000000U 
                                                 & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__91__imm) 
                                                    << 0x14U)) 
                                                | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__91__rs2) 
                                                    << 0x14U) 
                                                   | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__91__rs1) 
                                                       << 0xfU) 
                                                      | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__91__funct3) 
                                                          << 0xcU) 
                                                         | ((0xf80U 
                                                             & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__91__imm) 
                                                                << 7U)) 
                                                            | (IData)(__Vfunc_tb_mcu__DOT__enc_s__91__opcode))))));
    __Vfunc_tb_mcu__DOT__sw__90__Vfuncout = __Vfunc_tb_mcu__DOT__enc_s__91__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__89__instr = __Vfunc_tb_mcu__DOT__sw__90__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__92__data = __Vtask_tb_mcu__DOT__put_instr__89__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__92__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__93__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__92__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__93__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__93__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__92__index 
        = __Vfunc_tb_mcu__DOT__ram_index__93__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__92__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__92__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__92__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__92__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__92__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    __Vtask_tb_mcu__DOT__emit_li__94__value = 0x81000U;
    __Vtask_tb_mcu__DOT__emit_li__94__rd = 0xdU;
    __Vtask_tb_mcu__DOT__emit_li__94__rounded = ((IData)(0x800U) 
                                                 + __Vtask_tb_mcu__DOT__emit_li__94__value);
    __Vtask_tb_mcu__DOT__emit_li__94__upper20 = (__Vtask_tb_mcu__DOT__emit_li__94__rounded 
                                                 >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__94__upper_value = 
        (__Vtask_tb_mcu__DOT__emit_li__94__upper20 
         << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__94__lower_diff = 
        (__Vtask_tb_mcu__DOT__emit_li__94__value - __Vtask_tb_mcu__DOT__emit_li__94__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__94__lower12 = (0xfffU 
                                                 & __Vtask_tb_mcu__DOT__emit_li__94__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__96__imm20 = __Vtask_tb_mcu__DOT__emit_li__94__upper20;
    __Vfunc_tb_mcu__DOT__lui__96__rd = __Vtask_tb_mcu__DOT__emit_li__94__rd;
    __Vfunc_tb_mcu__DOT__enc_u__97__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__97__rd = __Vfunc_tb_mcu__DOT__lui__96__rd;
    __Vfunc_tb_mcu__DOT__enc_u__97__imm20 = __Vfunc_tb_mcu__DOT__lui__96__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__97__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__97__imm20 
                                                 << 0xcU) 
                                                | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__97__rd) 
                                                    << 7U) 
                                                   | (IData)(__Vfunc_tb_mcu__DOT__enc_u__97__opcode)));
    __Vfunc_tb_mcu__DOT__lui__96__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__97__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__95__instr = __Vfunc_tb_mcu__DOT__lui__96__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__98__data = __Vtask_tb_mcu__DOT__put_instr__95__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__98__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__99__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__98__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__99__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__99__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__98__index 
        = __Vfunc_tb_mcu__DOT__ram_index__99__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__98__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__98__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__98__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__98__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__98__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__94__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__101__imm = __Vtask_tb_mcu__DOT__emit_li__94__lower12;
        __Vfunc_tb_mcu__DOT__addi__101__rs1 = __Vtask_tb_mcu__DOT__emit_li__94__rd;
        __Vfunc_tb_mcu__DOT__addi__101__rd = __Vtask_tb_mcu__DOT__emit_li__94__rd;
        __Vfunc_tb_mcu__DOT__enc_i__102__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__102__rd = __Vfunc_tb_mcu__DOT__addi__101__rd;
        __Vfunc_tb_mcu__DOT__enc_i__102__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__102__rs1 = __Vfunc_tb_mcu__DOT__addi__101__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__102__imm = __Vfunc_tb_mcu__DOT__addi__101__imm;
        __Vfunc_tb_mcu__DOT__enc_i__102__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__102__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__102__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__102__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__102__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__102__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__101__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__102__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__100__instr 
            = __Vfunc_tb_mcu__DOT__addi__101__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__103__data 
            = __Vtask_tb_mcu__DOT__put_instr__100__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__103__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__104__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__103__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__104__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__104__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__103__index 
            = __Vfunc_tb_mcu__DOT__ram_index__104__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__103__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__103__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__103__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__103__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__103__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vfunc_tb_mcu__DOT__lw__106__imm = 0U;
    __Vfunc_tb_mcu__DOT__lw__106__rs1 = 0xdU;
    __Vfunc_tb_mcu__DOT__lw__106__rd = 5U;
    __Vfunc_tb_mcu__DOT__enc_i__107__opcode = 3U;
    __Vfunc_tb_mcu__DOT__enc_i__107__rd = __Vfunc_tb_mcu__DOT__lw__106__rd;
    __Vfunc_tb_mcu__DOT__enc_i__107__funct3 = 2U;
    __Vfunc_tb_mcu__DOT__enc_i__107__rs1 = __Vfunc_tb_mcu__DOT__lw__106__rs1;
    __Vfunc_tb_mcu__DOT__enc_i__107__imm = __Vfunc_tb_mcu__DOT__lw__106__imm;
    __Vfunc_tb_mcu__DOT__enc_i__107__Vfuncout = (((IData)(__Vfunc_tb_mcu__DOT__enc_i__107__imm) 
                                                  << 0x14U) 
                                                 | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__107__rs1) 
                                                     << 0xfU) 
                                                    | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__107__funct3) 
                                                        << 0xcU) 
                                                       | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__107__rd) 
                                                           << 7U) 
                                                          | (IData)(__Vfunc_tb_mcu__DOT__enc_i__107__opcode)))));
    __Vfunc_tb_mcu__DOT__lw__106__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__107__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__105__instr = __Vfunc_tb_mcu__DOT__lw__106__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__108__data 
        = __Vtask_tb_mcu__DOT__put_instr__105__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__108__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__109__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__108__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__109__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__109__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__108__index 
        = __Vfunc_tb_mcu__DOT__ram_index__109__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__108__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__108__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__108__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__108__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__108__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    __Vfunc_tb_mcu__DOT__sw__111__imm = 0xcU;
    __Vfunc_tb_mcu__DOT__sw__111__rs1 = 0xaU;
    __Vfunc_tb_mcu__DOT__sw__111__rs2 = 5U;
    __Vfunc_tb_mcu__DOT__enc_s__112__opcode = 0x23U;
    __Vfunc_tb_mcu__DOT__enc_s__112__funct3 = 2U;
    __Vfunc_tb_mcu__DOT__enc_s__112__rs1 = __Vfunc_tb_mcu__DOT__sw__111__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__112__rs2 = __Vfunc_tb_mcu__DOT__sw__111__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__112__imm = __Vfunc_tb_mcu__DOT__sw__111__imm;
    __Vfunc_tb_mcu__DOT__enc_s__112__Vfuncout = ((0xfe000000U 
                                                  & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__112__imm) 
                                                     << 0x14U)) 
                                                 | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__112__rs2) 
                                                     << 0x14U) 
                                                    | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__112__rs1) 
                                                        << 0xfU) 
                                                       | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__112__funct3) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__112__imm) 
                                                                 << 7U)) 
                                                             | (IData)(__Vfunc_tb_mcu__DOT__enc_s__112__opcode))))));
    __Vfunc_tb_mcu__DOT__sw__111__Vfuncout = __Vfunc_tb_mcu__DOT__enc_s__112__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__110__instr = __Vfunc_tb_mcu__DOT__sw__111__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__113__data 
        = __Vtask_tb_mcu__DOT__put_instr__110__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__113__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__114__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__113__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__114__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__114__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__113__index 
        = __Vfunc_tb_mcu__DOT__ram_index__114__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__113__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__113__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__113__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__113__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__113__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    __Vtask_tb_mcu__DOT__emit_li__115__value = 0x1234abcdU;
    __Vtask_tb_mcu__DOT__emit_li__115__rd = 6U;
    __Vtask_tb_mcu__DOT__emit_li__115__rounded = ((IData)(0x800U) 
                                                  + __Vtask_tb_mcu__DOT__emit_li__115__value);
    __Vtask_tb_mcu__DOT__emit_li__115__upper20 = (__Vtask_tb_mcu__DOT__emit_li__115__rounded 
                                                  >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__115__upper_value 
        = (__Vtask_tb_mcu__DOT__emit_li__115__upper20 
           << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__115__lower_diff = 
        (__Vtask_tb_mcu__DOT__emit_li__115__value - __Vtask_tb_mcu__DOT__emit_li__115__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__115__lower12 = (0xfffU 
                                                  & __Vtask_tb_mcu__DOT__emit_li__115__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__117__imm20 = __Vtask_tb_mcu__DOT__emit_li__115__upper20;
    __Vfunc_tb_mcu__DOT__lui__117__rd = __Vtask_tb_mcu__DOT__emit_li__115__rd;
    __Vfunc_tb_mcu__DOT__enc_u__118__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__118__rd = __Vfunc_tb_mcu__DOT__lui__117__rd;
    __Vfunc_tb_mcu__DOT__enc_u__118__imm20 = __Vfunc_tb_mcu__DOT__lui__117__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__118__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__118__imm20 
                                                  << 0xcU) 
                                                 | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__118__rd) 
                                                     << 7U) 
                                                    | (IData)(__Vfunc_tb_mcu__DOT__enc_u__118__opcode)));
    __Vfunc_tb_mcu__DOT__lui__117__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__118__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__116__instr = __Vfunc_tb_mcu__DOT__lui__117__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__119__data 
        = __Vtask_tb_mcu__DOT__put_instr__116__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__119__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__120__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__119__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__120__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__120__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__119__index 
        = __Vfunc_tb_mcu__DOT__ram_index__120__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__119__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__119__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__119__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__119__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__119__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__115__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__122__imm = __Vtask_tb_mcu__DOT__emit_li__115__lower12;
        __Vfunc_tb_mcu__DOT__addi__122__rs1 = __Vtask_tb_mcu__DOT__emit_li__115__rd;
        __Vfunc_tb_mcu__DOT__addi__122__rd = __Vtask_tb_mcu__DOT__emit_li__115__rd;
        __Vfunc_tb_mcu__DOT__enc_i__123__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__123__rd = __Vfunc_tb_mcu__DOT__addi__122__rd;
        __Vfunc_tb_mcu__DOT__enc_i__123__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__123__rs1 = __Vfunc_tb_mcu__DOT__addi__122__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__123__imm = __Vfunc_tb_mcu__DOT__addi__122__imm;
        __Vfunc_tb_mcu__DOT__enc_i__123__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__123__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__123__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__123__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__123__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__123__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__122__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__123__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__121__instr 
            = __Vfunc_tb_mcu__DOT__addi__122__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__124__data 
            = __Vtask_tb_mcu__DOT__put_instr__121__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__124__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__125__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__124__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__125__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__125__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__124__index 
            = __Vfunc_tb_mcu__DOT__ram_index__125__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__124__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__124__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__124__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__124__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__124__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vfunc_tb_mcu__DOT__sw__127__imm = 0x10U;
    __Vfunc_tb_mcu__DOT__sw__127__rs1 = 0xaU;
    __Vfunc_tb_mcu__DOT__sw__127__rs2 = 6U;
    __Vfunc_tb_mcu__DOT__enc_s__128__opcode = 0x23U;
    __Vfunc_tb_mcu__DOT__enc_s__128__funct3 = 2U;
    __Vfunc_tb_mcu__DOT__enc_s__128__rs1 = __Vfunc_tb_mcu__DOT__sw__127__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__128__rs2 = __Vfunc_tb_mcu__DOT__sw__127__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__128__imm = __Vfunc_tb_mcu__DOT__sw__127__imm;
    __Vfunc_tb_mcu__DOT__enc_s__128__Vfuncout = ((0xfe000000U 
                                                  & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__128__imm) 
                                                     << 0x14U)) 
                                                 | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__128__rs2) 
                                                     << 0x14U) 
                                                    | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__128__rs1) 
                                                        << 0xfU) 
                                                       | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__128__funct3) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__128__imm) 
                                                                 << 7U)) 
                                                             | (IData)(__Vfunc_tb_mcu__DOT__enc_s__128__opcode))))));
    __Vfunc_tb_mcu__DOT__sw__127__Vfuncout = __Vfunc_tb_mcu__DOT__enc_s__128__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__126__instr = __Vfunc_tb_mcu__DOT__sw__127__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__129__data 
        = __Vtask_tb_mcu__DOT__put_instr__126__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__129__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__130__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__129__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__130__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__130__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__129__index 
        = __Vfunc_tb_mcu__DOT__ram_index__130__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__129__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__129__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__129__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__129__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__129__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    __Vtask_tb_mcu__DOT__emit_li__131__value = 0x83000U;
    __Vtask_tb_mcu__DOT__emit_li__131__rd = 0xeU;
    __Vtask_tb_mcu__DOT__emit_li__131__rounded = ((IData)(0x800U) 
                                                  + __Vtask_tb_mcu__DOT__emit_li__131__value);
    __Vtask_tb_mcu__DOT__emit_li__131__upper20 = (__Vtask_tb_mcu__DOT__emit_li__131__rounded 
                                                  >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__131__upper_value 
        = (__Vtask_tb_mcu__DOT__emit_li__131__upper20 
           << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__131__lower_diff = 
        (__Vtask_tb_mcu__DOT__emit_li__131__value - __Vtask_tb_mcu__DOT__emit_li__131__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__131__lower12 = (0xfffU 
                                                  & __Vtask_tb_mcu__DOT__emit_li__131__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__133__imm20 = __Vtask_tb_mcu__DOT__emit_li__131__upper20;
    __Vfunc_tb_mcu__DOT__lui__133__rd = __Vtask_tb_mcu__DOT__emit_li__131__rd;
    __Vfunc_tb_mcu__DOT__enc_u__134__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__134__rd = __Vfunc_tb_mcu__DOT__lui__133__rd;
    __Vfunc_tb_mcu__DOT__enc_u__134__imm20 = __Vfunc_tb_mcu__DOT__lui__133__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__134__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__134__imm20 
                                                  << 0xcU) 
                                                 | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__134__rd) 
                                                     << 7U) 
                                                    | (IData)(__Vfunc_tb_mcu__DOT__enc_u__134__opcode)));
    __Vfunc_tb_mcu__DOT__lui__133__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__134__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__132__instr = __Vfunc_tb_mcu__DOT__lui__133__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__135__data 
        = __Vtask_tb_mcu__DOT__put_instr__132__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__135__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__136__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__135__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__136__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__136__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__135__index 
        = __Vfunc_tb_mcu__DOT__ram_index__136__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__135__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__135__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__135__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__135__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__135__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__131__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__138__imm = __Vtask_tb_mcu__DOT__emit_li__131__lower12;
        __Vfunc_tb_mcu__DOT__addi__138__rs1 = __Vtask_tb_mcu__DOT__emit_li__131__rd;
        __Vfunc_tb_mcu__DOT__addi__138__rd = __Vtask_tb_mcu__DOT__emit_li__131__rd;
        __Vfunc_tb_mcu__DOT__enc_i__139__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__139__rd = __Vfunc_tb_mcu__DOT__addi__138__rd;
        __Vfunc_tb_mcu__DOT__enc_i__139__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__139__rs1 = __Vfunc_tb_mcu__DOT__addi__138__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__139__imm = __Vfunc_tb_mcu__DOT__addi__138__imm;
        __Vfunc_tb_mcu__DOT__enc_i__139__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__139__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__139__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__139__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__139__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__139__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__138__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__139__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__137__instr 
            = __Vfunc_tb_mcu__DOT__addi__138__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__140__data 
            = __Vtask_tb_mcu__DOT__put_instr__137__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__140__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__141__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__140__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__141__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__141__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__140__index 
            = __Vfunc_tb_mcu__DOT__ram_index__141__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__140__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__140__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__140__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__140__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__140__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vtask_tb_mcu__DOT__emit_li__142__value = 0x5a0fU;
    __Vtask_tb_mcu__DOT__emit_li__142__rd = 8U;
    __Vtask_tb_mcu__DOT__emit_li__142__rounded = ((IData)(0x800U) 
                                                  + __Vtask_tb_mcu__DOT__emit_li__142__value);
    __Vtask_tb_mcu__DOT__emit_li__142__upper20 = (__Vtask_tb_mcu__DOT__emit_li__142__rounded 
                                                  >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__142__upper_value 
        = (__Vtask_tb_mcu__DOT__emit_li__142__upper20 
           << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__142__lower_diff = 
        (__Vtask_tb_mcu__DOT__emit_li__142__value - __Vtask_tb_mcu__DOT__emit_li__142__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__142__lower12 = (0xfffU 
                                                  & __Vtask_tb_mcu__DOT__emit_li__142__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__144__imm20 = __Vtask_tb_mcu__DOT__emit_li__142__upper20;
    __Vfunc_tb_mcu__DOT__lui__144__rd = __Vtask_tb_mcu__DOT__emit_li__142__rd;
    __Vfunc_tb_mcu__DOT__enc_u__145__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__145__rd = __Vfunc_tb_mcu__DOT__lui__144__rd;
    __Vfunc_tb_mcu__DOT__enc_u__145__imm20 = __Vfunc_tb_mcu__DOT__lui__144__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__145__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__145__imm20 
                                                  << 0xcU) 
                                                 | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__145__rd) 
                                                     << 7U) 
                                                    | (IData)(__Vfunc_tb_mcu__DOT__enc_u__145__opcode)));
    __Vfunc_tb_mcu__DOT__lui__144__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__145__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__143__instr = __Vfunc_tb_mcu__DOT__lui__144__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__146__data 
        = __Vtask_tb_mcu__DOT__put_instr__143__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__146__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__147__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__146__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__147__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__147__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__146__index 
        = __Vfunc_tb_mcu__DOT__ram_index__147__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__146__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__146__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__146__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__146__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__146__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__142__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__149__imm = __Vtask_tb_mcu__DOT__emit_li__142__lower12;
        __Vfunc_tb_mcu__DOT__addi__149__rs1 = __Vtask_tb_mcu__DOT__emit_li__142__rd;
        __Vfunc_tb_mcu__DOT__addi__149__rd = __Vtask_tb_mcu__DOT__emit_li__142__rd;
        __Vfunc_tb_mcu__DOT__enc_i__150__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__150__rd = __Vfunc_tb_mcu__DOT__addi__149__rd;
        __Vfunc_tb_mcu__DOT__enc_i__150__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__150__rs1 = __Vfunc_tb_mcu__DOT__addi__149__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__150__imm = __Vfunc_tb_mcu__DOT__addi__149__imm;
        __Vfunc_tb_mcu__DOT__enc_i__150__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__150__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__150__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__150__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__150__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__150__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__149__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__150__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__148__instr 
            = __Vfunc_tb_mcu__DOT__addi__149__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__151__data 
            = __Vtask_tb_mcu__DOT__put_instr__148__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__151__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__152__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__151__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__152__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__152__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__151__index 
            = __Vfunc_tb_mcu__DOT__ram_index__152__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__151__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__151__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__151__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__151__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__151__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vfunc_tb_mcu__DOT__sw__154__imm = 0U;
    __Vfunc_tb_mcu__DOT__sw__154__rs1 = 0xeU;
    __Vfunc_tb_mcu__DOT__sw__154__rs2 = 8U;
    __Vfunc_tb_mcu__DOT__enc_s__155__opcode = 0x23U;
    __Vfunc_tb_mcu__DOT__enc_s__155__funct3 = 2U;
    __Vfunc_tb_mcu__DOT__enc_s__155__rs1 = __Vfunc_tb_mcu__DOT__sw__154__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__155__rs2 = __Vfunc_tb_mcu__DOT__sw__154__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__155__imm = __Vfunc_tb_mcu__DOT__sw__154__imm;
    __Vfunc_tb_mcu__DOT__enc_s__155__Vfuncout = ((0xfe000000U 
                                                  & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__155__imm) 
                                                     << 0x14U)) 
                                                 | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__155__rs2) 
                                                     << 0x14U) 
                                                    | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__155__rs1) 
                                                        << 0xfU) 
                                                       | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__155__funct3) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__155__imm) 
                                                                 << 7U)) 
                                                             | (IData)(__Vfunc_tb_mcu__DOT__enc_s__155__opcode))))));
    __Vfunc_tb_mcu__DOT__sw__154__Vfuncout = __Vfunc_tb_mcu__DOT__enc_s__155__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__153__instr = __Vfunc_tb_mcu__DOT__sw__154__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__156__data 
        = __Vtask_tb_mcu__DOT__put_instr__153__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__156__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__157__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__156__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__157__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__157__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__156__index 
        = __Vfunc_tb_mcu__DOT__ram_index__157__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__156__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__156__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__156__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__156__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__156__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    __Vtask_tb_mcu__DOT__emit_li__158__value = 0x33333333U;
    __Vtask_tb_mcu__DOT__emit_li__158__rd = 9U;
    __Vtask_tb_mcu__DOT__emit_li__158__rounded = ((IData)(0x800U) 
                                                  + __Vtask_tb_mcu__DOT__emit_li__158__value);
    __Vtask_tb_mcu__DOT__emit_li__158__upper20 = (__Vtask_tb_mcu__DOT__emit_li__158__rounded 
                                                  >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__158__upper_value 
        = (__Vtask_tb_mcu__DOT__emit_li__158__upper20 
           << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__158__lower_diff = 
        (__Vtask_tb_mcu__DOT__emit_li__158__value - __Vtask_tb_mcu__DOT__emit_li__158__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__158__lower12 = (0xfffU 
                                                  & __Vtask_tb_mcu__DOT__emit_li__158__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__160__imm20 = __Vtask_tb_mcu__DOT__emit_li__158__upper20;
    __Vfunc_tb_mcu__DOT__lui__160__rd = __Vtask_tb_mcu__DOT__emit_li__158__rd;
    __Vfunc_tb_mcu__DOT__enc_u__161__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__161__rd = __Vfunc_tb_mcu__DOT__lui__160__rd;
    __Vfunc_tb_mcu__DOT__enc_u__161__imm20 = __Vfunc_tb_mcu__DOT__lui__160__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__161__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__161__imm20 
                                                  << 0xcU) 
                                                 | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__161__rd) 
                                                     << 7U) 
                                                    | (IData)(__Vfunc_tb_mcu__DOT__enc_u__161__opcode)));
    __Vfunc_tb_mcu__DOT__lui__160__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__161__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__159__instr = __Vfunc_tb_mcu__DOT__lui__160__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__162__data 
        = __Vtask_tb_mcu__DOT__put_instr__159__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__162__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__163__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__162__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__163__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__163__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__162__index 
        = __Vfunc_tb_mcu__DOT__ram_index__163__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__162__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__162__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__162__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__162__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__162__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__158__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__165__imm = __Vtask_tb_mcu__DOT__emit_li__158__lower12;
        __Vfunc_tb_mcu__DOT__addi__165__rs1 = __Vtask_tb_mcu__DOT__emit_li__158__rd;
        __Vfunc_tb_mcu__DOT__addi__165__rd = __Vtask_tb_mcu__DOT__emit_li__158__rd;
        __Vfunc_tb_mcu__DOT__enc_i__166__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__166__rd = __Vfunc_tb_mcu__DOT__addi__165__rd;
        __Vfunc_tb_mcu__DOT__enc_i__166__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__166__rs1 = __Vfunc_tb_mcu__DOT__addi__165__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__166__imm = __Vfunc_tb_mcu__DOT__addi__165__imm;
        __Vfunc_tb_mcu__DOT__enc_i__166__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__166__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__166__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__166__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__166__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__166__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__165__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__166__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__164__instr 
            = __Vfunc_tb_mcu__DOT__addi__165__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__167__data 
            = __Vtask_tb_mcu__DOT__put_instr__164__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__167__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__168__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__167__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__168__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__168__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__167__index 
            = __Vfunc_tb_mcu__DOT__ram_index__168__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__167__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__167__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__167__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__167__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__167__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vfunc_tb_mcu__DOT__sw__170__imm = 0x14U;
    __Vfunc_tb_mcu__DOT__sw__170__rs1 = 0xaU;
    __Vfunc_tb_mcu__DOT__sw__170__rs2 = 9U;
    __Vfunc_tb_mcu__DOT__enc_s__171__opcode = 0x23U;
    __Vfunc_tb_mcu__DOT__enc_s__171__funct3 = 2U;
    __Vfunc_tb_mcu__DOT__enc_s__171__rs1 = __Vfunc_tb_mcu__DOT__sw__170__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__171__rs2 = __Vfunc_tb_mcu__DOT__sw__170__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__171__imm = __Vfunc_tb_mcu__DOT__sw__170__imm;
    __Vfunc_tb_mcu__DOT__enc_s__171__Vfuncout = ((0xfe000000U 
                                                  & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__171__imm) 
                                                     << 0x14U)) 
                                                 | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__171__rs2) 
                                                     << 0x14U) 
                                                    | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__171__rs1) 
                                                        << 0xfU) 
                                                       | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__171__funct3) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__171__imm) 
                                                                 << 7U)) 
                                                             | (IData)(__Vfunc_tb_mcu__DOT__enc_s__171__opcode))))));
    __Vfunc_tb_mcu__DOT__sw__170__Vfuncout = __Vfunc_tb_mcu__DOT__enc_s__171__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__169__instr = __Vfunc_tb_mcu__DOT__sw__170__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__172__data 
        = __Vtask_tb_mcu__DOT__put_instr__169__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__172__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__173__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__172__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__173__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__173__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__172__index 
        = __Vfunc_tb_mcu__DOT__ram_index__173__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__172__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__172__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__172__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__172__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__172__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    __Vtask_tb_mcu__DOT__emit_li__174__value = 0xcafebabeU;
    __Vtask_tb_mcu__DOT__emit_li__174__rd = 0xfU;
    __Vtask_tb_mcu__DOT__emit_li__174__rounded = ((IData)(0x800U) 
                                                  + __Vtask_tb_mcu__DOT__emit_li__174__value);
    __Vtask_tb_mcu__DOT__emit_li__174__upper20 = (__Vtask_tb_mcu__DOT__emit_li__174__rounded 
                                                  >> 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__174__upper_value 
        = (__Vtask_tb_mcu__DOT__emit_li__174__upper20 
           << 0xcU);
    __Vtask_tb_mcu__DOT__emit_li__174__lower_diff = 
        (__Vtask_tb_mcu__DOT__emit_li__174__value - __Vtask_tb_mcu__DOT__emit_li__174__upper_value);
    __Vtask_tb_mcu__DOT__emit_li__174__lower12 = (0xfffU 
                                                  & __Vtask_tb_mcu__DOT__emit_li__174__lower_diff);
    __Vfunc_tb_mcu__DOT__lui__176__imm20 = __Vtask_tb_mcu__DOT__emit_li__174__upper20;
    __Vfunc_tb_mcu__DOT__lui__176__rd = __Vtask_tb_mcu__DOT__emit_li__174__rd;
    __Vfunc_tb_mcu__DOT__enc_u__177__opcode = 0x37U;
    __Vfunc_tb_mcu__DOT__enc_u__177__rd = __Vfunc_tb_mcu__DOT__lui__176__rd;
    __Vfunc_tb_mcu__DOT__enc_u__177__imm20 = __Vfunc_tb_mcu__DOT__lui__176__imm20;
    __Vfunc_tb_mcu__DOT__enc_u__177__Vfuncout = ((__Vfunc_tb_mcu__DOT__enc_u__177__imm20 
                                                  << 0xcU) 
                                                 | (((IData)(__Vfunc_tb_mcu__DOT__enc_u__177__rd) 
                                                     << 7U) 
                                                    | (IData)(__Vfunc_tb_mcu__DOT__enc_u__177__opcode)));
    __Vfunc_tb_mcu__DOT__lui__176__Vfuncout = __Vfunc_tb_mcu__DOT__enc_u__177__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__175__instr = __Vfunc_tb_mcu__DOT__lui__176__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__178__data 
        = __Vtask_tb_mcu__DOT__put_instr__175__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__178__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__179__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__178__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__179__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__179__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__178__index 
        = __Vfunc_tb_mcu__DOT__ram_index__179__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__178__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__178__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__178__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__178__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__178__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    if ((0U != (IData)(__Vtask_tb_mcu__DOT__emit_li__174__lower12))) {
        __Vfunc_tb_mcu__DOT__addi__181__imm = __Vtask_tb_mcu__DOT__emit_li__174__lower12;
        __Vfunc_tb_mcu__DOT__addi__181__rs1 = __Vtask_tb_mcu__DOT__emit_li__174__rd;
        __Vfunc_tb_mcu__DOT__addi__181__rd = __Vtask_tb_mcu__DOT__emit_li__174__rd;
        __Vfunc_tb_mcu__DOT__enc_i__182__opcode = 0x13U;
        __Vfunc_tb_mcu__DOT__enc_i__182__rd = __Vfunc_tb_mcu__DOT__addi__181__rd;
        __Vfunc_tb_mcu__DOT__enc_i__182__funct3 = 0U;
        __Vfunc_tb_mcu__DOT__enc_i__182__rs1 = __Vfunc_tb_mcu__DOT__addi__181__rs1;
        __Vfunc_tb_mcu__DOT__enc_i__182__imm = __Vfunc_tb_mcu__DOT__addi__181__imm;
        __Vfunc_tb_mcu__DOT__enc_i__182__Vfuncout = 
            (((IData)(__Vfunc_tb_mcu__DOT__enc_i__182__imm) 
              << 0x14U) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__182__rs1) 
                            << 0xfU) | (((IData)(__Vfunc_tb_mcu__DOT__enc_i__182__funct3) 
                                         << 0xcU) | 
                                        (((IData)(__Vfunc_tb_mcu__DOT__enc_i__182__rd) 
                                          << 7U) | (IData)(__Vfunc_tb_mcu__DOT__enc_i__182__opcode)))));
        __Vfunc_tb_mcu__DOT__addi__181__Vfuncout = __Vfunc_tb_mcu__DOT__enc_i__182__Vfuncout;
        __Vtask_tb_mcu__DOT__put_instr__180__instr 
            = __Vfunc_tb_mcu__DOT__addi__181__Vfuncout;
        __Vtask_tb_mcu__DOT__write_ram_word__183__data 
            = __Vtask_tb_mcu__DOT__put_instr__180__instr;
        __Vtask_tb_mcu__DOT__write_ram_word__183__wb_addr 
            = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
        __Vfunc_tb_mcu__DOT__ram_index__184__wb_addr 
            = __Vtask_tb_mcu__DOT__write_ram_word__183__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__184__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__184__wb_addr 
               - (IData)(0x10000U));
        __Vtask_tb_mcu__DOT__write_ram_word__183__index 
            = __Vfunc_tb_mcu__DOT__ram_index__184__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__183__index))) {
            VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                      32,__Vtask_tb_mcu__DOT__write_ram_word__183__wb_addr,
                      32,__Vtask_tb_mcu__DOT__write_ram_word__183__index,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb_mcu.sv", 242, "");
        }
        vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                         & __Vtask_tb_mcu__DOT__write_ram_word__183__index)] 
            = __Vtask_tb_mcu__DOT__write_ram_word__183__data;
        __Vtask_tb_mcu__DOT__load_mcu_program__1__pc 
            = ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    }
    __Vfunc_tb_mcu__DOT__sw__186__imm = 0x18U;
    __Vfunc_tb_mcu__DOT__sw__186__rs1 = 0xaU;
    __Vfunc_tb_mcu__DOT__sw__186__rs2 = 0xfU;
    __Vfunc_tb_mcu__DOT__enc_s__187__opcode = 0x23U;
    __Vfunc_tb_mcu__DOT__enc_s__187__funct3 = 2U;
    __Vfunc_tb_mcu__DOT__enc_s__187__rs1 = __Vfunc_tb_mcu__DOT__sw__186__rs1;
    __Vfunc_tb_mcu__DOT__enc_s__187__rs2 = __Vfunc_tb_mcu__DOT__sw__186__rs2;
    __Vfunc_tb_mcu__DOT__enc_s__187__imm = __Vfunc_tb_mcu__DOT__sw__186__imm;
    __Vfunc_tb_mcu__DOT__enc_s__187__Vfuncout = ((0xfe000000U 
                                                  & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__187__imm) 
                                                     << 0x14U)) 
                                                 | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__187__rs2) 
                                                     << 0x14U) 
                                                    | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__187__rs1) 
                                                        << 0xfU) 
                                                       | (((IData)(__Vfunc_tb_mcu__DOT__enc_s__187__funct3) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((IData)(__Vfunc_tb_mcu__DOT__enc_s__187__imm) 
                                                                 << 7U)) 
                                                             | (IData)(__Vfunc_tb_mcu__DOT__enc_s__187__opcode))))));
    __Vfunc_tb_mcu__DOT__sw__186__Vfuncout = __Vfunc_tb_mcu__DOT__enc_s__187__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__185__instr = __Vfunc_tb_mcu__DOT__sw__186__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__188__data 
        = __Vtask_tb_mcu__DOT__put_instr__185__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__188__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__189__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__188__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__189__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__189__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__188__index 
        = __Vfunc_tb_mcu__DOT__ram_index__189__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__188__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__188__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__188__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__188__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__188__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    __Vfunc_tb_mcu__DOT__jal__191__imm = 0U;
    __Vfunc_tb_mcu__DOT__jal__191__rd = 0U;
    __Vfunc_tb_mcu__DOT__enc_j__192__opcode = 0x6fU;
    __Vfunc_tb_mcu__DOT__enc_j__192__rd = __Vfunc_tb_mcu__DOT__jal__191__rd;
    __Vfunc_tb_mcu__DOT__enc_j__192__imm = __Vfunc_tb_mcu__DOT__jal__191__imm;
    __Vfunc_tb_mcu__DOT__enc_j__192__Vfuncout = ((0x80000000U 
                                                  & (__Vfunc_tb_mcu__DOT__enc_j__192__imm 
                                                     << 0xbU)) 
                                                 | ((0x7fe00000U 
                                                     & (__Vfunc_tb_mcu__DOT__enc_j__192__imm 
                                                        << 0x14U)) 
                                                    | ((0x100000U 
                                                        & (__Vfunc_tb_mcu__DOT__enc_j__192__imm 
                                                           << 9U)) 
                                                       | ((0xff000U 
                                                           & __Vfunc_tb_mcu__DOT__enc_j__192__imm) 
                                                          | (((IData)(__Vfunc_tb_mcu__DOT__enc_j__192__rd) 
                                                              << 7U) 
                                                             | (IData)(__Vfunc_tb_mcu__DOT__enc_j__192__opcode))))));
    __Vfunc_tb_mcu__DOT__jal__191__Vfuncout = __Vfunc_tb_mcu__DOT__enc_j__192__Vfuncout;
    __Vtask_tb_mcu__DOT__put_instr__190__instr = __Vfunc_tb_mcu__DOT__jal__191__Vfuncout;
    __Vtask_tb_mcu__DOT__write_ram_word__193__data 
        = __Vtask_tb_mcu__DOT__put_instr__190__instr;
    __Vtask_tb_mcu__DOT__write_ram_word__193__wb_addr 
        = __Vtask_tb_mcu__DOT__load_mcu_program__1__pc;
    __Vfunc_tb_mcu__DOT__ram_index__194__wb_addr = __Vtask_tb_mcu__DOT__write_ram_word__193__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__194__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__194__wb_addr 
         - (IData)(0x10000U));
    __Vtask_tb_mcu__DOT__write_ram_word__193__index 
        = __Vfunc_tb_mcu__DOT__ram_index__194__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vtask_tb_mcu__DOT__write_ram_word__193__index))) {
        VL_WRITEF("[TB ERROR] RAM write out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n[%0t] %%Error: tb_mcu.sv:242: Assertion failed in %Ntb_mcu.write_ram_word\n",
                  32,__Vtask_tb_mcu__DOT__write_ram_word__193__wb_addr,
                  32,__Vtask_tb_mcu__DOT__write_ram_word__193__index,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 242, "");
    }
    vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory[(0x1fffU 
                                                     & __Vtask_tb_mcu__DOT__write_ram_word__193__index)] 
        = __Vtask_tb_mcu__DOT__write_ram_word__193__data;
    __Vtask_tb_mcu__DOT__load_mcu_program__1__pc = 
        ((IData)(1U) + __Vtask_tb_mcu__DOT__load_mcu_program__1__pc);
    VL_WRITEF("[TB] RESET_ADDRESS       = 0x00040000\n[TB] RESET_ADDRESS >> 2  = 0x00010000\n[TB] MEMORY_START        = 0x00010000\n");
    __Vfunc_tb_mcu__DOT__read_ram_word__195__wb_addr = 0x10000U;
    __Vfunc_tb_mcu__DOT__ram_index__196__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__195__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__196__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__196__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__195__index 
        = __Vfunc_tb_mcu__DOT__ram_index__196__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__195__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__195__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__195__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__195__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__195__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__195__index)];
    }
    VL_WRITEF("[TB] First instr preload = 0x%08x\n",
              32,__Vfunc_tb_mcu__DOT__read_ram_word__195__Vfuncout);
    vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceEn = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__rst = vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceVal;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                       "@(posedge tb_mcu.clk)", 
                                                       "tb_mcu.sv", 
                                                       414);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_mcu__DOT__wait_for_ram_word__197__timeout_cycles = 0xc350U;
    __Vtask_tb_mcu__DOT__wait_for_ram_word__197__expected = 0xcafebabeU;
    __Vtask_tb_mcu__DOT__wait_for_ram_word__197__wb_addr = 0x10218U;
    __Vtask_tb_mcu__DOT__wait_for_ram_word__197__name = 
        std::string{"MCU final marker"};
    {
        __Vtask_tb_mcu__DOT__wait_for_ram_word__197__timeout = 0U;
        __Vfunc_tb_mcu__DOT__read_ram_word__198__wb_addr 
            = __Vtask_tb_mcu__DOT__wait_for_ram_word__197__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__199__wb_addr 
            = __Vfunc_tb_mcu__DOT__read_ram_word__198__wb_addr;
        __Vfunc_tb_mcu__DOT__ram_index__199__Vfuncout 
            = (__Vfunc_tb_mcu__DOT__ram_index__199__wb_addr 
               - (IData)(0x10000U));
        __Vfunc_tb_mcu__DOT__read_ram_word__198__index 
            = __Vfunc_tb_mcu__DOT__ram_index__199__Vfuncout;
        if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__198__index))) {
            VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                      32,__Vfunc_tb_mcu__DOT__read_ram_word__198__wb_addr,
                      32,__Vfunc_tb_mcu__DOT__read_ram_word__198__index);
            __Vfunc_tb_mcu__DOT__read_ram_word__198__Vfuncout = 0xdeaddeadU;
        } else {
            __Vfunc_tb_mcu__DOT__read_ram_word__198__Vfuncout 
                = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
                [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__198__index)];
        }
        while ((__Vfunc_tb_mcu__DOT__read_ram_word__198__Vfuncout 
                != __Vtask_tb_mcu__DOT__wait_for_ram_word__197__expected)) {
            co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                               "@(posedge tb_mcu.clk)", 
                                                               "tb_mcu.sv", 
                                                               373);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_mcu__DOT__wait_for_ram_word__197__timeout 
                = ((IData)(1U) + __Vtask_tb_mcu__DOT__wait_for_ram_word__197__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_mcu__DOT__wait_for_ram_word__197__timeout, __Vtask_tb_mcu__DOT__wait_for_ram_word__197__timeout_cycles))) {
                __Vfunc_tb_mcu__DOT__read_ram_word__200__wb_addr 
                    = __Vtask_tb_mcu__DOT__wait_for_ram_word__197__wb_addr;
                __Vfunc_tb_mcu__DOT__ram_index__201__wb_addr 
                    = __Vfunc_tb_mcu__DOT__read_ram_word__200__wb_addr;
                __Vfunc_tb_mcu__DOT__ram_index__201__Vfuncout 
                    = (__Vfunc_tb_mcu__DOT__ram_index__201__wb_addr 
                       - (IData)(0x10000U));
                __Vfunc_tb_mcu__DOT__read_ram_word__200__index 
                    = __Vfunc_tb_mcu__DOT__ram_index__201__Vfuncout;
                if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__200__index))) {
                    VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                              32,__Vfunc_tb_mcu__DOT__read_ram_word__200__wb_addr,
                              32,__Vfunc_tb_mcu__DOT__read_ram_word__200__index);
                    __Vfunc_tb_mcu__DOT__read_ram_word__200__Vfuncout = 0xdeaddeadU;
                } else {
                    __Vfunc_tb_mcu__DOT__read_ram_word__200__Vfuncout 
                        = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
                        [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__200__index)];
                }
                VL_WRITEF("[FAIL] Timeout waiting for %@ at wb_addr=0x%08x actual=0x%08x expected=0x%08x\n",
                          -1,&(__Vtask_tb_mcu__DOT__wait_for_ram_word__197__name),
                          32,__Vtask_tb_mcu__DOT__wait_for_ram_word__197__wb_addr,
                          32,__Vfunc_tb_mcu__DOT__read_ram_word__200__Vfuncout,
                          32,__Vtask_tb_mcu__DOT__wait_for_ram_word__197__expected);
                vlSelf->tb_mcu__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_mcu__DOT__fail_count);
                goto __Vlabel1;
            }
            __Vfunc_tb_mcu__DOT__read_ram_word__198__wb_addr 
                = __Vtask_tb_mcu__DOT__wait_for_ram_word__197__wb_addr;
            __Vfunc_tb_mcu__DOT__ram_index__199__wb_addr 
                = __Vfunc_tb_mcu__DOT__read_ram_word__198__wb_addr;
            __Vfunc_tb_mcu__DOT__ram_index__199__Vfuncout 
                = (__Vfunc_tb_mcu__DOT__ram_index__199__wb_addr 
                   - (IData)(0x10000U));
            __Vfunc_tb_mcu__DOT__read_ram_word__198__index 
                = __Vfunc_tb_mcu__DOT__ram_index__199__Vfuncout;
            if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__198__index))) {
                VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                          32,__Vfunc_tb_mcu__DOT__read_ram_word__198__wb_addr,
                          32,__Vfunc_tb_mcu__DOT__read_ram_word__198__index);
                __Vfunc_tb_mcu__DOT__read_ram_word__198__Vfuncout = 0xdeaddeadU;
            } else {
                __Vfunc_tb_mcu__DOT__read_ram_word__198__Vfuncout 
                    = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
                    [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__198__index)];
            }
        }
        __Vlabel1: ;
    }
    VL_WRITEF("\n--- MCU RAM result dump ---\n");
    __Vfunc_tb_mcu__DOT__read_ram_word__202__wb_addr = 0x10200U;
    __Vfunc_tb_mcu__DOT__ram_index__203__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__202__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__203__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__203__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__202__index 
        = __Vfunc_tb_mcu__DOT__ram_index__203__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__202__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__202__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__202__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__202__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__202__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__202__index)];
    }
    VL_WRITEF("BOOT_MARKER    = 0x%08x\n",32,__Vfunc_tb_mcu__DOT__read_ram_word__202__Vfuncout);
    __Vfunc_tb_mcu__DOT__read_ram_word__204__wb_addr = 0x10204U;
    __Vfunc_tb_mcu__DOT__ram_index__205__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__204__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__205__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__205__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__204__index 
        = __Vfunc_tb_mcu__DOT__ram_index__205__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__204__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__204__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__204__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__204__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__204__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__204__index)];
    }
    VL_WRITEF("LED_MARKER     = 0x%08x\n",32,__Vfunc_tb_mcu__DOT__read_ram_word__204__Vfuncout);
    __Vfunc_tb_mcu__DOT__read_ram_word__206__wb_addr = 0x10208U;
    __Vfunc_tb_mcu__DOT__ram_index__207__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__206__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__207__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__207__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__206__index 
        = __Vfunc_tb_mcu__DOT__ram_index__207__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__206__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__206__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__206__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__206__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__206__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__206__index)];
    }
    VL_WRITEF("SWITCH_READ    = 0x%08x\n",32,__Vfunc_tb_mcu__DOT__read_ram_word__206__Vfuncout);
    __Vfunc_tb_mcu__DOT__read_ram_word__208__wb_addr = 0x1020cU;
    __Vfunc_tb_mcu__DOT__ram_index__209__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__208__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__209__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__209__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__208__index 
        = __Vfunc_tb_mcu__DOT__ram_index__209__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__208__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__208__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__208__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__208__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__208__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__208__index)];
    }
    VL_WRITEF("BUTTON_READ    = 0x%08x\n",32,__Vfunc_tb_mcu__DOT__read_ram_word__208__Vfuncout);
    __Vfunc_tb_mcu__DOT__read_ram_word__210__wb_addr = 0x10210U;
    __Vfunc_tb_mcu__DOT__ram_index__211__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__210__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__211__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__211__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__210__index 
        = __Vfunc_tb_mcu__DOT__ram_index__211__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__210__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__210__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__210__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__210__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__210__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__210__index)];
    }
    VL_WRITEF("RAM_WORD       = 0x%08x\n",32,__Vfunc_tb_mcu__DOT__read_ram_word__210__Vfuncout);
    __Vfunc_tb_mcu__DOT__read_ram_word__212__wb_addr = 0x10214U;
    __Vfunc_tb_mcu__DOT__ram_index__213__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__212__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__213__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__213__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__212__index 
        = __Vfunc_tb_mcu__DOT__ram_index__213__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__212__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__212__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__212__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__212__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__212__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__212__index)];
    }
    VL_WRITEF("SEGMENT_MARKER = 0x%08x\n",32,__Vfunc_tb_mcu__DOT__read_ram_word__212__Vfuncout);
    __Vfunc_tb_mcu__DOT__read_ram_word__214__wb_addr = 0x10218U;
    __Vfunc_tb_mcu__DOT__ram_index__215__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__214__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__215__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__215__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__214__index 
        = __Vfunc_tb_mcu__DOT__ram_index__215__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__214__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__214__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__214__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__214__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__214__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__214__index)];
    }
    VL_WRITEF("FINAL_MARKER   = 0x%08x\n",32,__Vfunc_tb_mcu__DOT__read_ram_word__214__Vfuncout);
    __Vtask_tb_mcu__DOT__check32__216__expected = 0x11111111U;
    __Vfunc_tb_mcu__DOT__read_ram_word__217__wb_addr = 0x10200U;
    __Vfunc_tb_mcu__DOT__ram_index__218__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__217__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__218__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__218__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__217__index 
        = __Vfunc_tb_mcu__DOT__ram_index__218__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__217__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__217__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__217__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__217__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__217__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__217__index)];
    }
    __Vtask_tb_mcu__DOT__check32__216__actual = __Vfunc_tb_mcu__DOT__read_ram_word__217__Vfuncout;
    __Vtask_tb_mcu__DOT__check32__216__name = std::string{"boot marker written through RAM"};
    if ((__Vtask_tb_mcu__DOT__check32__216__actual 
         != __Vtask_tb_mcu__DOT__check32__216__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_mcu__DOT__check32__216__name),
                  32,__Vtask_tb_mcu__DOT__check32__216__actual,
                  32,__Vtask_tb_mcu__DOT__check32__216__expected);
        vlSelf->tb_mcu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_mcu__DOT__check32__216__name));
        vlSelf->tb_mcu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__pass_count);
    }
    __Vtask_tb_mcu__DOT__check32__219__expected = 0x22222222U;
    __Vfunc_tb_mcu__DOT__read_ram_word__220__wb_addr = 0x10204U;
    __Vfunc_tb_mcu__DOT__ram_index__221__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__220__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__221__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__221__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__220__index 
        = __Vfunc_tb_mcu__DOT__ram_index__221__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__220__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__220__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__220__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__220__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__220__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__220__index)];
    }
    __Vtask_tb_mcu__DOT__check32__219__actual = __Vfunc_tb_mcu__DOT__read_ram_word__220__Vfuncout;
    __Vtask_tb_mcu__DOT__check32__219__name = std::string{"LED marker written through RAM"};
    if ((__Vtask_tb_mcu__DOT__check32__219__actual 
         != __Vtask_tb_mcu__DOT__check32__219__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_mcu__DOT__check32__219__name),
                  32,__Vtask_tb_mcu__DOT__check32__219__actual,
                  32,__Vtask_tb_mcu__DOT__check32__219__expected);
        vlSelf->tb_mcu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_mcu__DOT__check32__219__name));
        vlSelf->tb_mcu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__pass_count);
    }
    __Vtask_tb_mcu__DOT__check32__222__expected = 0xcafeU;
    __Vfunc_tb_mcu__DOT__read_ram_word__223__wb_addr = 0x10208U;
    __Vfunc_tb_mcu__DOT__ram_index__224__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__223__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__224__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__224__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__223__index 
        = __Vfunc_tb_mcu__DOT__ram_index__224__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__223__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__223__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__223__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__223__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__223__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__223__index)];
    }
    __Vtask_tb_mcu__DOT__check32__222__actual = __Vfunc_tb_mcu__DOT__read_ram_word__223__Vfuncout;
    __Vtask_tb_mcu__DOT__check32__222__name = std::string{"switches readback stored to RAM"};
    if ((__Vtask_tb_mcu__DOT__check32__222__actual 
         != __Vtask_tb_mcu__DOT__check32__222__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_mcu__DOT__check32__222__name),
                  32,__Vtask_tb_mcu__DOT__check32__222__actual,
                  32,__Vtask_tb_mcu__DOT__check32__222__expected);
        vlSelf->tb_mcu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_mcu__DOT__check32__222__name));
        vlSelf->tb_mcu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__pass_count);
    }
    __Vtask_tb_mcu__DOT__check32__225__expected = 0x16U;
    __Vfunc_tb_mcu__DOT__read_ram_word__226__wb_addr = 0x1020cU;
    __Vfunc_tb_mcu__DOT__ram_index__227__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__226__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__227__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__227__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__226__index 
        = __Vfunc_tb_mcu__DOT__ram_index__227__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__226__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__226__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__226__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__226__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__226__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__226__index)];
    }
    __Vtask_tb_mcu__DOT__check32__225__actual = __Vfunc_tb_mcu__DOT__read_ram_word__226__Vfuncout;
    __Vtask_tb_mcu__DOT__check32__225__name = std::string{"buttons readback stored to RAM"};
    if ((__Vtask_tb_mcu__DOT__check32__225__actual 
         != __Vtask_tb_mcu__DOT__check32__225__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_mcu__DOT__check32__225__name),
                  32,__Vtask_tb_mcu__DOT__check32__225__actual,
                  32,__Vtask_tb_mcu__DOT__check32__225__expected);
        vlSelf->tb_mcu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_mcu__DOT__check32__225__name));
        vlSelf->tb_mcu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__pass_count);
    }
    __Vtask_tb_mcu__DOT__check32__228__expected = 0x1234abcdU;
    __Vfunc_tb_mcu__DOT__read_ram_word__229__wb_addr = 0x10210U;
    __Vfunc_tb_mcu__DOT__ram_index__230__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__229__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__230__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__230__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__229__index 
        = __Vfunc_tb_mcu__DOT__ram_index__230__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__229__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__229__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__229__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__229__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__229__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__229__index)];
    }
    __Vtask_tb_mcu__DOT__check32__228__actual = __Vfunc_tb_mcu__DOT__read_ram_word__229__Vfuncout;
    __Vtask_tb_mcu__DOT__check32__228__name = std::string{"RAM word store through MCU RAM"};
    if ((__Vtask_tb_mcu__DOT__check32__228__actual 
         != __Vtask_tb_mcu__DOT__check32__228__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_mcu__DOT__check32__228__name),
                  32,__Vtask_tb_mcu__DOT__check32__228__actual,
                  32,__Vtask_tb_mcu__DOT__check32__228__expected);
        vlSelf->tb_mcu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_mcu__DOT__check32__228__name));
        vlSelf->tb_mcu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__pass_count);
    }
    __Vtask_tb_mcu__DOT__check32__231__expected = 0x33333333U;
    __Vfunc_tb_mcu__DOT__read_ram_word__232__wb_addr = 0x10214U;
    __Vfunc_tb_mcu__DOT__ram_index__233__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__232__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__233__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__233__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__232__index 
        = __Vfunc_tb_mcu__DOT__ram_index__233__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__232__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__232__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__232__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__232__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__232__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__232__index)];
    }
    __Vtask_tb_mcu__DOT__check32__231__actual = __Vfunc_tb_mcu__DOT__read_ram_word__232__Vfuncout;
    __Vtask_tb_mcu__DOT__check32__231__name = std::string{"segment marker written through RAM"};
    if ((__Vtask_tb_mcu__DOT__check32__231__actual 
         != __Vtask_tb_mcu__DOT__check32__231__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_mcu__DOT__check32__231__name),
                  32,__Vtask_tb_mcu__DOT__check32__231__actual,
                  32,__Vtask_tb_mcu__DOT__check32__231__expected);
        vlSelf->tb_mcu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_mcu__DOT__check32__231__name));
        vlSelf->tb_mcu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__pass_count);
    }
    __Vtask_tb_mcu__DOT__check32__234__expected = 0xcafebabeU;
    __Vfunc_tb_mcu__DOT__read_ram_word__235__wb_addr = 0x10218U;
    __Vfunc_tb_mcu__DOT__ram_index__236__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__235__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__236__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__236__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__235__index 
        = __Vfunc_tb_mcu__DOT__ram_index__236__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__235__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__235__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__235__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__235__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__235__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__235__index)];
    }
    __Vtask_tb_mcu__DOT__check32__234__actual = __Vfunc_tb_mcu__DOT__read_ram_word__235__Vfuncout;
    __Vtask_tb_mcu__DOT__check32__234__name = std::string{"final marker written through RAM"};
    if ((__Vtask_tb_mcu__DOT__check32__234__actual 
         != __Vtask_tb_mcu__DOT__check32__234__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_mcu__DOT__check32__234__name),
                  32,__Vtask_tb_mcu__DOT__check32__234__actual,
                  32,__Vtask_tb_mcu__DOT__check32__234__expected);
        vlSelf->tb_mcu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_mcu__DOT__check32__234__name));
        vlSelf->tb_mcu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__pass_count);
    }
    __Vtask_tb_mcu__DOT__check16__237__expected = 0xa5a5U;
    __Vtask_tb_mcu__DOT__check16__237__actual = vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__leds_reg;
    __Vtask_tb_mcu__DOT__check16__237__name = std::string{"LED output peripheral"};
    if (((IData)(__Vtask_tb_mcu__DOT__check16__237__actual) 
         != (IData)(__Vtask_tb_mcu__DOT__check16__237__expected))) {
        VL_WRITEF("[FAIL] %@: actual=0x%04x expected=0x%04x\n",
                  -1,&(__Vtask_tb_mcu__DOT__check16__237__name),
                  16,(IData)(__Vtask_tb_mcu__DOT__check16__237__actual),
                  16,__Vtask_tb_mcu__DOT__check16__237__expected);
        vlSelf->tb_mcu__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_mcu__DOT__check16__237__name));
        vlSelf->tb_mcu__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->tb_mcu__DOT__pass_count);
    }
    VL_WRITEF("[PASS] seven-segment outputs are driven: segments=0x%02x select=0x%01x\n",
              8,(0xffU & ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                           ? ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                               ? ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                   ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                       ? 0xffU : (~ vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg))
                                   : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                       ? (~ (vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                                             >> 8U))
                                       : 0xffU)) : 
                              ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                    ? (~ (vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                                          >> 0x10U))
                                    : 0xffU) : 0xffU))
                           : ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                               ? ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                   ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                       ? (~ (vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                                             >> 0x18U))
                                       : 0xffU) : 0xffU)
                               : 0xffU))),4,(IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg));
    vlSelf->tb_mcu__DOT__pass_count = ((IData)(1U) 
                                       + vlSelf->tb_mcu__DOT__pass_count);
    VL_WRITEF("[PASS] UART TX is driven: uart_tx=%0b\n",
              1,((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                 | ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                    | ((2U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                       & ((3U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                          | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg))))));
    vlSelf->tb_mcu__DOT__pass_count = ((IData)(1U) 
                                       + vlSelf->tb_mcu__DOT__pass_count);
    VL_WRITEF("[PASS] VGA outputs are driven\n");
    vlSelf->tb_mcu__DOT__pass_count = ((IData)(1U) 
                                       + vlSelf->tb_mcu__DOT__pass_count);
    VL_WRITEF("\n========================================\nCOMPREHENSIVE MCU TEST SUMMARY\nPASSED: %0d\nFAILED: %0d\n========================================\n",
              32,vlSelf->tb_mcu__DOT__pass_count,32,
              vlSelf->tb_mcu__DOT__fail_count);
    if ((0U == vlSelf->tb_mcu__DOT__fail_count)) {
        VL_WRITEF("ALL MCU TESTS PASSED\n");
        VL_FINISH_MT("tb_mcu.sv", 561, "");
    } else {
        VL_WRITEF("MCU TESTS FAILED\n[%0t] %%Error: tb_mcu.sv:564: Assertion failed in %Ntb_mcu\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mcu.sv", 564, "");
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_mcu___024root___eval_initial__TOP__4(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_initial__TOP__4\n"); );
    // Init
    IData/*31:0*/ tb_mcu__DOT____Vrepeat3;
    tb_mcu__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__238__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__238__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__238__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__238__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__238__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__238__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__239__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__239__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__239__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__239__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__240__Vfuncout;
    __Vfunc_tb_mcu__DOT__read_ram_word__240__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__240__wb_addr;
    __Vfunc_tb_mcu__DOT__read_ram_word__240__wb_addr = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__read_ram_word__240__index;
    __Vfunc_tb_mcu__DOT__read_ram_word__240__index = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__241__Vfuncout;
    __Vfunc_tb_mcu__DOT__ram_index__241__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mcu__DOT__ram_index__241__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__241__wb_addr = 0;
    // Body
    tb_mcu__DOT____Vrepeat3 = 0x1d4c0U;
    while (VL_LTS_III(32, 0U, tb_mcu__DOT____Vrepeat3)) {
        co_await vlSelf->__VtrigSched_h6b8a7bc3__0.trigger(
                                                           "@(posedge tb_mcu.clk)", 
                                                           "tb_mcu.sv", 
                                                           574);
        tb_mcu__DOT____Vrepeat3 = (tb_mcu__DOT____Vrepeat3 
                                   - (IData)(1U));
    }
    VL_WRITEF("[FAIL] Global MCU simulation timeout\n");
    __Vfunc_tb_mcu__DOT__read_ram_word__238__wb_addr = 0x10200U;
    __Vfunc_tb_mcu__DOT__ram_index__239__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__238__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__239__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__239__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__238__index 
        = __Vfunc_tb_mcu__DOT__ram_index__239__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__238__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__238__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__238__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__238__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__238__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__238__index)];
    }
    VL_WRITEF("BOOT_MARKER    currently = 0x%08x\n",
              32,__Vfunc_tb_mcu__DOT__read_ram_word__238__Vfuncout);
    __Vfunc_tb_mcu__DOT__read_ram_word__240__wb_addr = 0x10218U;
    __Vfunc_tb_mcu__DOT__ram_index__241__wb_addr = __Vfunc_tb_mcu__DOT__read_ram_word__240__wb_addr;
    __Vfunc_tb_mcu__DOT__ram_index__241__Vfuncout = 
        (__Vfunc_tb_mcu__DOT__ram_index__241__wb_addr 
         - (IData)(0x10000U));
    __Vfunc_tb_mcu__DOT__read_ram_word__240__index 
        = __Vfunc_tb_mcu__DOT__ram_index__241__Vfuncout;
    if (VL_UNLIKELY((0x2000U <= __Vfunc_tb_mcu__DOT__read_ram_word__240__index))) {
        VL_WRITEF("[TB ERROR] RAM read out of range wb_addr=0x%08x index=%0# MEMORY_START=0x00010000\n",
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__240__wb_addr,
                  32,__Vfunc_tb_mcu__DOT__read_ram_word__240__index);
        __Vfunc_tb_mcu__DOT__read_ram_word__240__Vfuncout = 0xdeaddeadU;
    } else {
        __Vfunc_tb_mcu__DOT__read_ram_word__240__Vfuncout 
            = vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory
            [(0x1fffU & __Vfunc_tb_mcu__DOT__read_ram_word__240__index)];
    }
    VL_WRITEF("FINAL_MARKER   currently = 0x%08x\nLEDs           currently = 0x%04x\n[%0t] %%Error: tb_mcu.sv:579: Assertion failed in %Ntb_mcu\n",
              32,__Vfunc_tb_mcu__DOT__read_ram_word__240__Vfuncout,
              16,(IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__leds_reg),
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("tb_mcu.sv", 579, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mcu___024root___dump_triggers__act(Vtb_mcu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mcu___024root___eval_triggers__act(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->tb_mcu__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk)));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->tb_mcu__DOT__clk_mem) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk_mem)));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->tb_mcu__DOT__clk_vga) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk_vga)));
    vlSelf->__VactTriggered.at(4U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__VactTriggered.at(5U) = ((~ (IData)(vlSelf->tb_mcu__DOT__clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk));
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op;
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk = vlSelf->tb_mcu__DOT__clk;
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk_mem 
        = vlSelf->tb_mcu__DOT__clk_mem;
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk_vga 
        = vlSelf->tb_mcu__DOT__clk_vga;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mcu___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_mcu___024root___act_sequent__TOP__0(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb = 0xfU;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb = 0U;
    if ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb 
            = (0xfffffffcU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr);
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_store_data;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_sel;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_store;
    } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb 
            = (0xfffffffcU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data);
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__store_data_comb;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select 
        = ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
             & ((0x120000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                & (0x120005U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
            << 8U) | ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                        & ((0x90000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                           & (0x99600U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
                       << 7U) | ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                   & ((0x85000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                      & (0x85005U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
                                  << 6U) | ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                              & ((0x84000U 
                                                  <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                                 & (0x84001U 
                                                    > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
                                             << 5U) 
                                            | ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                                 & ((0x83000U 
                                                     <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                                    & (0x83001U 
                                                       > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
                                                << 4U) 
                                               | ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                                    & ((0x82000U 
                                                        <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                                       & (0x82001U 
                                                          > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
                                                   << 3U) 
                                                  | ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                                       & ((0x81000U 
                                                           <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                                          & (0x81001U 
                                                             > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                                          & ((0x80000U 
                                                              <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                                             & (0x80001U 
                                                                > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                                           & ((0x10000U 
                                                               <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                                              & (0x12000U 
                                                                 > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)))))))))));
    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.stb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb) 
           & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select));
    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.stb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb) 
           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
              >> 2U));
    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.stb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb) 
           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
              >> 3U));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack 
        = ((0x1fcU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack)) 
           | ((0xfffffffeU & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                              & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.ack) 
                                 << 1U))) | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                                             & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.ack))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack 
        = ((0x1f3U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack)) 
           | ((0xfffffff8U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                              & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.ack) 
                                 << 3U))) | (0xfffffffcU 
                                             & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                                                & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.ack) 
                                                   << 2U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack 
        = ((0x1cfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack)) 
           | ((0xffffffe0U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                              & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.ack) 
                                 << 5U))) | (0xfffffff0U 
                                             & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                                                & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.ack) 
                                                   << 4U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack 
        = ((0x13fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack)) 
           | ((0xffffff80U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                              & ((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state) 
                                 << 7U))) | (0xffffffc0U 
                                             & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                                                & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.ack) 
                                                   << 6U)))));
    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.stb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb) 
           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
              >> 1U));
    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.stb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb) 
           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
              >> 4U));
    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.stb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb) 
           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
              >> 6U));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err 
        = ((0x1fcU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err)) 
           | ((0xfffffffeU & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                              & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.err) 
                                 << 1U))) | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                                             & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.err))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err 
        = ((0x1f3U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err)) 
           | ((0xfffffff8U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                              & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.err) 
                                 << 3U))) | (0xfffffffcU 
                                             & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                                                & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.err) 
                                                   << 2U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err 
        = ((0x1cfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err)) 
           | ((0xffffffe0U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                              & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.err) 
                                 << 5U))) | (0xfffffff0U 
                                             & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                                                & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.err) 
                                                   << 4U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err 
        = ((0x13fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err)) 
           | ((0xffffff80U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                              & ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state) 
                                 << 7U))) | (0xffffffc0U 
                                             & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                                                & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.err) 
                                                   << 6U)))));
    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET__.stb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb) 
           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
              >> 7U));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[0U] 
        = (IData)((((QData)((IData)(((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                      ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.dat_miso
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                       ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.dat_miso
                                       : 0U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[1U] 
        = (IData)(((((QData)((IData)(((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                       ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.dat_miso
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                        ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.dat_miso
                                        : 0U)))) >> 0x20U));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[2U] 
        = (IData)((((QData)((IData)(((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                      ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.dat_miso
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                       ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.dat_miso
                                       : 0U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[3U] 
        = (IData)(((((QData)((IData)(((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                       ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.dat_miso
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                        ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.dat_miso
                                        : 0U)))) >> 0x20U));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[4U] 
        = (IData)((((QData)((IData)(((0x20U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                      ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.dat_miso
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((0x10U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                       ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.dat_miso
                                       : 0U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[5U] 
        = (IData)(((((QData)((IData)(((0x20U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                       ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.dat_miso
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((0x10U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                        ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.dat_miso
                                        : 0U)))) >> 0x20U));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[6U] 
        = (IData)((((QData)((IData)(((0x80U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                      ? vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT____Vcellout__vga_memory__wb_read_data
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((0x40U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                       ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.dat_miso
                                       : 0U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[7U] 
        = (IData)(((((QData)((IData)(((0x80U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                       ? vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT____Vcellout__vga_memory__wb_read_data
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((0x40U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
                                        ? vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.dat_miso
                                        : 0U)))) >> 0x20U));
    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__.stb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb) 
           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
              >> 8U));
    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.stb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb) 
           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
              >> 5U));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__wb_write_sel 
        = (((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.stb)) 
               & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.ack))) 
              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.err))) 
             & ((0x80000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                & (0x80001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
            & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))
            ? (0xfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb))
            : 0U);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__wb_write_sel 
        = (((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.stb)) 
               & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.ack))) 
              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.err))) 
             & ((0x83000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                & (0x83001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
            & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))
            ? (0xfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb))
            : 0U);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel 
        = (((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.stb)) 
               & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.ack))) 
              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.err))) 
             & ((0x85000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                & (0x85005U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
            & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))
            ? (0xfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb))
            : 0U);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__next_state 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__wishbone_we = 0U;
    if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state)) {
        if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
             & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET__.stb))) {
            if (((0x90000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                 & (0x99600U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) {
                if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb) {
                    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__next_state = 2U;
                    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__wishbone_we 
                        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb;
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__next_state = 3U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__next_state = 1U;
            }
        }
    } else {
        vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__next_state 
            = ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state)
                ? 0U : ((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state)
                         ? 0U : ((3U == vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state)
                                  ? 2U : 0U)));
    }
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel 
        = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
            & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__.stb)) 
           & (4U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb 
                     - (IData)(0x120000U))));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel 
        = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
            & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__.stb)) 
           & (0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb 
                     - (IData)(0x120000U))));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel 
        = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
            & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__.stb)) 
           & (1U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb 
                     - (IData)(0x120000U))));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel 
        = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
            & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__.stb)) 
           & (2U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb 
                     - (IData)(0x120000U))));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_sel 
        = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
            & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__.stb)) 
           & (3U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb 
                     - (IData)(0x120000U))));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access 
        = (((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
              & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.stb)) 
             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.ack))) 
            & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.err))) 
           & ((0x84000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
              & (0x84001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err 
        = ((0xffU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err)) 
           | (0xffffff00U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                             & (((((0x120000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                   & (0x120005U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)) 
                                  & (~ ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel) 
                                        | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel) 
                                           | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel) 
                                              | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel) 
                                                 | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_sel))))))) 
                                 | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel) 
                                    & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count)))) 
                                << 8U))));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_ack 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_sel) 
           & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count)));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer 
        = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
            & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb)) 
           & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_status 
        = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
            & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb)) 
           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb) 
              >> 3U));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer 
        = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
            & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))) 
           & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_rx_status 
        = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
            & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb)) 
           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb) 
              >> 2U));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__err 
        = ((0U != (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err)) 
           | ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb)) 
               & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))) 
              | (0xffU == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__count))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack 
        = ((0xffU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack)) 
           | (0xffffff00U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select) 
                             & (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel) 
                                 | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel) 
                                    | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel) 
                                       | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_ack)))) 
                                << 8U))));
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[8U] 
        = ((0x100U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select))
            ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel)
                ? vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter
                : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel)
                    ? vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter
                    : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_ack)
                        ? vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_reg
                        : 0U))) : 0U);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_sig 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg;
    if (((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state) 
         & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer) 
            & (5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)))) {
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_sig 
            = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_full 
        = ((0U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state) 
           & ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state)
               ? (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer) 
                   & (5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state))
                   ? 1U : 0U) : (2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state)));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_sig 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_reg;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_sig 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_reg;
    if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_rx_status) {
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_sig 
            = (1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                     >> 0x11U));
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_sig 
            = (1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                     >> 0x19U));
    }
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
        = vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[0U];
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
        = (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
           | vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[1U]);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
        = (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
           | vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[2U]);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
        = (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
           | vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[3U]);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
        = (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
           | vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[4U]);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
        = (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
           | vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[5U]);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
        = (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
           | vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[6U]);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
        = (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
           | vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[7U]);
    vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
        = (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
           | vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso[8U]);
    vlSelf->tb_mcu__DOT__dut__DOT__external_interrupt 
        = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_enable) 
            & (0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter)) 
           | (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_full) 
               & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_sig)) 
              | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_empty) 
                 & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_sig))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_load_value_comb 
        = ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[2U])
            ? vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso
            : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U] 
                >> 0x1fU) ? vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso
                : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U])
                    ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U])
                        ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U])
                            ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U])
                                ? vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso
                                : ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr)
                                    ? (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                       >> 0x10U) : 
                                   (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso)))
                            : ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U])
                                ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr)
                                    ? ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr)
                                        ? (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                           >> 0x18U)
                                        : (0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                            >> 0x10U)))
                                    : ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr)
                                        ? (0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                            >> 8U))
                                        : (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso)))
                                : vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso))
                        : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U])
                            ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U])
                                ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr)
                                    ? (((- (IData)(
                                                   (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                    >> 0x1fU))) 
                                        << 0x10U) | 
                                       (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                        >> 0x10U)) : 
                                   (((- (IData)((1U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                    >> 0xfU)))) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso)))
                                : ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr)
                                    ? ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr)
                                        ? (((- (IData)(
                                                       (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                        >> 0x1fU))) 
                                            << 8U) 
                                           | (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                              >> 0x18U))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                           >> 0x17U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                 >> 0x10U))))
                                    : ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                           >> 0xfU)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                 >> 8U)))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso)))))
                            : vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso))
                    : vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso)));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__live_load_value_comb 
        = ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U])
            ? vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso
            : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                >> 0x1fU) ? vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso
                : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                    ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                        ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                            ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                                ? vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso
                                : ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                    ? (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                       >> 0x10U) : 
                                   (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso)))
                            : ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                                ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                    ? ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                        ? (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                           >> 0x18U)
                                        : (0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                            >> 0x10U)))
                                    : ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                        ? (0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                            >> 8U))
                                        : (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso)))
                                : vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso))
                        : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                            ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                                ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                    ? (((- (IData)(
                                                   (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                    >> 0x1fU))) 
                                        << 0x10U) | 
                                       (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                        >> 0x10U)) : 
                                   (((- (IData)((1U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                    >> 0xfU)))) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso)))
                                : ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                    ? ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                        ? (((- (IData)(
                                                       (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                        >> 0x1fU))) 
                                            << 8U) 
                                           | (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                              >> 0x18U))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                           >> 0x17U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                 >> 0x10U))))
                                    : ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                           >> 0xfU)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                 >> 8U)))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso)))))
                            : vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso))
                    : vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso)));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__external_interrupt_taken 
        = ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
            >> 3U) & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie 
                       >> 0xbU) & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__external_interrupt)));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_cause = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_taken = 0U;
    if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__external_interrupt_taken) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_cause = 0x8000000bU;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_taken = 1U;
    } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__timer_interrupt_taken) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_cause = 0x80000007U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_taken = 1U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_tval = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_cause = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken = 0U;
    if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_taken) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_tval = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_cause 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_cause;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken = 1U;
    } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__pipeline_exception) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_tval 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_cause 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken = 1U;
    } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_hc0a4638a__0) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_tval = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_cause = 0xbU;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken = 1U;
    } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_hcb080270__0) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_tval = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_cause = 3U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken = 1U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_writes_rd_comb = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_rd_data_comb 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data;
    if ((((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
          & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken))) 
         & (0x2fU != (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                          >> 0x1bU)))))) {
        if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__is_csr) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_writes_rd_comb 
                = (0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                   >> 0x16U)));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_rd_data_comb 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data;
        } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__writes_rd_normal) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_writes_rd_comb 
                = (0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                   >> 0x16U)));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_rd_data_comb 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data;
        }
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_address = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken = 0U;
    if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_address 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtvec;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken = 1U;
    } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_h8f4b082b__0) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_address 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mepc;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken = 1U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_jump_address_out 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
            ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_address
            : 0U);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard 
        = ((~ ((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                        ? 2U : 0U)) | (2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out)))) 
           & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op 
        = ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state)) 
           & ((2U != ((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                               ? 2U : 0U)) ? 2U : 0U)) 
              & ((~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__access_misaligned)) 
                 & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__valid_memory_op))));
    if ((2U == ((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                         ? 2U : 0U)) ? 2U : 0U))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_jump_address_out 
            = ((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                        ? 2U : 0U)) ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_jump_address_out
                : 0U);
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_backwards_out = 2U;
    } else {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_jump_address_out = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_backwards_out 
            = (((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state)) 
                | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op))
                ? 1U : 0U);
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_status_in 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard)
            ? 1U : (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in = 0U;
    if ((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                 ? 2U : 0U))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in = 2U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_jump_address_out;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_jump_address_out;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in = 2U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_jump_address_out;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in = 2U;
    } else if ((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in = 2U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_out;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_out;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in = 2U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in = 0U;
    } else if ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_backwards_out))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in = 1U;
    } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in = 0U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__can_request 
        = (1U & (~ ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state) 
                    | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid) 
                       | ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in)) 
                          | (2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in)))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__status_backwards_comb = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__jump_address_comb = 0U;
    if ((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__status_backwards_comb = 2U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__jump_address_comb 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in;
    } else if ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__status_backwards_comb = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__jump_address_comb 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in;
    } else if ((((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status)) 
                 & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_or_jump_redirect)) 
                & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__fetch_misaligned)))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__status_backwards_comb = 2U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__jump_address_comb 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__next_pc_comb;
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtb_mcu__ConstPool__TABLE_h1e7fd68f_0;

VL_INLINE_OPT void Vtb_mcu___024root___nba_sequent__TOP__0(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*20:0*/ tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0;
    tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc = 0;
    CData/*3:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status = 0;
    CData/*0:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc = 0;
    VlWide<3>/*64:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction;
    VL_ZERO_W(65, __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction);
    CData/*3:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status = 0;
    CData/*0:0*/ __Vdlyvset__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v0;
    __Vdlyvset__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvdim0__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvval__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvset__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data = 0;
    VlWide<3>/*64:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction;
    VL_ZERO_W(65, __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction);
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc = 0;
    CData/*3:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state = 0;
    VlWide<3>/*64:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr;
    VL_ZERO_W(65, __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr);
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc = 0;
    CData/*0:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 0;
    CData/*7:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state = 0;
    CData/*7:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg = 0;
    CData/*3:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state = 0;
    CData/*7:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg = 0;
    CData/*3:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count = 0;
    QData/*63:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter = 0;
    IData/*31:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__counter;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__counter = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*1:0*/ __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__ack = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__err;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__err = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__ack = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__err;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__err = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__ack = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__err;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__err = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__ack = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__err;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__err = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__ack = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__err;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__err = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__ack = 0;
    CData/*0:0*/ TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__err;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__err = 0;
    // Body
    __Vdly__tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages 
        = vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer;
    vlSelf->__Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pc 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pc;
    vlSelf->__Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U] 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U];
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U];
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U];
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__counter 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter;
    vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v0 = 0U;
    vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v1 = 0U;
    vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v2 = 0U;
    vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v3 = 0U;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__ack 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__err 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.err;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__ack 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__err 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.err;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__ack 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__ack 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__err 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.err;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__err 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.err;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U] 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U];
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U];
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U] 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U];
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__ack 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__err 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.err;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__ack 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.ack;
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__err 
        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.err;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[0U] 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[0U];
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U] 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U];
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[2U] 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[2U];
    __Vdlyvset__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 = 0U;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state;
    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus;
    __Vdly__tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages) 
                  << 1U)) | (IData)(vlSelf->tb_mcu__DOT__uart_rx_async));
    vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__4__KET____DOT__button_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__4__KET____DOT__button_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                   >> 4U)));
    vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__3__KET____DOT__button_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__3__KET____DOT__button_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                   >> 3U)));
    vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__2__KET____DOT__button_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__2__KET____DOT__button_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                   >> 2U)));
    vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__1__KET____DOT__button_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__1__KET____DOT__button_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                   >> 1U)));
    vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__0__KET____DOT__button_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__0__KET____DOT__button_sync__DOT__stages) 
                  << 1U)) | (1U & (IData)(vlSelf->tb_mcu__DOT__buttons_async)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 0xfU)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 0xeU)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 0xdU)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 0xcU)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 0xbU)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 0xaU)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 9U)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 8U)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 7U)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 6U)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 5U)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 4U)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 3U)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 2U)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                   >> 1U)));
    __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages 
        = ((2U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages) 
                  << 1U)) | (1U & (IData)(vlSelf->tb_mcu__DOT__switches_async)));
    if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__wishbone_we))) {
        vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h6855bf08__0 
            = (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb);
        if ((0x95ffU >= (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) {
            vlSelf->__Vdlyvval__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v0 
                = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h6855bf08__0;
            vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v0 = 1U;
            vlSelf->__Vdlyvlsb__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v0 = 0U;
            vlSelf->__Vdlyvdim0__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v0 
                = (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb);
        }
    }
    if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__wishbone_we))) {
        vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h683e2b0c__0 
            = (0xffU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                        >> 8U));
        if ((0x95ffU >= (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) {
            vlSelf->__Vdlyvval__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v1 
                = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h683e2b0c__0;
            vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v1 = 1U;
            vlSelf->__Vdlyvlsb__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v1 = 8U;
            vlSelf->__Vdlyvdim0__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v1 
                = (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb);
        }
    }
    if ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__wishbone_we))) {
        vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h6852d903__0 
            = (0xffU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                        >> 0x10U));
        if ((0x95ffU >= (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) {
            vlSelf->__Vdlyvval__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v2 
                = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h6852d903__0;
            vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v2 = 1U;
            vlSelf->__Vdlyvlsb__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v2 = 0x10U;
            vlSelf->__Vdlyvdim0__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v2 
                = (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb);
        }
    }
    if ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__wishbone_we))) {
        vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h68574cc7__0 
            = (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
               >> 0x18U);
        if ((0x95ffU >= (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) {
            vlSelf->__Vdlyvval__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v3 
                = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT____Vlvbound_h68574cc7__0;
            vlSelf->__Vdlyvset__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v3 = 1U;
            vlSelf->__Vdlyvlsb__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v3 = 0x18U;
            vlSelf->__Vdlyvdim0__tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory__v3 
                = (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb);
        }
    }
    vlSelf->tb_mcu__DOT__dut__DOT__rst = (1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__buttons));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_stb 
        = ((~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceRd)) 
           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel) 
              & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb)));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT____Vcellout__vga_memory__wb_read_data 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__wb_read_pipeline;
    if (vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceRd) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__i = 0x20U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count = 3U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding = 0ULL;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status = 1U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U] = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] = 0x90000000U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__counter = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__counter;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter;
        vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__count = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime = 0ULL;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U] = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] = 0x90000000U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U] 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U];
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U];
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U];
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction = 0x13U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc = 0x40000U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status = 1U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status;
        __Vdlyvset__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v0 = 1U;
    } else {
        if ((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in))) {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding = 0ULL;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status = 1U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U] = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] = 0x90000000U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U] = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data = 0U;
        } else if ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in))) {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U] 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U];
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U];
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U] 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U];
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data;
        } else {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc;
            if ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status))) {
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__next_pc_comb;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding 
                    = (((QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__forward_valid_comb)) 
                        << 0x25U) | (((QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__rd_value_comb)) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                                   >> 0x16U))))));
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status 
                    = ((0U != (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status))
                        ? (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status)
                        : ((0x31U == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                << 5U) 
                                               | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                  >> 0x1bU))))
                            ? 4U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__fetch_misaligned)
                                     ? 2U : 0U)));
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
                    = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store)
                        ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data
                        : ((((0x29U == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                  << 5U) 
                                                 | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                    >> 0x1bU)))) 
                             | (0x2aU == (0x3fU & (
                                                   (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                      >> 0x1bU))))) 
                            | (0x2bU == (0x3fU & ((
                                                   vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                   << 5U) 
                                                  | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                     >> 0x1bU)))))
                            ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data
                            : ((((0x2cU == (0x3fU & 
                                            ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                              << 5U) 
                                             | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                >> 0x1bU)))) 
                                 | (0x2dU == (0x3fU 
                                              & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                  << 5U) 
                                                 | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                    >> 0x1bU))))) 
                                | (0x2eU == (0x3fU 
                                             & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                   >> 0x1bU)))))
                                ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]
                                : 0U)));
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U];
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U];
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U];
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__rd_value_comb;
            } else {
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc 
                    = ((IData)(4U) + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc);
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding = 0ULL;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data = 0U;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U] = 0U;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] = 0x90000000U;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U] = 0U;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data = 0U;
            }
        }
        if ((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))) {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status = 1U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U] = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] = 0x90000000U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] = 0U;
        } else if ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))) {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U] 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U];
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U];
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U];
        } else {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc;
            if ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_status_in))) {
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status 
                    = ((0x31U == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                            << 5U) 
                                           | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                              >> 0x1bU))))
                        ? 4U : ((0x27U == (0x3fU & 
                                           ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0x1bU))))
                                 ? 9U : ((0x28U == 
                                          (0x3fU & 
                                           ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0x1bU))))
                                          ? 0xaU : 0U)));
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U];
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U];
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U];
            } else {
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data = 0U;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data = 0U;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_status_in;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U] = 0U;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] = 0x90000000U;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] = 0U;
            }
        }
        if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_sel) 
             | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel))) {
            if ((0U < (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count 
                    = (3U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count) 
                             - (IData)(1U)));
            }
        } else {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count = 3U;
        }
        vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count 
            = (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count 
               - (IData)(1U));
        if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state)) {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state = 1U;
        } else if ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state)) {
            if ((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state)) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg 
                    = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count = 0x364U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state = 2U;
            }
        } else if ((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state)) {
            if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count)) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count = 0x364U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx = 0U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state = 3U;
            }
        } else if ((3U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state)) {
            if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count)) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg 
                    = (0x7fU & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg) 
                                >> 1U));
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count = 0x364U;
                if ((7U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx))) {
                    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state = 4U;
                } else {
                    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx)));
                }
            }
        } else if ((4U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state)) {
            if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count)) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state = 5U;
            }
        } else {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state 
                = ((5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state)
                    ? 1U : 0U);
        }
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state;
        if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state)) {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 1U;
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg = 0U;
        } else if ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state)) {
            if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer) 
                 & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 3U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg = 0U;
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 2U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
                    = (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb);
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 1U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg = 0U;
            }
        } else if ((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state)) {
            if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer) 
                 & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 4U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
                    = (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb);
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 2U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
                    = (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb);
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 3U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg = 0U;
            }
        } else if ((3U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state)) {
            if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer) 
                 & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active)))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 2U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
                    = (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb);
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 4U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
                    = (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb);
            } else if ((1U & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active)))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 1U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
                    = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg;
            }
        } else if ((4U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state)) {
            if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer) 
                 & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active)))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 2U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
                    = (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb);
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 4U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
                    = (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb);
            } else if ((1U & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active)))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 2U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
                    = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg;
            }
        } else {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg = 0U;
        }
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count 
            = (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count 
               - (IData)(1U));
        if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)) {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state = 1U;
        } else if ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)) {
            if ((1U & (~ ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages) 
                          >> 1U)))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count = 0x1b1U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state = 2U;
            }
        } else if ((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)) {
            if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count)) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count = 0x364U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx = 0U;
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state = 3U;
            }
        } else if ((3U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)) {
            if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count)) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg 
                    = ((0x80U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages) 
                                 << 6U)) | (0x7fU & 
                                            ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg) 
                                             >> 1U)));
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count = 0x364U;
                if ((7U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx))) {
                    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state = 4U;
                } else {
                    __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx)));
                }
            }
        } else if ((4U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)) {
            if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count)) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state = 5U;
            }
        } else {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state 
                = ((5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)
                    ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_err_reg)
                        ? 0U : 1U) : 0U);
        }
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx;
        if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state)) {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state = 1U;
        } else if ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state)) {
            if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer) 
                 & (5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state = 1U;
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state = 1U;
            } else if ((5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state = 2U;
            }
        } else if ((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state)) {
            if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer) 
                 & (5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state = 2U;
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state = 1U;
            } else if ((5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state = 2U;
            }
        } else {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state = 0U;
        }
        if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel) 
             & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))) {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__counter 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb;
        } else if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel) 
                    & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb)))) {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__counter 
                = ((IData)(1U) + vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter);
        }
        vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__counter;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data;
        if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel) 
             & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))) {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb;
        } else if ((0U < vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter)) {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter 
                = (vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter 
                   - (IData)(1U));
        }
        vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter;
        vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__count 
            = (((0U != (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack)) 
                | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__err))
                ? 0U : ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                          & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb)) 
                         & (0xffU > (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__count)))
                         ? (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__count)))
                         : 0U));
        __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
            = (1ULL + vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime);
        if ((0x85001U == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)) {
            if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
                    = ((0xffffffffffffff00ULL & __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime) 
                       | (IData)((IData)((0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb))));
            }
            if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
                    = ((0xffffffffffff00ffULL & __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                            >> 8U)))) 
                          << 8U));
            }
            if ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
                    = ((0xffffffffff00ffffULL & __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                            >> 0x10U)))) 
                          << 0x10U));
            }
            if ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
                    = ((0xffffffff00ffffffULL & __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime) 
                       | ((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                           >> 0x18U))) 
                          << 0x18U));
            }
        } else if ((0x85002U == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)) {
            if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
                    = ((0xffffff00ffffffffULL & __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime) 
                       | ((QData)((IData)((0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb))) 
                          << 0x20U));
            }
            if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
                    = ((0xffff00ffffffffffULL & __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                            >> 8U)))) 
                          << 0x28U));
            }
            if ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
                    = ((0xff00ffffffffffffULL & __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                            >> 0x10U)))) 
                          << 0x30U));
            }
            if ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
                    = ((0xffffffffffffffULL & __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime) 
                       | ((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                           >> 0x18U))) 
                          << 0x38U));
            }
        }
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U] 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U];
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U];
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U];
        if ((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in))) {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction = 0x13U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status = 1U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid = 0U;
        } else if ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in))) {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status;
            if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__response_valid) 
                 & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__kill_response)))) {
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid = 1U;
            }
        } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid) {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_instr;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_pc;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_status;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid = 0U;
        } else if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__response_valid) 
                    & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__kill_response)))) {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__request_pc;
            if (vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.err) {
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction = 0x13U;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status = 3U;
            } else {
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                    = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.dat_miso;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status = 0U;
            }
        } else {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction = 0x13U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status = 1U;
        }
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status;
        if (((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                      >> 0x25U)) & (0U != (0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding))))) {
            __Vdlyvval__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                           >> 5U));
            __Vdlyvset__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 = 1U;
            __Vdlyvdim0__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 
                = (0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding));
        }
    }
    if (__Vdlyvset__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v0) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[1U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[2U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[3U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[4U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[5U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[6U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[7U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[8U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[9U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xaU] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xbU] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xcU] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xdU] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xeU] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xfU] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x10U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x11U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x12U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x13U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x14U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x15U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x16U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x17U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x18U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x19U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1aU] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1bU] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1cU] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1dU] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1eU] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[__Vdlyvdim0__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32] 
            = __Vdlyvval__tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32;
    }
    if (vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceRd) {
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg = 0xeU;
        __Vdly__tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_out = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_reg = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_reg = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_enable = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.dat_miso = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.dat_miso = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.dat_miso = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.dat_miso = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.dat_miso = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.dat_miso = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__err;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__err;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__err;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__err;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__err;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__err;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtval = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mcause = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtvec = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mip = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mepc = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_err_reg = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_pc = 0x40000U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_status = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_instr = 0x13U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding = 0ULL;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__leds_reg = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp = 0ULL;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_reg = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_reg = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_err_reg = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_err_reg = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__kill_response = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[0U] = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U] = 0x90000000U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[2U] = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_store_data = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc = 0U;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_sel = 0xfU;
        __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_store = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] = 0x90000000U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding = 0ULL;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status = 1U;
    } else {
        if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken) {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
                = ((0xffffff7fU & __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus) 
                   | (0x80U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
                               << 4U)));
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
                = (0xfffffff7U & __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus);
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtval 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_tval;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mcause 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_cause;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mepc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc;
        } else {
            if (((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
                 & (0x2fU == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                        << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                  >> 0x1bU)))))) {
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
                    = ((0xfffffff7U & __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus) 
                       | (8U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
                                >> 4U)));
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
                    = (0x80U | __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus);
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_enable) {
                if ((0x300U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
                        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data;
                }
            }
            if ((1U & (~ ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
                          & (0x2fU == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                   >> 0x1bU)))))))) {
                if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_enable) {
                    if ((0x300U != (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                        if ((0x304U != (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                            if ((0x305U != (0xfffU 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                if ((0x341U != (0xfffU 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                    if ((0x342U != 
                                         (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                        if ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtval 
                                                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data;
                                        }
                                    }
                                    if ((0x342U == 
                                         (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mcause 
                                            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data;
                                    }
                                }
                                if ((0x341U == (0xfffU 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mepc 
                                        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data;
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
            = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus;
        if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer)) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg 
                = ((0xeU & ((IData)(vlSelf->tb_mcu__DOT__segments_select) 
                            << 1U)) | (1U & ((IData)(vlSelf->tb_mcu__DOT__segments_select) 
                                             >> 3U)));
            __Vdly__tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer = 0x186a0U;
        } else {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer 
                = (vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer 
                   - (IData)(1U));
        }
        vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer;
        if ((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_out 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out = 2U;
        } else if ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_out 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out = 1U;
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_out 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__jump_address_comb;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__status_backwards_comb;
        }
        vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state 
            = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__next_state;
        if ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state)) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg = 0U;
        } else if ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state)) {
            if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer) 
                 & (5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state))) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg = 0U;
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg = 0U;
            } else if ((5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg 
                    = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg;
            }
        } else if ((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state)) {
            if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer) 
                 & (5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state))) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg 
                    = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg;
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg = 0U;
            } else if ((5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg 
                    = vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg;
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg = 0U;
        }
        vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_reg 
            = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel) 
                & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))
                ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb
                : 0U);
        if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_ack) 
             & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_reg 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb;
        }
        if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel) 
             & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_enable 
                = (0U < vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb);
        }
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.dat_miso = 0U;
        if (((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
               & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.stb)) 
              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.ack))) 
             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.err)))) {
            if (((0x81000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                 & (0x81001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__ack = 1U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__err = 0U;
                if ((1U & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb)))) {
                    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.dat_miso 
                        = vlSelf->tb_mcu__DOT__dut__DOT__buttons;
                }
            } else {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__ack = 0U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__err = 1U;
            }
        }
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.dat_miso = 0U;
        if (((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
               & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.stb)) 
              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.ack))) 
             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.err)))) {
            if (((0x82000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                 & (0x82001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__ack = 1U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__err = 0U;
                if ((1U & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb)))) {
                    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.dat_miso 
                        = ((0x8000U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages) 
                                       << 0xeU)) | 
                           ((0x4000U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages) 
                                        << 0xdU)) | 
                            ((0x2000U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages) 
                                         << 0xcU)) 
                             | ((0x1000U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages) 
                                            << 0xbU)) 
                                | ((0x800U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages) 
                                              << 0xaU)) 
                                   | ((0x400U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages) 
                                                 << 9U)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages) 
                                           << 8U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages) 
                                                << 7U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages) 
                                                   << 6U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages) 
                                                      << 5U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages) 
                                                         << 4U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages) 
                                                            << 3U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages) 
                                                               << 2U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages) 
                                                                  << 1U)) 
                                                              | ((2U 
                                                                  & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages) 
                                                                       >> 1U)))))))))))))))));
                }
            } else {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__ack = 0U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__err = 1U;
            }
        }
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.dat_miso = 0U;
        if (((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
               & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.stb)) 
              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.ack))) 
             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.err)))) {
            if (((0x83000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                 & (0x83001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__ack = 1U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__err = 0U;
                if ((1U & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb)))) {
                    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.dat_miso 
                        = vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg;
                }
            } else {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__ack = 0U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__err = 1U;
            }
        }
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.dat_miso = 0U;
        if (((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
               & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.stb)) 
              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.ack))) 
             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.err)))) {
            if (((0x80000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                 & (0x80001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__ack = 1U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__err = 0U;
                if ((1U & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb)))) {
                    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.dat_miso 
                        = vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__leds_reg;
                }
            } else {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__ack = 0U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__err = 1U;
            }
        }
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.dat_miso = 0U;
        if (((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
               & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.stb)) 
              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.ack))) 
             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.err)))) {
            if (((0x85000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                 & (0x85005U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__ack = 1U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__err = 0U;
                if ((1U & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb)))) {
                    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.dat_miso 
                        = ((0x85000U == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)
                            ? 0xaU : ((0x85001U == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)
                                       ? (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime)
                                       : ((0x85002U 
                                           == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)
                                           ? (IData)(
                                                     (vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
                                                      >> 0x20U))
                                           : ((0x85003U 
                                               == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)
                                               ? (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp)
                                               : ((0x85004U 
                                                   == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)
                                                   ? (IData)(
                                                             (vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp 
                                                              >> 0x20U))
                                                   : 0U)))));
                }
            } else {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__ack = 0U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__err = 1U;
            }
        }
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__ack = 0U;
        TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__err = 0U;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.dat_miso = 0U;
        if (((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
               & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.stb)) 
              & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.ack))) 
             & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.err)))) {
            if (((0x84000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                 & (0x84001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__ack = 1U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__err = 0U;
                if ((1U & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb)))) {
                    vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.dat_miso 
                        = (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_empty) 
                            << 0x1aU) | (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_reg) 
                                          << 0x19U) 
                                         | (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_err_reg) 
                                             << 0x18U) 
                                            | (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_full) 
                                                << 0x12U) 
                                               | (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_reg) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_err_reg) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_sig)))))));
                }
            } else {
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__ack = 0U;
                TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__err = 1U;
            }
        }
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET____DOT____Vdly__err;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages;
        vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages 
            = __Vdly__tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET____DOT____Vdly__err;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET____DOT____Vdly__err;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET____DOT____Vdly__err;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET____DOT____Vdly__err;
        vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
            = __Vdly__tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.ack 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__ack;
        vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.err 
            = TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET____DOT____Vdly__err;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mip 
            = ((0xffffff7fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mip) 
               | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__timer_interrupt) 
                  << 7U));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mip 
            = ((0xfffff7ffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mip) 
               | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__external_interrupt) 
                  << 0xbU));
        if ((1U & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken)))) {
            if ((1U & (~ ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
                          & (0x2fU == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                   >> 0x1bU)))))))) {
                if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_enable) {
                    if ((0x300U != (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                        if ((0x304U != (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                            if ((0x305U == (0xfffU 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtvec 
                                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data;
                            }
                            if ((0x305U != (0xfffU 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                if ((0x341U != (0xfffU 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                    if ((0x342U != 
                                         (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                        if ((0x343U 
                                             != (0xfffU 
                                                 & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                            if ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mip 
                                                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x304U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie 
                                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data;
                        }
                    }
                }
            }
        }
        if (((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state) 
             | (1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_err_reg = 0U;
        } else if ((((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state) 
                     & (0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count)) 
                    & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages) 
                       >> 1U))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_err_reg = 1U;
        } else if ((((4U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state) 
                     & (0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count)) 
                    & (~ ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages) 
                          >> 1U)))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_err_reg = 1U;
        }
        if ((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_pc 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_status = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_instr = 0x13U;
        } else if ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in))) {
            if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__response_valid) 
                 & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__kill_response)))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__request_pc;
                if (vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.err) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_status = 3U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_instr = 0x13U;
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_status = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_instr 
                        = vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.dat_miso;
                }
            }
        }
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
            = (((QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_writes_rd_comb)) 
                << 0x25U) | (((QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_rd_data_comb)) 
                              << 5U) | (QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                           >> 0x16U))))));
        if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__wb_write_sel))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                = ((0xffffff00U & vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg) 
                   | (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb));
        }
        if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__wb_write_sel))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                = ((0xffff00ffU & vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg) 
                   | (0xff00U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb));
        }
        if ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__wb_write_sel))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                = ((0xff00ffffU & vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg) 
                   | (0xff0000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb));
        }
        if ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__wb_write_sel))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                = ((0xffffffU & vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg) 
                   | (0xff000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb));
        }
        if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__wb_write_sel))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__leds_reg 
                = ((0xff00U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__leds_reg)) 
                   | (0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb));
        }
        if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__wb_write_sel))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__leds_reg 
                = ((0xffU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__leds_reg)) 
                   | (0xff00U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb));
        }
        if ((0x85003U == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)) {
            if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp 
                    = ((0xffffffffffffff00ULL & vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp) 
                       | (IData)((IData)((0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb))));
            }
            if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp 
                    = ((0xffffffffffff00ffULL & vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                            >> 8U)))) 
                          << 8U));
            }
            if ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp 
                    = ((0xffffffffff00ffffULL & vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                            >> 0x10U)))) 
                          << 0x10U));
            }
            if ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp 
                    = ((0xffffffff00ffffffULL & vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp) 
                       | ((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                           >> 0x18U))) 
                          << 0x18U));
            }
        } else if ((0x85004U == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)) {
            if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp 
                    = ((0xffffff00ffffffffULL & vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb))) 
                          << 0x20U));
            }
            if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp 
                    = ((0xffff00ffffffffffULL & vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                            >> 8U)))) 
                          << 0x28U));
            }
            if ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp 
                    = ((0xff00ffffffffffffULL & vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                            >> 0x10U)))) 
                          << 0x30U));
            }
            if ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel))) {
                vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp 
                    = ((0xffffffffffffffULL & vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp) 
                       | ((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                           >> 0x18U))) 
                          << 0x38U));
            }
        }
        if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_status) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_reg 
                = (1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                         >> 0x19U));
        }
        if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_rx_status) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_reg 
                = (1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                         >> 0x11U));
        }
        if (((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state) 
             & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_err_reg = 1U;
        } else if (((4U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state) 
                    & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_err_reg = 1U;
        } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_status) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_err_reg 
                = (1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                         >> 0x18U));
        } else if ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
                     & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))) 
                    & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb) 
                       >> 3U))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_err_reg = 0U;
        }
        if (((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state) 
             & ((~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer)) 
                & (5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_err_reg = 1U;
        } else if (vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_rx_status) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_err_reg 
                = (1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                         >> 0x10U));
        } else if ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
                     & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))) 
                    & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb) 
                       >> 2U))) {
            vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_err_reg = 0U;
        }
        if ((((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in)) 
              & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state)) 
             & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__response_valid)))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__kill_response = 1U;
        } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__response_valid) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__kill_response = 0U;
        }
        if ((2U == ((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                             ? 2U : 0U)) ? 2U : 0U))) {
            if ((1U != (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state))) {
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state = 0U;
            }
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] = 0x90000000U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding = 0ULL;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status = 1U;
        } else if ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state))) {
            if ((0U != (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] = 0x90000000U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding = 0ULL;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status;
            } else if (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__valid_memory_op) 
                        & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__access_misaligned))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U];
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U];
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U];
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding = 0ULL;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status 
                    = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load)
                        ? 5U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store)
                                 ? 7U : 0U));
            } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op) {
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[0U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U];
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U];
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[2U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U];
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_store_data 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__store_data_comb;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_sel 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_store 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store;
                if (((0U != (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack)) 
                     | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__err))) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data 
                        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data;
                    if (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__err) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data 
                            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status 
                            = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load)
                                ? 6U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store)
                                         ? 8U : 0U));
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data 
                            = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load)
                                ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__live_load_value_comb
                                : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status = 0U;
                    }
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U] 
                        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U];
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U];
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U];
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc 
                        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc 
                        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                        = ((0x1fffffffffULL & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding) 
                           | ((QData)((IData)((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load) 
                                                & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__err))) 
                                               & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                                      >> 0x16U)))))) 
                              << 0x25U));
                    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state = 2U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                        = ((0x2000000000ULL & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding) 
                           | (((QData)((IData)(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load)
                                                 ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__live_load_value_comb
                                                 : 0U))) 
                               << 5U) | (QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                                            >> 0x16U))))));
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] = 0x90000000U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding = 0ULL;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status = 1U;
                    __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state = 1U;
                }
            } else if (((~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0)) 
                        & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status)))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U];
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U];
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U];
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                    = ((0x1fULL & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding) 
                       | (((QData)((IData)((0U != (0x1fU 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                                      >> 0x16U))))) 
                           << 0x25U) | ((QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)) 
                                        << 5U)));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                    = ((0x3fffffffe0ULL & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding) 
                       | (IData)((IData)((0x1fU & (
                                                   vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                                   >> 0x16U)))));
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] = 0x90000000U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding = 0ULL;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status = 1U;
            }
        } else if ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding = 0ULL;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status = 1U;
            if (((0U != (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack)) 
                 | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__err))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data;
                if (vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__err) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data 
                        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status 
                        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_fault_status_comb;
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data 
                        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load)
                            ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_load_value_comb
                            : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr);
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status = 0U;
                }
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc;
                __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state = 2U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[0U];
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U];
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[2U];
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                    = ((0x1fffffffffULL & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding) 
                       | ((QData)((IData)((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load) 
                                            & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__err))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U] 
                                                  >> 0x16U)))))) 
                          << 0x25U));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                    = ((0x2000000000ULL & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding) 
                       | (((QData)((IData)(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load)
                                             ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_load_value_comb
                                             : 0U))) 
                           << 5U) | (QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U] 
                                                        >> 0x16U))))));
            }
        } else if ((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] = 0x90000000U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding = 0ULL;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status = 1U;
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state = 0U;
        } else {
            __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] = 0x90000000U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding = 0ULL;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status = 1U;
        }
    }
    vlSelf->tb_mcu__DOT__dut__DOT__buttons = ((0x10U 
                                               & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__4__KET____DOT__button_sync__DOT__stages) 
                                                  << 3U)) 
                                              | ((8U 
                                                  & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__3__KET____DOT__button_sync__DOT__stages) 
                                                     << 2U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__2__KET____DOT__button_sync__DOT__stages) 
                                                        << 1U)) 
                                                    | ((2U 
                                                        & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__1__KET____DOT__button_sync__DOT__stages)) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__0__KET____DOT__button_sync__DOT__stages) 
                                                             >> 1U))))));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active 
        = ((0U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
           & ((1U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
              & ((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                 | ((3U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                    | ((4U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                       | (5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_load = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jalr = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_target 
        = (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc 
           + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_fence_i = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__take_branch 
        = ((~ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U]) 
           & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                  >> 0x1fU)) & ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                 ? (IData)(((0U == 
                                             (0x30000000U 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) 
                                            & ((0x8000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                                ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                                   >= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data)
                                                : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                                   < vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data))))
                                 : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                     >> 0x1dU) & ((0x10000000U 
                                                   & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                                   ? 
                                                  ((0x8000000U 
                                                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data))
                                                   : 
                                                  ((0x8000000U 
                                                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                                    ? 
                                                   (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                                    != vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data)
                                                    : 
                                                   (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                                    == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data)))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch = 0U;
    if ((1U & (~ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U]))) {
        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_load = 1U;
                        }
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_load = 1U;
                    }
                } else if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_load = 1U;
                }
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch = 1U;
                    }
                }
            } else if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch = 1U;
            }
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jalr = 1U;
                        }
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump = 1U;
                    }
                }
            }
        }
        if ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store = 1U;
                    }
                }
            }
            if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
                        }
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
                    }
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        } else if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
            if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store = 1U;
                    }
                }
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
            } else if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        } else if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                             >> 0x1dU)))) {
            if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        }
    }
    __Vtableidx2 = (0x7fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type 
        = Vtb_mcu__ConstPool__TABLE_h1e7fd68f_0[__Vtableidx2];
    __Vtableidx1 = (0x7fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type 
        = Vtb_mcu__ConstPool__TABLE_h1e7fd68f_0[__Vtableidx1];
    tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
        = (0x188000U | ((0x7c00U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    << 3U)) | ((0x3e0U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xaU)) 
                                               | (0x1fU 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__forward_valid_comb = 0U;
    if (((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status)) 
         & (0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                            >> 0x16U))))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__forward_valid_comb 
            = (1U & ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U])
                      ? (IData)(((0U == (0xc0000000U 
                                         & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) 
                                 & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                        >> 0x1dU)) 
                                    | (IData)((0U == 
                                               (0x18000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U]))))))
                      : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1fU) ? (IData)((0U != 
                                               (0x70000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])))
                          : (IData)((0U == (0x60000000U 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U]))))));
    }
    vlSelf->tb_mcu__DOT__segments_select = vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__wb_read_pipeline 
        = ((0x95ffU >= (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))
            ? vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory
           [(0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)]
            : 0U);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count 
        = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count;
    vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages 
        = __Vdly__tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm)
            ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]
            : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data);
    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U])) {
        if ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr = 1U;
                        }
                    }
                }
            }
            if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 0U;
            } else if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 0U;
            } else if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 0U;
            } else if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 0U;
            }
        } else {
            if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr = 1U;
            } else if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr = 1U;
                    }
                } else if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr = 1U;
                }
            }
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 3U;
                        }
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op 
                        = ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                ? 4U : 8U) : ((0x8000000U 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                               ? 7U
                                               : 5U));
                }
            }
        }
        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_fence_i = 1U;
                        }
                    }
                }
            }
        }
    } else if ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                >> 0x1fU)) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op 
            = ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                    ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? 0xaU : 9U) : ((0x8000000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                             ? 6U : 2U))
                    : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? 0U : 8U) : ((0x8000000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                           ? 7U : 6U)))
                : ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                    ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? 3U : 4U) : ((0x8000000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                           ? 5U : 0xaU))
                    : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? 9U : 0U) : 0U)));
    } else if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op 
            = ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                ? 0U : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                         ? 0U : 0xaU));
    } else if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op 
            = ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                ? 9U : 2U);
    } else if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                         >> 0x1cU)))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 1U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_or_jump_redirect 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_fence_i) 
           | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump) 
              | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch) 
                 & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__take_branch))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__next_pc_comb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_fence_i)
            ? ((IData)(4U) + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc)
            : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump)
                ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jalr)
                    ? (0xfffffffeU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                      + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]))
                    : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_target)
                : (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch) 
                    & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__take_branch))
                    ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_target
                    : ((IData)(4U) + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out 
        = ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
            ? ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                ? 0U : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                         ? 0U : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                    ? (0xfffff000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                    : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 7U)))))))
                : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                    ? (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                          >> 0x14U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_out 
        = ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
            ? ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
                ? 0U : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
                         ? 0U : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
                ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
                    ? (0xfffff000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                    : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 7U)))))))
                : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
                    ? (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                          >> 0x14U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state 
        = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state 
        = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state 
        = __Vdly__tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result 
        = ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
            ? ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                ? 0U : ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                         ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                             ? 0U : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                      < vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)
                                      ? 1U : 0U)) : 
                        ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                          ? (VL_LTS_III(32, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)
                              ? 1U : 0U) : VL_SHIFTRS_III(32,32,5, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data, 
                                                          (0x1fU 
                                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)))))
            : ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                ? ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           >> (0x1fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2))
                        : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           << (0x1fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)))
                    : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           ^ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)
                        : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           | vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)))
                : ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)
                        : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           - vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2))
                    : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                        ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2
                        : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__rd_value_comb 
        = ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U])
            ? ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                >> 0x1fU) ? ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                              ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                  ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                              : ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                  ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                      ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                                  : ((0x10000000U & 
                                      vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                      ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                          ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                                      : ((0x8000000U 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                          ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                              ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                                          : 0U)))) : 
               ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                 ? 0U : ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                          ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                              ? 0U : ((0x8000000U & 
                                       vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                       ? 0U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                                ? 0U
                                                : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)))
                          : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                              ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result))))
            : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                >> 0x1fU) ? ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                              ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                  ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                              : ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                  ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                      ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                                  : ((0x10000000U & 
                                      vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                      ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                          ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                                      : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)))
                : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                    ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result
                        : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result
                            : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)))
                    : ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                            ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                        : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                ? ((IData)(4U) + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc)
                                : ((IData)(4U) + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc))
                            : ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc 
                                   + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U])
                                : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__fetch_misaligned = 0U;
    if ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump) 
          | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch) 
             & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__take_branch))) 
         & (0U != (3U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__next_pc_comb)))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__fetch_misaligned = 1U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                     >> 0x14U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
        = ((tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
            << 0xcU) | (IData)(((((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x14U))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out))) 
                                >> 0x20U)));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
        = (tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
           >> 0x14U);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                     >> 0x14U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_out))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
        = ((tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
            << 0xcU) | (IData)(((((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x14U))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_out))) 
                                >> 0x20U)));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
        = (tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
           >> 0x14U);
    if ((0x40U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        if ((0x20U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((0x10U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                        if ((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                          >> 0xcU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xf801ffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                                   | (((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x14U))
                                        ? 0x27U : (
                                                   (1U 
                                                    == 
                                                    (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x28U
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0x14U))
                                                     ? 0x2fU
                                                     : 
                                                    ((0x105U 
                                                      == 
                                                      (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0x14U))
                                                      ? 0x30U
                                                      : 0x31U)))) 
                                      << 0x1bU));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                = (1U & (((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x14U))
                                           ? 0x27U : 
                                          ((1U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x14U))
                                            ? 0x28U
                                            : ((0x302U 
                                                == 
                                                (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0x14U))
                                                ? 0x2fU
                                                : (
                                                   (0x105U 
                                                    == 
                                                    (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x30U
                                                    : 0x31U)))) 
                                         >> 5U));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0xf801ffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                                   | (((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x14U))
                                        ? 0x27U : (
                                                   (1U 
                                                    == 
                                                    (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x28U
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0x14U))
                                                     ? 0x2fU
                                                     : 
                                                    ((0x105U 
                                                      == 
                                                      (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0x14U))
                                                      ? 0x30U
                                                      : 0x31U)))) 
                                      << 0x1bU));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                                = (1U & (((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x14U))
                                           ? 0x27U : 
                                          ((1U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x14U))
                                            ? 0x28U
                                            : ((0x302U 
                                                == 
                                                (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0x14U))
                                                ? 0x2fU
                                                : (
                                                   (0x105U 
                                                    == 
                                                    (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x30U
                                                    : 0x31U)))) 
                                         >> 5U));
                        } else if ((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                            if ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                                if ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0x70000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xfU));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                        = (0x70000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xfU));
                                } else {
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0x68000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xfU));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                        = (0x68000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xfU));
                                }
                            } else if ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    = (0x60000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    = (0xffc1ffffU 
                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                    = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xfU));
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                    = (0x60000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                    = (0xffc1ffffU 
                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                                    = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xfU));
                            } else {
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    = (0x88000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                    = (0x88000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                            }
                        } else {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                                   | (((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? ((0x1000U 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                            ? 0x2bU
                                            : 0x2aU)
                                        : ((0x1000U 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                            ? 0x29U
                                            : 0x31U)) 
                                      << 0x1bU));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                = (1U & (((0x2000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? ((0x1000U 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                               ? 0x2bU
                                               : 0x2aU)
                                           : ((0x1000U 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                               ? 0x29U
                                               : 0x31U)) 
                                         >> 5U));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                                   | (((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? ((0x1000U 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                            ? 0x2bU
                                            : 0x2aU)
                                        : ((0x1000U 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                            ? 0x29U
                                            : 0x31U)) 
                                      << 0x1bU));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                                = (1U & (((0x2000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? ((0x1000U 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                               ? 0x2bU
                                               : 0x2aU)
                                           : ((0x1000U 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                               ? 0x29U
                                               : 0x31U)) 
                                         >> 5U));
                        }
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0x10000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0x10000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                        } else {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0x88000000U | (0xfffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0x88000000U | (0xfffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                        }
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                               | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0xcU)))
                                    ? 3U : 0x31U) << 0x1bU));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                            = (1U & (((0U == (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 3U : 0x31U) 
                                     >> 5U));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                               | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0xcU)))
                                    ? 3U : 0x31U) << 0x1bU));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                            = (1U & (((0U == (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 3U : 0x31U) 
                                     >> 5U));
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0xf83fffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                    ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                     ? 7U : 6U)) : 
                               ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                 ? 0x31U : ((0x1000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                             ? 5U : 4U))) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 9U : 8U)
                                       : ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 7U : 6U))
                                   : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? 0x31U : ((0x1000U 
                                                   & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                                   ? 5U
                                                   : 4U))) 
                                 >> 5U));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0xf83fffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                           | (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                    ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                     ? 7U : 6U)) : 
                               ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                 ? 0x31U : ((0x1000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                             ? 5U : 4U))) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                        = (1U & (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 9U : 8U)
                                       : ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 7U : 6U))
                                   : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? 0x31U : ((0x1000U 
                                                   & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                                   ? 5U
                                                   : 4U))) 
                                 >> 5U));
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((0x20U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        if ((0x10U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | ((((((((((0U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))) 
                                      | (0x100U == 
                                         ((0x3f8U & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x16U)) 
                                          | (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                     | (1U == ((0x3f8U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (2U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (3U == ((0x3f8U 
                                              & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                  | (4U == ((0x3f8U 
                                             & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xcU))))) 
                                 | (5U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))) 
                                | (0x105U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))))
                                ? ((0U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x1bU : ((0x100U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x1cU
                                                : (
                                                   (1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                : ((6U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x23U : ((7U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x24U
                                                : 0x31U))) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & ((((((((((0U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))) 
                                         | (0x100U 
                                            == ((0x3f8U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                        | (1U == ((0x3f8U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0xcU))))) 
                                       | (2U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))) 
                                      | (3U == ((0x3f8U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                     | (4U == ((0x3f8U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (5U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (0x105U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))))
                                   ? ((0U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x1bU : ((0x100U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x1cU
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                   : ((6U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x23U : ((7U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x24U
                                                   : 0x31U))) 
                                 >> 5U));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                           | ((((((((((0U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))) 
                                      | (0x100U == 
                                         ((0x3f8U & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x16U)) 
                                          | (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                     | (1U == ((0x3f8U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (2U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (3U == ((0x3f8U 
                                              & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                  | (4U == ((0x3f8U 
                                             & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xcU))))) 
                                 | (5U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))) 
                                | (0x105U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))))
                                ? ((0U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x1bU : ((0x100U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x1cU
                                                : (
                                                   (1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                : ((6U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x23U : ((7U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x24U
                                                : 0x31U))) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                        = (1U & ((((((((((0U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))) 
                                         | (0x100U 
                                            == ((0x3f8U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                        | (1U == ((0x3f8U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0xcU))))) 
                                       | (2U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))) 
                                      | (3U == ((0x3f8U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                     | (4U == ((0x3f8U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (5U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (0x105U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))))
                                   ? ((0U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x1bU : ((0x100U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x1cU
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                   : ((6U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x23U : ((7U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x24U
                                                   : 0x31U))) 
                                 >> 5U));
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0xf83fffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                       | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                         >> 0xcU)))
                            ? 0xfU : ((1U == (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 0x10U : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))
                                                   ? 0x11U
                                                   : 0x31U))) 
                          << 0x1bU));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                    = (1U & (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xcU)))
                               ? 0xfU : ((1U == (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))
                                          ? 0x10U : 
                                         ((2U == (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU)))
                                           ? 0x11U : 0x31U))) 
                             >> 5U));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0xf83fffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                       | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                         >> 0xcU)))
                            ? 0xfU : ((1U == (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 0x10U : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))
                                                   ? 0x11U
                                                   : 0x31U))) 
                          << 0x1bU));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                    = (1U & (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xcU)))
                               ? 0xfU : ((1U == (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))
                                          ? 0x10U : 
                                         ((2U == (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU)))
                                           ? 0x11U : 0x31U))) 
                             >> 5U));
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((0x10U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x8000000U | (0x7ffffffU 
                                         & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x8000000U | (0x7ffffffU 
                                         & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                if ((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                               | (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                    ? 0x17U : 0x16U) 
                                  << 0x1bU));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                            = (1U & (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? 0x17U : 0x16U) 
                                     >> 5U));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                               | (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                    ? 0x17U : 0x16U) 
                                  << 0x1bU));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                            = (1U & (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? 0x17U : 0x16U) 
                                     >> 5U));
                    } else if ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        if ((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x19U))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xc8000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x14U));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0xc8000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x14U));
                        } else if ((0x20U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                              >> 0x19U))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xd0000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x14U));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0xd0000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x14U));
                        } else {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0x88000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0x88000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                        }
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xa8000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0xa8000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                    }
                } else if ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0x14U : 0x13U) << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? 0x14U : 0x13U) 
                                 >> 5U));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                           | (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0x14U : 0x13U) << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                        = (1U & (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? 0x14U : 0x13U) 
                                 >> 5U));
                } else if ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                >> 0x19U))) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xc0000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                            = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                        >> 0x14U));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0xc0000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                            = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                        >> 0x14U));
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x90000000U | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x90000000U | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0xf8000fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                             >> 0xcU)))
                                ? 0x25U : ((1U == (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU)))
                                            ? 0x26U
                                            : 0x31U)) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xcU)))
                                   ? 0x25U : ((1U == 
                                               (7U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU)))
                                               ? 0x26U
                                               : 0x31U)) 
                                 >> 5U));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0xf8000fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                           | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                             >> 0xcU)))
                                ? 0x25U : ((1U == (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU)))
                                            ? 0x26U
                                            : 0x31U)) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                        = (1U & (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xcU)))
                                   ? 0x25U : ((1U == 
                                               (7U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU)))
                                               ? 0x26U
                                               : 0x31U)) 
                                 >> 5U));
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
    } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                   | (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                        ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                            ? 0x31U : ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? 0xeU : 0xdU))
                        : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                            ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0x31U : 0xcU) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                                    ? 0xbU
                                                    : 0xaU))) 
                      << 0x1bU));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                = (1U & (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                           ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                               ? 0x31U : ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 0xeU : 0xdU))
                           : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                               ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? 0x31U : 0xcU) : 
                              ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0xbU : 0xaU))) >> 5U));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                   | (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                        ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                            ? 0x31U : ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? 0xeU : 0xdU))
                        : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                            ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0x31U : 0xcU) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                                    ? 0xbU
                                                    : 0xaU))) 
                      << 0x1bU));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                = (1U & (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                           ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                               ? 0x31U : ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 0xeU : 0xdU))
                           : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                               ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? 0x31U : 0xcU) : 
                              ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0xbU : 0xaU))) >> 5U));
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__timer_interrupt 
        = (vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
           >= vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_empty 
        = ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state) 
           | ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state) 
              | ((2U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state) 
                 & ((3U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state) 
                    | (4U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state)))));
    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U])) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_used 
            = (1U & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])
                                        ? ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x18000000U 
                                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]))))
                                        : ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])))))));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_used 
            = (1U & (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])) 
                             & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])))))));
    } else {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_used 
            = (1U & (IData)(((0U != (0xe0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])) 
                             | (0x18000000U == (0x18000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])))));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_used 
            = (1U & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                      >> 0x1fU) ? ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])
                                    ? ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        >> 0x1dU) | (IData)(
                                                            (0x18000000U 
                                                             == 
                                                             (0x18000000U 
                                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]))))
                                    : (IData)((0U == 
                                               (0x30000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]))))
                      : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])
                          ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])
                              ? (IData)((0x18000000U 
                                         == (0x18000000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])))
                              : (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x1cU))) : (
                                                   vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                                   >> 0x1dU))));
    }
    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U])) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used 
            = (1U & (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])) 
                             & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])))))));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used 
            = (1U & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])
                                        ? ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x18000000U 
                                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]))))
                                        : ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])))))));
    } else {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used 
            = (1U & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                      >> 0x1fU) ? ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])
                                    ? ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                        >> 0x1dU) | (IData)(
                                                            (0x18000000U 
                                                             == 
                                                             (0x18000000U 
                                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]))))
                                    : (IData)((0U == 
                                               (0x30000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]))))
                      : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])
                          ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])
                              ? (IData)((0x18000000U 
                                         == (0x18000000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])))
                              : (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                    >> 0x1cU))) : (
                                                   vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                                   >> 0x1dU))));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used 
            = (1U & (IData)(((0U != (0xe0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])) 
                             | (0x18000000U == (0x18000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])))));
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[0U] 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[0U];
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U] 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[1U];
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[2U] 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr[2U];
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U] 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U];
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U];
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U] 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U];
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state 
        = __Vdly__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__timer_interrupt_taken 
        = ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
            >> 3U) & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie 
                       >> 7U) & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__timer_interrupt)));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected = 0U;
    if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_used) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected 
            = ((0U == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                >> 0x11U))) ? 0U : 
               vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs
               [(0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                          >> 0x11U))]);
        if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                               >> 0x11U))) & (IData)(
                                                     (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding 
                                                      >> 0x25U))) 
             & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding)) 
                == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                             >> 0x11U))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0x11U))) & (IData)(
                                                            (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                                                             >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x11U))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0x11U))) & (IData)(
                                                            (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                                                             >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x11U))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                           >> 5U));
        }
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected = 0U;
    if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_used) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected 
            = ((0U == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                >> 0xcU))) ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs
               [(0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                          >> 0xcU))]);
        if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                               >> 0xcU))) & (IData)(
                                                    (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding 
                                                     >> 0x25U))) 
             & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding)) 
                == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                             >> 0xcU))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0xcU))) & (IData)(
                                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                                                            >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0xcU))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0xcU))) & (IData)(
                                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                                                            >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0xcU))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                           >> 5U));
        }
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_fault_status_comb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load)
            ? 6U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_store)
                     ? 8U : 0U));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__writes_rd_normal 
        = (1U & ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U])
                  ? (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])) 
                             & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))))))
                  : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                      >> 0x1fU) ? (IData)((0U != (0x70000000U 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])))
                      : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                          ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                              ? (IData)((0x18000000U 
                                         != (0x18000000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])))
                              : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                 >> 0x1cU)) : (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                  >> 0x1dU))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data 
        = ((0x300U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
            ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus
            : ((0x304U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie
                : ((0x305U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                    ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtvec
                    : ((0x341U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                        ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mepc
                        : ((0x342U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                            ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mcause
                            : ((0x343U == (0xfffU & 
                                           vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                                ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtval
                                : ((0x344U == (0xfffU 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                                    ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mip
                                    : 0U)))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__is_csr 
        = (IData)((((0x40000000U == (0xc0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])) 
                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U]) 
                   & ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                       ? (IData)((0x18000000U != (0x18000000U 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])))
                       : (IData)((0U != (0x18000000U 
                                         & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))))));
    if ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
        if ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval = 0U;
        } else if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause 
                = ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))
                    ? 0U : 3U);
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval = 0U;
        } else if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 0xbU;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval = 0U;
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 7U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data;
        }
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__pipeline_exception 
            = (1U & ((~ ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status) 
                         >> 2U)) & (IData)((3U != (3U 
                                                   & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))))));
    } else {
        if ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
            if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause 
                    = ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))
                        ? 6U : 5U);
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data;
            } else if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 4U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data;
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 2U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval = 0U;
            }
        } else if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
            if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc;
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc;
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval = 0U;
        }
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__pipeline_exception 
            = (1U & (IData)((0U != (6U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)))));
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_h8f4b082b__0 
        = ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
           & (0x2fU == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                  << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_hc0a4638a__0 
        = ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
           & (0x27U == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                  << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_hcb080270__0 
        = ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
           & (0x28U == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                  << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw = 0U;
    if ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status))) {
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_uses_rs2 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_uses_rs1 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_valid 
            = (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__Vfuncout = 0U;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[0U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[1U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[2U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__Vfuncout 
            = (1U & (IData)(((0x28U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i))))
                                 : (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i) 
                                     >> 1U) | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i))))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__Vfuncout 
            = (1U & (IData)(((8U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__op_i))))
                                 : ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__op_i) 
                                    >> 1U)))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__Vfuncout 
            = ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__Vfuncout) 
               | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__Vfuncout));
        if ((((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_valid) 
              & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__Vfuncout)) 
             & (0U != (0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[1U] 
                                >> 0x16U))))) {
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_uses_rs1) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_instr[1U] 
                              >> 0x11U)) == (0x1fU 
                                             & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[1U] 
                                                >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__Vfuncout = 1U;
            }
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_uses_rs2) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_instr[1U] 
                              >> 0xcU)) == (0x1fU & 
                                            (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[1U] 
                                             >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__Vfuncout = 1U;
            }
        }
        if (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__Vfuncout) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw = 1U;
        }
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_uses_rs2 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_uses_rs1 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_valid 
            = (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__Vfuncout = 0U;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[0U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[1U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[2U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__Vfuncout 
            = (1U & (IData)(((0x28U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i))))
                                 : (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i) 
                                     >> 1U) | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i))))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__Vfuncout 
            = (1U & (IData)(((8U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__op_i))))
                                 : ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__op_i) 
                                    >> 1U)))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__Vfuncout 
            = ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__Vfuncout) 
               | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__Vfuncout));
        if ((((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_valid) 
              & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__Vfuncout)) 
             & (0U != (0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[1U] 
                                >> 0x16U))))) {
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_uses_rs1) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_instr[1U] 
                              >> 0x11U)) == (0x1fU 
                                             & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[1U] 
                                                >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__Vfuncout = 1U;
            }
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_uses_rs2) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_instr[1U] 
                              >> 0xcU)) == (0x1fU & 
                                            (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[1U] 
                                             >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__Vfuncout = 1U;
            }
        }
        if (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__Vfuncout) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw = 1U;
        }
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_uses_rs2 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_uses_rs1 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_valid 
            = (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__Vfuncout = 0U;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[0U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[1U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[2U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__Vfuncout 
            = (1U & (IData)(((0x28U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i))))
                                 : (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i) 
                                     >> 1U) | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i))))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__Vfuncout 
            = (1U & (IData)(((8U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__op_i))))
                                 : ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__op_i) 
                                    >> 1U)))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__Vfuncout 
            = ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__Vfuncout) 
               | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__Vfuncout));
        if ((((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_valid) 
              & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__Vfuncout)) 
             & (0U != (0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[1U] 
                                >> 0x16U))))) {
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_uses_rs1) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_instr[1U] 
                              >> 0x11U)) == (0x1fU 
                                             & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[1U] 
                                                >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__Vfuncout = 1U;
            }
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_uses_rs2) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_instr[1U] 
                              >> 0xcU)) == (0x1fU & 
                                            (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[1U] 
                                             >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__Vfuncout = 1U;
            }
        }
        if (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__Vfuncout) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw = 1U;
        }
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store = 0U;
    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U])) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
    } else if ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                >> 0x1fU)) {
        if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
        } else if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
        } else if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb 
                = ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                    ? 0xfU : ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                               ? 0xcU : 3U));
        }
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store 
            = (IData)((0U == (0x70000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])));
    } else if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
        if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
            if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                              >> 0x1bU)))) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 1U;
                }
                if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb 
                        = ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                            ? ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                ? 8U : 4U) : ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                               ? 2U
                                               : 1U));
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb 
                        = ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                            ? 0xcU : 3U);
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb 
                    = ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                        ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                            ? ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                ? 8U : 4U) : ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                               ? 2U
                                               : 1U))
                        : 0xfU);
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load 
                = (1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                         >> 0x1cU));
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                          >> 0x1cU)))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store = 0U;
            }
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb 
                = ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                    ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                        ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                            ? 0xcU : 3U) : ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                             ? ((1U 
                                                 & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                                 ? 2U
                                                 : 1U)))
                    : 0xfU);
        }
    } else {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__access_misaligned 
        = (1U & ((~ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U]) 
                 & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                     >> 0x1fU) ? (IData)(((0U == (0x70000000U 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) 
                                          & ((0x8000000U 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                                              ? (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data))
                                              : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)))
                     : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                         >> 0x1eU) & ((0x20000000U 
                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                                       ? ((0x10000000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                                           ? ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                                  >> 0x1bU)) 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                           : ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                                  >> 0x1bU)) 
                                              & (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data))))
                                       : (IData)(((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__store_data_comb 
        = ((0xfU == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U] 
                               << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                         >> 0x1bU))))
            ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                ? ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                    ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
                       << 0x18U) : (0xff0000U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
                                                 << 0x10U)))
                : ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                    ? (0xff00U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
                                  << 8U)) : (0xffU 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data)))
            : ((0x10U == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U] 
                                    << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                              >> 0x1bU))))
                ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                    ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
                       << 0x10U) : (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data))
                : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_enable = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data;
    if (((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
         & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__is_csr))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_enable 
            = (IData)((((0x40000000U == (0xc0000000U 
                                         & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])) 
                        & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U]) 
                       & ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                           ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                               ? ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                      >> 0x1bU)) & 
                                  (0U != vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data))
                               : ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                      >> 0x1bU)) | 
                                  (0U != vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data)))
                           : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                               ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                   ? (0U != vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data)
                                   : (0U != vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data))
                               : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                  >> 0x1bU)))));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data 
            = ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U])
                ? ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                    >> 0x1fU) ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data
                    : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                        ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                            ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                    ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data
                                    : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data 
                                       & (~ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data)))
                                : ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                    ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data 
                                       | vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data)
                                    : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data))
                            : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                    ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data 
                                       & (~ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data))
                                    : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data 
                                       | vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data))
                                : ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                    ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data
                                    : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data)))
                        : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data))
                : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data);
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load) 
           | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__valid_memory_op 
        = ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status)) 
           & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0));
}
