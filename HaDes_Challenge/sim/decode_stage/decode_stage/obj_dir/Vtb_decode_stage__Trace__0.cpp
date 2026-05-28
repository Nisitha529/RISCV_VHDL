// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_decode_stage__Syms.h"


void Vtb_decode_stage___024root__trace_chg_sub_0(Vtb_decode_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_decode_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_decode_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_decode_stage___024root*>(voidSelf);
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_decode_stage___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_decode_stage___024root__trace_chg_sub_0(Vtb_decode_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_decode_stage__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelf->tb_decode_stage__DOT__instruction_in),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_decode_stage__DOT__program_counter_in),32);
        bufp->chgQData(oldp+3,(vlSelf->tb_decode_stage__DOT__exe_forwarding_in),38);
        bufp->chgQData(oldp+5,(vlSelf->tb_decode_stage__DOT__mem_forwarding_in),38);
        bufp->chgQData(oldp+7,(vlSelf->tb_decode_stage__DOT__wb_forwarding_in),38);
        bufp->chgCData(oldp+9,(vlSelf->tb_decode_stage__DOT__status_forwards_in),4);
        bufp->chgCData(oldp+10,(vlSelf->tb_decode_stage__DOT__status_backwards_in),2);
        bufp->chgCData(oldp+11,(((2U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))
                                  ? 2U : ((1U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))
                                           ? 1U : 0U))),2);
        bufp->chgIData(oldp+12,(vlSelf->tb_decode_stage__DOT__jump_address_backwards_in),32);
        bufp->chgIData(oldp+13,(((2U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))
                                  ? vlSelf->tb_decode_stage__DOT__jump_address_backwards_in
                                  : ((1U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))
                                      ? vlSelf->tb_decode_stage__DOT__jump_address_backwards_in
                                      : 0U))),32);
        bufp->chgIData(oldp+14,(vlSelf->tb_decode_stage__DOT__pass_count),32);
        bufp->chgIData(oldp+15,(vlSelf->tb_decode_stage__DOT__fail_count),32);
        bufp->chgBit(oldp+16,((1U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))));
        bufp->chgBit(oldp+17,((2U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))));
        bufp->chgCData(oldp+18,((0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in)),7);
        bufp->chgCData(oldp+19,((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                          >> 7U))),5);
        bufp->chgCData(oldp+20,((7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+21,((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+22,((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+23,((vlSelf->tb_decode_stage__DOT__instruction_in 
                                 >> 0x19U)),7);
        bufp->chgSData(oldp+24,((vlSelf->tb_decode_stage__DOT__instruction_in 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+25,((1U & (IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                                             >> 0x25U)))));
        bufp->chgCData(oldp+26,((0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in))),5);
        bufp->chgIData(oldp+27,((IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                                         >> 5U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgWData(oldp+28,(vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction),65);
        bufp->chgIData(oldp+31,(vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_selected),32);
        bufp->chgIData(oldp+32,(vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_selected),32);
        bufp->chgBit(oldp+33,(vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_used));
        bufp->chgBit(oldp+34,(vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_used));
        bufp->chgCData(oldp+35,(vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_type),3);
        bufp->chgIData(oldp+36,(vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_out),32);
        bufp->chgCData(oldp+37,((0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                          >> 0x11U))),5);
        bufp->chgCData(oldp+38,((0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                          >> 0xcU))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+39,(vlSelf->tb_decode_stage__DOT__rs1_data_reg_out),32);
        bufp->chgIData(oldp+40,(vlSelf->tb_decode_stage__DOT__rs2_data_reg_out),32);
        bufp->chgIData(oldp+41,(vlSelf->tb_decode_stage__DOT__program_counter_reg_out),32);
        bufp->chgWData(oldp+42,(vlSelf->tb_decode_stage__DOT__instruction_reg_out),65);
        bufp->chgCData(oldp+45,(vlSelf->tb_decode_stage__DOT__status_forwards_out),4);
        bufp->chgIData(oldp+46,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+47,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+48,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+49,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+50,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+51,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+52,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+53,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+54,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+55,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+56,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+57,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+58,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+59,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+60,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+61,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+62,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+63,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+64,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+65,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+66,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+67,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+68,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+69,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+70,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+71,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+72,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+73,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+74,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+75,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+76,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+77,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[31]),32);
        bufp->chgIData(oldp+78,(vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__i),32);
    }
    bufp->chgBit(oldp+79,(vlSelf->tb_decode_stage__DOT__clk));
    bufp->chgIData(oldp+80,(((0U == (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                              >> 0x11U)))
                              ? 0U : vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs
                             [(0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                        >> 0x11U))])),32);
    bufp->chgIData(oldp+81,(((0U == (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                              >> 0xcU)))
                              ? 0U : vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs
                             [(0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                        >> 0xcU))])),32);
}

void Vtb_decode_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root__trace_cleanup\n"); );
    // Init
    Vtb_decode_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_decode_stage___024root*>(voidSelf);
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
