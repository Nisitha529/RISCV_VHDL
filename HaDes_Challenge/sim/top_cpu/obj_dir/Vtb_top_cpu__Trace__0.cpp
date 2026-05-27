// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top_cpu__Syms.h"


void Vtb_top_cpu___024root__trace_chg_sub_0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_top_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_top_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_cpu___024root*>(voidSelf);
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_top_cpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_top_cpu___024root__trace_chg_sub_0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc),32);
        bufp->chgWData(oldp+5,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr),65);
        bufp->chgIData(oldp+8,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value),32);
        bufp->chgIData(oldp+10,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump)
                                  ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr)
                                      ? (0xfffffffeU 
                                         & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                                            + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U]))
                                      : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                                         + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U]))
                                  : (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                                      & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch))
                                      ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                                         + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U])
                                      : ((IData)(4U) 
                                         + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc)))),32);
        bufp->chgQData(oldp+11,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_fwd),38);
        bufp->chgIData(oldp+13,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data),32);
        bufp->chgIData(oldp+14,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data),32);
        bufp->chgIData(oldp+15,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc),32);
        bufp->chgIData(oldp+16,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc),32);
        bufp->chgWData(oldp+17,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr),65);
        bufp->chgQData(oldp+20,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_fwd),38);
        bufp->chgQData(oldp+22,(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_fwd),38);
        bufp->chgCData(oldp+24,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out),2);
        bufp->chgCData(oldp+25,(((((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                                   & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch)) 
                                  | (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+26,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_backwards_out),2);
        bufp->chgIData(oldp+27,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_addr),32);
        bufp->chgIData(oldp+28,(((((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                                   & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch)) 
                                  | (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump))
                                  ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump)
                                      ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr)
                                          ? (0xfffffffeU 
                                             & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                                                + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U]))
                                          : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                                             + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U]))
                                      : (((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                                          & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch))
                                          ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                                             + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U])
                                          : ((IData)(4U) 
                                             + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc)))
                                  : 0U)),32);
        bufp->chgIData(oldp+29,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_jump_addr),32);
        bufp->chgBit(oldp+30,(vlSelf->tb_top_cpu__DOT__dut__DOT__load_use_hazard));
        bufp->chgCData(oldp+31,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in),2);
        bufp->chgCData(oldp+32,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__status_forwards_out),4);
        bufp->chgCData(oldp+33,((0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)),7);
        bufp->chgCData(oldp+34,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+35,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+36,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+37,((7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+38,((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+39,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_type),3);
        bufp->chgIData(oldp+40,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_out),32);
        bufp->chgIData(oldp+41,(((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                  >> 0xfU)))
                                  ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs
                                 [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                            >> 0xfU))])),32);
        bufp->chgIData(oldp+42,(((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                  >> 0x14U)))
                                  ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs
                                 [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                            >> 0x14U))])),32);
        bufp->chgIData(oldp+43,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_fwd),32);
        bufp->chgIData(oldp+44,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_fwd),32);
        bufp->chgWData(oldp+45,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed),65);
        bufp->chgBit(oldp+48,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))));
        bufp->chgBit(oldp+49,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))));
        bufp->chgBit(oldp+50,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used));
        bufp->chgBit(oldp+51,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used));
        bufp->chgSData(oldp+52,((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                 >> 0x14U)),12);
        bufp->chgIData(oldp+53,((((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+54,((((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+55,((((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                              >> 0x1fU))) 
                                  << 0xdU) | ((0x1000U 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                          >> 7U))))))),32);
        bufp->chgIData(oldp+56,((0xfffff000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)),32);
        bufp->chgIData(oldp+57,((((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                           >> 0x14U))))))),32);
        bufp->chgBit(oldp+58,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT____Vcellinp__regfile_inst__write_enable));
        bufp->chgCData(oldp+59,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U] 
                                          >> 0x16U))),5);
        bufp->chgIData(oldp+60,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+61,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+62,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+63,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+64,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+65,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+66,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+67,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+68,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+69,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+70,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+71,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+72,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+73,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+74,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+75,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+76,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+77,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+78,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+79,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+80,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+81,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+82,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+83,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+84,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+85,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+86,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+87,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+88,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+89,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+90,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+91,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs[31]),32);
        bufp->chgIData(oldp+92,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__i),32);
        bufp->chgCData(oldp+93,(((0x31U == (0x3fU & 
                                            ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[2U] 
                                              << 5U) 
                                             | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                                >> 0x1bU))))
                                  ? 4U : 0U)),4);
        bufp->chgCData(oldp+94,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op),4);
        bufp->chgBit(oldp+95,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm));
        bufp->chgBit(oldp+96,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch));
        bufp->chgBit(oldp+97,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump));
        bufp->chgBit(oldp+98,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store));
        bufp->chgBit(oldp+99,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load));
        bufp->chgBit(oldp+100,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr));
        bufp->chgIData(oldp+101,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2),32);
        bufp->chgIData(oldp+102,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result),32);
        bufp->chgBit(oldp+103,((0U == vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)));
        bufp->chgBit(oldp+104,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch));
        bufp->chgCData(oldp+105,((0x1fU & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2)),5);
        bufp->chgCData(oldp+106,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__status_forwards_out),4);
        bufp->chgBit(oldp+107,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state));
        bufp->chgIData(oldp+108,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc),32);
        bufp->chgIData(oldp+109,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc),32);
        bufp->chgBit(oldp+110,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid));
        bufp->chgIData(oldp+111,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr),32);
        bufp->chgIData(oldp+112,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc),32);
        bufp->chgCData(oldp+113,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status),4);
        bufp->chgBit(oldp+114,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response));
        bufp->chgBit(oldp+115,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out))));
        bufp->chgBit(oldp+116,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out))));
        bufp->chgBit(oldp+117,((1U & (~ ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state) 
                                         | ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid) 
                                            | ((1U 
                                                == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out)) 
                                               | (2U 
                                                  == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out)))))))));
        bufp->chgCData(oldp+118,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__status_forwards_out),4);
        bufp->chgBit(oldp+119,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load));
        bufp->chgBit(oldp+120,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store));
        bufp->chgBit(oldp+121,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state));
        bufp->chgWData(oldp+122,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr),65);
        bufp->chgIData(oldp+125,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data),32);
        bufp->chgIData(oldp+126,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_rd_data),32);
        bufp->chgIData(oldp+127,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc),32);
        bufp->chgIData(oldp+128,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc),32);
        bufp->chgBit(oldp+129,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load));
        bufp->chgBit(oldp+130,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store));
        bufp->chgBit(oldp+131,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd));
        bufp->chgIData(oldp+132,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.adr),32);
        bufp->chgCData(oldp+133,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.sel),4);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.dat_mosi),32);
        bufp->chgBit(oldp+135,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.cyc));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.stb));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.we));
        bufp->chgIData(oldp+138,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.adr),32);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.sel),4);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_mosi),32);
        bufp->chgBit(oldp+141,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.cyc));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.stb));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.we));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+144,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.err));
        bufp->chgIData(oldp+145,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.dat_miso),32);
        bufp->chgBit(oldp+146,(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.ack));
        bufp->chgIData(oldp+147,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso),32);
        bufp->chgBit(oldp+148,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.ack));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.err));
    }
    bufp->chgBit(oldp+150,(vlSelf->tb_top_cpu__DOT__clk));
    bufp->chgBit(oldp+151,(vlSelf->tb_top_cpu__DOT__rst));
    bufp->chgBit(oldp+152,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid));
    bufp->chgIData(oldp+153,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__load_value),32);
    bufp->chgIData(oldp+154,(vlSelf->tb_top_cpu__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+155,(vlSelf->tb_top_cpu__DOT__unnamedblk2__DOT__i),32);
}

void Vtb_top_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_cleanup\n"); );
    // Init
    Vtb_top_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_cpu___024root*>(voidSelf);
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
