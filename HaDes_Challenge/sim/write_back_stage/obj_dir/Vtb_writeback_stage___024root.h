// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_writeback_stage.h for the primary calling header

#ifndef VERILATED_VTB_WRITEBACK_STAGE___024ROOT_H_
#define VERILATED_VTB_WRITEBACK_STAGE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_writeback_stage__Syms;

class Vtb_writeback_stage___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_writeback_stage__DOT__clk;
    CData/*0:0*/ tb_writeback_stage__DOT__rst;
    CData/*0:0*/ tb_writeback_stage__DOT__external_interrupt_in;
    CData/*0:0*/ tb_writeback_stage__DOT__timer_interrupt_in;
    CData/*3:0*/ tb_writeback_stage__DOT__status_forwards_in;
    CData/*1:0*/ tb_writeback_stage__DOT__status_backwards_out;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT__is_csr;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT__csr_write_enable;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT__writes_rd_normal;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT__pipeline_exception;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT__timer_interrupt_taken;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT__external_interrupt_taken;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT__interrupt_taken;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT__trap_taken;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT__redirect_taken;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT__wb_writes_rd_comb;
    CData/*0:0*/ __Vtrigrprev__TOP__tb_writeback_stage__DOT__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_writeback_stage__DOT__source_data_in;
    IData/*31:0*/ tb_writeback_stage__DOT__rd_data_in;
    IData/*31:0*/ tb_writeback_stage__DOT__program_counter_in;
    IData/*31:0*/ tb_writeback_stage__DOT__next_program_counter_in;
    IData/*31:0*/ tb_writeback_stage__DOT__jump_address_backwards_out;
    IData/*31:0*/ tb_writeback_stage__DOT__pass_count;
    IData/*31:0*/ tb_writeback_stage__DOT__fail_count;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__csr_mstatus;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__csr_mie;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__csr_mtvec;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__csr_mepc;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__csr_mcause;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__csr_mtval;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__csr_mip;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__csr_read_data;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__csr_write_data;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__exception_cause;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__exception_tval;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__interrupt_cause;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__trap_cause;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__trap_tval;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__redirect_address;
    IData/*31:0*/ tb_writeback_stage__DOT__dut__DOT__wb_rd_data_comb;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*64:0*/ tb_writeback_stage__DOT__instruction_in;
    QData/*37:0*/ tb_writeback_stage__DOT__forwarding_out;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha16a72ed__0;
    VlTriggerScheduler __VtrigSched_ha16a73b4__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_writeback_stage__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_writeback_stage___024root(Vtb_writeback_stage__Syms* symsp, const char* v__name);
    ~Vtb_writeback_stage___024root();
    VL_UNCOPYABLE(Vtb_writeback_stage___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
