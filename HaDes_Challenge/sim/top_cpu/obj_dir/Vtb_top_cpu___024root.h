// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top_cpu.h for the primary calling header

#ifndef VERILATED_VTB_TOP_CPU___024ROOT_H_
#define VERILATED_VTB_TOP_CPU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_top_cpu__Syms;
class Vtb_top_cpu_wishbone_interface;


class Vtb_top_cpu___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_top_cpu_wishbone_interface* __PVT__tb_top_cpu__DOT__wb_imem;
    Vtb_top_cpu_wishbone_interface* __PVT__tb_top_cpu__DOT__wb_dmem;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_top_cpu__DOT__clk;
        CData/*0:0*/ tb_top_cpu__DOT__rst;
        CData/*1:0*/ tb_top_cpu__DOT__dut__DOT__decode_backwards_out;
        CData/*1:0*/ tb_top_cpu__DOT__dut__DOT__memory_backwards_out;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__load_use_hazard;
        CData/*1:0*/ tb_top_cpu__DOT__dut__DOT__decode_backwards_in;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__status_forwards_out;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__can_request;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__status_forwards_out;
        CData/*2:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_type;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT____Vcellinp__regfile_inst__write_enable;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__status_forwards_out;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd;
        CData/*0:0*/ __Vtrigrprev__TOP__tb_top_cpu__DOT__clk;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_top_cpu__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_top_cpu__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__if_id_instr;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__if_id_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__id_ex_rs1;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__id_ex_rs2;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__id_ex_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__ex_mem_source_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_source_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__decode_jump_addr;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_jump_addr;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_out;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_fwd;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_fwd;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__i;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_rd_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc;
    };
    struct {
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__load_value;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlWide<3>/*64:0*/ tb_top_cpu__DOT__dut__DOT__id_ex_instr;
        QData/*37:0*/ tb_top_cpu__DOT__dut__DOT__ex_mem_fwd;
        VlWide<3>/*64:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_instr;
        QData/*37:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_fwd;
        QData/*37:0*/ tb_top_cpu__DOT__dut__DOT__wb_fwd;
        VlWide<3>/*64:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed;
        VlWide<3>/*64:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr;
        VlUnpacked<IData/*31:0*/, 1024> tb_top_cpu__DOT__imem;
        VlUnpacked<IData/*31:0*/, 1024> tb_top_cpu__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 32> tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h569e505b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_top_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top_cpu___024root(Vtb_top_cpu__Syms* symsp, const char* v__name);
    ~Vtb_top_cpu___024root();
    VL_UNCOPYABLE(Vtb_top_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
