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
        bufp->chgBit(oldp+0,(vlSelf->tb_memory_stage__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelf->tb_memory_stage__DOT__source_data_in),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_memory_stage__DOT__rd_data_in),32);
        bufp->chgWData(oldp+3,(vlSelf->tb_memory_stage__DOT__instruction_in),65);
        bufp->chgIData(oldp+6,(vlSelf->tb_memory_stage__DOT__program_counter_in),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_memory_stage__DOT__next_program_counter_in),32);
        bufp->chgCData(oldp+8,(vlSelf->tb_memory_stage__DOT__status_forwards_in),4);
        bufp->chgCData(oldp+9,(vlSelf->tb_memory_stage__DOT__status_backwards_in),2);
        bufp->chgIData(oldp+10,(vlSelf->tb_memory_stage__DOT__jump_address_backwards_in),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_memory_stage__DOT__pass_count),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_memory_stage__DOT__fail_count),32);
        bufp->chgBit(oldp+13,((1U == (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in))));
        bufp->chgBit(oldp+14,((2U == (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in))));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__tb_memory_stage__DOT__wb.ack));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__tb_memory_stage__DOT__wb.err));
        bufp->chgIData(oldp+17,(vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+18,(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load));
        bufp->chgBit(oldp+19,(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
        bufp->chgBit(oldp+20,(vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned));
        bufp->chgCData(oldp+21,(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb),4);
        bufp->chgIData(oldp+22,(vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb),32);
        bufp->chgBit(oldp+23,(vlSelf->tb_memory_stage__DOT__dut__DOT__valid_memory_op));
        bufp->chgIData(oldp+24,(vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb),32);
        bufp->chgCData(oldp+25,(vlSelf->tb_memory_stage__DOT__dut__DOT__misaligned_status_comb),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+26,(vlSelf->tb_memory_stage__DOT__source_data_reg_out),32);
        bufp->chgIData(oldp+27,(vlSelf->tb_memory_stage__DOT__rd_data_reg_out),32);
        bufp->chgWData(oldp+28,(vlSelf->tb_memory_stage__DOT__instruction_reg_out),65);
        bufp->chgIData(oldp+31,(vlSelf->tb_memory_stage__DOT__program_counter_reg_out),32);
        bufp->chgIData(oldp+32,(vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out),32);
        bufp->chgQData(oldp+33,(vlSelf->tb_memory_stage__DOT__forwarding_out),38);
        bufp->chgCData(oldp+35,(vlSelf->tb_memory_stage__DOT__status_forwards_out),4);
        bufp->chgCData(oldp+36,(vlSelf->tb_memory_stage__DOT__status_backwards_out),2);
        bufp->chgIData(oldp+37,(vlSelf->tb_memory_stage__DOT__jump_address_backwards_out),32);
        bufp->chgBit(oldp+38,(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state));
        bufp->chgWData(oldp+39,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr),65);
        bufp->chgIData(oldp+42,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_source_data),32);
        bufp->chgIData(oldp+43,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr),32);
        bufp->chgIData(oldp+44,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data),32);
        bufp->chgIData(oldp+45,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_pc),32);
        bufp->chgIData(oldp+46,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_next_pc),32);
        bufp->chgCData(oldp+47,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel),4);
        bufp->chgBit(oldp+48,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_load));
        bufp->chgBit(oldp+49,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store));
        bufp->chgCData(oldp+50,(vlSelf->tb_memory_stage__DOT__dut__DOT__fault_status_comb),4);
    }
    bufp->chgBit(oldp+51,(vlSelf->tb_memory_stage__DOT__clk));
    bufp->chgBit(oldp+52,(((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT____VdfgTmp_he475b9dc__0)) 
                           & (0U == (IData)(vlSelf->tb_memory_stage__DOT__status_forwards_in)))));
    bufp->chgBit(oldp+53,(((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)) 
                           & ((2U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
                              & ((1U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
                                 & ((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned)) 
                                    & (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__valid_memory_op)))))));
    bufp->chgBit(oldp+54,(((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
                           | ((2U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
                              & ((1U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
                                 & ((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned)) 
                                    & (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__valid_memory_op)))))));
    bufp->chgIData(oldp+55,(((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
                              ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr
                              : vlSelf->tb_memory_stage__DOT__rd_data_in)),32);
    bufp->chgCData(oldp+56,(((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
                              ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
                              : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb))),4);
    bufp->chgBit(oldp+57,(((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
                            ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
                            : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store))));
    bufp->chgIData(oldp+58,(((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
                              ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data
                              : vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb)),32);
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
}
