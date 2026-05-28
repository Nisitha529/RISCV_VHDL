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
    Vtb_top_cpu_wishbone_interface* __PVT__tb_top_cpu__DOT__fetch_wb;
    Vtb_top_cpu_wishbone_interface* __PVT__tb_top_cpu__DOT__mem_wb;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_top_cpu__DOT__clk;
        CData/*0:0*/ tb_top_cpu__DOT__rst;
        CData/*0:0*/ tb_top_cpu__DOT__external_interrupt_in;
        CData/*0:0*/ tb_top_cpu__DOT__timer_interrupt_in;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__if_id_status;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__id_ex_status;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__ex_mem_status;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_status;
        CData/*1:0*/ tb_top_cpu__DOT__dut__DOT__execute_backwards_out;
        CData/*1:0*/ tb_top_cpu__DOT__dut__DOT__memory_backwards_out;
        CData/*1:0*/ tb_top_cpu__DOT__dut__DOT__fetch_backwards_in;
        CData/*1:0*/ tb_top_cpu__DOT__dut__DOT__decode_backwards_in;
        CData/*1:0*/ tb_top_cpu__DOT__dut__DOT__execute_backwards_in;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__id_rs1_used;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__id_rs2_used;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__late_result_use_hazard_raw;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__late_result_use_hazard;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__decode_status_in;
        CData/*2:0*/ tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_type;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__can_request;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used;
        CData/*2:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_fence_i;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_system_or_csr;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_or_jump_redirect;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__fetch_misaligned;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__forward_valid_comb;
        CData/*1:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__status_backwards_comb;
        CData/*1:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__valid_memory_op;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__access_misaligned;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_sel;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__launch_memory_op;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_cyc_comb;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_stb_comb;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel_comb;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_we_comb;
        CData/*3:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_fault_status_comb;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__is_csr;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_enable;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd_normal;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__pipeline_exception;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__timer_interrupt_taken;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__external_interrupt_taken;
    };
    struct {
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_taken;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_writes_rd_comb;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_hc0a4638a__0;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_hcb080270__0;
        CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_h8f4b082b__0;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_valid;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_uses_rs1;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_uses_rs2;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1388__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1389__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1389__op_i;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1390__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1390__op_i;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_valid;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_uses_rs1;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_uses_rs2;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1392__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1393__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1393__op_i;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1394__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1394__op_i;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_valid;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_uses_rs1;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_uses_rs2;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1396__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1397__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1397__op_i;
        CData/*0:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1398__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1398__op_i;
        CData/*0:0*/ __Vtrigrprev__TOP__tb_top_cpu__DOT__clk;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_top_cpu__DOT__pass_count;
        IData/*31:0*/ tb_top_cpu__DOT__fail_count;
        IData/*31:0*/ tb_top_cpu__DOT__expected_auipc_value;
        IData/*31:0*/ tb_top_cpu__DOT__expected_jalr_link_value;
        IData/*31:0*/ tb_top_cpu__DOT__fetch_pc_byte;
        IData/*31:0*/ tb_top_cpu__DOT__fetch_word_index;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__if_id_instruction;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__if_id_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__id_ex_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__ex_mem_source_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__ex_mem_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_source_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__execute_jump_address_out;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_jump_address_out;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_jump_address_out;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__decode_jump_address_in;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__execute_jump_address_in;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_out;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc;
    };
    struct {
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_selected;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_selected;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__i;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_target;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__next_pc_comb;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value_comb;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__jump_address_comb;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__store_data_comb;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_store_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_dat_mosi_comb;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_load_value_comb;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtvec;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mepc;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mcause;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtval;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mip;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_cause;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_cause;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_tval;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_address;
        IData/*31:0*/ tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_rd_data_comb;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlWide<3>/*64:0*/ tb_top_cpu__DOT__dut__DOT__id_ex_instruction;
        VlWide<3>/*64:0*/ tb_top_cpu__DOT__dut__DOT__ex_mem_instruction;
        QData/*37:0*/ tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding;
        VlWide<3>/*64:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_instruction;
        QData/*37:0*/ tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding;
        QData/*37:0*/ tb_top_cpu__DOT__dut__DOT__wb_forwarding;
        VlWide<3>/*64:0*/ tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction;
        VlWide<3>/*64:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction;
        VlWide<3>/*64:0*/ tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr;
        VlWide<3>/*64:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_instr;
        VlWide<3>/*64:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_instr;
        VlWide<3>/*64:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1388__instr;
        VlWide<3>/*64:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_instr;
        VlWide<3>/*64:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_instr;
        VlWide<3>/*64:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1392__instr;
        VlWide<3>/*64:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_instr;
        VlWide<3>/*64:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_instr;
        VlWide<3>/*64:0*/ __Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1396__instr;
        VlUnpacked<IData/*31:0*/, 2048> tb_top_cpu__DOT__imem;
        VlUnpacked<CData/*7:0*/, 8192> tb_top_cpu__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 32> tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h569e505b__0;
    VlTriggerScheduler __VtrigSched_h569e511a__0;
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
