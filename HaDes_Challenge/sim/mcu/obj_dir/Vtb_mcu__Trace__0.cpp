// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_mcu__Syms.h"


void Vtb_mcu___024root__trace_chg_sub_0(Vtb_mcu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_mcu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_mcu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mcu___024root*>(voidSelf);
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_mcu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_mcu___024root__trace_chg_sub_0(Vtb_mcu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+0,(vlSelf->tb_mcu__DOT__switches_async),16);
        bufp->chgCData(oldp+1,(vlSelf->tb_mcu__DOT__buttons_async),5);
        bufp->chgBit(oldp+2,(vlSelf->tb_mcu__DOT__uart_rx_async));
        bufp->chgIData(oldp+3,(vlSelf->tb_mcu__DOT__pass_count),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_mcu__DOT__fail_count),32);
        bufp->chgBit(oldp+5,((1U & (IData)(vlSelf->tb_mcu__DOT__buttons_async))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                    >> 1U))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                    >> 2U))));
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                    >> 3U))));
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelf->tb_mcu__DOT__buttons_async) 
                                    >> 4U))));
        bufp->chgBit(oldp+10,((1U & (IData)(vlSelf->tb_mcu__DOT__switches_async))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 0xeU))));
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 0xfU))));
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 1U))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 2U))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 3U))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 4U))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 5U))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 6U))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 7U))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 8U))));
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->tb_mcu__DOT__switches_async) 
                                     >> 9U))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+26,((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_full) 
                                & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_sig)) 
                               | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_empty) 
                                  & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_sig)))));
        bufp->chgBit(oldp+27,(((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                                        ? 2U : 0U)) 
                               | (2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out)))));
        bufp->chgBit(oldp+28,((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                  & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.stb)) 
                                 & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.ack))) 
                                & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.err))) 
                               & ((0x81000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                  & (0x81001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)))));
        bufp->chgCData(oldp+29,((((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                      & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.stb)) 
                                     & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.ack))) 
                                    & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.err))) 
                                   & ((0x81000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                      & (0x81001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
                                  & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))
                                  ? (0xfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb))
                                  : 0U)),4);
        bufp->chgBit(oldp+30,((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                  & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.stb)) 
                                 & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.ack))) 
                                & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.err))) 
                               & ((0x80000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                  & (0x80001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)))));
        bufp->chgBit(oldp+31,((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                  & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.stb)) 
                                 & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.ack))) 
                                & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.err))) 
                               & ((0x83000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                  & (0x83001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)))));
        bufp->chgBit(oldp+32,((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                  & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.stb)) 
                                 & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.ack))) 
                                & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.err))) 
                               & ((0x82000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                  & (0x82001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)))));
        bufp->chgCData(oldp+33,((((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                      & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.stb)) 
                                     & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.ack))) 
                                    & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.err))) 
                                   & ((0x82000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                      & (0x82001U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb))) 
                                  & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))
                                  ? (0xfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb))
                                  : 0U)),4);
        bufp->chgBit(oldp+34,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel) 
                               & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count)))));
        bufp->chgBit(oldp+35,((((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                  & (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.stb)) 
                                 & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.ack))) 
                                & (~ (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.err))) 
                               & ((0x85000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                  & (0x85005U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)))));
        bufp->chgIData(oldp+36,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel)
                                  ? vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter
                                  : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel)
                                      ? vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter
                                      : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_ack)
                                          ? vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_reg
                                          : 0U)))),32);
        bufp->chgBit(oldp+37,(((((0x120000U <= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb) 
                                 & (0x120005U > vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)) 
                                & (~ ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel) 
                                      | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel) 
                                         | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel) 
                                            | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel) 
                                               | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_sel))))))) 
                               | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel) 
                                  & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+38,(vlSelf->tb_mcu__DOT__dut__DOT__external_interrupt));
        bufp->chgCData(oldp+39,(((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))
                                  ? 2U : ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))
                                           ? 1U : 0U))),2);
        bufp->chgIData(oldp+40,(((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))
                                  ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in
                                  : ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))
                                      ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in
                                      : 0U))),32);
        bufp->chgCData(oldp+41,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_backwards_out),2);
        bufp->chgIData(oldp+42,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_jump_address_out),32);
        bufp->chgCData(oldp+43,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                                  ? 2U : 0U)),2);
        bufp->chgIData(oldp+44,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_jump_address_out),32);
        bufp->chgCData(oldp+45,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in),2);
        bufp->chgIData(oldp+46,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_jump_address_in),32);
        bufp->chgCData(oldp+47,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in),2);
        bufp->chgIData(oldp+48,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_in),32);
        bufp->chgCData(oldp+49,(((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                                          ? 2U : 0U))
                                  ? 2U : 0U)),2);
        bufp->chgIData(oldp+50,(((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                                          ? 2U : 0U))
                                  ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_jump_address_out
                                  : 0U)),32);
        bufp->chgBit(oldp+51,((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                                       ? 2U : 0U))));
        bufp->chgBit(oldp+52,((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_backwards_out))));
        bufp->chgBit(oldp+53,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard));
        bufp->chgCData(oldp+54,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_status_in),4);
        bufp->chgBit(oldp+55,((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))));
        bufp->chgBit(oldp+56,((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_backwards_in))));
        bufp->chgBit(oldp+57,((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in))));
        bufp->chgBit(oldp+58,((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_in))));
        bufp->chgCData(oldp+59,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__status_backwards_comb),2);
        bufp->chgIData(oldp+60,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__jump_address_comb),32);
        bufp->chgBit(oldp+61,((2U == ((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                                               ? 2U
                                               : 0U))
                                       ? 2U : 0U))));
        bufp->chgBit(oldp+62,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op));
        bufp->chgBit(oldp+63,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb));
        bufp->chgBit(oldp+64,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb));
        bufp->chgIData(oldp+65,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb),32);
        bufp->chgCData(oldp+66,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb),4);
        bufp->chgBit(oldp+67,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb));
        bufp->chgIData(oldp+68,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_dat_mosi_comb),32);
        bufp->chgBit(oldp+69,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__external_interrupt_taken));
        bufp->chgBit(oldp+70,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_taken));
        bufp->chgIData(oldp+71,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__interrupt_cause),32);
        bufp->chgBit(oldp+72,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_taken));
        bufp->chgIData(oldp+73,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_cause),32);
        bufp->chgIData(oldp+74,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__trap_tval),32);
        bufp->chgBit(oldp+75,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken));
        bufp->chgIData(oldp+76,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_address),32);
        bufp->chgBit(oldp+77,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_writes_rd_comb));
        bufp->chgIData(oldp+78,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__wb_rd_data_comb),32);
        bufp->chgSData(oldp+79,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select),9);
        bufp->chgBit(oldp+80,((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_cyc_comb) 
                                & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_stb_comb)) 
                               & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__select)))));
        bufp->chgCData(oldp+81,(vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__wb_write_sel),4);
        bufp->chgCData(oldp+82,(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__wb_write_sel),4);
        bufp->chgIData(oldp+83,((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb 
                                 - (IData)(0x120000U))),32);
        bufp->chgBit(oldp+84,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel));
        bufp->chgBit(oldp+85,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel));
        bufp->chgBit(oldp+86,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel));
        bufp->chgBit(oldp+87,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_sel));
        bufp->chgBit(oldp+88,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_ack));
        bufp->chgBit(oldp+89,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel));
        bufp->chgBit(oldp+90,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel) 
                               | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel) 
                                  | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel) 
                                     | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__error_sel) 
                                        | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_sel)))))));
        bufp->chgCData(oldp+91,(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__wb_write_sel),4);
        bufp->chgBit(oldp+92,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_full));
        bufp->chgBit(oldp+93,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_sig));
        bufp->chgBit(oldp+94,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_sig));
        bufp->chgCData(oldp+95,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_sig),8);
        bufp->chgBit(oldp+96,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access));
        bufp->chgCData(oldp+97,((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
                                  & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))
                                  ? (0xfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb))
                                  : 0U)),4);
        bufp->chgBit(oldp+98,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_read_rx_buffer));
        bufp->chgBit(oldp+99,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_buffer));
        bufp->chgBit(oldp+100,((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
                                 & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))) 
                                & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb) 
                                   >> 2U))));
        bufp->chgBit(oldp+101,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_rx_status));
        bufp->chgBit(oldp+102,((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_access) 
                                 & (~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_we_comb))) 
                                & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_sel_comb) 
                                   >> 3U))));
        bufp->chgBit(oldp+103,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__wb_write_tx_status));
        bufp->chgCData(oldp+104,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__wishbone_we),4);
        bufp->chgIData(oldp+105,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__next_state),32);
        bufp->chgSData(oldp+106,((0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_adr_comb)),16);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__.stb));
        bufp->chgBit(oldp+108,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_sel) 
                                | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_sel) 
                                   | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter_sel) 
                                      | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_ack))))));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET__.stb));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.stb));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.stb));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.stb));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.stb));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.stb));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.stb));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.stb));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[7U]) 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+117,((0U != (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack))));
        bufp->chgSData(oldp+118,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_ack),9);
        bufp->chgSData(oldp+119,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_err),9);
        bufp->chgWData(oldp+120,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__masked_dat_miso),288);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+129,(vlSelf->tb_mcu__DOT__dut__DOT__wb_leds__DOT__leds_reg),16);
        bufp->chgCData(oldp+130,((0xffU & ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                            ? ((4U 
                                                & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                     ? 0xffU
                                                     : 
                                                    (~ vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                     ? 
                                                    (~ 
                                                     (vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                                                      >> 8U))
                                                     : 0xffU))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                     ? 
                                                    (~ 
                                                     (vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                                                      >> 0x10U))
                                                     : 0xffU)
                                                    : 0xffU))
                                            : ((4U 
                                                & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg))
                                                     ? 
                                                    (~ 
                                                     (vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg 
                                                      >> 0x18U))
                                                     : 0xffU)
                                                    : 0xffU)
                                                : 0xffU)))),8);
        bufp->chgCData(oldp+131,(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg),4);
        bufp->chgBit(oldp+132,(((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                                | ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                                   | ((2U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                                      & ((3U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                                         | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg)))))));
        bufp->chgCData(oldp+133,(vlSelf->tb_mcu__DOT__dut__DOT__buttons),5);
        bufp->chgSData(oldp+134,(((0x8000U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages) 
                                              << 0xeU)) 
                                  | ((0x4000U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages) 
                                                 << 0xdU)) 
                                     | ((0x2000U & 
                                         ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages) 
                                          << 0xcU)) 
                                        | ((0x1000U 
                                            & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages) 
                                               << 0xbU)) 
                                           | ((0x800U 
                                               & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages) 
                                                  << 0xaU)) 
                                              | ((0x400U 
                                                  & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages) 
                                                     << 9U)) 
                                                 | ((0x200U 
                                                     & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages) 
                                                        << 8U)) 
                                                    | ((0x100U 
                                                        & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages) 
                                                           << 7U)) 
                                                       | ((0x80U 
                                                           & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages) 
                                                              << 6U)) 
                                                          | ((0x40U 
                                                              & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages) 
                                                                 << 5U)) 
                                                             | ((0x20U 
                                                                 & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages) 
                                                                    << 4U)) 
                                                                | ((0x10U 
                                                                    & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages) 
                                                                       << 3U)) 
                                                                   | ((8U 
                                                                       & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages) 
                                                                          << 2U)) 
                                                                      | ((4U 
                                                                          & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages) 
                                                                             << 1U)) 
                                                                         | ((2U 
                                                                             & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages)) 
                                                                            | (1U 
                                                                               & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages) 
                                                                                >> 1U)))))))))))))))))),16);
        bufp->chgBit(oldp+135,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgBit(oldp+136,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_enable) 
                                & (0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter))));
        bufp->chgBit(oldp+137,(vlSelf->tb_mcu__DOT__dut__DOT__timer_interrupt));
        bufp->chgBit(oldp+138,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__0__KET____DOT__button_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+139,(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__0__KET____DOT__button_sync__DOT__stages),2);
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__1__KET____DOT__button_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+141,(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__1__KET____DOT__button_sync__DOT__stages),2);
        bufp->chgBit(oldp+142,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__2__KET____DOT__button_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+143,(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__2__KET____DOT__button_sync__DOT__stages),2);
        bufp->chgBit(oldp+144,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__3__KET____DOT__button_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+145,(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__3__KET____DOT__button_sync__DOT__stages),2);
        bufp->chgBit(oldp+146,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__4__KET____DOT__button_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+147,(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__4__KET____DOT__button_sync__DOT__stages),2);
        bufp->chgIData(oldp+148,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction),32);
        bufp->chgIData(oldp+149,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_pc),32);
        bufp->chgCData(oldp+150,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status),4);
        bufp->chgIData(oldp+151,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data),32);
        bufp->chgIData(oldp+152,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data),32);
        bufp->chgIData(oldp+153,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc),32);
        bufp->chgWData(oldp+154,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction),65);
        bufp->chgCData(oldp+157,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status),4);
        bufp->chgIData(oldp+158,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data),32);
        bufp->chgIData(oldp+159,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data),32);
        bufp->chgWData(oldp+160,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction),65);
        bufp->chgIData(oldp+163,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_pc),32);
        bufp->chgIData(oldp+164,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_next_pc),32);
        bufp->chgQData(oldp+165,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding),38);
        bufp->chgCData(oldp+167,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status),4);
        bufp->chgIData(oldp+168,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data),32);
        bufp->chgIData(oldp+169,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data),32);
        bufp->chgWData(oldp+170,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction),65);
        bufp->chgIData(oldp+173,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc),32);
        bufp->chgIData(oldp+174,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc),32);
        bufp->chgQData(oldp+175,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding),38);
        bufp->chgCData(oldp+177,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status),4);
        bufp->chgQData(oldp+178,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding),38);
        bufp->chgCData(oldp+180,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out),2);
        bufp->chgIData(oldp+181,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_out),32);
        bufp->chgWData(oldp+182,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction),65);
        bufp->chgBit(oldp+185,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used));
        bufp->chgBit(oldp+186,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used));
        bufp->chgBit(oldp+187,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw));
        bufp->chgBit(oldp+188,((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out))));
        bufp->chgWData(oldp+189,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction),65);
        bufp->chgIData(oldp+192,(((0U == (0x1fU & (
                                                   vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                                   >> 0x11U)))
                                   ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs
                                  [(0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                             >> 0x11U))])),32);
        bufp->chgIData(oldp+193,(((0U == (0x1fU & (
                                                   vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                                   >> 0xcU)))
                                   ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs
                                  [(0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                             >> 0xcU))])),32);
        bufp->chgIData(oldp+194,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected),32);
        bufp->chgIData(oldp+195,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected),32);
        bufp->chgBit(oldp+196,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_used));
        bufp->chgBit(oldp+197,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_used));
        bufp->chgCData(oldp+198,((0x7fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)),7);
        bufp->chgCData(oldp+199,((0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                           >> 7U))),5);
        bufp->chgCData(oldp+200,((7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+201,((0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+202,((0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+203,((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+204,((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                  >> 0x14U)),12);
        bufp->chgCData(oldp+205,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type),3);
        bufp->chgIData(oldp+206,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out),32);
        bufp->chgCData(oldp+207,((0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                           >> 0x11U))),5);
        bufp->chgCData(oldp+208,((0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                           >> 0xcU))),5);
        bufp->chgBit(oldp+209,((1U & (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                                              >> 0x25U)))));
        bufp->chgCData(oldp+210,((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding))),5);
        bufp->chgIData(oldp+211,((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                                          >> 5U))),32);
        bufp->chgIData(oldp+212,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+213,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+214,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+215,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+216,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+217,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+218,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+219,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+220,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+221,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+222,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+223,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+224,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+225,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+226,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+227,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+228,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+229,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+230,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+231,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+232,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+233,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+234,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+235,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+236,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+237,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+238,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+239,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+240,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+241,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+242,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+243,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs[31]),32);
        bufp->chgIData(oldp+244,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__i),32);
        bufp->chgCData(oldp+245,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op),4);
        bufp->chgBit(oldp+246,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm));
        bufp->chgBit(oldp+247,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch));
        bufp->chgBit(oldp+248,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump));
        bufp->chgBit(oldp+249,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jalr));
        bufp->chgBit(oldp+250,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_load));
        bufp->chgBit(oldp+251,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store));
        bufp->chgBit(oldp+252,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_fence_i));
        bufp->chgBit(oldp+253,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr));
        bufp->chgIData(oldp+254,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2),32);
        bufp->chgIData(oldp+255,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result),32);
        bufp->chgBit(oldp+256,((0U == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)));
        bufp->chgBit(oldp+257,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__take_branch));
        bufp->chgIData(oldp+258,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_target),32);
        bufp->chgIData(oldp+259,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jalr)
                                   ? (0xfffffffeU & 
                                      (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                       + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]))
                                   : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_target)),32);
        bufp->chgIData(oldp+260,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__next_pc_comb),32);
        bufp->chgBit(oldp+261,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_or_jump_redirect));
        bufp->chgBit(oldp+262,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__fetch_misaligned));
        bufp->chgIData(oldp+263,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__rd_value_comb),32);
        bufp->chgIData(oldp+264,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store)
                                   ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data
                                   : ((((0x29U == (0x3fU 
                                                   & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                       << 5U) 
                                                      | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                         >> 0x1bU)))) 
                                        | (0x2aU == 
                                           (0x3fU & 
                                            ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                              << 5U) 
                                             | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                >> 0x1bU))))) 
                                       | (0x2bU == 
                                          (0x3fU & 
                                           ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                               >> 0x1bU)))))
                                       ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data
                                       : ((((0x2cU 
                                             == (0x3fU 
                                                 & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                     << 5U) 
                                                    | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                       >> 0x1bU)))) 
                                            | (0x2dU 
                                               == (0x3fU 
                                                   & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                       << 5U) 
                                                      | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                         >> 0x1bU))))) 
                                           | (0x2eU 
                                              == (0x3fU 
                                                  & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                      << 5U) 
                                                     | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                        >> 0x1bU)))))
                                           ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]
                                           : 0U)))),32);
        bufp->chgBit(oldp+265,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__forward_valid_comb));
        bufp->chgCData(oldp+266,(((0U != (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status))
                                   ? (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status)
                                   : ((0x31U == (0x3fU 
                                                 & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U] 
                                                     << 5U) 
                                                    | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                                       >> 0x1bU))))
                                       ? 4U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__fetch_misaligned)
                                                ? 2U
                                                : 0U)))),4);
        bufp->chgCData(oldp+267,((0x1fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)),5);
        bufp->chgBit(oldp+268,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid));
        bufp->chgIData(oldp+269,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_instr),32);
        bufp->chgIData(oldp+270,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_pc),32);
        bufp->chgCData(oldp+271,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_status),4);
        bufp->chgBit(oldp+272,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__kill_response));
        bufp->chgCData(oldp+273,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type),3);
        bufp->chgIData(oldp+274,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_out),32);
        bufp->chgCData(oldp+275,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__wb_state),2);
        bufp->chgBit(oldp+276,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load));
        bufp->chgBit(oldp+277,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store));
        bufp->chgBit(oldp+278,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__valid_memory_op));
        bufp->chgBit(oldp+279,(((~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0)) 
                                & (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status)))));
        bufp->chgBit(oldp+280,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__access_misaligned));
        bufp->chgCData(oldp+281,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load)
                                   ? 5U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store)
                                            ? 7U : 0U))),4);
        bufp->chgCData(oldp+282,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb),4);
        bufp->chgIData(oldp+283,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__store_data_comb),32);
        bufp->chgWData(oldp+284,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_instr),65);
        bufp->chgIData(oldp+287,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_source_data),32);
        bufp->chgIData(oldp+288,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_addr),32);
        bufp->chgIData(oldp+289,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_store_data),32);
        bufp->chgIData(oldp+290,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_pc),32);
        bufp->chgIData(oldp+291,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_next_pc),32);
        bufp->chgCData(oldp+292,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_sel),4);
        bufp->chgBit(oldp+293,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load));
        bufp->chgBit(oldp+294,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_store));
        bufp->chgCData(oldp+295,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load)
                                   ? 6U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_store)
                                            ? 8U : 0U))),4);
        bufp->chgCData(oldp+296,(((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load)
                                   ? 6U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store)
                                            ? 8U : 0U))),4);
        bufp->chgIData(oldp+297,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus),32);
        bufp->chgIData(oldp+298,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie),32);
        bufp->chgIData(oldp+299,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtvec),32);
        bufp->chgIData(oldp+300,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mepc),32);
        bufp->chgIData(oldp+301,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mcause),32);
        bufp->chgIData(oldp+302,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtval),32);
        bufp->chgIData(oldp+303,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mip),32);
        bufp->chgSData(oldp+304,((0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])),12);
        bufp->chgBit(oldp+305,((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))));
        bufp->chgBit(oldp+306,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__is_csr));
        bufp->chgBit(oldp+307,((0x2fU == (0x3fU & (
                                                   (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                      >> 0x1bU))))));
        bufp->chgBit(oldp+308,((0x27U == (0x3fU & (
                                                   (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                      >> 0x1bU))))));
        bufp->chgBit(oldp+309,((0x28U == (0x3fU & (
                                                   (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                      >> 0x1bU))))));
        bufp->chgIData(oldp+310,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data),32);
        bufp->chgIData(oldp+311,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data),32);
        bufp->chgBit(oldp+312,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_enable));
        bufp->chgBit(oldp+313,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__writes_rd_normal));
        bufp->chgBit(oldp+314,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__pipeline_exception));
        bufp->chgIData(oldp+315,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause),32);
        bufp->chgIData(oldp+316,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval),32);
        bufp->chgBit(oldp+317,((1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
                                      >> 3U))));
        bufp->chgBit(oldp+318,((1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie 
                                      >> 7U))));
        bufp->chgBit(oldp+319,((1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie 
                                      >> 0xbU))));
        bufp->chgBit(oldp+320,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__timer_interrupt_taken));
        bufp->chgCData(oldp+321,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__count),8);
        bufp->chgBit(oldp+322,((0xffU == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__count))));
        bufp->chgBit(oldp+323,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+324,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__0__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+325,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+326,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__10__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+327,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+328,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__11__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+329,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+330,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__12__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+331,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+332,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__13__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+333,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+334,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__14__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+335,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+336,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__15__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+337,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+338,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__1__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+339,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+340,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__2__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+341,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+342,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__3__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+343,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+344,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__4__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+345,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+346,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__5__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+347,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+348,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__6__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+349,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+350,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__7__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+351,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+352,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__8__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgBit(oldp+353,((1U & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages) 
                                      >> 1U))));
        bufp->chgCData(oldp+354,(vlSelf->tb_mcu__DOT__dut__DOT__switch_conditioning__BRA__9__KET____DOT__switch_sync__DOT__stages),2);
        bufp->chgCData(oldp+355,(vlSelf->tb_mcu__DOT__dut__DOT__uart_rx_sync__DOT__stages),2);
        bufp->chgIData(oldp+356,(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_reg),32);
        bufp->chgIData(oldp+357,(vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__timer),32);
        bufp->chgIData(oldp+358,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_reg),32);
        bufp->chgBit(oldp+359,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__test_stb));
        bufp->chgIData(oldp+360,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_counter),32);
        bufp->chgBit(oldp+361,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__interrupt_enable));
        bufp->chgIData(oldp+362,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__counter),32);
        bufp->chgIData(oldp+363,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_reg),32);
        bufp->chgCData(oldp+364,(vlSelf->tb_mcu__DOT__dut__DOT__wb_test__DOT__stall_count),2);
        bufp->chgQData(oldp+365,(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime),64);
        bufp->chgQData(oldp+367,(vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp),64);
        bufp->chgCData(oldp+369,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_reg),8);
        bufp->chgBit(oldp+370,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_err_reg));
        bufp->chgBit(oldp+371,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_intr_enable_reg));
        bufp->chgBit(oldp+372,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_empty));
        bufp->chgCData(oldp+373,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_buffer_reg),8);
        bufp->chgBit(oldp+374,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_err_reg));
        bufp->chgBit(oldp+375,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_intr_enable_reg));
        bufp->chgBit(oldp+376,((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state)));
        bufp->chgBit(oldp+377,((5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state)));
        bufp->chgBit(oldp+378,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active));
        bufp->chgIData(oldp+379,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state),32);
        bufp->chgCData(oldp+380,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_byte_reg),8);
        bufp->chgBit(oldp+381,((5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state)));
        bufp->chgBit(oldp+382,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_err_reg));
        bufp->chgIData(oldp+383,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__rx_state),32);
        bufp->chgIData(oldp+384,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__clk_count),32);
        bufp->chgCData(oldp+385,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__bit_idx),4);
        bufp->chgIData(oldp+386,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_rx_module__DOT__rx_state),32);
        bufp->chgCData(oldp+387,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_byte_reg),8);
        bufp->chgIData(oldp+388,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__clk_count),32);
        bufp->chgCData(oldp+389,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__bit_idx),4);
        bufp->chgIData(oldp+390,(vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state),32);
        bufp->chgIData(oldp+391,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state),32);
        bufp->chgIData(oldp+392,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT____Vcellout__vga_memory__wb_read_data),32);
        bufp->chgIData(oldp+393,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__wb_read_pipeline),32);
        bufp->chgBit(oldp+394,((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state)));
        bufp->chgBit(oldp+395,((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__state)));
        bufp->chgIData(oldp+396,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.dat_miso),32);
        bufp->chgBit(oldp+397,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.ack));
        bufp->chgBit(oldp+398,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.err));
        bufp->chgIData(oldp+399,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.dat_miso),32);
        bufp->chgBit(oldp+400,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.ack));
        bufp->chgBit(oldp+401,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.err));
        bufp->chgIData(oldp+402,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.dat_miso),32);
        bufp->chgBit(oldp+403,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.ack));
        bufp->chgBit(oldp+404,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.err));
        bufp->chgIData(oldp+405,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.dat_miso),32);
        bufp->chgBit(oldp+406,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.ack));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.err));
        bufp->chgIData(oldp+408,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.dat_miso),32);
        bufp->chgBit(oldp+409,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.ack));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.err));
        bufp->chgIData(oldp+411,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.dat_miso),32);
        bufp->chgBit(oldp+412,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.ack));
        bufp->chgBit(oldp+413,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.err));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+414,(vlSelf->tb_mcu__DOT__vga_red),4);
        bufp->chgCData(oldp+415,(vlSelf->tb_mcu__DOT__vga_blue),4);
        bufp->chgCData(oldp+416,(vlSelf->tb_mcu__DOT__vga_green),4);
        bufp->chgBit(oldp+417,(vlSelf->tb_mcu__DOT__vga_hsync));
        bufp->chgBit(oldp+418,(vlSelf->tb_mcu__DOT__vga_vsync));
        bufp->chgIData(oldp+419,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_read_data),32);
        bufp->chgSData(oldp+420,((0xffffU & (vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx 
                                             >> 3U))),16);
        bufp->chgSData(oldp+421,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__column),10);
        bufp->chgSData(oldp+422,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__row),10);
        bufp->chgIData(oldp+423,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx),19);
        bufp->chgBit(oldp+424,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__hsync));
        bufp->chgBit(oldp+425,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vsync));
        bufp->chgCData(oldp+426,((0xfU & (vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_read_data 
                                          >> (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset_delayed)))),4);
        bufp->chgBit(oldp+427,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__draw));
        bufp->chgBit(oldp+428,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__draw_delayed));
        bufp->chgCData(oldp+429,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset),5);
        bufp->chgCData(oldp+430,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset_delayed),5);
        bufp->chgSData(oldp+431,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__color),12);
        bufp->chgBit(oldp+432,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__hsync_delayed));
        bufp->chgBit(oldp+433,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vsync_delayed));
        bufp->chgIData(oldp+434,(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__vga_read_pipeline),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+435,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.err));
        bufp->chgIData(oldp+436,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.dat_miso),32);
        bufp->chgBit(oldp+437,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.ack));
        bufp->chgIData(oldp+438,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.dat_miso),32);
        bufp->chgBit(oldp+439,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.ack));
        bufp->chgBit(oldp+440,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.err));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+441,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state));
        bufp->chgIData(oldp+442,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pc),32);
        bufp->chgIData(oldp+443,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__request_pc),32);
        bufp->chgIData(oldp+444,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.adr),32);
        bufp->chgCData(oldp+445,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.sel),4);
        bufp->chgIData(oldp+446,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.dat_mosi),32);
        bufp->chgBit(oldp+447,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.cyc));
        bufp->chgBit(oldp+448,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.stb));
        bufp->chgBit(oldp+449,(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.we));
    }
    bufp->chgBit(oldp+450,(vlSelf->tb_mcu__DOT__clk));
    bufp->chgBit(oldp+451,(vlSelf->tb_mcu__DOT__clk_mem));
    bufp->chgBit(oldp+452,(vlSelf->tb_mcu__DOT__clk_vga));
    bufp->chgBit(oldp+453,(vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceRd));
    bufp->chgCData(oldp+454,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in),2);
    bufp->chgIData(oldp+455,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in),32);
    bufp->chgBit(oldp+456,((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in))));
    bufp->chgBit(oldp+457,((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in))));
    bufp->chgBit(oldp+458,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__response_valid));
    bufp->chgBit(oldp+459,((1U & (~ ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state) 
                                     | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid) 
                                        | ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in)) 
                                           | (2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in)))))))));
    bufp->chgIData(oldp+460,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_load_value_comb),32);
    bufp->chgIData(oldp+461,(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__live_load_value_comb),32);
    bufp->chgIData(oldp+462,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__dat_miso),32);
    bufp->chgBit(oldp+463,(vlSelf->tb_mcu__DOT__dut__DOT__peripheral_bus_interconnect__DOT__err));
}

void Vtb_mcu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root__trace_cleanup\n"); );
    // Init
    Vtb_mcu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mcu___024root*>(voidSelf);
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
