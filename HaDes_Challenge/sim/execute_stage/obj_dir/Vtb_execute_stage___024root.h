// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_execute_stage.h for the primary calling header

#ifndef VERILATED_VTB_EXECUTE_STAGE___024ROOT_H_
#define VERILATED_VTB_EXECUTE_STAGE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_execute_stage__Syms;

class Vtb_execute_stage___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_execute_stage__DOT__clk;
    CData/*0:0*/ tb_execute_stage__DOT__rst;
    CData/*3:0*/ tb_execute_stage__DOT__status_forwards_in;
    CData/*3:0*/ tb_execute_stage__DOT__status_forwards_out;
    CData/*1:0*/ tb_execute_stage__DOT__status_backwards_in;
    CData/*1:0*/ tb_execute_stage__DOT__status_backwards_out;
    CData/*3:0*/ tb_execute_stage__DOT__dut__DOT__alu_op;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__alu_use_imm;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__is_branch;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__is_jump;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__is_jalr;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__is_load;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__is_store;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__is_fence_i;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__is_system_or_csr;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__take_branch;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__branch_or_jump_redirect;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__fetch_misaligned;
    CData/*0:0*/ tb_execute_stage__DOT__dut__DOT__forward_valid_comb;
    CData/*1:0*/ tb_execute_stage__DOT__dut__DOT__status_backwards_comb;
    CData/*0:0*/ __Vtrigrprev__TOP__tb_execute_stage__DOT__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_execute_stage__DOT__rs1_data_in;
    IData/*31:0*/ tb_execute_stage__DOT__rs2_data_in;
    IData/*31:0*/ tb_execute_stage__DOT__program_counter_in;
    IData/*31:0*/ tb_execute_stage__DOT__source_data_reg_out;
    IData/*31:0*/ tb_execute_stage__DOT__rd_data_reg_out;
    IData/*31:0*/ tb_execute_stage__DOT__program_counter_reg_out;
    IData/*31:0*/ tb_execute_stage__DOT__next_program_counter_reg_out;
    IData/*31:0*/ tb_execute_stage__DOT__jump_address_backwards_in;
    IData/*31:0*/ tb_execute_stage__DOT__jump_address_backwards_out;
    IData/*31:0*/ tb_execute_stage__DOT__pass_count;
    IData/*31:0*/ tb_execute_stage__DOT__fail_count;
    IData/*31:0*/ tb_execute_stage__DOT__dut__DOT__alu_op2;
    IData/*31:0*/ tb_execute_stage__DOT__dut__DOT__alu_result;
    IData/*31:0*/ tb_execute_stage__DOT__dut__DOT__branch_target;
    IData/*31:0*/ tb_execute_stage__DOT__dut__DOT__next_pc_comb;
    IData/*31:0*/ tb_execute_stage__DOT__dut__DOT__rd_value_comb;
    IData/*31:0*/ tb_execute_stage__DOT__dut__DOT__jump_address_comb;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*64:0*/ tb_execute_stage__DOT__instruction_in;
    VlWide<3>/*64:0*/ tb_execute_stage__DOT__instruction_reg_out;
    QData/*37:0*/ tb_execute_stage__DOT__forwarding_out;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc23b5e66__0;
    VlTriggerScheduler __VtrigSched_hc23b5f27__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_execute_stage__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_execute_stage___024root(Vtb_execute_stage__Syms* symsp, const char* v__name);
    ~Vtb_execute_stage___024root();
    VL_UNCOPYABLE(Vtb_execute_stage___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
