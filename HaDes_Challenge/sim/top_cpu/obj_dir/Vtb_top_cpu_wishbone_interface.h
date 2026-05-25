// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top_cpu.h for the primary calling header

#ifndef VERILATED_VTB_TOP_CPU_WISHBONE_INTERFACE_H_
#define VERILATED_VTB_TOP_CPU_WISHBONE_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_top_cpu__Syms;

class Vtb_top_cpu_wishbone_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ sel;
    CData/*0:0*/ cyc;
    CData/*0:0*/ stb;
    CData/*0:0*/ we;
    CData/*0:0*/ ack;
    CData/*0:0*/ err;
    IData/*31:0*/ adr;
    IData/*31:0*/ dat_mosi;
    IData/*31:0*/ dat_miso;

    // INTERNAL VARIABLES
    Vtb_top_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top_cpu_wishbone_interface(Vtb_top_cpu__Syms* symsp, const char* v__name);
    ~Vtb_top_cpu_wishbone_interface();
    VL_UNCOPYABLE(Vtb_top_cpu_wishbone_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vtb_top_cpu_wishbone_interface* obj);

#endif  // guard
