// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_memory_stage__Syms.h"


void Vtb_memory_stage___024root__trace_chg_sub_0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_memory_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_memory_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_memory_stage___024root*>(voidSelf);
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_memory_stage___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_memory_stage___024root__trace_chg_sub_0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_memory_stage__DOT__source_data_in),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_memory_stage__DOT__rd_data_in),32);
        bufp->chgWData(oldp+2,(vlSelf->tb_memory_stage__DOT__instruction_in),65);
        bufp->chgIData(oldp+5,(vlSelf->tb_memory_stage__DOT__program_counter_in),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_memory_stage__DOT__next_program_counter_in),32);
        bufp->chgCData(oldp+7,(vlSelf->tb_memory_stage__DOT__status_forwards_in),4);
        bufp->chgCData(oldp+8,(vlSelf->tb_memory_stage__DOT__status_backwards_in),2);
        bufp->chgIData(oldp+9,(vlSelf->tb_memory_stage__DOT__jump_address_backwards_in),32);
        bufp->chgBit(oldp+10,(vlSelf->tb_memory_stage__DOT__force_error));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+11,(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load));
        bufp->chgBit(oldp+12,(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
        bufp->chgCData(oldp+13,(vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width),6);
        bufp->chgCData(oldp+14,(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_sel),4);
        bufp->chgIData(oldp+15,(vlSelf->tb_memory_stage__DOT__dut__DOT__load_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+16,(vlSelf->tb_memory_stage__DOT__source_data_reg_out),32);
        bufp->chgIData(oldp+17,(vlSelf->tb_memory_stage__DOT__rd_data_reg_out),32);
        bufp->chgWData(oldp+18,(vlSelf->tb_memory_stage__DOT__instruction_reg_out),65);
        bufp->chgIData(oldp+21,(vlSelf->tb_memory_stage__DOT__program_counter_reg_out),32);
        bufp->chgIData(oldp+22,(vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out),32);
        bufp->chgQData(oldp+23,(vlSelf->tb_memory_stage__DOT__forwarding_out),38);
        bufp->chgCData(oldp+25,(vlSelf->tb_memory_stage__DOT__status_forwards_out),4);
        bufp->chgCData(oldp+26,(vlSelf->tb_memory_stage__DOT__status_backwards_out),2);
        bufp->chgIData(oldp+27,(vlSelf->tb_memory_stage__DOT__jump_address_backwards_out),32);
        bufp->chgCData(oldp+28,(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state),2);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__tb_memory_stage__DOT__wb.adr),32);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__tb_memory_stage__DOT__wb.sel),4);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_mosi),32);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__tb_memory_stage__DOT__wb.cyc));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__tb_memory_stage__DOT__wb.stb));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__tb_memory_stage__DOT__wb.we));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+35,(vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso),32);
        bufp->chgBit(oldp+36,(vlSymsp->TOP__tb_memory_stage__DOT__wb.ack));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__tb_memory_stage__DOT__wb.err));
    }
    bufp->chgBit(oldp+38,(vlSelf->tb_memory_stage__DOT__clk));
    bufp->chgBit(oldp+39,(vlSelf->tb_memory_stage__DOT__rst));
    bufp->chgIData(oldp+40,(vlSelf->tb_memory_stage__DOT__unnamedblk1__DOT__i),32);
}

void Vtb_memory_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_cleanup\n"); );
    // Init
    Vtb_memory_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_memory_stage___024root*>(voidSelf);
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
