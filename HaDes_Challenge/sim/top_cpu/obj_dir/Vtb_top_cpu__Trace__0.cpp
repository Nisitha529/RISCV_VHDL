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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_top_cpu__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelf->tb_top_cpu__DOT__external_interrupt_in));
        bufp->chgBit(oldp+2,(vlSelf->tb_top_cpu__DOT__timer_interrupt_in));
        bufp->chgIData(oldp+3,(vlSelf->tb_top_cpu__DOT__pass_count),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_top_cpu__DOT__fail_count),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_top_cpu__DOT__expected_auipc_value),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_top_cpu__DOT__expected_jalr_link_value),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+7,(((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))
                                 ? 2U : ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))
                                          ? 1U : 0U))),2);
        bufp->chgIData(oldp+8,(((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))
                                 ? vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in
                                 : ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))
                                     ? vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in
                                     : 0U))),32);
        bufp->chgCData(oldp+9,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_backwards_out),2);
        bufp->chgIData(oldp+10,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_jump_address_out),32);
        bufp->chgCData(oldp+11,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                                  ? 2U : 0U)),2);
        bufp->chgIData(oldp+12,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_jump_address_out),32);
        bufp->chgCData(oldp+13,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in),2);
        bufp->chgIData(oldp+14,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in),32);
        bufp->chgCData(oldp+15,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in),2);
        bufp->chgIData(oldp+16,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in),32);
        bufp->chgCData(oldp+17,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in),2);
        bufp->chgIData(oldp+18,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in),32);
        bufp->chgCData(oldp+19,(((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                                          ? 2U : 0U))
                                  ? 2U : 0U)),2);
        bufp->chgIData(oldp+20,(((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                                          ? 2U : 0U))
                                  ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_jump_address_out
                                  : 0U)),32);
        bufp->chgBit(oldp+21,((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                                       ? 2U : 0U))));
        bufp->chgBit(oldp+22,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_backwards_out))));
        bufp->chgBit(oldp+23,(vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard));
        bufp->chgCData(oldp+24,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_status_in),4);
        bufp->chgBit(oldp+25,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))));
        bufp->chgBit(oldp+26,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))));
        bufp->chgBit(oldp+27,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in))));
        bufp->chgBit(oldp+28,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in))));
        bufp->chgCData(oldp+29,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__status_backwards_comb),2);
        bufp->chgIData(oldp+30,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__jump_address_comb),32);
        bufp->chgBit(oldp+31,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in))));
        bufp->chgBit(oldp+32,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in))));
        bufp->chgBit(oldp+33,((2U == ((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                                               ? 2U
                                               : 0U))
                                       ? 2U : 0U))));
        bufp->chgBit(oldp+34,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__launch_memory_op));
        bufp->chgBit(oldp+35,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_cyc_comb));
        bufp->chgBit(oldp+36,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_stb_comb));
        bufp->chgIData(oldp+37,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb),32);
        bufp->chgCData(oldp+38,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel_comb),4);
        bufp->chgBit(oldp+39,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_we_comb));
        bufp->chgIData(oldp+40,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_dat_mosi_comb),32);
        bufp->chgBit(oldp+41,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__timer_interrupt_taken));
        bufp->chgBit(oldp+42,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__external_interrupt_taken));
        bufp->chgBit(oldp+43,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_taken));
        bufp->chgIData(oldp+44,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_cause),32);
        bufp->chgBit(oldp+45,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken));
        bufp->chgIData(oldp+46,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_cause),32);
        bufp->chgIData(oldp+47,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_tval),32);
        bufp->chgBit(oldp+48,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken));
        bufp->chgIData(oldp+49,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_address),32);
        bufp->chgBit(oldp+50,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_writes_rd_comb));
        bufp->chgIData(oldp+51,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_rd_data_comb),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+52,(vlSelf->tb_top_cpu__DOT__fetch_pc_byte),32);
        bufp->chgIData(oldp+53,(vlSelf->tb_top_cpu__DOT__fetch_word_index),32);
        bufp->chgIData(oldp+54,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction),32);
        bufp->chgIData(oldp+55,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc),32);
        bufp->chgCData(oldp+56,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_status),4);
        bufp->chgIData(oldp+57,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data),32);
        bufp->chgIData(oldp+58,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data),32);
        bufp->chgIData(oldp+59,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc),32);
        bufp->chgWData(oldp+60,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction),65);
        bufp->chgCData(oldp+63,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status),4);
        bufp->chgIData(oldp+64,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data),32);
        bufp->chgIData(oldp+65,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data),32);
        bufp->chgWData(oldp+66,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction),65);
        bufp->chgIData(oldp+69,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc),32);
        bufp->chgIData(oldp+70,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc),32);
        bufp->chgQData(oldp+71,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding),38);
        bufp->chgCData(oldp+73,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status),4);
        bufp->chgIData(oldp+74,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data),32);
        bufp->chgIData(oldp+75,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data),32);
        bufp->chgWData(oldp+76,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction),65);
        bufp->chgIData(oldp+79,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc),32);
        bufp->chgIData(oldp+80,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc),32);
        bufp->chgQData(oldp+81,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding),38);
        bufp->chgCData(oldp+83,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status),4);
        bufp->chgQData(oldp+84,(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding),38);
        bufp->chgCData(oldp+86,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out),2);
        bufp->chgIData(oldp+87,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_out),32);
        bufp->chgWData(oldp+88,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction),65);
        bufp->chgBit(oldp+91,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs1_used));
        bufp->chgBit(oldp+92,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs2_used));
        bufp->chgBit(oldp+93,(vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard_raw));
        bufp->chgBit(oldp+94,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out))));
        bufp->chgWData(oldp+95,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction),65);
        bufp->chgIData(oldp+98,(((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                                  >> 0x11U)))
                                  ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs
                                 [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                            >> 0x11U))])),32);
        bufp->chgIData(oldp+99,(((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                                  >> 0xcU)))
                                  ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs
                                 [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                            >> 0xcU))])),32);
        bufp->chgIData(oldp+100,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_selected),32);
        bufp->chgIData(oldp+101,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_selected),32);
        bufp->chgBit(oldp+102,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used));
        bufp->chgBit(oldp+103,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used));
        bufp->chgCData(oldp+104,((0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)),7);
        bufp->chgCData(oldp+105,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                           >> 7U))),5);
        bufp->chgCData(oldp+106,((7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+107,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+108,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+109,((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+110,((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                  >> 0x14U)),12);
        bufp->chgCData(oldp+111,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type),3);
        bufp->chgIData(oldp+112,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out),32);
        bufp->chgCData(oldp+113,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                           >> 0x11U))),5);
        bufp->chgCData(oldp+114,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                           >> 0xcU))),5);
        bufp->chgBit(oldp+115,((1U & (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding 
                                              >> 0x25U)))));
        bufp->chgCData(oldp+116,((0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding))),5);
        bufp->chgIData(oldp+117,((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding 
                                          >> 5U))),32);
        bufp->chgIData(oldp+118,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+119,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+120,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+121,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+122,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+123,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+124,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+125,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+126,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+127,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+128,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+129,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+130,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+131,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+132,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+133,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+134,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+135,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+136,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+137,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+138,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+139,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+140,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+141,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+142,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+143,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+144,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+145,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+146,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+147,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+148,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+149,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[31]),32);
        bufp->chgIData(oldp+150,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__i),32);
        bufp->chgCData(oldp+151,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op),4);
        bufp->chgBit(oldp+152,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm));
        bufp->chgBit(oldp+153,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch));
        bufp->chgBit(oldp+154,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump));
        bufp->chgBit(oldp+155,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr));
        bufp->chgBit(oldp+156,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load));
        bufp->chgBit(oldp+157,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store));
        bufp->chgBit(oldp+158,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_fence_i));
        bufp->chgBit(oldp+159,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_system_or_csr));
        bufp->chgIData(oldp+160,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2),32);
        bufp->chgIData(oldp+161,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result),32);
        bufp->chgBit(oldp+162,((0U == vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)));
        bufp->chgBit(oldp+163,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch));
        bufp->chgIData(oldp+164,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_target),32);
        bufp->chgIData(oldp+165,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr)
                                   ? (0xfffffffeU & 
                                      (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                                       + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U]))
                                   : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_target)),32);
        bufp->chgIData(oldp+166,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__next_pc_comb),32);
        bufp->chgBit(oldp+167,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_or_jump_redirect));
        bufp->chgBit(oldp+168,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__fetch_misaligned));
        bufp->chgIData(oldp+169,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value_comb),32);
        bufp->chgIData(oldp+170,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store)
                                   ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data
                                   : ((((0x29U == (0x3fU 
                                                   & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                       << 5U) 
                                                      | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                         >> 0x1bU)))) 
                                        | (0x2aU == 
                                           (0x3fU & 
                                            ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                              << 5U) 
                                             | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                >> 0x1bU))))) 
                                       | (0x2bU == 
                                          (0x3fU & 
                                           ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                               >> 0x1bU)))))
                                       ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data
                                       : ((((0x2cU 
                                             == (0x3fU 
                                                 & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                     << 5U) 
                                                    | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                       >> 0x1bU)))) 
                                            | (0x2dU 
                                               == (0x3fU 
                                                   & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                       << 5U) 
                                                      | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                         >> 0x1bU))))) 
                                           | (0x2eU 
                                              == (0x3fU 
                                                  & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                      << 5U) 
                                                     | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                        >> 0x1bU)))))
                                           ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U]
                                           : 0U)))),32);
        bufp->chgBit(oldp+171,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__forward_valid_comb));
        bufp->chgCData(oldp+172,(((0U != (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status))
                                   ? (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status)
                                   : ((0x31U == (0x3fU 
                                                 & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                     << 5U) 
                                                    | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                       >> 0x1bU))))
                                       ? 4U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__fetch_misaligned)
                                                ? 2U
                                                : 0U)))),4);
        bufp->chgCData(oldp+173,((0x1fU & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2)),5);
        bufp->chgBit(oldp+174,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state));
        bufp->chgIData(oldp+175,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc),32);
        bufp->chgIData(oldp+176,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc),32);
        bufp->chgBit(oldp+177,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid));
        bufp->chgIData(oldp+178,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr),32);
        bufp->chgIData(oldp+179,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc),32);
        bufp->chgCData(oldp+180,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status),4);
        bufp->chgBit(oldp+181,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response));
        bufp->chgBit(oldp+182,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.err));
        bufp->chgCData(oldp+184,(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_type),3);
        bufp->chgIData(oldp+185,(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_out),32);
        bufp->chgCData(oldp+186,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state),2);
        bufp->chgBit(oldp+187,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load));
        bufp->chgBit(oldp+188,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store));
        bufp->chgBit(oldp+189,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__valid_memory_op));
        bufp->chgBit(oldp+190,(((~ (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0)) 
                                & (0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status)))));
        bufp->chgBit(oldp+191,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__access_misaligned));
        bufp->chgCData(oldp+192,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load)
                                   ? 5U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store)
                                            ? 7U : 0U))),4);
        bufp->chgCData(oldp+193,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb),4);
        bufp->chgIData(oldp+194,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__store_data_comb),32);
        bufp->chgWData(oldp+195,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr),65);
        bufp->chgIData(oldp+198,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data),32);
        bufp->chgIData(oldp+199,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr),32);
        bufp->chgIData(oldp+200,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_store_data),32);
        bufp->chgIData(oldp+201,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc),32);
        bufp->chgIData(oldp+202,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc),32);
        bufp->chgCData(oldp+203,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_sel),4);
        bufp->chgBit(oldp+204,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load));
        bufp->chgBit(oldp+205,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store));
        bufp->chgIData(oldp+206,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_load_value_comb),32);
        bufp->chgIData(oldp+207,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb),32);
        bufp->chgCData(oldp+208,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load)
                                   ? 6U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store)
                                            ? 8U : 0U))),4);
        bufp->chgCData(oldp+209,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load)
                                   ? 6U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store)
                                            ? 8U : 0U))),4);
        bufp->chgIData(oldp+210,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus),32);
        bufp->chgIData(oldp+211,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie),32);
        bufp->chgIData(oldp+212,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtvec),32);
        bufp->chgIData(oldp+213,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mepc),32);
        bufp->chgIData(oldp+214,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mcause),32);
        bufp->chgIData(oldp+215,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtval),32);
        bufp->chgIData(oldp+216,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mip),32);
        bufp->chgSData(oldp+217,((0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])),12);
        bufp->chgBit(oldp+218,((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))));
        bufp->chgBit(oldp+219,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__is_csr));
        bufp->chgBit(oldp+220,((0x2fU == (0x3fU & (
                                                   (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                                      >> 0x1bU))))));
        bufp->chgBit(oldp+221,((0x27U == (0x3fU & (
                                                   (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                                      >> 0x1bU))))));
        bufp->chgBit(oldp+222,((0x28U == (0x3fU & (
                                                   (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                                      >> 0x1bU))))));
        bufp->chgIData(oldp+223,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data),32);
        bufp->chgIData(oldp+224,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data),32);
        bufp->chgBit(oldp+225,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_enable));
        bufp->chgBit(oldp+226,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd_normal));
        bufp->chgBit(oldp+227,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__pipeline_exception));
        bufp->chgIData(oldp+228,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause),32);
        bufp->chgIData(oldp+229,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval),32);
        bufp->chgBit(oldp+230,((1U & (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
                                      >> 3U))));
        bufp->chgBit(oldp+231,((1U & (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie 
                                      >> 7U))));
        bufp->chgBit(oldp+232,((1U & (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie 
                                      >> 0xbU))));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.cyc));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.stb));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.ack));
        bufp->chgIData(oldp+236,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.adr),32);
        bufp->chgCData(oldp+237,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.sel),4);
        bufp->chgBit(oldp+238,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.we));
        bufp->chgIData(oldp+239,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.dat_mosi),32);
        bufp->chgIData(oldp+240,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.dat_miso),32);
        bufp->chgBit(oldp+241,(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.ack));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.err));
        bufp->chgIData(oldp+243,(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso),32);
    }
    bufp->chgBit(oldp+244,(vlSelf->tb_top_cpu__DOT__clk));
    bufp->chgBit(oldp+245,(((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                                     ? 2U : 0U)) | 
                            (2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out)))));
    bufp->chgBit(oldp+246,((1U & (~ ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state) 
                                     | ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid) 
                                        | ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in)) 
                                           | (2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in)))))))));
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
