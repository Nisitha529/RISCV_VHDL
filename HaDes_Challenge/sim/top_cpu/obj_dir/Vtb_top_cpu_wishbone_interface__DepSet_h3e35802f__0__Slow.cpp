// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_cpu.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_cpu_wishbone_interface.h"

VL_ATTR_COLD void Vtb_top_cpu_wishbone_interface___ctor_var_reset(Vtb_top_cpu_wishbone_interface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_cpu_wishbone_interface___ctor_var_reset\n"); );
    // Body
    vlSelf->adr = VL_RAND_RESET_I(32);
    vlSelf->sel = VL_RAND_RESET_I(4);
    vlSelf->dat_mosi = VL_RAND_RESET_I(32);
    vlSelf->dat_miso = VL_RAND_RESET_I(32);
    vlSelf->cyc = VL_RAND_RESET_I(1);
    vlSelf->stb = VL_RAND_RESET_I(1);
    vlSelf->we = VL_RAND_RESET_I(1);
    vlSelf->ack = VL_RAND_RESET_I(1);
    vlSelf->err = VL_RAND_RESET_I(1);
}
