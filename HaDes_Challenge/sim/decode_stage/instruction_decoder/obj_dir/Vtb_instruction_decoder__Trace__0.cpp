// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_instruction_decoder__Syms.h"


void Vtb_instruction_decoder___024root__trace_chg_sub_0(Vtb_instruction_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_instruction_decoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_instruction_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_instruction_decoder___024root*>(voidSelf);
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_instruction_decoder___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_instruction_decoder___024root__trace_chg_sub_0(Vtb_instruction_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_instruction_decoder__DOT__instruction_in),32);
        bufp->chgCData(oldp+1,((0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)),7);
        bufp->chgCData(oldp+2,((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                         >> 7U))),5);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+4,((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+5,((7U & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+6,((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                >> 0x19U)),7);
        bufp->chgBit(oldp+7,(((((0x13U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)) 
                                | (3U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                               | (0x23U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                              | (0x67U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)))));
        bufp->chgBit(oldp+8,((0x23U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))));
        bufp->chgBit(oldp+9,(((3U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)) 
                              | (0x23U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)))));
        bufp->chgSData(oldp+10,((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                 >> 0x14U)),12);
        bufp->chgIData(oldp+11,((((- (IData)((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+12,((((- (IData)((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+13,((((- (IData)((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                              >> 0x1fU))) 
                                  << 0xdU) | ((0x1000U 
                                               & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                          >> 7U))))))),32);
        bufp->chgIData(oldp+14,((0xfffff000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)),32);
        bufp->chgIData(oldp+15,((((- (IData)((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_instruction_decoder__DOT__instruction_in) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                           >> 0x14U))))))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgWData(oldp+16,(vlSelf->tb_instruction_decoder__DOT__instruction_out),65);
        bufp->chgCData(oldp+19,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__alu_op),4);
        bufp->chgBit(oldp+20,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__write_rd));
        bufp->chgCData(oldp+21,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__mem_width),6);
        bufp->chgBit(oldp+22,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__jump));
        bufp->chgBit(oldp+23,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__branch));
        bufp->chgCData(oldp+24,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__rd_data_src),3);
        bufp->chgCData(oldp+25,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type),3);
    }
    bufp->chgIData(oldp+26,(((4U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                              ? ((2U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                  ? 0U : ((1U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                           ? 0U : (
                                                   ((- (IData)(
                                                               (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->tb_instruction_decoder__DOT__instruction_in) 
                                                         | ((0x800U 
                                                             & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                                  >> 0x14U))))))))
                              : ((2U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                  ? ((1U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                      ? (0xfffff000U 
                                         & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                      : (((- (IData)(
                                                     (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                      >> 0x1fU))) 
                                          << 0xdU) 
                                         | ((0x1000U 
                                             & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                        >> 7U)))))))
                                  : ((1U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                      ? (((- (IData)(
                                                     (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                  >> 7U))))
                                      : (((- (IData)(
                                                     (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                            >> 0x14U)))))),32);
}

void Vtb_instruction_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root__trace_cleanup\n"); );
    // Init
    Vtb_instruction_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_instruction_decoder___024root*>(voidSelf);
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
