// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_memory_stage.h for the primary calling header

#ifndef VERILATED_VTB_MEMORY_STAGE___024ROOT_H_
#define VERILATED_VTB_MEMORY_STAGE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_memory_stage__Syms;
class Vtb_memory_stage_wishbone_interface;


class Vtb_memory_stage___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_memory_stage_wishbone_interface* __PVT__tb_memory_stage__DOT__wb;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_memory_stage__DOT__clk;
    CData/*0:0*/ tb_memory_stage__DOT__rst;
    CData/*3:0*/ tb_memory_stage__DOT__status_forwards_in;
    CData/*3:0*/ tb_memory_stage__DOT__status_forwards_out;
    CData/*1:0*/ tb_memory_stage__DOT__status_backwards_in;
    CData/*1:0*/ tb_memory_stage__DOT__status_backwards_out;
    CData/*0:0*/ tb_memory_stage__DOT__force_error;
    CData/*0:0*/ tb_memory_stage__DOT__dut__DOT__is_load;
    CData/*0:0*/ tb_memory_stage__DOT__dut__DOT__is_store;
    CData/*5:0*/ tb_memory_stage__DOT__dut__DOT__mem_width;
    CData/*3:0*/ tb_memory_stage__DOT__dut__DOT__wb_sel;
    CData/*1:0*/ tb_memory_stage__DOT__dut__DOT__wb_state;
    CData/*0:0*/ __Vtrigrprev__TOP__tb_memory_stage__DOT__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__tb_memory_stage__DOT__rst;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_memory_stage__DOT__source_data_in;
    IData/*31:0*/ tb_memory_stage__DOT__rd_data_in;
    IData/*31:0*/ tb_memory_stage__DOT__program_counter_in;
    IData/*31:0*/ tb_memory_stage__DOT__next_program_counter_in;
    IData/*31:0*/ tb_memory_stage__DOT__source_data_reg_out;
    IData/*31:0*/ tb_memory_stage__DOT__rd_data_reg_out;
    IData/*31:0*/ tb_memory_stage__DOT__program_counter_reg_out;
    IData/*31:0*/ tb_memory_stage__DOT__next_program_counter_reg_out;
    IData/*31:0*/ tb_memory_stage__DOT__jump_address_backwards_in;
    IData/*31:0*/ tb_memory_stage__DOT__jump_address_backwards_out;
    IData/*31:0*/ tb_memory_stage__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_memory_stage__DOT__dut__DOT__load_data;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*64:0*/ tb_memory_stage__DOT__instruction_in;
    VlWide<3>/*64:0*/ tb_memory_stage__DOT__instruction_reg_out;
    QData/*37:0*/ tb_memory_stage__DOT__forwarding_out;
    VlUnpacked<IData/*31:0*/, 1024> tb_memory_stage__DOT__memory;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h83711720__0;
    VlTriggerScheduler __VtrigSched_h6f28b0b0__0;
    VlTriggerScheduler __VtrigSched_h837116d9__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_memory_stage__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_memory_stage___024root(Vtb_memory_stage__Syms* symsp, const char* v__name);
    ~Vtb_memory_stage___024root();
    VL_UNCOPYABLE(Vtb_memory_stage___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
