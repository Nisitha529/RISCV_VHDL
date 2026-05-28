// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_cpu.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_cpu__Syms.h"
#include "Vtb_top_cpu___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__1(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__clear_memories__3__i;
    __Vtask_tb_top_cpu__DOT__clear_memories__3__i = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__144__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__144__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__144__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__144__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__144__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__144__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__144__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__144__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__144__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__145__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__145__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__145__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__145__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__146__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__146__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__146__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__146__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__148__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__148__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__148__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__148__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__149__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__149__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__149__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__149__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__150__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__150__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__150__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__150__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__151__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__151__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__151__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__151__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__152__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__152__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__152__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__152__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__153__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__153__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__153__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__153__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__154__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__154__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__154__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__154__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__155__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__155__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__155__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__155__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__156__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__156__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__156__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__156__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__157__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__157__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__157__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__157__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__158__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__158__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__158__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__158__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__159__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__159__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__159__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__159__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__160__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__160__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__160__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__160__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__161__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__161__actual;
    __Vtask_tb_top_cpu__DOT__check32__161__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__161__expected;
    __Vtask_tb_top_cpu__DOT__check32__161__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__162__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__162__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__162__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__162__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__163__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__163__actual;
    __Vtask_tb_top_cpu__DOT__check32__163__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__163__expected;
    __Vtask_tb_top_cpu__DOT__check32__163__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__164__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__164__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__164__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__164__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__165__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__165__actual;
    __Vtask_tb_top_cpu__DOT__check32__165__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__165__expected;
    __Vtask_tb_top_cpu__DOT__check32__165__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__166__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__166__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__166__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__166__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__167__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__167__actual;
    __Vtask_tb_top_cpu__DOT__check32__167__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__167__expected;
    __Vtask_tb_top_cpu__DOT__check32__167__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__168__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__168__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__168__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__168__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__169__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__169__actual;
    __Vtask_tb_top_cpu__DOT__check32__169__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__169__expected;
    __Vtask_tb_top_cpu__DOT__check32__169__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__170__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__170__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__170__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__171__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__171__actual;
    __Vtask_tb_top_cpu__DOT__check32__171__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__171__expected;
    __Vtask_tb_top_cpu__DOT__check32__171__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__172__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__172__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__172__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__172__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__173__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__173__actual;
    __Vtask_tb_top_cpu__DOT__check32__173__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__173__expected;
    __Vtask_tb_top_cpu__DOT__check32__173__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__174__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__174__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__174__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__174__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__175__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__175__actual;
    __Vtask_tb_top_cpu__DOT__check32__175__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__175__expected;
    __Vtask_tb_top_cpu__DOT__check32__175__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__176__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__176__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__176__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__176__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__177__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__177__actual;
    __Vtask_tb_top_cpu__DOT__check32__177__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__177__expected;
    __Vtask_tb_top_cpu__DOT__check32__177__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__178__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__178__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__178__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__178__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__179__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__179__actual;
    __Vtask_tb_top_cpu__DOT__check32__179__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__179__expected;
    __Vtask_tb_top_cpu__DOT__check32__179__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__180__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__180__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__180__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__180__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__181__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__181__actual;
    __Vtask_tb_top_cpu__DOT__check32__181__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__181__expected;
    __Vtask_tb_top_cpu__DOT__check32__181__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__182__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__182__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__182__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__182__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__183__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__183__actual;
    __Vtask_tb_top_cpu__DOT__check32__183__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__183__expected;
    __Vtask_tb_top_cpu__DOT__check32__183__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__184__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__184__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__184__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__184__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__185__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__185__actual;
    __Vtask_tb_top_cpu__DOT__check32__185__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__185__expected;
    __Vtask_tb_top_cpu__DOT__check32__185__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__186__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__186__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__186__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__186__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__run_exception_test__187__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__187__fault_instr;
    __Vtask_tb_top_cpu__DOT__run_exception_test__187__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__187__expected_mcause;
    __Vtask_tb_top_cpu__DOT__run_exception_test__187__expected_mcause = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__187__expected_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__187__expected_mtval = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__187__check_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__187__check_mtval = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__188__fault_instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__clear_memories__189__i;
    __Vtask_tb_top_cpu__DOT__clear_memories__189__i = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__nop__190__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__nop__190__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__191__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__191__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__191__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__191__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__191__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__191__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__192__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__192__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__192__rd;
    __Vfunc_tb_top_cpu__DOT__addi__192__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__192__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__192__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__192__imm;
    __Vfunc_tb_top_cpu__DOT__addi__192__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__193__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__193__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__193__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__193__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__193__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__193__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__194__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__194__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__194__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__194__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__194__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__194__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lui__195__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lui__195__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lui__195__rd;
    __Vfunc_tb_top_cpu__DOT__lui__195__rd = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__lui__195__imm20;
    __Vfunc_tb_top_cpu__DOT__lui__195__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__196__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_u__196__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__196__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__196__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__196__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__196__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__196__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_u__196__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__197__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__197__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__197__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__197__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__197__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__197__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__198__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__198__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__198__rd;
    __Vfunc_tb_top_cpu__DOT__addi__198__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__198__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__198__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__198__imm;
    __Vfunc_tb_top_cpu__DOT__addi__198__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__199__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__199__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__199__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__199__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__199__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__199__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__200__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__200__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__200__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__200__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__200__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__200__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__201__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__201__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__201__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__201__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__201__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__201__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__201__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__201__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__202__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__202__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__202__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__202__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__202__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__202__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__203__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__203__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__203__rd;
    __Vfunc_tb_top_cpu__DOT__addi__203__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__203__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__203__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__203__imm;
    __Vfunc_tb_top_cpu__DOT__addi__203__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__204__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__204__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__204__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__204__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__204__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__204__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__205__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__205__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__205__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__205__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__205__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__205__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__206__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__206__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__206__rd;
    __Vfunc_tb_top_cpu__DOT__addi__206__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__206__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__206__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__206__imm;
    __Vfunc_tb_top_cpu__DOT__addi__206__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__207__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__207__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__207__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__207__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__207__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__207__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__208__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__208__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__208__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__208__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__208__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__208__idx = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__209__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__209__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__209__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__209__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__209__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__209__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__210__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__210__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__210__rd;
    __Vfunc_tb_top_cpu__DOT__addi__210__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__210__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__210__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__210__imm;
    __Vfunc_tb_top_cpu__DOT__addi__210__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__211__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__211__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__211__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__211__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__211__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__211__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__212__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__212__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__212__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__212__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__212__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__212__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__213__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__213__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__213__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__213__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__213__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__213__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__213__imm;
    __Vfunc_tb_top_cpu__DOT__sw__213__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__214__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__214__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__214__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__214__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__214__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__214__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__215__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__215__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__215__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__215__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__215__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__215__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__216__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__216__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__216__rd;
    __Vfunc_tb_top_cpu__DOT__jal__216__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__216__imm;
    __Vfunc_tb_top_cpu__DOT__jal__216__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__217__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__217__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__217__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__217__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__217__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__217__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__217__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__217__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__218__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__218__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__218__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__218__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__218__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__218__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__219__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__219__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__219__rd;
    __Vfunc_tb_top_cpu__DOT__addi__219__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__219__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__219__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__219__imm;
    __Vfunc_tb_top_cpu__DOT__addi__219__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__220__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__220__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__220__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__220__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__220__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__220__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__221__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__221__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__221__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__221__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__221__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__221__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__222__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__222__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__222__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__222__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__222__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__222__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__222__imm;
    __Vfunc_tb_top_cpu__DOT__sw__222__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__223__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__223__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__223__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__223__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__223__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__223__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__224__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__224__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__224__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__224__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__224__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__224__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__225__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__225__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__225__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__225__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__225__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__225__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__225__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__225__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__226__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__226__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__226__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__226__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__226__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__226__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__227__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__227__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__227__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__227__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__227__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__227__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__227__imm;
    __Vfunc_tb_top_cpu__DOT__sw__227__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__228__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__228__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__228__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__228__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__228__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__228__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__229__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__229__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__229__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__229__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__229__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__229__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__230__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__230__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__230__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__230__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__230__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__230__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__230__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__230__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__231__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__231__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__231__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__231__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__231__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__231__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__232__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__232__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__232__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__232__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__232__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__232__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__232__imm;
    __Vfunc_tb_top_cpu__DOT__sw__232__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__233__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__233__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__233__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__233__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__233__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__233__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__234__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__234__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__234__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__234__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__234__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__234__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__235__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__235__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__235__rd;
    __Vfunc_tb_top_cpu__DOT__addi__235__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__235__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__235__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__235__imm;
    __Vfunc_tb_top_cpu__DOT__addi__235__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__236__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__236__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__236__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__236__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__236__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__236__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__237__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__237__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__237__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__237__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__237__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__237__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__238__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__238__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__238__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__238__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__238__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__238__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__238__imm;
    __Vfunc_tb_top_cpu__DOT__sw__238__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__239__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__239__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__239__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__239__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__239__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__239__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__240__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__240__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__240__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__240__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__240__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__240__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__241__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__241__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__241__rd;
    __Vfunc_tb_top_cpu__DOT__jal__241__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__241__imm;
    __Vfunc_tb_top_cpu__DOT__jal__241__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__242__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__242__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__242__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__242__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__242__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__242__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__242__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__242__opcode = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__244__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__244__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__244__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__244__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__244__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__244__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__244__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__244__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__244__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__245__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__245__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__245__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__245__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__246__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__246__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__246__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__246__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__247__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__247__actual;
    __Vtask_tb_top_cpu__DOT__check32__247__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__247__expected;
    __Vtask_tb_top_cpu__DOT__check32__247__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__248__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__248__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__248__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__248__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__249__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__249__actual;
    __Vtask_tb_top_cpu__DOT__check32__249__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__249__expected;
    __Vtask_tb_top_cpu__DOT__check32__249__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__250__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__250__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__250__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__250__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__251__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__251__actual;
    __Vtask_tb_top_cpu__DOT__check32__251__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__251__expected;
    __Vtask_tb_top_cpu__DOT__check32__251__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__252__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__252__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__252__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__252__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__253__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__253__actual;
    __Vtask_tb_top_cpu__DOT__check32__253__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__253__expected;
    __Vtask_tb_top_cpu__DOT__check32__253__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__254__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__254__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__254__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__254__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__255__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__255__actual;
    __Vtask_tb_top_cpu__DOT__check32__255__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__255__expected;
    __Vtask_tb_top_cpu__DOT__check32__255__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__256__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__256__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__256__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__256__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__run_exception_test__257__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__257__fault_instr;
    __Vtask_tb_top_cpu__DOT__run_exception_test__257__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__257__expected_mcause;
    __Vtask_tb_top_cpu__DOT__run_exception_test__257__expected_mcause = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__257__expected_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__257__expected_mtval = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__257__check_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__257__check_mtval = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__ebreak__258__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__ebreak__258__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__259__fault_instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__clear_memories__260__i;
    __Vtask_tb_top_cpu__DOT__clear_memories__260__i = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__nop__261__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__nop__261__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__262__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__262__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__262__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__262__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__262__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__262__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__263__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__263__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__263__rd;
    __Vfunc_tb_top_cpu__DOT__addi__263__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__263__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__263__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__263__imm;
    __Vfunc_tb_top_cpu__DOT__addi__263__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__264__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__264__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__264__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__264__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__264__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__264__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__265__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__265__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__265__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__265__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__265__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__265__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lui__266__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lui__266__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lui__266__rd;
    __Vfunc_tb_top_cpu__DOT__lui__266__rd = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__lui__266__imm20;
    __Vfunc_tb_top_cpu__DOT__lui__266__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__267__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_u__267__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__267__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__267__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__267__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__267__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__267__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_u__267__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__268__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__268__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__268__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__268__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__268__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__268__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__269__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__269__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__269__rd;
    __Vfunc_tb_top_cpu__DOT__addi__269__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__269__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__269__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__269__imm;
    __Vfunc_tb_top_cpu__DOT__addi__269__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__270__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__270__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__270__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__270__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__270__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__270__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__271__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__271__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__271__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__271__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__271__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__271__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__272__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__272__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__272__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__272__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__272__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__272__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__272__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__272__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__273__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__273__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__273__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__273__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__273__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__273__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__274__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__274__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__274__rd;
    __Vfunc_tb_top_cpu__DOT__addi__274__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__274__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__274__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__274__imm;
    __Vfunc_tb_top_cpu__DOT__addi__274__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__275__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__275__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__275__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__275__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__275__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__275__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__276__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__276__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__276__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__276__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__276__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__276__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__277__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__277__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__277__rd;
    __Vfunc_tb_top_cpu__DOT__addi__277__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__277__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__277__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__277__imm;
    __Vfunc_tb_top_cpu__DOT__addi__277__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__278__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__278__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__278__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__278__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__278__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__278__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__279__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__279__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__279__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__279__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__279__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__279__idx = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__280__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__280__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__280__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__280__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__280__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__280__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__281__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__281__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__281__rd;
    __Vfunc_tb_top_cpu__DOT__addi__281__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__281__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__281__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__281__imm;
    __Vfunc_tb_top_cpu__DOT__addi__281__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__282__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__282__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__282__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__282__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__282__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__282__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__283__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__283__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__283__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__283__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__283__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__283__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__284__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__284__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__284__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__284__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__284__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__284__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__284__imm;
    __Vfunc_tb_top_cpu__DOT__sw__284__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__285__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__285__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__285__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__285__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__285__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__285__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__286__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__286__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__286__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__286__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__286__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__286__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__287__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__287__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__287__rd;
    __Vfunc_tb_top_cpu__DOT__jal__287__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__287__imm;
    __Vfunc_tb_top_cpu__DOT__jal__287__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__288__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__288__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__288__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__288__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__288__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__288__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__288__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__288__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__289__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__289__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__289__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__289__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__289__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__289__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__290__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__290__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__290__rd;
    __Vfunc_tb_top_cpu__DOT__addi__290__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__290__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__290__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__290__imm;
    __Vfunc_tb_top_cpu__DOT__addi__290__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__291__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__291__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__291__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__291__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__291__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__291__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__292__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__292__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__292__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__292__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__292__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__292__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__293__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__293__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__293__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__293__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__293__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__293__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__293__imm;
    __Vfunc_tb_top_cpu__DOT__sw__293__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__294__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__294__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__294__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__294__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__294__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__294__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__295__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__295__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__295__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__295__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__295__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__295__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__296__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__296__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__296__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__296__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__296__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__296__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__296__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__296__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__297__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__297__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__297__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__297__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__297__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__297__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__298__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__298__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__298__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__298__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__298__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__298__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__298__imm;
    __Vfunc_tb_top_cpu__DOT__sw__298__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__299__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__299__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__299__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__299__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__299__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__299__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__300__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__300__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__300__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__300__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__300__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__300__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__301__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__301__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__301__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__301__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__301__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__301__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__301__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__301__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__302__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__302__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__302__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__302__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__302__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__302__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__303__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__303__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__303__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__303__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__303__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__303__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__303__imm;
    __Vfunc_tb_top_cpu__DOT__sw__303__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__304__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__304__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__304__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__304__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__304__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__304__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__305__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__305__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__305__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__305__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__305__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__305__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__306__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__306__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__306__rd;
    __Vfunc_tb_top_cpu__DOT__addi__306__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__306__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__306__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__306__imm;
    __Vfunc_tb_top_cpu__DOT__addi__306__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__307__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__307__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__307__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__307__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__307__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__307__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__308__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__308__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__308__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__308__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__308__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__308__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__309__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__309__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__309__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__309__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__309__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__309__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__309__imm;
    __Vfunc_tb_top_cpu__DOT__sw__309__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__310__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__310__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__310__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__310__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__310__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__310__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__311__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__311__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__311__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__311__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__311__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__311__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__312__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__312__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__312__rd;
    __Vfunc_tb_top_cpu__DOT__jal__312__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__312__imm;
    __Vfunc_tb_top_cpu__DOT__jal__312__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__313__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__313__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__313__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__313__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__313__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__313__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__313__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__313__opcode = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__315__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__315__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__315__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__315__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__315__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__315__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__315__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__315__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__315__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__316__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__316__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__316__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__316__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__317__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__317__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__317__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__317__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__318__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__318__actual;
    __Vtask_tb_top_cpu__DOT__check32__318__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__318__expected;
    __Vtask_tb_top_cpu__DOT__check32__318__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__319__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__319__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__319__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__319__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__320__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__320__actual;
    __Vtask_tb_top_cpu__DOT__check32__320__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__320__expected;
    __Vtask_tb_top_cpu__DOT__check32__320__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__321__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__321__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__321__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__321__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__322__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__322__actual;
    __Vtask_tb_top_cpu__DOT__check32__322__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__322__expected;
    __Vtask_tb_top_cpu__DOT__check32__322__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__323__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__323__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__323__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__323__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__324__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__324__actual;
    __Vtask_tb_top_cpu__DOT__check32__324__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__324__expected;
    __Vtask_tb_top_cpu__DOT__check32__324__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__325__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__325__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__325__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__325__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__326__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__326__actual;
    __Vtask_tb_top_cpu__DOT__check32__326__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__326__expected;
    __Vtask_tb_top_cpu__DOT__check32__326__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__327__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__327__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__327__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__327__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__run_exception_test__328__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__328__fault_instr;
    __Vtask_tb_top_cpu__DOT__run_exception_test__328__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__328__expected_mcause;
    __Vtask_tb_top_cpu__DOT__run_exception_test__328__expected_mcause = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__328__expected_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__328__expected_mtval = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__328__check_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__328__check_mtval = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lw__329__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lw__329__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lw__329__rd;
    __Vfunc_tb_top_cpu__DOT__lw__329__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lw__329__rs1;
    __Vfunc_tb_top_cpu__DOT__lw__329__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__lw__329__imm;
    __Vfunc_tb_top_cpu__DOT__lw__329__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__330__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__330__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__330__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__330__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__330__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__330__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__331__fault_instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__clear_memories__332__i;
    __Vtask_tb_top_cpu__DOT__clear_memories__332__i = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__nop__333__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__nop__333__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__334__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__334__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__334__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__334__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__334__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__334__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__335__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__335__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__335__rd;
    __Vfunc_tb_top_cpu__DOT__addi__335__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__335__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__335__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__335__imm;
    __Vfunc_tb_top_cpu__DOT__addi__335__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__336__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__336__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__336__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__336__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__336__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__336__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__337__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__337__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__337__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__337__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__337__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__337__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lui__338__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lui__338__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lui__338__rd;
    __Vfunc_tb_top_cpu__DOT__lui__338__rd = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__lui__338__imm20;
    __Vfunc_tb_top_cpu__DOT__lui__338__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__339__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_u__339__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__339__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__339__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__339__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__339__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__339__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_u__339__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__340__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__340__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__340__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__340__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__340__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__340__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__341__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__341__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__341__rd;
    __Vfunc_tb_top_cpu__DOT__addi__341__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__341__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__341__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__341__imm;
    __Vfunc_tb_top_cpu__DOT__addi__341__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__342__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__342__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__342__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__342__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__342__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__342__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__343__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__343__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__343__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__343__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__343__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__343__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__344__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__344__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__344__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__344__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__344__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__344__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__344__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__344__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__345__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__345__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__345__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__345__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__345__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__345__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__346__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__346__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__346__rd;
    __Vfunc_tb_top_cpu__DOT__addi__346__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__346__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__346__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__346__imm;
    __Vfunc_tb_top_cpu__DOT__addi__346__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__347__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__347__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__347__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__347__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__347__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__347__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__348__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__348__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__348__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__348__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__348__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__348__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__349__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__349__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__349__rd;
    __Vfunc_tb_top_cpu__DOT__addi__349__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__349__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__349__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__349__imm;
    __Vfunc_tb_top_cpu__DOT__addi__349__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__350__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__350__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__350__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__350__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__350__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__350__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__351__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__351__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__351__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__351__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__351__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__351__idx = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__352__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__352__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__352__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__352__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__352__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__352__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__353__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__353__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__353__rd;
    __Vfunc_tb_top_cpu__DOT__addi__353__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__353__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__353__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__353__imm;
    __Vfunc_tb_top_cpu__DOT__addi__353__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__354__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__354__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__354__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__354__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__354__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__354__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__355__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__355__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__355__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__355__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__355__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__355__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__356__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__356__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__356__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__356__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__356__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__356__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__356__imm;
    __Vfunc_tb_top_cpu__DOT__sw__356__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__357__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__357__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__357__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__357__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__357__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__357__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__358__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__358__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__358__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__358__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__358__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__358__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__359__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__359__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__359__rd;
    __Vfunc_tb_top_cpu__DOT__jal__359__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__359__imm;
    __Vfunc_tb_top_cpu__DOT__jal__359__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__360__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__360__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__360__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__360__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__360__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__360__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__360__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__360__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__361__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__361__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__361__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__361__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__361__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__361__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__362__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__362__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__362__rd;
    __Vfunc_tb_top_cpu__DOT__addi__362__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__362__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__362__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__362__imm;
    __Vfunc_tb_top_cpu__DOT__addi__362__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__363__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__363__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__363__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__363__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__363__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__363__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__364__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__364__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__364__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__364__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__364__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__364__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__365__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__365__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__365__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__365__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__365__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__365__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__365__imm;
    __Vfunc_tb_top_cpu__DOT__sw__365__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__366__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__366__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__366__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__366__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__366__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__366__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__367__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__367__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__367__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__367__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__367__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__367__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__368__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__368__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__368__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__368__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__368__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__368__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__368__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__368__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__369__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__369__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__369__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__369__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__369__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__369__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__370__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__370__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__370__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__370__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__370__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__370__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__370__imm;
    __Vfunc_tb_top_cpu__DOT__sw__370__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__371__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__371__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__371__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__371__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__371__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__371__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__372__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__372__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__372__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__372__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__372__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__372__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__373__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__373__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__373__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__373__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__373__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__373__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__373__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__373__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__374__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__374__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__374__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__374__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__374__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__374__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__375__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__375__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__375__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__375__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__375__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__375__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__375__imm;
    __Vfunc_tb_top_cpu__DOT__sw__375__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__376__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__376__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__376__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__376__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__376__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__376__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__377__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__377__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__377__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__377__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__377__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__377__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__378__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__378__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__378__rd;
    __Vfunc_tb_top_cpu__DOT__addi__378__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__378__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__378__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__378__imm;
    __Vfunc_tb_top_cpu__DOT__addi__378__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__379__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__379__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__379__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__379__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__379__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__379__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__380__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__380__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__380__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__380__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__380__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__380__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__381__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__381__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__381__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__381__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__381__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__381__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__381__imm;
    __Vfunc_tb_top_cpu__DOT__sw__381__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__382__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__382__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__382__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__382__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__382__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__382__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__383__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__383__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__383__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__383__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__383__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__383__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__384__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__384__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__384__rd;
    __Vfunc_tb_top_cpu__DOT__jal__384__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__384__imm;
    __Vfunc_tb_top_cpu__DOT__jal__384__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__385__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__385__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__385__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__385__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__385__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__385__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__385__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__385__opcode = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__387__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__387__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__387__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__387__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__387__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__387__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__387__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__387__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__387__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__388__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__388__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__388__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__388__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__389__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__389__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__389__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__389__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__390__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__390__actual;
    __Vtask_tb_top_cpu__DOT__check32__390__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__390__expected;
    __Vtask_tb_top_cpu__DOT__check32__390__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__391__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__391__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__391__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__391__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__392__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__392__actual;
    __Vtask_tb_top_cpu__DOT__check32__392__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__392__expected;
    __Vtask_tb_top_cpu__DOT__check32__392__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__393__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__393__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__393__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__393__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__394__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__394__actual;
    __Vtask_tb_top_cpu__DOT__check32__394__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__394__expected;
    __Vtask_tb_top_cpu__DOT__check32__394__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__395__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__395__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__395__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__395__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__396__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__396__actual;
    __Vtask_tb_top_cpu__DOT__check32__396__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__396__expected;
    __Vtask_tb_top_cpu__DOT__check32__396__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__397__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__397__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__397__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__397__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__398__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__398__actual;
    __Vtask_tb_top_cpu__DOT__check32__398__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__398__expected;
    __Vtask_tb_top_cpu__DOT__check32__398__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__399__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__399__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__399__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__399__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__run_exception_test__400__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__400__fault_instr;
    __Vtask_tb_top_cpu__DOT__run_exception_test__400__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__400__expected_mcause;
    __Vtask_tb_top_cpu__DOT__run_exception_test__400__expected_mcause = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__400__expected_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__400__expected_mtval = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__400__check_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__400__check_mtval = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__401__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__401__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__401__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__401__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__401__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__401__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__401__imm;
    __Vfunc_tb_top_cpu__DOT__sw__401__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__402__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__402__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__402__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__402__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__402__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__402__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__403__fault_instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__clear_memories__404__i;
    __Vtask_tb_top_cpu__DOT__clear_memories__404__i = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__nop__405__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__nop__405__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__406__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__406__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__406__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__406__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__406__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__406__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__407__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__407__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__407__rd;
    __Vfunc_tb_top_cpu__DOT__addi__407__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__407__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__407__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__407__imm;
    __Vfunc_tb_top_cpu__DOT__addi__407__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__408__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__408__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__408__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__408__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__408__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__408__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__409__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__409__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__409__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__409__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__409__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__409__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lui__410__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lui__410__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lui__410__rd;
    __Vfunc_tb_top_cpu__DOT__lui__410__rd = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__lui__410__imm20;
    __Vfunc_tb_top_cpu__DOT__lui__410__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__411__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_u__411__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__411__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__411__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__411__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__411__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__411__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_u__411__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__412__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__412__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__412__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__412__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__412__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__412__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__413__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__413__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__413__rd;
    __Vfunc_tb_top_cpu__DOT__addi__413__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__413__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__413__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__413__imm;
    __Vfunc_tb_top_cpu__DOT__addi__413__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__414__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__414__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__414__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__414__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__414__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__414__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__415__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__415__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__415__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__415__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__415__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__415__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__416__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__416__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__416__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__416__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__416__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__416__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__416__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__416__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__417__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__417__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__417__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__417__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__417__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__417__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__418__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__418__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__418__rd;
    __Vfunc_tb_top_cpu__DOT__addi__418__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__418__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__418__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__418__imm;
    __Vfunc_tb_top_cpu__DOT__addi__418__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__419__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__419__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__419__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__419__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__419__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__419__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__420__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__420__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__420__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__420__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__420__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__420__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__421__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__421__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__421__rd;
    __Vfunc_tb_top_cpu__DOT__addi__421__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__421__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__421__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__421__imm;
    __Vfunc_tb_top_cpu__DOT__addi__421__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__422__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__422__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__422__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__422__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__422__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__422__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__423__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__423__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__423__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__423__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__423__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__423__idx = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__424__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__424__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__424__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__424__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__424__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__424__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__425__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__425__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__425__rd;
    __Vfunc_tb_top_cpu__DOT__addi__425__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__425__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__425__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__425__imm;
    __Vfunc_tb_top_cpu__DOT__addi__425__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__426__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__426__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__426__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__426__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__426__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__426__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__427__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__427__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__427__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__427__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__427__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__427__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__428__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__428__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__428__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__428__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__428__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__428__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__428__imm;
    __Vfunc_tb_top_cpu__DOT__sw__428__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__429__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__429__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__429__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__429__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__429__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__429__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__430__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__430__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__430__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__430__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__430__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__430__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__431__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__431__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__431__rd;
    __Vfunc_tb_top_cpu__DOT__jal__431__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__431__imm;
    __Vfunc_tb_top_cpu__DOT__jal__431__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__432__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__432__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__432__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__432__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__432__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__432__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__432__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__432__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__433__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__433__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__433__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__433__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__433__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__433__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__434__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__434__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__434__rd;
    __Vfunc_tb_top_cpu__DOT__addi__434__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__434__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__434__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__434__imm;
    __Vfunc_tb_top_cpu__DOT__addi__434__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__435__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__435__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__435__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__435__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__435__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__435__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__436__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__436__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__436__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__436__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__436__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__436__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__437__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__437__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__437__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__437__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__437__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__437__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__437__imm;
    __Vfunc_tb_top_cpu__DOT__sw__437__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__438__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__438__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__438__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__438__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__438__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__438__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__439__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__439__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__439__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__439__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__439__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__439__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__440__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__440__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__440__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__440__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__440__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__440__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__440__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__440__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__441__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__441__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__441__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__441__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__441__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__441__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__442__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__442__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__442__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__442__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__442__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__442__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__442__imm;
    __Vfunc_tb_top_cpu__DOT__sw__442__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__443__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__443__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__443__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__443__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__443__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__443__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__444__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__444__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__444__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__444__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__444__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__444__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__445__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__445__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__445__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__445__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__445__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__445__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__445__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__445__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__446__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__446__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__446__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__446__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__446__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__446__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__447__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__447__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__447__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__447__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__447__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__447__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__447__imm;
    __Vfunc_tb_top_cpu__DOT__sw__447__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__448__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__448__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__448__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__448__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__448__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__448__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__449__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__449__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__449__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__449__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__449__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__449__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__450__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__450__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__450__rd;
    __Vfunc_tb_top_cpu__DOT__addi__450__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__450__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__450__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__450__imm;
    __Vfunc_tb_top_cpu__DOT__addi__450__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__451__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__451__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__451__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__451__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__451__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__451__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__452__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__452__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__452__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__452__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__452__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__452__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__453__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__453__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__453__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__453__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__453__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__453__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__453__imm;
    __Vfunc_tb_top_cpu__DOT__sw__453__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__454__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__454__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__454__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__454__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__454__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__454__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__455__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__455__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__455__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__455__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__455__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__455__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__456__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__456__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__456__rd;
    __Vfunc_tb_top_cpu__DOT__jal__456__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__456__imm;
    __Vfunc_tb_top_cpu__DOT__jal__456__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__457__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__457__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__457__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__457__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__457__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__457__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__457__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__457__opcode = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__459__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__459__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__459__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__459__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__459__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__459__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__459__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__459__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__459__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__460__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__460__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__460__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__460__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__461__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__461__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__461__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__461__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__462__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__462__actual;
    __Vtask_tb_top_cpu__DOT__check32__462__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__462__expected;
    __Vtask_tb_top_cpu__DOT__check32__462__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__463__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__463__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__463__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__463__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__464__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__464__actual;
    __Vtask_tb_top_cpu__DOT__check32__464__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__464__expected;
    __Vtask_tb_top_cpu__DOT__check32__464__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__465__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__465__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__465__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__465__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__466__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__466__actual;
    __Vtask_tb_top_cpu__DOT__check32__466__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__466__expected;
    __Vtask_tb_top_cpu__DOT__check32__466__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__467__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__467__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__467__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__467__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__468__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__468__actual;
    __Vtask_tb_top_cpu__DOT__check32__468__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__468__expected;
    __Vtask_tb_top_cpu__DOT__check32__468__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__469__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__469__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__469__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__469__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__470__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__470__actual;
    __Vtask_tb_top_cpu__DOT__check32__470__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__470__expected;
    __Vtask_tb_top_cpu__DOT__check32__470__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__471__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__471__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__471__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__471__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__run_exception_test__472__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__472__fault_instr;
    __Vtask_tb_top_cpu__DOT__run_exception_test__472__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__472__expected_mcause;
    __Vtask_tb_top_cpu__DOT__run_exception_test__472__expected_mcause = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__472__expected_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__472__expected_mtval = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__472__check_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__472__check_mtval = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lw__473__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lw__473__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lw__473__rd;
    __Vfunc_tb_top_cpu__DOT__lw__473__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lw__473__rs1;
    __Vfunc_tb_top_cpu__DOT__lw__473__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__lw__473__imm;
    __Vfunc_tb_top_cpu__DOT__lw__473__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__474__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__474__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__474__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__474__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__474__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__474__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__475__fault_instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__clear_memories__476__i;
    __Vtask_tb_top_cpu__DOT__clear_memories__476__i = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__nop__477__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__nop__477__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__478__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__478__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__478__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__478__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__478__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__478__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__479__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__479__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__479__rd;
    __Vfunc_tb_top_cpu__DOT__addi__479__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__479__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__479__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__479__imm;
    __Vfunc_tb_top_cpu__DOT__addi__479__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__480__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__480__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__480__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__480__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__480__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__480__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__481__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__481__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__481__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__481__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__481__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__481__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lui__482__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lui__482__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lui__482__rd;
    __Vfunc_tb_top_cpu__DOT__lui__482__rd = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__lui__482__imm20;
    __Vfunc_tb_top_cpu__DOT__lui__482__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__483__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_u__483__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__483__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__483__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__483__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__483__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__483__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_u__483__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__484__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__484__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__484__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__484__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__484__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__484__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__485__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__485__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__485__rd;
    __Vfunc_tb_top_cpu__DOT__addi__485__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__485__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__485__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__485__imm;
    __Vfunc_tb_top_cpu__DOT__addi__485__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__486__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__486__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__486__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__486__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__486__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__486__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__487__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__487__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__487__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__487__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__487__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__487__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__488__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__488__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__488__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__488__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__488__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__488__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__488__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__488__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__489__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__489__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__489__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__489__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__489__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__489__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__490__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__490__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__490__rd;
    __Vfunc_tb_top_cpu__DOT__addi__490__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__490__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__490__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__490__imm;
    __Vfunc_tb_top_cpu__DOT__addi__490__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__491__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__491__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__491__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__491__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__491__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__491__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__492__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__492__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__492__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__492__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__492__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__492__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__493__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__493__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__493__rd;
    __Vfunc_tb_top_cpu__DOT__addi__493__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__493__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__493__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__493__imm;
    __Vfunc_tb_top_cpu__DOT__addi__493__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__494__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__494__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__494__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__494__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__494__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__494__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__495__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__495__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__495__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__495__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__495__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__495__idx = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__496__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__496__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__496__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__496__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__496__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__496__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__497__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__497__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__497__rd;
    __Vfunc_tb_top_cpu__DOT__addi__497__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__497__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__497__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__497__imm;
    __Vfunc_tb_top_cpu__DOT__addi__497__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__498__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__498__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__498__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__498__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__498__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__498__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__499__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__499__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__499__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__499__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__499__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__499__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__500__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__500__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__500__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__500__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__500__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__500__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__500__imm;
    __Vfunc_tb_top_cpu__DOT__sw__500__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__501__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__501__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__501__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__501__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__501__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__501__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__502__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__502__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__502__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__502__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__502__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__502__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__503__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__503__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__503__rd;
    __Vfunc_tb_top_cpu__DOT__jal__503__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__503__imm;
    __Vfunc_tb_top_cpu__DOT__jal__503__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__504__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__504__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__504__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__504__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__504__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__504__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__504__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__504__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__505__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__505__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__505__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__505__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__505__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__505__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__506__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__506__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__506__rd;
    __Vfunc_tb_top_cpu__DOT__addi__506__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__506__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__506__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__506__imm;
    __Vfunc_tb_top_cpu__DOT__addi__506__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__507__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__507__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__507__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__507__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__507__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__507__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__508__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__508__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__508__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__508__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__508__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__508__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__509__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__509__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__509__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__509__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__509__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__509__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__509__imm;
    __Vfunc_tb_top_cpu__DOT__sw__509__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__510__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__510__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__510__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__510__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__510__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__510__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__511__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__511__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__511__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__511__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__511__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__511__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__512__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__512__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__512__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__512__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__512__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__512__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__512__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__512__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__513__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__513__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__513__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__513__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__513__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__513__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__514__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__514__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__514__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__514__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__514__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__514__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__514__imm;
    __Vfunc_tb_top_cpu__DOT__sw__514__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__515__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__515__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__515__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__515__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__515__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__515__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__516__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__516__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__516__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__516__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__516__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__516__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__517__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__517__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__517__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__517__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__517__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__517__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__517__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__517__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__518__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__518__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__518__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__518__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__518__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__518__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__519__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__519__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__519__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__519__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__519__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__519__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__519__imm;
    __Vfunc_tb_top_cpu__DOT__sw__519__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__520__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__520__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__520__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__520__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__520__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__520__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__521__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__521__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__521__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__521__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__521__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__521__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__522__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__522__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__522__rd;
    __Vfunc_tb_top_cpu__DOT__addi__522__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__522__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__522__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__522__imm;
    __Vfunc_tb_top_cpu__DOT__addi__522__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__523__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__523__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__523__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__523__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__523__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__523__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__524__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__524__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__524__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__524__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__524__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__524__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__525__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__525__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__525__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__525__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__525__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__525__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__525__imm;
    __Vfunc_tb_top_cpu__DOT__sw__525__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__526__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__526__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__526__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__526__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__526__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__526__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__527__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__527__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__527__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__527__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__527__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__527__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__528__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__528__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__528__rd;
    __Vfunc_tb_top_cpu__DOT__jal__528__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__528__imm;
    __Vfunc_tb_top_cpu__DOT__jal__528__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__529__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__529__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__529__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__529__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__529__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__529__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__529__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__529__opcode = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__531__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__531__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__531__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__531__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__531__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__531__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__531__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__531__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__531__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__532__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__532__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__532__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__532__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__533__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__533__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__533__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__533__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__534__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__534__actual;
    __Vtask_tb_top_cpu__DOT__check32__534__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__534__expected;
    __Vtask_tb_top_cpu__DOT__check32__534__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__535__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__535__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__535__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__535__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__536__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__536__actual;
    __Vtask_tb_top_cpu__DOT__check32__536__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__536__expected;
    __Vtask_tb_top_cpu__DOT__check32__536__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__537__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__537__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__537__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__537__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__538__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__538__actual;
    __Vtask_tb_top_cpu__DOT__check32__538__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__538__expected;
    __Vtask_tb_top_cpu__DOT__check32__538__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__539__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__539__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__539__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__539__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__540__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__540__actual;
    __Vtask_tb_top_cpu__DOT__check32__540__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__540__expected;
    __Vtask_tb_top_cpu__DOT__check32__540__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__541__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__541__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__541__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__541__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__542__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__542__actual;
    __Vtask_tb_top_cpu__DOT__check32__542__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__542__expected;
    __Vtask_tb_top_cpu__DOT__check32__542__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__543__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__543__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__543__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__543__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__run_exception_test__544__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__544__fault_instr;
    __Vtask_tb_top_cpu__DOT__run_exception_test__544__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__544__expected_mcause;
    __Vtask_tb_top_cpu__DOT__run_exception_test__544__expected_mcause = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__544__expected_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__544__expected_mtval = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_exception_test__544__check_mtval;
    __Vtask_tb_top_cpu__DOT__run_exception_test__544__check_mtval = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__545__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__545__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__545__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__545__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__545__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__545__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__545__imm;
    __Vfunc_tb_top_cpu__DOT__sw__545__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__546__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__546__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__546__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__546__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__546__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__546__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__547__fault_instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__fault_instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__clear_memories__548__i;
    __Vtask_tb_top_cpu__DOT__clear_memories__548__i = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__nop__549__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__nop__549__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__550__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__550__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__550__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__550__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__550__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__550__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__551__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__551__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__551__rd;
    __Vfunc_tb_top_cpu__DOT__addi__551__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__551__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__551__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__551__imm;
    __Vfunc_tb_top_cpu__DOT__addi__551__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__552__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__552__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__552__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__552__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__552__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__552__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__553__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__553__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__553__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__553__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__553__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__553__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lui__554__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lui__554__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lui__554__rd;
    __Vfunc_tb_top_cpu__DOT__lui__554__rd = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__lui__554__imm20;
    __Vfunc_tb_top_cpu__DOT__lui__554__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__555__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_u__555__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__555__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__555__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__555__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__555__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__555__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_u__555__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__556__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__556__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__556__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__556__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__556__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__556__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__557__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__557__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__557__rd;
    __Vfunc_tb_top_cpu__DOT__addi__557__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__557__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__557__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__557__imm;
    __Vfunc_tb_top_cpu__DOT__addi__557__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__558__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__558__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__558__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__558__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__558__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__558__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__559__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__559__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__559__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__559__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__559__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__559__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__560__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__560__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__560__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__560__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__560__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__560__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__560__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__560__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__561__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__561__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__561__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__561__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__561__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__561__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__562__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__562__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__562__rd;
    __Vfunc_tb_top_cpu__DOT__addi__562__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__562__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__562__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__562__imm;
    __Vfunc_tb_top_cpu__DOT__addi__562__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__563__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__563__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__563__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__563__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__563__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__563__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__564__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__564__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__564__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__564__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__564__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__564__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__565__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__565__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__565__rd;
    __Vfunc_tb_top_cpu__DOT__addi__565__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__565__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__565__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__565__imm;
    __Vfunc_tb_top_cpu__DOT__addi__565__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__566__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__566__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__566__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__566__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__566__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__566__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__567__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__567__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__567__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__567__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__567__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__567__idx = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__568__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__568__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__568__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__568__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__568__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__568__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__569__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__569__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__569__rd;
    __Vfunc_tb_top_cpu__DOT__addi__569__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__569__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__569__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__569__imm;
    __Vfunc_tb_top_cpu__DOT__addi__569__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__570__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__570__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__570__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__570__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__570__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__570__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__571__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__571__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__571__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__571__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__571__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__571__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__572__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__572__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__572__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__572__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__572__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__572__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__572__imm;
    __Vfunc_tb_top_cpu__DOT__sw__572__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__573__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__573__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__573__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__573__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__573__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__573__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__574__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__574__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__574__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__574__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__574__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__574__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__575__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__575__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__575__rd;
    __Vfunc_tb_top_cpu__DOT__jal__575__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__575__imm;
    __Vfunc_tb_top_cpu__DOT__jal__575__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__576__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__576__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__576__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__576__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__576__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__576__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__576__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__576__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__577__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__577__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__577__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__577__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__577__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__577__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__578__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__578__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__578__rd;
    __Vfunc_tb_top_cpu__DOT__addi__578__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__578__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__578__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__578__imm;
    __Vfunc_tb_top_cpu__DOT__addi__578__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__579__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__579__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__579__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__579__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__579__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__579__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__580__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__580__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__580__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__580__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__580__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__580__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__581__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__581__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__581__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__581__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__581__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__581__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__581__imm;
    __Vfunc_tb_top_cpu__DOT__sw__581__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__582__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__582__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__582__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__582__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__582__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__582__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__583__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__583__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__583__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__583__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__583__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__583__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__584__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__584__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__584__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__584__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__584__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__584__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__584__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__584__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__585__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__585__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__585__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__585__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__585__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__585__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__586__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__586__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__586__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__586__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__586__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__586__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__586__imm;
    __Vfunc_tb_top_cpu__DOT__sw__586__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__587__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__587__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__587__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__587__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__587__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__587__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__588__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__588__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__588__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__588__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__588__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__588__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__589__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__589__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__589__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__589__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__589__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__589__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__589__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__589__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__590__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__590__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__590__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__590__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__590__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__590__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__591__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__591__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__591__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__591__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__591__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__591__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__591__imm;
    __Vfunc_tb_top_cpu__DOT__sw__591__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__592__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__592__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__592__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__592__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__592__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__592__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__593__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__593__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__593__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__593__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__593__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__593__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__594__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__594__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__594__rd;
    __Vfunc_tb_top_cpu__DOT__addi__594__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__594__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__594__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__594__imm;
    __Vfunc_tb_top_cpu__DOT__addi__594__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__595__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__595__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__595__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__595__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__595__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__595__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__596__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__596__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__596__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__596__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__596__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__596__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__597__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__597__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__597__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__597__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__597__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__597__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__597__imm;
    __Vfunc_tb_top_cpu__DOT__sw__597__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__598__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__598__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__598__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__598__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__598__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__598__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__599__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__599__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__599__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__599__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__599__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__599__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__600__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__600__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__600__rd;
    __Vfunc_tb_top_cpu__DOT__jal__600__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__600__imm;
    __Vfunc_tb_top_cpu__DOT__jal__600__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__601__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__601__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__601__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__601__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__601__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__601__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__601__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__601__opcode = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__603__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__603__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__603__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__603__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__603__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__603__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__603__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__603__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__603__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__604__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__604__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__604__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__604__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__605__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__605__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__605__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__605__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__606__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__606__actual;
    __Vtask_tb_top_cpu__DOT__check32__606__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__606__expected;
    __Vtask_tb_top_cpu__DOT__check32__606__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__607__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__607__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__607__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__607__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__608__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__608__actual;
    __Vtask_tb_top_cpu__DOT__check32__608__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__608__expected;
    __Vtask_tb_top_cpu__DOT__check32__608__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__609__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__609__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__609__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__609__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__610__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__610__actual;
    __Vtask_tb_top_cpu__DOT__check32__610__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__610__expected;
    __Vtask_tb_top_cpu__DOT__check32__610__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__611__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__611__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__611__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__611__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__612__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__612__actual;
    __Vtask_tb_top_cpu__DOT__check32__612__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__612__expected;
    __Vtask_tb_top_cpu__DOT__check32__612__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__613__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__613__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__613__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__613__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__614__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__614__actual;
    __Vtask_tb_top_cpu__DOT__check32__614__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__614__expected;
    __Vtask_tb_top_cpu__DOT__check32__614__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__615__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__615__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__615__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__615__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__fetch_fault_delta;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__fetch_fault_delta = 0;
    IData/*20:0*/ __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__fetch_fault_offset;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__fetch_fault_offset = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__clear_memories__618__i;
    __Vtask_tb_top_cpu__DOT__clear_memories__618__i = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__nop__619__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__nop__619__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__620__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__620__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__620__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__620__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__620__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__620__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__621__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__621__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__621__rd;
    __Vfunc_tb_top_cpu__DOT__addi__621__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__621__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__621__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__621__imm;
    __Vfunc_tb_top_cpu__DOT__addi__621__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__622__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__622__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__622__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__622__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__622__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__622__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__623__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__623__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__623__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__623__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__623__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__623__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lui__624__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lui__624__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lui__624__rd;
    __Vfunc_tb_top_cpu__DOT__lui__624__rd = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__lui__624__imm20;
    __Vfunc_tb_top_cpu__DOT__lui__624__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__625__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_u__625__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__625__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__625__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__625__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__625__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__625__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_u__625__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__626__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__626__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__626__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__626__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__626__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__626__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__627__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__627__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__627__rd;
    __Vfunc_tb_top_cpu__DOT__addi__627__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__627__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__627__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__627__imm;
    __Vfunc_tb_top_cpu__DOT__addi__627__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__628__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__628__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__628__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__628__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__628__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__628__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__629__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__629__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__629__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__629__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__629__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__629__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__630__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__630__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__630__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__630__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__630__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__630__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__630__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__630__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__631__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__631__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__631__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__631__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__631__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__631__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__632__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__632__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__632__rd;
    __Vfunc_tb_top_cpu__DOT__jal__632__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__632__imm;
    __Vfunc_tb_top_cpu__DOT__jal__632__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__633__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__633__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__633__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__633__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__633__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__633__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__633__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__633__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__634__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__634__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__634__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__634__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__634__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__634__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__635__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__635__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__635__rd;
    __Vfunc_tb_top_cpu__DOT__jal__635__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__635__imm;
    __Vfunc_tb_top_cpu__DOT__jal__635__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__636__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__636__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__636__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__636__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__636__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__636__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__636__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__636__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__637__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__637__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__637__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__637__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__637__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__637__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__638__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__638__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__638__rd;
    __Vfunc_tb_top_cpu__DOT__addi__638__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__638__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__638__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__638__imm;
    __Vfunc_tb_top_cpu__DOT__addi__638__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__639__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__639__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__639__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__639__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__639__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__639__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__640__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__640__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__640__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__640__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__640__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__640__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__641__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__641__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__641__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__641__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__641__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__641__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__641__imm;
    __Vfunc_tb_top_cpu__DOT__sw__641__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__642__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__642__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__642__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__642__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__642__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__642__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__643__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__643__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__643__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__643__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__643__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__643__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__644__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__644__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__644__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__644__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__644__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__644__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__644__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__644__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__645__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__645__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__645__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__645__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__645__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__645__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__646__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__646__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__646__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__646__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__646__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__646__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__646__imm;
    __Vfunc_tb_top_cpu__DOT__sw__646__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__647__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__647__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__647__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__647__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__647__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__647__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__648__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__648__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__648__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__648__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__648__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__648__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__649__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__649__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__649__rd;
    __Vfunc_tb_top_cpu__DOT__addi__649__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__649__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__649__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__649__imm;
    __Vfunc_tb_top_cpu__DOT__addi__649__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__650__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__650__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__650__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__650__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__650__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__650__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__651__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__651__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__651__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__651__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__651__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__651__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__652__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__652__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__652__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__652__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__652__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__652__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__652__imm;
    __Vfunc_tb_top_cpu__DOT__sw__652__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__653__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__653__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__653__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__653__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__653__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__653__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__654__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__654__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__654__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__654__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__654__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__654__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__655__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__655__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__655__rd;
    __Vfunc_tb_top_cpu__DOT__jal__655__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__655__imm;
    __Vfunc_tb_top_cpu__DOT__jal__655__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__656__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__656__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__656__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__656__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__656__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__656__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__656__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__656__opcode = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__658__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__658__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__658__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__658__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__658__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__658__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__658__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__658__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__658__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__659__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__659__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__659__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__659__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__660__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__660__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__660__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__660__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__661__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__661__actual;
    __Vtask_tb_top_cpu__DOT__check32__661__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__661__expected;
    __Vtask_tb_top_cpu__DOT__check32__661__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__662__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__662__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__662__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__662__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__663__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__663__actual;
    __Vtask_tb_top_cpu__DOT__check32__663__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__663__expected;
    __Vtask_tb_top_cpu__DOT__check32__663__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__664__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__664__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__664__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__664__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__665__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__665__actual;
    __Vtask_tb_top_cpu__DOT__check32__665__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__665__expected;
    __Vtask_tb_top_cpu__DOT__check32__665__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__666__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__666__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__666__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__666__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__name;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__enable_timer;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__enable_timer = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__enable_external;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__enable_external = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__fire_timer;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__fire_timer = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__fire_external;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__fire_external = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__expected_mcause;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__expected_mcause = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__enable_timer;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__enable_timer = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__enable_external;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__enable_external = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__mie_value;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__mie_value = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__clear_memories__669__i;
    __Vtask_tb_top_cpu__DOT__clear_memories__669__i = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__nop__670__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__nop__670__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__671__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__671__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__671__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__671__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__671__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__671__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__672__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__672__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__672__rd;
    __Vfunc_tb_top_cpu__DOT__addi__672__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__672__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__672__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__672__imm;
    __Vfunc_tb_top_cpu__DOT__addi__672__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__673__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__673__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__673__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__673__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__673__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__673__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__674__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__674__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__674__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__674__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__674__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__674__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lui__675__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lui__675__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lui__675__rd;
    __Vfunc_tb_top_cpu__DOT__lui__675__rd = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__lui__675__imm20;
    __Vfunc_tb_top_cpu__DOT__lui__675__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__676__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_u__676__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__676__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__676__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__676__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__676__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__676__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_u__676__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__677__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__677__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__677__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__677__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__677__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__677__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__678__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__678__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__678__rd;
    __Vfunc_tb_top_cpu__DOT__addi__678__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__678__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__678__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__678__imm;
    __Vfunc_tb_top_cpu__DOT__addi__678__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__679__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__679__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__679__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__679__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__679__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__679__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__680__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__680__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__680__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__680__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__680__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__680__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__681__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__681__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__681__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__681__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__681__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__681__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__681__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__681__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__682__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__682__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__682__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__682__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__682__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__682__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__683__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__683__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__683__rd;
    __Vfunc_tb_top_cpu__DOT__addi__683__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__683__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__683__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__683__imm;
    __Vfunc_tb_top_cpu__DOT__addi__683__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__684__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__684__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__684__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__684__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__684__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__684__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__685__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__685__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__685__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__685__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__685__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__685__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__686__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__686__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__686__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__686__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__686__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__686__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__686__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__686__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__687__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__687__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__687__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__687__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__687__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__687__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__688__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__688__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__688__rd;
    __Vfunc_tb_top_cpu__DOT__addi__688__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__688__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__688__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__688__imm;
    __Vfunc_tb_top_cpu__DOT__addi__688__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__689__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__689__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__689__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__689__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__689__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__689__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__690__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__690__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__690__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__690__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__690__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__690__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__691__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__691__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__691__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__691__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__691__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__691__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__691__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__691__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__692__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__692__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__692__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__692__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__692__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__692__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__693__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__693__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__693__rd;
    __Vfunc_tb_top_cpu__DOT__addi__693__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__693__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__693__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__693__imm;
    __Vfunc_tb_top_cpu__DOT__addi__693__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__694__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__694__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__694__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__694__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__694__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__694__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__695__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__695__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__695__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__695__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__695__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__695__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__696__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__696__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__696__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__696__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__696__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__696__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__696__imm;
    __Vfunc_tb_top_cpu__DOT__sw__696__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__697__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__697__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__697__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__697__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__697__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__697__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__698__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__698__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__698__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__698__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__698__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__698__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__699__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__699__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__699__rd;
    __Vfunc_tb_top_cpu__DOT__jal__699__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__699__imm;
    __Vfunc_tb_top_cpu__DOT__jal__699__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__700__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__700__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__700__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__700__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__700__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__700__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__700__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__700__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__701__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__701__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__701__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__701__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__701__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__701__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__702__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__702__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__702__rd;
    __Vfunc_tb_top_cpu__DOT__addi__702__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__702__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__702__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__702__imm;
    __Vfunc_tb_top_cpu__DOT__addi__702__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__703__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__703__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__703__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__703__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__703__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__703__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__704__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__704__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__704__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__704__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__704__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__704__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__705__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__705__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__705__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__705__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__705__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__705__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__705__imm;
    __Vfunc_tb_top_cpu__DOT__sw__705__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__706__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__706__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__706__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__706__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__706__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__706__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__707__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__707__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__707__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__707__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__707__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__707__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__708__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__708__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__708__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__708__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__708__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__708__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__708__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__708__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__709__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__709__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__709__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__709__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__709__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__709__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__710__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__710__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__710__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__710__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__710__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__710__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__710__imm;
    __Vfunc_tb_top_cpu__DOT__sw__710__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__711__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__711__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__711__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__711__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__711__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__711__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__712__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__712__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__712__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__712__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__712__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__712__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__713__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__713__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__713__rd;
    __Vfunc_tb_top_cpu__DOT__addi__713__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__713__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__713__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__713__imm;
    __Vfunc_tb_top_cpu__DOT__addi__713__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__714__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__714__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__714__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__714__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__714__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__714__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__715__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__715__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__715__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__715__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__715__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__715__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__716__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__716__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__716__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__716__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__716__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__716__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__716__imm;
    __Vfunc_tb_top_cpu__DOT__sw__716__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__717__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__717__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__717__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__717__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__717__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__717__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__718__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__718__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__718__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__718__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__718__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__718__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__719__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__719__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__719__rd;
    __Vfunc_tb_top_cpu__DOT__jal__719__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__719__imm;
    __Vfunc_tb_top_cpu__DOT__jal__719__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__720__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__720__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__720__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__720__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__720__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__720__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__720__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__720__opcode = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__722__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__722__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__722__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__722__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__722__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__722__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__722__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__722__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__722__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__723__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__723__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__723__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__723__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__724__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__724__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__724__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__724__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__725__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__725__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__725__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__725__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__725__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__725__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__725__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__725__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__725__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__726__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__726__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__726__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__726__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__727__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__727__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__727__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__727__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__728__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__728__actual;
    __Vtask_tb_top_cpu__DOT__check32__728__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__728__expected;
    __Vtask_tb_top_cpu__DOT__check32__728__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__729__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__729__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__729__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__729__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__730__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__730__actual;
    __Vtask_tb_top_cpu__DOT__check32__730__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__730__expected;
    __Vtask_tb_top_cpu__DOT__check32__730__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__731__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__731__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__731__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__731__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__732__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__732__actual;
    __Vtask_tb_top_cpu__DOT__check32__732__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__732__expected;
    __Vtask_tb_top_cpu__DOT__check32__732__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__733__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__733__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__733__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__733__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__name;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__enable_timer;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__enable_timer = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__enable_external;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__enable_external = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__fire_timer;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__fire_timer = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__fire_external;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__fire_external = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__expected_mcause;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__expected_mcause = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__enable_timer;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__enable_timer = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__enable_external;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__enable_external = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__mie_value;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__mie_value = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__clear_memories__736__i;
    __Vtask_tb_top_cpu__DOT__clear_memories__736__i = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__nop__737__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__nop__737__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__738__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__738__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__738__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__738__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__738__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__738__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__739__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__739__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__739__rd;
    __Vfunc_tb_top_cpu__DOT__addi__739__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__739__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__739__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__739__imm;
    __Vfunc_tb_top_cpu__DOT__addi__739__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__740__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__740__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__740__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__740__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__740__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__740__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__741__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__741__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__741__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__741__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__741__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__741__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lui__742__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lui__742__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lui__742__rd;
    __Vfunc_tb_top_cpu__DOT__lui__742__rd = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__lui__742__imm20;
    __Vfunc_tb_top_cpu__DOT__lui__742__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__743__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_u__743__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__743__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__743__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__743__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__743__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__743__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_u__743__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__744__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__744__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__744__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__744__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__744__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__744__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__745__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__745__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__745__rd;
    __Vfunc_tb_top_cpu__DOT__addi__745__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__745__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__745__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__745__imm;
    __Vfunc_tb_top_cpu__DOT__addi__745__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__746__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__746__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__746__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__746__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__746__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__746__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__747__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__747__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__747__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__747__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__747__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__747__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__748__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__748__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__748__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__748__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__748__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__748__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__748__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__748__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__749__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__749__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__749__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__749__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__749__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__749__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__750__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__750__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__750__rd;
    __Vfunc_tb_top_cpu__DOT__addi__750__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__750__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__750__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__750__imm;
    __Vfunc_tb_top_cpu__DOT__addi__750__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__751__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__751__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__751__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__751__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__751__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__751__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__752__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__752__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__752__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__752__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__752__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__752__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__753__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__753__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__753__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__753__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__753__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__753__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__753__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__753__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__754__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__754__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__754__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__754__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__754__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__754__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__755__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__755__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__755__rd;
    __Vfunc_tb_top_cpu__DOT__addi__755__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__755__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__755__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__755__imm;
    __Vfunc_tb_top_cpu__DOT__addi__755__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__756__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__756__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__756__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__756__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__756__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__756__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__757__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__757__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__757__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__757__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__757__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__757__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__758__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__758__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__758__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__758__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__758__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__758__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__758__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__758__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__759__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__759__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__759__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__759__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__759__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__759__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__760__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__760__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__760__rd;
    __Vfunc_tb_top_cpu__DOT__addi__760__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__760__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__760__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__760__imm;
    __Vfunc_tb_top_cpu__DOT__addi__760__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__761__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__761__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__761__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__761__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__761__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__761__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__762__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__762__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__762__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__762__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__762__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__762__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__763__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__763__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__763__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__763__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__763__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__763__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__763__imm;
    __Vfunc_tb_top_cpu__DOT__sw__763__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__764__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__764__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__764__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__764__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__764__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__764__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__765__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__765__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__765__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__765__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__765__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__765__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__766__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__766__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__766__rd;
    __Vfunc_tb_top_cpu__DOT__jal__766__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__766__imm;
    __Vfunc_tb_top_cpu__DOT__jal__766__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__767__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__767__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__767__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__767__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__767__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__767__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__767__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__767__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__768__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__768__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__768__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__768__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__768__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__768__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__769__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__769__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__769__rd;
    __Vfunc_tb_top_cpu__DOT__addi__769__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__769__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__769__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__769__imm;
    __Vfunc_tb_top_cpu__DOT__addi__769__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__770__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__770__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__770__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__770__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__770__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__770__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__771__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__771__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__771__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__771__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__771__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__771__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__772__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__772__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__772__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__772__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__772__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__772__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__772__imm;
    __Vfunc_tb_top_cpu__DOT__sw__772__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__773__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__773__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__773__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__773__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__773__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__773__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__774__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__774__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__774__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__774__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__774__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__774__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__775__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__775__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__775__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__775__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__775__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__775__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__775__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__775__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__776__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__776__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__776__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__776__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__776__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__776__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__777__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__777__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__777__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__777__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__777__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__777__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__777__imm;
    __Vfunc_tb_top_cpu__DOT__sw__777__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__778__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__778__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__778__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__778__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__778__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__778__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__779__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__779__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__779__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__779__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__779__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__779__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__780__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__780__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__780__rd;
    __Vfunc_tb_top_cpu__DOT__addi__780__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__780__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__780__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__780__imm;
    __Vfunc_tb_top_cpu__DOT__addi__780__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__781__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__781__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__781__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__781__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__781__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__781__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__782__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__782__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__782__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__782__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__782__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__782__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__783__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__783__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__783__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__783__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__783__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__783__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__783__imm;
    __Vfunc_tb_top_cpu__DOT__sw__783__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__784__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__784__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__784__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__784__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__784__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__784__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__785__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__785__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__785__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__785__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__785__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__785__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__786__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__786__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__786__rd;
    __Vfunc_tb_top_cpu__DOT__jal__786__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__786__imm;
    __Vfunc_tb_top_cpu__DOT__jal__786__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__787__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__787__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__787__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__787__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__787__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__787__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__787__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__787__opcode = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__789__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__789__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__789__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__789__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__789__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__789__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__789__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__789__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__789__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__790__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__790__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__790__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__790__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__791__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__791__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__791__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__791__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__792__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__792__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__792__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__792__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__792__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__792__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__792__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__792__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__792__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__793__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__793__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__793__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__793__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__794__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__794__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__794__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__794__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__795__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__795__actual;
    __Vtask_tb_top_cpu__DOT__check32__795__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__795__expected;
    __Vtask_tb_top_cpu__DOT__check32__795__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__796__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__796__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__796__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__796__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__797__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__797__actual;
    __Vtask_tb_top_cpu__DOT__check32__797__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__797__expected;
    __Vtask_tb_top_cpu__DOT__check32__797__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__798__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__798__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__798__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__798__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__799__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__799__actual;
    __Vtask_tb_top_cpu__DOT__check32__799__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__799__expected;
    __Vtask_tb_top_cpu__DOT__check32__799__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__800__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__800__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__800__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__800__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__name;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__enable_timer;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__enable_timer = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__enable_external;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__enable_external = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__fire_timer;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__fire_timer = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__fire_external;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__fire_external = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__expected_mcause;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__expected_mcause = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__enable_timer;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__enable_timer = 0;
    CData/*0:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__enable_external;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__enable_external = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__mie_value;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__mie_value = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__clear_memories__803__i;
    __Vtask_tb_top_cpu__DOT__clear_memories__803__i = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__nop__804__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__nop__804__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__805__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__805__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__805__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__805__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__805__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__805__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__806__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__806__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__806__rd;
    __Vfunc_tb_top_cpu__DOT__addi__806__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__806__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__806__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__806__imm;
    __Vfunc_tb_top_cpu__DOT__addi__806__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__807__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__807__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__807__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__807__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__807__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__807__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__808__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__808__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__808__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__808__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__808__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__808__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__lui__809__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__lui__809__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__lui__809__rd;
    __Vfunc_tb_top_cpu__DOT__lui__809__rd = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__lui__809__imm20;
    __Vfunc_tb_top_cpu__DOT__lui__809__imm20 = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__810__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_u__810__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__810__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__810__imm20 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__810__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__810__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_u__810__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_u__810__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__811__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__811__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__811__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__811__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__811__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__811__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__812__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__812__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__812__rd;
    __Vfunc_tb_top_cpu__DOT__addi__812__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__812__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__812__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__812__imm;
    __Vfunc_tb_top_cpu__DOT__addi__812__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__813__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__813__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__813__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__813__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__813__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__813__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__814__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__814__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__814__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__814__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__814__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__814__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__815__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__815__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__815__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__815__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__815__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__815__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__815__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__815__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__816__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__816__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__816__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__816__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__816__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__816__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__817__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__817__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__817__rd;
    __Vfunc_tb_top_cpu__DOT__addi__817__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__817__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__817__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__817__imm;
    __Vfunc_tb_top_cpu__DOT__addi__817__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__818__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__818__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__818__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__818__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__818__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__818__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__819__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__819__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__819__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__819__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__819__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__819__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__820__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__820__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__820__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__820__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__820__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__820__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__820__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__820__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__821__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__821__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__821__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__821__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__821__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__821__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__822__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__822__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__822__rd;
    __Vfunc_tb_top_cpu__DOT__addi__822__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__822__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__822__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__822__imm;
    __Vfunc_tb_top_cpu__DOT__addi__822__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__823__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__823__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__823__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__823__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__823__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__823__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__824__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__824__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__824__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__824__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__824__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__824__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__825__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrw__825__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__825__rd;
    __Vfunc_tb_top_cpu__DOT__csrrw__825__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__825__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrw__825__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrw__825__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrw__825__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__826__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__826__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__826__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__826__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__826__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__826__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__827__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__827__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__827__rd;
    __Vfunc_tb_top_cpu__DOT__addi__827__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__827__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__827__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__827__imm;
    __Vfunc_tb_top_cpu__DOT__addi__827__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__828__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__828__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__828__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__828__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__828__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__828__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__829__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__829__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__829__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__829__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__829__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__829__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__830__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__830__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__830__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__830__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__830__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__830__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__830__imm;
    __Vfunc_tb_top_cpu__DOT__sw__830__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__831__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__831__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__831__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__831__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__831__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__831__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__832__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__832__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__832__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__832__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__832__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__832__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__833__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__833__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__833__rd;
    __Vfunc_tb_top_cpu__DOT__jal__833__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__833__imm;
    __Vfunc_tb_top_cpu__DOT__jal__833__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__834__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__834__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__834__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__834__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__834__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__834__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__834__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__834__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__835__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__835__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__835__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__835__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__835__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__835__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__836__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__836__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__836__rd;
    __Vfunc_tb_top_cpu__DOT__addi__836__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__836__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__836__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__836__imm;
    __Vfunc_tb_top_cpu__DOT__addi__836__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__837__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__837__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__837__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__837__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__837__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__837__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__838__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__838__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__838__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__838__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__838__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__838__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__839__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__839__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__839__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__839__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__839__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__839__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__839__imm;
    __Vfunc_tb_top_cpu__DOT__sw__839__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__840__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__840__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__840__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__840__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__840__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__840__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__841__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__841__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__841__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__841__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__841__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__841__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__842__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__csrrs__842__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__842__rd;
    __Vfunc_tb_top_cpu__DOT__csrrs__842__rd = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__842__csr_addr;
    __Vfunc_tb_top_cpu__DOT__csrrs__842__csr_addr = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__csrrs__842__rs1;
    __Vfunc_tb_top_cpu__DOT__csrrs__842__rs1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__843__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__843__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__843__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__843__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__843__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__843__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__844__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__844__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__844__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__844__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__844__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__844__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__844__imm;
    __Vfunc_tb_top_cpu__DOT__sw__844__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__845__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__845__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__845__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__845__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__845__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__845__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__846__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__846__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__846__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__846__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__846__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__846__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__addi__847__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__addi__847__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__847__rd;
    __Vfunc_tb_top_cpu__DOT__addi__847__rd = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__addi__847__rs1;
    __Vfunc_tb_top_cpu__DOT__addi__847__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__addi__847__imm;
    __Vfunc_tb_top_cpu__DOT__addi__847__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__848__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__848__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__848__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__848__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__funct3 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__848__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_i__848__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__849__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__849__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__849__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__849__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__849__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__849__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__sw__850__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__sw__850__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__850__rs2;
    __Vfunc_tb_top_cpu__DOT__sw__850__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__sw__850__rs1;
    __Vfunc_tb_top_cpu__DOT__sw__850__rs1 = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__sw__850__imm;
    __Vfunc_tb_top_cpu__DOT__sw__850__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__851__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__851__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__851__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__851__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__rs1 = 0;
    CData/*2:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__851__funct3;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__funct3 = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_s__851__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__opcode = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__852__addr;
    __Vtask_tb_top_cpu__DOT__put_instr__852__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__852__instr;
    __Vtask_tb_top_cpu__DOT__put_instr__852__instr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__put_instr__852__idx;
    __Vtask_tb_top_cpu__DOT__put_instr__852__idx = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__jal__853__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__jal__853__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__jal__853__rd;
    __Vfunc_tb_top_cpu__DOT__jal__853__rd = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__jal__853__imm;
    __Vfunc_tb_top_cpu__DOT__jal__853__imm = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__854__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__enc_j__854__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__854__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__854__imm = 0;
    CData/*4:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__854__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__854__rd = 0;
    CData/*6:0*/ __Vfunc_tb_top_cpu__DOT__enc_j__854__opcode;
    __Vfunc_tb_top_cpu__DOT__enc_j__854__opcode = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__856__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__856__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__856__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__856__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__856__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__856__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__856__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__856__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__856__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__857__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__857__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__857__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__857__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__858__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__858__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__858__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__858__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__wait_for_word__859__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__859__addr;
    __Vtask_tb_top_cpu__DOT__wait_for_word__859__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__859__expected;
    __Vtask_tb_top_cpu__DOT__wait_for_word__859__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__859__timeout_limit;
    __Vtask_tb_top_cpu__DOT__wait_for_word__859__timeout_limit = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__wait_for_word__859__timeout;
    __Vtask_tb_top_cpu__DOT__wait_for_word__859__timeout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__860__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__860__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__860__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__860__addr = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__861__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__861__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__861__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__861__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__862__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__862__actual;
    __Vtask_tb_top_cpu__DOT__check32__862__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__862__expected;
    __Vtask_tb_top_cpu__DOT__check32__862__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__863__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__863__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__863__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__863__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__864__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__864__actual;
    __Vtask_tb_top_cpu__DOT__check32__864__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__864__expected;
    __Vtask_tb_top_cpu__DOT__check32__864__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__865__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__865__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__865__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__865__addr = 0;
    std::string __Vtask_tb_top_cpu__DOT__check32__866__name;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__866__actual;
    __Vtask_tb_top_cpu__DOT__check32__866__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check32__866__expected;
    __Vtask_tb_top_cpu__DOT__check32__866__expected = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__867__Vfuncout;
    __Vfunc_tb_top_cpu__DOT__load_word__867__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_cpu__DOT__load_word__867__addr;
    __Vfunc_tb_top_cpu__DOT__load_word__867__addr = 0;
    // Body
    vlSelf->tb_top_cpu__DOT__pass_count = 0U;
    vlSelf->tb_top_cpu__DOT__fail_count = 0U;
    VL_WRITEF("\n============================================================\nTEST 1: Core RV32I + load-use + branch/JAL + byte/half + ECALL/MRET\n============================================================\n");
    __Vtask_tb_top_cpu__DOT__clear_memories__3__i = 0U;
    while (VL_GTS_III(32, 0x800U, __Vtask_tb_top_cpu__DOT__clear_memories__3__i)) {
        vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__clear_memories__3__i)] = 0x13U;
        __Vtask_tb_top_cpu__DOT__clear_memories__3__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__3__i);
    }
    __Vtask_tb_top_cpu__DOT__clear_memories__3__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_top_cpu__DOT__clear_memories__3__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU & __Vtask_tb_top_cpu__DOT__clear_memories__3__i)] = 0U;
        __Vtask_tb_top_cpu__DOT__clear_memories__3__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__3__i);
    }
    vlSelf->tb_top_cpu__DOT__imem[0U] = 0x10000513U;
    vlSelf->tb_top_cpu__DOT__imem[1U] = 0xa00093U;
    vlSelf->tb_top_cpu__DOT__imem[2U] = 0x1400113U;
    vlSelf->tb_top_cpu__DOT__imem[3U] = 0x2081b3U;
    vlSelf->tb_top_cpu__DOT__imem[4U] = 0x352023U;
    vlSelf->tb_top_cpu__DOT__imem[5U] = 0x52203U;
    vlSelf->tb_top_cpu__DOT__imem[6U] = 0x1202b3U;
    vlSelf->tb_top_cpu__DOT__imem[7U] = 0x552223U;
    vlSelf->tb_top_cpu__DOT__imem[8U] = 0x328463U;
    vlSelf->tb_top_cpu__DOT__imem[9U] = 0xb00313U;
    vlSelf->tb_top_cpu__DOT__imem[0xaU] = 0x652423U;
    vlSelf->tb_top_cpu__DOT__imem[0xbU] = 0x528463U;
    vlSelf->tb_top_cpu__DOT__imem[0xcU] = 0x6300393U;
    vlSelf->tb_top_cpu__DOT__imem[0xdU] = 0x4d00393U;
    vlSelf->tb_top_cpu__DOT__imem[0xeU] = 0x752623U;
    vlSelf->tb_top_cpu__DOT__imem[0xfU] = 0x80046fU;
    vlSelf->tb_top_cpu__DOT__imem[0x10U] = 0x6300413U;
    vlSelf->tb_top_cpu__DOT__imem[0x11U] = 0x5800413U;
    vlSelf->tb_top_cpu__DOT__imem[0x12U] = 0x852823U;
    vlSelf->tb_top_cpu__DOT__imem[0x13U] = 0xaa00813U;
    vlSelf->tb_top_cpu__DOT__imem[0x14U] = 0x3050423U;
    vlSelf->tb_top_cpu__DOT__imem[0x15U] = 0x30504a3U;
    vlSelf->tb_top_cpu__DOT__imem[0x16U] = 0x3050523U;
    vlSelf->tb_top_cpu__DOT__imem[0x17U] = 0x30505a3U;
    vlSelf->tb_top_cpu__DOT__imem[0x18U] = 0x7700893U;
    vlSelf->tb_top_cpu__DOT__imem[0x19U] = 0x3151623U;
    vlSelf->tb_top_cpu__DOT__imem[0x1aU] = 0x3151723U;
    vlSelf->tb_top_cpu__DOT__imem[0x1bU] = 0x2850903U;
    vlSelf->tb_top_cpu__DOT__imem[0x1cU] = 0x3252823U;
    vlSelf->tb_top_cpu__DOT__imem[0x1dU] = 0x2854983U;
    vlSelf->tb_top_cpu__DOT__imem[0x1eU] = 0x3352a23U;
    vlSelf->tb_top_cpu__DOT__imem[0x1fU] = 0x405b7U;
    vlSelf->tb_top_cpu__DOT__imem[0x20U] = 0x30058593U;
    vlSelf->tb_top_cpu__DOT__imem[0x21U] = 0x30559073U;
    vlSelf->tb_top_cpu__DOT__imem[0x22U] = 0x73U;
    vlSelf->tb_top_cpu__DOT__imem[0x23U] = 0x3700713U;
    vlSelf->tb_top_cpu__DOT__imem[0x24U] = 0xe52c23U;
    vlSelf->tb_top_cpu__DOT__imem[0x25U] = 0x100793U;
    vlSelf->tb_top_cpu__DOT__imem[0x26U] = 0xf52e23U;
    vlSelf->tb_top_cpu__DOT__imem[0x27U] = 0x6fU;
    vlSelf->tb_top_cpu__DOT__imem[0xc0U] = 0x7b00613U;
    vlSelf->tb_top_cpu__DOT__imem[0xc1U] = 0xc52a23U;
    vlSelf->tb_top_cpu__DOT__imem[0xc2U] = 0x342026f3U;
    vlSelf->tb_top_cpu__DOT__imem[0xc3U] = 0x2d52023U;
    vlSelf->tb_top_cpu__DOT__imem[0xc4U] = 0x341026f3U;
    vlSelf->tb_top_cpu__DOT__imem[0xc5U] = 0x468693U;
    vlSelf->tb_top_cpu__DOT__imem[0xc6U] = 0x34169073U;
    vlSelf->tb_top_cpu__DOT__imem[0xc7U] = 0x30200073U;
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__144__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__144__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__144__addr = 0x11cU;
    __Vtask_tb_top_cpu__DOT__wait_for_word__144__name = 
        std::string{"core final marker"};
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__144__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__145__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__144__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__145__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__145__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__145__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__145__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__145__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__145__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__144__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__144__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__144__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__144__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__144__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__146__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__144__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__146__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__146__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__146__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__146__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__146__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__144__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__144__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__144__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__146__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel1;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__145__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__144__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__145__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__145__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__145__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__145__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__145__addr)])));
        }
        __Vlabel1: ;
    }
    __Vfunc_tb_top_cpu__DOT__load_word__148__addr = 0x100U;
    __Vfunc_tb_top_cpu__DOT__load_word__148__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__148__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__148__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__148__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__148__addr)])));
    VL_WRITEF("mem[0]   = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__148__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__149__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__149__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__149__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__149__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__149__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__149__addr)])));
    VL_WRITEF("mem[4]   = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__149__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__150__addr = 0x108U;
    __Vfunc_tb_top_cpu__DOT__load_word__150__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__150__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__150__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__150__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__150__addr)])));
    VL_WRITEF("mem[8]   = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__150__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__151__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__151__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__151__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__151__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__151__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__151__addr)])));
    VL_WRITEF("mem[12]  = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__151__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__152__addr = 0x110U;
    __Vfunc_tb_top_cpu__DOT__load_word__152__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__152__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__152__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__152__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__152__addr)])));
    VL_WRITEF("mem[16]  = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__152__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__153__addr = 0x114U;
    __Vfunc_tb_top_cpu__DOT__load_word__153__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__153__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__153__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__153__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__153__addr)])));
    VL_WRITEF("mem[20]  = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__153__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__154__addr = 0x118U;
    __Vfunc_tb_top_cpu__DOT__load_word__154__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__154__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__154__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__154__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__154__addr)])));
    VL_WRITEF("mem[24]  = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__154__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__155__addr = 0x11cU;
    __Vfunc_tb_top_cpu__DOT__load_word__155__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__155__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__155__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__155__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__155__addr)])));
    VL_WRITEF("mem[28]  = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__155__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__156__addr = 0x120U;
    __Vfunc_tb_top_cpu__DOT__load_word__156__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__156__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__156__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__156__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__156__addr)])));
    VL_WRITEF("mem[32]  = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__156__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__157__addr = 0x128U;
    __Vfunc_tb_top_cpu__DOT__load_word__157__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__157__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__157__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__157__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__157__addr)])));
    VL_WRITEF("mem[40]  = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__157__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__158__addr = 0x12cU;
    __Vfunc_tb_top_cpu__DOT__load_word__158__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__158__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__158__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__158__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__158__addr)])));
    VL_WRITEF("mem[44]  = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__158__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__159__addr = 0x130U;
    __Vfunc_tb_top_cpu__DOT__load_word__159__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__159__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__159__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__159__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__159__addr)])));
    VL_WRITEF("mem[48]  = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__159__Vfuncout);
    __Vfunc_tb_top_cpu__DOT__load_word__160__addr = 0x134U;
    __Vfunc_tb_top_cpu__DOT__load_word__160__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__160__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__160__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__160__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__160__addr)])));
    VL_WRITEF("mem[52]  = 0x%08x\n",32,__Vfunc_tb_top_cpu__DOT__load_word__160__Vfuncout);
    __Vtask_tb_top_cpu__DOT__check32__161__expected = 0x1eU;
    __Vfunc_tb_top_cpu__DOT__load_word__162__addr = 0x100U;
    __Vfunc_tb_top_cpu__DOT__load_word__162__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__162__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__162__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__162__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__162__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__161__actual = __Vfunc_tb_top_cpu__DOT__load_word__162__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__161__name = std::string{"core ADD result mem[0]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__161__actual 
         != __Vtask_tb_top_cpu__DOT__check32__161__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__161__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__161__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__161__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__161__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__163__expected = 0x28U;
    __Vfunc_tb_top_cpu__DOT__load_word__164__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__164__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__164__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__164__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__164__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__164__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__163__actual = __Vfunc_tb_top_cpu__DOT__load_word__164__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__163__name = std::string{"core load-use result mem[4]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__163__actual 
         != __Vtask_tb_top_cpu__DOT__check32__163__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__163__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__163__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__163__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__163__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__165__expected = 0xbU;
    __Vfunc_tb_top_cpu__DOT__load_word__166__addr = 0x108U;
    __Vfunc_tb_top_cpu__DOT__load_word__166__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__166__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__166__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__166__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__166__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__165__actual = __Vfunc_tb_top_cpu__DOT__load_word__166__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__165__name = std::string{"core branch not taken mem[8]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__165__actual 
         != __Vtask_tb_top_cpu__DOT__check32__165__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__165__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__165__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__165__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__165__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__167__expected = 0x4dU;
    __Vfunc_tb_top_cpu__DOT__load_word__168__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__168__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__168__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__168__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__168__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__168__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__167__actual = __Vfunc_tb_top_cpu__DOT__load_word__168__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__167__name = std::string{"core branch taken mem[12]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__167__actual 
         != __Vtask_tb_top_cpu__DOT__check32__167__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__167__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__167__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__167__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__167__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__169__expected = 0x58U;
    __Vfunc_tb_top_cpu__DOT__load_word__170__addr = 0x110U;
    __Vfunc_tb_top_cpu__DOT__load_word__170__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__170__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__170__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__170__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__170__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__169__actual = __Vfunc_tb_top_cpu__DOT__load_word__170__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__169__name = std::string{"core JAL path mem[16]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__169__actual 
         != __Vtask_tb_top_cpu__DOT__check32__169__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__169__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__169__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__169__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__169__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__171__expected = 0x7bU;
    __Vfunc_tb_top_cpu__DOT__load_word__172__addr = 0x114U;
    __Vfunc_tb_top_cpu__DOT__load_word__172__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__172__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__172__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__172__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__172__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__171__actual = __Vfunc_tb_top_cpu__DOT__load_word__172__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__171__name = std::string{"core trap handler marker mem[20]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__171__actual 
         != __Vtask_tb_top_cpu__DOT__check32__171__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__171__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__171__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__171__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__171__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__173__expected = 0x37U;
    __Vfunc_tb_top_cpu__DOT__load_word__174__addr = 0x118U;
    __Vfunc_tb_top_cpu__DOT__load_word__174__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__174__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__174__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__174__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__174__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__173__actual = __Vfunc_tb_top_cpu__DOT__load_word__174__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__173__name = std::string{"core post-MRET continuation mem[24]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__173__actual 
         != __Vtask_tb_top_cpu__DOT__check32__173__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__173__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__173__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__173__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__173__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__175__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__176__addr = 0x11cU;
    __Vfunc_tb_top_cpu__DOT__load_word__176__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__176__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__176__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__176__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__176__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__175__actual = __Vfunc_tb_top_cpu__DOT__load_word__176__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__175__name = std::string{"core final marker mem[28]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__175__actual 
         != __Vtask_tb_top_cpu__DOT__check32__175__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__175__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__175__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__175__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__175__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__177__expected = 0xbU;
    __Vfunc_tb_top_cpu__DOT__load_word__178__addr = 0x120U;
    __Vfunc_tb_top_cpu__DOT__load_word__178__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__178__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__178__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__178__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__178__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__177__actual = __Vfunc_tb_top_cpu__DOT__load_word__178__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__177__name = std::string{"core ECALL mcause mem[32]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__177__actual 
         != __Vtask_tb_top_cpu__DOT__check32__177__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__177__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__177__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__177__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__177__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__179__expected = 0xaaaaaaaaU;
    __Vfunc_tb_top_cpu__DOT__load_word__180__addr = 0x128U;
    __Vfunc_tb_top_cpu__DOT__load_word__180__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__180__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__180__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__180__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__180__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__179__actual = __Vfunc_tb_top_cpu__DOT__load_word__180__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__179__name = std::string{"core SB packed word mem[40]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__179__actual 
         != __Vtask_tb_top_cpu__DOT__check32__179__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__179__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__179__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__179__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__179__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__181__expected = 0x770077U;
    __Vfunc_tb_top_cpu__DOT__load_word__182__addr = 0x12cU;
    __Vfunc_tb_top_cpu__DOT__load_word__182__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__182__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__182__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__182__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__182__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__181__actual = __Vfunc_tb_top_cpu__DOT__load_word__182__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__181__name = std::string{"core SH packed word mem[44]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__181__actual 
         != __Vtask_tb_top_cpu__DOT__check32__181__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__181__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__181__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__181__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__181__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__183__expected = 0xffffffaaU;
    __Vfunc_tb_top_cpu__DOT__load_word__184__addr = 0x130U;
    __Vfunc_tb_top_cpu__DOT__load_word__184__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__184__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__184__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__184__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__184__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__183__actual = __Vfunc_tb_top_cpu__DOT__load_word__184__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__183__name = std::string{"core LB sign result mem[48]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__183__actual 
         != __Vtask_tb_top_cpu__DOT__check32__183__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__183__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__183__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__183__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__183__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__185__expected = 0xaaU;
    __Vfunc_tb_top_cpu__DOT__load_word__186__addr = 0x134U;
    __Vfunc_tb_top_cpu__DOT__load_word__186__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__186__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__186__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__186__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__186__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__185__actual = __Vfunc_tb_top_cpu__DOT__load_word__186__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__185__name = std::string{"core LBU result mem[52]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__185__actual 
         != __Vtask_tb_top_cpu__DOT__check32__185__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__185__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__185__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__185__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__185__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__run_exception_test__187__check_mtval = 0U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__187__expected_mtval = 0U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__187__expected_mcause = 2U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__187__fault_instr = 0xffffffffU;
    __Vtask_tb_top_cpu__DOT__run_exception_test__187__name = 
        std::string{"ILLEGAL_INSTRUCTION"};
    VL_WRITEF("\n============================================================\nEXCEPTION TEST: %@\n============================================================\n",
              -1,&(__Vtask_tb_top_cpu__DOT__run_exception_test__187__name));
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__fault_instr 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__187__fault_instr;
    __Vtask_tb_top_cpu__DOT__clear_memories__189__i = 0U;
    while (VL_GTS_III(32, 0x800U, __Vtask_tb_top_cpu__DOT__clear_memories__189__i)) {
        __Vfunc_tb_top_cpu__DOT__nop__190__Vfuncout = 0x13U;
        vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__clear_memories__189__i)] 
            = __Vfunc_tb_top_cpu__DOT__nop__190__Vfuncout;
        __Vtask_tb_top_cpu__DOT__clear_memories__189__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__189__i);
    }
    __Vtask_tb_top_cpu__DOT__clear_memories__189__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_top_cpu__DOT__clear_memories__189__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU & __Vtask_tb_top_cpu__DOT__clear_memories__189__i)] = 0U;
        __Vtask_tb_top_cpu__DOT__clear_memories__189__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__189__i);
    }
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc = 0x40000U;
    __Vfunc_tb_top_cpu__DOT__addi__192__imm = 0x100U;
    __Vfunc_tb_top_cpu__DOT__addi__192__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__192__rd = 0xaU;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__rd = __Vfunc_tb_top_cpu__DOT__addi__192__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__rs1 = __Vfunc_tb_top_cpu__DOT__addi__192__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__imm = __Vfunc_tb_top_cpu__DOT__addi__192__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__193__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__193__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__193__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__193__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__193__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__193__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__192__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__193__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__191__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__192__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__191__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__191__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__191__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__191__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__191__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__191__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__191__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__lui__195__imm20 = 0x40U;
    __Vfunc_tb_top_cpu__DOT__lui__195__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_u__196__opcode = 0x37U;
    __Vfunc_tb_top_cpu__DOT__enc_u__196__rd = __Vfunc_tb_top_cpu__DOT__lui__195__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__196__imm20 = __Vfunc_tb_top_cpu__DOT__lui__195__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__196__Vfuncout = 
        ((__Vfunc_tb_top_cpu__DOT__enc_u__196__imm20 
          << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_u__196__rd) 
                       << 7U) | (IData)(__Vfunc_tb_top_cpu__DOT__enc_u__196__opcode)));
    __Vfunc_tb_top_cpu__DOT__lui__195__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_u__196__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__194__instr 
        = __Vfunc_tb_top_cpu__DOT__lui__195__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__194__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__194__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__194__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__194__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__194__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__194__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__194__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__addi__198__imm = 0x300U;
    __Vfunc_tb_top_cpu__DOT__addi__198__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__addi__198__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__rd = __Vfunc_tb_top_cpu__DOT__addi__198__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__rs1 = __Vfunc_tb_top_cpu__DOT__addi__198__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__imm = __Vfunc_tb_top_cpu__DOT__addi__198__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__199__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__199__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__199__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__199__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__199__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__199__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__198__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__199__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__197__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__198__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__197__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__197__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__197__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__197__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__197__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__197__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__197__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__201__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__csrrw__201__csr_addr = 0x305U;
    __Vfunc_tb_top_cpu__DOT__csrrw__201__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__201__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__201__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__201__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__201__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__200__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__201__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__200__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__200__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__200__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__200__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__200__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__200__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__200__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__addi__203__imm = 0x7bU;
    __Vfunc_tb_top_cpu__DOT__addi__203__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__203__rd = 1U;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__rd = __Vfunc_tb_top_cpu__DOT__addi__203__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__rs1 = __Vfunc_tb_top_cpu__DOT__addi__203__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__imm = __Vfunc_tb_top_cpu__DOT__addi__203__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__204__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__204__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__204__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__204__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__204__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__204__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__203__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__204__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__202__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__203__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__202__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__202__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__202__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__202__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__202__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__202__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__202__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__addi__206__imm = 0x400U;
    __Vfunc_tb_top_cpu__DOT__addi__206__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__206__rd = 0x14U;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__rd = __Vfunc_tb_top_cpu__DOT__addi__206__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__rs1 = __Vfunc_tb_top_cpu__DOT__addi__206__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__imm = __Vfunc_tb_top_cpu__DOT__addi__206__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__207__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__207__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__207__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__207__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__207__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__207__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__206__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__207__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__205__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__206__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__205__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__205__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__205__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__205__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__205__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__205__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__205__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vtask_tb_top_cpu__DOT__put_instr__208__instr 
        = __Vtask_tb_top_cpu__DOT__load_exception_program__188__fault_instr;
    __Vtask_tb_top_cpu__DOT__put_instr__208__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__208__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__208__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__208__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__208__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__208__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__208__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__addi__210__imm = 0x63U;
    __Vfunc_tb_top_cpu__DOT__addi__210__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__210__rd = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__rd = __Vfunc_tb_top_cpu__DOT__addi__210__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__rs1 = __Vfunc_tb_top_cpu__DOT__addi__210__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__imm = __Vfunc_tb_top_cpu__DOT__addi__210__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__211__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__211__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__211__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__211__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__211__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__211__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__210__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__211__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__209__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__210__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__209__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__209__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__209__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__209__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__209__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__209__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__209__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__sw__213__imm = 0x10U;
    __Vfunc_tb_top_cpu__DOT__sw__213__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__213__rs2 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__rs1 = __Vfunc_tb_top_cpu__DOT__sw__213__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__rs2 = __Vfunc_tb_top_cpu__DOT__sw__213__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__imm = __Vfunc_tb_top_cpu__DOT__sw__213__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__214__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__214__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__214__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__214__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__214__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__214__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__214__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__213__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__214__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__212__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__213__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__212__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__212__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__212__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__212__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__212__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__212__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__212__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__jal__216__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__216__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__217__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__217__rd = __Vfunc_tb_top_cpu__DOT__jal__216__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__217__imm = __Vfunc_tb_top_cpu__DOT__jal__216__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__217__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__217__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__217__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__217__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__217__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__217__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__217__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__216__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__217__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__215__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__216__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__215__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__215__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__215__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__215__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__215__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__215__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__215__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc = 0x40300U;
    __Vfunc_tb_top_cpu__DOT__addi__219__imm = 0x55U;
    __Vfunc_tb_top_cpu__DOT__addi__219__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__219__rd = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__rd = __Vfunc_tb_top_cpu__DOT__addi__219__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__rs1 = __Vfunc_tb_top_cpu__DOT__addi__219__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__imm = __Vfunc_tb_top_cpu__DOT__addi__219__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__220__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__220__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__220__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__220__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__220__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__220__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__219__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__220__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__218__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__219__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__218__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__218__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__218__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__218__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__218__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__218__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__218__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__sw__222__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__sw__222__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__222__rs2 = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__rs1 = __Vfunc_tb_top_cpu__DOT__sw__222__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__rs2 = __Vfunc_tb_top_cpu__DOT__sw__222__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__imm = __Vfunc_tb_top_cpu__DOT__sw__222__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__223__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__223__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__223__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__223__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__223__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__223__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__223__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__222__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__223__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__221__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__222__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__221__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__221__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__221__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__221__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__221__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__221__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__221__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__225__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__225__csr_addr = 0x342U;
    __Vfunc_tb_top_cpu__DOT__csrrs__225__rd = 4U;
    __Vfunc_tb_top_cpu__DOT__csrrs__225__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__225__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__225__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__225__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__224__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__225__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__224__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__224__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__224__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__224__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__224__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__224__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__224__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__sw__227__imm = 4U;
    __Vfunc_tb_top_cpu__DOT__sw__227__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__227__rs2 = 4U;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__rs1 = __Vfunc_tb_top_cpu__DOT__sw__227__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__rs2 = __Vfunc_tb_top_cpu__DOT__sw__227__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__imm = __Vfunc_tb_top_cpu__DOT__sw__227__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__228__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__228__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__228__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__228__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__228__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__228__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__228__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__227__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__228__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__226__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__227__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__226__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__226__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__226__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__226__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__226__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__226__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__226__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__230__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__230__csr_addr = 0x343U;
    __Vfunc_tb_top_cpu__DOT__csrrs__230__rd = 5U;
    __Vfunc_tb_top_cpu__DOT__csrrs__230__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__230__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__230__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__230__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__229__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__230__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__229__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__229__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__229__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__229__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__229__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__229__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__229__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__sw__232__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__sw__232__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__232__rs2 = 5U;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__rs1 = __Vfunc_tb_top_cpu__DOT__sw__232__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__rs2 = __Vfunc_tb_top_cpu__DOT__sw__232__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__imm = __Vfunc_tb_top_cpu__DOT__sw__232__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__233__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__233__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__233__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__233__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__233__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__233__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__233__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__232__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__233__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__231__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__232__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__231__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__231__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__231__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__231__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__231__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__231__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__231__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__addi__235__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__235__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__235__rd = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__rd = __Vfunc_tb_top_cpu__DOT__addi__235__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__rs1 = __Vfunc_tb_top_cpu__DOT__addi__235__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__imm = __Vfunc_tb_top_cpu__DOT__addi__235__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__236__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__236__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__236__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__236__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__236__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__236__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__235__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__236__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__234__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__235__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__234__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__234__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__234__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__234__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__234__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__234__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__234__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__sw__238__imm = 0xcU;
    __Vfunc_tb_top_cpu__DOT__sw__238__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__238__rs2 = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__rs1 = __Vfunc_tb_top_cpu__DOT__sw__238__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__rs2 = __Vfunc_tb_top_cpu__DOT__sw__238__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__imm = __Vfunc_tb_top_cpu__DOT__sw__238__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__239__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__239__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__239__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__239__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__239__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__239__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__239__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__238__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__239__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__237__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__238__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__237__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__237__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__237__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__237__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__237__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__237__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__237__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    __Vfunc_tb_top_cpu__DOT__jal__241__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__241__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__242__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__242__rd = __Vfunc_tb_top_cpu__DOT__jal__241__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__242__imm = __Vfunc_tb_top_cpu__DOT__jal__241__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__242__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__242__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__242__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__242__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__242__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__242__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__242__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__241__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__242__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__240__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__241__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__240__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__240__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__240__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__240__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__240__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__240__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__240__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__188__pc);
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__244__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__244__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__244__addr = 0x10cU;
    __Vtask_tb_top_cpu__DOT__wait_for_word__244__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__187__name, 
                                            std::string{" final marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__244__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__245__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__244__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__245__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__245__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__245__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__245__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__245__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__245__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__244__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__244__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__244__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__244__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__244__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__246__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__244__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__246__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__246__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__246__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__246__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__246__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__244__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__244__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__244__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__246__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel2;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__245__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__244__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__245__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__245__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__245__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__245__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__245__addr)])));
        }
        __Vlabel2: ;
    }
    __Vtask_tb_top_cpu__DOT__check32__247__expected = 0x55U;
    __Vfunc_tb_top_cpu__DOT__load_word__248__addr = 0x100U;
    __Vfunc_tb_top_cpu__DOT__load_word__248__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__248__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__248__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__248__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__248__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__247__actual = __Vfunc_tb_top_cpu__DOT__load_word__248__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__247__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__187__name, 
                                                                                std::string{" handler marker mem[0]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__247__actual 
         != __Vtask_tb_top_cpu__DOT__check32__247__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__247__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__247__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__247__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__247__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__249__expected 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__187__expected_mcause;
    __Vfunc_tb_top_cpu__DOT__load_word__250__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__250__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__250__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__250__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__250__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__250__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__249__actual = __Vfunc_tb_top_cpu__DOT__load_word__250__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__249__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__187__name, 
                                                                                std::string{" mcause mem[4]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__249__actual 
         != __Vtask_tb_top_cpu__DOT__check32__249__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__249__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__249__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__249__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__249__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    if (__Vtask_tb_top_cpu__DOT__run_exception_test__187__check_mtval) {
        __Vtask_tb_top_cpu__DOT__check32__251__expected 
            = __Vtask_tb_top_cpu__DOT__run_exception_test__187__expected_mtval;
        __Vfunc_tb_top_cpu__DOT__load_word__252__addr = 0x108U;
        __Vfunc_tb_top_cpu__DOT__load_word__252__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__252__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__252__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__252__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__252__addr)])));
        __Vtask_tb_top_cpu__DOT__check32__251__actual 
            = __Vfunc_tb_top_cpu__DOT__load_word__252__Vfuncout;
        __Vtask_tb_top_cpu__DOT__check32__251__name 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__187__name, 
                                                std::string{" mtval mem[8]"}));
        if ((__Vtask_tb_top_cpu__DOT__check32__251__actual 
             != __Vtask_tb_top_cpu__DOT__check32__251__expected)) {
            VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                      -1,&(__Vtask_tb_top_cpu__DOT__check32__251__name),
                      32,__Vtask_tb_top_cpu__DOT__check32__251__actual,
                      32,__Vtask_tb_top_cpu__DOT__check32__251__expected);
            vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__fail_count);
        } else {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__251__name));
            vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__pass_count);
        }
    }
    __Vtask_tb_top_cpu__DOT__check32__253__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__254__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__254__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__254__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__254__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__254__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__254__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__253__actual = __Vfunc_tb_top_cpu__DOT__load_word__254__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__253__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__187__name, 
                                                                                std::string{" final marker mem[12]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__253__actual 
         != __Vtask_tb_top_cpu__DOT__check32__253__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__253__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__253__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__253__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__253__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__255__expected = 0U;
    __Vfunc_tb_top_cpu__DOT__load_word__256__addr = 0x110U;
    __Vfunc_tb_top_cpu__DOT__load_word__256__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__256__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__256__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__256__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__256__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__255__actual = __Vfunc_tb_top_cpu__DOT__load_word__256__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__255__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__187__name, 
                                                                                std::string{" skipped path mem[16]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__255__actual 
         != __Vtask_tb_top_cpu__DOT__check32__255__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__255__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__255__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__255__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__255__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__run_exception_test__257__check_mtval = 0U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__257__expected_mtval = 0U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__257__expected_mcause = 3U;
    __Vfunc_tb_top_cpu__DOT__ebreak__258__Vfuncout = 0x100073U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__257__fault_instr 
        = __Vfunc_tb_top_cpu__DOT__ebreak__258__Vfuncout;
    __Vtask_tb_top_cpu__DOT__run_exception_test__257__name = 
        std::string{"EBREAK"};
    VL_WRITEF("\n============================================================\nEXCEPTION TEST: %@\n============================================================\n",
              -1,&(__Vtask_tb_top_cpu__DOT__run_exception_test__257__name));
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__fault_instr 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__257__fault_instr;
    __Vtask_tb_top_cpu__DOT__clear_memories__260__i = 0U;
    while (VL_GTS_III(32, 0x800U, __Vtask_tb_top_cpu__DOT__clear_memories__260__i)) {
        __Vfunc_tb_top_cpu__DOT__nop__261__Vfuncout = 0x13U;
        vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__clear_memories__260__i)] 
            = __Vfunc_tb_top_cpu__DOT__nop__261__Vfuncout;
        __Vtask_tb_top_cpu__DOT__clear_memories__260__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__260__i);
    }
    __Vtask_tb_top_cpu__DOT__clear_memories__260__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_top_cpu__DOT__clear_memories__260__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU & __Vtask_tb_top_cpu__DOT__clear_memories__260__i)] = 0U;
        __Vtask_tb_top_cpu__DOT__clear_memories__260__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__260__i);
    }
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc = 0x40000U;
    __Vfunc_tb_top_cpu__DOT__addi__263__imm = 0x100U;
    __Vfunc_tb_top_cpu__DOT__addi__263__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__263__rd = 0xaU;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__rd = __Vfunc_tb_top_cpu__DOT__addi__263__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__rs1 = __Vfunc_tb_top_cpu__DOT__addi__263__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__imm = __Vfunc_tb_top_cpu__DOT__addi__263__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__264__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__264__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__264__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__264__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__264__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__264__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__263__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__264__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__262__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__263__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__262__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__262__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__262__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__262__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__262__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__262__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__262__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__lui__266__imm20 = 0x40U;
    __Vfunc_tb_top_cpu__DOT__lui__266__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_u__267__opcode = 0x37U;
    __Vfunc_tb_top_cpu__DOT__enc_u__267__rd = __Vfunc_tb_top_cpu__DOT__lui__266__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__267__imm20 = __Vfunc_tb_top_cpu__DOT__lui__266__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__267__Vfuncout = 
        ((__Vfunc_tb_top_cpu__DOT__enc_u__267__imm20 
          << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_u__267__rd) 
                       << 7U) | (IData)(__Vfunc_tb_top_cpu__DOT__enc_u__267__opcode)));
    __Vfunc_tb_top_cpu__DOT__lui__266__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_u__267__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__265__instr 
        = __Vfunc_tb_top_cpu__DOT__lui__266__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__265__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__265__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__265__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__265__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__265__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__265__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__265__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__addi__269__imm = 0x300U;
    __Vfunc_tb_top_cpu__DOT__addi__269__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__addi__269__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__rd = __Vfunc_tb_top_cpu__DOT__addi__269__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__rs1 = __Vfunc_tb_top_cpu__DOT__addi__269__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__imm = __Vfunc_tb_top_cpu__DOT__addi__269__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__270__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__270__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__270__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__270__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__270__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__270__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__269__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__270__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__268__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__269__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__268__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__268__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__268__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__268__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__268__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__268__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__268__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__272__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__csrrw__272__csr_addr = 0x305U;
    __Vfunc_tb_top_cpu__DOT__csrrw__272__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__272__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__272__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__272__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__272__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__271__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__272__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__271__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__271__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__271__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__271__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__271__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__271__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__271__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__addi__274__imm = 0x7bU;
    __Vfunc_tb_top_cpu__DOT__addi__274__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__274__rd = 1U;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__rd = __Vfunc_tb_top_cpu__DOT__addi__274__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__rs1 = __Vfunc_tb_top_cpu__DOT__addi__274__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__imm = __Vfunc_tb_top_cpu__DOT__addi__274__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__275__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__275__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__275__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__275__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__275__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__275__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__274__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__275__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__273__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__274__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__273__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__273__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__273__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__273__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__273__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__273__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__273__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__addi__277__imm = 0x400U;
    __Vfunc_tb_top_cpu__DOT__addi__277__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__277__rd = 0x14U;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__rd = __Vfunc_tb_top_cpu__DOT__addi__277__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__rs1 = __Vfunc_tb_top_cpu__DOT__addi__277__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__imm = __Vfunc_tb_top_cpu__DOT__addi__277__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__278__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__278__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__278__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__278__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__278__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__278__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__277__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__278__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__276__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__277__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__276__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__276__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__276__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__276__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__276__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__276__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__276__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vtask_tb_top_cpu__DOT__put_instr__279__instr 
        = __Vtask_tb_top_cpu__DOT__load_exception_program__259__fault_instr;
    __Vtask_tb_top_cpu__DOT__put_instr__279__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__279__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__279__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__279__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__279__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__279__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__279__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__addi__281__imm = 0x63U;
    __Vfunc_tb_top_cpu__DOT__addi__281__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__281__rd = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__rd = __Vfunc_tb_top_cpu__DOT__addi__281__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__rs1 = __Vfunc_tb_top_cpu__DOT__addi__281__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__imm = __Vfunc_tb_top_cpu__DOT__addi__281__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__282__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__282__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__282__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__282__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__282__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__282__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__281__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__282__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__280__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__281__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__280__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__280__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__280__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__280__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__280__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__280__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__280__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__sw__284__imm = 0x10U;
    __Vfunc_tb_top_cpu__DOT__sw__284__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__284__rs2 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__rs1 = __Vfunc_tb_top_cpu__DOT__sw__284__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__rs2 = __Vfunc_tb_top_cpu__DOT__sw__284__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__imm = __Vfunc_tb_top_cpu__DOT__sw__284__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__285__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__285__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__285__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__285__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__285__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__285__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__285__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__284__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__285__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__283__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__284__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__283__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__283__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__283__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__283__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__283__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__283__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__283__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__jal__287__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__287__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__288__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__288__rd = __Vfunc_tb_top_cpu__DOT__jal__287__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__288__imm = __Vfunc_tb_top_cpu__DOT__jal__287__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__288__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__288__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__288__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__288__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__288__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__288__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__288__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__287__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__288__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__286__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__287__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__286__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__286__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__286__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__286__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__286__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__286__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__286__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc = 0x40300U;
    __Vfunc_tb_top_cpu__DOT__addi__290__imm = 0x55U;
    __Vfunc_tb_top_cpu__DOT__addi__290__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__290__rd = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__rd = __Vfunc_tb_top_cpu__DOT__addi__290__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__rs1 = __Vfunc_tb_top_cpu__DOT__addi__290__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__imm = __Vfunc_tb_top_cpu__DOT__addi__290__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__291__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__291__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__291__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__291__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__291__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__291__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__290__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__291__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__289__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__290__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__289__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__289__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__289__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__289__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__289__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__289__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__289__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__sw__293__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__sw__293__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__293__rs2 = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__rs1 = __Vfunc_tb_top_cpu__DOT__sw__293__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__rs2 = __Vfunc_tb_top_cpu__DOT__sw__293__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__imm = __Vfunc_tb_top_cpu__DOT__sw__293__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__294__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__294__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__294__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__294__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__294__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__294__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__294__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__293__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__294__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__292__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__293__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__292__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__292__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__292__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__292__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__292__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__292__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__292__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__296__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__296__csr_addr = 0x342U;
    __Vfunc_tb_top_cpu__DOT__csrrs__296__rd = 4U;
    __Vfunc_tb_top_cpu__DOT__csrrs__296__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__296__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__296__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__296__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__295__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__296__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__295__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__295__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__295__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__295__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__295__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__295__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__295__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__sw__298__imm = 4U;
    __Vfunc_tb_top_cpu__DOT__sw__298__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__298__rs2 = 4U;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__rs1 = __Vfunc_tb_top_cpu__DOT__sw__298__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__rs2 = __Vfunc_tb_top_cpu__DOT__sw__298__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__imm = __Vfunc_tb_top_cpu__DOT__sw__298__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__299__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__299__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__299__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__299__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__299__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__299__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__299__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__298__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__299__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__297__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__298__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__297__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__297__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__297__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__297__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__297__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__297__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__297__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__301__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__301__csr_addr = 0x343U;
    __Vfunc_tb_top_cpu__DOT__csrrs__301__rd = 5U;
    __Vfunc_tb_top_cpu__DOT__csrrs__301__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__301__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__301__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__301__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__300__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__301__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__300__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__300__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__300__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__300__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__300__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__300__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__300__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__sw__303__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__sw__303__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__303__rs2 = 5U;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__rs1 = __Vfunc_tb_top_cpu__DOT__sw__303__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__rs2 = __Vfunc_tb_top_cpu__DOT__sw__303__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__imm = __Vfunc_tb_top_cpu__DOT__sw__303__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__304__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__304__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__304__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__304__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__304__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__304__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__304__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__303__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__304__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__302__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__303__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__302__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__302__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__302__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__302__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__302__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__302__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__302__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__addi__306__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__306__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__306__rd = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__rd = __Vfunc_tb_top_cpu__DOT__addi__306__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__rs1 = __Vfunc_tb_top_cpu__DOT__addi__306__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__imm = __Vfunc_tb_top_cpu__DOT__addi__306__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__307__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__307__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__307__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__307__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__307__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__307__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__306__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__307__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__305__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__306__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__305__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__305__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__305__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__305__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__305__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__305__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__305__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__sw__309__imm = 0xcU;
    __Vfunc_tb_top_cpu__DOT__sw__309__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__309__rs2 = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__rs1 = __Vfunc_tb_top_cpu__DOT__sw__309__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__rs2 = __Vfunc_tb_top_cpu__DOT__sw__309__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__imm = __Vfunc_tb_top_cpu__DOT__sw__309__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__310__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__310__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__310__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__310__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__310__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__310__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__310__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__309__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__310__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__308__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__309__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__308__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__308__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__308__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__308__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__308__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__308__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__308__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    __Vfunc_tb_top_cpu__DOT__jal__312__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__312__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__313__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__313__rd = __Vfunc_tb_top_cpu__DOT__jal__312__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__313__imm = __Vfunc_tb_top_cpu__DOT__jal__312__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__313__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__313__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__313__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__313__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__313__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__313__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__313__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__312__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__313__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__311__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__312__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__311__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__311__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__311__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__311__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__311__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__311__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__311__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__259__pc);
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__315__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__315__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__315__addr = 0x10cU;
    __Vtask_tb_top_cpu__DOT__wait_for_word__315__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__257__name, 
                                            std::string{" final marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__315__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__316__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__315__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__316__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__316__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__316__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__316__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__316__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__316__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__315__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__315__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__315__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__315__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__315__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__317__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__315__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__317__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__317__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__317__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__317__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__317__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__315__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__315__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__315__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__317__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel3;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__316__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__315__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__316__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__316__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__316__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__316__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__316__addr)])));
        }
        __Vlabel3: ;
    }
    __Vtask_tb_top_cpu__DOT__check32__318__expected = 0x55U;
    __Vfunc_tb_top_cpu__DOT__load_word__319__addr = 0x100U;
    __Vfunc_tb_top_cpu__DOT__load_word__319__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__319__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__319__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__319__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__319__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__318__actual = __Vfunc_tb_top_cpu__DOT__load_word__319__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__318__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__257__name, 
                                                                                std::string{" handler marker mem[0]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__318__actual 
         != __Vtask_tb_top_cpu__DOT__check32__318__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__318__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__318__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__318__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__318__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__320__expected 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__257__expected_mcause;
    __Vfunc_tb_top_cpu__DOT__load_word__321__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__321__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__321__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__321__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__321__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__321__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__320__actual = __Vfunc_tb_top_cpu__DOT__load_word__321__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__320__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__257__name, 
                                                                                std::string{" mcause mem[4]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__320__actual 
         != __Vtask_tb_top_cpu__DOT__check32__320__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__320__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__320__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__320__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__320__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    if (__Vtask_tb_top_cpu__DOT__run_exception_test__257__check_mtval) {
        __Vtask_tb_top_cpu__DOT__check32__322__expected 
            = __Vtask_tb_top_cpu__DOT__run_exception_test__257__expected_mtval;
        __Vfunc_tb_top_cpu__DOT__load_word__323__addr = 0x108U;
        __Vfunc_tb_top_cpu__DOT__load_word__323__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__323__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__323__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__323__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__323__addr)])));
        __Vtask_tb_top_cpu__DOT__check32__322__actual 
            = __Vfunc_tb_top_cpu__DOT__load_word__323__Vfuncout;
        __Vtask_tb_top_cpu__DOT__check32__322__name 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__257__name, 
                                                std::string{" mtval mem[8]"}));
        if ((__Vtask_tb_top_cpu__DOT__check32__322__actual 
             != __Vtask_tb_top_cpu__DOT__check32__322__expected)) {
            VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                      -1,&(__Vtask_tb_top_cpu__DOT__check32__322__name),
                      32,__Vtask_tb_top_cpu__DOT__check32__322__actual,
                      32,__Vtask_tb_top_cpu__DOT__check32__322__expected);
            vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__fail_count);
        } else {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__322__name));
            vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__pass_count);
        }
    }
    __Vtask_tb_top_cpu__DOT__check32__324__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__325__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__325__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__325__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__325__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__325__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__325__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__324__actual = __Vfunc_tb_top_cpu__DOT__load_word__325__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__324__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__257__name, 
                                                                                std::string{" final marker mem[12]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__324__actual 
         != __Vtask_tb_top_cpu__DOT__check32__324__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__324__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__324__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__324__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__324__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__326__expected = 0U;
    __Vfunc_tb_top_cpu__DOT__load_word__327__addr = 0x110U;
    __Vfunc_tb_top_cpu__DOT__load_word__327__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__327__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__327__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__327__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__327__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__326__actual = __Vfunc_tb_top_cpu__DOT__load_word__327__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__326__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__257__name, 
                                                                                std::string{" skipped path mem[16]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__326__actual 
         != __Vtask_tb_top_cpu__DOT__check32__326__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__326__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__326__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__326__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__326__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__run_exception_test__328__check_mtval = 1U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__328__expected_mtval = 0x102U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__328__expected_mcause = 4U;
    __Vfunc_tb_top_cpu__DOT__lw__329__imm = 2U;
    __Vfunc_tb_top_cpu__DOT__lw__329__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__lw__329__rd = 1U;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__opcode = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__rd = __Vfunc_tb_top_cpu__DOT__lw__329__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__rs1 = __Vfunc_tb_top_cpu__DOT__lw__329__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__imm = __Vfunc_tb_top_cpu__DOT__lw__329__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__330__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__330__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__330__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__330__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__330__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__330__opcode)))));
    __Vfunc_tb_top_cpu__DOT__lw__329__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__330__Vfuncout;
    __Vtask_tb_top_cpu__DOT__run_exception_test__328__fault_instr 
        = __Vfunc_tb_top_cpu__DOT__lw__329__Vfuncout;
    __Vtask_tb_top_cpu__DOT__run_exception_test__328__name = 
        std::string{"LOAD_MISALIGNED"};
    VL_WRITEF("\n============================================================\nEXCEPTION TEST: %@\n============================================================\n",
              -1,&(__Vtask_tb_top_cpu__DOT__run_exception_test__328__name));
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__fault_instr 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__328__fault_instr;
    __Vtask_tb_top_cpu__DOT__clear_memories__332__i = 0U;
    while (VL_GTS_III(32, 0x800U, __Vtask_tb_top_cpu__DOT__clear_memories__332__i)) {
        __Vfunc_tb_top_cpu__DOT__nop__333__Vfuncout = 0x13U;
        vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__clear_memories__332__i)] 
            = __Vfunc_tb_top_cpu__DOT__nop__333__Vfuncout;
        __Vtask_tb_top_cpu__DOT__clear_memories__332__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__332__i);
    }
    __Vtask_tb_top_cpu__DOT__clear_memories__332__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_top_cpu__DOT__clear_memories__332__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU & __Vtask_tb_top_cpu__DOT__clear_memories__332__i)] = 0U;
        __Vtask_tb_top_cpu__DOT__clear_memories__332__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__332__i);
    }
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc = 0x40000U;
    __Vfunc_tb_top_cpu__DOT__addi__335__imm = 0x100U;
    __Vfunc_tb_top_cpu__DOT__addi__335__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__335__rd = 0xaU;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__rd = __Vfunc_tb_top_cpu__DOT__addi__335__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__rs1 = __Vfunc_tb_top_cpu__DOT__addi__335__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__imm = __Vfunc_tb_top_cpu__DOT__addi__335__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__336__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__336__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__336__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__336__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__336__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__336__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__335__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__336__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__334__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__335__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__334__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__334__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__334__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__334__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__334__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__334__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__334__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__lui__338__imm20 = 0x40U;
    __Vfunc_tb_top_cpu__DOT__lui__338__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_u__339__opcode = 0x37U;
    __Vfunc_tb_top_cpu__DOT__enc_u__339__rd = __Vfunc_tb_top_cpu__DOT__lui__338__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__339__imm20 = __Vfunc_tb_top_cpu__DOT__lui__338__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__339__Vfuncout = 
        ((__Vfunc_tb_top_cpu__DOT__enc_u__339__imm20 
          << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_u__339__rd) 
                       << 7U) | (IData)(__Vfunc_tb_top_cpu__DOT__enc_u__339__opcode)));
    __Vfunc_tb_top_cpu__DOT__lui__338__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_u__339__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__337__instr 
        = __Vfunc_tb_top_cpu__DOT__lui__338__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__337__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__337__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__337__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__337__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__337__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__337__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__337__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__addi__341__imm = 0x300U;
    __Vfunc_tb_top_cpu__DOT__addi__341__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__addi__341__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__rd = __Vfunc_tb_top_cpu__DOT__addi__341__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__rs1 = __Vfunc_tb_top_cpu__DOT__addi__341__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__imm = __Vfunc_tb_top_cpu__DOT__addi__341__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__342__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__342__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__342__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__342__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__342__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__342__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__341__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__342__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__340__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__341__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__340__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__340__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__340__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__340__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__340__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__340__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__340__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__344__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__csrrw__344__csr_addr = 0x305U;
    __Vfunc_tb_top_cpu__DOT__csrrw__344__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__344__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__344__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__344__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__344__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__343__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__344__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__343__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__343__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__343__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__343__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__343__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__343__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__343__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__addi__346__imm = 0x7bU;
    __Vfunc_tb_top_cpu__DOT__addi__346__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__346__rd = 1U;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__rd = __Vfunc_tb_top_cpu__DOT__addi__346__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__rs1 = __Vfunc_tb_top_cpu__DOT__addi__346__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__imm = __Vfunc_tb_top_cpu__DOT__addi__346__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__347__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__347__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__347__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__347__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__347__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__347__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__346__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__347__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__345__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__346__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__345__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__345__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__345__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__345__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__345__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__345__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__345__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__addi__349__imm = 0x400U;
    __Vfunc_tb_top_cpu__DOT__addi__349__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__349__rd = 0x14U;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__rd = __Vfunc_tb_top_cpu__DOT__addi__349__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__rs1 = __Vfunc_tb_top_cpu__DOT__addi__349__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__imm = __Vfunc_tb_top_cpu__DOT__addi__349__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__350__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__350__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__350__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__350__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__350__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__350__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__349__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__350__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__348__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__349__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__348__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__348__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__348__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__348__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__348__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__348__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__348__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vtask_tb_top_cpu__DOT__put_instr__351__instr 
        = __Vtask_tb_top_cpu__DOT__load_exception_program__331__fault_instr;
    __Vtask_tb_top_cpu__DOT__put_instr__351__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__351__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__351__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__351__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__351__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__351__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__351__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__addi__353__imm = 0x63U;
    __Vfunc_tb_top_cpu__DOT__addi__353__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__353__rd = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__rd = __Vfunc_tb_top_cpu__DOT__addi__353__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__rs1 = __Vfunc_tb_top_cpu__DOT__addi__353__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__imm = __Vfunc_tb_top_cpu__DOT__addi__353__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__354__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__354__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__354__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__354__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__354__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__354__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__353__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__354__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__352__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__353__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__352__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__352__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__352__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__352__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__352__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__352__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__352__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__sw__356__imm = 0x10U;
    __Vfunc_tb_top_cpu__DOT__sw__356__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__356__rs2 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__rs1 = __Vfunc_tb_top_cpu__DOT__sw__356__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__rs2 = __Vfunc_tb_top_cpu__DOT__sw__356__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__imm = __Vfunc_tb_top_cpu__DOT__sw__356__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__357__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__357__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__357__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__357__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__357__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__357__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__357__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__356__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__357__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__355__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__356__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__355__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__355__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__355__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__355__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__355__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__355__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__355__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__jal__359__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__359__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__360__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__360__rd = __Vfunc_tb_top_cpu__DOT__jal__359__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__360__imm = __Vfunc_tb_top_cpu__DOT__jal__359__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__360__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__360__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__360__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__360__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__360__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__360__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__360__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__359__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__360__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__358__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__359__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__358__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__358__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__358__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__358__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__358__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__358__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__358__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc = 0x40300U;
    __Vfunc_tb_top_cpu__DOT__addi__362__imm = 0x55U;
    __Vfunc_tb_top_cpu__DOT__addi__362__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__362__rd = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__rd = __Vfunc_tb_top_cpu__DOT__addi__362__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__rs1 = __Vfunc_tb_top_cpu__DOT__addi__362__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__imm = __Vfunc_tb_top_cpu__DOT__addi__362__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__363__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__363__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__363__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__363__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__363__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__363__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__362__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__363__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__361__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__362__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__361__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__361__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__361__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__361__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__361__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__361__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__361__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__sw__365__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__sw__365__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__365__rs2 = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__rs1 = __Vfunc_tb_top_cpu__DOT__sw__365__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__rs2 = __Vfunc_tb_top_cpu__DOT__sw__365__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__imm = __Vfunc_tb_top_cpu__DOT__sw__365__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__366__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__366__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__366__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__366__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__366__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__366__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__366__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__365__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__366__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__364__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__365__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__364__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__364__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__364__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__364__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__364__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__364__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__364__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__368__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__368__csr_addr = 0x342U;
    __Vfunc_tb_top_cpu__DOT__csrrs__368__rd = 4U;
    __Vfunc_tb_top_cpu__DOT__csrrs__368__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__368__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__368__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__368__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__367__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__368__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__367__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__367__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__367__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__367__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__367__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__367__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__367__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__sw__370__imm = 4U;
    __Vfunc_tb_top_cpu__DOT__sw__370__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__370__rs2 = 4U;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__rs1 = __Vfunc_tb_top_cpu__DOT__sw__370__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__rs2 = __Vfunc_tb_top_cpu__DOT__sw__370__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__imm = __Vfunc_tb_top_cpu__DOT__sw__370__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__371__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__371__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__371__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__371__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__371__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__371__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__371__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__370__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__371__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__369__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__370__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__369__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__369__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__369__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__369__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__369__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__369__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__369__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__373__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__373__csr_addr = 0x343U;
    __Vfunc_tb_top_cpu__DOT__csrrs__373__rd = 5U;
    __Vfunc_tb_top_cpu__DOT__csrrs__373__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__373__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__373__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__373__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__372__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__373__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__372__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__372__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__372__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__372__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__372__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__372__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__372__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__sw__375__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__sw__375__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__375__rs2 = 5U;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__rs1 = __Vfunc_tb_top_cpu__DOT__sw__375__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__rs2 = __Vfunc_tb_top_cpu__DOT__sw__375__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__imm = __Vfunc_tb_top_cpu__DOT__sw__375__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__376__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__376__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__376__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__376__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__376__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__376__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__376__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__375__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__376__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__374__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__375__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__374__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__374__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__374__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__374__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__374__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__374__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__374__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__addi__378__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__378__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__378__rd = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__rd = __Vfunc_tb_top_cpu__DOT__addi__378__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__rs1 = __Vfunc_tb_top_cpu__DOT__addi__378__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__imm = __Vfunc_tb_top_cpu__DOT__addi__378__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__379__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__379__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__379__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__379__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__379__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__379__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__378__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__379__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__377__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__378__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__377__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__377__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__377__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__377__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__377__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__377__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__377__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__sw__381__imm = 0xcU;
    __Vfunc_tb_top_cpu__DOT__sw__381__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__381__rs2 = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__rs1 = __Vfunc_tb_top_cpu__DOT__sw__381__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__rs2 = __Vfunc_tb_top_cpu__DOT__sw__381__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__imm = __Vfunc_tb_top_cpu__DOT__sw__381__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__382__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__382__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__382__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__382__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__382__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__382__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__382__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__381__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__382__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__380__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__381__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__380__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__380__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__380__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__380__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__380__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__380__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__380__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    __Vfunc_tb_top_cpu__DOT__jal__384__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__384__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__385__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__385__rd = __Vfunc_tb_top_cpu__DOT__jal__384__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__385__imm = __Vfunc_tb_top_cpu__DOT__jal__384__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__385__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__385__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__385__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__385__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__385__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__385__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__385__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__384__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__385__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__383__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__384__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__383__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__383__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__383__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__383__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__383__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__383__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__383__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__331__pc);
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__387__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__387__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__387__addr = 0x10cU;
    __Vtask_tb_top_cpu__DOT__wait_for_word__387__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__328__name, 
                                            std::string{" final marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__387__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__388__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__387__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__388__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__388__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__388__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__388__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__388__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__388__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__387__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__387__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__387__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__387__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__387__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__389__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__387__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__389__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__389__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__389__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__389__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__389__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__387__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__387__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__387__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__389__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel4;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__388__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__387__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__388__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__388__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__388__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__388__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__388__addr)])));
        }
        __Vlabel4: ;
    }
    __Vtask_tb_top_cpu__DOT__check32__390__expected = 0x55U;
    __Vfunc_tb_top_cpu__DOT__load_word__391__addr = 0x100U;
    __Vfunc_tb_top_cpu__DOT__load_word__391__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__391__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__391__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__391__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__391__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__390__actual = __Vfunc_tb_top_cpu__DOT__load_word__391__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__390__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__328__name, 
                                                                                std::string{" handler marker mem[0]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__390__actual 
         != __Vtask_tb_top_cpu__DOT__check32__390__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__390__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__390__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__390__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__390__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__392__expected 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__328__expected_mcause;
    __Vfunc_tb_top_cpu__DOT__load_word__393__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__393__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__393__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__393__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__393__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__393__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__392__actual = __Vfunc_tb_top_cpu__DOT__load_word__393__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__392__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__328__name, 
                                                                                std::string{" mcause mem[4]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__392__actual 
         != __Vtask_tb_top_cpu__DOT__check32__392__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__392__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__392__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__392__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__392__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    if (__Vtask_tb_top_cpu__DOT__run_exception_test__328__check_mtval) {
        __Vtask_tb_top_cpu__DOT__check32__394__expected 
            = __Vtask_tb_top_cpu__DOT__run_exception_test__328__expected_mtval;
        __Vfunc_tb_top_cpu__DOT__load_word__395__addr = 0x108U;
        __Vfunc_tb_top_cpu__DOT__load_word__395__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__395__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__395__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__395__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__395__addr)])));
        __Vtask_tb_top_cpu__DOT__check32__394__actual 
            = __Vfunc_tb_top_cpu__DOT__load_word__395__Vfuncout;
        __Vtask_tb_top_cpu__DOT__check32__394__name 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__328__name, 
                                                std::string{" mtval mem[8]"}));
        if ((__Vtask_tb_top_cpu__DOT__check32__394__actual 
             != __Vtask_tb_top_cpu__DOT__check32__394__expected)) {
            VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                      -1,&(__Vtask_tb_top_cpu__DOT__check32__394__name),
                      32,__Vtask_tb_top_cpu__DOT__check32__394__actual,
                      32,__Vtask_tb_top_cpu__DOT__check32__394__expected);
            vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__fail_count);
        } else {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__394__name));
            vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__pass_count);
        }
    }
    __Vtask_tb_top_cpu__DOT__check32__396__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__397__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__397__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__397__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__397__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__397__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__397__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__396__actual = __Vfunc_tb_top_cpu__DOT__load_word__397__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__396__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__328__name, 
                                                                                std::string{" final marker mem[12]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__396__actual 
         != __Vtask_tb_top_cpu__DOT__check32__396__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__396__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__396__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__396__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__396__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__398__expected = 0U;
    __Vfunc_tb_top_cpu__DOT__load_word__399__addr = 0x110U;
    __Vfunc_tb_top_cpu__DOT__load_word__399__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__399__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__399__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__399__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__399__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__398__actual = __Vfunc_tb_top_cpu__DOT__load_word__399__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__398__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__328__name, 
                                                                                std::string{" skipped path mem[16]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__398__actual 
         != __Vtask_tb_top_cpu__DOT__check32__398__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__398__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__398__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__398__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__398__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__run_exception_test__400__check_mtval = 1U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__400__expected_mtval = 0x102U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__400__expected_mcause = 6U;
    __Vfunc_tb_top_cpu__DOT__sw__401__imm = 2U;
    __Vfunc_tb_top_cpu__DOT__sw__401__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__401__rs2 = 1U;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__rs1 = __Vfunc_tb_top_cpu__DOT__sw__401__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__rs2 = __Vfunc_tb_top_cpu__DOT__sw__401__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__imm = __Vfunc_tb_top_cpu__DOT__sw__401__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__402__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__402__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__402__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__402__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__402__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__402__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__402__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__401__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__402__Vfuncout;
    __Vtask_tb_top_cpu__DOT__run_exception_test__400__fault_instr 
        = __Vfunc_tb_top_cpu__DOT__sw__401__Vfuncout;
    __Vtask_tb_top_cpu__DOT__run_exception_test__400__name = 
        std::string{"STORE_MISALIGNED"};
    VL_WRITEF("\n============================================================\nEXCEPTION TEST: %@\n============================================================\n",
              -1,&(__Vtask_tb_top_cpu__DOT__run_exception_test__400__name));
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__fault_instr 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__400__fault_instr;
    __Vtask_tb_top_cpu__DOT__clear_memories__404__i = 0U;
    while (VL_GTS_III(32, 0x800U, __Vtask_tb_top_cpu__DOT__clear_memories__404__i)) {
        __Vfunc_tb_top_cpu__DOT__nop__405__Vfuncout = 0x13U;
        vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__clear_memories__404__i)] 
            = __Vfunc_tb_top_cpu__DOT__nop__405__Vfuncout;
        __Vtask_tb_top_cpu__DOT__clear_memories__404__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__404__i);
    }
    __Vtask_tb_top_cpu__DOT__clear_memories__404__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_top_cpu__DOT__clear_memories__404__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU & __Vtask_tb_top_cpu__DOT__clear_memories__404__i)] = 0U;
        __Vtask_tb_top_cpu__DOT__clear_memories__404__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__404__i);
    }
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc = 0x40000U;
    __Vfunc_tb_top_cpu__DOT__addi__407__imm = 0x100U;
    __Vfunc_tb_top_cpu__DOT__addi__407__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__407__rd = 0xaU;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__rd = __Vfunc_tb_top_cpu__DOT__addi__407__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__rs1 = __Vfunc_tb_top_cpu__DOT__addi__407__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__imm = __Vfunc_tb_top_cpu__DOT__addi__407__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__408__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__408__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__408__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__408__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__408__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__408__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__407__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__408__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__406__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__407__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__406__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__406__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__406__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__406__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__406__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__406__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__406__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__lui__410__imm20 = 0x40U;
    __Vfunc_tb_top_cpu__DOT__lui__410__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_u__411__opcode = 0x37U;
    __Vfunc_tb_top_cpu__DOT__enc_u__411__rd = __Vfunc_tb_top_cpu__DOT__lui__410__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__411__imm20 = __Vfunc_tb_top_cpu__DOT__lui__410__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__411__Vfuncout = 
        ((__Vfunc_tb_top_cpu__DOT__enc_u__411__imm20 
          << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_u__411__rd) 
                       << 7U) | (IData)(__Vfunc_tb_top_cpu__DOT__enc_u__411__opcode)));
    __Vfunc_tb_top_cpu__DOT__lui__410__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_u__411__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__409__instr 
        = __Vfunc_tb_top_cpu__DOT__lui__410__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__409__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__409__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__409__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__409__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__409__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__409__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__409__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__addi__413__imm = 0x300U;
    __Vfunc_tb_top_cpu__DOT__addi__413__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__addi__413__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__rd = __Vfunc_tb_top_cpu__DOT__addi__413__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__rs1 = __Vfunc_tb_top_cpu__DOT__addi__413__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__imm = __Vfunc_tb_top_cpu__DOT__addi__413__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__414__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__414__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__414__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__414__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__414__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__414__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__413__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__414__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__412__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__413__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__412__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__412__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__412__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__412__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__412__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__412__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__412__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__416__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__csrrw__416__csr_addr = 0x305U;
    __Vfunc_tb_top_cpu__DOT__csrrw__416__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__416__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__416__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__416__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__416__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__415__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__416__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__415__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__415__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__415__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__415__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__415__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__415__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__415__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__addi__418__imm = 0x7bU;
    __Vfunc_tb_top_cpu__DOT__addi__418__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__418__rd = 1U;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__rd = __Vfunc_tb_top_cpu__DOT__addi__418__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__rs1 = __Vfunc_tb_top_cpu__DOT__addi__418__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__imm = __Vfunc_tb_top_cpu__DOT__addi__418__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__419__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__419__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__419__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__419__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__419__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__419__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__418__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__419__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__417__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__418__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__417__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__417__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__417__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__417__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__417__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__417__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__417__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__addi__421__imm = 0x400U;
    __Vfunc_tb_top_cpu__DOT__addi__421__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__421__rd = 0x14U;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__rd = __Vfunc_tb_top_cpu__DOT__addi__421__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__rs1 = __Vfunc_tb_top_cpu__DOT__addi__421__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__imm = __Vfunc_tb_top_cpu__DOT__addi__421__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__422__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__422__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__422__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__422__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__422__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__422__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__421__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__422__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__420__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__421__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__420__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__420__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__420__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__420__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__420__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__420__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__420__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vtask_tb_top_cpu__DOT__put_instr__423__instr 
        = __Vtask_tb_top_cpu__DOT__load_exception_program__403__fault_instr;
    __Vtask_tb_top_cpu__DOT__put_instr__423__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__423__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__423__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__423__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__423__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__423__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__423__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__addi__425__imm = 0x63U;
    __Vfunc_tb_top_cpu__DOT__addi__425__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__425__rd = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__rd = __Vfunc_tb_top_cpu__DOT__addi__425__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__rs1 = __Vfunc_tb_top_cpu__DOT__addi__425__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__imm = __Vfunc_tb_top_cpu__DOT__addi__425__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__426__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__426__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__426__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__426__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__426__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__426__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__425__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__426__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__424__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__425__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__424__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__424__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__424__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__424__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__424__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__424__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__424__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__sw__428__imm = 0x10U;
    __Vfunc_tb_top_cpu__DOT__sw__428__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__428__rs2 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__rs1 = __Vfunc_tb_top_cpu__DOT__sw__428__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__rs2 = __Vfunc_tb_top_cpu__DOT__sw__428__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__imm = __Vfunc_tb_top_cpu__DOT__sw__428__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__429__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__429__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__429__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__429__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__429__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__429__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__429__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__428__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__429__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__427__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__428__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__427__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__427__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__427__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__427__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__427__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__427__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__427__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__jal__431__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__431__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__432__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__432__rd = __Vfunc_tb_top_cpu__DOT__jal__431__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__432__imm = __Vfunc_tb_top_cpu__DOT__jal__431__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__432__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__432__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__432__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__432__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__432__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__432__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__432__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__431__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__432__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__430__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__431__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__430__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__430__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__430__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__430__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__430__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__430__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__430__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc = 0x40300U;
    __Vfunc_tb_top_cpu__DOT__addi__434__imm = 0x55U;
    __Vfunc_tb_top_cpu__DOT__addi__434__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__434__rd = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__rd = __Vfunc_tb_top_cpu__DOT__addi__434__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__rs1 = __Vfunc_tb_top_cpu__DOT__addi__434__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__imm = __Vfunc_tb_top_cpu__DOT__addi__434__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__435__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__435__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__435__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__435__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__435__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__435__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__434__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__435__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__433__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__434__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__433__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__433__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__433__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__433__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__433__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__433__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__433__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__sw__437__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__sw__437__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__437__rs2 = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__rs1 = __Vfunc_tb_top_cpu__DOT__sw__437__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__rs2 = __Vfunc_tb_top_cpu__DOT__sw__437__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__imm = __Vfunc_tb_top_cpu__DOT__sw__437__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__438__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__438__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__438__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__438__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__438__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__438__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__438__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__437__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__438__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__436__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__437__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__436__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__436__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__436__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__436__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__436__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__436__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__436__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__440__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__440__csr_addr = 0x342U;
    __Vfunc_tb_top_cpu__DOT__csrrs__440__rd = 4U;
    __Vfunc_tb_top_cpu__DOT__csrrs__440__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__440__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__440__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__440__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__439__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__440__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__439__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__439__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__439__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__439__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__439__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__439__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__439__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__sw__442__imm = 4U;
    __Vfunc_tb_top_cpu__DOT__sw__442__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__442__rs2 = 4U;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__rs1 = __Vfunc_tb_top_cpu__DOT__sw__442__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__rs2 = __Vfunc_tb_top_cpu__DOT__sw__442__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__imm = __Vfunc_tb_top_cpu__DOT__sw__442__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__443__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__443__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__443__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__443__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__443__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__443__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__443__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__442__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__443__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__441__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__442__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__441__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__441__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__441__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__441__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__441__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__441__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__441__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__445__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__445__csr_addr = 0x343U;
    __Vfunc_tb_top_cpu__DOT__csrrs__445__rd = 5U;
    __Vfunc_tb_top_cpu__DOT__csrrs__445__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__445__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__445__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__445__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__444__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__445__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__444__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__444__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__444__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__444__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__444__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__444__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__444__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__sw__447__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__sw__447__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__447__rs2 = 5U;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__rs1 = __Vfunc_tb_top_cpu__DOT__sw__447__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__rs2 = __Vfunc_tb_top_cpu__DOT__sw__447__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__imm = __Vfunc_tb_top_cpu__DOT__sw__447__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__448__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__448__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__448__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__448__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__448__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__448__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__448__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__447__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__448__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__446__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__447__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__446__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__446__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__446__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__446__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__446__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__446__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__446__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__addi__450__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__450__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__450__rd = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__rd = __Vfunc_tb_top_cpu__DOT__addi__450__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__rs1 = __Vfunc_tb_top_cpu__DOT__addi__450__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__imm = __Vfunc_tb_top_cpu__DOT__addi__450__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__451__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__451__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__451__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__451__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__451__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__451__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__450__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__451__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__449__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__450__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__449__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__449__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__449__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__449__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__449__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__449__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__449__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__sw__453__imm = 0xcU;
    __Vfunc_tb_top_cpu__DOT__sw__453__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__453__rs2 = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__rs1 = __Vfunc_tb_top_cpu__DOT__sw__453__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__rs2 = __Vfunc_tb_top_cpu__DOT__sw__453__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__imm = __Vfunc_tb_top_cpu__DOT__sw__453__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__454__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__454__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__454__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__454__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__454__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__454__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__454__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__453__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__454__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__452__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__453__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__452__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__452__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__452__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__452__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__452__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__452__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__452__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    __Vfunc_tb_top_cpu__DOT__jal__456__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__456__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__457__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__457__rd = __Vfunc_tb_top_cpu__DOT__jal__456__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__457__imm = __Vfunc_tb_top_cpu__DOT__jal__456__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__457__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__457__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__457__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__457__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__457__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__457__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__457__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__456__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__457__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__455__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__456__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__455__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__455__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__455__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__455__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__455__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__455__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__455__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__403__pc);
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__459__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__459__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__459__addr = 0x10cU;
    __Vtask_tb_top_cpu__DOT__wait_for_word__459__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__400__name, 
                                            std::string{" final marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__459__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__460__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__459__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__460__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__460__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__460__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__460__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__460__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__460__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__459__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__459__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__459__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__459__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__459__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__461__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__459__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__461__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__461__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__461__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__461__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__461__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__459__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__459__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__459__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__461__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel5;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__460__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__459__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__460__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__460__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__460__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__460__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__460__addr)])));
        }
        __Vlabel5: ;
    }
    __Vtask_tb_top_cpu__DOT__check32__462__expected = 0x55U;
    __Vfunc_tb_top_cpu__DOT__load_word__463__addr = 0x100U;
    __Vfunc_tb_top_cpu__DOT__load_word__463__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__463__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__463__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__463__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__463__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__462__actual = __Vfunc_tb_top_cpu__DOT__load_word__463__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__462__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__400__name, 
                                                                                std::string{" handler marker mem[0]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__462__actual 
         != __Vtask_tb_top_cpu__DOT__check32__462__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__462__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__462__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__462__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__462__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__464__expected 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__400__expected_mcause;
    __Vfunc_tb_top_cpu__DOT__load_word__465__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__465__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__465__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__465__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__465__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__465__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__464__actual = __Vfunc_tb_top_cpu__DOT__load_word__465__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__464__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__400__name, 
                                                                                std::string{" mcause mem[4]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__464__actual 
         != __Vtask_tb_top_cpu__DOT__check32__464__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__464__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__464__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__464__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__464__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    if (__Vtask_tb_top_cpu__DOT__run_exception_test__400__check_mtval) {
        __Vtask_tb_top_cpu__DOT__check32__466__expected 
            = __Vtask_tb_top_cpu__DOT__run_exception_test__400__expected_mtval;
        __Vfunc_tb_top_cpu__DOT__load_word__467__addr = 0x108U;
        __Vfunc_tb_top_cpu__DOT__load_word__467__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__467__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__467__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__467__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__467__addr)])));
        __Vtask_tb_top_cpu__DOT__check32__466__actual 
            = __Vfunc_tb_top_cpu__DOT__load_word__467__Vfuncout;
        __Vtask_tb_top_cpu__DOT__check32__466__name 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__400__name, 
                                                std::string{" mtval mem[8]"}));
        if ((__Vtask_tb_top_cpu__DOT__check32__466__actual 
             != __Vtask_tb_top_cpu__DOT__check32__466__expected)) {
            VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                      -1,&(__Vtask_tb_top_cpu__DOT__check32__466__name),
                      32,__Vtask_tb_top_cpu__DOT__check32__466__actual,
                      32,__Vtask_tb_top_cpu__DOT__check32__466__expected);
            vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__fail_count);
        } else {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__466__name));
            vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__pass_count);
        }
    }
    __Vtask_tb_top_cpu__DOT__check32__468__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__469__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__469__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__469__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__469__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__469__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__469__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__468__actual = __Vfunc_tb_top_cpu__DOT__load_word__469__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__468__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__400__name, 
                                                                                std::string{" final marker mem[12]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__468__actual 
         != __Vtask_tb_top_cpu__DOT__check32__468__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__468__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__468__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__468__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__468__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__470__expected = 0U;
    __Vfunc_tb_top_cpu__DOT__load_word__471__addr = 0x110U;
    __Vfunc_tb_top_cpu__DOT__load_word__471__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__471__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__471__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__471__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__471__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__470__actual = __Vfunc_tb_top_cpu__DOT__load_word__471__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__470__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__400__name, 
                                                                                std::string{" skipped path mem[16]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__470__actual 
         != __Vtask_tb_top_cpu__DOT__check32__470__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__470__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__470__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__470__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__470__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__run_exception_test__472__check_mtval = 1U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__472__expected_mtval = 0x400U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__472__expected_mcause = 5U;
    __Vfunc_tb_top_cpu__DOT__lw__473__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__lw__473__rs1 = 0x14U;
    __Vfunc_tb_top_cpu__DOT__lw__473__rd = 1U;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__opcode = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__rd = __Vfunc_tb_top_cpu__DOT__lw__473__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__rs1 = __Vfunc_tb_top_cpu__DOT__lw__473__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__imm = __Vfunc_tb_top_cpu__DOT__lw__473__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__474__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__474__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__474__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__474__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__474__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__474__opcode)))));
    __Vfunc_tb_top_cpu__DOT__lw__473__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__474__Vfuncout;
    __Vtask_tb_top_cpu__DOT__run_exception_test__472__fault_instr 
        = __Vfunc_tb_top_cpu__DOT__lw__473__Vfuncout;
    __Vtask_tb_top_cpu__DOT__run_exception_test__472__name = 
        std::string{"LOAD_FAULT"};
    VL_WRITEF("\n============================================================\nEXCEPTION TEST: %@\n============================================================\n",
              -1,&(__Vtask_tb_top_cpu__DOT__run_exception_test__472__name));
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__fault_instr 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__472__fault_instr;
    __Vtask_tb_top_cpu__DOT__clear_memories__476__i = 0U;
    while (VL_GTS_III(32, 0x800U, __Vtask_tb_top_cpu__DOT__clear_memories__476__i)) {
        __Vfunc_tb_top_cpu__DOT__nop__477__Vfuncout = 0x13U;
        vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__clear_memories__476__i)] 
            = __Vfunc_tb_top_cpu__DOT__nop__477__Vfuncout;
        __Vtask_tb_top_cpu__DOT__clear_memories__476__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__476__i);
    }
    __Vtask_tb_top_cpu__DOT__clear_memories__476__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_top_cpu__DOT__clear_memories__476__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU & __Vtask_tb_top_cpu__DOT__clear_memories__476__i)] = 0U;
        __Vtask_tb_top_cpu__DOT__clear_memories__476__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__476__i);
    }
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc = 0x40000U;
    __Vfunc_tb_top_cpu__DOT__addi__479__imm = 0x100U;
    __Vfunc_tb_top_cpu__DOT__addi__479__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__479__rd = 0xaU;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__rd = __Vfunc_tb_top_cpu__DOT__addi__479__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__rs1 = __Vfunc_tb_top_cpu__DOT__addi__479__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__imm = __Vfunc_tb_top_cpu__DOT__addi__479__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__480__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__480__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__480__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__480__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__480__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__480__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__479__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__480__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__478__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__479__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__478__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__478__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__478__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__478__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__478__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__478__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__478__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__lui__482__imm20 = 0x40U;
    __Vfunc_tb_top_cpu__DOT__lui__482__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_u__483__opcode = 0x37U;
    __Vfunc_tb_top_cpu__DOT__enc_u__483__rd = __Vfunc_tb_top_cpu__DOT__lui__482__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__483__imm20 = __Vfunc_tb_top_cpu__DOT__lui__482__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__483__Vfuncout = 
        ((__Vfunc_tb_top_cpu__DOT__enc_u__483__imm20 
          << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_u__483__rd) 
                       << 7U) | (IData)(__Vfunc_tb_top_cpu__DOT__enc_u__483__opcode)));
    __Vfunc_tb_top_cpu__DOT__lui__482__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_u__483__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__481__instr 
        = __Vfunc_tb_top_cpu__DOT__lui__482__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__481__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__481__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__481__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__481__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__481__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__481__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__481__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__addi__485__imm = 0x300U;
    __Vfunc_tb_top_cpu__DOT__addi__485__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__addi__485__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__rd = __Vfunc_tb_top_cpu__DOT__addi__485__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__rs1 = __Vfunc_tb_top_cpu__DOT__addi__485__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__imm = __Vfunc_tb_top_cpu__DOT__addi__485__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__486__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__486__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__486__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__486__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__486__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__486__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__485__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__486__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__484__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__485__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__484__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__484__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__484__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__484__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__484__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__484__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__484__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__488__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__csrrw__488__csr_addr = 0x305U;
    __Vfunc_tb_top_cpu__DOT__csrrw__488__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__488__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__488__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__488__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__488__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__487__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__488__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__487__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__487__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__487__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__487__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__487__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__487__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__487__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__addi__490__imm = 0x7bU;
    __Vfunc_tb_top_cpu__DOT__addi__490__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__490__rd = 1U;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__rd = __Vfunc_tb_top_cpu__DOT__addi__490__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__rs1 = __Vfunc_tb_top_cpu__DOT__addi__490__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__imm = __Vfunc_tb_top_cpu__DOT__addi__490__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__491__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__491__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__491__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__491__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__491__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__491__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__490__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__491__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__489__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__490__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__489__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__489__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__489__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__489__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__489__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__489__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__489__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__addi__493__imm = 0x400U;
    __Vfunc_tb_top_cpu__DOT__addi__493__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__493__rd = 0x14U;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__rd = __Vfunc_tb_top_cpu__DOT__addi__493__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__rs1 = __Vfunc_tb_top_cpu__DOT__addi__493__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__imm = __Vfunc_tb_top_cpu__DOT__addi__493__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__494__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__494__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__494__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__494__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__494__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__494__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__493__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__494__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__492__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__493__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__492__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__492__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__492__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__492__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__492__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__492__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__492__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vtask_tb_top_cpu__DOT__put_instr__495__instr 
        = __Vtask_tb_top_cpu__DOT__load_exception_program__475__fault_instr;
    __Vtask_tb_top_cpu__DOT__put_instr__495__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__495__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__495__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__495__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__495__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__495__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__495__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__addi__497__imm = 0x63U;
    __Vfunc_tb_top_cpu__DOT__addi__497__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__497__rd = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__rd = __Vfunc_tb_top_cpu__DOT__addi__497__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__rs1 = __Vfunc_tb_top_cpu__DOT__addi__497__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__imm = __Vfunc_tb_top_cpu__DOT__addi__497__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__498__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__498__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__498__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__498__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__498__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__498__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__497__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__498__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__496__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__497__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__496__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__496__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__496__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__496__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__496__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__496__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__496__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__sw__500__imm = 0x10U;
    __Vfunc_tb_top_cpu__DOT__sw__500__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__500__rs2 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__rs1 = __Vfunc_tb_top_cpu__DOT__sw__500__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__rs2 = __Vfunc_tb_top_cpu__DOT__sw__500__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__imm = __Vfunc_tb_top_cpu__DOT__sw__500__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__501__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__501__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__501__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__501__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__501__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__501__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__501__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__500__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__501__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__499__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__500__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__499__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__499__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__499__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__499__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__499__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__499__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__499__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__jal__503__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__503__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__504__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__504__rd = __Vfunc_tb_top_cpu__DOT__jal__503__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__504__imm = __Vfunc_tb_top_cpu__DOT__jal__503__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__504__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__504__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__504__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__504__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__504__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__504__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__504__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__503__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__504__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__502__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__503__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__502__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__502__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__502__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__502__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__502__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__502__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__502__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc = 0x40300U;
    __Vfunc_tb_top_cpu__DOT__addi__506__imm = 0x55U;
    __Vfunc_tb_top_cpu__DOT__addi__506__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__506__rd = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__rd = __Vfunc_tb_top_cpu__DOT__addi__506__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__rs1 = __Vfunc_tb_top_cpu__DOT__addi__506__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__imm = __Vfunc_tb_top_cpu__DOT__addi__506__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__507__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__507__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__507__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__507__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__507__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__507__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__506__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__507__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__505__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__506__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__505__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__505__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__505__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__505__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__505__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__505__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__505__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__sw__509__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__sw__509__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__509__rs2 = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__rs1 = __Vfunc_tb_top_cpu__DOT__sw__509__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__rs2 = __Vfunc_tb_top_cpu__DOT__sw__509__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__imm = __Vfunc_tb_top_cpu__DOT__sw__509__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__510__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__510__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__510__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__510__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__510__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__510__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__510__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__509__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__510__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__508__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__509__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__508__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__508__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__508__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__508__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__508__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__508__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__508__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__512__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__512__csr_addr = 0x342U;
    __Vfunc_tb_top_cpu__DOT__csrrs__512__rd = 4U;
    __Vfunc_tb_top_cpu__DOT__csrrs__512__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__512__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__512__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__512__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__511__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__512__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__511__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__511__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__511__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__511__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__511__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__511__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__511__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__sw__514__imm = 4U;
    __Vfunc_tb_top_cpu__DOT__sw__514__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__514__rs2 = 4U;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__rs1 = __Vfunc_tb_top_cpu__DOT__sw__514__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__rs2 = __Vfunc_tb_top_cpu__DOT__sw__514__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__imm = __Vfunc_tb_top_cpu__DOT__sw__514__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__515__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__515__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__515__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__515__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__515__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__515__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__515__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__514__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__515__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__513__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__514__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__513__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__513__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__513__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__513__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__513__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__513__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__513__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__517__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__517__csr_addr = 0x343U;
    __Vfunc_tb_top_cpu__DOT__csrrs__517__rd = 5U;
    __Vfunc_tb_top_cpu__DOT__csrrs__517__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__517__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__517__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__517__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__516__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__517__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__516__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__516__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__516__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__516__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__516__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__516__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__516__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__sw__519__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__sw__519__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__519__rs2 = 5U;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__rs1 = __Vfunc_tb_top_cpu__DOT__sw__519__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__rs2 = __Vfunc_tb_top_cpu__DOT__sw__519__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__imm = __Vfunc_tb_top_cpu__DOT__sw__519__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__520__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__520__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__520__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__520__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__520__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__520__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__520__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__519__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__520__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__518__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__519__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__518__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__518__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__518__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__518__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__518__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__518__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__518__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__addi__522__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__522__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__522__rd = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__rd = __Vfunc_tb_top_cpu__DOT__addi__522__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__rs1 = __Vfunc_tb_top_cpu__DOT__addi__522__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__imm = __Vfunc_tb_top_cpu__DOT__addi__522__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__523__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__523__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__523__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__523__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__523__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__523__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__522__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__523__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__521__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__522__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__521__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__521__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__521__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__521__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__521__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__521__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__521__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__sw__525__imm = 0xcU;
    __Vfunc_tb_top_cpu__DOT__sw__525__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__525__rs2 = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__rs1 = __Vfunc_tb_top_cpu__DOT__sw__525__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__rs2 = __Vfunc_tb_top_cpu__DOT__sw__525__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__imm = __Vfunc_tb_top_cpu__DOT__sw__525__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__526__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__526__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__526__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__526__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__526__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__526__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__526__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__525__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__526__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__524__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__525__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__524__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__524__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__524__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__524__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__524__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__524__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__524__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    __Vfunc_tb_top_cpu__DOT__jal__528__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__528__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__529__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__529__rd = __Vfunc_tb_top_cpu__DOT__jal__528__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__529__imm = __Vfunc_tb_top_cpu__DOT__jal__528__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__529__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__529__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__529__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__529__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__529__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__529__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__529__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__528__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__529__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__527__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__528__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__527__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__527__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__527__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__527__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__527__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__527__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__527__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__475__pc);
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__531__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__531__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__531__addr = 0x10cU;
    __Vtask_tb_top_cpu__DOT__wait_for_word__531__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__472__name, 
                                            std::string{" final marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__531__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__532__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__531__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__532__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__532__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__532__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__532__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__532__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__532__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__531__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__531__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__531__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__531__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__531__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__533__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__531__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__533__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__533__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__533__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__533__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__533__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__531__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__531__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__531__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__533__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel6;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__532__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__531__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__532__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__532__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__532__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__532__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__532__addr)])));
        }
        __Vlabel6: ;
    }
    __Vtask_tb_top_cpu__DOT__check32__534__expected = 0x55U;
    __Vfunc_tb_top_cpu__DOT__load_word__535__addr = 0x100U;
    __Vfunc_tb_top_cpu__DOT__load_word__535__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__535__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__535__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__535__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__535__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__534__actual = __Vfunc_tb_top_cpu__DOT__load_word__535__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__534__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__472__name, 
                                                                                std::string{" handler marker mem[0]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__534__actual 
         != __Vtask_tb_top_cpu__DOT__check32__534__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__534__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__534__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__534__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__534__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__536__expected 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__472__expected_mcause;
    __Vfunc_tb_top_cpu__DOT__load_word__537__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__537__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__537__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__537__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__537__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__537__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__536__actual = __Vfunc_tb_top_cpu__DOT__load_word__537__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__536__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__472__name, 
                                                                                std::string{" mcause mem[4]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__536__actual 
         != __Vtask_tb_top_cpu__DOT__check32__536__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__536__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__536__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__536__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__536__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    if (__Vtask_tb_top_cpu__DOT__run_exception_test__472__check_mtval) {
        __Vtask_tb_top_cpu__DOT__check32__538__expected 
            = __Vtask_tb_top_cpu__DOT__run_exception_test__472__expected_mtval;
        __Vfunc_tb_top_cpu__DOT__load_word__539__addr = 0x108U;
        __Vfunc_tb_top_cpu__DOT__load_word__539__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__539__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__539__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__539__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__539__addr)])));
        __Vtask_tb_top_cpu__DOT__check32__538__actual 
            = __Vfunc_tb_top_cpu__DOT__load_word__539__Vfuncout;
        __Vtask_tb_top_cpu__DOT__check32__538__name 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__472__name, 
                                                std::string{" mtval mem[8]"}));
        if ((__Vtask_tb_top_cpu__DOT__check32__538__actual 
             != __Vtask_tb_top_cpu__DOT__check32__538__expected)) {
            VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                      -1,&(__Vtask_tb_top_cpu__DOT__check32__538__name),
                      32,__Vtask_tb_top_cpu__DOT__check32__538__actual,
                      32,__Vtask_tb_top_cpu__DOT__check32__538__expected);
            vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__fail_count);
        } else {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__538__name));
            vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__pass_count);
        }
    }
    __Vtask_tb_top_cpu__DOT__check32__540__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__541__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__541__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__541__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__541__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__541__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__541__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__540__actual = __Vfunc_tb_top_cpu__DOT__load_word__541__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__540__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__472__name, 
                                                                                std::string{" final marker mem[12]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__540__actual 
         != __Vtask_tb_top_cpu__DOT__check32__540__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__540__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__540__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__540__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__540__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__542__expected = 0U;
    __Vfunc_tb_top_cpu__DOT__load_word__543__addr = 0x110U;
    __Vfunc_tb_top_cpu__DOT__load_word__543__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__543__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__543__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__543__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__543__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__542__actual = __Vfunc_tb_top_cpu__DOT__load_word__543__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__542__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__472__name, 
                                                                                std::string{" skipped path mem[16]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__542__actual 
         != __Vtask_tb_top_cpu__DOT__check32__542__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__542__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__542__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__542__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__542__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__run_exception_test__544__check_mtval = 1U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__544__expected_mtval = 0x400U;
    __Vtask_tb_top_cpu__DOT__run_exception_test__544__expected_mcause = 7U;
    __Vfunc_tb_top_cpu__DOT__sw__545__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__sw__545__rs1 = 0x14U;
    __Vfunc_tb_top_cpu__DOT__sw__545__rs2 = 1U;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__rs1 = __Vfunc_tb_top_cpu__DOT__sw__545__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__rs2 = __Vfunc_tb_top_cpu__DOT__sw__545__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__imm = __Vfunc_tb_top_cpu__DOT__sw__545__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__546__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__546__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__546__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__546__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__546__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__546__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__546__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__545__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__546__Vfuncout;
    __Vtask_tb_top_cpu__DOT__run_exception_test__544__fault_instr 
        = __Vfunc_tb_top_cpu__DOT__sw__545__Vfuncout;
    __Vtask_tb_top_cpu__DOT__run_exception_test__544__name = 
        std::string{"STORE_FAULT"};
    VL_WRITEF("\n============================================================\nEXCEPTION TEST: %@\n============================================================\n",
              -1,&(__Vtask_tb_top_cpu__DOT__run_exception_test__544__name));
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__fault_instr 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__544__fault_instr;
    __Vtask_tb_top_cpu__DOT__clear_memories__548__i = 0U;
    while (VL_GTS_III(32, 0x800U, __Vtask_tb_top_cpu__DOT__clear_memories__548__i)) {
        __Vfunc_tb_top_cpu__DOT__nop__549__Vfuncout = 0x13U;
        vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__clear_memories__548__i)] 
            = __Vfunc_tb_top_cpu__DOT__nop__549__Vfuncout;
        __Vtask_tb_top_cpu__DOT__clear_memories__548__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__548__i);
    }
    __Vtask_tb_top_cpu__DOT__clear_memories__548__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_top_cpu__DOT__clear_memories__548__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU & __Vtask_tb_top_cpu__DOT__clear_memories__548__i)] = 0U;
        __Vtask_tb_top_cpu__DOT__clear_memories__548__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__548__i);
    }
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc = 0x40000U;
    __Vfunc_tb_top_cpu__DOT__addi__551__imm = 0x100U;
    __Vfunc_tb_top_cpu__DOT__addi__551__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__551__rd = 0xaU;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__rd = __Vfunc_tb_top_cpu__DOT__addi__551__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__rs1 = __Vfunc_tb_top_cpu__DOT__addi__551__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__imm = __Vfunc_tb_top_cpu__DOT__addi__551__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__552__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__552__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__552__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__552__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__552__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__552__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__551__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__552__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__550__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__551__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__550__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__550__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__550__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__550__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__550__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__550__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__550__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__lui__554__imm20 = 0x40U;
    __Vfunc_tb_top_cpu__DOT__lui__554__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_u__555__opcode = 0x37U;
    __Vfunc_tb_top_cpu__DOT__enc_u__555__rd = __Vfunc_tb_top_cpu__DOT__lui__554__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__555__imm20 = __Vfunc_tb_top_cpu__DOT__lui__554__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__555__Vfuncout = 
        ((__Vfunc_tb_top_cpu__DOT__enc_u__555__imm20 
          << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_u__555__rd) 
                       << 7U) | (IData)(__Vfunc_tb_top_cpu__DOT__enc_u__555__opcode)));
    __Vfunc_tb_top_cpu__DOT__lui__554__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_u__555__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__553__instr 
        = __Vfunc_tb_top_cpu__DOT__lui__554__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__553__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__553__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__553__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__553__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__553__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__553__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__553__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__addi__557__imm = 0x300U;
    __Vfunc_tb_top_cpu__DOT__addi__557__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__addi__557__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__rd = __Vfunc_tb_top_cpu__DOT__addi__557__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__rs1 = __Vfunc_tb_top_cpu__DOT__addi__557__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__imm = __Vfunc_tb_top_cpu__DOT__addi__557__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__558__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__558__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__558__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__558__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__558__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__558__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__557__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__558__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__556__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__557__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__556__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__556__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__556__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__556__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__556__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__556__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__556__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__560__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__csrrw__560__csr_addr = 0x305U;
    __Vfunc_tb_top_cpu__DOT__csrrw__560__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__560__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__560__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__560__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__560__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__559__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__560__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__559__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__559__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__559__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__559__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__559__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__559__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__559__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__addi__562__imm = 0x7bU;
    __Vfunc_tb_top_cpu__DOT__addi__562__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__562__rd = 1U;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__rd = __Vfunc_tb_top_cpu__DOT__addi__562__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__rs1 = __Vfunc_tb_top_cpu__DOT__addi__562__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__imm = __Vfunc_tb_top_cpu__DOT__addi__562__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__563__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__563__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__563__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__563__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__563__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__563__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__562__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__563__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__561__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__562__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__561__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__561__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__561__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__561__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__561__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__561__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__561__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__addi__565__imm = 0x400U;
    __Vfunc_tb_top_cpu__DOT__addi__565__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__565__rd = 0x14U;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__rd = __Vfunc_tb_top_cpu__DOT__addi__565__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__rs1 = __Vfunc_tb_top_cpu__DOT__addi__565__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__imm = __Vfunc_tb_top_cpu__DOT__addi__565__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__566__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__566__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__566__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__566__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__566__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__566__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__565__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__566__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__564__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__565__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__564__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__564__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__564__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__564__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__564__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__564__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__564__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vtask_tb_top_cpu__DOT__put_instr__567__instr 
        = __Vtask_tb_top_cpu__DOT__load_exception_program__547__fault_instr;
    __Vtask_tb_top_cpu__DOT__put_instr__567__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__567__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__567__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__567__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__567__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__567__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__567__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__addi__569__imm = 0x63U;
    __Vfunc_tb_top_cpu__DOT__addi__569__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__569__rd = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__rd = __Vfunc_tb_top_cpu__DOT__addi__569__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__rs1 = __Vfunc_tb_top_cpu__DOT__addi__569__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__imm = __Vfunc_tb_top_cpu__DOT__addi__569__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__570__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__570__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__570__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__570__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__570__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__570__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__569__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__570__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__568__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__569__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__568__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__568__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__568__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__568__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__568__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__568__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__568__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__sw__572__imm = 0x10U;
    __Vfunc_tb_top_cpu__DOT__sw__572__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__572__rs2 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__rs1 = __Vfunc_tb_top_cpu__DOT__sw__572__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__rs2 = __Vfunc_tb_top_cpu__DOT__sw__572__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__imm = __Vfunc_tb_top_cpu__DOT__sw__572__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__573__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__573__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__573__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__573__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__573__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__573__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__573__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__572__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__573__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__571__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__572__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__571__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__571__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__571__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__571__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__571__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__571__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__571__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__jal__575__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__575__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__576__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__576__rd = __Vfunc_tb_top_cpu__DOT__jal__575__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__576__imm = __Vfunc_tb_top_cpu__DOT__jal__575__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__576__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__576__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__576__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__576__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__576__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__576__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__576__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__575__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__576__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__574__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__575__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__574__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__574__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__574__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__574__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__574__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__574__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__574__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc = 0x40300U;
    __Vfunc_tb_top_cpu__DOT__addi__578__imm = 0x55U;
    __Vfunc_tb_top_cpu__DOT__addi__578__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__578__rd = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__rd = __Vfunc_tb_top_cpu__DOT__addi__578__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__rs1 = __Vfunc_tb_top_cpu__DOT__addi__578__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__imm = __Vfunc_tb_top_cpu__DOT__addi__578__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__579__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__579__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__579__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__579__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__579__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__579__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__578__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__579__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__577__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__578__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__577__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__577__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__577__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__577__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__577__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__577__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__577__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__sw__581__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__sw__581__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__581__rs2 = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__rs1 = __Vfunc_tb_top_cpu__DOT__sw__581__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__rs2 = __Vfunc_tb_top_cpu__DOT__sw__581__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__imm = __Vfunc_tb_top_cpu__DOT__sw__581__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__582__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__582__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__582__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__582__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__582__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__582__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__582__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__581__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__582__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__580__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__581__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__580__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__580__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__580__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__580__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__580__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__580__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__580__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__584__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__584__csr_addr = 0x342U;
    __Vfunc_tb_top_cpu__DOT__csrrs__584__rd = 4U;
    __Vfunc_tb_top_cpu__DOT__csrrs__584__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__584__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__584__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__584__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__583__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__584__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__583__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__583__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__583__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__583__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__583__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__583__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__583__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__sw__586__imm = 4U;
    __Vfunc_tb_top_cpu__DOT__sw__586__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__586__rs2 = 4U;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__rs1 = __Vfunc_tb_top_cpu__DOT__sw__586__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__rs2 = __Vfunc_tb_top_cpu__DOT__sw__586__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__imm = __Vfunc_tb_top_cpu__DOT__sw__586__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__587__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__587__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__587__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__587__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__587__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__587__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__587__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__586__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__587__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__585__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__586__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__585__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__585__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__585__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__585__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__585__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__585__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__585__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__589__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__589__csr_addr = 0x343U;
    __Vfunc_tb_top_cpu__DOT__csrrs__589__rd = 5U;
    __Vfunc_tb_top_cpu__DOT__csrrs__589__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__589__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__589__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__589__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__588__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__589__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__588__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__588__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__588__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__588__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__588__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__588__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__588__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__sw__591__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__sw__591__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__591__rs2 = 5U;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__rs1 = __Vfunc_tb_top_cpu__DOT__sw__591__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__rs2 = __Vfunc_tb_top_cpu__DOT__sw__591__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__imm = __Vfunc_tb_top_cpu__DOT__sw__591__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__592__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__592__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__592__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__592__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__592__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__592__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__592__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__591__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__592__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__590__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__591__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__590__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__590__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__590__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__590__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__590__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__590__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__590__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__addi__594__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__594__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__594__rd = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__rd = __Vfunc_tb_top_cpu__DOT__addi__594__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__rs1 = __Vfunc_tb_top_cpu__DOT__addi__594__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__imm = __Vfunc_tb_top_cpu__DOT__addi__594__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__595__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__595__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__595__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__595__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__595__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__595__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__594__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__595__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__593__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__594__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__593__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__593__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__593__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__593__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__593__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__593__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__593__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__sw__597__imm = 0xcU;
    __Vfunc_tb_top_cpu__DOT__sw__597__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__597__rs2 = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__rs1 = __Vfunc_tb_top_cpu__DOT__sw__597__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__rs2 = __Vfunc_tb_top_cpu__DOT__sw__597__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__imm = __Vfunc_tb_top_cpu__DOT__sw__597__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__598__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__598__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__598__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__598__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__598__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__598__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__598__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__597__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__598__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__596__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__597__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__596__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__596__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__596__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__596__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__596__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__596__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__596__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    __Vfunc_tb_top_cpu__DOT__jal__600__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__600__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__601__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__601__rd = __Vfunc_tb_top_cpu__DOT__jal__600__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__601__imm = __Vfunc_tb_top_cpu__DOT__jal__600__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__601__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__601__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__601__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__601__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__601__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__601__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__601__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__600__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__601__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__599__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__600__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__599__addr = __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__599__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__599__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__599__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__599__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__599__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__599__instr;
    __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_exception_program__547__pc);
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__603__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__603__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__603__addr = 0x10cU;
    __Vtask_tb_top_cpu__DOT__wait_for_word__603__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__544__name, 
                                            std::string{" final marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__603__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__604__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__603__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__604__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__604__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__604__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__604__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__604__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__604__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__603__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__603__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__603__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__603__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__603__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__605__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__603__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__605__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__605__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__605__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__605__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__605__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__603__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__603__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__603__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__605__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel7;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__604__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__603__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__604__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__604__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__604__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__604__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__604__addr)])));
        }
        __Vlabel7: ;
    }
    __Vtask_tb_top_cpu__DOT__check32__606__expected = 0x55U;
    __Vfunc_tb_top_cpu__DOT__load_word__607__addr = 0x100U;
    __Vfunc_tb_top_cpu__DOT__load_word__607__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__607__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__607__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__607__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__607__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__606__actual = __Vfunc_tb_top_cpu__DOT__load_word__607__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__606__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__544__name, 
                                                                                std::string{" handler marker mem[0]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__606__actual 
         != __Vtask_tb_top_cpu__DOT__check32__606__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__606__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__606__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__606__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__606__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__608__expected 
        = __Vtask_tb_top_cpu__DOT__run_exception_test__544__expected_mcause;
    __Vfunc_tb_top_cpu__DOT__load_word__609__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__609__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__609__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__609__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__609__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__609__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__608__actual = __Vfunc_tb_top_cpu__DOT__load_word__609__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__608__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__544__name, 
                                                                                std::string{" mcause mem[4]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__608__actual 
         != __Vtask_tb_top_cpu__DOT__check32__608__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__608__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__608__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__608__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__608__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    if (__Vtask_tb_top_cpu__DOT__run_exception_test__544__check_mtval) {
        __Vtask_tb_top_cpu__DOT__check32__610__expected 
            = __Vtask_tb_top_cpu__DOT__run_exception_test__544__expected_mtval;
        __Vfunc_tb_top_cpu__DOT__load_word__611__addr = 0x108U;
        __Vfunc_tb_top_cpu__DOT__load_word__611__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__611__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__611__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__611__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__611__addr)])));
        __Vtask_tb_top_cpu__DOT__check32__610__actual 
            = __Vfunc_tb_top_cpu__DOT__load_word__611__Vfuncout;
        __Vtask_tb_top_cpu__DOT__check32__610__name 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__544__name, 
                                                std::string{" mtval mem[8]"}));
        if ((__Vtask_tb_top_cpu__DOT__check32__610__actual 
             != __Vtask_tb_top_cpu__DOT__check32__610__expected)) {
            VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                      -1,&(__Vtask_tb_top_cpu__DOT__check32__610__name),
                      32,__Vtask_tb_top_cpu__DOT__check32__610__actual,
                      32,__Vtask_tb_top_cpu__DOT__check32__610__expected);
            vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__fail_count);
        } else {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__610__name));
            vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_top_cpu__DOT__pass_count);
        }
    }
    __Vtask_tb_top_cpu__DOT__check32__612__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__613__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__613__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__613__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__613__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__613__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__613__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__612__actual = __Vfunc_tb_top_cpu__DOT__load_word__613__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__612__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__544__name, 
                                                                                std::string{" final marker mem[12]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__612__actual 
         != __Vtask_tb_top_cpu__DOT__check32__612__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__612__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__612__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__612__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__612__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__614__expected = 0U;
    __Vfunc_tb_top_cpu__DOT__load_word__615__addr = 0x110U;
    __Vfunc_tb_top_cpu__DOT__load_word__615__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__615__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__615__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__615__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__615__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__614__actual = __Vfunc_tb_top_cpu__DOT__load_word__615__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__614__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_exception_test__544__name, 
                                                                                std::string{" skipped path mem[16]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__614__actual 
         != __Vtask_tb_top_cpu__DOT__check32__614__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__614__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__614__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__614__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__614__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    VL_WRITEF("\n============================================================\nEXCEPTION TEST: FETCH_FAULT\n============================================================\n");
    __Vtask_tb_top_cpu__DOT__clear_memories__618__i = 0U;
    while (VL_GTS_III(32, 0x800U, __Vtask_tb_top_cpu__DOT__clear_memories__618__i)) {
        __Vfunc_tb_top_cpu__DOT__nop__619__Vfuncout = 0x13U;
        vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__clear_memories__618__i)] 
            = __Vfunc_tb_top_cpu__DOT__nop__619__Vfuncout;
        __Vtask_tb_top_cpu__DOT__clear_memories__618__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__618__i);
    }
    __Vtask_tb_top_cpu__DOT__clear_memories__618__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_top_cpu__DOT__clear_memories__618__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU & __Vtask_tb_top_cpu__DOT__clear_memories__618__i)] = 0U;
        __Vtask_tb_top_cpu__DOT__clear_memories__618__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__618__i);
    }
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc = 0x40000U;
    __Vfunc_tb_top_cpu__DOT__addi__621__imm = 0x100U;
    __Vfunc_tb_top_cpu__DOT__addi__621__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__621__rd = 0xaU;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__rd = __Vfunc_tb_top_cpu__DOT__addi__621__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__rs1 = __Vfunc_tb_top_cpu__DOT__addi__621__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__imm = __Vfunc_tb_top_cpu__DOT__addi__621__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__622__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__622__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__622__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__622__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__622__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__622__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__621__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__622__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__620__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__621__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__620__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__620__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__620__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__620__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__620__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__620__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__620__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vfunc_tb_top_cpu__DOT__lui__624__imm20 = 0x40U;
    __Vfunc_tb_top_cpu__DOT__lui__624__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_u__625__opcode = 0x37U;
    __Vfunc_tb_top_cpu__DOT__enc_u__625__rd = __Vfunc_tb_top_cpu__DOT__lui__624__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__625__imm20 = __Vfunc_tb_top_cpu__DOT__lui__624__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__625__Vfuncout = 
        ((__Vfunc_tb_top_cpu__DOT__enc_u__625__imm20 
          << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_u__625__rd) 
                       << 7U) | (IData)(__Vfunc_tb_top_cpu__DOT__enc_u__625__opcode)));
    __Vfunc_tb_top_cpu__DOT__lui__624__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_u__625__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__623__instr 
        = __Vfunc_tb_top_cpu__DOT__lui__624__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__623__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__623__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__623__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__623__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__623__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__623__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__623__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vfunc_tb_top_cpu__DOT__addi__627__imm = 0x300U;
    __Vfunc_tb_top_cpu__DOT__addi__627__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__addi__627__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__rd = __Vfunc_tb_top_cpu__DOT__addi__627__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__rs1 = __Vfunc_tb_top_cpu__DOT__addi__627__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__imm = __Vfunc_tb_top_cpu__DOT__addi__627__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__628__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__628__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__628__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__628__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__628__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__628__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__627__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__628__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__626__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__627__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__626__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__626__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__626__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__626__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__626__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__626__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__626__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__630__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__csrrw__630__csr_addr = 0x305U;
    __Vfunc_tb_top_cpu__DOT__csrrw__630__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__630__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__630__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__630__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__630__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__629__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__630__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__629__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__629__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__629__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__629__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__629__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__629__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__629__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__fetch_fault_delta 
        = ((IData)(0x40600U) - __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__fetch_fault_offset 
        = (0x1fffffU & __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__fetch_fault_delta);
    __Vfunc_tb_top_cpu__DOT__jal__632__imm = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__fetch_fault_offset;
    __Vfunc_tb_top_cpu__DOT__jal__632__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__633__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__633__rd = __Vfunc_tb_top_cpu__DOT__jal__632__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__633__imm = __Vfunc_tb_top_cpu__DOT__jal__632__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__633__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__633__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__633__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__633__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__633__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__633__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__633__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__632__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__633__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__631__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__632__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__631__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__631__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__631__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__631__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__631__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__631__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__631__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vfunc_tb_top_cpu__DOT__jal__635__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__635__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__636__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__636__rd = __Vfunc_tb_top_cpu__DOT__jal__635__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__636__imm = __Vfunc_tb_top_cpu__DOT__jal__635__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__636__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__636__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__636__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__636__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__636__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__636__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__636__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__635__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__636__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__634__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__635__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__634__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__634__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__634__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__634__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__634__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__634__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__634__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc = 0x40300U;
    __Vfunc_tb_top_cpu__DOT__addi__638__imm = 0x55U;
    __Vfunc_tb_top_cpu__DOT__addi__638__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__638__rd = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__rd = __Vfunc_tb_top_cpu__DOT__addi__638__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__rs1 = __Vfunc_tb_top_cpu__DOT__addi__638__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__imm = __Vfunc_tb_top_cpu__DOT__addi__638__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__639__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__639__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__639__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__639__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__639__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__639__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__638__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__639__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__637__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__638__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__637__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__637__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__637__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__637__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__637__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__637__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__637__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vfunc_tb_top_cpu__DOT__sw__641__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__sw__641__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__641__rs2 = 3U;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__rs1 = __Vfunc_tb_top_cpu__DOT__sw__641__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__rs2 = __Vfunc_tb_top_cpu__DOT__sw__641__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__imm = __Vfunc_tb_top_cpu__DOT__sw__641__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__642__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__642__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__642__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__642__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__642__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__642__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__642__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__641__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__642__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__640__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__641__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__640__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__640__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__640__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__640__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__640__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__640__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__640__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__644__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__644__csr_addr = 0x342U;
    __Vfunc_tb_top_cpu__DOT__csrrs__644__rd = 4U;
    __Vfunc_tb_top_cpu__DOT__csrrs__644__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__644__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__644__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__644__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__643__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__644__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__643__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__643__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__643__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__643__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__643__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__643__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__643__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vfunc_tb_top_cpu__DOT__sw__646__imm = 4U;
    __Vfunc_tb_top_cpu__DOT__sw__646__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__646__rs2 = 4U;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__rs1 = __Vfunc_tb_top_cpu__DOT__sw__646__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__rs2 = __Vfunc_tb_top_cpu__DOT__sw__646__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__imm = __Vfunc_tb_top_cpu__DOT__sw__646__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__647__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__647__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__647__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__647__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__647__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__647__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__647__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__646__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__647__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__645__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__646__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__645__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__645__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__645__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__645__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__645__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__645__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__645__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vfunc_tb_top_cpu__DOT__addi__649__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__649__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__649__rd = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__rd = __Vfunc_tb_top_cpu__DOT__addi__649__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__rs1 = __Vfunc_tb_top_cpu__DOT__addi__649__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__imm = __Vfunc_tb_top_cpu__DOT__addi__649__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__650__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__650__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__650__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__650__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__650__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__650__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__649__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__650__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__648__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__649__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__648__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__648__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__648__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__648__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__648__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__648__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__648__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vfunc_tb_top_cpu__DOT__sw__652__imm = 0xcU;
    __Vfunc_tb_top_cpu__DOT__sw__652__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__652__rs2 = 6U;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__rs1 = __Vfunc_tb_top_cpu__DOT__sw__652__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__rs2 = __Vfunc_tb_top_cpu__DOT__sw__652__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__imm = __Vfunc_tb_top_cpu__DOT__sw__652__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__653__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__653__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__653__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__653__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__653__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__653__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__653__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__652__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__653__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__651__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__652__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__651__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__651__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__651__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__651__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__651__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__651__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__651__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    __Vfunc_tb_top_cpu__DOT__jal__655__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__655__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__656__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__656__rd = __Vfunc_tb_top_cpu__DOT__jal__655__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__656__imm = __Vfunc_tb_top_cpu__DOT__jal__655__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__656__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__656__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__656__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__656__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__656__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__656__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__656__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__655__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__656__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__654__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__655__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__654__addr = __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__654__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__654__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__654__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__654__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__654__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__654__instr;
    __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_fetch_fault_program__617__pc);
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__658__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__658__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__658__addr = 0x10cU;
    __Vtask_tb_top_cpu__DOT__wait_for_word__658__name = 
        std::string{"FETCH_FAULT final marker"};
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__658__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__659__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__658__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__659__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__659__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__659__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__659__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__659__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__659__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__658__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__658__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__658__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__658__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__658__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__660__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__658__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__660__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__660__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__660__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__660__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__660__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__658__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__658__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__658__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__660__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel8;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__659__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__658__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__659__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__659__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__659__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__659__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__659__addr)])));
        }
        __Vlabel8: ;
    }
    __Vtask_tb_top_cpu__DOT__check32__661__expected = 0x55U;
    __Vfunc_tb_top_cpu__DOT__load_word__662__addr = 0x100U;
    __Vfunc_tb_top_cpu__DOT__load_word__662__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__662__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__662__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__662__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__662__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__661__actual = __Vfunc_tb_top_cpu__DOT__load_word__662__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__661__name = std::string{"FETCH_FAULT handler marker mem[0]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__661__actual 
         != __Vtask_tb_top_cpu__DOT__check32__661__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__661__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__661__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__661__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__661__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__663__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__664__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__664__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__664__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__664__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__664__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__664__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__663__actual = __Vfunc_tb_top_cpu__DOT__load_word__664__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__663__name = std::string{"FETCH_FAULT mcause mem[4]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__663__actual 
         != __Vtask_tb_top_cpu__DOT__check32__663__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__663__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__663__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__663__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__663__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__665__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__666__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__666__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__666__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__666__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__666__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__666__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__665__actual = __Vfunc_tb_top_cpu__DOT__load_word__666__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__665__name = std::string{"FETCH_FAULT final marker mem[12]"};
    if ((__Vtask_tb_top_cpu__DOT__check32__665__actual 
         != __Vtask_tb_top_cpu__DOT__check32__665__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__665__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__665__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__665__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__665__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__expected_mcause = 0x80000007U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__fire_external = 0U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__fire_timer = 1U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__enable_external = 0U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__enable_timer = 1U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__name = 
        std::string{"TIMER_INTERRUPT"};
    VL_WRITEF("\n============================================================\nINTERRUPT TEST: %@\n============================================================\n",
              -1,&(__Vtask_tb_top_cpu__DOT__run_interrupt_test__667__name));
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__enable_external 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__enable_external;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__enable_timer 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__enable_timer;
    __Vtask_tb_top_cpu__DOT__clear_memories__669__i = 0U;
    while (VL_GTS_III(32, 0x800U, __Vtask_tb_top_cpu__DOT__clear_memories__669__i)) {
        __Vfunc_tb_top_cpu__DOT__nop__670__Vfuncout = 0x13U;
        vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__clear_memories__669__i)] 
            = __Vfunc_tb_top_cpu__DOT__nop__670__Vfuncout;
        __Vtask_tb_top_cpu__DOT__clear_memories__669__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__669__i);
    }
    __Vtask_tb_top_cpu__DOT__clear_memories__669__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_top_cpu__DOT__clear_memories__669__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU & __Vtask_tb_top_cpu__DOT__clear_memories__669__i)] = 0U;
        __Vtask_tb_top_cpu__DOT__clear_memories__669__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__669__i);
    }
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__mie_value = 0U;
    if (__Vtask_tb_top_cpu__DOT__load_interrupt_program__668__enable_timer) {
        __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__mie_value 
            = (0x80U | __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__mie_value);
    }
    if (__Vtask_tb_top_cpu__DOT__load_interrupt_program__668__enable_external) {
        __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__mie_value 
            = (0x800U | __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__mie_value);
    }
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc = 0x40000U;
    __Vfunc_tb_top_cpu__DOT__addi__672__imm = 0x100U;
    __Vfunc_tb_top_cpu__DOT__addi__672__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__672__rd = 0xaU;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__rd = __Vfunc_tb_top_cpu__DOT__addi__672__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__rs1 = __Vfunc_tb_top_cpu__DOT__addi__672__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__imm = __Vfunc_tb_top_cpu__DOT__addi__672__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__673__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__673__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__673__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__673__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__673__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__673__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__672__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__673__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__671__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__672__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__671__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__671__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__671__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__671__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__671__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__671__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__671__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__lui__675__imm20 = 0x40U;
    __Vfunc_tb_top_cpu__DOT__lui__675__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_u__676__opcode = 0x37U;
    __Vfunc_tb_top_cpu__DOT__enc_u__676__rd = __Vfunc_tb_top_cpu__DOT__lui__675__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__676__imm20 = __Vfunc_tb_top_cpu__DOT__lui__675__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__676__Vfuncout = 
        ((__Vfunc_tb_top_cpu__DOT__enc_u__676__imm20 
          << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_u__676__rd) 
                       << 7U) | (IData)(__Vfunc_tb_top_cpu__DOT__enc_u__676__opcode)));
    __Vfunc_tb_top_cpu__DOT__lui__675__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_u__676__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__674__instr 
        = __Vfunc_tb_top_cpu__DOT__lui__675__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__674__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__674__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__674__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__674__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__674__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__674__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__674__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__addi__678__imm = 0x300U;
    __Vfunc_tb_top_cpu__DOT__addi__678__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__addi__678__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__rd = __Vfunc_tb_top_cpu__DOT__addi__678__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__rs1 = __Vfunc_tb_top_cpu__DOT__addi__678__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__imm = __Vfunc_tb_top_cpu__DOT__addi__678__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__679__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__679__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__679__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__679__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__679__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__679__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__678__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__679__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__677__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__678__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__677__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__677__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__677__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__677__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__677__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__677__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__677__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__681__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__csrrw__681__csr_addr = 0x305U;
    __Vfunc_tb_top_cpu__DOT__csrrw__681__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__681__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__681__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__681__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__681__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__680__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__681__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__680__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__680__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__680__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__680__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__680__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__680__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__680__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__addi__683__imm = (0xfffU 
                                               & __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__mie_value);
    __Vfunc_tb_top_cpu__DOT__addi__683__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__683__rd = 0xcU;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__rd = __Vfunc_tb_top_cpu__DOT__addi__683__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__rs1 = __Vfunc_tb_top_cpu__DOT__addi__683__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__imm = __Vfunc_tb_top_cpu__DOT__addi__683__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__684__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__684__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__684__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__684__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__684__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__684__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__683__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__684__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__682__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__683__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__682__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__682__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__682__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__682__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__682__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__682__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__682__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__686__rs1 = 0xcU;
    __Vfunc_tb_top_cpu__DOT__csrrw__686__csr_addr = 0x304U;
    __Vfunc_tb_top_cpu__DOT__csrrw__686__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__686__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__686__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__686__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__686__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__685__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__686__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__685__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__685__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__685__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__685__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__685__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__685__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__685__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__addi__688__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__addi__688__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__688__rd = 0xdU;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__rd = __Vfunc_tb_top_cpu__DOT__addi__688__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__rs1 = __Vfunc_tb_top_cpu__DOT__addi__688__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__imm = __Vfunc_tb_top_cpu__DOT__addi__688__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__689__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__689__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__689__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__689__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__689__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__689__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__688__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__689__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__687__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__688__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__687__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__687__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__687__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__687__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__687__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__687__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__687__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__691__rs1 = 0xdU;
    __Vfunc_tb_top_cpu__DOT__csrrw__691__csr_addr = 0x300U;
    __Vfunc_tb_top_cpu__DOT__csrrw__691__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__691__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__691__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__691__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__691__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__690__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__691__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__690__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__690__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__690__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__690__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__690__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__690__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__690__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__addi__693__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__693__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__693__rd = 0xeU;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__rd = __Vfunc_tb_top_cpu__DOT__addi__693__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__rs1 = __Vfunc_tb_top_cpu__DOT__addi__693__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__imm = __Vfunc_tb_top_cpu__DOT__addi__693__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__694__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__694__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__694__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__694__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__694__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__694__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__693__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__694__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__692__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__693__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__692__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__692__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__692__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__692__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__692__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__692__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__692__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__sw__696__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__sw__696__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__696__rs2 = 0xeU;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__rs1 = __Vfunc_tb_top_cpu__DOT__sw__696__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__rs2 = __Vfunc_tb_top_cpu__DOT__sw__696__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__imm = __Vfunc_tb_top_cpu__DOT__sw__696__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__697__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__697__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__697__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__697__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__697__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__697__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__697__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__696__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__697__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__695__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__696__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__695__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__695__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__695__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__695__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__695__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__695__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__695__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__jal__699__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__699__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__700__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__700__rd = __Vfunc_tb_top_cpu__DOT__jal__699__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__700__imm = __Vfunc_tb_top_cpu__DOT__jal__699__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__700__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__700__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__700__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__700__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__700__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__700__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__700__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__699__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__700__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__698__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__699__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__698__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__698__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__698__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__698__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__698__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__698__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__698__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc = 0x40300U;
    __Vfunc_tb_top_cpu__DOT__addi__702__imm = 0x66U;
    __Vfunc_tb_top_cpu__DOT__addi__702__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__702__rd = 0xfU;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__rd = __Vfunc_tb_top_cpu__DOT__addi__702__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__rs1 = __Vfunc_tb_top_cpu__DOT__addi__702__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__imm = __Vfunc_tb_top_cpu__DOT__addi__702__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__703__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__703__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__703__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__703__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__703__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__703__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__702__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__703__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__701__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__702__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__701__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__701__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__701__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__701__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__701__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__701__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__701__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__sw__705__imm = 4U;
    __Vfunc_tb_top_cpu__DOT__sw__705__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__705__rs2 = 0xfU;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__rs1 = __Vfunc_tb_top_cpu__DOT__sw__705__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__rs2 = __Vfunc_tb_top_cpu__DOT__sw__705__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__imm = __Vfunc_tb_top_cpu__DOT__sw__705__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__706__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__706__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__706__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__706__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__706__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__706__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__706__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__705__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__706__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__704__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__705__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__704__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__704__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__704__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__704__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__704__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__704__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__704__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__708__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__708__csr_addr = 0x342U;
    __Vfunc_tb_top_cpu__DOT__csrrs__708__rd = 0x10U;
    __Vfunc_tb_top_cpu__DOT__csrrs__708__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__708__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__708__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__708__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__707__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__708__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__707__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__707__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__707__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__707__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__707__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__707__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__707__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__sw__710__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__sw__710__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__710__rs2 = 0x10U;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__rs1 = __Vfunc_tb_top_cpu__DOT__sw__710__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__rs2 = __Vfunc_tb_top_cpu__DOT__sw__710__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__imm = __Vfunc_tb_top_cpu__DOT__sw__710__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__711__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__711__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__711__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__711__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__711__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__711__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__711__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__710__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__711__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__709__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__710__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__709__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__709__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__709__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__709__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__709__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__709__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__709__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__addi__713__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__713__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__713__rd = 0x11U;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__rd = __Vfunc_tb_top_cpu__DOT__addi__713__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__rs1 = __Vfunc_tb_top_cpu__DOT__addi__713__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__imm = __Vfunc_tb_top_cpu__DOT__addi__713__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__714__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__714__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__714__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__714__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__714__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__714__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__713__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__714__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__712__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__713__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__712__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__712__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__712__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__712__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__712__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__712__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__712__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__sw__716__imm = 0xcU;
    __Vfunc_tb_top_cpu__DOT__sw__716__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__716__rs2 = 0x11U;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__rs1 = __Vfunc_tb_top_cpu__DOT__sw__716__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__rs2 = __Vfunc_tb_top_cpu__DOT__sw__716__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__imm = __Vfunc_tb_top_cpu__DOT__sw__716__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__717__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__717__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__717__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__717__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__717__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__717__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__717__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__716__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__717__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__715__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__716__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__715__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__715__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__715__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__715__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__715__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__715__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__715__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    __Vfunc_tb_top_cpu__DOT__jal__719__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__719__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__720__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__720__rd = __Vfunc_tb_top_cpu__DOT__jal__719__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__720__imm = __Vfunc_tb_top_cpu__DOT__jal__719__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__720__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__720__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__720__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__720__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__720__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__720__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__720__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__719__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__720__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__718__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__719__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__718__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__718__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__718__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__718__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__718__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__718__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__718__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__668__pc);
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__722__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__722__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__722__addr = 0x100U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__722__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__667__name, 
                                            std::string{" ready marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__722__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__723__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__722__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__723__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__723__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__723__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__723__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__723__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__723__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__722__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__722__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__722__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__722__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__722__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__724__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__722__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__724__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__724__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__724__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__724__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__724__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__722__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__722__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__722__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__724__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel9;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__723__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__722__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__723__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__723__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__723__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__723__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__723__addr)])));
        }
        __Vlabel9: ;
    }
    co_await vlSelf->__VtrigSched_h569e511a__0.trigger(
                                                       "@(negedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       727);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__fire_timer;
    vlSelf->tb_top_cpu__DOT__external_interrupt_in 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__fire_external;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e511a__0.trigger(
                                                       "@(negedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       733);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__725__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__725__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__725__addr = 0x10cU;
    __Vtask_tb_top_cpu__DOT__wait_for_word__725__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__667__name, 
                                            std::string{" final marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__725__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__726__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__725__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__726__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__726__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__726__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__726__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__726__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__726__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__725__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__725__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__725__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__725__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__725__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__727__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__725__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__727__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__727__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__727__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__727__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__727__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__725__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__725__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__725__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__727__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel10;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__726__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__725__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__726__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__726__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__726__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__726__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__726__addr)])));
        }
        __Vlabel10: ;
    }
    __Vtask_tb_top_cpu__DOT__check32__728__expected = 0x66U;
    __Vfunc_tb_top_cpu__DOT__load_word__729__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__729__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__729__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__729__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__729__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__729__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__728__actual = __Vfunc_tb_top_cpu__DOT__load_word__729__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__728__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__667__name, 
                                                                                std::string{" irq marker mem[4]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__728__actual 
         != __Vtask_tb_top_cpu__DOT__check32__728__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__728__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__728__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__728__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__728__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__730__expected 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__667__expected_mcause;
    __Vfunc_tb_top_cpu__DOT__load_word__731__addr = 0x108U;
    __Vfunc_tb_top_cpu__DOT__load_word__731__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__731__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__731__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__731__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__731__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__730__actual = __Vfunc_tb_top_cpu__DOT__load_word__731__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__730__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__667__name, 
                                                                                std::string{" mcause mem[8]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__730__actual 
         != __Vtask_tb_top_cpu__DOT__check32__730__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__730__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__730__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__730__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__730__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__732__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__733__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__733__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__733__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__733__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__733__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__733__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__732__actual = __Vfunc_tb_top_cpu__DOT__load_word__733__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__732__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__667__name, 
                                                                                std::string{" final mem[12]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__732__actual 
         != __Vtask_tb_top_cpu__DOT__check32__732__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__732__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__732__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__732__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__732__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__expected_mcause = 0x8000000bU;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__fire_external = 1U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__fire_timer = 0U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__enable_external = 1U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__enable_timer = 0U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__name = 
        std::string{"EXTERNAL_INTERRUPT"};
    VL_WRITEF("\n============================================================\nINTERRUPT TEST: %@\n============================================================\n",
              -1,&(__Vtask_tb_top_cpu__DOT__run_interrupt_test__734__name));
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__enable_external 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__enable_external;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__enable_timer 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__enable_timer;
    __Vtask_tb_top_cpu__DOT__clear_memories__736__i = 0U;
    while (VL_GTS_III(32, 0x800U, __Vtask_tb_top_cpu__DOT__clear_memories__736__i)) {
        __Vfunc_tb_top_cpu__DOT__nop__737__Vfuncout = 0x13U;
        vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__clear_memories__736__i)] 
            = __Vfunc_tb_top_cpu__DOT__nop__737__Vfuncout;
        __Vtask_tb_top_cpu__DOT__clear_memories__736__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__736__i);
    }
    __Vtask_tb_top_cpu__DOT__clear_memories__736__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_top_cpu__DOT__clear_memories__736__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU & __Vtask_tb_top_cpu__DOT__clear_memories__736__i)] = 0U;
        __Vtask_tb_top_cpu__DOT__clear_memories__736__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__736__i);
    }
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__mie_value = 0U;
    if (__Vtask_tb_top_cpu__DOT__load_interrupt_program__735__enable_timer) {
        __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__mie_value 
            = (0x80U | __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__mie_value);
    }
    if (__Vtask_tb_top_cpu__DOT__load_interrupt_program__735__enable_external) {
        __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__mie_value 
            = (0x800U | __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__mie_value);
    }
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc = 0x40000U;
    __Vfunc_tb_top_cpu__DOT__addi__739__imm = 0x100U;
    __Vfunc_tb_top_cpu__DOT__addi__739__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__739__rd = 0xaU;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__rd = __Vfunc_tb_top_cpu__DOT__addi__739__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__rs1 = __Vfunc_tb_top_cpu__DOT__addi__739__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__imm = __Vfunc_tb_top_cpu__DOT__addi__739__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__740__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__740__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__740__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__740__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__740__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__740__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__739__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__740__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__738__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__739__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__738__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__738__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__738__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__738__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__738__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__738__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__738__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__lui__742__imm20 = 0x40U;
    __Vfunc_tb_top_cpu__DOT__lui__742__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_u__743__opcode = 0x37U;
    __Vfunc_tb_top_cpu__DOT__enc_u__743__rd = __Vfunc_tb_top_cpu__DOT__lui__742__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__743__imm20 = __Vfunc_tb_top_cpu__DOT__lui__742__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__743__Vfuncout = 
        ((__Vfunc_tb_top_cpu__DOT__enc_u__743__imm20 
          << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_u__743__rd) 
                       << 7U) | (IData)(__Vfunc_tb_top_cpu__DOT__enc_u__743__opcode)));
    __Vfunc_tb_top_cpu__DOT__lui__742__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_u__743__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__741__instr 
        = __Vfunc_tb_top_cpu__DOT__lui__742__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__741__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__741__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__741__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__741__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__741__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__741__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__741__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__addi__745__imm = 0x300U;
    __Vfunc_tb_top_cpu__DOT__addi__745__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__addi__745__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__rd = __Vfunc_tb_top_cpu__DOT__addi__745__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__rs1 = __Vfunc_tb_top_cpu__DOT__addi__745__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__imm = __Vfunc_tb_top_cpu__DOT__addi__745__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__746__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__746__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__746__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__746__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__746__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__746__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__745__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__746__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__744__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__745__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__744__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__744__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__744__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__744__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__744__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__744__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__744__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__748__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__csrrw__748__csr_addr = 0x305U;
    __Vfunc_tb_top_cpu__DOT__csrrw__748__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__748__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__748__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__748__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__748__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__747__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__748__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__747__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__747__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__747__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__747__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__747__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__747__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__747__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__addi__750__imm = (0xfffU 
                                               & __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__mie_value);
    __Vfunc_tb_top_cpu__DOT__addi__750__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__750__rd = 0xcU;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__rd = __Vfunc_tb_top_cpu__DOT__addi__750__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__rs1 = __Vfunc_tb_top_cpu__DOT__addi__750__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__imm = __Vfunc_tb_top_cpu__DOT__addi__750__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__751__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__751__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__751__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__751__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__751__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__751__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__750__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__751__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__749__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__750__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__749__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__749__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__749__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__749__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__749__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__749__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__749__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__753__rs1 = 0xcU;
    __Vfunc_tb_top_cpu__DOT__csrrw__753__csr_addr = 0x304U;
    __Vfunc_tb_top_cpu__DOT__csrrw__753__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__753__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__753__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__753__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__753__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__752__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__753__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__752__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__752__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__752__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__752__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__752__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__752__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__752__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__addi__755__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__addi__755__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__755__rd = 0xdU;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__rd = __Vfunc_tb_top_cpu__DOT__addi__755__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__rs1 = __Vfunc_tb_top_cpu__DOT__addi__755__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__imm = __Vfunc_tb_top_cpu__DOT__addi__755__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__756__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__756__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__756__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__756__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__756__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__756__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__755__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__756__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__754__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__755__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__754__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__754__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__754__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__754__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__754__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__754__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__754__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__758__rs1 = 0xdU;
    __Vfunc_tb_top_cpu__DOT__csrrw__758__csr_addr = 0x300U;
    __Vfunc_tb_top_cpu__DOT__csrrw__758__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__758__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__758__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__758__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__758__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__757__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__758__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__757__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__757__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__757__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__757__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__757__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__757__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__757__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__addi__760__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__760__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__760__rd = 0xeU;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__rd = __Vfunc_tb_top_cpu__DOT__addi__760__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__rs1 = __Vfunc_tb_top_cpu__DOT__addi__760__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__imm = __Vfunc_tb_top_cpu__DOT__addi__760__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__761__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__761__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__761__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__761__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__761__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__761__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__760__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__761__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__759__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__760__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__759__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__759__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__759__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__759__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__759__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__759__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__759__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__sw__763__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__sw__763__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__763__rs2 = 0xeU;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__rs1 = __Vfunc_tb_top_cpu__DOT__sw__763__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__rs2 = __Vfunc_tb_top_cpu__DOT__sw__763__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__imm = __Vfunc_tb_top_cpu__DOT__sw__763__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__764__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__764__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__764__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__764__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__764__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__764__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__764__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__763__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__764__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__762__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__763__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__762__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__762__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__762__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__762__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__762__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__762__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__762__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__jal__766__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__766__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__767__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__767__rd = __Vfunc_tb_top_cpu__DOT__jal__766__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__767__imm = __Vfunc_tb_top_cpu__DOT__jal__766__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__767__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__767__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__767__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__767__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__767__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__767__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__767__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__766__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__767__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__765__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__766__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__765__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__765__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__765__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__765__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__765__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__765__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__765__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc = 0x40300U;
    __Vfunc_tb_top_cpu__DOT__addi__769__imm = 0x66U;
    __Vfunc_tb_top_cpu__DOT__addi__769__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__769__rd = 0xfU;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__rd = __Vfunc_tb_top_cpu__DOT__addi__769__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__rs1 = __Vfunc_tb_top_cpu__DOT__addi__769__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__imm = __Vfunc_tb_top_cpu__DOT__addi__769__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__770__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__770__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__770__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__770__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__770__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__770__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__769__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__770__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__768__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__769__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__768__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__768__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__768__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__768__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__768__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__768__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__768__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__sw__772__imm = 4U;
    __Vfunc_tb_top_cpu__DOT__sw__772__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__772__rs2 = 0xfU;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__rs1 = __Vfunc_tb_top_cpu__DOT__sw__772__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__rs2 = __Vfunc_tb_top_cpu__DOT__sw__772__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__imm = __Vfunc_tb_top_cpu__DOT__sw__772__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__773__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__773__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__773__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__773__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__773__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__773__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__773__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__772__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__773__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__771__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__772__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__771__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__771__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__771__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__771__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__771__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__771__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__771__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__775__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__775__csr_addr = 0x342U;
    __Vfunc_tb_top_cpu__DOT__csrrs__775__rd = 0x10U;
    __Vfunc_tb_top_cpu__DOT__csrrs__775__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__775__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__775__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__775__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__774__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__775__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__774__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__774__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__774__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__774__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__774__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__774__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__774__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__sw__777__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__sw__777__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__777__rs2 = 0x10U;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__rs1 = __Vfunc_tb_top_cpu__DOT__sw__777__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__rs2 = __Vfunc_tb_top_cpu__DOT__sw__777__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__imm = __Vfunc_tb_top_cpu__DOT__sw__777__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__778__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__778__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__778__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__778__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__778__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__778__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__778__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__777__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__778__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__776__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__777__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__776__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__776__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__776__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__776__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__776__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__776__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__776__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__addi__780__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__780__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__780__rd = 0x11U;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__rd = __Vfunc_tb_top_cpu__DOT__addi__780__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__rs1 = __Vfunc_tb_top_cpu__DOT__addi__780__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__imm = __Vfunc_tb_top_cpu__DOT__addi__780__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__781__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__781__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__781__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__781__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__781__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__781__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__780__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__781__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__779__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__780__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__779__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__779__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__779__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__779__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__779__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__779__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__779__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__sw__783__imm = 0xcU;
    __Vfunc_tb_top_cpu__DOT__sw__783__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__783__rs2 = 0x11U;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__rs1 = __Vfunc_tb_top_cpu__DOT__sw__783__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__rs2 = __Vfunc_tb_top_cpu__DOT__sw__783__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__imm = __Vfunc_tb_top_cpu__DOT__sw__783__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__784__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__784__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__784__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__784__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__784__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__784__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__784__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__783__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__784__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__782__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__783__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__782__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__782__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__782__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__782__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__782__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__782__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__782__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    __Vfunc_tb_top_cpu__DOT__jal__786__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__786__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__787__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__787__rd = __Vfunc_tb_top_cpu__DOT__jal__786__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__787__imm = __Vfunc_tb_top_cpu__DOT__jal__786__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__787__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__787__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__787__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__787__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__787__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__787__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__787__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__786__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__787__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__785__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__786__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__785__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__785__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__785__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__785__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__785__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__785__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__785__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__735__pc);
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__789__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__789__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__789__addr = 0x100U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__789__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__734__name, 
                                            std::string{" ready marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__789__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__790__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__789__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__790__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__790__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__790__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__790__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__790__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__790__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__789__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__789__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__789__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__789__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__789__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__791__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__789__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__791__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__791__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__791__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__791__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__791__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__789__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__789__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__789__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__791__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel11;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__790__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__789__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__790__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__790__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__790__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__790__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__790__addr)])));
        }
        __Vlabel11: ;
    }
    co_await vlSelf->__VtrigSched_h569e511a__0.trigger(
                                                       "@(negedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       727);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__fire_timer;
    vlSelf->tb_top_cpu__DOT__external_interrupt_in 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__fire_external;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e511a__0.trigger(
                                                       "@(negedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       733);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__792__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__792__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__792__addr = 0x10cU;
    __Vtask_tb_top_cpu__DOT__wait_for_word__792__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__734__name, 
                                            std::string{" final marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__792__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__793__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__792__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__793__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__793__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__793__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__793__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__793__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__793__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__792__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__792__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__792__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__792__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__792__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__794__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__792__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__794__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__794__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__794__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__794__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__794__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__792__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__792__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__792__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__794__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel12;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__793__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__792__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__793__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__793__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__793__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__793__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__793__addr)])));
        }
        __Vlabel12: ;
    }
    __Vtask_tb_top_cpu__DOT__check32__795__expected = 0x66U;
    __Vfunc_tb_top_cpu__DOT__load_word__796__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__796__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__796__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__796__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__796__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__796__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__795__actual = __Vfunc_tb_top_cpu__DOT__load_word__796__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__795__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__734__name, 
                                                                                std::string{" irq marker mem[4]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__795__actual 
         != __Vtask_tb_top_cpu__DOT__check32__795__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__795__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__795__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__795__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__795__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__797__expected 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__734__expected_mcause;
    __Vfunc_tb_top_cpu__DOT__load_word__798__addr = 0x108U;
    __Vfunc_tb_top_cpu__DOT__load_word__798__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__798__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__798__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__798__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__798__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__797__actual = __Vfunc_tb_top_cpu__DOT__load_word__798__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__797__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__734__name, 
                                                                                std::string{" mcause mem[8]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__797__actual 
         != __Vtask_tb_top_cpu__DOT__check32__797__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__797__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__797__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__797__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__797__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__799__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__800__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__800__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__800__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__800__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__800__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__800__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__799__actual = __Vfunc_tb_top_cpu__DOT__load_word__800__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__799__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__734__name, 
                                                                                std::string{" final mem[12]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__799__actual 
         != __Vtask_tb_top_cpu__DOT__check32__799__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__799__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__799__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__799__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__799__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__expected_mcause = 0x8000000bU;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__fire_external = 1U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__fire_timer = 1U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__enable_external = 1U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__enable_timer = 1U;
    __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__name = 
        std::string{"EXTERNAL_PRIORITY_OVER_TIMER"};
    VL_WRITEF("\n============================================================\nINTERRUPT TEST: %@\n============================================================\n",
              -1,&(__Vtask_tb_top_cpu__DOT__run_interrupt_test__801__name));
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__enable_external 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__enable_external;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__enable_timer 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__enable_timer;
    __Vtask_tb_top_cpu__DOT__clear_memories__803__i = 0U;
    while (VL_GTS_III(32, 0x800U, __Vtask_tb_top_cpu__DOT__clear_memories__803__i)) {
        __Vfunc_tb_top_cpu__DOT__nop__804__Vfuncout = 0x13U;
        vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__clear_memories__803__i)] 
            = __Vfunc_tb_top_cpu__DOT__nop__804__Vfuncout;
        __Vtask_tb_top_cpu__DOT__clear_memories__803__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__803__i);
    }
    __Vtask_tb_top_cpu__DOT__clear_memories__803__i = 0U;
    while (VL_GTS_III(32, 0x2000U, __Vtask_tb_top_cpu__DOT__clear_memories__803__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU & __Vtask_tb_top_cpu__DOT__clear_memories__803__i)] = 0U;
        __Vtask_tb_top_cpu__DOT__clear_memories__803__i 
            = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__clear_memories__803__i);
    }
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__mie_value = 0U;
    if (__Vtask_tb_top_cpu__DOT__load_interrupt_program__802__enable_timer) {
        __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__mie_value 
            = (0x80U | __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__mie_value);
    }
    if (__Vtask_tb_top_cpu__DOT__load_interrupt_program__802__enable_external) {
        __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__mie_value 
            = (0x800U | __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__mie_value);
    }
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc = 0x40000U;
    __Vfunc_tb_top_cpu__DOT__addi__806__imm = 0x100U;
    __Vfunc_tb_top_cpu__DOT__addi__806__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__806__rd = 0xaU;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__rd = __Vfunc_tb_top_cpu__DOT__addi__806__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__rs1 = __Vfunc_tb_top_cpu__DOT__addi__806__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__imm = __Vfunc_tb_top_cpu__DOT__addi__806__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__807__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__807__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__807__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__807__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__807__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__807__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__806__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__807__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__805__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__806__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__805__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__805__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__805__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__805__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__805__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__805__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__805__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__lui__809__imm20 = 0x40U;
    __Vfunc_tb_top_cpu__DOT__lui__809__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_u__810__opcode = 0x37U;
    __Vfunc_tb_top_cpu__DOT__enc_u__810__rd = __Vfunc_tb_top_cpu__DOT__lui__809__rd;
    __Vfunc_tb_top_cpu__DOT__enc_u__810__imm20 = __Vfunc_tb_top_cpu__DOT__lui__809__imm20;
    __Vfunc_tb_top_cpu__DOT__enc_u__810__Vfuncout = 
        ((__Vfunc_tb_top_cpu__DOT__enc_u__810__imm20 
          << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_u__810__rd) 
                       << 7U) | (IData)(__Vfunc_tb_top_cpu__DOT__enc_u__810__opcode)));
    __Vfunc_tb_top_cpu__DOT__lui__809__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_u__810__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__808__instr 
        = __Vfunc_tb_top_cpu__DOT__lui__809__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__808__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__808__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__808__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__808__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__808__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__808__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__808__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__addi__812__imm = 0x300U;
    __Vfunc_tb_top_cpu__DOT__addi__812__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__addi__812__rd = 0xbU;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__rd = __Vfunc_tb_top_cpu__DOT__addi__812__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__rs1 = __Vfunc_tb_top_cpu__DOT__addi__812__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__imm = __Vfunc_tb_top_cpu__DOT__addi__812__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__813__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__813__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__813__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__813__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__813__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__813__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__812__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__813__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__811__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__812__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__811__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__811__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__811__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__811__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__811__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__811__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__811__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__815__rs1 = 0xbU;
    __Vfunc_tb_top_cpu__DOT__csrrw__815__csr_addr = 0x305U;
    __Vfunc_tb_top_cpu__DOT__csrrw__815__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__815__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__815__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__815__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__815__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__814__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__815__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__814__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__814__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__814__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__814__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__814__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__814__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__814__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__addi__817__imm = (0xfffU 
                                               & __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__mie_value);
    __Vfunc_tb_top_cpu__DOT__addi__817__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__817__rd = 0xcU;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__rd = __Vfunc_tb_top_cpu__DOT__addi__817__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__rs1 = __Vfunc_tb_top_cpu__DOT__addi__817__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__imm = __Vfunc_tb_top_cpu__DOT__addi__817__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__818__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__818__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__818__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__818__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__818__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__818__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__817__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__818__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__816__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__817__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__816__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__816__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__816__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__816__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__816__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__816__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__816__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__820__rs1 = 0xcU;
    __Vfunc_tb_top_cpu__DOT__csrrw__820__csr_addr = 0x304U;
    __Vfunc_tb_top_cpu__DOT__csrrw__820__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__820__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__820__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__820__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__820__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__819__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__820__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__819__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__819__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__819__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__819__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__819__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__819__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__819__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__addi__822__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__addi__822__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__822__rd = 0xdU;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__rd = __Vfunc_tb_top_cpu__DOT__addi__822__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__rs1 = __Vfunc_tb_top_cpu__DOT__addi__822__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__imm = __Vfunc_tb_top_cpu__DOT__addi__822__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__823__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__823__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__823__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__823__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__823__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__823__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__822__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__823__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__821__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__822__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__821__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__821__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__821__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__821__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__821__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__821__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__821__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__csrrw__825__rs1 = 0xdU;
    __Vfunc_tb_top_cpu__DOT__csrrw__825__csr_addr = 0x300U;
    __Vfunc_tb_top_cpu__DOT__csrrw__825__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrw__825__Vfuncout = 
        (0x1073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__825__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__825__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrw__825__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__824__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrw__825__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__824__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__824__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__824__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__824__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__824__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__824__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__824__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__addi__827__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__827__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__827__rd = 0xeU;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__rd = __Vfunc_tb_top_cpu__DOT__addi__827__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__rs1 = __Vfunc_tb_top_cpu__DOT__addi__827__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__imm = __Vfunc_tb_top_cpu__DOT__addi__827__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__828__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__828__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__828__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__828__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__828__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__828__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__827__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__828__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__826__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__827__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__826__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__826__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__826__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__826__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__826__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__826__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__826__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__sw__830__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__sw__830__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__830__rs2 = 0xeU;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__rs1 = __Vfunc_tb_top_cpu__DOT__sw__830__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__rs2 = __Vfunc_tb_top_cpu__DOT__sw__830__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__imm = __Vfunc_tb_top_cpu__DOT__sw__830__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__831__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__831__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__831__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__831__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__831__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__831__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__831__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__830__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__831__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__829__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__830__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__829__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__829__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__829__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__829__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__829__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__829__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__829__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__jal__833__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__833__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__834__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__834__rd = __Vfunc_tb_top_cpu__DOT__jal__833__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__834__imm = __Vfunc_tb_top_cpu__DOT__jal__833__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__834__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__834__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__834__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__834__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__834__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__834__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__834__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__833__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__834__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__832__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__833__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__832__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__832__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__832__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__832__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__832__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__832__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__832__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc = 0x40300U;
    __Vfunc_tb_top_cpu__DOT__addi__836__imm = 0x66U;
    __Vfunc_tb_top_cpu__DOT__addi__836__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__836__rd = 0xfU;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__rd = __Vfunc_tb_top_cpu__DOT__addi__836__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__rs1 = __Vfunc_tb_top_cpu__DOT__addi__836__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__imm = __Vfunc_tb_top_cpu__DOT__addi__836__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__837__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__837__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__837__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__837__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__837__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__837__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__836__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__837__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__835__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__836__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__835__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__835__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__835__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__835__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__835__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__835__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__835__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__sw__839__imm = 4U;
    __Vfunc_tb_top_cpu__DOT__sw__839__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__839__rs2 = 0xfU;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__rs1 = __Vfunc_tb_top_cpu__DOT__sw__839__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__rs2 = __Vfunc_tb_top_cpu__DOT__sw__839__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__imm = __Vfunc_tb_top_cpu__DOT__sw__839__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__840__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__840__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__840__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__840__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__840__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__840__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__840__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__839__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__840__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__838__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__839__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__838__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__838__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__838__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__838__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__838__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__838__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__838__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__csrrs__842__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__csrrs__842__csr_addr = 0x342U;
    __Vfunc_tb_top_cpu__DOT__csrrs__842__rd = 0x10U;
    __Vfunc_tb_top_cpu__DOT__csrrs__842__Vfuncout = 
        (0x2073U | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__842__csr_addr) 
                     << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__842__rs1) 
                                   << 0xfU) | ((IData)(__Vfunc_tb_top_cpu__DOT__csrrs__842__rd) 
                                               << 7U))));
    __Vtask_tb_top_cpu__DOT__put_instr__841__instr 
        = __Vfunc_tb_top_cpu__DOT__csrrs__842__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__841__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__841__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__841__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__841__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__841__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__841__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__841__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__sw__844__imm = 8U;
    __Vfunc_tb_top_cpu__DOT__sw__844__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__844__rs2 = 0x10U;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__rs1 = __Vfunc_tb_top_cpu__DOT__sw__844__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__rs2 = __Vfunc_tb_top_cpu__DOT__sw__844__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__imm = __Vfunc_tb_top_cpu__DOT__sw__844__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__845__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__845__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__845__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__845__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__845__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__845__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__845__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__844__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__845__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__843__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__844__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__843__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__843__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__843__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__843__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__843__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__843__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__843__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__addi__847__imm = 1U;
    __Vfunc_tb_top_cpu__DOT__addi__847__rs1 = 0U;
    __Vfunc_tb_top_cpu__DOT__addi__847__rd = 0x11U;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__opcode = 0x13U;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__rd = __Vfunc_tb_top_cpu__DOT__addi__847__rd;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__funct3 = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__rs1 = __Vfunc_tb_top_cpu__DOT__addi__847__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__imm = __Vfunc_tb_top_cpu__DOT__addi__847__imm;
    __Vfunc_tb_top_cpu__DOT__enc_i__848__Vfuncout = 
        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__848__imm) 
          << 0x14U) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__848__rs1) 
                        << 0xfU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__848__funct3) 
                                     << 0xcU) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_i__848__rd) 
                                                  << 7U) 
                                                 | (IData)(__Vfunc_tb_top_cpu__DOT__enc_i__848__opcode)))));
    __Vfunc_tb_top_cpu__DOT__addi__847__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_i__848__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__846__instr 
        = __Vfunc_tb_top_cpu__DOT__addi__847__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__846__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__846__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__846__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__846__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__846__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__846__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__846__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__sw__850__imm = 0xcU;
    __Vfunc_tb_top_cpu__DOT__sw__850__rs1 = 0xaU;
    __Vfunc_tb_top_cpu__DOT__sw__850__rs2 = 0x11U;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__opcode = 0x23U;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__funct3 = 2U;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__rs1 = __Vfunc_tb_top_cpu__DOT__sw__850__rs1;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__rs2 = __Vfunc_tb_top_cpu__DOT__sw__850__rs2;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__imm = __Vfunc_tb_top_cpu__DOT__sw__850__imm;
    __Vfunc_tb_top_cpu__DOT__enc_s__851__Vfuncout = 
        ((0xfe000000U & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__851__imm) 
                         << 0x14U)) | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__851__rs2) 
                                        << 0x14U) | 
                                       (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__851__rs1) 
                                         << 0xfU) | 
                                        (((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__851__funct3) 
                                          << 0xcU) 
                                         | ((0xf80U 
                                             & ((IData)(__Vfunc_tb_top_cpu__DOT__enc_s__851__imm) 
                                                << 7U)) 
                                            | (IData)(__Vfunc_tb_top_cpu__DOT__enc_s__851__opcode))))));
    __Vfunc_tb_top_cpu__DOT__sw__850__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_s__851__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__849__instr 
        = __Vfunc_tb_top_cpu__DOT__sw__850__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__849__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__849__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__849__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__849__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__849__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__849__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__849__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    __Vfunc_tb_top_cpu__DOT__jal__853__imm = 0U;
    __Vfunc_tb_top_cpu__DOT__jal__853__rd = 0U;
    __Vfunc_tb_top_cpu__DOT__enc_j__854__opcode = 0x6fU;
    __Vfunc_tb_top_cpu__DOT__enc_j__854__rd = __Vfunc_tb_top_cpu__DOT__jal__853__rd;
    __Vfunc_tb_top_cpu__DOT__enc_j__854__imm = __Vfunc_tb_top_cpu__DOT__jal__853__imm;
    __Vfunc_tb_top_cpu__DOT__enc_j__854__Vfuncout = 
        ((0x80000000U & (__Vfunc_tb_top_cpu__DOT__enc_j__854__imm 
                         << 0xbU)) | ((0x7fe00000U 
                                       & (__Vfunc_tb_top_cpu__DOT__enc_j__854__imm 
                                          << 0x14U)) 
                                      | ((0x100000U 
                                          & (__Vfunc_tb_top_cpu__DOT__enc_j__854__imm 
                                             << 9U)) 
                                         | ((0xff000U 
                                             & __Vfunc_tb_top_cpu__DOT__enc_j__854__imm) 
                                            | (((IData)(__Vfunc_tb_top_cpu__DOT__enc_j__854__rd) 
                                                << 7U) 
                                               | (IData)(__Vfunc_tb_top_cpu__DOT__enc_j__854__opcode))))));
    __Vfunc_tb_top_cpu__DOT__jal__853__Vfuncout = __Vfunc_tb_top_cpu__DOT__enc_j__854__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__852__instr 
        = __Vfunc_tb_top_cpu__DOT__jal__853__Vfuncout;
    __Vtask_tb_top_cpu__DOT__put_instr__852__addr = __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc;
    __Vtask_tb_top_cpu__DOT__put_instr__852__idx = 
        ((__Vtask_tb_top_cpu__DOT__put_instr__852__addr 
          - (IData)(0x40000U)) >> 2U);
    if (VL_UNLIKELY((0x800U <= __Vtask_tb_top_cpu__DOT__put_instr__852__idx))) {
        VL_WRITEF("[TB ERROR] instruction address out of range: 0x%08x\n[%0t] %%Error: tb_top_cpu.sv:351: Assertion failed in %Ntb_top_cpu.put_instr\n",
                  32,__Vtask_tb_top_cpu__DOT__put_instr__852__addr,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 351, "");
    }
    vlSelf->tb_top_cpu__DOT__imem[(0x7ffU & __Vtask_tb_top_cpu__DOT__put_instr__852__idx)] 
        = __Vtask_tb_top_cpu__DOT__put_instr__852__instr;
    __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc 
        = ((IData)(4U) + __Vtask_tb_top_cpu__DOT__load_interrupt_program__802__pc);
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__856__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__856__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__856__addr = 0x100U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__856__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__801__name, 
                                            std::string{" ready marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__856__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__857__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__856__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__857__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__857__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__857__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__857__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__857__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__857__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__856__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__856__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__856__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__856__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__856__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__858__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__856__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__858__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__858__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__858__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__858__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__858__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__856__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__856__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__856__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__858__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel13;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__857__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__856__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__857__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__857__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__857__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__857__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__857__addr)])));
        }
        __Vlabel13: ;
    }
    co_await vlSelf->__VtrigSched_h569e511a__0.trigger(
                                                       "@(negedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       727);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__fire_timer;
    vlSelf->tb_top_cpu__DOT__external_interrupt_in 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__fire_external;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       731);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h569e511a__0.trigger(
                                                       "@(negedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       733);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_top_cpu__DOT__external_interrupt_in = 0U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__859__timeout_limit = 0xbb8U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__859__expected = 1U;
    __Vtask_tb_top_cpu__DOT__wait_for_word__859__addr = 0x10cU;
    __Vtask_tb_top_cpu__DOT__wait_for_word__859__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__801__name, 
                                            std::string{" final marker"}));
    {
        __Vtask_tb_top_cpu__DOT__wait_for_word__859__timeout = 0U;
        __Vfunc_tb_top_cpu__DOT__load_word__860__addr 
            = __Vtask_tb_top_cpu__DOT__wait_for_word__859__addr;
        __Vfunc_tb_top_cpu__DOT__load_word__860__Vfuncout 
            = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                               & ((IData)(3U) 
                                                  + __Vfunc_tb_top_cpu__DOT__load_word__860__addr))] 
                << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                              [(0x1fffU & ((IData)(2U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__860__addr))] 
                              << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                            [(0x1fffU 
                                              & ((IData)(1U) 
                                                 + __Vfunc_tb_top_cpu__DOT__load_word__860__addr))] 
                                            << 8U) 
                                           | vlSelf->tb_top_cpu__DOT__dmem
                                           [(0x1fffU 
                                             & __Vfunc_tb_top_cpu__DOT__load_word__860__addr)])));
        while ((__Vfunc_tb_top_cpu__DOT__load_word__860__Vfuncout 
                != __Vtask_tb_top_cpu__DOT__wait_for_word__859__expected)) {
            co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                               "@(posedge tb_top_cpu.clk)", 
                                                               "tb_top_cpu.sv", 
                                                               397);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_top_cpu__DOT__wait_for_word__859__timeout 
                = ((IData)(1U) + __Vtask_tb_top_cpu__DOT__wait_for_word__859__timeout);
            if (VL_UNLIKELY(VL_GTS_III(32, __Vtask_tb_top_cpu__DOT__wait_for_word__859__timeout, __Vtask_tb_top_cpu__DOT__wait_for_word__859__timeout_limit))) {
                __Vfunc_tb_top_cpu__DOT__load_word__861__addr 
                    = __Vtask_tb_top_cpu__DOT__wait_for_word__859__addr;
                __Vfunc_tb_top_cpu__DOT__load_word__861__Vfuncout 
                    = ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + __Vfunc_tb_top_cpu__DOT__load_word__861__addr))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + __Vfunc_tb_top_cpu__DOT__load_word__861__addr))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_tb_top_cpu__DOT__load_word__861__addr))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & __Vfunc_tb_top_cpu__DOT__load_word__861__addr)])));
                VL_WRITEF("[FAIL] Timeout waiting for %@ at 0x%08x expected 0x%08x actual 0x%08x\n",
                          -1,&(__Vtask_tb_top_cpu__DOT__wait_for_word__859__name),
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__859__addr,
                          32,__Vtask_tb_top_cpu__DOT__wait_for_word__859__expected,
                          32,__Vfunc_tb_top_cpu__DOT__load_word__861__Vfuncout);
                vlSelf->tb_top_cpu__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__fail_count);
                goto __Vlabel14;
            }
            __Vfunc_tb_top_cpu__DOT__load_word__860__addr 
                = __Vtask_tb_top_cpu__DOT__wait_for_word__859__addr;
            __Vfunc_tb_top_cpu__DOT__load_word__860__Vfuncout 
                = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                                   & ((IData)(3U) 
                                                      + __Vfunc_tb_top_cpu__DOT__load_word__860__addr))] 
                    << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                  [(0x1fffU & ((IData)(2U) 
                                               + __Vfunc_tb_top_cpu__DOT__load_word__860__addr))] 
                                  << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_tb_top_cpu__DOT__load_word__860__addr))] 
                                                << 8U) 
                                               | vlSelf->tb_top_cpu__DOT__dmem
                                               [(0x1fffU 
                                                 & __Vfunc_tb_top_cpu__DOT__load_word__860__addr)])));
        }
        __Vlabel14: ;
    }
    __Vtask_tb_top_cpu__DOT__check32__862__expected = 0x66U;
    __Vfunc_tb_top_cpu__DOT__load_word__863__addr = 0x104U;
    __Vfunc_tb_top_cpu__DOT__load_word__863__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__863__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__863__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__863__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__863__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__862__actual = __Vfunc_tb_top_cpu__DOT__load_word__863__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__862__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__801__name, 
                                                                                std::string{" irq marker mem[4]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__862__actual 
         != __Vtask_tb_top_cpu__DOT__check32__862__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__862__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__862__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__862__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__862__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__864__expected 
        = __Vtask_tb_top_cpu__DOT__run_interrupt_test__801__expected_mcause;
    __Vfunc_tb_top_cpu__DOT__load_word__865__addr = 0x108U;
    __Vfunc_tb_top_cpu__DOT__load_word__865__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__865__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__865__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__865__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__865__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__864__actual = __Vfunc_tb_top_cpu__DOT__load_word__865__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__864__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__801__name, 
                                                                                std::string{" mcause mem[8]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__864__actual 
         != __Vtask_tb_top_cpu__DOT__check32__864__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__864__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__864__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__864__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__864__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    __Vtask_tb_top_cpu__DOT__check32__866__expected = 1U;
    __Vfunc_tb_top_cpu__DOT__load_word__867__addr = 0x10cU;
    __Vfunc_tb_top_cpu__DOT__load_word__867__Vfuncout 
        = ((vlSelf->tb_top_cpu__DOT__dmem[(0x1fffU 
                                           & ((IData)(3U) 
                                              + __Vfunc_tb_top_cpu__DOT__load_word__867__addr))] 
            << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                          [(0x1fffU & ((IData)(2U) 
                                       + __Vfunc_tb_top_cpu__DOT__load_word__867__addr))] 
                          << 0x10U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                        [(0x1fffU & 
                                          ((IData)(1U) 
                                           + __Vfunc_tb_top_cpu__DOT__load_word__867__addr))] 
                                        << 8U) | vlSelf->tb_top_cpu__DOT__dmem
                                       [(0x1fffU & __Vfunc_tb_top_cpu__DOT__load_word__867__addr)])));
    __Vtask_tb_top_cpu__DOT__check32__866__actual = __Vfunc_tb_top_cpu__DOT__load_word__867__Vfuncout;
    __Vtask_tb_top_cpu__DOT__check32__866__name = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(__Vtask_tb_top_cpu__DOT__run_interrupt_test__801__name, 
                                                                                std::string{" final mem[12]"}));
    if ((__Vtask_tb_top_cpu__DOT__check32__866__actual 
         != __Vtask_tb_top_cpu__DOT__check32__866__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_top_cpu__DOT__check32__866__name),
                  32,__Vtask_tb_top_cpu__DOT__check32__866__actual,
                  32,__Vtask_tb_top_cpu__DOT__check32__866__expected);
        vlSelf->tb_top_cpu__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_top_cpu__DOT__check32__866__name));
        vlSelf->tb_top_cpu__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_top_cpu__DOT__pass_count);
    }
    VL_WRITEF("\n========================================\nEXTENDED COMPREHENSIVE TOP_CPU TEST SUMMARY\nPASSED: %0d\nFAILED: %0d\n========================================\n",
              32,vlSelf->tb_top_cpu__DOT__pass_count,
              32,vlSelf->tb_top_cpu__DOT__fail_count);
    if ((0U == vlSelf->tb_top_cpu__DOT__fail_count)) {
        VL_WRITEF("ALL EXTENDED COMPREHENSIVE TOP_CPU TESTS PASSED\n");
        VL_FINISH_MT("tb_top_cpu.sv", 888, "");
    } else {
        VL_WRITEF("EXTENDED COMPREHENSIVE TOP_CPU TESTS FAILED\n[%0t] %%Error: tb_top_cpu.sv:891: Assertion failed in %Ntb_top_cpu\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_top_cpu.sv", 891, "");
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}
