// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fetch_stage.h for the primary calling header

#ifndef VERILATED_VTB_FETCH_STAGE___024ROOT_H_
#define VERILATED_VTB_FETCH_STAGE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_fetch_stage__Syms;
class Vtb_fetch_stage_wishbone_interface;


class Vtb_fetch_stage___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_fetch_stage_wishbone_interface* __PVT__tb_fetch_stage__DOT__wb;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fetch_stage__DOT__clk;
    CData/*0:0*/ tb_fetch_stage__DOT__rst;
    CData/*3:0*/ tb_fetch_stage__DOT__status_forwards_out;
    CData/*1:0*/ tb_fetch_stage__DOT__status_backwards_in;
    CData/*0:0*/ tb_fetch_stage__DOT__dut__DOT__wb_state;
    CData/*0:0*/ tb_fetch_stage__DOT__dut__DOT__pending_valid;
    CData/*3:0*/ tb_fetch_stage__DOT__dut__DOT__pending_status;
    CData/*0:0*/ tb_fetch_stage__DOT__dut__DOT__kill_response;
    CData/*0:0*/ tb_fetch_stage__DOT__dut__DOT__response_valid;
    CData/*0:0*/ __Vtrigrprev__TOP__tb_fetch_stage__DOT__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_fetch_stage__DOT__instruction_reg_out;
    IData/*31:0*/ tb_fetch_stage__DOT__program_counter_reg_out;
    IData/*31:0*/ tb_fetch_stage__DOT__jump_address_backwards_in;
    IData/*31:0*/ tb_fetch_stage__DOT__pass_count;
    IData/*31:0*/ tb_fetch_stage__DOT__fail_count;
    IData/*31:0*/ tb_fetch_stage__DOT__addr;
    IData/*31:0*/ tb_fetch_stage__DOT__dut__DOT__pc;
    IData/*31:0*/ tb_fetch_stage__DOT__dut__DOT__request_pc;
    IData/*31:0*/ tb_fetch_stage__DOT__dut__DOT__pending_instr;
    IData/*31:0*/ tb_fetch_stage__DOT__dut__DOT__pending_pc;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h49b00112__0;
    VlTriggerScheduler __VtrigSched_h49b000d3__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fetch_stage__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fetch_stage___024root(Vtb_fetch_stage__Syms* symsp, const char* v__name);
    ~Vtb_fetch_stage___024root();
    VL_UNCOPYABLE(Vtb_fetch_stage___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
