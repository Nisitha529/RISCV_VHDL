// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_memory_stage__Syms.h"


VL_ATTR_COLD void Vtb_memory_stage___024root__trace_init_sub__TOP__0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_memory_stage ");
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+2,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+3,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+4,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+7,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+8,"next_program_counter_in", false,-1, 31,0);
    tracep->declBus(c+27,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+28,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+29,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+32,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+33,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+34,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+9,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+36,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+10,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+37,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+11,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+38,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+12,"pass_count", false,-1, 31,0);
    tracep->declBus(c+13,"fail_count", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+2,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+3,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+4,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+7,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+8,"next_program_counter_in", false,-1, 31,0);
    tracep->declBus(c+27,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+28,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+29,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+32,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+33,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+34,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+9,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+36,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+10,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+37,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+11,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+38,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+39,"wb_state", false,-1, 0,0);
    tracep->declArray(c+40,"active_instr", false,-1, 64,0);
    tracep->declBus(c+43,"active_source_data", false,-1, 31,0);
    tracep->declBus(c+44,"active_addr", false,-1, 31,0);
    tracep->declBus(c+45,"active_store_data", false,-1, 31,0);
    tracep->declBus(c+46,"active_pc", false,-1, 31,0);
    tracep->declBus(c+47,"active_next_pc", false,-1, 31,0);
    tracep->declBus(c+48,"active_sel", false,-1, 3,0);
    tracep->declBit(c+49,"active_is_load", false,-1);
    tracep->declBit(c+50,"active_is_store", false,-1);
    tracep->declBit(c+14,"downstream_stall", false,-1);
    tracep->declBit(c+15,"downstream_jump", false,-1);
    tracep->declBit(c+19,"is_load", false,-1);
    tracep->declBit(c+20,"is_store", false,-1);
    tracep->declBit(c+21,"access_misaligned", false,-1);
    tracep->declBus(c+22,"byte_sel_comb", false,-1, 3,0);
    tracep->declBus(c+23,"store_data_comb", false,-1, 31,0);
    tracep->declBit(c+24,"valid_memory_op", false,-1);
    tracep->declBit(c+53,"valid_non_memory_op", false,-1);
    tracep->declBit(c+54,"launch_memory_op", false,-1);
    tracep->declBus(c+25,"load_value_comb", false,-1, 31,0);
    tracep->declBus(c+26,"misaligned_status_comb", false,-1, 3,0);
    tracep->declBus(c+51,"fault_status_comb", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_init_sub__TOP__instruction__0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+60,"NOP", false,-1, 64,0);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_init_sub__TOP__tb_memory_stage__DOT__wb__0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_init_sub__TOP__tb_memory_stage__DOT__wb__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+55,"cyc", false,-1);
    tracep->declBit(c+55,"stb", false,-1);
    tracep->declBit(c+16,"ack", false,-1);
    tracep->declBit(c+17,"err", false,-1);
    tracep->declBus(c+56,"adr", false,-1, 31,0);
    tracep->declBus(c+57,"sel", false,-1, 3,0);
    tracep->declBit(c+58,"we", false,-1);
    tracep->declBus(c+59,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+18,"dat_miso", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_init_top(Vtb_memory_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_init_top\n"); );
    // Body
    Vtb_memory_stage___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("instruction ");
    Vtb_memory_stage___024root__trace_init_sub__TOP__instruction__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tb_memory_stage ");
    tracep->pushNamePrefix("dut ");
    tracep->pushNamePrefix("wb\211 ");
    Vtb_memory_stage___024root__trace_init_sub__TOP__tb_memory_stage__DOT__wb__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb\211 ");
    Vtb_memory_stage___024root__trace_init_sub__TOP__tb_memory_stage__DOT__wb__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_memory_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_memory_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_register(Vtb_memory_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_memory_stage___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_memory_stage___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_memory_stage___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_full_sub_0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_full_top_0\n"); );
    // Init
    Vtb_memory_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_memory_stage___024root*>(voidSelf);
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_memory_stage___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_full_sub_0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h3441a5c4__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_memory_stage__DOT__rst));
    bufp->fullIData(oldp+2,(vlSelf->tb_memory_stage__DOT__source_data_in),32);
    bufp->fullIData(oldp+3,(vlSelf->tb_memory_stage__DOT__rd_data_in),32);
    bufp->fullWData(oldp+4,(vlSelf->tb_memory_stage__DOT__instruction_in),65);
    bufp->fullIData(oldp+7,(vlSelf->tb_memory_stage__DOT__program_counter_in),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_memory_stage__DOT__next_program_counter_in),32);
    bufp->fullCData(oldp+9,(vlSelf->tb_memory_stage__DOT__status_forwards_in),4);
    bufp->fullCData(oldp+10,(vlSelf->tb_memory_stage__DOT__status_backwards_in),2);
    bufp->fullIData(oldp+11,(vlSelf->tb_memory_stage__DOT__jump_address_backwards_in),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_memory_stage__DOT__pass_count),32);
    bufp->fullIData(oldp+13,(vlSelf->tb_memory_stage__DOT__fail_count),32);
    bufp->fullBit(oldp+14,((1U == (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in))));
    bufp->fullBit(oldp+15,((2U == (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in))));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__tb_memory_stage__DOT__wb.ack));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__tb_memory_stage__DOT__wb.err));
    bufp->fullIData(oldp+18,(vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso),32);
    bufp->fullBit(oldp+19,(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load));
    bufp->fullBit(oldp+20,(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    bufp->fullBit(oldp+21,(vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned));
    bufp->fullCData(oldp+22,(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb),4);
    bufp->fullIData(oldp+23,(vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb),32);
    bufp->fullBit(oldp+24,(vlSelf->tb_memory_stage__DOT__dut__DOT__valid_memory_op));
    bufp->fullIData(oldp+25,(vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb),32);
    bufp->fullCData(oldp+26,(vlSelf->tb_memory_stage__DOT__dut__DOT__misaligned_status_comb),4);
    bufp->fullIData(oldp+27,(vlSelf->tb_memory_stage__DOT__source_data_reg_out),32);
    bufp->fullIData(oldp+28,(vlSelf->tb_memory_stage__DOT__rd_data_reg_out),32);
    bufp->fullWData(oldp+29,(vlSelf->tb_memory_stage__DOT__instruction_reg_out),65);
    bufp->fullIData(oldp+32,(vlSelf->tb_memory_stage__DOT__program_counter_reg_out),32);
    bufp->fullIData(oldp+33,(vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out),32);
    bufp->fullQData(oldp+34,(vlSelf->tb_memory_stage__DOT__forwarding_out),38);
    bufp->fullCData(oldp+36,(vlSelf->tb_memory_stage__DOT__status_forwards_out),4);
    bufp->fullCData(oldp+37,(vlSelf->tb_memory_stage__DOT__status_backwards_out),2);
    bufp->fullIData(oldp+38,(vlSelf->tb_memory_stage__DOT__jump_address_backwards_out),32);
    bufp->fullBit(oldp+39,(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state));
    bufp->fullWData(oldp+40,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr),65);
    bufp->fullIData(oldp+43,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_source_data),32);
    bufp->fullIData(oldp+44,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr),32);
    bufp->fullIData(oldp+45,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data),32);
    bufp->fullIData(oldp+46,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_pc),32);
    bufp->fullIData(oldp+47,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_next_pc),32);
    bufp->fullCData(oldp+48,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel),4);
    bufp->fullBit(oldp+49,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_load));
    bufp->fullBit(oldp+50,(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store));
    bufp->fullCData(oldp+51,(vlSelf->tb_memory_stage__DOT__dut__DOT__fault_status_comb),4);
    bufp->fullBit(oldp+52,(vlSelf->tb_memory_stage__DOT__clk));
    bufp->fullBit(oldp+53,(((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT____VdfgTmp_he475b9dc__0)) 
                            & (0U == (IData)(vlSelf->tb_memory_stage__DOT__status_forwards_in)))));
    bufp->fullBit(oldp+54,(((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)) 
                            & ((2U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
                               & ((1U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
                                  & ((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned)) 
                                     & (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__valid_memory_op)))))));
    bufp->fullBit(oldp+55,(((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) 
                            | ((2U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
                               & ((1U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
                                  & ((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned)) 
                                     & (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__valid_memory_op)))))));
    bufp->fullIData(oldp+56,(((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
                               ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr
                               : vlSelf->tb_memory_stage__DOT__rd_data_in)),32);
    bufp->fullCData(oldp+57,(((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
                               ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel)
                               : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb))),4);
    bufp->fullBit(oldp+58,(((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
                             ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store)
                             : (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store))));
    bufp->fullIData(oldp+59,(((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
                               ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data
                               : vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb)),32);
    __Vtemp_h3441a5c4__0[0U] = 0U;
    __Vtemp_h3441a5c4__0[1U] = 0x90000000U;
    __Vtemp_h3441a5c4__0[2U] = 0U;
    bufp->fullWData(oldp+60,(__Vtemp_h3441a5c4__0),65);
}
