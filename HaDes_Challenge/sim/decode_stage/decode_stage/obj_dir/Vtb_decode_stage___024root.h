// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_decode_stage.h for the primary calling header

#ifndef VERILATED_VTB_DECODE_STAGE___024ROOT_H_
#define VERILATED_VTB_DECODE_STAGE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_decode_stage__Syms;

class Vtb_decode_stage___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_decode_stage__DOT__clk;
    CData/*0:0*/ tb_decode_stage__DOT__rst;
    CData/*3:0*/ tb_decode_stage__DOT__status_forwards_in;
    CData/*3:0*/ tb_decode_stage__DOT__status_forwards_out;
    CData/*1:0*/ tb_decode_stage__DOT__status_backwards_in;
    CData/*1:0*/ tb_decode_stage__DOT__status_backwards_out;
    CData/*0:0*/ tb_decode_stage__DOT__dut__DOT__rs1_used;
    CData/*0:0*/ tb_decode_stage__DOT__dut__DOT__rs2_used;
    CData/*2:0*/ tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_type;
    CData/*0:0*/ __Vtrigrprev__TOP__tb_decode_stage__DOT__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_decode_stage__DOT__instruction_in;
    IData/*31:0*/ tb_decode_stage__DOT__program_counter_in;
    IData/*31:0*/ tb_decode_stage__DOT__rs1_data_reg_out;
    IData/*31:0*/ tb_decode_stage__DOT__rs2_data_reg_out;
    IData/*31:0*/ tb_decode_stage__DOT__program_counter_reg_out;
    IData/*31:0*/ tb_decode_stage__DOT__jump_address_backwards_in;
    IData/*31:0*/ tb_decode_stage__DOT__jump_address_backwards_out;
    IData/*31:0*/ tb_decode_stage__DOT__pass_count;
    IData/*31:0*/ tb_decode_stage__DOT__fail_count;
    IData/*31:0*/ tb_decode_stage__DOT__dut__DOT__rs1_selected;
    IData/*31:0*/ tb_decode_stage__DOT__dut__DOT__rs2_selected;
    IData/*31:0*/ tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_out;
    IData/*31:0*/ tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*37:0*/ tb_decode_stage__DOT__exe_forwarding_in;
    QData/*37:0*/ tb_decode_stage__DOT__mem_forwarding_in;
    QData/*37:0*/ tb_decode_stage__DOT__wb_forwarding_in;
    VlWide<3>/*64:0*/ tb_decode_stage__DOT__instruction_reg_out;
    VlWide<3>/*64:0*/ tb_decode_stage__DOT__dut__DOT__decoded_instruction;
    VlUnpacked<IData/*31:0*/, 32> tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h222ba413__0;
    VlTriggerScheduler __VtrigSched_h222ba3d2__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_decode_stage__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_decode_stage___024root(Vtb_decode_stage__Syms* symsp, const char* v__name);
    ~Vtb_decode_stage___024root();
    VL_UNCOPYABLE(Vtb_decode_stage___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
