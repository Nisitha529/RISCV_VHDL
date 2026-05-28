// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top_cpu__Syms.h"


VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_sub__TOP__0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_top_cpu ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"external_interrupt_in", false,-1);
    tracep->declBit(c+3,"timer_interrupt_in", false,-1);
    tracep->declBus(c+4,"pass_count", false,-1, 31,0);
    tracep->declBus(c+5,"fail_count", false,-1, 31,0);
    tracep->declBus(c+243,"IMEM_WORDS", false,-1, 31,0);
    tracep->declBus(c+244,"DMEM_BYTES", false,-1, 31,0);
    tracep->declBus(c+245,"RESET_PC", false,-1, 31,0);
    tracep->declBus(c+246,"DATA_BASE", false,-1, 31,0);
    tracep->declBus(c+247,"TRAP_PC", false,-1, 31,0);
    tracep->declBus(c+248,"FETCH_FAULT_PC", false,-1, 31,0);
    tracep->declBus(c+249,"DATA_FAULT_ADDR", false,-1, 31,0);
    tracep->declBus(c+250,"MCAUSE_INSTR_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+251,"MCAUSE_INSTR_FAULT", false,-1, 31,0);
    tracep->declBus(c+252,"MCAUSE_ILLEGAL", false,-1, 31,0);
    tracep->declBus(c+253,"MCAUSE_BREAKPOINT", false,-1, 31,0);
    tracep->declBus(c+254,"MCAUSE_LOAD_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+255,"MCAUSE_LOAD_FAULT", false,-1, 31,0);
    tracep->declBus(c+256,"MCAUSE_STORE_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+257,"MCAUSE_STORE_FAULT", false,-1, 31,0);
    tracep->declBus(c+258,"MCAUSE_ECALL_MMODE", false,-1, 31,0);
    tracep->declBus(c+259,"MCAUSE_TIMER_INTERRUPT", false,-1, 31,0);
    tracep->declBus(c+260,"MCAUSE_EXT_INTERRUPT", false,-1, 31,0);
    tracep->declBus(c+261,"MSTATUS_MIE", false,-1, 31,0);
    tracep->declBus(c+262,"MIE_MTIE", false,-1, 31,0);
    tracep->declBus(c+263,"MIE_MEIE", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"external_interrupt_in", false,-1);
    tracep->declBit(c+3,"timer_interrupt_in", false,-1);
    tracep->declBus(c+51,"if_id_instruction", false,-1, 31,0);
    tracep->declBus(c+52,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+53,"if_id_status", false,-1, 3,0);
    tracep->declBus(c+54,"id_ex_rs1_data", false,-1, 31,0);
    tracep->declBus(c+55,"id_ex_rs2_data", false,-1, 31,0);
    tracep->declBus(c+56,"id_ex_pc", false,-1, 31,0);
    tracep->declArray(c+57,"id_ex_instruction", false,-1, 64,0);
    tracep->declBus(c+60,"id_ex_status", false,-1, 3,0);
    tracep->declBus(c+61,"ex_mem_source_data", false,-1, 31,0);
    tracep->declBus(c+62,"ex_mem_rd_data", false,-1, 31,0);
    tracep->declArray(c+63,"ex_mem_instruction", false,-1, 64,0);
    tracep->declBus(c+66,"ex_mem_pc", false,-1, 31,0);
    tracep->declBus(c+67,"ex_mem_next_pc", false,-1, 31,0);
    tracep->declQuad(c+68,"ex_mem_forwarding", false,-1, 37,0);
    tracep->declBus(c+70,"ex_mem_status", false,-1, 3,0);
    tracep->declBus(c+71,"mem_wb_source_data", false,-1, 31,0);
    tracep->declBus(c+72,"mem_wb_rd_data", false,-1, 31,0);
    tracep->declArray(c+73,"mem_wb_instruction", false,-1, 64,0);
    tracep->declBus(c+76,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+77,"mem_wb_next_pc", false,-1, 31,0);
    tracep->declQuad(c+78,"mem_wb_forwarding", false,-1, 37,0);
    tracep->declBus(c+80,"mem_wb_status", false,-1, 3,0);
    tracep->declQuad(c+81,"wb_forwarding", false,-1, 37,0);
    tracep->declBus(c+6,"decode_backwards_out", false,-1, 1,0);
    tracep->declBus(c+7,"decode_jump_address_out", false,-1, 31,0);
    tracep->declBus(c+83,"execute_backwards_out", false,-1, 1,0);
    tracep->declBus(c+84,"execute_jump_address_out", false,-1, 31,0);
    tracep->declBus(c+8,"memory_backwards_out", false,-1, 1,0);
    tracep->declBus(c+9,"memory_jump_address_out", false,-1, 31,0);
    tracep->declBus(c+10,"writeback_backwards_out", false,-1, 1,0);
    tracep->declBus(c+11,"writeback_jump_address_out", false,-1, 31,0);
    tracep->declBus(c+12,"fetch_backwards_in", false,-1, 1,0);
    tracep->declBus(c+13,"fetch_jump_address_in", false,-1, 31,0);
    tracep->declBus(c+14,"decode_backwards_in", false,-1, 1,0);
    tracep->declBus(c+15,"decode_jump_address_in", false,-1, 31,0);
    tracep->declBus(c+16,"execute_backwards_in", false,-1, 1,0);
    tracep->declBus(c+17,"execute_jump_address_in", false,-1, 31,0);
    tracep->declBus(c+18,"memory_backwards_in", false,-1, 1,0);
    tracep->declBus(c+19,"memory_jump_address_in", false,-1, 31,0);
    tracep->declArray(c+85,"if_id_decoded_instruction", false,-1, 64,0);
    tracep->declBit(c+88,"id_rs1_used", false,-1);
    tracep->declBit(c+89,"id_rs2_used", false,-1);
    tracep->declBit(c+90,"late_result_use_hazard_raw", false,-1);
    tracep->declBit(c+20,"wb_redirect", false,-1);
    tracep->declBit(c+91,"ex_redirect", false,-1);
    tracep->declBus(c+11,"wb_redirect_addr", false,-1, 31,0);
    tracep->declBus(c+84,"ex_redirect_addr", false,-1, 31,0);
    tracep->declBit(c+242,"any_redirect", false,-1);
    tracep->declBit(c+21,"memory_busy_stall", false,-1);
    tracep->declBit(c+22,"late_result_use_hazard", false,-1);
    tracep->declBus(c+23,"decode_status_in", false,-1, 3,0);
    tracep->pushNamePrefix("decode_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+51,"instruction_in", false,-1, 31,0);
    tracep->declBus(c+52,"program_counter_in", false,-1, 31,0);
    tracep->declQuad(c+68,"exe_forwarding_in", false,-1, 37,0);
    tracep->declQuad(c+78,"mem_forwarding_in", false,-1, 37,0);
    tracep->declQuad(c+81,"wb_forwarding_in", false,-1, 37,0);
    tracep->declBus(c+54,"rs1_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+55,"rs2_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+56,"program_counter_reg_out", false,-1, 31,0);
    tracep->declArray(c+57,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+23,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+60,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+14,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+6,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+15,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+7,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declArray(c+92,"decoded_instruction", false,-1, 64,0);
    tracep->declBus(c+95,"rs1_raw", false,-1, 31,0);
    tracep->declBus(c+96,"rs2_raw", false,-1, 31,0);
    tracep->declBus(c+97,"rs1_selected", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_selected", false,-1, 31,0);
    tracep->declBit(c+99,"rs1_used", false,-1);
    tracep->declBit(c+100,"rs2_used", false,-1);
    tracep->declBit(c+24,"downstream_stall", false,-1);
    tracep->declBit(c+25,"downstream_jump", false,-1);
    tracep->pushNamePrefix("instruction_decoder_inst ");
    tracep->declBus(c+264,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"instruction_in", false,-1, 31,0);
    tracep->declArray(c+92,"instruction_out", false,-1, 64,0);
    tracep->declBus(c+101,"opcode", false,-1, 6,0);
    tracep->declBus(c+102,"rd", false,-1, 4,0);
    tracep->declBus(c+103,"funct3", false,-1, 2,0);
    tracep->declBus(c+104,"rs1", false,-1, 4,0);
    tracep->declBus(c+105,"rs2", false,-1, 4,0);
    tracep->declBus(c+106,"funct7", false,-1, 6,0);
    tracep->declBus(c+107,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+108,"imm_type", false,-1, 2,0);
    tracep->declBus(c+109,"imm_out", false,-1, 31,0);
    tracep->pushNamePrefix("immediate_generator_inst ");
    tracep->declBus(c+51,"instr", false,-1, 31,0);
    tracep->declBus(c+108,"imm_type", false,-1, 2,0);
    tracep->declBus(c+109,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register_file_inst ");
    tracep->declBus(c+264,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+110,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+111,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+112,"write_enable", false,-1);
    tracep->declBus(c+113,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+114,"rd_data", false,-1, 31,0);
    tracep->declBus(c+95,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+96,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+115+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+147,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("execute_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+54,"rs1_data_in", false,-1, 31,0);
    tracep->declBus(c+55,"rs2_data_in", false,-1, 31,0);
    tracep->declArray(c+57,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+56,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+61,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+62,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+63,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+66,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+67,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+68,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+60,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+70,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+16,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+83,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+17,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+84,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBit(c+26,"downstream_stall", false,-1);
    tracep->declBit(c+27,"downstream_jump", false,-1);
    tracep->declBus(c+148,"alu_op", false,-1, 3,0);
    tracep->declBit(c+149,"alu_use_imm", false,-1);
    tracep->declBit(c+150,"is_branch", false,-1);
    tracep->declBit(c+151,"is_jump", false,-1);
    tracep->declBit(c+152,"is_jalr", false,-1);
    tracep->declBit(c+153,"is_load", false,-1);
    tracep->declBit(c+154,"is_store", false,-1);
    tracep->declBit(c+155,"is_fence_i", false,-1);
    tracep->declBit(c+156,"is_system_or_csr", false,-1);
    tracep->declBus(c+54,"alu_op1", false,-1, 31,0);
    tracep->declBus(c+157,"alu_op2", false,-1, 31,0);
    tracep->declBus(c+158,"alu_result", false,-1, 31,0);
    tracep->declBit(c+159,"alu_zero", false,-1);
    tracep->declBit(c+160,"take_branch", false,-1);
    tracep->declBus(c+161,"branch_target", false,-1, 31,0);
    tracep->declBus(c+162,"jump_target", false,-1, 31,0);
    tracep->declBus(c+163,"next_pc_comb", false,-1, 31,0);
    tracep->declBit(c+164,"branch_or_jump_redirect", false,-1);
    tracep->declBit(c+165,"fetch_misaligned", false,-1);
    tracep->declBus(c+166,"rd_value_comb", false,-1, 31,0);
    tracep->declBus(c+167,"source_data_comb", false,-1, 31,0);
    tracep->declBit(c+168,"forward_valid_comb", false,-1);
    tracep->declBus(c+169,"status_forward_comb", false,-1, 3,0);
    tracep->declBus(c+28,"status_backwards_comb", false,-1, 1,0);
    tracep->declBus(c+29,"jump_address_comb", false,-1, 31,0);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+264,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+54,"op1", false,-1, 31,0);
    tracep->declBus(c+157,"op2", false,-1, 31,0);
    tracep->declBus(c+148,"alu_op", false,-1, 3,0);
    tracep->declBus(c+158,"result", false,-1, 31,0);
    tracep->declBit(c+159,"zero", false,-1);
    tracep->declBus(c+170,"shamt", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch_inst ");
    tracep->declBus(c+264,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+51,"instruction_reg_out", false,-1, 31,0);
    tracep->declBus(c+52,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+53,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+12,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+13,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+266,"NOP_INSTR", false,-1, 31,0);
    tracep->declBus(c+171,"wb_state", false,-1, 0,0);
    tracep->declBus(c+172,"pc", false,-1, 31,0);
    tracep->declBus(c+173,"request_pc", false,-1, 31,0);
    tracep->declBit(c+174,"pending_valid", false,-1);
    tracep->declBus(c+175,"pending_instr", false,-1, 31,0);
    tracep->declBus(c+176,"pending_pc", false,-1, 31,0);
    tracep->declBus(c+177,"pending_status", false,-1, 3,0);
    tracep->declBit(c+178,"kill_response", false,-1);
    tracep->declBit(c+30,"downstream_stall", false,-1);
    tracep->declBit(c+31,"downstream_jump", false,-1);
    tracep->declBit(c+179,"response_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_instruction_decoder ");
    tracep->declBus(c+264,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"instruction_in", false,-1, 31,0);
    tracep->declArray(c+85,"instruction_out", false,-1, 64,0);
    tracep->declBus(c+101,"opcode", false,-1, 6,0);
    tracep->declBus(c+102,"rd", false,-1, 4,0);
    tracep->declBus(c+103,"funct3", false,-1, 2,0);
    tracep->declBus(c+104,"rs1", false,-1, 4,0);
    tracep->declBus(c+105,"rs2", false,-1, 4,0);
    tracep->declBus(c+106,"funct7", false,-1, 6,0);
    tracep->declBus(c+107,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+180,"imm_type", false,-1, 2,0);
    tracep->declBus(c+181,"imm_out", false,-1, 31,0);
    tracep->pushNamePrefix("immediate_generator_inst ");
    tracep->declBus(c+51,"instr", false,-1, 31,0);
    tracep->declBus(c+180,"imm_type", false,-1, 2,0);
    tracep->declBus(c+181,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+61,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+62,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+63,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+66,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+67,"next_program_counter_in", false,-1, 31,0);
    tracep->declBus(c+71,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+72,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+73,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+76,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+77,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+78,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+70,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+80,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+18,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+8,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+19,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+9,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+182,"wb_state", false,-1, 1,0);
    tracep->declBit(c+32,"downstream_jump", false,-1);
    tracep->declBit(c+183,"is_load", false,-1);
    tracep->declBit(c+184,"is_store", false,-1);
    tracep->declBit(c+185,"valid_memory_op", false,-1);
    tracep->declBit(c+186,"valid_non_memory_op", false,-1);
    tracep->declBit(c+187,"access_misaligned", false,-1);
    tracep->declBus(c+188,"misaligned_status_comb", false,-1, 3,0);
    tracep->declBus(c+189,"byte_sel_comb", false,-1, 3,0);
    tracep->declBus(c+190,"store_data_comb", false,-1, 31,0);
    tracep->declArray(c+191,"active_instr", false,-1, 64,0);
    tracep->declBus(c+194,"active_source_data", false,-1, 31,0);
    tracep->declBus(c+195,"active_addr", false,-1, 31,0);
    tracep->declBus(c+196,"active_store_data", false,-1, 31,0);
    tracep->declBus(c+197,"active_pc", false,-1, 31,0);
    tracep->declBus(c+198,"active_next_pc", false,-1, 31,0);
    tracep->declBus(c+199,"active_sel", false,-1, 3,0);
    tracep->declBit(c+200,"active_is_load", false,-1);
    tracep->declBit(c+201,"active_is_store", false,-1);
    tracep->declBit(c+33,"launch_memory_op", false,-1);
    tracep->declBit(c+34,"wb_cyc_comb", false,-1);
    tracep->declBit(c+35,"wb_stb_comb", false,-1);
    tracep->declBus(c+36,"wb_adr_comb", false,-1, 31,0);
    tracep->declBus(c+37,"wb_sel_comb", false,-1, 3,0);
    tracep->declBit(c+38,"wb_we_comb", false,-1);
    tracep->declBus(c+39,"wb_dat_mosi_comb", false,-1, 31,0);
    tracep->declBus(c+202,"active_load_value_comb", false,-1, 31,0);
    tracep->declBus(c+203,"live_load_value_comb", false,-1, 31,0);
    tracep->declBus(c+204,"active_fault_status_comb", false,-1, 3,0);
    tracep->declBus(c+205,"live_fault_status_comb", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("writeback_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+71,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+72,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+73,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+76,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+77,"next_program_counter_in", false,-1, 31,0);
    tracep->declBit(c+2,"external_interrupt_in", false,-1);
    tracep->declBit(c+3,"timer_interrupt_in", false,-1);
    tracep->declQuad(c+81,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+80,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+10,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+11,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+267,"CSR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+268,"CSR_MIE", false,-1, 11,0);
    tracep->declBus(c+269,"CSR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+270,"CSR_MEPC", false,-1, 11,0);
    tracep->declBus(c+271,"CSR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+272,"CSR_MTVAL", false,-1, 11,0);
    tracep->declBus(c+273,"CSR_MIP", false,-1, 11,0);
    tracep->declBus(c+274,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->declBus(c+275,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+275,"IRQ_MTIE_BIT", false,-1, 31,0);
    tracep->declBus(c+276,"IRQ_MEIE_BIT", false,-1, 31,0);
    tracep->declBus(c+250,"MCAUSE_INSTR_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+251,"MCAUSE_INSTR_FAULT", false,-1, 31,0);
    tracep->declBus(c+252,"MCAUSE_ILLEGAL", false,-1, 31,0);
    tracep->declBus(c+253,"MCAUSE_BREAKPOINT", false,-1, 31,0);
    tracep->declBus(c+254,"MCAUSE_LOAD_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+255,"MCAUSE_LOAD_FAULT", false,-1, 31,0);
    tracep->declBus(c+256,"MCAUSE_STORE_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+257,"MCAUSE_STORE_FAULT", false,-1, 31,0);
    tracep->declBus(c+258,"MCAUSE_ECALL_MMODE", false,-1, 31,0);
    tracep->declBus(c+259,"MCAUSE_TIMER_INTERRUPT", false,-1, 31,0);
    tracep->declBus(c+260,"MCAUSE_EXT_INTERRUPT", false,-1, 31,0);
    tracep->declBus(c+206,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+207,"csr_mie", false,-1, 31,0);
    tracep->declBus(c+208,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+209,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+210,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+211,"csr_mtval", false,-1, 31,0);
    tracep->declBus(c+212,"csr_mip", false,-1, 31,0);
    tracep->declBus(c+213,"csr_addr", false,-1, 11,0);
    tracep->declBit(c+214,"is_valid", false,-1);
    tracep->declBit(c+215,"is_csr", false,-1);
    tracep->declBit(c+216,"is_mret", false,-1);
    tracep->declBit(c+217,"is_ecall", false,-1);
    tracep->declBit(c+218,"is_ebreak", false,-1);
    tracep->declBus(c+219,"csr_read_data", false,-1, 31,0);
    tracep->declBus(c+220,"csr_write_data", false,-1, 31,0);
    tracep->declBit(c+221,"csr_write_enable", false,-1);
    tracep->declBit(c+222,"writes_rd_normal", false,-1);
    tracep->declBit(c+223,"pipeline_exception", false,-1);
    tracep->declBus(c+224,"exception_cause", false,-1, 31,0);
    tracep->declBus(c+225,"exception_tval", false,-1, 31,0);
    tracep->declBit(c+226,"global_interrupt_enable", false,-1);
    tracep->declBit(c+227,"timer_interrupt_enabled", false,-1);
    tracep->declBit(c+228,"external_interrupt_enabled", false,-1);
    tracep->declBit(c+40,"timer_interrupt_taken", false,-1);
    tracep->declBit(c+41,"external_interrupt_taken", false,-1);
    tracep->declBit(c+42,"interrupt_taken", false,-1);
    tracep->declBus(c+43,"interrupt_cause", false,-1, 31,0);
    tracep->declBit(c+44,"trap_taken", false,-1);
    tracep->declBus(c+45,"trap_cause", false,-1, 31,0);
    tracep->declBus(c+46,"trap_tval", false,-1, 31,0);
    tracep->declBit(c+47,"redirect_taken", false,-1);
    tracep->declBus(c+48,"redirect_address", false,-1, 31,0);
    tracep->declBit(c+49,"wb_writes_rd_comb", false,-1);
    tracep->declBus(c+50,"wb_rd_data_comb", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_sub__TOP__constants__0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_sub__TOP__constants__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+277,"MEMORY_START", false,-1, 31,0);
    tracep->declBus(c+278,"MEMORY_SIZE", false,-1, 31,0);
    tracep->declBus(c+279,"LEDS_START", false,-1, 31,0);
    tracep->declBus(c+280,"LEDS_SIZE", false,-1, 31,0);
    tracep->declBus(c+281,"BUTTONS_START", false,-1, 31,0);
    tracep->declBus(c+280,"BUTTONS_SIZE", false,-1, 31,0);
    tracep->declBus(c+282,"SWITCHES_START", false,-1, 31,0);
    tracep->declBus(c+280,"SWITCHES_SIZE", false,-1, 31,0);
    tracep->declBus(c+283,"SEGMENTS_START", false,-1, 31,0);
    tracep->declBus(c+280,"SEGMENTS_SIZE", false,-1, 31,0);
    tracep->declBus(c+284,"UART_START", false,-1, 31,0);
    tracep->declBus(c+280,"UART_SIZE", false,-1, 31,0);
    tracep->declBus(c+285,"TIMER_START", false,-1, 31,0);
    tracep->declBus(c+286,"TIMER_SIZE", false,-1, 31,0);
    tracep->declBus(c+287,"VGA_START", false,-1, 31,0);
    tracep->declBus(c+288,"VGA_SIZE", false,-1, 31,0);
    tracep->declBus(c+289,"TEST_START", false,-1, 31,0);
    tracep->declBus(c+286,"TEST_SIZE", false,-1, 31,0);
    tracep->declBus(c+290,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+291,"NOP", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_sub__TOP__instruction__0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+292,"NOP", false,-1, 64,0);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__fetch_wb__0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__fetch_wb__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+229,"cyc", false,-1);
    tracep->declBit(c+230,"stb", false,-1);
    tracep->declBit(c+231,"ack", false,-1);
    tracep->declBit(c+232,"err", false,-1);
    tracep->declBus(c+233,"adr", false,-1, 31,0);
    tracep->declBus(c+234,"sel", false,-1, 3,0);
    tracep->declBit(c+235,"we", false,-1);
    tracep->declBus(c+236,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+237,"dat_miso", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__mem_wb__0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__mem_wb__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+34,"cyc", false,-1);
    tracep->declBit(c+35,"stb", false,-1);
    tracep->declBit(c+238,"ack", false,-1);
    tracep->declBit(c+239,"err", false,-1);
    tracep->declBus(c+36,"adr", false,-1, 31,0);
    tracep->declBus(c+37,"sel", false,-1, 3,0);
    tracep->declBit(c+38,"we", false,-1);
    tracep->declBus(c+39,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+240,"dat_miso", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_init_top(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_init_top\n"); );
    // Body
    Vtb_top_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("constants ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__constants__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instruction ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__instruction__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tb_top_cpu ");
    tracep->pushNamePrefix("dut ");
    tracep->pushNamePrefix("fetch_inst ");
    tracep->pushNamePrefix("wb\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__fetch_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory_fetch_port\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__fetch_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory_inst ");
    tracep->pushNamePrefix("wb\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__mem_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory_mem_port\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__mem_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch_wb\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__fetch_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb\211 ");
    Vtb_top_cpu___024root__trace_init_sub__TOP__tb_top_cpu__DOT__mem_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_register(Vtb_top_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_top_cpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_top_cpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_top_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_full_sub_0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_full_top_0\n"); );
    // Init
    Vtb_top_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_cpu___024root*>(voidSelf);
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top_cpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top_cpu___024root__trace_full_sub_0(Vtb_top_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h3441a5c4__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_top_cpu__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelf->tb_top_cpu__DOT__external_interrupt_in));
    bufp->fullBit(oldp+3,(vlSelf->tb_top_cpu__DOT__timer_interrupt_in));
    bufp->fullIData(oldp+4,(vlSelf->tb_top_cpu__DOT__pass_count),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_top_cpu__DOT__fail_count),32);
    bufp->fullCData(oldp+6,(((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))
                              ? 2U : ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))
                                       ? 1U : 0U))),2);
    bufp->fullIData(oldp+7,(((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))
                              ? vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in
                              : ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))
                                  ? vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in
                                  : 0U))),32);
    bufp->fullCData(oldp+8,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_backwards_out),2);
    bufp->fullIData(oldp+9,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_jump_address_out),32);
    bufp->fullCData(oldp+10,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                               ? 2U : 0U)),2);
    bufp->fullIData(oldp+11,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_jump_address_out),32);
    bufp->fullCData(oldp+12,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in),2);
    bufp->fullIData(oldp+13,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in),32);
    bufp->fullCData(oldp+14,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in),2);
    bufp->fullIData(oldp+15,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in),32);
    bufp->fullCData(oldp+16,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in),2);
    bufp->fullIData(oldp+17,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in),32);
    bufp->fullCData(oldp+18,(((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                                       ? 2U : 0U)) ? 2U
                               : 0U)),2);
    bufp->fullIData(oldp+19,(((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                                       ? 2U : 0U)) ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_jump_address_out
                               : 0U)),32);
    bufp->fullBit(oldp+20,((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                                    ? 2U : 0U))));
    bufp->fullBit(oldp+21,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_backwards_out))));
    bufp->fullBit(oldp+22,(vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard));
    bufp->fullCData(oldp+23,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_status_in),4);
    bufp->fullBit(oldp+24,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))));
    bufp->fullBit(oldp+25,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))));
    bufp->fullBit(oldp+26,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in))));
    bufp->fullBit(oldp+27,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in))));
    bufp->fullCData(oldp+28,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__status_backwards_comb),2);
    bufp->fullIData(oldp+29,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__jump_address_comb),32);
    bufp->fullBit(oldp+30,((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in))));
    bufp->fullBit(oldp+31,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in))));
    bufp->fullBit(oldp+32,((2U == ((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                                            ? 2U : 0U))
                                    ? 2U : 0U))));
    bufp->fullBit(oldp+33,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__launch_memory_op));
    bufp->fullBit(oldp+34,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_cyc_comb));
    bufp->fullBit(oldp+35,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_stb_comb));
    bufp->fullIData(oldp+36,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb),32);
    bufp->fullCData(oldp+37,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel_comb),4);
    bufp->fullBit(oldp+38,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_we_comb));
    bufp->fullIData(oldp+39,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_dat_mosi_comb),32);
    bufp->fullBit(oldp+40,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__timer_interrupt_taken));
    bufp->fullBit(oldp+41,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__external_interrupt_taken));
    bufp->fullBit(oldp+42,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_taken));
    bufp->fullIData(oldp+43,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_cause),32);
    bufp->fullBit(oldp+44,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken));
    bufp->fullIData(oldp+45,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_cause),32);
    bufp->fullIData(oldp+46,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_tval),32);
    bufp->fullBit(oldp+47,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken));
    bufp->fullIData(oldp+48,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_address),32);
    bufp->fullBit(oldp+49,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_writes_rd_comb));
    bufp->fullIData(oldp+50,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_rd_data_comb),32);
    bufp->fullIData(oldp+51,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction),32);
    bufp->fullIData(oldp+52,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc),32);
    bufp->fullCData(oldp+53,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_status),4);
    bufp->fullIData(oldp+54,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data),32);
    bufp->fullIData(oldp+55,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data),32);
    bufp->fullIData(oldp+56,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc),32);
    bufp->fullWData(oldp+57,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction),65);
    bufp->fullCData(oldp+60,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status),4);
    bufp->fullIData(oldp+61,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data),32);
    bufp->fullIData(oldp+62,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data),32);
    bufp->fullWData(oldp+63,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_instruction),65);
    bufp->fullIData(oldp+66,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_pc),32);
    bufp->fullIData(oldp+67,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_next_pc),32);
    bufp->fullQData(oldp+68,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_forwarding),38);
    bufp->fullCData(oldp+70,(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status),4);
    bufp->fullIData(oldp+71,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_source_data),32);
    bufp->fullIData(oldp+72,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data),32);
    bufp->fullWData(oldp+73,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction),65);
    bufp->fullIData(oldp+76,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+77,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_next_pc),32);
    bufp->fullQData(oldp+78,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_forwarding),38);
    bufp->fullCData(oldp+80,(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status),4);
    bufp->fullQData(oldp+81,(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding),38);
    bufp->fullCData(oldp+83,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out),2);
    bufp->fullIData(oldp+84,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_out),32);
    bufp->fullWData(oldp+85,(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_decoded_instruction),65);
    bufp->fullBit(oldp+88,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs1_used));
    bufp->fullBit(oldp+89,(vlSelf->tb_top_cpu__DOT__dut__DOT__id_rs2_used));
    bufp->fullBit(oldp+90,(vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard_raw));
    bufp->fullBit(oldp+91,((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out))));
    bufp->fullWData(oldp+92,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction),65);
    bufp->fullIData(oldp+95,(((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0x11U)))
                               ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs
                              [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                         >> 0x11U))])),32);
    bufp->fullIData(oldp+96,(((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0xcU)))
                               ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs
                              [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                         >> 0xcU))])),32);
    bufp->fullIData(oldp+97,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_selected),32);
    bufp->fullIData(oldp+98,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_selected),32);
    bufp->fullBit(oldp+99,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used));
    bufp->fullBit(oldp+100,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used));
    bufp->fullCData(oldp+101,((0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction)),7);
    bufp->fullCData(oldp+102,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                        >> 7U))),5);
    bufp->fullCData(oldp+103,((7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+104,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+105,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+106,((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+107,((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instruction 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+108,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type),3);
    bufp->fullIData(oldp+109,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out),32);
    bufp->fullCData(oldp+110,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        >> 0x11U))),5);
    bufp->fullCData(oldp+111,((0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        >> 0xcU))),5);
    bufp->fullBit(oldp+112,((1U & (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+113,((0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding))),5);
    bufp->fullIData(oldp+114,((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_forwarding 
                                       >> 5U))),32);
    bufp->fullIData(oldp+115,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+116,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+117,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+118,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+119,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+120,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+121,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+122,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+123,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+124,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+125,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+126,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+127,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+128,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+129,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+130,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+131,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+132,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+133,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+134,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+135,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+136,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+137,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+138,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+139,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+140,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+141,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+142,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+143,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+144,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+145,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+146,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__regs[31]),32);
    bufp->fullIData(oldp+147,(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__register_file_inst__DOT__i),32);
    bufp->fullCData(oldp+148,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op),4);
    bufp->fullBit(oldp+149,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm));
    bufp->fullBit(oldp+150,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch));
    bufp->fullBit(oldp+151,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump));
    bufp->fullBit(oldp+152,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr));
    bufp->fullBit(oldp+153,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load));
    bufp->fullBit(oldp+154,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store));
    bufp->fullBit(oldp+155,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_fence_i));
    bufp->fullBit(oldp+156,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_system_or_csr));
    bufp->fullIData(oldp+157,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2),32);
    bufp->fullIData(oldp+158,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result),32);
    bufp->fullBit(oldp+159,((0U == vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)));
    bufp->fullBit(oldp+160,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch));
    bufp->fullIData(oldp+161,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_target),32);
    bufp->fullIData(oldp+162,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr)
                                ? (0xfffffffeU & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data 
                                                  + 
                                                  vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U]))
                                : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_target)),32);
    bufp->fullIData(oldp+163,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__next_pc_comb),32);
    bufp->fullBit(oldp+164,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_or_jump_redirect));
    bufp->fullBit(oldp+165,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__fetch_misaligned));
    bufp->fullIData(oldp+166,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value_comb),32);
    bufp->fullIData(oldp+167,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store)
                                ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2_data
                                : ((((0x29U == (0x3fU 
                                                & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                      >> 0x1bU)))) 
                                     | (0x2aU == (0x3fU 
                                                  & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                      << 5U) 
                                                     | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                        >> 0x1bU))))) 
                                    | (0x2bU == (0x3fU 
                                                 & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                     << 5U) 
                                                    | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                       >> 0x1bU)))))
                                    ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1_data
                                    : ((((0x2cU == 
                                          (0x3fU & 
                                           ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                               >> 0x1bU)))) 
                                         | (0x2dU == 
                                            (0x3fU 
                                             & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                   >> 0x1bU))))) 
                                        | (0x2eU == 
                                           (0x3fU & 
                                            ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                              << 5U) 
                                             | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                >> 0x1bU)))))
                                        ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[0U]
                                        : 0U)))),32);
    bufp->fullBit(oldp+168,(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__forward_valid_comb));
    bufp->fullCData(oldp+169,(((0U != (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status))
                                ? (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status)
                                : ((0x31U == (0x3fU 
                                              & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[2U] 
                                                  << 5U) 
                                                 | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instruction[1U] 
                                                    >> 0x1bU))))
                                    ? 4U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__fetch_misaligned)
                                             ? 2U : 0U)))),4);
    bufp->fullCData(oldp+170,((0x1fU & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op2)),5);
    bufp->fullBit(oldp+171,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state));
    bufp->fullIData(oldp+172,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pc),32);
    bufp->fullIData(oldp+173,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__request_pc),32);
    bufp->fullBit(oldp+174,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid));
    bufp->fullIData(oldp+175,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_instr),32);
    bufp->fullIData(oldp+176,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_pc),32);
    bufp->fullCData(oldp+177,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_status),4);
    bufp->fullBit(oldp+178,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__kill_response));
    bufp->fullBit(oldp+179,(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid));
    bufp->fullCData(oldp+180,(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_type),3);
    bufp->fullIData(oldp+181,(vlSelf->tb_top_cpu__DOT__dut__DOT__hazard_instruction_decoder__DOT__imm_out),32);
    bufp->fullCData(oldp+182,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state),2);
    bufp->fullBit(oldp+183,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load));
    bufp->fullBit(oldp+184,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store));
    bufp->fullBit(oldp+185,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__valid_memory_op));
    bufp->fullBit(oldp+186,(((~ (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0)) 
                             & (0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_status)))));
    bufp->fullBit(oldp+187,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__access_misaligned));
    bufp->fullCData(oldp+188,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load)
                                ? 5U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store)
                                         ? 7U : 0U))),4);
    bufp->fullCData(oldp+189,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb),4);
    bufp->fullIData(oldp+190,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__store_data_comb),32);
    bufp->fullWData(oldp+191,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr),65);
    bufp->fullIData(oldp+194,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_source_data),32);
    bufp->fullIData(oldp+195,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr),32);
    bufp->fullIData(oldp+196,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_store_data),32);
    bufp->fullIData(oldp+197,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_pc),32);
    bufp->fullIData(oldp+198,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_next_pc),32);
    bufp->fullCData(oldp+199,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_sel),4);
    bufp->fullBit(oldp+200,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load));
    bufp->fullBit(oldp+201,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store));
    bufp->fullIData(oldp+202,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_load_value_comb),32);
    bufp->fullIData(oldp+203,(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__live_load_value_comb),32);
    bufp->fullCData(oldp+204,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_load)
                                ? 6U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store)
                                         ? 8U : 0U))),4);
    bufp->fullCData(oldp+205,(((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load)
                                ? 6U : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store)
                                         ? 8U : 0U))),4);
    bufp->fullIData(oldp+206,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+207,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie),32);
    bufp->fullIData(oldp+208,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+209,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mepc),32);
    bufp->fullIData(oldp+210,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mcause),32);
    bufp->fullIData(oldp+211,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtval),32);
    bufp->fullIData(oldp+212,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mip),32);
    bufp->fullSData(oldp+213,((0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U])),12);
    bufp->fullBit(oldp+214,((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status))));
    bufp->fullBit(oldp+215,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__is_csr));
    bufp->fullBit(oldp+216,((0x2fU == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+217,((0x27U == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+218,((0x28U == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                                   >> 0x1bU))))));
    bufp->fullIData(oldp+219,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data),32);
    bufp->fullIData(oldp+220,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_data),32);
    bufp->fullBit(oldp+221,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_write_enable));
    bufp->fullBit(oldp+222,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd_normal));
    bufp->fullBit(oldp+223,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__pipeline_exception));
    bufp->fullIData(oldp+224,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause),32);
    bufp->fullIData(oldp+225,(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval),32);
    bufp->fullBit(oldp+226,((1U & (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
                                   >> 3U))));
    bufp->fullBit(oldp+227,((1U & (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie 
                                   >> 7U))));
    bufp->fullBit(oldp+228,((1U & (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie 
                                   >> 0xbU))));
    bufp->fullBit(oldp+229,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.cyc));
    bufp->fullBit(oldp+230,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.stb));
    bufp->fullBit(oldp+231,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.ack));
    bufp->fullBit(oldp+232,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.err));
    bufp->fullIData(oldp+233,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.adr),32);
    bufp->fullCData(oldp+234,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.sel),4);
    bufp->fullBit(oldp+235,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.we));
    bufp->fullIData(oldp+236,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.dat_mosi),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__tb_top_cpu__DOT__fetch_wb.dat_miso),32);
    bufp->fullBit(oldp+238,(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.ack));
    bufp->fullBit(oldp+239,(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.err));
    bufp->fullIData(oldp+240,(vlSymsp->TOP__tb_top_cpu__DOT__mem_wb.dat_miso),32);
    bufp->fullBit(oldp+241,(vlSelf->tb_top_cpu__DOT__clk));
    bufp->fullBit(oldp+242,(((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                                      ? 2U : 0U)) | 
                             (2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out)))));
    bufp->fullIData(oldp+243,(0x800U),32);
    bufp->fullIData(oldp+244,(0x2000U),32);
    bufp->fullIData(oldp+245,(0x40000U),32);
    bufp->fullIData(oldp+246,(0x100U),32);
    bufp->fullIData(oldp+247,(0x40300U),32);
    bufp->fullIData(oldp+248,(0x40600U),32);
    bufp->fullIData(oldp+249,(0x400U),32);
    bufp->fullIData(oldp+250,(0U),32);
    bufp->fullIData(oldp+251,(1U),32);
    bufp->fullIData(oldp+252,(2U),32);
    bufp->fullIData(oldp+253,(3U),32);
    bufp->fullIData(oldp+254,(4U),32);
    bufp->fullIData(oldp+255,(5U),32);
    bufp->fullIData(oldp+256,(6U),32);
    bufp->fullIData(oldp+257,(7U),32);
    bufp->fullIData(oldp+258,(0xbU),32);
    bufp->fullIData(oldp+259,(0x80000007U),32);
    bufp->fullIData(oldp+260,(0x8000000bU),32);
    bufp->fullIData(oldp+261,(8U),32);
    bufp->fullIData(oldp+262,(0x80U),32);
    bufp->fullIData(oldp+263,(0x800U),32);
    bufp->fullIData(oldp+264,(0x20U),32);
    bufp->fullIData(oldp+265,(5U),32);
    bufp->fullIData(oldp+266,(0x13U),32);
    bufp->fullSData(oldp+267,(0x300U),12);
    bufp->fullSData(oldp+268,(0x304U),12);
    bufp->fullSData(oldp+269,(0x305U),12);
    bufp->fullSData(oldp+270,(0x341U),12);
    bufp->fullSData(oldp+271,(0x342U),12);
    bufp->fullSData(oldp+272,(0x343U),12);
    bufp->fullSData(oldp+273,(0x344U),12);
    bufp->fullIData(oldp+274,(3U),32);
    bufp->fullIData(oldp+275,(7U),32);
    bufp->fullIData(oldp+276,(0xbU),32);
    bufp->fullIData(oldp+277,(0x10000U),32);
    bufp->fullIData(oldp+278,(0x2000U),32);
    bufp->fullIData(oldp+279,(0x80000U),32);
    bufp->fullIData(oldp+280,(1U),32);
    bufp->fullIData(oldp+281,(0x81000U),32);
    bufp->fullIData(oldp+282,(0x82000U),32);
    bufp->fullIData(oldp+283,(0x83000U),32);
    bufp->fullIData(oldp+284,(0x84000U),32);
    bufp->fullIData(oldp+285,(0x85000U),32);
    bufp->fullIData(oldp+286,(5U),32);
    bufp->fullIData(oldp+287,(0x90000U),32);
    bufp->fullIData(oldp+288,(0x9600U),32);
    bufp->fullIData(oldp+289,(0x120000U),32);
    bufp->fullIData(oldp+290,(0x40000U),32);
    bufp->fullIData(oldp+291,(0x13U),32);
    __Vtemp_h3441a5c4__0[0U] = 0U;
    __Vtemp_h3441a5c4__0[1U] = 0x90000000U;
    __Vtemp_h3441a5c4__0[2U] = 0U;
    bufp->fullWData(oldp+292,(__Vtemp_h3441a5c4__0),65);
}
