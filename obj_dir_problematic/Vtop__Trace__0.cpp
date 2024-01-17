// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__celloutsig_0z));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__celloutsig_13z));
        bufp->chgSData(oldp+2,(vlSelf->top__DOT__celloutsig_15z),15);
        bufp->chgBit(oldp+3,((1U & (~ (IData)(vlSelf->top__DOT__celloutsig_0z)))));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__celloutsig_25z));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__celloutsig_29z));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__celloutsig_2z));
        bufp->chgBit(oldp+7,((1U & (~ (((IData)(vlSelf->top__DOT__celloutsig_13z) 
                                        | (vlSelf->top__DOT__celloutsig_4z 
                                           >> 9U)) 
                                       & (IData)(vlSelf->top__DOT___001_))))));
        bufp->chgBit(oldp+8,((1U & (~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)))));
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__celloutsig_4z),29);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__celloutsig_6z),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+11,((1U & (~ ((~ (IData)(vlSelf->top__DOT___002_)) 
                                        ^ ((IData)(vlSelf->top__DOT__celloutsig_98z) 
                                           >> 5U))))));
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__celloutsig_194z),2);
        bufp->chgSData(oldp+13,(vlSelf->top__DOT__celloutsig_98z),10);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__celloutsig_160z),31);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__celloutsig_290z),32);
        bufp->chgSData(oldp+16,(vlSelf->top__DOT__celloutsig_63z),11);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__celloutsig_12z),26);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__celloutsig_207z),19);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__celloutsig_67z),21);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgSData(oldp+20,(vlSelf->top__DOT__celloutsig_148z),16);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__celloutsig_165z),5);
        bufp->chgSData(oldp+22,(vlSelf->top__DOT__celloutsig_185z),13);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__celloutsig_162z),8);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__celloutsig_181z),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__celloutsig_285z),30);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__celloutsig_326z),26);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__celloutsig_101z),15);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__celloutsig_189z),28);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__celloutsig_68z),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__celloutsig_92z),22);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__celloutsig_94z),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__celloutsig_28z),19);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__celloutsig_50z),2);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__celloutsig_65z),20);
    }
    bufp->chgWData(oldp+35,(vlSelf->clkin_data),160);
    bufp->chgWData(oldp+40,(vlSelf->in_data),96);
    bufp->chgWData(oldp+43,(vlSelf->out_data),96);
    bufp->chgIData(oldp+46,(vlSelf->probe_data),32);
    bufp->chgIData(oldp+47,(vlSelf->top__DOT__celloutsig_100z),22);
    bufp->chgBit(oldp+48,(vlSelf->top__DOT__celloutsig_102z));
    bufp->chgCData(oldp+49,(vlSelf->top__DOT__celloutsig_103z),5);
    bufp->chgBit(oldp+50,((1U & (~ ((3U == (3U & (vlSelf->top__DOT__celloutsig_32z 
                                                  >> 0xbU))) 
                                    ^ (IData)(vlSelf->top__DOT__celloutsig_86z))))));
    bufp->chgBit(oldp+51,((1U & ((~ (vlSelf->top__DOT__celloutsig_67z 
                                     >> 9U)) | (vlSelf->top__DOT__celloutsig_34z 
                                                >> 8U)))));
    bufp->chgIData(oldp+52,(vlSelf->top__DOT__celloutsig_10z),19);
    bufp->chgCData(oldp+53,(vlSelf->top__DOT__celloutsig_110z),8);
    bufp->chgBit(oldp+54,((1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                    >> 4U)))));
    bufp->chgIData(oldp+55,(vlSelf->top__DOT__celloutsig_114z),31);
    bufp->chgBit(oldp+56,((((0xfcU & (vlSelf->top__DOT__celloutsig_68z 
                                      >> 0xcU)) | (
                                                   ((IData)(vlSelf->top__DOT__celloutsig_25z) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ 
                                                         ((~ (IData)(vlSelf->top__DOT___002_)) 
                                                          ^ 
                                                          ((IData)(vlSelf->top__DOT__celloutsig_98z) 
                                                           >> 5U)))))) 
                           > ((0xfeU & (IData)(vlSelf->top__DOT__celloutsig_110z)) 
                              | (IData)(vlSelf->top__DOT__celloutsig_51z)))));
    bufp->chgBit(oldp+57,(vlSelf->top__DOT__celloutsig_116z));
    bufp->chgBit(oldp+58,((1U & (~ ((0x20U & vlSelf->top__DOT__celloutsig_28z)
                                     ? (vlSelf->top__DOT__celloutsig_65z 
                                        >> 0xaU) : 
                                    ((vlSelf->in_data[2U] 
                                      >> 0x17U) ^ (vlSelf->top__DOT__celloutsig_17z 
                                                   >> 6U)))))));
    bufp->chgBit(oldp+59,(((0U != (0x3ffU & (vlSelf->top__DOT__celloutsig_4z 
                                             >> 0xfU))) 
                           & (0U != (0x3ffU & (vlSelf->top__DOT__celloutsig_56z 
                                               >> 0xcU))))));
    bufp->chgBit(oldp+60,((0x1fffU == (0x1fffU & (vlSelf->top__DOT__celloutsig_7z 
                                                  >> 2U)))));
    bufp->chgSData(oldp+61,(vlSelf->top__DOT__celloutsig_11z),10);
    bufp->chgSData(oldp+62,(vlSelf->top__DOT__celloutsig_120z),14);
    bufp->chgIData(oldp+63,(vlSelf->top__DOT__celloutsig_121z),19);
    bufp->chgBit(oldp+64,(vlSelf->top__DOT__celloutsig_122z));
    bufp->chgCData(oldp+65,(vlSelf->top__DOT__celloutsig_124z),2);
    bufp->chgIData(oldp+66,(vlSelf->top__DOT__celloutsig_125z),19);
    bufp->chgSData(oldp+67,((0xffffU & (~ (((0xfffcU 
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
    bufp->chgBit(oldp+68,((1U & ((((((((0U != (0x3feU 
                                               & (IData)(vlSelf->top__DOT__celloutsig_94z))) 
                                       | (IData)(vlSelf->top__DOT__celloutsig_87z)) 
                                      | (0U != (0xc0U 
                                                & vlSelf->top__DOT__celloutsig_28z))) 
                                     | (~ (IData)(vlSelf->top__DOT___002_))) 
                                    | (IData)(vlSelf->top__DOT__celloutsig_81z)) 
                                   | (IData)(vlSelf->top__DOT__celloutsig_70z)) 
                                  | (0U != vlSelf->top__DOT__celloutsig_100z)) 
                                 | ((0U != (0xffffU 
                                            & (~ ((
                                                   (0xfffcU 
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
    bufp->chgBit(oldp+69,((IData)((((0U != (0x7fffeU 
                                            & vlSelf->top__DOT__celloutsig_66z)) 
                                    | (IData)(vlSelf->top__DOT__celloutsig_14z)) 
                                   | (0U != (0x7ffff0U 
                                             & vlSelf->top__DOT__celloutsig_17z))))));
    bufp->chgBit(oldp+70,(((0U != (0x1fffffU & vlSelf->top__DOT__celloutsig_45z)) 
                           | ((0U != (IData)(vlSelf->top__DOT__celloutsig_50z)) 
                              | ((0U != (IData)(vlSelf->top__DOT__celloutsig_41z)) 
                                 | (IData)(((0U != 
                                             (0x7eU 
                                              & vlSelf->top__DOT__celloutsig_79z)) 
                                            | (0U != vlSelf->top__DOT__celloutsig_28z))))))));
    bufp->chgBit(oldp+71,(vlSelf->top__DOT__celloutsig_137z));
    bufp->chgSData(oldp+72,(vlSelf->top__DOT__celloutsig_138z),15);
    bufp->chgSData(oldp+73,(vlSelf->top__DOT__celloutsig_140z),11);
    bufp->chgBit(oldp+74,((1U & ((IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)
                                  ? ((IData)(vlSelf->top__DOT__celloutsig_36z) 
                                     >> 2U) : ((IData)(vlSelf->top__DOT__celloutsig_110z) 
                                               >> 4U)))));
    bufp->chgIData(oldp+75,(vlSelf->top__DOT__celloutsig_142z),23);
    bufp->chgSData(oldp+76,((0x3fffU & ((vlSelf->top__DOT__celloutsig_66z 
                                         >> 0xaU) + 
                                        ((0x3ffeU & 
                                          (vlSelf->top__DOT__celloutsig_79z 
                                           << 1U)) 
                                         | (IData)(vlSelf->top__DOT__celloutsig_26z))))),14);
    bufp->chgSData(oldp+77,((0x1ffU & (~ (((IData)(vlSelf->top__DOT__celloutsig_110z) 
                                           << 1U) | 
                                          ((0U != (0x3ffU 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0xfU))) 
                                           & (0U != 
                                              (0x3ffU 
                                               & (vlSelf->top__DOT__celloutsig_56z 
                                                  >> 0xcU)))))))),9);
    bufp->chgSData(oldp+78,(vlSelf->top__DOT__celloutsig_149z),15);
    bufp->chgBit(oldp+79,(vlSelf->top__DOT__celloutsig_14z));
    bufp->chgBit(oldp+80,((1U & (~ ((0x20U & (IData)(vlSelf->top__DOT__celloutsig_27z))
                                     ? ((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                        >> 2U) : ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                  >> 6U))))));
    bufp->chgCData(oldp+81,((0xfU & (((0xcU & (vlSelf->top__DOT__celloutsig_17z 
                                               >> 6U)) 
                                      | ((2U & ((~ 
                                                 ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                  >> 4U)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelf->top__DOT___002_))))) 
                                     * (((IData)(vlSelf->top__DOT__celloutsig_86z) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT__celloutsig_64z) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT__celloutsig_0z) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT__celloutsig_14z))))))),4);
    bufp->chgBit(oldp+82,(((((IData)(vlSelf->top__DOT__celloutsig_124z) 
                             << 0x18U) | ((0xff8000U 
                                           & ((~ (((IData)(vlSelf->top__DOT__celloutsig_110z) 
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
    bufp->chgBit(oldp+83,((1U & ((((((((((0U != (0x1c0U 
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
                                  | (0U != (0x3cU & (IData)(vlSelf->top__DOT__celloutsig_11z)))) 
                                 | (0U != (IData)(vlSelf->top__DOT__celloutsig_149z))))));
    bufp->chgSData(oldp+84,(vlSelf->top__DOT__celloutsig_16z),11);
    bufp->chgIData(oldp+85,(vlSelf->top__DOT__celloutsig_17z),26);
    bufp->chgBit(oldp+86,(vlSelf->top__DOT__celloutsig_18z));
    bufp->chgBit(oldp+87,((1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_63z) 
                                    & (IData)(vlSelf->top__DOT__celloutsig_60z))))));
    bufp->chgBit(oldp+88,(vlSelf->top__DOT__celloutsig_196z));
    bufp->chgSData(oldp+89,(vlSelf->top__DOT__celloutsig_19z),13);
    bufp->chgIData(oldp+90,(vlSelf->top__DOT__celloutsig_204z),19);
    bufp->chgCData(oldp+91,(vlSelf->top__DOT__celloutsig_209z),2);
    bufp->chgIData(oldp+92,(vlSelf->top__DOT__celloutsig_20z),21);
    bufp->chgBit(oldp+93,((1U & (~ ((0x100000U & vlSelf->top__DOT__celloutsig_20z)
                                     ? (vlSelf->top__DOT__celloutsig_142z 
                                        >> 0xdU) : (IData)(vlSelf->top__DOT__celloutsig_90z))))));
    bufp->chgIData(oldp+94,((((0x1000000U & ((IData)(vlSelf->top__DOT__celloutsig_209z) 
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
    bufp->chgBit(oldp+95,(vlSelf->top__DOT__celloutsig_21z));
    bufp->chgCData(oldp+96,(vlSelf->top__DOT__celloutsig_221z),6);
    bufp->chgBit(oldp+97,(((0U != (0x7fU & vlSelf->top__DOT__celloutsig_207z)) 
                           | ((0U != (IData)(vlSelf->top__DOT__celloutsig_165z)) 
                              | ((IData)(vlSelf->top__DOT__celloutsig_60z) 
                                 | (IData)(vlSelf->top__DOT__celloutsig_116z))))));
    bufp->chgSData(oldp+98,(vlSelf->top__DOT__celloutsig_22z),14);
    bufp->chgSData(oldp+99,(vlSelf->top__DOT__celloutsig_230z),9);
    bufp->chgCData(oldp+100,((0x1fU & ((vlSelf->top__DOT__celloutsig_92z 
                                        >> 2U) ^ ((0x1eU 
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
    bufp->chgBit(oldp+101,((1U & (~ ((0x10U & (IData)(vlSelf->top__DOT__celloutsig_74z))
                                      ? (~ ((0x20U 
                                             & (IData)(vlSelf->top__DOT__celloutsig_27z))
                                             ? ((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                                >> 2U)
                                             : ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                >> 6U)))
                                      : (~ ((IData)(vlSelf->top__DOT__celloutsig_63z) 
                                            & (IData)(vlSelf->top__DOT__celloutsig_60z))))))));
    bufp->chgBit(oldp+102,((0U != (0x3ffffffU & (vlSelf->in_data[2U] 
                                                 >> 1U)))));
    bufp->chgIData(oldp+103,(vlSelf->top__DOT__celloutsig_248z),20);
    bufp->chgBit(oldp+104,(vlSelf->top__DOT__celloutsig_26z));
    bufp->chgBit(oldp+105,((1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_54z) 
                                     ^ ((IData)(vlSelf->top__DOT__celloutsig_221z) 
                                        >> 5U))))));
    bufp->chgCData(oldp+106,(vlSelf->top__DOT__celloutsig_27z),7);
    bufp->chgBit(oldp+107,((1U & (((((IData)(vlSelf->top__DOT__celloutsig_124z) 
                                     << 0x18U) | ((0xff8000U 
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
                                      (((1U & (((((
                                                   (((0U 
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
                                        << 0x10U) | 
                                       (((IData)(vlSelf->top__DOT__celloutsig_18z) 
                                         << 0xfU) | (IData)(vlSelf->top__DOT__celloutsig_101z)))))
                                   ? (IData)(vlSelf->top__DOT__celloutsig_122z)
                                   : ((IData)(vlSelf->top__DOT__celloutsig_95z) 
                                      >> 6U)))));
    bufp->chgCData(oldp+108,((0x7fU & (~ ((vlSelf->top__DOT__celloutsig_121z 
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
    bufp->chgBit(oldp+109,((1U & (~ (((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                      | ((IData)(vlSelf->top__DOT__celloutsig_27z) 
                                         >> 4U)) & (IData)(vlSelf->top__DOT___000_))))));
    bufp->chgIData(oldp+110,(vlSelf->top__DOT__celloutsig_30z),22);
    bufp->chgSData(oldp+111,(vlSelf->top__DOT__celloutsig_31z),12);
    bufp->chgCData(oldp+112,((7U & (~ ((vlSelf->top__DOT__celloutsig_285z 
                                        >> 2U) ^ ((4U 
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
    bufp->chgIData(oldp+113,(vlSelf->top__DOT__celloutsig_32z),17);
    bufp->chgSData(oldp+114,(vlSelf->top__DOT__celloutsig_335z),13);
    bufp->chgBit(oldp+115,((1U & (~ ((~ (vlSelf->top__DOT__celloutsig_4z 
                                         >> 9U)) | 
                                     ((0U != (0x7fU 
                                              & vlSelf->top__DOT__celloutsig_207z)) 
                                      | ((0U != (IData)(vlSelf->top__DOT__celloutsig_165z)) 
                                         | ((IData)(vlSelf->top__DOT__celloutsig_60z) 
                                            | (IData)(vlSelf->top__DOT__celloutsig_116z)))))))));
    bufp->chgCData(oldp+116,(vlSelf->top__DOT__celloutsig_33z),3);
    bufp->chgIData(oldp+117,(vlSelf->top__DOT__celloutsig_34z),24);
    bufp->chgBit(oldp+118,(vlSelf->top__DOT__celloutsig_35z));
    bufp->chgSData(oldp+119,(vlSelf->top__DOT__celloutsig_36z),9);
    bufp->chgIData(oldp+120,(vlSelf->top__DOT__celloutsig_38z),24);
    bufp->chgBit(oldp+121,((1U & (~ (vlSelf->top__DOT__celloutsig_204z 
                                     >> 4U)))));
    bufp->chgIData(oldp+122,(vlSelf->top__DOT__celloutsig_40z),25);
    bufp->chgCData(oldp+123,(vlSelf->top__DOT__celloutsig_41z),2);
    bufp->chgIData(oldp+124,(vlSelf->top__DOT__celloutsig_42z),24);
    bufp->chgBit(oldp+125,((1U & ((0x20U & vlSelf->top__DOT__celloutsig_28z)
                                   ? (vlSelf->top__DOT__celloutsig_65z 
                                      >> 0xaU) : ((
                                                   vlSelf->in_data[2U] 
                                                   >> 0x17U) 
                                                  ^ 
                                                  (vlSelf->top__DOT__celloutsig_17z 
                                                   >> 6U))))));
    bufp->chgCData(oldp+126,(vlSelf->top__DOT__celloutsig_44z),2);
    bufp->chgIData(oldp+127,(vlSelf->top__DOT__celloutsig_45z),22);
    bufp->chgSData(oldp+128,(vlSelf->top__DOT__celloutsig_46z),12);
    bufp->chgSData(oldp+129,(vlSelf->top__DOT__celloutsig_47z),12);
    bufp->chgBit(oldp+130,((1U & (((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                   >> 4U) ^ (0U != 
                                             (0x3ffffffU 
                                              & (vlSelf->in_data[2U] 
                                                 >> 1U)))))));
    bufp->chgSData(oldp+131,((0xffffU & (~ ((0xfffeU 
                                             & vlSelf->top__DOT__celloutsig_181z) 
                                            | (1U & 
                                               (~ (vlSelf->top__DOT__celloutsig_204z 
                                                   >> 4U))))))),16);
    bufp->chgBit(oldp+132,((1U & (VL_REDXOR_32((3U 
                                                & (~ 
                                                   (vlSelf->top__DOT__celloutsig_181z 
                                                    >> 6U)))) 
                                  ^ (VL_REDXOR_32((7U 
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
    bufp->chgSData(oldp+133,(vlSelf->top__DOT__celloutsig_498z),16);
    bufp->chgIData(oldp+134,(vlSelf->top__DOT__celloutsig_49z),24);
    bufp->chgBit(oldp+135,(vlSelf->top__DOT__celloutsig_51z));
    bufp->chgSData(oldp+136,(vlSelf->top__DOT__celloutsig_52z),10);
    bufp->chgBit(oldp+137,(vlSelf->top__DOT__celloutsig_534z));
    bufp->chgBit(oldp+138,((1U & (~ ((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                     & (vlSelf->top__DOT__celloutsig_7z 
                                        >> 2U))))));
    bufp->chgIData(oldp+139,(vlSelf->top__DOT__celloutsig_549z),20);
    bufp->chgBit(oldp+140,(vlSelf->top__DOT__celloutsig_54z));
    bufp->chgCData(oldp+141,(vlSelf->top__DOT__celloutsig_55z),8);
    bufp->chgIData(oldp+142,(vlSelf->top__DOT__celloutsig_56z),25);
    bufp->chgBit(oldp+143,((1U & (VL_REDXOR_32((0xffffffU 
                                                & vlSelf->top__DOT__celloutsig_56z)) 
                                  ^ (IData)(vlSelf->top__DOT__celloutsig_86z)))));
    bufp->chgBit(oldp+144,(vlSelf->top__DOT__celloutsig_57z));
    bufp->chgBit(oldp+145,((1U & ((IData)(vlSelf->top__DOT__celloutsig_57z)
                                   ? (vlSelf->top__DOT__celloutsig_42z 
                                      >> 3U) : ((IData)(vlSelf->top__DOT__celloutsig_52z) 
                                                >> 1U)))));
    bufp->chgBit(oldp+146,(vlSelf->top__DOT__celloutsig_60z));
    bufp->chgIData(oldp+147,(vlSelf->top__DOT__celloutsig_615z),18);
    bufp->chgBit(oldp+148,(vlSelf->top__DOT__celloutsig_61z));
    bufp->chgBit(oldp+149,((1U & ((2U & vlSelf->top__DOT__celloutsig_615z)
                                   ? (IData)(vlSelf->top__DOT__celloutsig_90z)
                                   : ((IData)(vlSelf->top__DOT__celloutsig_335z) 
                                      >> 2U)))));
    bufp->chgBit(oldp+150,(vlSelf->top__DOT__celloutsig_62z));
    bufp->chgBit(oldp+151,(vlSelf->top__DOT__celloutsig_64z));
    bufp->chgIData(oldp+152,(vlSelf->top__DOT__celloutsig_66z),24);
    bufp->chgIData(oldp+153,(vlSelf->top__DOT__celloutsig_698z),21);
    bufp->chgBit(oldp+154,((1U & (~ ((vlSelf->top__DOT__celloutsig_45z 
                                      >> 0xcU) ^ ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                  >> 0xeU))))));
    bufp->chgBit(oldp+155,(vlSelf->top__DOT__celloutsig_70z));
    bufp->chgSData(oldp+156,(vlSelf->top__DOT__celloutsig_71z),10);
    bufp->chgIData(oldp+157,(vlSelf->top__DOT__celloutsig_72z),19);
    bufp->chgCData(oldp+158,(vlSelf->top__DOT__celloutsig_74z),8);
    bufp->chgIData(oldp+159,(vlSelf->top__DOT__celloutsig_76z),18);
    bufp->chgIData(oldp+160,((0xff0000U | (0xffffU 
                                           & (~ ((0xfffcU 
                                                  & vlSelf->top__DOT__celloutsig_4z) 
                                                 | (((IData)(vlSelf->top__DOT____VdfgTmp_h8ae1fb61__0) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT__celloutsig_14z))))))),24);
    bufp->chgSData(oldp+161,(vlSelf->top__DOT__celloutsig_78z),13);
    bufp->chgIData(oldp+162,(vlSelf->top__DOT__celloutsig_79z),22);
    bufp->chgIData(oldp+163,(vlSelf->top__DOT__celloutsig_7z),23);
    bufp->chgBit(oldp+164,(vlSelf->top__DOT__celloutsig_81z));
    bufp->chgBit(oldp+165,(((IData)(vlSelf->top__DOT__celloutsig_54z) 
                            ^ ((IData)(vlSelf->top__DOT__celloutsig_221z) 
                               >> 5U))));
    bufp->chgBit(oldp+166,(((IData)(((0U != (0xfff0U 
                                             & vlSelf->top__DOT__celloutsig_125z)) 
                                     | (IData)(vlSelf->top__DOT__celloutsig_534z))) 
                            & (0U != (0x1fffU & (vlSelf->top__DOT__celloutsig_698z 
                                                 >> 6U))))));
    bufp->chgBit(oldp+167,(vlSelf->top__DOT__celloutsig_82z));
    bufp->chgIData(oldp+168,(vlSelf->top__DOT__celloutsig_83z),26);
    bufp->chgBit(oldp+169,((3U == (3U & (vlSelf->top__DOT__celloutsig_32z 
                                         >> 0xbU)))));
    bufp->chgBit(oldp+170,(vlSelf->top__DOT__celloutsig_86z));
    bufp->chgBit(oldp+171,(vlSelf->top__DOT__celloutsig_87z));
    bufp->chgCData(oldp+172,((0xffU & (((0xfcU & (vlSelf->top__DOT__celloutsig_12z 
                                                  >> 2U)) 
                                        | (((IData)(vlSelf->top__DOT__celloutsig_82z) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT__celloutsig_62z))) 
                                       + ((0xfeU & 
                                           (vlSelf->top__DOT__celloutsig_4z 
                                            >> 0x15U)) 
                                          | (IData)(vlSelf->top__DOT__celloutsig_57z))))),8);
    bufp->chgBit(oldp+173,(((~ ((vlSelf->top__DOT__celloutsig_45z 
                                 >> 0xcU) ^ ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                             >> 0xeU))) 
                            & (IData)(((((0x1feU == 
                                          (0x1feU & vlSelf->top__DOT__celloutsig_66z)) 
                                         & (IData)(vlSelf->top__DOT__celloutsig_64z)) 
                                        & (0xfffU == (IData)(vlSelf->top__DOT__celloutsig_46z))) 
                                       & (IData)(vlSelf->top__DOT__celloutsig_0z))))));
    bufp->chgSData(oldp+174,(vlSelf->top__DOT__celloutsig_8z),15);
    bufp->chgBit(oldp+175,(vlSelf->top__DOT__celloutsig_90z));
    bufp->chgSData(oldp+176,((0x3ffU & (((0x3fcU & 
                                          (vlSelf->in_data[2U] 
                                           >> 0x15U)) 
                                         | (((IData)(vlSelf->top__DOT__celloutsig_70z) 
                                             << 1U) 
                                            | (0U != 
                                               (0x3ffffffU 
                                                & (vlSelf->in_data[2U] 
                                                   >> 1U))))) 
                                        ^ (vlSelf->top__DOT__celloutsig_17z 
                                           >> 4U)))),10);
    bufp->chgBit(oldp+177,(vlSelf->top__DOT__celloutsig_93z));
    bufp->chgSData(oldp+178,(vlSelf->top__DOT__celloutsig_95z),12);
    bufp->chgBit(oldp+179,(vlSelf->top__DOT__celloutsig_9z));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
