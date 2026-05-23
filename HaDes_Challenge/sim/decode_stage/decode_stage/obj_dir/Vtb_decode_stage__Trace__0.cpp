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
        bufp->chgIData(oldp+11,(vlSelf->tb_decode_stage__DOT__jump_address_backwards_in),32);
        bufp->chgCData(oldp+12,((0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in)),7);
        bufp->chgCData(oldp+13,((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                          >> 7U))),5);
        bufp->chgCData(oldp+14,((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+16,((7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+17,((vlSelf->tb_decode_stage__DOT__instruction_in 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+18,(((((0x13U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in)) 
                                 | (3U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))) 
                                | (0x23U == (0x7fU 
                                             & vlSelf->tb_decode_stage__DOT__instruction_in))) 
                               | (0x67U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in)))));
        bufp->chgBit(oldp+19,((0x23U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in))));
        bufp->chgBit(oldp+20,(((3U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in)) 
                               | (0x23U == (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in)))));
        bufp->chgBit(oldp+21,((1U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))));
        bufp->chgBit(oldp+22,((2U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))));
        bufp->chgSData(oldp+23,((vlSelf->tb_decode_stage__DOT__instruction_in 
                                 >> 0x14U)),12);
        bufp->chgIData(oldp+24,((((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->tb_decode_stage__DOT__instruction_in 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+25,((((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+26,((((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                              >> 0x1fU))) 
                                  << 0xdU) | ((0x1000U 
                                               & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                          >> 7U))))))),32);
        bufp->chgIData(oldp+27,((0xfffff000U & vlSelf->tb_decode_stage__DOT__instruction_in)),32);
        bufp->chgIData(oldp+28,((((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_decode_stage__DOT__instruction_in) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                           >> 0x14U))))))),32);
        bufp->chgBit(oldp+29,(((IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                                        >> 0x25U)) 
                               & (0U != (0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in))))));
        bufp->chgCData(oldp+30,((0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in))),5);
        bufp->chgIData(oldp+31,((IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                                         >> 5U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+32,(vlSelf->tb_decode_stage__DOT__dut__DOT__alu_op),4);
        bufp->chgBit(oldp+33,(vlSelf->tb_decode_stage__DOT__dut__DOT__write_rd));
        bufp->chgCData(oldp+34,(vlSelf->tb_decode_stage__DOT__dut__DOT__mem_width),6);
        bufp->chgBit(oldp+35,(vlSelf->tb_decode_stage__DOT__dut__DOT__jump));
        bufp->chgBit(oldp+36,(vlSelf->tb_decode_stage__DOT__dut__DOT__branch));
        bufp->chgCData(oldp+37,(vlSelf->tb_decode_stage__DOT__dut__DOT__rd_data_src),3);
        bufp->chgCData(oldp+38,(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_type),3);
        bufp->chgIData(oldp+39,(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_out),32);
        bufp->chgIData(oldp+40,(vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_fwd),32);
        bufp->chgIData(oldp+41,(vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_fwd),32);
        bufp->chgWData(oldp+42,(vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed),65);
        bufp->chgBit(oldp+45,((1U & ((1U & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U])
                                      ? (IData)(((0U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U])) 
                                                 & ((~ 
                                                     (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                      >> 0x1dU)) 
                                                    | (IData)(
                                                              (0U 
                                                               == 
                                                               (0x18000000U 
                                                                & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]))))))
                                      : ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                          >> 0x1fU)
                                          ? ((0x40000000U 
                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U])
                                              ? ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                  >> 0x1dU) 
                                                 | (IData)(
                                                           (0x18000000U 
                                                            == 
                                                            (0x18000000U 
                                                             & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]))))
                                              : (IData)(
                                                        (0U 
                                                         == 
                                                         (0x30000000U 
                                                          & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U]))))
                                          : ((0x40000000U 
                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U])
                                              ? ((0x20000000U 
                                                  & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U])
                                                  ? (IData)(
                                                            (0x18000000U 
                                                             == 
                                                             (0x18000000U 
                                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U])))
                                                  : 
                                                 (~ 
                                                  (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1cU)))
                                              : (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                 >> 0x1dU)))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+46,(vlSelf->tb_decode_stage__DOT__rs1_data_reg_out),32);
        bufp->chgIData(oldp+47,(vlSelf->tb_decode_stage__DOT__rs2_data_reg_out),32);
        bufp->chgIData(oldp+48,(vlSelf->tb_decode_stage__DOT__program_counter_reg_out),32);
        bufp->chgWData(oldp+49,(vlSelf->tb_decode_stage__DOT__instruction_reg_out),65);
        bufp->chgCData(oldp+52,(vlSelf->tb_decode_stage__DOT__status_forwards_out),4);
        bufp->chgIData(oldp+53,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+54,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+55,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+56,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+57,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+58,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+59,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+60,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+61,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+62,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+63,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+64,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+65,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+66,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+67,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+68,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+69,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+70,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+71,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+72,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+73,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+74,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+75,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+76,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+77,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+78,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+79,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+80,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+81,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+82,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+83,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+84,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[31]),32);
        bufp->chgIData(oldp+85,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__i),32);
    }
    bufp->chgBit(oldp+86,(vlSelf->tb_decode_stage__DOT__clk));
    bufp->chgCData(oldp+87,((((~ ((1U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in)) 
                                  | (2U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in)))) 
                              & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__jump))
                              ? 2U : 0U)),2);
    bufp->chgIData(oldp+88,((((~ ((1U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in)) 
                                  | (2U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in)))) 
                              & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__jump))
                              ? (vlSelf->tb_decode_stage__DOT__dut__DOT__imm_out 
                                 + vlSelf->tb_decode_stage__DOT__program_counter_in)
                              : 0U)),32);
    bufp->chgIData(oldp+89,(((0U == (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                              >> 0xfU)))
                              ? 0U : vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs
                             [(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                        >> 0xfU))])),32);
    bufp->chgIData(oldp+90,(((0U == (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                              >> 0x14U)))
                              ? 0U : vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs
                             [(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                        >> 0x14U))])),32);
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
