// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_cpu.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_cpu__Syms.h"
#include "Vtb_top_cpu___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__2(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_initial__TOP__2\n"); );
    // Init
    IData/*31:0*/ tb_top_cpu__DOT____Vrepeat3;
    tb_top_cpu__DOT____Vrepeat3 = 0;
    // Body
    tb_top_cpu__DOT____Vrepeat3 = 0x13880U;
    while (VL_LTS_III(32, 0U, tb_top_cpu__DOT____Vrepeat3)) {
        co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                           "@(posedge tb_top_cpu.clk)", 
                                                           "tb_top_cpu.sv", 
                                                           1151);
        tb_top_cpu__DOT____Vrepeat3 = (tb_top_cpu__DOT____Vrepeat3 
                                       - (IData)(1U));
    }
    VL_WRITEF("[FAIL] Global simulation timeout\n[%0t] %%Error: tb_top_cpu.sv:1153: Assertion failed in %Ntb_top_cpu\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("tb_top_cpu.sv", 1153, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_cpu___024root___dump_triggers__act(Vtb_top_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_cpu___024root___eval_triggers__act(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->tb_top_cpu__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_top_cpu__DOT__clk)));
    vlSelf->__VactTriggered.at(1U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__VactTriggered.at(2U) = ((~ (IData)(vlSelf->tb_top_cpu__DOT__clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__tb_top_cpu__DOT__clk));
    vlSelf->__Vtrigrprev__TOP__tb_top_cpu__DOT__clk 
        = vlSelf->tb_top_cpu__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top_cpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtb_top_cpu__ConstPool__TABLE_h1e7fd68f_0;

VL_INLINE_OPT void Vtb_top_cpu___024root___nba_sequent__TOP__0(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*20:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0;
    tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*12:0*/ __Vdlyvdim0__tb_top_cpu__DOT__dmem__v0;
    __Vdlyvdim0__tb_top_cpu__DOT__dmem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_cpu__DOT__dmem__v0;
    __Vdlyvval__tb_top_cpu__DOT__dmem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_cpu__DOT__dmem__v0;
    __Vdlyvset__tb_top_cpu__DOT__dmem__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__tb_top_cpu__DOT__dmem__v1;
    __Vdlyvdim0__tb_top_cpu__DOT__dmem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_cpu__DOT__dmem__v1;
    __Vdlyvval__tb_top_cpu__DOT__dmem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_cpu__DOT__dmem__v1;
    __Vdlyvset__tb_top_cpu__DOT__dmem__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__tb_top_cpu__DOT__dmem__v2;
    __Vdlyvdim0__tb_top_cpu__DOT__dmem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_cpu__DOT__dmem__v2;
    __Vdlyvval__tb_top_cpu__DOT__dmem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_cpu__DOT__dmem__v2;
    __Vdlyvset__tb_top_cpu__DOT__dmem__v2 = 0;
    SData/*12:0*/ __Vdlyvdim0__tb_top_cpu__DOT__dmem__v3;
    __Vdlyvdim0__tb_top_cpu__DOT__dmem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_top_cpu__DOT__dmem__v3;
    __Vdlyvval__tb_top_cpu__DOT__dmem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_cpu__DOT__dmem__v3;
    __Vdlyvset__tb_top_cpu__DOT__dmem__v3 = 0;
    CData/*0:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state;
    __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction;
    __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_pc = 0;
    CData/*3:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status;
    __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status = 0;
    CData/*0:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid;
    __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data;
    __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data;
    __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_pc = 0;
    VlWide<3>/*64:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction;
    VL_ZERO_W(65, __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction);
    CData/*3:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_status;
    __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_status = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v0;
    __Vdlyvset__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvdim0__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvval__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvset__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_source_data;
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_source_data = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data;
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data = 0;
    VlWide<3>/*64:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction;
    VL_ZERO_W(65, __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction);
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_pc = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc = 0;
    CData/*3:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_status;
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_status = 0;
    CData/*1:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state;
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state = 0;
    VlWide<3>/*64:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr;
    VL_ZERO_W(65, __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr);
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data;
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr;
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc = 0;
    CData/*0:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load;
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load = 0;
    IData/*31:0*/ __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus;
    __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus = 0;
    // Body
    __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state;
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_pc = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc;
    __Vdlyvset__tb_top_cpu__DOT__dmem__v0 = 0U;
    __Vdlyvset__tb_top_cpu__DOT__dmem__v1 = 0U;
    __Vdlyvset__tb_top_cpu__DOT__dmem__v2 = 0U;
    __Vdlyvset__tb_top_cpu__DOT__dmem__v3 = 0U;
    __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_pc = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data;
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data;
    __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_status 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status;
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data;
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_source_data 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data;
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_status 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status;
    __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U] 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U];
    __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U];
    __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U];
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U] 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U];
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U];
    __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U] 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U];
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data;
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load;
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[0U] 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[0U];
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U] 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U];
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[2U] 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[2U];
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr;
    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state;
    __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_pc = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc;
    __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid;
    __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_status;
    __Vdlyvset__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 = 0U;
    __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction;
    __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus;
    if ((1U & (~ (IData)(vlSelf->tb_top_cpu__DOT__rst)))) {
        if (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_cyc_comb) 
             & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_stb_comb))) {
            if ((0x2000U > ((IData)(3U) + vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb))) {
                if (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_we_comb) 
                     & (0x400U != vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb))) {
                    if ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel_comb))) {
                        __Vdlyvval__tb_top_cpu__DOT__dmem__v0 
                            = (0xffU & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_dat_mosi_comb);
                        __Vdlyvset__tb_top_cpu__DOT__dmem__v0 = 1U;
                        __Vdlyvdim0__tb_top_cpu__DOT__dmem__v0 
                            = (0x1fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb);
                    }
                    if ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel_comb))) {
                        __Vdlyvval__tb_top_cpu__DOT__dmem__v1 
                            = (0xffU & (vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                        >> 8U));
                        __Vdlyvset__tb_top_cpu__DOT__dmem__v1 = 1U;
                        __Vdlyvdim0__tb_top_cpu__DOT__dmem__v1 
                            = (0x1fffU & ((IData)(1U) 
                                          + vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb));
                    }
                    if ((4U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel_comb))) {
                        __Vdlyvval__tb_top_cpu__DOT__dmem__v2 
                            = (0xffU & (vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                                        >> 0x10U));
                        __Vdlyvset__tb_top_cpu__DOT__dmem__v2 = 1U;
                        __Vdlyvdim0__tb_top_cpu__DOT__dmem__v2 
                            = (0x1fffU & ((IData)(2U) 
                                          + vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb));
                    }
                    if ((8U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel_comb))) {
                        __Vdlyvval__tb_top_cpu__DOT__dmem__v3 
                            = (vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_dat_mosi_comb 
                               >> 0x18U);
                        __Vdlyvset__tb_top_cpu__DOT__dmem__v3 = 1U;
                        __Vdlyvdim0__tb_top_cpu__DOT__dmem__v3 
                            = (0x1fffU & ((IData)(3U) 
                                          + vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb));
                    }
                }
            }
        }
    }
    vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.dat_mosi = 0U;
    vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.we = 0U;
    vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.sel = 0xfU;
    vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.ack = (
                                                   (~ (IData)(vlSelf->tb_top_cpu__DOT__rst)) 
                                                   & (((IData)(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.cyc) 
                                                       & (IData)(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.stb)) 
                                                      & (0x40600U 
                                                         != vlSelf->tb_top_cpu__DOT__fetch_pc_byte)));
    if (vlSelf->tb_top_cpu__DOT__rst) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__i = 0x20U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_pc = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_pc = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_pc;
        __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_status = 1U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding = 0ULL;
        __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_source_data = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data;
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data;
        __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_status = 1U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U] = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] = 0x90000000U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U] = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] = 0x90000000U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_status;
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U] 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U];
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U];
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U];
        __Vdlyvset__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v0 = 1U;
    } else {
        if ((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in))) {
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_pc = 0U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc = 0U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding = 0ULL;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_source_data = 0U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_status = 1U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U] = 0U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] = 0x90000000U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U] = 0U;
        } else if ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in))) {
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data;
            vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_source_data 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_status 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status;
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U] 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U];
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U];
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U] 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U];
        } else {
            __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc;
            if ((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status))) {
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__next_pc_comb;
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value_comb;
                vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding 
                    = (((QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__forward_valid_comb)) 
                        << 0x25U) | (((QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value_comb)) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                                   >> 0x16U))))));
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_source_data 
                    = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store)
                        ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data
                        : ((((0x29U == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                  << 5U) 
                                                 | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                    >> 0x1bU)))) 
                             | (0x2aU == (0x3fU & (
                                                   (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                      >> 0x1bU))))) 
                            | (0x2bU == (0x3fU & ((
                                                   vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                   << 5U) 
                                                  | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                     >> 0x1bU)))))
                            ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data
                            : ((((0x2cU == (0x3fU & 
                                            ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                              << 5U) 
                                             | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                >> 0x1bU)))) 
                                 | (0x2dU == (0x3fU 
                                              & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                  << 5U) 
                                                 | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                    >> 0x1bU))))) 
                                | (0x2eU == (0x3fU 
                                             & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                   >> 0x1bU)))))
                                ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U]
                                : 0U)));
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_status 
                    = ((0U != (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status))
                        ? (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status)
                        : ((0x31U == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                << 5U) 
                                               | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                  >> 0x1bU))))
                            ? 4U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__fetch_misaligned)
                                     ? 2U : 0U)));
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U];
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U];
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U];
            } else {
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc 
                    = ((IData)(4U) + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc);
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding = 0ULL;
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_source_data = 0U;
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_status 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status;
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U] = 0U;
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] = 0x90000000U;
                __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U] = 0U;
            }
        }
        if ((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))) {
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_pc = 0U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data = 0U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data = 0U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_status = 1U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U] = 0U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] = 0x90000000U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] = 0U;
        } else if ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))) {
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc;
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data;
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data;
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_status 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status;
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U] 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U];
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U];
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U];
        } else {
            __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc;
            if ((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_status_in))) {
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_selected;
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_selected;
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_status 
                    = ((0x31U == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                            << 5U) 
                                           | (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                              >> 0x1bU))))
                        ? 4U : ((0x27U == (0x3fU & 
                                           ((vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0x1bU))))
                                 ? 9U : ((0x28U == 
                                          (0x3fU & 
                                           ((vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0x1bU))))
                                          ? 0xaU : 0U)));
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U];
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U];
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U];
            } else {
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data = 0U;
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data = 0U;
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_status 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__decode_status_in;
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U] = 0U;
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] = 0x90000000U;
                __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] = 0U;
            }
        }
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_pc;
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data;
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data;
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_status;
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U] 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U];
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U];
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U];
        if (((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding 
                      >> 0x25U)) & (0U != (0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding))))) {
            __Vdlyvval__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding 
                           >> 5U));
            __Vdlyvset__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 = 1U;
            __Vdlyvdim0__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32 
                = (0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding));
        }
    }
    if (__Vdlyvset__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v0) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[1U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[2U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[3U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[4U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[5U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[6U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[7U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[8U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[9U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xaU] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xbU] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xcU] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xdU] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xeU] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0xfU] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x10U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x11U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x12U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x13U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x14U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x15U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x16U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x17U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x18U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x19U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1aU] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1bU] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1cU] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1dU] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1eU] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[__Vdlyvdim0__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32] 
            = __Vdlyvval__tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs__v32;
    }
    if (vlSelf->tb_top_cpu__DOT__rst) {
        __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction = 0x13U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_pc = 0x40000U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status = 1U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_pc;
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid;
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_status 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status;
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction;
        __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus;
        vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso = 0U;
    } else {
        if ((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in))) {
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction = 0x13U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in;
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status = 1U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid = 0U;
        } else if ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in))) {
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction;
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc;
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_status;
            if (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid) 
                 & (~ (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response)))) {
                __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid = 1U;
            }
        } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid) {
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr;
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc;
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status;
            __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid = 0U;
        } else if (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid) 
                    & (~ (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response)))) {
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc;
            if (vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.err) {
                __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction = 0x13U;
                __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status = 3U;
            } else {
                __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                    = vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.dat_miso;
                __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status = 0U;
            }
        } else {
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc;
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction = 0x13U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status = 1U;
        }
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_pc;
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid;
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_status 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_status;
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__if_id_instruction;
        if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken) {
            __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
                = ((0xffffff7fU & __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus) 
                   | (0x80U & (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
                               << 4U)));
            __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
                = (0xfffffff7U & __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus);
        } else if (((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status)) 
                    & (0x2fU == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                           >> 0x1bU)))))) {
            __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
                = ((0xfffffff7U & __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus) 
                   | (8U & (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
                            >> 4U)));
            __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
                = (0x80U | __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus);
        } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_enable) {
            if ((0x300U == (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data;
            }
        }
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
            = __Vdly__tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus;
        if (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_cyc_comb) 
             & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_stb_comb))) {
            vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                = ((0x2000U > ((IData)(3U) + vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb))
                    ? ((vlSelf->tb_top_cpu__DOT__dmem
                        [(0x1fffU & ((IData)(3U) + vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb))] 
                        << 0x18U) | ((vlSelf->tb_top_cpu__DOT__dmem
                                      [(0x1fffU & ((IData)(2U) 
                                                   + vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb))] 
                                      << 0x10U) | (
                                                   (vlSelf->tb_top_cpu__DOT__dmem
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb))] 
                                                    << 8U) 
                                                   | vlSelf->tb_top_cpu__DOT__dmem
                                                   [
                                                   (0x1fffU 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb)])))
                    : 0U);
        }
    }
    if (__Vdlyvset__tb_top_cpu__DOT__dmem__v0) {
        vlSelf->tb_top_cpu__DOT__dmem[__Vdlyvdim0__tb_top_cpu__DOT__dmem__v0] 
            = __Vdlyvval__tb_top_cpu__DOT__dmem__v0;
    }
    if (__Vdlyvset__tb_top_cpu__DOT__dmem__v1) {
        vlSelf->tb_top_cpu__DOT__dmem[__Vdlyvdim0__tb_top_cpu__DOT__dmem__v1] 
            = __Vdlyvval__tb_top_cpu__DOT__dmem__v1;
    }
    if (__Vdlyvset__tb_top_cpu__DOT__dmem__v2) {
        vlSelf->tb_top_cpu__DOT__dmem[__Vdlyvdim0__tb_top_cpu__DOT__dmem__v2] 
            = __Vdlyvval__tb_top_cpu__DOT__dmem__v2;
    }
    if (__Vdlyvset__tb_top_cpu__DOT__dmem__v3) {
        vlSelf->tb_top_cpu__DOT__dmem[__Vdlyvdim0__tb_top_cpu__DOT__dmem__v3] 
            = __Vdlyvval__tb_top_cpu__DOT__dmem__v3;
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_system_or_csr = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__forward_valid_comb = 0U;
    if (((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status)) 
         & (0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                            >> 0x16U))))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__forward_valid_comb 
            = (1U & ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U])
                      ? (IData)(((0U == (0xc0000000U 
                                         & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) 
                                 & ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                        >> 0x1dU)) 
                                    | (IData)((0U == 
                                               (0x18000000U 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U]))))))
                      : ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                          >> 0x1fU) ? (IData)((0U != 
                                               (0x70000000U 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])))
                          : (IData)((0U == (0x60000000U 
                                            & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U]))))));
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_target 
        = (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
           + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U]);
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_fence_i = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch 
        = ((~ vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U]) 
           & ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                  >> 0x1fU)) & ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                 ? (IData)(((0U == 
                                             (0x30000000U 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) 
                                            & ((0x8000000U 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                                ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                                                   >= vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data)
                                                : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                                                   < vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data))))
                                 : ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                     >> 0x1dU) & ((0x10000000U 
                                                   & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                                   ? 
                                                  ((0x8000000U 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data, vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data, vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data))
                                                   : 
                                                  ((0x8000000U 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                                    ? 
                                                   (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                                                    != vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data)
                                                    : 
                                                   (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                                                    == vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data)))))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch = 0U;
    if ((1U & (~ vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U]))) {
        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                    if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load = 1U;
                        }
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load = 1U;
                    }
                } else if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load = 1U;
                }
                if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch = 1U;
                    }
                }
            } else if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch = 1U;
            }
            if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                        if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr = 1U;
                        }
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump = 1U;
                    }
                }
            }
        }
        if ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store = 1U;
                    }
                }
            }
            if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
                        }
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
                    }
                }
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        } else if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
            if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                    if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store = 1U;
                    }
                }
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
            } else if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        } else if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                             >> 0x1dU)))) {
            if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
                }
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        }
    }
    __Vtableidx2 = (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type 
        = Vtb_top_cpu__ConstPool__TABLE_h1e7fd68f_0
        [__Vtableidx2];
    __Vtableidx1 = (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction);
    vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_type 
        = Vtb_top_cpu__ConstPool__TABLE_h1e7fd68f_0
        [__Vtableidx1];
    tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
        = (0x188000U | ((0x7c00U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                    << 3U)) | ((0x3e0U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0xaU)) 
                                               | (0x1fU 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x14U)))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm)
            ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U]
            : vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data);
    if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U])) {
        if ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_system_or_csr = 1U;
                        }
                    }
                }
            }
            if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = 0U;
            } else if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = 0U;
            } else if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = 0U;
            } else if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = 0U;
            }
        } else {
            if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_system_or_csr = 1U;
            } else if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                    if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_system_or_csr = 1U;
                    }
                } else if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_system_or_csr = 1U;
                }
            }
            if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                    if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = 3U;
                        }
                    }
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op 
                        = ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                            ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                ? 4U : 8U) : ((0x8000000U 
                                               & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                               ? 7U
                                               : 5U));
                }
            }
        }
        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                    if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
                        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_fence_i = 1U;
                        }
                    }
                }
            }
        }
    } else if ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                >> 0x1fU)) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op 
            = ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                ? ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                    ? ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                            ? 0xaU : 9U) : ((0x8000000U 
                                             & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                             ? 6U : 2U))
                    : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                            ? 0U : 8U) : ((0x8000000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                           ? 7U : 6U)))
                : ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                    ? ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                            ? 3U : 4U) : ((0x8000000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                           ? 5U : 0xaU))
                    : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                            ? 9U : 0U) : 0U)));
    } else if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op 
            = ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                ? 0U : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                         ? 0U : 0xaU));
    } else if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op 
            = ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                ? 9U : 2U);
    } else if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                         >> 0x1cU)))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = 1U;
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_or_jump_redirect 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_fence_i) 
           | ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump) 
              | ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                 & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__next_pc_comb 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_fence_i)
            ? ((IData)(4U) + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc)
            : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump)
                ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr)
                    ? (0xfffffffeU & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                                      + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U]))
                    : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_target)
                : (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                    & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch))
                    ? vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_target
                    : ((IData)(4U) + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out 
        = ((4U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
            ? ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                ? 0U : ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                         ? 0U : (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                ? ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                    ? (0xfffff000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                    : (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 7U)))))))
                : ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                    ? (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                          >> 0x14U)))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_out 
        = ((4U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_type))
            ? ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_type))
                ? 0U : ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_type))
                         ? 0U : (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_type))
                ? ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_type))
                    ? (0xfffff000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                    : (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 7U)))))))
                : ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_type))
                    ? (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                          >> 0x14U)))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result 
        = ((8U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
            ? ((4U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                ? 0U : ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                         ? ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                             ? 0U : ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                                      < vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2)
                                      ? 1U : 0U)) : 
                        ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                          ? (VL_LTS_III(32, vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data, vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2)
                              ? 1U : 0U) : VL_SHIFTRS_III(32,32,5, vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data, 
                                                          (0x1fU 
                                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2)))))
            : ((4U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                ? ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                           >> (0x1fU & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2))
                        : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                           << (0x1fU & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2)))
                    : ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                           ^ vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2)
                        : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                           | vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2)))
                : ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                           & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2)
                        : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                           - vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2))
                    : ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                        ? vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2
                        : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                           + vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2)))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value_comb 
        = ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U])
            ? ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                >> 0x1fU) ? ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                              ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                  ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                              : ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                  ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                      ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                                  : ((0x10000000U & 
                                      vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                      ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                          ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                                      : ((0x8000000U 
                                          & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                          ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                              ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                                          : 0U)))) : 
               ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                 ? 0U : ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                          ? ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                              ? 0U : ((0x8000000U & 
                                       vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                       ? 0U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                                ? 0U
                                                : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)))
                          : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                              ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result))))
            : ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                >> 0x1fU) ? ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                              ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                  ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                              : ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                  ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                      ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                                  : ((0x10000000U & 
                                      vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                      ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                          ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                                      : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)))
                : ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                    ? ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                        ? vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result
                        : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                            ? vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result
                            : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)))
                    : ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                        ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                            ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                        : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                            ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                ? ((IData)(4U) + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc)
                                : ((IData)(4U) + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc))
                            : ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U])
                                ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                                   + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U])
                                : vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U]))))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__fetch_misaligned = 0U;
    if ((((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump) 
          | ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
             & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch))) 
         & (0U != (3U & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__next_pc_comb)))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__fetch_misaligned = 1U;
    }
    if (vlSelf->tb_top_cpu__DOT__rst) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_out = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mip = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtval = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mcause = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtvec = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mepc = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding = 0ULL;
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc = 0x40000U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr = 0x13U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[0U] = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U] = 0x90000000U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[2U] = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_store_data = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_sel = 0xfU;
        __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] = 0x90000000U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding = 0ULL;
        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status = 1U;
    } else {
        if ((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_out 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in;
            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out = 2U;
        } else if ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_out 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in;
            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out = 1U;
        } else {
            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_out 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__jump_address_comb;
            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__status_backwards_comb;
        }
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mip 
            = ((0xffffff7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mip) 
               | ((IData)(vlSelf->tb_top_cpu__DOT__timer_interrupt_in) 
                  << 7U));
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mip 
            = ((0xfffff7ffU & vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mip) 
               | ((IData)(vlSelf->tb_top_cpu__DOT__external_interrupt_in) 
                  << 0xbU));
        if ((1U & (~ (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken)))) {
            if ((1U & (~ ((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status)) 
                          & (0x2fU == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                                   >> 0x1bU)))))))) {
                if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_enable) {
                    if ((0x300U != (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                        if ((0x304U != (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                            if ((0x305U != (0xfffU 
                                            & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                                if ((0x341U != (0xfffU 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                                    if ((0x342U != 
                                         (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                                        if ((0x343U 
                                             != (0xfffU 
                                                 & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                                            if ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                                                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mip 
                                                    = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data;
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x305U == (0xfffU 
                                            & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtvec 
                                    = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data;
                            }
                        }
                        if ((0x304U == (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie 
                                = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data;
                        }
                    }
                }
            }
        }
        if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtval 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_tval;
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mcause 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_cause;
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mepc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc;
        } else if ((1U & (~ ((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status)) 
                             & (0x2fU == (0x3fU & (
                                                   (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                                      >> 0x1bU)))))))) {
            if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_enable) {
                if ((0x300U != (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                    if ((0x304U != (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                        if ((0x305U != (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                            if ((0x341U != (0xfffU 
                                            & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                                if ((0x342U != (0xfffU 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                                    if ((0x343U == 
                                         (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                                        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtval 
                                            = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data;
                                    }
                                }
                                if ((0x342U == (0xfffU 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mcause 
                                        = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data;
                                }
                            }
                            if ((0x341U == (0xfffU 
                                            & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))) {
                                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mepc 
                                    = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding 
            = (((QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_writes_rd_comb)) 
                << 0x25U) | (((QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_rd_data_comb)) 
                              << 5U) | (QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                                           >> 0x16U))))));
        if ((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in;
            vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr = 0x13U;
        } else if ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in))) {
            if (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid) 
                 & (~ (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response)))) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc;
                if (vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.err) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status = 3U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr = 0x13U;
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr 
                        = vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.dat_miso;
                }
            }
        }
        if ((2U == ((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                             ? 2U : 0U)) ? 2U : 0U))) {
            if ((1U != (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state))) {
                __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state = 0U;
            }
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] = 0x90000000U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding = 0ULL;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status = 1U;
        } else if ((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state))) {
            if ((0U != (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status))) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U] = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] = 0x90000000U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding = 0ULL;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status;
            } else if (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__valid_memory_op) 
                        & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__access_misaligned))) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U];
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U];
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U];
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding = 0ULL;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status 
                    = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load)
                        ? 5U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store)
                                 ? 7U : 0U));
            } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__launch_memory_op) {
                __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[0U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U];
                __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U];
                __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[2U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U];
                __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data;
                __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data;
                vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_store_data 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__store_data_comb;
                __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc;
                __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc;
                vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_sel 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb;
                __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load;
                vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store;
                if (((IData)(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.ack) 
                     | (IData)(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.err))) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data 
                        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data;
                    if (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.err) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data 
                            = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status 
                            = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load)
                                ? 6U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store)
                                         ? 8U : 0U));
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data 
                            = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load)
                                ? vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb
                                : vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data);
                        vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status = 0U;
                    }
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U] 
                        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U];
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U];
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U];
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc 
                        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc 
                        = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding 
                        = ((0x1fffffffffULL & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding) 
                           | ((QData)((IData)((((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load) 
                                                & (~ (IData)(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.err))) 
                                               & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                                                      >> 0x16U)))))) 
                              << 0x25U));
                    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state = 2U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding 
                        = ((0x2000000000ULL & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding) 
                           | (((QData)((IData)(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load)
                                                 ? vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb
                                                 : 0U))) 
                               << 5U) | (QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                                                            >> 0x16U))))));
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] = 0x90000000U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding = 0ULL;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status = 1U;
                    __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state = 1U;
                }
            } else if (((~ (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0)) 
                        & (0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status)))) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U];
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U];
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U];
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding 
                    = ((0x1fULL & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding) 
                       | (((QData)((IData)((0U != (0x1fU 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                                                      >> 0x16U))))) 
                           << 0x25U) | ((QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)) 
                                        << 5U)));
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding 
                    = ((0x3fffffffe0ULL & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding) 
                       | (IData)((IData)((0x1fU & (
                                                   vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                                                   >> 0x16U)))));
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U] = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] = 0x90000000U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding = 0ULL;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status = 1U;
            }
        } else if ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding = 0ULL;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status = 1U;
            if (((IData)(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.ack) 
                 | (IData)(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.err))) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data;
                if (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.err) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data 
                        = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status 
                        = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_fault_status_comb;
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data 
                        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load)
                            ? vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_load_value_comb
                            : vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr);
                    vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status = 0U;
                }
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc;
                __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state = 2U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[0U];
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U];
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[2U];
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding 
                    = ((0x1fffffffffULL & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding) 
                       | ((QData)((IData)((((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load) 
                                            & (~ (IData)(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.err))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U] 
                                                  >> 0x16U)))))) 
                          << 0x25U));
                vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding 
                    = ((0x2000000000ULL & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding) 
                       | (((QData)((IData)(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load)
                                             ? vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_load_value_comb
                                             : 0U))) 
                           << 5U) | (QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U] 
                                                        >> 0x16U))))));
            }
        } else if ((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] = 0x90000000U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding = 0ULL;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status = 1U;
            __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state = 0U;
        } else {
            __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] = 0x90000000U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding = 0ULL;
            vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status = 1U;
        }
    }
    vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.err = (
                                                   (~ (IData)(vlSelf->tb_top_cpu__DOT__rst)) 
                                                   & (((IData)(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.cyc) 
                                                       & (IData)(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.stb)) 
                                                      & (0x40600U 
                                                         == vlSelf->tb_top_cpu__DOT__fetch_pc_byte)));
    if (vlSelf->tb_top_cpu__DOT__rst) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response = 0U;
        vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.dat_miso = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state = 0U;
        vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.cyc = 0U;
        vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.stb = 0U;
        vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.adr = 0U;
        __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc = 0x40000U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc = 0x40000U;
    } else {
        if ((((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in)) 
              & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state)) 
             & (~ (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid)))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response = 1U;
        } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response = 0U;
        }
        if (((IData)(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.cyc) 
             & (IData)(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.stb))) {
            vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.dat_miso 
                = (((0x40000U <= vlSelf->tb_top_cpu__DOT__fetch_pc_byte) 
                    & (0x800U > vlSelf->tb_top_cpu__DOT__fetch_word_index))
                    ? vlSelf->tb_top_cpu__DOT__imem
                   [(0x7ffU & vlSelf->tb_top_cpu__DOT__fetch_word_index)]
                    : 0x13U);
        }
        if ((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in))) {
            __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in;
        }
        if (vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state) {
            if (vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state) {
                vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.cyc = 1U;
                vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.stb = 1U;
                if (vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid) {
                    vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.cyc = 0U;
                    vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.stb = 0U;
                    __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state = 0U;
                }
            } else {
                __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state = 0U;
                vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.cyc = 0U;
                vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.stb = 0U;
            }
        } else {
            vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.cyc = 0U;
            vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.stb = 0U;
            if (vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__can_request) {
                vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.cyc = 1U;
                vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.stb = 1U;
                vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.adr 
                    = (vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc 
                       >> 2U);
                __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc;
                __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc 
                    = ((IData)(4U) + vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc);
            }
        }
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                     >> 0x14U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
        = ((tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
            << 0xcU) | (IData)(((((QData)((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0x14U))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out))) 
                                >> 0x20U)));
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
        = (tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
           >> 0x14U);
    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                     >> 0x14U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_out))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
        = ((tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
            << 0xcU) | (IData)(((((QData)((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0x14U))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_out))) 
                                >> 0x20U)));
    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] 
        = (tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
           >> 0x14U);
    if ((0x40U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
        if ((0x20U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
            if ((0x10U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                if ((8U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                } else if ((4U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                } else if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                        if ((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                          >> 0xcU)))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xf801ffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                                   | (((0U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0x14U))
                                        ? 0x27U : (
                                                   (1U 
                                                    == 
                                                    (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x28U
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 0x14U))
                                                     ? 0x2fU
                                                     : 
                                                    ((0x105U 
                                                      == 
                                                      (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0x14U))
                                                      ? 0x30U
                                                      : 0x31U)))) 
                                      << 0x1bU));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                = (1U & (((0U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x14U))
                                           ? 0x27U : 
                                          ((1U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0x14U))
                                            ? 0x28U
                                            : ((0x302U 
                                                == 
                                                (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                 >> 0x14U))
                                                ? 0x2fU
                                                : (
                                                   (0x105U 
                                                    == 
                                                    (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x30U
                                                    : 0x31U)))) 
                                         >> 5U));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                = (0xf801ffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]) 
                                   | (((0U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0x14U))
                                        ? 0x27U : (
                                                   (1U 
                                                    == 
                                                    (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x28U
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 0x14U))
                                                     ? 0x2fU
                                                     : 
                                                    ((0x105U 
                                                      == 
                                                      (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0x14U))
                                                      ? 0x30U
                                                      : 0x31U)))) 
                                      << 0x1bU));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] 
                                = (1U & (((0U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x14U))
                                           ? 0x27U : 
                                          ((1U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0x14U))
                                            ? 0x28U
                                            : ((0x302U 
                                                == 
                                                (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                 >> 0x14U))
                                                ? 0x2fU
                                                : (
                                                   (0x105U 
                                                    == 
                                                    (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x30U
                                                    : 0x31U)))) 
                                         >> 5U));
                        } else if ((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                            if ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                                if ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0x70000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0xfU));
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                        = (0x70000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0xfU));
                                } else {
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0x68000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0xfU));
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                        = (0x68000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0xfU));
                                }
                            } else if ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    = (0x60000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    = (0xffc1ffffU 
                                       & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                    = (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                >> 0xfU));
                                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                    = (0x60000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                    = (0xffc1ffffU 
                                       & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] 
                                    = (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                >> 0xfU));
                            } else {
                                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    = (0x88000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                    = (0x88000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                            }
                        } else {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                                   | (((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                        ? ((0x1000U 
                                            & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                            ? 0x2bU
                                            : 0x2aU)
                                        : ((0x1000U 
                                            & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                            ? 0x29U
                                            : 0x31U)) 
                                      << 0x1bU));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                = (1U & (((0x2000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                           ? ((0x1000U 
                                               & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                               ? 0x2bU
                                               : 0x2aU)
                                           : ((0x1000U 
                                               & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                               ? 0x29U
                                               : 0x31U)) 
                                         >> 5U));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]) 
                                   | (((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                        ? ((0x1000U 
                                            & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                            ? 0x2bU
                                            : 0x2aU)
                                        : ((0x1000U 
                                            & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                            ? 0x29U
                                            : 0x31U)) 
                                      << 0x1bU));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] 
                                = (1U & (((0x2000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                           ? ((0x1000U 
                                               & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                               ? 0x2bU
                                               : 0x2aU)
                                           : ((0x1000U 
                                               & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                               ? 0x29U
                                               : 0x31U)) 
                                         >> 5U));
                        }
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((8U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                if ((4U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                        if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0x10000000U | (0x7ffffffU 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xffc00fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                = (0x10000000U | (0x7ffffffU 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 0U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                = (0xffc00fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                        } else {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0x88000000U | (0xfffU 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                = (0x88000000U | (0xfffU 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                        }
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((4U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                               | (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                 >> 0xcU)))
                                    ? 3U : 0x31U) << 0x1bU));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                            = (1U & (((0U == (7U & 
                                              (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 3U : 0x31U) 
                                     >> 5U));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]) 
                               | (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                 >> 0xcU)))
                                    ? 3U : 0x31U) << 0x1bU));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] 
                            = (1U & (((0U == (7U & 
                                              (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 3U : 0x31U) 
                                     >> 5U));
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0xf83fffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                    ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                     ? 7U : 6U)) : 
                               ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                 ? 0x31U : ((0x1000U 
                                             & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                             ? 5U : 4U))) 
                              << 0x1bU));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                   ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                       ? ((0x1000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                           ? 9U : 8U)
                                       : ((0x1000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                           ? 7U : 6U))
                                   : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                       ? 0x31U : ((0x1000U 
                                                   & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                                   ? 5U
                                                   : 4U))) 
                                 >> 5U));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0xf83fffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]) 
                           | (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                    ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                     ? 7U : 6U)) : 
                               ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                 ? 0x31U : ((0x1000U 
                                             & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                             ? 5U : 4U))) 
                              << 0x1bU));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] 
                        = (1U & (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                   ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                       ? ((0x1000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                           ? 9U : 8U)
                                       : ((0x1000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                           ? 7U : 6U))
                                   : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                       ? 0x31U : ((0x1000U 
                                                   & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                                   ? 5U
                                                   : 4U))) 
                                 >> 5U));
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((0x20U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
        if ((0x10U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
            if ((8U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
            } else if ((4U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xffc00fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = (0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 0U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = (0xffc00fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | ((((((((((0U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU)))) 
                                      | (0x100U == 
                                         ((0x3f8U & 
                                           (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0x16U)) 
                                          | (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                     | (1U == ((0x3f8U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (2U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (3U == ((0x3f8U 
                                              & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                  | (4U == ((0x3f8U 
                                             & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                >> 0xcU))))) 
                                 | (5U == ((0x3f8U 
                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0xcU))))) 
                                | (0x105U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU)))))
                                ? ((0U == ((0x3f8U 
                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x1bU : ((0x100U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x1cU
                                                : (
                                                   (1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                : ((6U == ((0x3f8U 
                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x23U : ((7U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x24U
                                                : 0x31U))) 
                              << 0x1bU));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & ((((((((((0U == ((0x3f8U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU)))) 
                                         | (0x100U 
                                            == ((0x3f8U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                        | (1U == ((0x3f8U 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                        >> 0xcU))))) 
                                       | (2U == ((0x3f8U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU))))) 
                                      | (3U == ((0x3f8U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                     | (4U == ((0x3f8U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (5U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (0x105U == ((0x3f8U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU)))))
                                   ? ((0U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x1bU : ((0x100U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x1cU
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                   : ((6U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x23U : ((7U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x24U
                                                   : 0x31U))) 
                                 >> 5U));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]) 
                           | ((((((((((0U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU)))) 
                                      | (0x100U == 
                                         ((0x3f8U & 
                                           (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0x16U)) 
                                          | (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                     | (1U == ((0x3f8U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (2U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (3U == ((0x3f8U 
                                              & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                  | (4U == ((0x3f8U 
                                             & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                >> 0xcU))))) 
                                 | (5U == ((0x3f8U 
                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0xcU))))) 
                                | (0x105U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU)))))
                                ? ((0U == ((0x3f8U 
                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x1bU : ((0x100U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x1cU
                                                : (
                                                   (1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                : ((6U == ((0x3f8U 
                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x23U : ((7U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x24U
                                                : 0x31U))) 
                              << 0x1bU));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] 
                        = (1U & ((((((((((0U == ((0x3f8U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU)))) 
                                         | (0x100U 
                                            == ((0x3f8U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                        | (1U == ((0x3f8U 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                        >> 0xcU))))) 
                                       | (2U == ((0x3f8U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU))))) 
                                      | (3U == ((0x3f8U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                     | (4U == ((0x3f8U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (5U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (0x105U == ((0x3f8U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU)))))
                                   ? ((0U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x1bU : ((0x100U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x1cU
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                   : ((6U == ((0x3f8U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x23U : ((7U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x24U
                                                   : 0x31U))) 
                                 >> 5U));
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else if ((8U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
        } else if ((4U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
        } else if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
            if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0xf83fffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                       | (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                         >> 0xcU)))
                            ? 0xfU : ((1U == (7U & 
                                              (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 0x10U : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU)))
                                                   ? 0x11U
                                                   : 0x31U))) 
                          << 0x1bU));
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                    = (1U & (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0xcU)))
                               ? 0xfU : ((1U == (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU)))
                                          ? 0x10U : 
                                         ((2U == (7U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0xcU)))
                                           ? 0x11U : 0x31U))) 
                             >> 5U));
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                    = (0xf83fffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                    = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]) 
                       | (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                         >> 0xcU)))
                            ? 0xfU : ((1U == (7U & 
                                              (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 0x10U : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                       >> 0xcU)))
                                                   ? 0x11U
                                                   : 0x31U))) 
                          << 0x1bU));
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] 
                    = (1U & (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0xcU)))
                               ? 0xfU : ((1U == (7U 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                    >> 0xcU)))
                                          ? 0x10U : 
                                         ((2U == (7U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                     >> 0xcU)))
                                           ? 0x11U : 0x31U))) 
                             >> 5U));
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((0x10U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
        if ((8U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
        } else if ((4U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
            if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x8000000U | (0x7ffffffU 
                                         & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0xffc00fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x8000000U | (0x7ffffffU 
                                         & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0xffc00fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
            if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0xfffe0fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                    = (0xfffe0fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                if ((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    if ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                               | (((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                    ? 0x17U : 0x16U) 
                                  << 0x1bU));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                            = (1U & (((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                       ? 0x17U : 0x16U) 
                                     >> 5U));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]) 
                               | (((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                    ? 0x17U : 0x16U) 
                                  << 0x1bU));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] 
                            = (1U & (((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                       ? 0x17U : 0x16U) 
                                     >> 5U));
                    } else if ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                        if ((0U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                    >> 0x19U))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xc8000000U | (0x7ffffffU 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0x14U));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                = (0xc8000000U | (0x7ffffffU 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 0U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0x14U));
                        } else if ((0x20U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                              >> 0x19U))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xd0000000U | (0x7ffffffU 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0x14U));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                = (0xd0000000U | (0x7ffffffU 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 0U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                            >> 0x14U));
                        } else {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0x88000000U | (0x7ffffffU 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                = (0x88000000U | (0x7ffffffU 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                        }
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xa8000000U | (0x7ffffffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = (0xa8000000U | (0x7ffffffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 0U;
                    }
                } else if ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | (((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                ? 0x14U : 0x13U) << 0x1bU));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & (((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                   ? 0x14U : 0x13U) 
                                 >> 5U));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]) 
                           | (((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                ? 0x14U : 0x13U) << 0x1bU));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] 
                        = (1U & (((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                   ? 0x14U : 0x13U) 
                                 >> 5U));
                } else if ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    if ((0U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                >> 0x19U))) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xc0000000U | (0x7ffffffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] 
                            = (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                        >> 0x14U));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = (0xc0000000U | (0x7ffffffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 0U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] 
                            = (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                        >> 0x14U));
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0x7ffffffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0x7ffffffU 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                    }
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x90000000U | (0x7ffffffU 
                                          & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x90000000U | (0x7ffffffU 
                                          & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 0U;
                }
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((8U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
        if ((4U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
            if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0xf8000fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                             >> 0xcU)))
                                ? 0x25U : ((1U == (7U 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 0xcU)))
                                            ? 0x26U
                                            : 0x31U)) 
                              << 0x1bU));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                >> 0xcU)))
                                   ? 0x25U : ((1U == 
                                               (7U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0xcU)))
                                               ? 0x26U
                                               : 0x31U)) 
                                 >> 5U));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0xf8000fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]) 
                           | (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                             >> 0xcU)))
                                ? 0x25U : ((1U == (7U 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                      >> 0xcU)))
                                            ? 0x26U
                                            : 0x31U)) 
                              << 0x1bU));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] 
                        = (1U & (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                >> 0xcU)))
                                   ? 0x25U : ((1U == 
                                               (7U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                                   >> 0xcU)))
                                               ? 0x26U
                                               : 0x31U)) 
                                 >> 5U));
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((4U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
    } else if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
        if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0xfffe0fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]);
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                   | (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                        ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                            ? 0x31U : ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                        ? 0xeU : 0xdU))
                        : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                            ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                ? 0x31U : 0xcU) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                                    ? 0xbU
                                                    : 0xaU))) 
                      << 0x1bU));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] 
                = (1U & (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                           ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                               ? 0x31U : ((0x1000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                           ? 0xeU : 0xdU))
                           : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                               ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                   ? 0x31U : 0xcU) : 
                              ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                ? 0xbU : 0xaU))) >> 5U));
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                = (0xfffe0fffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]);
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]) 
                   | (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                        ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                            ? 0x31U : ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                        ? 0xeU : 0xdU))
                        : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                            ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                ? 0x31U : 0xcU) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                                    ? 0xbU
                                                    : 0xaU))) 
                      << 0x1bU));
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] 
                = (1U & (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                           ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                               ? 0x31U : ((0x1000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                           ? 0xeU : 0xdU))
                           : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                               ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                   ? 0x31U : 0xcU) : 
                              ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)
                                ? 0xbU : 0xaU))) >> 5U));
        } else {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]));
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U] = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U] = 0U;
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc;
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc = __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_pc;
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[0U] 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[0U];
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U] 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U];
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[2U] 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[2U];
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr;
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_source_data;
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state;
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_status;
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U] 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U];
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U];
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U] 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U];
    if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[2U])) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used 
            = (1U & ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U])
                                        ? ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x18000000U 
                                                       & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]))))
                                        : ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U])))))));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used 
            = (1U & (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U])) 
                             & ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U])))))));
    } else {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used 
            = (1U & (IData)(((0U != (0xe0000000U & 
                                     vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U])) 
                             | (0x18000000U == (0x18000000U 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U])))));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used 
            = (1U & ((vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                      >> 0x1fU) ? ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U])
                                    ? ((vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        >> 0x1dU) | (IData)(
                                                            (0x18000000U 
                                                             == 
                                                             (0x18000000U 
                                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]))))
                                    : (IData)((0U == 
                                               (0x30000000U 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U]))))
                      : ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U])
                          ? ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U])
                              ? (IData)((0x18000000U 
                                         == (0x18000000U 
                                             & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U])))
                              : (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x1cU))) : (
                                                   vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                                   >> 0x1dU))));
    }
    if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U])) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs2_used 
            = (1U & (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U])) 
                             & ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U])))))));
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs1_used 
            = (1U & ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U])
                                        ? ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x18000000U 
                                                       & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]))))
                                        : ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U])))))));
    } else {
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs2_used 
            = (1U & ((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                      >> 0x1fU) ? ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U])
                                    ? ((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                        >> 0x1dU) | (IData)(
                                                            (0x18000000U 
                                                             == 
                                                             (0x18000000U 
                                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]))))
                                    : (IData)((0U == 
                                               (0x30000000U 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U]))))
                      : ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U])
                          ? ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U])
                              ? (IData)((0x18000000U 
                                         == (0x18000000U 
                                             & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U])))
                              : (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                    >> 0x1cU))) : (
                                                   vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U] 
                                                   >> 0x1dU))));
        vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs1_used 
            = (1U & (IData)(((0U != (0xe0000000U & 
                                     vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U])) 
                             | (0x18000000U == (0x18000000U 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U])))));
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_fault_status_comb 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load)
            ? 6U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store)
                     ? 8U : 0U));
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_load_value_comb 
        = ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[2U])
            ? vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso
            : ((vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U] 
                >> 0x1fU) ? vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso
                : ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                    ? ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                        ? ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                            ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                                ? vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso
                                : ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr)
                                    ? (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                       >> 0x10U) : 
                                   (0xffffU & vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso)))
                            : ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                                ? ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr)
                                    ? ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr)
                                        ? (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                           >> 0x18U)
                                        : (0xffU & 
                                           (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                            >> 0x10U)))
                                    : ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr)
                                        ? (0xffU & 
                                           (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                            >> 8U))
                                        : (0xffU & vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso)))
                                : vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso))
                        : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                            ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                                ? ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr)
                                    ? (((- (IData)(
                                                   (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                                    >> 0x1fU))) 
                                        << 0x10U) | 
                                       (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                        >> 0x10U)) : 
                                   (((- (IData)((1U 
                                                 & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                                    >> 0xfU)))) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso)))
                                : ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr)
                                    ? ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr)
                                        ? (((- (IData)(
                                                       (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                                        >> 0x1fU))) 
                                            << 8U) 
                                           | (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                              >> 0x18U))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                                           >> 0x17U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                                 >> 0x10U))))
                                    : ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                                           >> 0xfU)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                                 >> 8U)))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso)))))
                            : vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso))
                    : vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso)));
    vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.ack = ((~ (IData)(vlSelf->tb_top_cpu__DOT__rst)) 
                                                 & (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_cyc_comb) 
                                                     & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_stb_comb)) 
                                                    & (0x400U 
                                                       != vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb)));
    vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.err = ((~ (IData)(vlSelf->tb_top_cpu__DOT__rst)) 
                                                 & (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_cyc_comb) 
                                                     & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_stb_comb)) 
                                                    & (0x400U 
                                                       == vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb)));
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__store_data_comb 
        = ((0xfU == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U] 
                               << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                                         >> 0x1bU))))
            ? ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)
                ? ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)
                    ? (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data 
                       << 0x18U) : (0xff0000U & (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data 
                                                 << 0x10U)))
                : ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)
                    ? (0xff00U & (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data 
                                  << 8U)) : (0xffU 
                                             & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data)))
            : ((0x10U == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U] 
                                    << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                                              >> 0x1bU))))
                ? ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)
                    ? (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data 
                       << 0x10U) : (0xffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data))
                : vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data));
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__access_misaligned 
        = (1U & ((~ vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U]) 
                 & ((vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                     >> 0x1fU) ? (IData)(((0U == (0x70000000U 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) 
                                          & ((0x8000000U 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])
                                              ? (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data))
                                              : vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)))
                     : ((vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                         >> 0x1eU) & ((0x20000000U 
                                       & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])
                                       ? ((0x10000000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])
                                           ? ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                                                  >> 0x1bU)) 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)
                                           : ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                                                  >> 0x1bU)) 
                                              & (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data))))
                                       : (IData)(((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)))))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store = 0U;
    if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U])) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
            = vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store = 0U;
    } else if ((vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                >> 0x1fU)) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
            = vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso;
        if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 0U;
        } else if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 0U;
        } else if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 0U;
        } else {
            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb 
                = ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])
                    ? 0xfU : ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)
                               ? 0xcU : 3U));
        }
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store 
            = (IData)((0U == (0x70000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])));
    } else if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) {
        if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) {
            if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) {
                if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                        = vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb 
                        = ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)
                            ? ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)
                                ? 8U : 4U) : ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)
                                               ? 2U
                                               : 1U));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store = 1U;
                } else if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                        = (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                           >> 0x10U);
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 0xcU;
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                        = (0xffffU & vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso);
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 3U;
                }
                if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                              >> 0x1bU)))) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 1U;
                }
            } else {
                if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) {
                    if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)) {
                        if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                                = (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                   >> 0x18U);
                            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 8U;
                        } else {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                                = (0xffU & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                            >> 0x10U));
                            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 4U;
                        }
                    } else if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                            = (0xffU & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                        >> 8U));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 2U;
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                            = (0xffU & vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso);
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 1U;
                    }
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                        = vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
                }
                vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 1U;
            }
        } else {
            if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) {
                if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U])) {
                    if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                            = (((- (IData)((vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                             >> 0x10U));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 0xcU;
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                            = (((- (IData)((1U & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 3U;
                    }
                } else if ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)) {
                    if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                            = (((- (IData)((vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                            >> 0x1fU))) 
                                << 8U) | (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                          >> 0x18U));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 8U;
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                            = (((- (IData)((1U & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                                   >> 0x10U)));
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 4U;
                    }
                } else if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data)) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                        = (((- (IData)((1U & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                              >> 0xfU)))) 
                            << 8U) | (0xffU & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                               >> 8U)));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 2U;
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                        = (((- (IData)((1U & (vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso));
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 1U;
                }
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
                    = vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso;
                vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
            }
            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load 
                = (1U & (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                         >> 0x1cU));
            if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U] 
                          >> 0x1cU)))) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store = 0U;
            }
        }
    } else {
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb 
            = vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store = 0U;
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd_normal 
        = (1U & ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U])
                  ? (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])) 
                             & ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))))))
                  : ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                      >> 0x1fU) ? (IData)((0U != (0x70000000U 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])))
                      : ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                          ? ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                              ? (IData)((0x18000000U 
                                         != (0x18000000U 
                                             & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])))
                              : (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                 >> 0x1cU)) : (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                                  >> 0x1dU))))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data 
        = ((0x300U == (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))
            ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus
            : ((0x304U == (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))
                ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie
                : ((0x305U == (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))
                    ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtvec
                    : ((0x341U == (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))
                        ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mepc
                        : ((0x342U == (0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))
                            ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mcause
                            : ((0x343U == (0xfffU & 
                                           vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))
                                ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtval
                                : ((0x344U == (0xfffU 
                                               & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))
                                    ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mip
                                    : 0U)))))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__is_csr 
        = (IData)((((0x40000000U == (0xc0000000U & 
                                     vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])) 
                    & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U]) 
                   & ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                       ? (IData)((0x18000000U != (0x18000000U 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])))
                       : (IData)((0U != (0x18000000U 
                                         & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U]))))));
    if ((8U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))) {
        if ((4U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval = 0U;
        } else if ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause 
                = ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))
                    ? 0U : 3U);
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval = 0U;
        } else if ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause = 0xbU;
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval = 0U;
        } else {
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause = 7U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data;
        }
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__pipeline_exception 
            = (1U & ((~ ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status) 
                         >> 2U)) & (IData)((3U != (3U 
                                                   & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))))));
    } else {
        if ((4U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))) {
            if ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause 
                    = ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))
                        ? 6U : 5U);
                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data;
            } else if ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause = 4U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data;
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause = 2U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval = 0U;
            }
        } else if ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))) {
            if ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause = 1U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc;
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause = 0U;
                vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc;
            }
        } else {
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause = 0U;
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval = 0U;
        }
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__pipeline_exception 
            = (1U & (IData)((0U != (6U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status)))));
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_h8f4b082b__0 
        = ((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status)) 
           & (0x2fU == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                  << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_hc0a4638a__0 
        = ((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status)) 
           & (0x27U == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                  << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_hcb080270__0 
        = ((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status)) 
           & (0x28U == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                  << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_selected = 0U;
    if (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_selected 
            = ((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                >> 0x11U))) ? 0U : 
               vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs
               [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                          >> 0x11U))]);
        if ((((0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                               >> 0x11U))) & (IData)(
                                                     (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding 
                                                      >> 0x25U))) 
             & ((0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding)) 
                == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                             >> 0x11U))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_selected 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0x11U))) & (IData)(
                                                            (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding 
                                                             >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x11U))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_selected 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0x11U))) & (IData)(
                                                            (vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding 
                                                             >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x11U))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_selected 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding 
                           >> 5U));
        }
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_selected = 0U;
    if (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_selected 
            = ((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                >> 0xcU))) ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs
               [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                          >> 0xcU))]);
        if ((((0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                               >> 0xcU))) & (IData)(
                                                    (vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding 
                                                     >> 0x25U))) 
             & ((0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding)) 
                == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                             >> 0xcU))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_selected 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0xcU))) & (IData)(
                                                           (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding 
                                                            >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0xcU))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_selected 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0xcU))) & (IData)(
                                                           (vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding 
                                                            >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0xcU))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_selected 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding 
                           >> 5U));
        }
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard_raw = 0U;
    if ((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_status))) {
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_uses_rs2 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs2_used;
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_uses_rs1 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs1_used;
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_instr[0U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_instr[1U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_instr[2U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_valid 
            = (0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_instr[0U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_instr[1U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_instr[2U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__Vfuncout = 0U;
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1388__instr[0U] 
            = vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_instr[0U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1388__instr[1U] 
            = vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_instr[1U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1388__instr[2U] 
            = vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_instr[2U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1390__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1388__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1388__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1390__Vfuncout 
            = (1U & (IData)(((0x28U == (0x38U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1390__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1390__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1390__op_i))))
                                 : (((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1390__op_i) 
                                     >> 1U) | (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1390__op_i))))));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1389__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1388__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1388__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1389__Vfuncout 
            = (1U & (IData)(((8U == (0x38U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1389__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1389__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1389__op_i))))
                                 : ((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1389__op_i) 
                                    >> 1U)))));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1388__Vfuncout 
            = ((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1389__Vfuncout) 
               | (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1390__Vfuncout));
        if ((((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_valid) 
              & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1388__Vfuncout)) 
             & (0U != (0x1fU & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_instr[1U] 
                                >> 0x16U))))) {
            if (((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_uses_rs1) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_instr[1U] 
                              >> 0x11U)) == (0x1fU 
                                             & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_instr[1U] 
                                                >> 0x16U))))) {
                vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__Vfuncout = 1U;
            }
            if (((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_uses_rs2) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__consumer_instr[1U] 
                              >> 0xcU)) == (0x1fU & 
                                            (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__producer_instr[1U] 
                                             >> 0x16U))))) {
                vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__Vfuncout = 1U;
            }
        }
        if (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1387__Vfuncout) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard_raw = 1U;
        }
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_uses_rs2 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs2_used;
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_uses_rs1 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs1_used;
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_instr[0U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_instr[1U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_instr[2U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_valid 
            = (0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_instr[0U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[0U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_instr[1U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[1U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_instr[2U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction[2U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__Vfuncout = 0U;
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1392__instr[0U] 
            = vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_instr[0U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1392__instr[1U] 
            = vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_instr[1U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1392__instr[2U] 
            = vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_instr[2U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1394__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1392__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1392__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1394__Vfuncout 
            = (1U & (IData)(((0x28U == (0x38U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1394__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1394__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1394__op_i))))
                                 : (((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1394__op_i) 
                                     >> 1U) | (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1394__op_i))))));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1393__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1392__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1392__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1393__Vfuncout 
            = (1U & (IData)(((8U == (0x38U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1393__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1393__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1393__op_i))))
                                 : ((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1393__op_i) 
                                    >> 1U)))));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1392__Vfuncout 
            = ((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1393__Vfuncout) 
               | (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1394__Vfuncout));
        if ((((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_valid) 
              & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1392__Vfuncout)) 
             & (0U != (0x1fU & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_instr[1U] 
                                >> 0x16U))))) {
            if (((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_uses_rs1) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_instr[1U] 
                              >> 0x11U)) == (0x1fU 
                                             & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_instr[1U] 
                                                >> 0x16U))))) {
                vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__Vfuncout = 1U;
            }
            if (((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_uses_rs2) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__consumer_instr[1U] 
                              >> 0xcU)) == (0x1fU & 
                                            (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__producer_instr[1U] 
                                             >> 0x16U))))) {
                vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__Vfuncout = 1U;
            }
        }
        if (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1391__Vfuncout) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard_raw = 1U;
        }
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_uses_rs2 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs2_used;
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_uses_rs1 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs1_used;
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_instr[0U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[0U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_instr[1U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[1U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_instr[2U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction[2U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_valid 
            = (0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_instr[0U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[0U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_instr[1U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_instr[2U] 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__Vfuncout = 0U;
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1396__instr[0U] 
            = vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_instr[0U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1396__instr[1U] 
            = vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_instr[1U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1396__instr[2U] 
            = vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_instr[2U];
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1398__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1396__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1396__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1398__Vfuncout 
            = (1U & (IData)(((0x28U == (0x38U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1398__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1398__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1398__op_i))))
                                 : (((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1398__op_i) 
                                     >> 1U) | (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1398__op_i))))));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1397__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1396__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1396__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1397__Vfuncout 
            = (1U & (IData)(((8U == (0x38U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1397__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1397__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1397__op_i))))
                                 : ((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1397__op_i) 
                                    >> 1U)))));
        vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1396__Vfuncout 
            = ((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_load_op__1397__Vfuncout) 
               | (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_csr_op__1398__Vfuncout));
        if ((((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_valid) 
              & (IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__is_late_rd_producer__1396__Vfuncout)) 
             & (0U != (0x1fU & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_instr[1U] 
                                >> 0x16U))))) {
            if (((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_uses_rs1) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_instr[1U] 
                              >> 0x11U)) == (0x1fU 
                                             & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_instr[1U] 
                                                >> 0x16U))))) {
                vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__Vfuncout = 1U;
            }
            if (((IData)(vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_uses_rs2) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__consumer_instr[1U] 
                              >> 0xcU)) == (0x1fU & 
                                            (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__producer_instr[1U] 
                                             >> 0x16U))))) {
                vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__Vfuncout = 1U;
            }
        }
        if (vlSelf->__Vfunc_tb_top_cpu__DOT__dut__DOT__source_match_late_producer__1395__Vfuncout) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard_raw = 1U;
        }
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load) 
           | (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store));
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_enable = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data;
    if (((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status)) 
         & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__is_csr))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_enable 
            = (IData)((((0x40000000U == (0xc0000000U 
                                         & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])) 
                        & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U]) 
                       & ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                           ? ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                               ? ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                      >> 0x1bU)) & 
                                  (0U != vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data))
                               : ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                      >> 0x1bU)) | 
                                  (0U != vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data)))
                           : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                               ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                                   ? (0U != vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data)
                                   : (0U != vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data))
                               : (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                  >> 0x1bU)))));
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data 
            = ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U])
                ? ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                    >> 0x1fU) ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data
                    : ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                        ? ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                            ? ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                                ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                                    ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data
                                    : (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data 
                                       & (~ vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data)))
                                : ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                                    ? (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data 
                                       | vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data)
                                    : vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data))
                            : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                                ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                                    ? (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data 
                                       & (~ vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data))
                                    : (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data 
                                       | vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data))
                                : ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])
                                    ? vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data
                                    : vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data)))
                        : vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data))
                : vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data);
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc;
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state 
        = __Vdly__tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__valid_memory_op 
        = ((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status)) 
           & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0));
    vlSelf->tb_top_cpu__DOT__fetch_pc_byte = (vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.adr 
                                              << 2U);
    vlSelf->tb_top_cpu__DOT__fetch_word_index = ((vlSelf->tb_top_cpu__DOT__fetch_pc_byte 
                                                  - (IData)(0x40000U)) 
                                                 >> 2U);
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state) 
           & ((IData)(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.ack) 
              | (IData)(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.err)));
}
