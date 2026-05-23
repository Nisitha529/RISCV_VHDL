// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_instruction_decoder.h for the primary calling header

#ifndef VERILATED_VTB_INSTRUCTION_DECODER___024ROOT_H_
#define VERILATED_VTB_INSTRUCTION_DECODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_instruction_decoder__Syms;

class Vtb_instruction_decoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb_instruction_decoder__DOT__dut__DOT__alu_op;
    CData/*0:0*/ tb_instruction_decoder__DOT__dut__DOT__write_rd;
    CData/*5:0*/ tb_instruction_decoder__DOT__dut__DOT__mem_width;
    CData/*0:0*/ tb_instruction_decoder__DOT__dut__DOT__jump;
    CData/*0:0*/ tb_instruction_decoder__DOT__dut__DOT__branch;
    CData/*2:0*/ tb_instruction_decoder__DOT__dut__DOT__rd_data_src;
    CData/*2:0*/ tb_instruction_decoder__DOT__dut__DOT__imm_type;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_instruction_decoder__DOT__instruction_in;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*64:0*/ tb_instruction_decoder__DOT__instruction_out;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_instruction_decoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_instruction_decoder___024root(Vtb_instruction_decoder__Syms* symsp, const char* v__name);
    ~Vtb_instruction_decoder___024root();
    VL_UNCOPYABLE(Vtb_instruction_decoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
