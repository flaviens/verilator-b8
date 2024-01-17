// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+36,0,"clkin_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declArray(c+41,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+44,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+47,0,"probe_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"celloutsig_0z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"celloutsig_100z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+28,0,"celloutsig_101z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+49,0,"celloutsig_102z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"celloutsig_103z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+51,0,"celloutsig_106z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"celloutsig_107z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"celloutsig_109z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"celloutsig_10z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+54,0,"celloutsig_110z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+55,0,"celloutsig_113z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"celloutsig_114z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 30,0);
    tracep->declBit(c+57,0,"celloutsig_115z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"celloutsig_116z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"celloutsig_117z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"celloutsig_118z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"celloutsig_119z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"celloutsig_11z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+63,0,"celloutsig_120z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+64,0,"celloutsig_121z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+65,0,"celloutsig_122z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"celloutsig_124z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+67,0,"celloutsig_125z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+18,0,"celloutsig_12z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+68,0,"celloutsig_132z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"celloutsig_133z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"celloutsig_134z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"celloutsig_135z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"celloutsig_137z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"celloutsig_138z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+2,0,"celloutsig_13z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"celloutsig_140z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+75,0,"celloutsig_141z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"celloutsig_142z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+77,0,"celloutsig_144z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+78,0,"celloutsig_145z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+21,0,"celloutsig_148z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+79,0,"celloutsig_149z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+80,0,"celloutsig_14z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"celloutsig_154z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"celloutsig_158z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"celloutsig_15z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+15,0,"celloutsig_160z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 30,0);
    tracep->declBus(c+24,0,"celloutsig_162z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"celloutsig_165z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+83,0,"celloutsig_166z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"celloutsig_168z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"celloutsig_16z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+86,0,"celloutsig_17z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+25,0,"celloutsig_181z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"celloutsig_185z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+29,0,"celloutsig_189z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+87,0,"celloutsig_18z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"celloutsig_194z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+88,0,"celloutsig_195z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"celloutsig_196z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"celloutsig_19z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+4,0,"celloutsig_1z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"celloutsig_204z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+19,0,"celloutsig_207z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+92,0,"celloutsig_209z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"celloutsig_20z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+94,0,"celloutsig_211z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"celloutsig_214z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+96,0,"celloutsig_21z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"celloutsig_221z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+98,0,"celloutsig_228z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"celloutsig_22z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+100,0,"celloutsig_230z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+101,0,"celloutsig_231z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+102,0,"celloutsig_232z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"celloutsig_23z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"celloutsig_248z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+5,0,"celloutsig_25z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"celloutsig_26z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"celloutsig_274z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"celloutsig_27z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+108,0,"celloutsig_283z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"celloutsig_285z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+33,0,"celloutsig_28z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+16,0,"celloutsig_290z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"celloutsig_294z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+6,0,"celloutsig_29z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"celloutsig_2z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"celloutsig_302z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"celloutsig_30z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+112,0,"celloutsig_31z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+27,0,"celloutsig_326z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+113,0,"celloutsig_329z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+114,0,"celloutsig_32z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+115,0,"celloutsig_335z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+116,0,"celloutsig_336z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"celloutsig_33z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+118,0,"celloutsig_34z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+119,0,"celloutsig_35z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"celloutsig_36z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+8,0,"celloutsig_37z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"celloutsig_38z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+9,0,"celloutsig_3z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"celloutsig_402z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"celloutsig_40z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+124,0,"celloutsig_41z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+125,0,"celloutsig_42z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+126,0,"celloutsig_445z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"celloutsig_44z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"celloutsig_45z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+129,0,"celloutsig_46z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+130,0,"celloutsig_47z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+131,0,"celloutsig_48z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"celloutsig_496z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+133,0,"celloutsig_497z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"celloutsig_498z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+135,0,"celloutsig_49z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+10,0,"celloutsig_4z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+34,0,"celloutsig_50z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+136,0,"celloutsig_51z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"celloutsig_52z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+138,0,"celloutsig_534z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"celloutsig_53z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"celloutsig_549z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+141,0,"celloutsig_54z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"celloutsig_55z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"celloutsig_56z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+144,0,"celloutsig_572z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"celloutsig_57z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"celloutsig_58z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"celloutsig_60z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"celloutsig_615z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+149,0,"celloutsig_61z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"celloutsig_626z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"celloutsig_62z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"celloutsig_63z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+152,0,"celloutsig_64z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"celloutsig_65z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+153,0,"celloutsig_66z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+20,0,"celloutsig_67z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+30,0,"celloutsig_68z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"celloutsig_698z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+155,0,"celloutsig_69z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"celloutsig_6z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+156,0,"celloutsig_70z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"celloutsig_71z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+158,0,"celloutsig_72z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+159,0,"celloutsig_74z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"celloutsig_76z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+161,0,"celloutsig_77z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+162,0,"celloutsig_78z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+163,0,"celloutsig_79z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+164,0,"celloutsig_7z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+165,0,"celloutsig_81z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"celloutsig_828z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"celloutsig_829z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"celloutsig_82z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"celloutsig_83z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+170,0,"celloutsig_84z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"celloutsig_86z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"celloutsig_87z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"celloutsig_88z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+174,0,"celloutsig_89z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"celloutsig_8z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+176,0,"celloutsig_90z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"celloutsig_91z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+31,0,"celloutsig_92z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+178,0,"celloutsig_93z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"celloutsig_94z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+179,0,"celloutsig_95z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+14,0,"celloutsig_98z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+181,0,"celloutsig_99z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"celloutsig_9z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+36,0,"clkin_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declArray(c+41,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+44,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+47,0,"probe_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+181,((1U & (~ (IData)(vlSelf->top__DOT___002_)))));
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__celloutsig_0z));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__celloutsig_13z));
    bufp->fullSData(oldp+3,(vlSelf->top__DOT__celloutsig_15z),15);
    bufp->fullBit(oldp+4,((1U & (~ (IData)(vlSelf->top__DOT__celloutsig_0z)))));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__celloutsig_25z));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__celloutsig_29z));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__celloutsig_2z));
    bufp->fullBit(oldp+8,((1U & (~ (((IData)(vlSelf->top__DOT__celloutsig_13z) 
                                     | (vlSelf->top__DOT__celloutsig_4z 
                                        >> 9U)) & (IData)(vlSelf->top__DOT___001_))))));
    bufp->fullBit(oldp+9,((1U & (~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)))));
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__celloutsig_4z),29);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__celloutsig_6z),4);
    bufp->fullBit(oldp+12,((1U & (~ ((~ (IData)(vlSelf->top__DOT___002_)) 
                                     ^ ((IData)(vlSelf->top__DOT__celloutsig_98z) 
                                        >> 5U))))));
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__celloutsig_194z),2);
    bufp->fullSData(oldp+14,(vlSelf->top__DOT__celloutsig_98z),10);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__celloutsig_160z),31);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__celloutsig_290z),32);
    bufp->fullSData(oldp+17,(vlSelf->top__DOT__celloutsig_63z),11);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__celloutsig_12z),26);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__celloutsig_207z),19);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__celloutsig_67z),21);
    bufp->fullSData(oldp+21,(vlSelf->top__DOT__celloutsig_148z),16);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__celloutsig_165z),5);
    bufp->fullSData(oldp+23,(vlSelf->top__DOT__celloutsig_185z),13);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__celloutsig_162z),8);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__celloutsig_181z),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__celloutsig_285z),30);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__celloutsig_326z),26);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__celloutsig_101z),15);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__celloutsig_189z),28);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__celloutsig_68z),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__celloutsig_92z),22);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__celloutsig_94z),12);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__celloutsig_28z),19);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__celloutsig_50z),2);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__celloutsig_65z),20);
    bufp->fullWData(oldp+36,(vlSelf->clkin_data),160);
    bufp->fullWData(oldp+41,(vlSelf->in_data),96);
    bufp->fullWData(oldp+44,(vlSelf->out_data),96);
    bufp->fullIData(oldp+47,(vlSelf->probe_data),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__celloutsig_100z),22);
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__celloutsig_102z));
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__celloutsig_103z),5);
    bufp->fullBit(oldp+51,((1U & (~ ((3U == (3U & (vlSelf->top__DOT__celloutsig_32z 
                                                   >> 0xbU))) 
                                     ^ (IData)(vlSelf->top__DOT__celloutsig_86z))))));
    bufp->fullBit(oldp+52,((1U & ((~ (vlSelf->top__DOT__celloutsig_67z 
                                      >> 9U)) | (vlSelf->top__DOT__celloutsig_34z 
                                                 >> 8U)))));
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__celloutsig_10z),19);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__celloutsig_110z),8);
    bufp->fullBit(oldp+55,((1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                     >> 4U)))));
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__celloutsig_114z),31);
    bufp->fullBit(oldp+57,((((0xfcU & (vlSelf->top__DOT__celloutsig_68z 
                                       >> 0xcU)) | 
                             (((IData)(vlSelf->top__DOT__celloutsig_25z) 
                               << 1U) | (1U & (~ ((~ (IData)(vlSelf->top__DOT___002_)) 
                                                  ^ 
                                                  ((IData)(vlSelf->top__DOT__celloutsig_98z) 
                                                   >> 5U)))))) 
                            > ((0xfeU & (IData)(vlSelf->top__DOT__celloutsig_110z)) 
                               | (IData)(vlSelf->top__DOT__celloutsig_51z)))));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__celloutsig_116z));
    bufp->fullBit(oldp+59,((1U & (~ ((0x20U & vlSelf->top__DOT__celloutsig_28z)
                                      ? (vlSelf->top__DOT__celloutsig_65z 
                                         >> 0xaU) : 
                                     ((vlSelf->in_data[2U] 
                                       >> 0x17U) ^ 
                                      (vlSelf->top__DOT__celloutsig_17z 
                                       >> 6U)))))));
    bufp->fullBit(oldp+60,(((0U != (0x3ffU & (vlSelf->top__DOT__celloutsig_4z 
                                              >> 0xfU))) 
                            & (0U != (0x3ffU & (vlSelf->top__DOT__celloutsig_56z 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+61,((0x1fffU == (0x1fffU & (vlSelf->top__DOT__celloutsig_7z 
                                                   >> 2U)))));
    bufp->fullSData(oldp+62,(vlSelf->top__DOT__celloutsig_11z),10);
    bufp->fullSData(oldp+63,(vlSelf->top__DOT__celloutsig_120z),14);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__celloutsig_121z),19);
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__celloutsig_122z));
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__celloutsig_124z),2);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__celloutsig_125z),19);
    bufp->fullSData(oldp+68,((0xffffU & (~ (((0xfffcU 
                                              & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                 << 1U)) 
                                             | (((IData)(vlSelf->top__DOT__celloutsig_122z) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT__celloutsig_81z))) 
                                            ^ ((0xfffcU 
                                                & (vlSelf->top__DOT__celloutsig_49z 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->top__DOT__celloutsig_93z) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT__celloutsig_70z))))))),16);
    bufp->fullBit(oldp+69,((1U & ((((((((0U != (0x3feU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_94z))) 
                                        | (IData)(vlSelf->top__DOT__celloutsig_87z)) 
                                       | (0U != (0xc0U 
                                                 & vlSelf->top__DOT__celloutsig_28z))) 
                                      | (~ (IData)(vlSelf->top__DOT___002_))) 
                                     | (IData)(vlSelf->top__DOT__celloutsig_81z)) 
                                    | (IData)(vlSelf->top__DOT__celloutsig_70z)) 
                                   | (0U != vlSelf->top__DOT__celloutsig_100z)) 
                                  | ((0U != (0xffffU 
                                             & (~ (
                                                   ((0xfffcU 
                                                     & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                        << 1U)) 
                                                    | (((IData)(vlSelf->top__DOT__celloutsig_122z) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT__celloutsig_81z))) 
                                                   ^ 
                                                   ((0xfffcU 
                                                     & (vlSelf->top__DOT__celloutsig_49z 
                                                        << 2U)) 
                                                    | (((IData)(vlSelf->top__DOT__celloutsig_93z) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT__celloutsig_70z))))))) 
                                     | (((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                         >> 4U) ^ (0U 
                                                   != 
                                                   (0x3ffffffU 
                                                    & (vlSelf->in_data[2U] 
                                                       >> 1U)))))))));
    bufp->fullBit(oldp+70,((IData)((((0U != (0x7fffeU 
                                             & vlSelf->top__DOT__celloutsig_66z)) 
                                     | (IData)(vlSelf->top__DOT__celloutsig_14z)) 
                                    | (0U != (0x7ffff0U 
                                              & vlSelf->top__DOT__celloutsig_17z))))));
    bufp->fullBit(oldp+71,(((0U != (0x1fffffU & vlSelf->top__DOT__celloutsig_45z)) 
                            | ((0U != (IData)(vlSelf->top__DOT__celloutsig_50z)) 
                               | ((0U != (IData)(vlSelf->top__DOT__celloutsig_41z)) 
                                  | (IData)(((0U != 
                                              (0x7eU 
                                               & vlSelf->top__DOT__celloutsig_79z)) 
                                             | (0U 
                                                != vlSelf->top__DOT__celloutsig_28z))))))));
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__celloutsig_137z));
    bufp->fullSData(oldp+73,(vlSelf->top__DOT__celloutsig_138z),15);
    bufp->fullSData(oldp+74,(vlSelf->top__DOT__celloutsig_140z),11);
    bufp->fullBit(oldp+75,((1U & ((IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)
                                   ? ((IData)(vlSelf->top__DOT__celloutsig_36z) 
                                      >> 2U) : ((IData)(vlSelf->top__DOT__celloutsig_110z) 
                                                >> 4U)))));
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__celloutsig_142z),23);
    bufp->fullSData(oldp+77,((0x3fffU & ((vlSelf->top__DOT__celloutsig_66z 
                                          >> 0xaU) 
                                         + ((0x3ffeU 
                                             & (vlSelf->top__DOT__celloutsig_79z 
                                                << 1U)) 
                                            | (IData)(vlSelf->top__DOT__celloutsig_26z))))),14);
    bufp->fullSData(oldp+78,((0x1ffU & (~ (((IData)(vlSelf->top__DOT__celloutsig_110z) 
                                            << 1U) 
                                           | ((0U != 
                                               (0x3ffU 
                                                & (vlSelf->top__DOT__celloutsig_4z 
                                                   >> 0xfU))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (vlSelf->top__DOT__celloutsig_56z 
                                                     >> 0xcU)))))))),9);
    bufp->fullSData(oldp+79,(vlSelf->top__DOT__celloutsig_149z),15);
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__celloutsig_14z));
    bufp->fullBit(oldp+81,((1U & (~ ((0x20U & (IData)(vlSelf->top__DOT__celloutsig_27z))
                                      ? ((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                         >> 2U) : ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                   >> 6U))))));
    bufp->fullCData(oldp+82,((0xfU & (((0xcU & (vlSelf->top__DOT__celloutsig_17z 
                                                >> 6U)) 
                                       | ((2U & ((~ 
                                                  ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                   >> 4U)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelf->top__DOT___002_))))) 
                                      * (((IData)(vlSelf->top__DOT__celloutsig_86z) 
                                          << 3U) | 
                                         (((IData)(vlSelf->top__DOT__celloutsig_64z) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT__celloutsig_0z) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT__celloutsig_14z))))))),4);
    bufp->fullBit(oldp+83,(((((IData)(vlSelf->top__DOT__celloutsig_124z) 
                              << 0x18U) | ((0xff8000U 
                                            & ((~ (
                                                   ((IData)(vlSelf->top__DOT__celloutsig_110z) 
                                                    << 1U) 
                                                   | ((0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSelf->top__DOT__celloutsig_4z 
                                                           >> 0xfU))) 
                                                      & (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->top__DOT__celloutsig_56z 
                                                             >> 0xcU)))))) 
                                               << 0xfU)) 
                                           | (IData)(vlSelf->top__DOT__celloutsig_8z))) 
                            > (((IData)(vlSelf->top__DOT__celloutsig_36z) 
                                << 0x11U) | (((1U & 
                                               ((((((((0U 
                                                       != 
                                                       (0x3feU 
                                                        & (IData)(vlSelf->top__DOT__celloutsig_94z))) 
                                                      | (IData)(vlSelf->top__DOT__celloutsig_87z)) 
                                                     | (0U 
                                                        != 
                                                        (0xc0U 
                                                         & vlSelf->top__DOT__celloutsig_28z))) 
                                                    | (~ (IData)(vlSelf->top__DOT___002_))) 
                                                   | (IData)(vlSelf->top__DOT__celloutsig_81z)) 
                                                  | (IData)(vlSelf->top__DOT__celloutsig_70z)) 
                                                 | (0U 
                                                    != vlSelf->top__DOT__celloutsig_100z)) 
                                                | ((0U 
                                                    != 
                                                    (0xffffU 
                                                     & (~ 
                                                        (((0xfffcU 
                                                           & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                              << 1U)) 
                                                          | (((IData)(vlSelf->top__DOT__celloutsig_122z) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT__celloutsig_81z))) 
                                                         ^ 
                                                         ((0xfffcU 
                                                           & (vlSelf->top__DOT__celloutsig_49z 
                                                              << 2U)) 
                                                          | (((IData)(vlSelf->top__DOT__celloutsig_93z) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT__celloutsig_70z))))))) 
                                                   | (((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                       >> 4U) 
                                                      ^ 
                                                      (0U 
                                                       != 
                                                       (0x3ffffffU 
                                                        & (vlSelf->in_data[2U] 
                                                           >> 1U))))))) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->top__DOT__celloutsig_18z) 
                                                 << 0xfU) 
                                                | (IData)(vlSelf->top__DOT__celloutsig_101z)))))));
    bufp->fullBit(oldp+84,((1U & ((((((((((0U != (0x1c0U 
                                                  & vlSelf->top__DOT__celloutsig_125z)) 
                                          | (IData)(vlSelf->top__DOT__celloutsig_14z)) 
                                         | (IData)(vlSelf->top__DOT__celloutsig_2z)) 
                                        | (~ (vlSelf->top__DOT__celloutsig_67z 
                                              >> 9U))) 
                                       | (vlSelf->top__DOT__celloutsig_34z 
                                          >> 8U)) | 
                                      (0U != (IData)(vlSelf->top__DOT__celloutsig_6z))) 
                                     | (0U != (IData)(vlSelf->top__DOT__celloutsig_162z))) 
                                    | (IData)(vlSelf->top__DOT__celloutsig_86z)) 
                                   | (0U != (0x3cU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_11z)))) 
                                  | (0U != (IData)(vlSelf->top__DOT__celloutsig_149z))))));
    bufp->fullSData(oldp+85,(vlSelf->top__DOT__celloutsig_16z),11);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__celloutsig_17z),26);
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__celloutsig_18z));
    bufp->fullBit(oldp+88,((1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_63z) 
                                     & (IData)(vlSelf->top__DOT__celloutsig_60z))))));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__celloutsig_196z));
    bufp->fullSData(oldp+90,(vlSelf->top__DOT__celloutsig_19z),13);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__celloutsig_204z),19);
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__celloutsig_209z),2);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__celloutsig_20z),21);
    bufp->fullBit(oldp+94,((1U & (~ ((0x100000U & vlSelf->top__DOT__celloutsig_20z)
                                      ? (vlSelf->top__DOT__celloutsig_142z 
                                         >> 0xdU) : (IData)(vlSelf->top__DOT__celloutsig_90z))))));
    bufp->fullIData(oldp+95,((((0x1000000U & ((IData)(vlSelf->top__DOT__celloutsig_209z) 
                                              << 0x17U)) 
                               | vlSelf->top__DOT__celloutsig_66z) 
                              ^ ((0x1c00000U & ((IData)(vlSelf->top__DOT__celloutsig_120z) 
                                                << 0x13U)) 
                                 | (((IData)(vlSelf->top__DOT__celloutsig_196z) 
                                     << 0x15U) | ((0x1ffffeU 
                                                   & (vlSelf->top__DOT__celloutsig_92z 
                                                      >> 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__celloutsig_0z)))))))),25);
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__celloutsig_21z));
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__celloutsig_221z),6);
    bufp->fullBit(oldp+98,(((0U != (0x7fU & vlSelf->top__DOT__celloutsig_207z)) 
                            | ((0U != (IData)(vlSelf->top__DOT__celloutsig_165z)) 
                               | ((IData)(vlSelf->top__DOT__celloutsig_60z) 
                                  | (IData)(vlSelf->top__DOT__celloutsig_116z))))));
    bufp->fullSData(oldp+99,(vlSelf->top__DOT__celloutsig_22z),14);
    bufp->fullSData(oldp+100,(vlSelf->top__DOT__celloutsig_230z),9);
    bufp->fullCData(oldp+101,((0x1fU & ((vlSelf->top__DOT__celloutsig_92z 
                                         >> 2U) ^ (
                                                   (0x1eU 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_221z)) 
                                                   | (1U 
                                                      & ((((((((((0U 
                                                                  != 
                                                                  (0x1c0U 
                                                                   & vlSelf->top__DOT__celloutsig_125z)) 
                                                                 | (IData)(vlSelf->top__DOT__celloutsig_14z)) 
                                                                | (IData)(vlSelf->top__DOT__celloutsig_2z)) 
                                                               | (~ 
                                                                  (vlSelf->top__DOT__celloutsig_67z 
                                                                   >> 9U))) 
                                                              | (vlSelf->top__DOT__celloutsig_34z 
                                                                 >> 8U)) 
                                                             | (0U 
                                                                != (IData)(vlSelf->top__DOT__celloutsig_6z))) 
                                                            | (0U 
                                                               != (IData)(vlSelf->top__DOT__celloutsig_162z))) 
                                                           | (IData)(vlSelf->top__DOT__celloutsig_86z)) 
                                                          | (0U 
                                                             != 
                                                             (0x3cU 
                                                              & (IData)(vlSelf->top__DOT__celloutsig_11z)))) 
                                                         | (0U 
                                                            != (IData)(vlSelf->top__DOT__celloutsig_149z)))))))),5);
    bufp->fullBit(oldp+102,((1U & (~ ((0x10U & (IData)(vlSelf->top__DOT__celloutsig_74z))
                                       ? (~ ((0x20U 
                                              & (IData)(vlSelf->top__DOT__celloutsig_27z))
                                              ? ((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                                 >> 2U)
                                              : ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                 >> 6U)))
                                       : (~ ((IData)(vlSelf->top__DOT__celloutsig_63z) 
                                             & (IData)(vlSelf->top__DOT__celloutsig_60z))))))));
    bufp->fullBit(oldp+103,((0U != (0x3ffffffU & (vlSelf->in_data[2U] 
                                                  >> 1U)))));
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__celloutsig_248z),20);
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__celloutsig_26z));
    bufp->fullBit(oldp+106,((1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_54z) 
                                      ^ ((IData)(vlSelf->top__DOT__celloutsig_221z) 
                                         >> 5U))))));
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__celloutsig_27z),7);
    bufp->fullBit(oldp+108,((1U & (((((IData)(vlSelf->top__DOT__celloutsig_124z) 
                                      << 0x18U) | (
                                                   (0xff8000U 
                                                    & ((~ 
                                                        (((IData)(vlSelf->top__DOT__celloutsig_110z) 
                                                          << 1U) 
                                                         | ((0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (vlSelf->top__DOT__celloutsig_4z 
                                                                 >> 0xfU))) 
                                                            & (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (vlSelf->top__DOT__celloutsig_56z 
                                                                   >> 0xcU)))))) 
                                                       << 0xfU)) 
                                                   | (IData)(vlSelf->top__DOT__celloutsig_8z))) 
                                    > (((IData)(vlSelf->top__DOT__celloutsig_36z) 
                                        << 0x11U) | 
                                       (((1U & ((((
                                                   ((((0U 
                                                       != 
                                                       (0x3feU 
                                                        & (IData)(vlSelf->top__DOT__celloutsig_94z))) 
                                                      | (IData)(vlSelf->top__DOT__celloutsig_87z)) 
                                                     | (0U 
                                                        != 
                                                        (0xc0U 
                                                         & vlSelf->top__DOT__celloutsig_28z))) 
                                                    | (~ (IData)(vlSelf->top__DOT___002_))) 
                                                   | (IData)(vlSelf->top__DOT__celloutsig_81z)) 
                                                  | (IData)(vlSelf->top__DOT__celloutsig_70z)) 
                                                 | (0U 
                                                    != vlSelf->top__DOT__celloutsig_100z)) 
                                                | ((0U 
                                                    != 
                                                    (0xffffU 
                                                     & (~ 
                                                        (((0xfffcU 
                                                           & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                              << 1U)) 
                                                          | (((IData)(vlSelf->top__DOT__celloutsig_122z) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT__celloutsig_81z))) 
                                                         ^ 
                                                         ((0xfffcU 
                                                           & (vlSelf->top__DOT__celloutsig_49z 
                                                              << 2U)) 
                                                          | (((IData)(vlSelf->top__DOT__celloutsig_93z) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT__celloutsig_70z))))))) 
                                                   | (((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                       >> 4U) 
                                                      ^ 
                                                      (0U 
                                                       != 
                                                       (0x3ffffffU 
                                                        & (vlSelf->in_data[2U] 
                                                           >> 1U))))))) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->top__DOT__celloutsig_18z) 
                                            << 0xfU) 
                                           | (IData)(vlSelf->top__DOT__celloutsig_101z)))))
                                    ? (IData)(vlSelf->top__DOT__celloutsig_122z)
                                    : ((IData)(vlSelf->top__DOT__celloutsig_95z) 
                                       >> 6U)))));
    bufp->fullCData(oldp+109,((0x7fU & (~ ((vlSelf->top__DOT__celloutsig_121z 
                                            >> 0xaU) 
                                           ^ ((0x78U 
                                               & ((IData)(vlSelf->top__DOT__celloutsig_22z) 
                                                  << 2U)) 
                                              | ((4U 
                                                  & ((((((IData)(vlSelf->top__DOT__celloutsig_124z) 
                                                         << 0x18U) 
                                                        | ((0xff8000U 
                                                            & ((~ 
                                                                (((IData)(vlSelf->top__DOT__celloutsig_110z) 
                                                                  << 1U) 
                                                                 | ((0U 
                                                                     != 
                                                                     (0x3ffU 
                                                                      & (vlSelf->top__DOT__celloutsig_4z 
                                                                         >> 0xfU))) 
                                                                    & (0U 
                                                                       != 
                                                                       (0x3ffU 
                                                                        & (vlSelf->top__DOT__celloutsig_56z 
                                                                           >> 0xcU)))))) 
                                                               << 0xfU)) 
                                                           | (IData)(vlSelf->top__DOT__celloutsig_8z))) 
                                                       > 
                                                       (((IData)(vlSelf->top__DOT__celloutsig_36z) 
                                                         << 0x11U) 
                                                        | (((1U 
                                                             & ((((((((0U 
                                                                       != 
                                                                       (0x3feU 
                                                                        & (IData)(vlSelf->top__DOT__celloutsig_94z))) 
                                                                      | (IData)(vlSelf->top__DOT__celloutsig_87z)) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSelf->top__DOT__celloutsig_28z))) 
                                                                    | (~ (IData)(vlSelf->top__DOT___002_))) 
                                                                   | (IData)(vlSelf->top__DOT__celloutsig_81z)) 
                                                                  | (IData)(vlSelf->top__DOT__celloutsig_70z)) 
                                                                 | (0U 
                                                                    != vlSelf->top__DOT__celloutsig_100z)) 
                                                                | ((0U 
                                                                    != 
                                                                    (0xffffU 
                                                                     & (~ 
                                                                        (((0xfffcU 
                                                                           & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                                              << 1U)) 
                                                                          | (((IData)(vlSelf->top__DOT__celloutsig_122z) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT__celloutsig_81z))) 
                                                                         ^ 
                                                                         ((0xfffcU 
                                                                           & (vlSelf->top__DOT__celloutsig_49z 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelf->top__DOT__celloutsig_93z) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT__celloutsig_70z))))))) 
                                                                   | (((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                                       >> 4U) 
                                                                      ^ 
                                                                      (0U 
                                                                       != 
                                                                       (0x3ffffffU 
                                                                        & (vlSelf->in_data[2U] 
                                                                           >> 1U))))))) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->top__DOT__celloutsig_18z) 
                                                               << 0xfU) 
                                                              | (IData)(vlSelf->top__DOT__celloutsig_101z)))))
                                                       ? (IData)(vlSelf->top__DOT__celloutsig_122z)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__celloutsig_95z) 
                                                       >> 6U)) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelf->top__DOT__celloutsig_137z) 
                                                     << 1U) 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->top__DOT__celloutsig_32z 
                                                           >> 0xbU)))))))))),7);
    bufp->fullBit(oldp+110,((1U & (~ (((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                       | ((IData)(vlSelf->top__DOT__celloutsig_27z) 
                                          >> 4U)) & (IData)(vlSelf->top__DOT___000_))))));
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__celloutsig_30z),22);
    bufp->fullSData(oldp+112,(vlSelf->top__DOT__celloutsig_31z),12);
    bufp->fullCData(oldp+113,((7U & (~ ((vlSelf->top__DOT__celloutsig_285z 
                                         >> 2U) ^ (
                                                   (4U 
                                                    & (vlSelf->top__DOT__celloutsig_326z 
                                                       >> 1U)) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)
                                                            ? 
                                                           ((IData)(vlSelf->top__DOT__celloutsig_36z) 
                                                            >> 2U)
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__celloutsig_110z) 
                                                            >> 4U)) 
                                                          << 1U)) 
                                                      | (IData)(
                                                                (((0U 
                                                                   != 
                                                                   (0x7fffeU 
                                                                    & vlSelf->top__DOT__celloutsig_66z)) 
                                                                  | (IData)(vlSelf->top__DOT__celloutsig_14z)) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x7ffff0U 
                                                                     & vlSelf->top__DOT__celloutsig_17z)))))))))),3);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__celloutsig_32z),17);
    bufp->fullSData(oldp+115,(vlSelf->top__DOT__celloutsig_335z),13);
    bufp->fullBit(oldp+116,((1U & (~ ((~ (vlSelf->top__DOT__celloutsig_4z 
                                          >> 9U)) | 
                                      ((0U != (0x7fU 
                                               & vlSelf->top__DOT__celloutsig_207z)) 
                                       | ((0U != (IData)(vlSelf->top__DOT__celloutsig_165z)) 
                                          | ((IData)(vlSelf->top__DOT__celloutsig_60z) 
                                             | (IData)(vlSelf->top__DOT__celloutsig_116z)))))))));
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__celloutsig_33z),3);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__celloutsig_34z),24);
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__celloutsig_35z));
    bufp->fullSData(oldp+120,(vlSelf->top__DOT__celloutsig_36z),9);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__celloutsig_38z),24);
    bufp->fullBit(oldp+122,((1U & (~ (vlSelf->top__DOT__celloutsig_204z 
                                      >> 4U)))));
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__celloutsig_40z),25);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__celloutsig_41z),2);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__celloutsig_42z),24);
    bufp->fullBit(oldp+126,((1U & ((0x20U & vlSelf->top__DOT__celloutsig_28z)
                                    ? (vlSelf->top__DOT__celloutsig_65z 
                                       >> 0xaU) : (
                                                   (vlSelf->in_data[2U] 
                                                    >> 0x17U) 
                                                   ^ 
                                                   (vlSelf->top__DOT__celloutsig_17z 
                                                    >> 6U))))));
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__celloutsig_44z),2);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__celloutsig_45z),22);
    bufp->fullSData(oldp+129,(vlSelf->top__DOT__celloutsig_46z),12);
    bufp->fullSData(oldp+130,(vlSelf->top__DOT__celloutsig_47z),12);
    bufp->fullBit(oldp+131,((1U & (((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                    >> 4U) ^ (0U != 
                                              (0x3ffffffU 
                                               & (vlSelf->in_data[2U] 
                                                  >> 1U)))))));
    bufp->fullSData(oldp+132,((0xffffU & (~ ((0xfffeU 
                                              & vlSelf->top__DOT__celloutsig_181z) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->top__DOT__celloutsig_204z 
                                                    >> 4U))))))),16);
    bufp->fullBit(oldp+133,((1U & (VL_REDXOR_32((3U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__celloutsig_181z 
                                                     >> 6U)))) 
                                   ^ (VL_REDXOR_32(
                                                   (7U 
                                                    & (~ 
                                                       ((vlSelf->top__DOT__celloutsig_285z 
                                                         >> 2U) 
                                                        ^ 
                                                        ((4U 
                                                          & (vlSelf->top__DOT__celloutsig_326z 
                                                             >> 1U)) 
                                                         | ((2U 
                                                             & (((IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)
                                                                  ? 
                                                                 ((IData)(vlSelf->top__DOT__celloutsig_36z) 
                                                                  >> 2U)
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__celloutsig_110z) 
                                                                  >> 4U)) 
                                                                << 1U)) 
                                                            | (IData)(
                                                                      (((0U 
                                                                         != 
                                                                         (0x7fffeU 
                                                                          & vlSelf->top__DOT__celloutsig_66z)) 
                                                                        | (IData)(vlSelf->top__DOT__celloutsig_14z)) 
                                                                       | (0U 
                                                                          != 
                                                                          (0x7ffff0U 
                                                                           & vlSelf->top__DOT__celloutsig_17z)))))))))) 
                                      ^ VL_REDXOR_32(
                                                     (0x1fU 
                                                      & ((vlSelf->top__DOT__celloutsig_92z 
                                                          >> 2U) 
                                                         ^ 
                                                         ((0x1eU 
                                                           & (IData)(vlSelf->top__DOT__celloutsig_221z)) 
                                                          | (1U 
                                                             & ((((((((((0U 
                                                                         != 
                                                                         (0x1c0U 
                                                                          & vlSelf->top__DOT__celloutsig_125z)) 
                                                                        | (IData)(vlSelf->top__DOT__celloutsig_14z)) 
                                                                       | (IData)(vlSelf->top__DOT__celloutsig_2z)) 
                                                                      | (~ 
                                                                         (vlSelf->top__DOT__celloutsig_67z 
                                                                          >> 9U))) 
                                                                     | (vlSelf->top__DOT__celloutsig_34z 
                                                                        >> 8U)) 
                                                                    | (0U 
                                                                       != (IData)(vlSelf->top__DOT__celloutsig_6z))) 
                                                                   | (0U 
                                                                      != (IData)(vlSelf->top__DOT__celloutsig_162z))) 
                                                                  | (IData)(vlSelf->top__DOT__celloutsig_86z)) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x3cU 
                                                                     & (IData)(vlSelf->top__DOT__celloutsig_11z)))) 
                                                                | (0U 
                                                                   != (IData)(vlSelf->top__DOT__celloutsig_149z)))))))))))));
    bufp->fullSData(oldp+134,(vlSelf->top__DOT__celloutsig_498z),16);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__celloutsig_49z),24);
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__celloutsig_51z));
    bufp->fullSData(oldp+137,(vlSelf->top__DOT__celloutsig_52z),10);
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__celloutsig_534z));
    bufp->fullBit(oldp+139,((1U & (~ ((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                      & (vlSelf->top__DOT__celloutsig_7z 
                                         >> 2U))))));
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__celloutsig_549z),20);
    bufp->fullBit(oldp+141,(vlSelf->top__DOT__celloutsig_54z));
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__celloutsig_55z),8);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__celloutsig_56z),25);
    bufp->fullBit(oldp+144,((1U & (VL_REDXOR_32((0xffffffU 
                                                 & vlSelf->top__DOT__celloutsig_56z)) 
                                   ^ (IData)(vlSelf->top__DOT__celloutsig_86z)))));
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__celloutsig_57z));
    bufp->fullBit(oldp+146,((1U & ((IData)(vlSelf->top__DOT__celloutsig_57z)
                                    ? (vlSelf->top__DOT__celloutsig_42z 
                                       >> 3U) : ((IData)(vlSelf->top__DOT__celloutsig_52z) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+147,(vlSelf->top__DOT__celloutsig_60z));
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__celloutsig_615z),18);
    bufp->fullBit(oldp+149,(vlSelf->top__DOT__celloutsig_61z));
    bufp->fullBit(oldp+150,((1U & ((2U & vlSelf->top__DOT__celloutsig_615z)
                                    ? (IData)(vlSelf->top__DOT__celloutsig_90z)
                                    : ((IData)(vlSelf->top__DOT__celloutsig_335z) 
                                       >> 2U)))));
    bufp->fullBit(oldp+151,(vlSelf->top__DOT__celloutsig_62z));
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__celloutsig_64z));
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__celloutsig_66z),24);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__celloutsig_698z),21);
    bufp->fullBit(oldp+155,((1U & (~ ((vlSelf->top__DOT__celloutsig_45z 
                                       >> 0xcU) ^ ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+156,(vlSelf->top__DOT__celloutsig_70z));
    bufp->fullSData(oldp+157,(vlSelf->top__DOT__celloutsig_71z),10);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__celloutsig_72z),19);
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__celloutsig_74z),8);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__celloutsig_76z),18);
    bufp->fullIData(oldp+161,((0xff0000U | (0xffffU 
                                            & (~ ((0xfffcU 
                                                   & vlSelf->top__DOT__celloutsig_4z) 
                                                  | (((IData)(vlSelf->top__DOT____VdfgTmp_h8ae1fb61__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT__celloutsig_14z))))))),24);
    bufp->fullSData(oldp+162,(vlSelf->top__DOT__celloutsig_78z),13);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__celloutsig_79z),22);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__celloutsig_7z),23);
    bufp->fullBit(oldp+165,(vlSelf->top__DOT__celloutsig_81z));
    bufp->fullBit(oldp+166,(((IData)(vlSelf->top__DOT__celloutsig_54z) 
                             ^ ((IData)(vlSelf->top__DOT__celloutsig_221z) 
                                >> 5U))));
    bufp->fullBit(oldp+167,(((IData)(((0U != (0xfff0U 
                                              & vlSelf->top__DOT__celloutsig_125z)) 
                                      | (IData)(vlSelf->top__DOT__celloutsig_534z))) 
                             & (0U != (0x1fffU & (vlSelf->top__DOT__celloutsig_698z 
                                                  >> 6U))))));
    bufp->fullBit(oldp+168,(vlSelf->top__DOT__celloutsig_82z));
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__celloutsig_83z),26);
    bufp->fullBit(oldp+170,((3U == (3U & (vlSelf->top__DOT__celloutsig_32z 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__celloutsig_86z));
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__celloutsig_87z));
    bufp->fullCData(oldp+173,((0xffU & (((0xfcU & (vlSelf->top__DOT__celloutsig_12z 
                                                   >> 2U)) 
                                         | (((IData)(vlSelf->top__DOT__celloutsig_82z) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT__celloutsig_62z))) 
                                        + ((0xfeU & 
                                            (vlSelf->top__DOT__celloutsig_4z 
                                             >> 0x15U)) 
                                           | (IData)(vlSelf->top__DOT__celloutsig_57z))))),8);
    bufp->fullBit(oldp+174,(((~ ((vlSelf->top__DOT__celloutsig_45z 
                                  >> 0xcU) ^ ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                              >> 0xeU))) 
                             & (IData)(((((0x1feU == 
                                           (0x1feU 
                                            & vlSelf->top__DOT__celloutsig_66z)) 
                                          & (IData)(vlSelf->top__DOT__celloutsig_64z)) 
                                         & (0xfffU 
                                            == (IData)(vlSelf->top__DOT__celloutsig_46z))) 
                                        & (IData)(vlSelf->top__DOT__celloutsig_0z))))));
    bufp->fullSData(oldp+175,(vlSelf->top__DOT__celloutsig_8z),15);
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__celloutsig_90z));
    bufp->fullSData(oldp+177,((0x3ffU & (((0x3fcU & 
                                           (vlSelf->in_data[2U] 
                                            >> 0x15U)) 
                                          | (((IData)(vlSelf->top__DOT__celloutsig_70z) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x3ffffffU 
                                                 & (vlSelf->in_data[2U] 
                                                    >> 1U))))) 
                                         ^ (vlSelf->top__DOT__celloutsig_17z 
                                            >> 4U)))),10);
    bufp->fullBit(oldp+178,(vlSelf->top__DOT__celloutsig_93z));
    bufp->fullSData(oldp+179,(vlSelf->top__DOT__celloutsig_95z),12);
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__celloutsig_9z));
}
