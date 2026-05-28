// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_writeback_stage__Syms.h"


void Vtb_writeback_stage___024root__trace_chg_sub_0(Vtb_writeback_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_writeback_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_writeback_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_writeback_stage___024root*>(voidSelf);
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_writeback_stage___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_writeback_stage___024root__trace_chg_sub_0(Vtb_writeback_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_writeback_stage__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelf->tb_writeback_stage__DOT__source_data_in),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_writeback_stage__DOT__rd_data_in),32);
        bufp->chgWData(oldp+3,(vlSelf->tb_writeback_stage__DOT__instruction_in),65);
        bufp->chgIData(oldp+6,(vlSelf->tb_writeback_stage__DOT__program_counter_in),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_writeback_stage__DOT__next_program_counter_in),32);
        bufp->chgBit(oldp+8,(vlSelf->tb_writeback_stage__DOT__external_interrupt_in));
        bufp->chgBit(oldp+9,(vlSelf->tb_writeback_stage__DOT__timer_interrupt_in));
        bufp->chgCData(oldp+10,(vlSelf->tb_writeback_stage__DOT__status_forwards_in),4);
        bufp->chgIData(oldp+11,(vlSelf->tb_writeback_stage__DOT__pass_count),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_writeback_stage__DOT__fail_count),32);
        bufp->chgSData(oldp+13,((0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])),12);
        bufp->chgBit(oldp+14,((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))));
        bufp->chgBit(oldp+15,((0x2fU == (0x3fU & ((
                                                   vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                                   << 5U) 
                                                  | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                     >> 0x1bU))))));
        bufp->chgBit(oldp+16,((0x27U == (0x3fU & ((
                                                   vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                                   << 5U) 
                                                  | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                     >> 0x1bU))))));
        bufp->chgBit(oldp+17,((0x28U == (0x3fU & ((
                                                   vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                                   << 5U) 
                                                  | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                     >> 0x1bU))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+18,(vlSelf->tb_writeback_stage__DOT__dut__DOT__is_csr));
        bufp->chgIData(oldp+19,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data),32);
        bufp->chgIData(oldp+20,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data),32);
        bufp->chgBit(oldp+21,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_enable));
        bufp->chgBit(oldp+22,(vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd_normal));
        bufp->chgBit(oldp+23,(vlSelf->tb_writeback_stage__DOT__dut__DOT__pipeline_exception));
        bufp->chgIData(oldp+24,(vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause),32);
        bufp->chgIData(oldp+25,(vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval),32);
        bufp->chgBit(oldp+26,(vlSelf->tb_writeback_stage__DOT__dut__DOT__timer_interrupt_taken));
        bufp->chgBit(oldp+27,(vlSelf->tb_writeback_stage__DOT__dut__DOT__external_interrupt_taken));
        bufp->chgBit(oldp+28,(vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_taken));
        bufp->chgIData(oldp+29,(vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_cause),32);
        bufp->chgBit(oldp+30,(vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken));
        bufp->chgIData(oldp+31,(vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause),32);
        bufp->chgIData(oldp+32,(vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval),32);
        bufp->chgBit(oldp+33,(vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_taken));
        bufp->chgIData(oldp+34,(vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_address),32);
        bufp->chgBit(oldp+35,(vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_writes_rd_comb));
        bufp->chgIData(oldp+36,(vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_rd_data_comb),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgQData(oldp+37,(vlSelf->tb_writeback_stage__DOT__forwarding_out),38);
        bufp->chgCData(oldp+39,(vlSelf->tb_writeback_stage__DOT__status_backwards_out),2);
        bufp->chgIData(oldp+40,(vlSelf->tb_writeback_stage__DOT__jump_address_backwards_out),32);
        bufp->chgIData(oldp+41,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus),32);
        bufp->chgIData(oldp+42,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie),32);
        bufp->chgIData(oldp+43,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtvec),32);
        bufp->chgIData(oldp+44,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mepc),32);
        bufp->chgIData(oldp+45,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mcause),32);
        bufp->chgIData(oldp+46,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtval),32);
        bufp->chgIData(oldp+47,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mip),32);
        bufp->chgBit(oldp+48,((1U & (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
                                     >> 3U))));
        bufp->chgBit(oldp+49,((1U & (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie 
                                     >> 7U))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie 
                                     >> 0xbU))));
    }
    bufp->chgBit(oldp+51,(vlSelf->tb_writeback_stage__DOT__clk));
}

void Vtb_writeback_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_cleanup\n"); );
    // Init
    Vtb_writeback_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_writeback_stage___024root*>(voidSelf);
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
