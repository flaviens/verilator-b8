// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__449(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__449\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        if ((0x40000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x40000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xfbffffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x40000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xfbffffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__450(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__450\n"); );
    // Body
    if ((0x80000U & vlSelf->clkin_data[4U])) {
        if ((0x80000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x80000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xf7ffffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x80000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xf7ffffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__451(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__451\n"); );
    // Body
    if ((0x100000U & vlSelf->clkin_data[4U])) {
        if ((0x100000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x100000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xefffffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x100000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xefffffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__452(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__452\n"); );
    // Body
    if ((0x200000U & vlSelf->clkin_data[4U])) {
        if ((0x200000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x200000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xdfffffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x200000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xdfffffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__453(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__453\n"); );
    // Body
    if ((0x400000U & vlSelf->clkin_data[4U])) {
        if ((0x400000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x400000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xbfffffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x400000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xbfffffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__454(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__454\n"); );
    // Body
    if ((0x800000U & vlSelf->clkin_data[4U])) {
        if ((0x800000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x800000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0x7fffffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x800000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0x7fffffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__457(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__457\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_46z = (0xfffU & (vlSelf->top__DOT__celloutsig_40z 
                                                  >> 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__459(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__459\n"); );
    // Body
    if ((0x400000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7fbfffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x400000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x400000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7fbfffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | ((IData)(vlSelf->top__DOT__celloutsig_82z) 
                                                << 0x16U));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__460(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__460\n"); );
    // Body
    if ((0x10000000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x6fffffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x10000000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x10000000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x6fffffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | ((IData)(vlSelf->top__DOT__celloutsig_102z) 
                                                << 0x1cU));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__461(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__461\n"); );
    // Body
    if ((0x20000000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x5fffffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x20000000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x20000000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x5fffffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | ((IData)(vlSelf->top__DOT__celloutsig_18z) 
                                                << 0x1dU));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__462(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__462\n"); );
    // Body
    if ((0x40000000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x3fffffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x40000000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x40000000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x3fffffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x40000000U 
                                                & ((IData)(vlSelf->top__DOT__celloutsig_44z) 
                                                   << 0x1eU)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__463(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__463\n"); );
    // Body
    if ((0x800000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7f7fffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x800000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x800000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7f7fffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x800000U 
                                                & ((IData)(vlSelf->top__DOT__celloutsig_103z) 
                                                   << 0x17U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__464(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__464\n"); );
    // Body
    if ((0x1000000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7effffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x1000000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x1000000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7effffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x1000000U 
                                                & ((IData)(vlSelf->top__DOT__celloutsig_103z) 
                                                   << 0x17U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__465(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__465\n"); );
    // Body
    if ((0x2000000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7dffffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x2000000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x2000000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7dffffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x2000000U 
                                                & ((IData)(vlSelf->top__DOT__celloutsig_103z) 
                                                   << 0x17U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__466(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__466\n"); );
    // Body
    if ((0x4000000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7bffffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x4000000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x4000000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7bffffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x4000000U 
                                                & ((IData)(vlSelf->top__DOT__celloutsig_103z) 
                                                   << 0x17U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__467(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__467\n"); );
    // Body
    if ((0x8000000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x77ffffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x8000000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x8000000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x77ffffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x8000000U 
                                                & ((IData)(vlSelf->top__DOT__celloutsig_103z) 
                                                   << 0x17U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__468(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__468\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7ffffbffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x400U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x400U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7ffffbffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x400U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__469(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__469\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7ffff7ffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x800U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x800U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7ffff7ffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x800U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__470(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__470\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7fffefffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x1000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x1000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7fffefffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x1000U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__471(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__471\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7fffdfffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x2000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x2000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7fffdfffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x2000U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__472(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__472\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7fffbfffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x4000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x4000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7fffbfffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x4000U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__473(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__473\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7fff7fffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x8000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x8000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7fff7fffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x8000U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__474(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__474\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7ffeffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x10000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x10000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7ffeffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x10000U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__475(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__475\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7ffdffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x20000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x20000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7ffdffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x20000U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__476(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__476\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7ffbffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x40000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x40000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7ffbffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x40000U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__477(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__477\n"); );
    // Body
    if ((0x80000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7ff7ffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x80000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x80000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7ff7ffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x80000U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__478(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__478\n"); );
    // Body
    if ((0x100000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7fefffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x100000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x100000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7fefffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x100000U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__479(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__479\n"); );
    // Body
    if ((0x200000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x7fdfffffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x200000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_114z = (0x200000U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_114z = ((0x7fdfffffU 
                                              & vlSelf->top__DOT__celloutsig_114z) 
                                             | (0x200000U 
                                                & (vlSelf->top__DOT__celloutsig_76z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__481(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__481\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_18z = (1U & (~ (((IData)(vlSelf->top__DOT__celloutsig_11z) 
                                                  >> 8U) 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_0z))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_72z = (0x7ffffU & 
                                        (~ (vlSelf->top__DOT__celloutsig_28z 
                                            ^ ((0x78000U 
                                                & (vlSelf->top__DOT__celloutsig_28z 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->top__DOT__celloutsig_27z) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->top__DOT__celloutsig_55z))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_83z = (0x3ffffffU 
                                        & (~ ((0x3fc0000U 
                                               & (vlSelf->top__DOT__celloutsig_79z 
                                                  << 0xeU)) 
                                              | (((IData)(vlSelf->top__DOT__celloutsig_71z) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_74z)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_82z = (1U & (~ ((((IData)(vlSelf->top__DOT__celloutsig_27z) 
                                                   >> 5U) 
                                                  & ((IData)(vlSelf->top__DOT__celloutsig_74z) 
                                                     >> 2U)) 
                                                 | (IData)(vlSelf->top__DOT___003_))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__486(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__486\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_103z = (0x1fU & (vlSelf->top__DOT__celloutsig_49z 
                                                  >> 0xbU));
    vlSelf->top__DOT__celloutsig_76z = (0x3ffffU & 
                                        (vlSelf->top__DOT__celloutsig_7z 
                                         >> 5U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_57z = ((IData)(vlSelf->top__DOT__celloutsig_18z) 
                                        ^ ((IData)(vlSelf->top__DOT__celloutsig_230z) 
                                           >> 8U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_26z = (1U & (~ ((4U 
                                                  & vlSelf->top__DOT__celloutsig_10z)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__celloutsig_19z) 
                                                  >> 4U)
                                                  : (IData)(vlSelf->top__DOT__celloutsig_18z))));
    vlSelf->top__DOT__celloutsig_35z = (1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_26z) 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_2z))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__488(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__488\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7ffeU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (1U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7ffeU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__489(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__489\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7ffdU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((2U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (2U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7ffdU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__490(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__490\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7ffbU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((4U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (4U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7ffbU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__491(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__491\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7ff7U 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((8U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (8U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7ff7U 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__492(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__492\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7fefU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x10U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7fefU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__493(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__493\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7fdfU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x20U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7fdfU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__494(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__494\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7fbfU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x40U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7fbfU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__495(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__495\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7f7fU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x80U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7f7fU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__496(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__496\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7effU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x100U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7effU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__497(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__497\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7dffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x200U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7dffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__498(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__498\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7bffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((0x400U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x400U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x7bffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__499(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__499\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x77ffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((0x800U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x800U | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x77ffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__500(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__500\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x6fffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((0x1000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x1000U 
                                           | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x6fffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__501(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__501\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x5fffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((0x2000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x2000U 
                                           | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x5fffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__502(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__502\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x3fffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((0x4000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x4000U 
                                           | (IData)(vlSelf->top__DOT__celloutsig_8z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_8z = (0x3fffU 
                                           & (IData)(vlSelf->top__DOT__celloutsig_8z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_90z = ((0U != (0x3ffU 
                                                & (vlSelf->top__DOT__celloutsig_67z 
                                                   >> 9U))) 
                                        & (0U != (0x3ffU 
                                                  & (vlSelf->top__DOT__celloutsig_72z 
                                                     >> 2U))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__503(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__503\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_44z = (2U & (IData)(vlSelf->top__DOT__celloutsig_44z));
    } else if ((1U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_44z = ((2U 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_44z)) 
                                                | (IData)(vlSelf->top__DOT__celloutsig_25z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_44z = (1U | (IData)(vlSelf->top__DOT__celloutsig_44z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__504(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__504\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_44z = (1U & (IData)(vlSelf->top__DOT__celloutsig_44z));
    } else if ((2U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_44z = ((1U 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_44z)) 
                                                | (2U 
                                                   & ((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_44z = (2U | (IData)(vlSelf->top__DOT__celloutsig_44z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_86z = (1U & ((0x80U 
                                               & vlSelf->top__DOT__celloutsig_76z)
                                               ? (vlSelf->in_data[1U] 
                                                  >> 5U)
                                               : (IData)(vlSelf->top__DOT__celloutsig_18z)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_121z = (0x7ffffU & 
                                         ((vlSelf->top__DOT__celloutsig_114z 
                                           >> 2U) ^ 
                                          (vlSelf->top__DOT__celloutsig_92z 
                                           >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_81z = (1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_57z) 
                                                 ^ 
                                                 ((IData)(vlSelf->top__DOT__celloutsig_41z) 
                                                  >> 1U))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__509(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__509\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (1U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xfffffeU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT__celloutsig_15z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xfffffeU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__510(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__510\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        if ((0x8000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x8000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xff7fffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x8000U 
                                                   & ((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                                      << 0xfU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xff7fffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__511(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__511\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        if ((0x10000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x10000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xfeffffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (0x3ffffffU 
                                                             & (vlSelf->in_data[2U] 
                                                                >> 1U)))) 
                                                   << 0x10U));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xfeffffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__512(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__512\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (2U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xfffffdU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (2U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xfffffdU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__513(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__513\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (4U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xfffffbU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (4U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xfffffbU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__514(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__514\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (8U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xfffff7U 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (8U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xfffff7U 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__515(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__515\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x10U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xffffefU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x10U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xffffefU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__516(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__516\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x20U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xffffdfU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x20U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xffffdfU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__517(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__517\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x40U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xffffbfU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x40U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xffffbfU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__518(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__518\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x80U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xffff7fU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x80U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xffff7fU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__519(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__519\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x100U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xfffeffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x100U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xfffeffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__520(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__520\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x200U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xfffdffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x200U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xfffdffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__521(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__521\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x400U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xfffbffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x400U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xfffbffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__522(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__522\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x800U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xfff7ffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x800U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xfff7ffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__523(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__523\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        if ((0x1000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x1000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xffefffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x1000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xffefffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__524(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__524\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        if ((0x2000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x2000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xffdfffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x2000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xffdfffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__525(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__525\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        if ((0x4000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x4000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xffbfffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x4000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xffbfffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__526(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__526\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        if ((0x20000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x20000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xfdffffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x20000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      << 0x10U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xfdffffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__527(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__527\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        if ((0x40000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x40000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xfbffffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x40000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      << 0x10U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xfbffffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__528(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__528\n"); );
    // Body
    if ((0x80000U & vlSelf->clkin_data[4U])) {
        if ((0x80000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x80000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xf7ffffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x80000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      << 0x10U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xf7ffffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__529(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__529\n"); );
    // Body
    if ((0x100000U & vlSelf->clkin_data[4U])) {
        if ((0x100000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x100000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xefffffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x100000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      << 0x10U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xefffffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__530(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__530\n"); );
    // Body
    if ((0x200000U & vlSelf->clkin_data[4U])) {
        if ((0x200000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x200000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xdfffffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x200000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      << 0x10U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xdfffffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__531(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__531\n"); );
    // Body
    if ((0x400000U & vlSelf->clkin_data[4U])) {
        if ((0x400000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x400000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0xbfffffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x400000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      << 0x10U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0xbfffffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__532(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__532\n"); );
    // Body
    if ((0x800000U & vlSelf->clkin_data[4U])) {
        if ((0x800000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_49z = (0x800000U 
                                                | vlSelf->top__DOT__celloutsig_49z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_49z = ((0x7fffffU 
                                                 & vlSelf->top__DOT__celloutsig_49z) 
                                                | (0x800000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      << 0x10U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_49z = (0x7fffffU 
                                            & vlSelf->top__DOT__celloutsig_49z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__533(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__533\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7ffffeU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((1U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7ffffeU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (1U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__534(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__534\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7ffffdU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((2U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7ffffdU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (2U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__535(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__535\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7ffffbU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((4U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7ffffbU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (4U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__536(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__536\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7ffff7U 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((8U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7ffff7U 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (8U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__537(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__537\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7fffefU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7fffefU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x10U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__538(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__538\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7fffdfU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7fffdfU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x20U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__539(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__539\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7fffbfU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7fffbfU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x40U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__540(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__540\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7fff7fU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7fff7fU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x80U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__541(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__541\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7ffeffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7ffeffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x100U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__542(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__542\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7ffdffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7ffdffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x200U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__543(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__543\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7ffbffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x400U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7ffbffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x400U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__544(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__544\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7ff7ffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x800U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7ff7ffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x800U | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__545(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__545\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7fefffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x1000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7fefffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x1000U 
                                           | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__546(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__546\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7fdfffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x2000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7fdfffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x2000U 
                                           | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__547(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__547\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7fbfffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x4000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7fbfffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x4000U 
                                           | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__548(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__548\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7f7fffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x8000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7f7fffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x8000U 
                                           | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__549(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__549\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7effffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x10000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7effffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x10000U 
                                           | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__550(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__550\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7dffffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x20000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7dffffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x20000U 
                                           | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__551(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__551\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x7bffffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x40000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x7bffffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x40000U 
                                           | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__552(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__552\n"); );
    // Body
    if ((0x80000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x77ffffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x80000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x77ffffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x80000U 
                                           | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__553(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__553\n"); );
    // Body
    if ((0x100000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x6fffffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x100000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x6fffffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x100000U 
                                           | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__554(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__554\n"); );
    // Body
    if ((0x200000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x5fffffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x200000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x5fffffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x200000U 
                                           | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__555(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__555\n"); );
    // Body
    if ((0x400000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_7z = (0x3fffffU 
                                           & vlSelf->top__DOT__celloutsig_7z);
    } else if ((0x400000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_7z = (0x3fffffU 
                                               & vlSelf->top__DOT__celloutsig_7z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_7z = (0x400000U 
                                           | vlSelf->top__DOT__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_125z = (vlSelf->top__DOT__celloutsig_121z 
                                         | ((0x7f800U 
                                             & (vlSelf->top__DOT__celloutsig_10z 
                                                << 1U)) 
                                            | (IData)(vlSelf->top__DOT__celloutsig_63z)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_698z = (((0x1f8000U 
                                           & (vlSelf->top__DOT__celloutsig_10z 
                                              << 0xaU)) 
                                          | (((IData)(vlSelf->top__DOT__celloutsig_78z) 
                                              << 2U) 
                                             | (IData)(vlSelf->top__DOT__celloutsig_44z))) 
                                         ^ ((0x1ffff8U 
                                             & (vlSelf->top__DOT__celloutsig_549z 
                                                << 2U)) 
                                            | ((4U 
                                                & (((2U 
                                                     & vlSelf->top__DOT__celloutsig_615z)
                                                     ? (IData)(vlSelf->top__DOT__celloutsig_90z)
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__celloutsig_335z) 
                                                     >> 2U)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((~ 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->top__DOT__celloutsig_32z 
                                                             >> 0xbU))) 
                                                        ^ (IData)(vlSelf->top__DOT__celloutsig_86z))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__celloutsig_0z)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__557(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__557\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_9z = (1U & ((~ ((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                                 >> 1U)) 
                                             | (vlSelf->top__DOT__celloutsig_7z 
                                                >> 0x10U)));
    vlSelf->top__DOT__celloutsig_33z = (7U & (((6U 
                                                & (vlSelf->top__DOT__celloutsig_7z 
                                                   >> 4U)) 
                                               | (IData)(vlSelf->top__DOT__celloutsig_25z)) 
                                              | (vlSelf->top__DOT__celloutsig_4z 
                                                 >> 7U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__12\n"); );
    // Body
    vlSelf->out_data[0U] = ((0xfffffffeU & vlSelf->out_data[0U]) 
                            | ((IData)(((0U != (0xfff0U 
                                                & vlSelf->top__DOT__celloutsig_125z)) 
                                        | (IData)(vlSelf->top__DOT__celloutsig_534z))) 
                               & (0U != (0x1fffU & 
                                         (vlSelf->top__DOT__celloutsig_698z 
                                          >> 6U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_21z = (((0x1c000000U 
                                          & (vlSelf->top__DOT__celloutsig_10z 
                                             << 0xcU)) 
                                         | vlSelf->top__DOT__celloutsig_17z) 
                                        == ((0x10000000U 
                                             & (vlSelf->top__DOT__celloutsig_12z 
                                                << 0x16U)) 
                                            | (((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                                << 0x18U) 
                                               | ((vlSelf->top__DOT__celloutsig_7z 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT__celloutsig_2z)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__14(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__14\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_14z = ((1U & (vlSelf->top__DOT__celloutsig_7z 
                                               >> 0xfU)) 
                                        >= (1U & (vlSelf->top__DOT__celloutsig_10z 
                                                  >> 0x10U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__15\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_56z = (0x1ffffffU 
                                        & ((vlSelf->top__DOT__celloutsig_12z 
                                            >> 1U) 
                                           ^ ((0x1ff8000U 
                                               & (vlSelf->top__DOT__celloutsig_17z 
                                                  << 8U)) 
                                              | (((IData)(vlSelf->top__DOT__celloutsig_11z) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT__celloutsig_9z))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__16\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_66z = (((0xfffffeU 
                                          & (vlSelf->top__DOT__celloutsig_17z 
                                             >> 1U)) 
                                         | (IData)(vlSelf->top__DOT__celloutsig_26z)) 
                                        | ((0xe00000U 
                                            & (vlSelf->top__DOT__celloutsig_4z 
                                               << 0x11U)) 
                                           | ((vlSelf->top__DOT__celloutsig_32z 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT__celloutsig_9z) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__celloutsig_44z) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT__celloutsig_62z))))));
    vlSelf->top__DOT__celloutsig_87z = (IData)((((0xf00000U 
                                                  == 
                                                  (0xf00000U 
                                                   & vlSelf->top__DOT__celloutsig_66z)) 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_14z)) 
                                                & (0x7fffffU 
                                                   == vlSelf->top__DOT__celloutsig_7z)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__17(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__17\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_16z = (0x7ffU & ((IData)(vlSelf->top__DOT__celloutsig_14z)
                                                   ? 
                                                  ((0x7feU 
                                                    & (vlSelf->top__DOT__celloutsig_4z 
                                                       >> 1U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h8ae1fb61__0))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                   >> 3U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__18(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_122z = (((0xffcU & 
                                           (vlSelf->top__DOT__celloutsig_66z 
                                            >> 4U)) 
                                          | (((IData)(vlSelf->top__DOT__celloutsig_29z) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT__celloutsig_86z))) 
                                         < ((0xfe0U 
                                             & vlSelf->top__DOT__celloutsig_121z) 
                                            | (((IData)(vlSelf->top__DOT__celloutsig_64z) 
                                                << 4U) 
                                               | (IData)(vlSelf->top__DOT__celloutsig_6z))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__19(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_40z = (((0x1ffffe0U 
                                          & ((vlSelf->in_data[2U] 
                                              << 0xdU) 
                                             | (0x1fe0U 
                                                & (vlSelf->in_data[1U] 
                                                   >> 0x13U)))) 
                                         | (((IData)(vlSelf->top__DOT__celloutsig_18z) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffffffU 
                                                          & (vlSelf->in_data[2U] 
                                                             >> 1U)))) 
                                                << 3U) 
                                               | (IData)(vlSelf->top__DOT__celloutsig_33z)))) 
                                        | ((0x1ff8000U 
                                            & ((IData)(vlSelf->top__DOT__celloutsig_16z) 
                                               << 0xeU)) 
                                           | ((0x4000U 
                                               & ((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                                  << 0xeU)) 
                                              | (((IData)(vlSelf->top__DOT__celloutsig_35z) 
                                                  << 0xdU) 
                                                 | ((0x1000U 
                                                     & ((~ 
                                                         (((IData)(vlSelf->top__DOT__celloutsig_13z) 
                                                           | (vlSelf->top__DOT__celloutsig_4z 
                                                              >> 9U)) 
                                                          & (IData)(vlSelf->top__DOT___001_))) 
                                                        << 0xcU)) 
                                                    | (((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->top__DOT__celloutsig_21z) 
                                                           << 7U) 
                                                          | (IData)(vlSelf->top__DOT__celloutsig_27z))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__20(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__20\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_51z = (((0x10000U 
                                          & ((IData)(vlSelf->top__DOT__celloutsig_16z) 
                                             << 0xeU)) 
                                         | (((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                             << 4U) 
                                            | (IData)(vlSelf->top__DOT__celloutsig_6z))) 
                                        >= ((0x18000U 
                                             & ((IData)(vlSelf->top__DOT__celloutsig_230z) 
                                                << 0xfU)) 
                                            | (((IData)(vlSelf->top__DOT__celloutsig_33z) 
                                                << 0xcU) 
                                               | (IData)(vlSelf->top__DOT__celloutsig_46z))));
    vlSelf->top__DOT__celloutsig_93z = (1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_29z) 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_51z))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__21\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_20z = (0x1fffffU & 
                                        (~ (((0x1ff800U 
                                              & (vlSelf->top__DOT__celloutsig_4z 
                                                 << 5U)) 
                                             | (IData)(vlSelf->top__DOT__celloutsig_16z)) 
                                            ^ ((0x1f0000U 
                                                & (vlSelf->top__DOT__celloutsig_17z 
                                                   << 7U)) 
                                               | (((IData)(vlSelf->top__DOT__celloutsig_13z) 
                                                   << 0xfU) 
                                                  | (IData)(vlSelf->top__DOT__celloutsig_15z))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__22(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__22\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_60z = ((0U != (3U 
                                                & ((IData)(vlSelf->top__DOT__celloutsig_31z) 
                                                   >> 9U))) 
                                        & (((IData)(vlSelf->top__DOT__celloutsig_16z) 
                                            >> 5U) 
                                           | (IData)(vlSelf->top__DOT__celloutsig_51z)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__23(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__23\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_137z = ((IData)(vlSelf->top__DOT__celloutsig_87z)
                                          ? (((0xfcU 
                                               & (vlSelf->top__DOT__celloutsig_68z 
                                                  >> 0xcU)) 
                                              | (((IData)(vlSelf->top__DOT__celloutsig_25z) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ 
                                                       ((~ (IData)(vlSelf->top__DOT___002_)) 
                                                        ^ 
                                                        ((IData)(vlSelf->top__DOT__celloutsig_98z) 
                                                         >> 5U)))))) 
                                             > ((0xfeU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_110z)) 
                                                | (IData)(vlSelf->top__DOT__celloutsig_51z)))
                                          : (IData)(vlSelf->top__DOT__celloutsig_14z));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__24(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__24\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_102z = ((IData)(((
                                                   ((0U 
                                                     != 
                                                     (0x3fffffeU 
                                                      & vlSelf->top__DOT__celloutsig_17z)) 
                                                    | (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                                   | (IData)(vlSelf->top__DOT__celloutsig_64z)) 
                                                  | (IData)(vlSelf->top__DOT__celloutsig_90z))) 
                                         & (IData)(
                                                   ((((((0U 
                                                         != 
                                                         (0xfff0U 
                                                          & vlSelf->top__DOT__celloutsig_7z)) 
                                                        | (IData)(vlSelf->top__DOT__celloutsig_35z)) 
                                                       | (IData)(vlSelf->top__DOT__celloutsig_90z)) 
                                                      | (IData)(vlSelf->top__DOT__celloutsig_93z)) 
                                                     | (0U 
                                                        != (IData)(vlSelf->top__DOT__celloutsig_94z))) 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->top__DOT__celloutsig_32z 
                                                           >> 0xbU))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__25(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__25\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_30z = ((((IData)(vlSelf->top__DOT__celloutsig_26z) 
                                          << 0x15U) 
                                         | vlSelf->top__DOT__celloutsig_20z) 
                                        | ((0x3f0000U 
                                            & ((IData)(vlSelf->top__DOT__celloutsig_11z) 
                                               << 0xfU)) 
                                           | (((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__celloutsig_0z))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__26(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__26\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_34z = (0xffffffU & 
                                        (~ (((0xfe0000U 
                                              & ((IData)(vlSelf->top__DOT__celloutsig_19z) 
                                                 << 0xeU)) 
                                             | (((IData)(vlSelf->top__DOT__celloutsig_27z) 
                                                 << 0xaU) 
                                                | ((0x200U 
                                                    & ((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                                       << 9U)) 
                                                   | (IData)(vlSelf->top__DOT__celloutsig_230z)))) 
                                            ^ ((0xc00000U 
                                                & ((IData)(vlSelf->top__DOT__celloutsig_19z) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelf->top__DOT__celloutsig_2z) 
                                                   << 0x15U) 
                                                  | vlSelf->top__DOT__celloutsig_20z)))));
    vlSelf->top__DOT__celloutsig_36z = (0x1ffU & ((vlSelf->top__DOT__celloutsig_17z 
                                                   >> 8U) 
                                                  | ((0x1f0U 
                                                      & (vlSelf->top__DOT__celloutsig_34z 
                                                         >> 9U)) 
                                                     | (IData)(vlSelf->top__DOT__celloutsig_6z))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__27(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__27\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_47z = (0xfffU & ((0x40000U 
                                                   & vlSelf->top__DOT__celloutsig_20z)
                                                   ? 
                                                  ((0xf80U 
                                                    & (vlSelf->top__DOT__celloutsig_40z 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->top__DOT__celloutsig_27z))
                                                   : 
                                                  (vlSelf->top__DOT__celloutsig_20z 
                                                   >> 3U)));
    vlSelf->top__DOT__celloutsig_70z = (1U & ((~ ((IData)(vlSelf->top__DOT__celloutsig_47z) 
                                                  >> 8U)) 
                                              | (vlSelf->top__DOT__celloutsig_56z 
                                                 >> 0x13U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__28(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__28\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xf00000U & (((4U & vlSelf->top__DOT__celloutsig_20z)
                                 ? ((0xc0000U & (vlSelf->top__DOT__celloutsig_4z 
                                                 << 0x12U)) 
                                    | ((0x3fff0U & 
                                        (vlSelf->top__DOT__celloutsig_4z 
                                         << 2U)) | 
                                       ((8U & ((IData)(vlSelf->top__DOT__celloutsig_15z) 
                                               << 3U)) 
                                        | ((4U & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)) 
                                                  << 2U)) 
                                           | (((IData)(vlSelf->top__DOT__celloutsig_29z) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT__celloutsig_18z))))))
                                 : 0U) << 0x10U)) | 
                 (((4U & vlSelf->top__DOT__celloutsig_20z)
                    ? (0xfff00U & ((0xc0000U & (vlSelf->top__DOT__celloutsig_4z 
                                                << 0x12U)) 
                                   | ((0x3fff0U & (vlSelf->top__DOT__celloutsig_4z 
                                                   << 2U)) 
                                      | ((8U & ((IData)(vlSelf->top__DOT__celloutsig_15z) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)) 
                                                   << 2U)) 
                                            | (((IData)(vlSelf->top__DOT__celloutsig_29z) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT__celloutsig_18z)))))))
                    : 0U) | ((0xf0U & (vlSelf->top__DOT__celloutsig_38z 
                                       >> 0x10U)) | 
                             ((4U & vlSelf->top__DOT__celloutsig_20z)
                               ? (0xfU & ((0xc0000U 
                                           & (vlSelf->top__DOT__celloutsig_4z 
                                              << 0x12U)) 
                                          | ((0x3fff0U 
                                              & (vlSelf->top__DOT__celloutsig_4z 
                                                 << 2U)) 
                                             | ((8U 
                                                 & ((IData)(vlSelf->top__DOT__celloutsig_15z) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT__celloutsig_29z) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT__celloutsig_18z)))))))
                               : 0U))));
    vlSelf->top__DOT__celloutsig_38z = __Vtemp_1;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__29(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__29\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_61z = (1U & ((~ (vlSelf->top__DOT__celloutsig_42z 
                                                  >> 0xcU)) 
                                              | (IData)(vlSelf->top__DOT__celloutsig_60z)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__30(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__30\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_221z = ((0x200U & vlSelf->top__DOT__celloutsig_125z)
                                          ? ((0x3eU 
                                              & ((0x3fffffeU 
                                                  & (vlSelf->top__DOT__celloutsig_66z 
                                                     >> 6U)) 
                                                 ^ 
                                                 (0x1fffffeU 
                                                  & (vlSelf->top__DOT__celloutsig_92z 
                                                     >> 7U)))) 
                                             | (IData)(vlSelf->top__DOT__celloutsig_137z))
                                          : ((0x3cU 
                                              & (vlSelf->in_data[0U] 
                                                 >> 1U)) 
                                             | (IData)(vlSelf->top__DOT__celloutsig_194z)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__31(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__31\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_116z = (1U & ((IData)(vlSelf->top__DOT__celloutsig_60z) 
                                               ^ ((IData)(vlSelf->top__DOT__celloutsig_47z) 
                                                  >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__32(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__32\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_54z = ((IData)(((0U 
                                                  != 
                                                  (0x3fff0U 
                                                   & vlSelf->top__DOT__celloutsig_49z)) 
                                                 | (0U 
                                                    != (IData)(vlSelf->top__DOT__celloutsig_230z)))) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xffff0eU 
                                                    & vlSelf->top__DOT__celloutsig_38z))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__33(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__33\n"); );
    // Body
    vlSelf->out_data[1U] = ((0xfffffffeU & vlSelf->out_data[1U]) 
                            | ((IData)(vlSelf->top__DOT__celloutsig_54z) 
                               ^ ((IData)(vlSelf->top__DOT__celloutsig_221z) 
                                  >> 5U)));
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__31(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__32(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__33(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__34(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__35(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__36(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__37(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__38(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__39(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__40(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__41(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__42(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__43(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__44(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__45(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__46(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__47(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__48(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__49(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__50(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__51(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__52(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__53(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__54(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__55(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__56(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__57(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__58(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__59(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__60(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__61(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__62(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__63(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__64(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__65(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__66(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__67(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__68(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__69(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__70(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__71(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__72(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__73(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__74(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__75(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__76(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__77(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__78(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__79(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__80(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__81(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__82(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__83(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__84(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__85(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__86(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__87(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__88(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__89(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__90(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__91(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__92(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__93(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__94(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__95(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__96(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__97(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__98(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__99(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__100(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__101(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__102(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__103(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__104(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__105(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__106(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__107(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__108(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__109(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__117(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__123(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__124(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__125(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__126(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__127(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__128(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__129(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__130(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__131(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__132(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__133(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__134(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__135(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__136(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__137(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__138(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__139(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__140(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__141(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__142(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__143(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__144(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__145(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__146(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__147(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__148(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__149(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__150(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__151(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__152(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__153(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__154(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__155(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__156(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__157(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__158(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__160(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__161(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__164(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__167(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__168(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__169(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__170(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__171(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__172(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__173(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__174(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__184(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__185(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__186(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__187(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__188(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__189(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__190(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__191(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__192(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__193(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__194(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__195(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__196(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__197(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__198(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__199(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__203(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__204(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__205(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__206(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__207(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__208(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__209(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__210(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__211(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__212(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__213(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__214(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__215(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__216(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__217(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__218(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__219(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__220(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__221(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__222(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__223(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__224(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__225(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__226(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__227(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__228(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__229(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__230(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__231(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__232(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__233(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__234(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__235(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__236(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__237(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__238(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__239(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__240(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__241(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__242(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__243(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__244(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__245(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__246(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__247(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__248(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__249(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__250(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__251(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__252(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__253(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__254(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__255(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__256(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__257(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__258(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__259(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__260(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__261(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__262(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__263(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__264(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__265(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__266(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__267(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__268(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__269(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__270(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__271(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__272(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__273(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__274(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__275(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__276(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__277(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__278(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__279(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__280(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__281(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__282(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__283(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__284(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__285(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__286(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__287(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__288(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__289(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__290(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__291(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__292(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__293(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__294(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__295(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__296(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__297(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__298(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__299(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__300(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__301(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__302(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__303(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__304(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__305(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__306(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__307(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__308(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__309(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__310(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__311(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__316(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__317(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__318(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__319(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__320(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__321(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__322(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__323(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__324(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__325(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__326(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__327(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__328(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__329(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__330(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__331(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__332(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__333(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__334(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__335(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__345(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__348(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__350(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__351(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__352(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__353(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__354(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__355(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__356(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__357(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__358(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__359(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__360(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__361(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__362(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__363(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__364(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__365(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__366(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__367(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__368(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__369(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__370(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__371(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__372(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__373(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__374(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__375(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__376(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__377(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__378(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__379(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__380(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__381(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__382(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__383(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__384(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__385(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__389(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__390(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__391(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__392(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__393(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__394(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__395(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__396(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__397(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__398(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__399(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__400(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__401(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__402(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__403(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__404(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__405(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__406(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__407(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__408(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__409(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__410(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__411(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__412(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__413(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__414(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__415(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__416(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__417(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__418(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__419(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__420(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__421(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__422(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__423(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__424(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__425(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__426(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__427(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__428(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__429(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__430(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__431(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__432(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__433(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__434(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__435(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__436(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__437(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__438(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__439(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__440(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__441(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__442(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__443(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__444(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__445(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__446(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__447(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__448(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x800000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x1000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x2000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__27(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__28(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__29(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__30(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__31(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__32(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__34(vlSelf);
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__35(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__36(vlSelf);
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__37(vlSelf);
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__38(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__39(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__40(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__41(vlSelf);
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__42(vlSelf);
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__43(vlSelf);
    }
    if ((0x800000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__44(vlSelf);
    }
    if ((0x1000000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__45(vlSelf);
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__46(vlSelf);
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__47(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__48(vlSelf);
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__49(vlSelf);
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__50(vlSelf);
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__51(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__52(vlSelf);
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__53(vlSelf);
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__54(vlSelf);
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__55(vlSelf);
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__56(vlSelf);
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__57(vlSelf);
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__58(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__59(vlSelf);
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__60(vlSelf);
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__61(vlSelf);
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__62(vlSelf);
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__63(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__64(vlSelf);
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__65(vlSelf);
    }
    if ((0x4000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__66(vlSelf);
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__67(vlSelf);
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__68(vlSelf);
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__69(vlSelf);
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__70(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__71(vlSelf);
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__72(vlSelf);
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__73(vlSelf);
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__74(vlSelf);
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__75(vlSelf);
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__76(vlSelf);
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__77(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__78(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__79(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__80(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__81(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__82(vlSelf);
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__83(vlSelf);
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__84(vlSelf);
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__85(vlSelf);
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__86(vlSelf);
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__87(vlSelf);
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__88(vlSelf);
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__89(vlSelf);
    }
    if ((0x10000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__90(vlSelf);
    }
    if ((0x20000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__91(vlSelf);
    }
    if ((0x40000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__92(vlSelf);
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__93(vlSelf);
    }
    if ((0x800000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__94(vlSelf);
    }
    if ((0x1000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__95(vlSelf);
    }
    if ((0x2000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__96(vlSelf);
    }
    if ((0x4000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__97(vlSelf);
    }
    if ((0x8000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__98(vlSelf);
    }
    if ((0x10000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__99(vlSelf);
    }
    if ((0x20000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__100(vlSelf);
    }
    if ((0x40000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__101(vlSelf);
    }
    if ((0x80000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__102(vlSelf);
    }
    if ((0x100000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__103(vlSelf);
    }
    if ((0x200000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__104(vlSelf);
    }
    if ((0x400000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__105(vlSelf);
    }
    if ((0x800000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__106(vlSelf);
    }
    if ((0x1000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__107(vlSelf);
    }
    if ((0x2000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__108(vlSelf);
    }
    if ((0x4000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__109(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__117(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__123(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__124(vlSelf);
    }
    if ((0x2000000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__125(vlSelf);
    }
    if ((0x4000000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__126(vlSelf);
    }
    if ((0x8000000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__127(vlSelf);
    }
    if ((0x10000000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__128(vlSelf);
    }
    if ((0x20000000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__129(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__130(vlSelf);
    }
    if ((0x40000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__131(vlSelf);
    }
    if ((0x80000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__132(vlSelf);
    }
    if ((0x100000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__133(vlSelf);
    }
    if ((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__134(vlSelf);
    }
    if ((0x400000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__135(vlSelf);
    }
    if ((0x800000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__136(vlSelf);
    }
    if ((0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__137(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__138(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__139(vlSelf);
    }
    if ((0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__140(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__141(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__142(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__143(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__144(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__145(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__146(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__147(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__148(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__149(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__150(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__151(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__152(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__153(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__154(vlSelf);
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__155(vlSelf);
    }
    if ((0x1000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__156(vlSelf);
    }
    if ((0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__157(vlSelf);
    }
    if ((0x800000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__158(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__160(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__161(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__164(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__167(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__168(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__169(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__170(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__171(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__172(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__173(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__174(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__184(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__185(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__186(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__187(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__188(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__189(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__190(vlSelf);
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__191(vlSelf);
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__192(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__193(vlSelf);
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__194(vlSelf);
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__195(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__196(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__197(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__198(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__199(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__203(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__204(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__205(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__206(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__207(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__208(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__209(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__210(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__211(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__212(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__213(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__214(vlSelf);
    }
    if ((0x20000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__215(vlSelf);
    }
    if ((0x80000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__216(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__217(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__218(vlSelf);
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__219(vlSelf);
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__220(vlSelf);
    }
    if ((0x800000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__221(vlSelf);
    }
    if ((0x1000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__222(vlSelf);
    }
    if ((0x2000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__223(vlSelf);
    }
    if ((0x4000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__224(vlSelf);
    }
    if ((0x8000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__225(vlSelf);
    }
    if ((0x10000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__226(vlSelf);
    }
    if ((0x100000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__227(vlSelf);
    }
    if ((0x200000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__228(vlSelf);
    }
    if ((0x400000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__229(vlSelf);
    }
    if ((0x800000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__230(vlSelf);
    }
    if ((0x1000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__231(vlSelf);
    }
    if ((0x2000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__232(vlSelf);
    }
    if ((0x4000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__233(vlSelf);
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__234(vlSelf);
    }
    if ((0x10000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__235(vlSelf);
    }
    if ((0x40000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__236(vlSelf);
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__237(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__238(vlSelf);
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__239(vlSelf);
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__240(vlSelf);
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__241(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__242(vlSelf);
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__243(vlSelf);
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__244(vlSelf);
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__245(vlSelf);
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__246(vlSelf);
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__247(vlSelf);
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__248(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__249(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__250(vlSelf);
    }
    if ((0x80000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__251(vlSelf);
    }
    if ((0x100000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__252(vlSelf);
    }
    if ((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__253(vlSelf);
    }
    if ((0x400000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__254(vlSelf);
    }
    if ((0x800000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__255(vlSelf);
    }
    if ((0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__256(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__257(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__258(vlSelf);
    }
    if ((0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__259(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__260(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__261(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__262(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__263(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__264(vlSelf);
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__265(vlSelf);
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__266(vlSelf);
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__267(vlSelf);
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__268(vlSelf);
    }
    if ((0x800000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__269(vlSelf);
    }
    if ((0x1000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__270(vlSelf);
    }
    if ((0x2000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__271(vlSelf);
    }
    if ((0x4000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__272(vlSelf);
    }
    if ((0x8000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__273(vlSelf);
    }
    if ((0x10000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__274(vlSelf);
    }
    if ((0x20000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__275(vlSelf);
    }
    if ((0x40000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__276(vlSelf);
    }
    if ((0x80000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__277(vlSelf);
    }
    if ((0x100000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__278(vlSelf);
    }
    if ((0x200000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__279(vlSelf);
    }
    if ((0x400000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__280(vlSelf);
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__281(vlSelf);
    }
    if ((0x8000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__282(vlSelf);
    }
    if ((0x10000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__283(vlSelf);
    }
    if ((0x20000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__284(vlSelf);
    }
    if ((0x40000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__285(vlSelf);
    }
    if ((0x80000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__286(vlSelf);
    }
    if ((0x100000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__287(vlSelf);
    }
    if ((0x200000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__288(vlSelf);
    }
    if ((0x400000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__289(vlSelf);
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__290(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__291(vlSelf);
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__292(vlSelf);
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__293(vlSelf);
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__294(vlSelf);
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__295(vlSelf);
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__296(vlSelf);
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__297(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__298(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__299(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__300(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__301(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__302(vlSelf);
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__303(vlSelf);
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__304(vlSelf);
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__305(vlSelf);
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__306(vlSelf);
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__307(vlSelf);
    }
    if ((0x800000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__308(vlSelf);
    }
    if ((0x1000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__309(vlSelf);
    }
    if ((0x2000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__310(vlSelf);
    }
    if ((0x4000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__311(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__316(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__317(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__318(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__319(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__320(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__321(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__322(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__323(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__324(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__325(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__326(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__327(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__328(vlSelf);
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__329(vlSelf);
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__330(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__331(vlSelf);
    }
    if ((0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__332(vlSelf);
    }
    if ((0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__333(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__334(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__335(vlSelf);
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__345(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__348(vlSelf);
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__350(vlSelf);
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__351(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__352(vlSelf);
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__353(vlSelf);
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__354(vlSelf);
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__355(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__356(vlSelf);
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__357(vlSelf);
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__358(vlSelf);
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__359(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__360(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__361(vlSelf);
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__362(vlSelf);
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__363(vlSelf);
    }
    if ((0x800000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__364(vlSelf);
    }
    if ((0x1000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__365(vlSelf);
    }
    if ((0x2000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__366(vlSelf);
    }
    if ((0x4000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__367(vlSelf);
    }
    if ((0x8000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__368(vlSelf);
    }
    if ((0x10000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__369(vlSelf);
    }
    if ((0x20000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__370(vlSelf);
    }
    if ((0x40000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__371(vlSelf);
    }
    if ((0x80000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__372(vlSelf);
    }
    if ((0x100000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__373(vlSelf);
    }
    if ((0x200000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__374(vlSelf);
    }
    if ((0x400000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__375(vlSelf);
    }
    if ((0x800000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__376(vlSelf);
    }
    if ((0x1000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__377(vlSelf);
    }
    if ((0x2000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__378(vlSelf);
    }
    if ((0x4000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__379(vlSelf);
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__380(vlSelf);
    }
    if ((0x10000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__381(vlSelf);
    }
    if ((0x20000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__382(vlSelf);
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__383(vlSelf);
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__384(vlSelf);
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__385(vlSelf);
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__389(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__390(vlSelf);
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__391(vlSelf);
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__392(vlSelf);
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__393(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__394(vlSelf);
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__395(vlSelf);
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__396(vlSelf);
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__397(vlSelf);
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__398(vlSelf);
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__399(vlSelf);
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__400(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__401(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__402(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__403(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__404(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__405(vlSelf);
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__406(vlSelf);
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__407(vlSelf);
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__408(vlSelf);
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__409(vlSelf);
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__410(vlSelf);
    }
    if ((0x80000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__411(vlSelf);
    }
    if ((0x100000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__412(vlSelf);
    }
    if ((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__413(vlSelf);
    }
    if ((0x400000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__414(vlSelf);
    }
    if ((0x800000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__415(vlSelf);
    }
    if ((0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__416(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__417(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__418(vlSelf);
    }
    if ((0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__419(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__420(vlSelf);
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__421(vlSelf);
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__422(vlSelf);
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__423(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__424(vlSelf);
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__425(vlSelf);
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__426(vlSelf);
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__427(vlSelf);
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__428(vlSelf);
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__429(vlSelf);
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__430(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__431(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__432(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__433(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__434(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__435(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__436(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__437(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__438(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__439(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__440(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__441(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__442(vlSelf);
    }
    if ((0x2000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__443(vlSelf);
    }
    if ((0x4000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__444(vlSelf);
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__445(vlSelf);
    }
    if ((0x10000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__446(vlSelf);
    }
    if ((0x20000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__447(vlSelf);
    }
    if ((0x40000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__448(vlSelf);
    }
    if ((0x80000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__449(vlSelf);
    }
    if ((0x100000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__450(vlSelf);
    }
    if ((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__451(vlSelf);
    }
    if ((0x400000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__452(vlSelf);
    }
    if ((0x800000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__453(vlSelf);
    }
    if ((0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__454(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__457(vlSelf);
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__459(vlSelf);
    }
    if ((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__460(vlSelf);
    }
    if ((0x400000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__461(vlSelf);
    }
    if ((0x800000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__462(vlSelf);
    }
    if ((0x10000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__463(vlSelf);
    }
    if ((0x20000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__464(vlSelf);
    }
    if ((0x40000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__465(vlSelf);
    }
    if ((0x80000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__466(vlSelf);
    }
    if ((0x100000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__467(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__468(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__469(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__470(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__471(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__472(vlSelf);
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__473(vlSelf);
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__474(vlSelf);
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__475(vlSelf);
    }
    if ((0x800000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__476(vlSelf);
    }
    if ((0x1000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__477(vlSelf);
    }
    if ((0x2000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__478(vlSelf);
    }
    if ((0x4000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__479(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__481(vlSelf);
    }
    if (((4ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x2400000000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if (((8ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x101000000000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if (((8ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x400000000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__486(vlSelf);
    }
    if ((0x4000800000000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((((8ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x800ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x40000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__488(vlSelf);
    }
    if ((0x80000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__489(vlSelf);
    }
    if ((0x100000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__490(vlSelf);
    }
    if ((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__491(vlSelf);
    }
    if ((0x400000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__492(vlSelf);
    }
    if ((0x800000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__493(vlSelf);
    }
    if ((0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__494(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__495(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__496(vlSelf);
    }
    if ((0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__497(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__498(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__499(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__500(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__501(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(3U))) {
        Vtop___024root___nba_sequent__TOP__502(vlSelf);
    }
    if (((6ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x2400000000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__503(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__504(vlSelf);
    }
    if (((0x10ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (1ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x4010800000000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x80000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__509(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__510(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__511(vlSelf);
    }
    if ((0x100000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__512(vlSelf);
    }
    if ((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__513(vlSelf);
    }
    if ((0x400000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__514(vlSelf);
    }
    if ((0x800000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__515(vlSelf);
    }
    if ((0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__516(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__517(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__518(vlSelf);
    }
    if ((0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        Vtop___024root___nba_sequent__TOP__519(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__520(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__521(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__522(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__523(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__524(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__525(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__526(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__527(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__528(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__529(vlSelf);
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__530(vlSelf);
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__531(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__532(vlSelf);
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__533(vlSelf);
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__534(vlSelf);
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__535(vlSelf);
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__536(vlSelf);
    }
    if ((0x800000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__537(vlSelf);
    }
    if ((0x1000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__538(vlSelf);
    }
    if ((0x2000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__539(vlSelf);
    }
    if ((0x4000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__540(vlSelf);
    }
    if ((0x8000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__541(vlSelf);
    }
    if ((0x10000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__542(vlSelf);
    }
    if ((0x20000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__543(vlSelf);
    }
    if ((0x40000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__544(vlSelf);
    }
    if ((0x80000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__545(vlSelf);
    }
    if ((0x100000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__546(vlSelf);
    }
    if ((0x200000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__547(vlSelf);
    }
    if ((0x400000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__548(vlSelf);
    }
    if ((0x800000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__549(vlSelf);
    }
    if ((0x1000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__550(vlSelf);
    }
    if ((0x2000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__551(vlSelf);
    }
    if ((0x4000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__552(vlSelf);
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__553(vlSelf);
    }
    if ((0x10000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__554(vlSelf);
    }
    if ((0x20000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) {
        Vtop___024root___nba_sequent__TOP__555(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x801ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((((0x16ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x508e480000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x802ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) {
        Vtop___024root___nba_sequent__TOP__557(vlSelf);
    }
    if ((((0x1016ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x508e480000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x803ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x240000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x800ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__13(vlSelf);
    }
    if (((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(4U)) 
         | (0x800ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__14(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x4240000000000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vtop___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((((0xcULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x42c8000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x800ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__16(vlSelf);
    }
    if (((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(4U)) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__17(vlSelf);
    }
    if ((((0x1eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x42c8000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x801ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((((0xaULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4240400000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__19(vlSelf);
    }
    if ((((8ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200800000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__20(vlSelf);
    }
    if (((0x240000000000000ULL & vlSelf->__VnbaTriggered.word(4U)) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__21(vlSelf);
    }
    if ((((8ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200a00000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__22(vlSelf);
    }
    if ((((0xeULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x42c8800000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0xc10ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__23(vlSelf);
    }
    if ((((0xeULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x424ac00000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__24(vlSelf);
    }
    if ((((8ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4240000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__25(vlSelf);
    }
    if ((((8ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x240c00000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__26(vlSelf);
    }
    if ((((0xaULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4240400000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__27(vlSelf);
    }
    if ((((1ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4240000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__28(vlSelf);
    }
    if ((((8ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200b00000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__29(vlSelf);
    }
    if ((((0xeULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x42c8800000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0xc11ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__30(vlSelf);
    }
    if ((((0xaULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4240e00000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__31(vlSelf);
    }
    if ((((1ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0xc240800000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x810ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__32(vlSelf);
    }
    if ((((0xfULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0xc2c8800000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0xc11ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vtop___024root___nba_comb__TOP__33(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___eval_act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<333> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/scratch/simufuzz-workdir/tmp/obj_dir_example_fno_worker_wl4327858_fno0_rep0/top.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/scratch/simufuzz-workdir/tmp/obj_dir_example_fno_worker_wl4327858_fno0_rep0/top.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/scratch/simufuzz-workdir/tmp/obj_dir_example_fno_worker_wl4327858_fno0_rep0/top.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
