// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_top.h"

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__323(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__323\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x93U))) {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x73U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(22, vlSelf->__PVT__celloutsig_30z, 0xfU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__324(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__324\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_498z, vlSelf->__PVT__celloutsig_302z);
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__325(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__325\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 4U)));
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__326(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__326\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 5U)));
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__327(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__327\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 6U)));
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__328(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__328\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 7U)));
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__329(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__329\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 8U)));
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__330(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__330\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 9U)));
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__331(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__331\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xaU)));
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__332(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__332\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xbU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__333(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__333\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xcU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__334(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__334\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xdU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__335(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__335\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xeU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__336(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__336\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
            VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xfU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__337(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__337\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
            VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_498z, 
                            (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0x10U)));
        }
    } else {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__338(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__338\n"); );
    // Body
    vlSelf->__PVT__celloutsig_142z = vlSelf->__Vdly__celloutsig_142z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__339(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__339\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_114z = vlSelf->__PVT__celloutsig_114z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__340(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__340\n"); );
    // Body
    vlSelf->__PVT__celloutsig_41z = vlSelf->__Vdly__celloutsig_41z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__341(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__341\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_17z = vlSelf->__PVT__celloutsig_17z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__342(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__342\n"); );
    // Body
    vlSelf->__PVT__celloutsig_110z = vlSelf->__Vdly__celloutsig_110z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__343(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__343\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_55z = vlSelf->__PVT__celloutsig_55z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__344(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__344\n"); );
    // Body
    vlSelf->__PVT__celloutsig_71z = vlSelf->__Vdly__celloutsig_71z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__345(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__345\n"); );
    // Body
    vlSelf->__PVT__celloutsig_22z = vlSelf->__Vdly__celloutsig_22z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__346(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__346\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_11z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_11z, vlSelf->__PVT__celloutsig_0z);
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_11z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__347(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__347\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_11z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_11z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xdU)));
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_11z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__348(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__348\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_11z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_11z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xeU)));
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_11z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__349(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__349\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_11z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_11z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xfU)));
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_11z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__350(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__350\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_11z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_11z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x10U)));
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_11z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__351(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__351\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_11z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_11z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x11U)));
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_11z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__352(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__352\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_11z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_11z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x12U)));
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_11z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__353(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__353\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_11z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_11z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x13U)));
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_11z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__354(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__354\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_11z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_11z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x14U)));
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_11z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__355(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__355\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_11z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_11z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x15U)));
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_11z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__356(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__356\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_27z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_27z, 
                            (1U & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 6U)));
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_27z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__357(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__357\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_27z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_27z, 
                            (1U & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 7U)));
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_27z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__358(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__358\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_27z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_27z, 
                            (1U & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 8U)));
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_27z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__359(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__359\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_27z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_27z, 
                            (1U & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 9U)));
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_27z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__360(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__360\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_27z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_27z, 
                            (1U & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 0xaU)));
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_27z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__361(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__361\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_27z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_27z, 
                            (1U & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 0xbU)));
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_27z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__362(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__362\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_27z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_27z, 
                            (1U & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 0xcU)));
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_27z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__363(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__363\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_46z = vlSelf->__PVT__celloutsig_46z;
    vlSelf->__Vdly__celloutsig_46z = (0xfffU & VL_SEL_IIII(25, vlSelf->__PVT__celloutsig_40z, 3U, 0xcU));
    vlSelf->__PVT__celloutsig_46z = vlSelf->__Vdly__celloutsig_46z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__364(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__364\n"); );
    // Body
    vlSelf->__PVT__celloutsig_8z = vlSelf->__Vdly__celloutsig_8z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__365(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__365\n"); );
    // Body
    vlSelf->__PVT__celloutsig_248z = vlSelf->__Vdly__celloutsig_248z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__366(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__366\n"); );
    // Body
    vlSelf->__PVT__celloutsig_498z = vlSelf->__Vdly__celloutsig_498z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__367(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__367\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_114z, vlSelf->__PVT__celloutsig_61z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__368(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__368\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_114z, vlSelf->__PVT__celloutsig_113z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__369(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__369\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x9cU))) {
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x7cU))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vdly__celloutsig_114z, vlSelf->__PVT__celloutsig_102z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__370(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__370\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x96U))) {
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x76U))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_114z, vlSelf->__PVT__celloutsig_82z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__371(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__371\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_114z, vlSelf->__PVT__celloutsig_54z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__372(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__372\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_114z, vlSelf->__PVT__celloutsig_81z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__373(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__373\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x9dU))) {
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x7dU))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vdly__celloutsig_114z, vlSelf->__PVT__celloutsig_18z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__374(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__374\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x9eU))) {
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x7eU))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_44z), 0U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__375(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__375\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x97U))) {
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x77U))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__celloutsig_103z), 0U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__376(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__376\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x98U))) {
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x78U))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__celloutsig_103z), 1U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__377(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__377\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x99U))) {
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x79U))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__celloutsig_103z), 2U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__378(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__378\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x9aU))) {
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x7aU))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__celloutsig_103z), 3U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__379(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__379\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x9bU))) {
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x7bU))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__celloutsig_103z), 4U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__380(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__380\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__381(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__381\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 1U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__382(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__382\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 2U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__383(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__383\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 3U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__384(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__384\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 4U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__385(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__385\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 5U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__386(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__386\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 6U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__387(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__387\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 7U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__388(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__388\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 8U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__389(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__389\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 9U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__390(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__390\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xaU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__391(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__391\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xbU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__392(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__392\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xcU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__393(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__393\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xdU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__394(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__394\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xeU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__395(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__395\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x93U))) {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x73U))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xfU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__396(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__396\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x94U))) {
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x74U))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0x10U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__397(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__397\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x95U))) {
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_114z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x75U))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelf->__Vdly__celloutsig_114z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_114z, 
                        (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0x11U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__2(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__2\n"); );
    // Body
    vlSelf->__PVT__celloutsig_135z = ((VL_REDOR_I((0x1fffffU 
                                                   & VL_SEL_IIII(22, vlSelf->__PVT__celloutsig_45z, 0U, 0x15U))) 
                                       | (VL_REDOR_I((IData)(vlSelf->__PVT__celloutsig_50z)) 
                                          | VL_REDOR_I((IData)(vlSelf->__PVT__celloutsig_41z)))) 
                                      | (VL_REDOR_I(
                                                    (0x3fU 
                                                     & VL_SEL_IIII(22, vlSelf->__PVT__celloutsig_79z, 1U, 6U))) 
                                         | VL_REDOR_I(vlSelf->__PVT__celloutsig_28z)));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__398(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__398\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x35U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__399(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__399\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x36U)));
        }
    } else {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__400(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__400\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x37U)));
        }
    } else {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__401(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__401\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x38U)));
        }
    } else {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__402(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__402\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x39U)));
        }
    } else {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__403(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__403\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x3aU)));
        }
    } else {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__404(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__404\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x3bU)));
        }
    } else {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__405(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__405\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x3cU)));
        }
    } else {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__406(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__406\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x3dU)));
        }
    } else {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__407(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__407\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x3eU)));
        }
    } else {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__408(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__408\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x3fU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__409(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__409\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x40U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__410(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__410\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x41U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__411(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__411\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x42U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__412(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__412\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x43U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__413(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__413\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x44U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__414(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__414\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x45U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__415(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__415\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x46U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__416(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__416\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x47U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__417(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__417\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x93U))) {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x73U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x48U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x13U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__418(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__418\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x94U))) {
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x74U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x49U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x14U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__419(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__419\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x95U))) {
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x75U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x4aU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x15U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__420(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__420\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x96U))) {
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x76U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x4bU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x16U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__421(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__421\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x97U))) {
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x77U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x17U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x4cU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x17U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__422(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__422\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x98U))) {
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x78U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x18U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x4dU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x18U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__423(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__423\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x99U))) {
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vdly__celloutsig_17z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x79U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x19U, vlSelf->__Vdly__celloutsig_17z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x4eU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x19U, vlSelf->__Vdly__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__424(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__424\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_55z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_55z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_55z, vlSelf->__PVT__celloutsig_53z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__425(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__425\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_55z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_55z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_55z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 1U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__426(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__426\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_55z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_55z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_55z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__427(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__427\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_55z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_55z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_55z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 3U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__428(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__428\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_55z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_55z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_55z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 4U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__429(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__429\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_55z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_55z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_55z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 5U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__430(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__430\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_55z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_55z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_55z, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_44z), 0U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__431(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__431\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_55z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_55z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_55z, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_44z), 1U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__3(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__3\n"); );
    // Body
    vlSelf->__PVT__celloutsig_83z = (0x3ffffffU & (~ 
                                                   VL_CONCAT_III(26,8,18, 
                                                                 (0xffU 
                                                                  & VL_SEL_IIII(22, vlSelf->__PVT__celloutsig_79z, 4U, 8U)), 
                                                                 VL_CONCAT_III(18,10,8, (IData)(vlSelf->__PVT__celloutsig_71z), (IData)(vlSelf->__PVT__celloutsig_74z)))));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__432(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__432\n"); );
    // Body
    vlSelf->__PVT__celloutsig_11z = vlSelf->__Vdly__celloutsig_11z;
    vlSelf->__PVT__celloutsig_18z = (1U & (~ (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 8U) 
                                              & (IData)(vlSelf->__PVT__celloutsig_0z))));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__433(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__433\n"); );
    // Body
    vlSelf->__PVT__celloutsig_27z = vlSelf->__Vdly__celloutsig_27z;
    vlSelf->__PVT__celloutsig_302z = (1U & (~ (((IData)(vlSelf->__PVT__celloutsig_1z) 
                                                | VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__celloutsig_27z), 4U)) 
                                               & (IData)(vlSelf->__PVT___000_))));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__434(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__434\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_10z = vlSelf->__PVT__celloutsig_10z;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__4(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__4\n"); );
    // Body
    vlSelf->__PVT__celloutsig_69z = (1U & (~ (VL_BITSEL_IIII(22, vlSelf->__PVT__celloutsig_45z, 0xcU) 
                                              ^ VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 0xeU))));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__435(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__435\n"); );
    // Body
    vlSelf->__PVT__celloutsig_113z = (1U & (~ VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 4U)));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__436(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__436\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_103z = vlSelf->__PVT__celloutsig_103z;
    vlSelf->__Vdly__celloutsig_76z = vlSelf->__PVT__celloutsig_76z;
    vlSelf->__Vdly__celloutsig_103z = (0x1fU & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_49z, 0xbU, 5U));
    vlSelf->__Vdly__celloutsig_76z = (0x3ffffU & VL_SEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 5U, 0x12U));
    vlSelf->__PVT__celloutsig_103z = vlSelf->__Vdly__celloutsig_103z;
    vlSelf->__PVT__celloutsig_76z = vlSelf->__Vdly__celloutsig_76z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__437(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__437\n"); );
    // Body
    vlSelf->__PVT__celloutsig_114z = vlSelf->__Vdly__celloutsig_114z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__438(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__438\n"); );
    // Body
    vlSelf->__PVT__celloutsig_17z = vlSelf->__Vdly__celloutsig_17z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__439(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__439\n"); );
    // Body
    vlSelf->__PVT__celloutsig_55z = vlSelf->__Vdly__celloutsig_55z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__440(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__440\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_44z = vlSelf->__PVT__celloutsig_44z;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__5(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__5\n"); );
    // Body
    vlSelf->__PVT__celloutsig_57z = (1U & (VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__celloutsig_230z), 8U) 
                                           ^ (IData)(vlSelf->__PVT__celloutsig_18z)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__6(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__6\n"); );
    // Body
    vlSelf->__PVT__celloutsig_154z = (1U & (~ ((1U 
                                                & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__celloutsig_27z), 5U))
                                                ? VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__celloutsig_6z), 2U)
                                                : VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 6U))));
    vlSelf->__PVT__celloutsig_82z = (1U & (~ ((VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__celloutsig_27z), 5U) 
                                               & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_74z), 2U)) 
                                              | (IData)(vlSelf->__PVT___003_))));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__441(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__441\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__442(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__442\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__443(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__443\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__444(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__444\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__445(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__445\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__446(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__446\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__447(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__447\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__448(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__448\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__449(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__449\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__450(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__450\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__451(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__451\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__452(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__452\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__453(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__453\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__454(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__454\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__455(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__455\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_10z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__456(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__456\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_10z, vlSelf->__PVT__celloutsig_2z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__457(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__457\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_10z, vlSelf->__PVT__celloutsig_0z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__458(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__458\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_10z, vlSelf->__PVT__celloutsig_1z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__459(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__459\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_10z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_10z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_10z, vlSelf->__PVT__celloutsig_0z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__460(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__460\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_49z = vlSelf->__PVT__celloutsig_49z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__461(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__461\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_7z = vlSelf->__PVT__celloutsig_7z;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__7(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__7\n"); );
    // Body
    vlSelf->__PVT__celloutsig_86z = (1U & ((1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 7U))
                                            ? VL_BITSEL_IWII(96, vlSelf->in_data, 0x25U)
                                            : (IData)(vlSelf->__PVT__celloutsig_18z)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__8(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__8\n"); );
    // Body
    vlSelf->__PVT__celloutsig_121z = (0x7ffffU & (VL_SEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 2U, 0x13U) 
                                                  ^ 
                                                  VL_SEL_IIII(22, vlSelf->__PVT__celloutsig_92z, 1U, 0x13U)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__9(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__9\n"); );
    // Body
    vlSelf->__PVT__celloutsig_72z = (0x7ffffU & (~ 
                                                 (vlSelf->__PVT__celloutsig_28z 
                                                  ^ 
                                                  VL_CONCAT_III(19,4,15, 
                                                                (0xfU 
                                                                 & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_28z, 0xdU, 4U)), 
                                                                VL_CONCAT_III(15,7,8, (IData)(vlSelf->__PVT__celloutsig_27z), (IData)(vlSelf->__PVT__celloutsig_55z))))));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__462(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__462\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_44z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_44z, vlSelf->__PVT__celloutsig_25z);
        }
    } else {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_44z);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__463(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__463\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_44z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_44z, 
                            (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__celloutsig_6z), 2U)));
        }
    } else {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_44z);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__10(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__10\n"); );
    // Body
    vlSelf->__PVT__celloutsig_58z = (1U & ((IData)(vlSelf->__PVT__celloutsig_57z)
                                            ? VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_42z, 3U)
                                            : VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_52z), 1U)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__11(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__11\n"); );
    // Body
    vlSelf->__PVT__celloutsig_81z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_57z) 
                                              ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_41z), 1U))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__12(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__12\n"); );
    // Body
    vlSelf->__PVT__celloutsig_88z = (0xffU & (VL_CONCAT_III(8,6,2, 
                                                            (0x3fU 
                                                             & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_12z, 4U, 6U)), 
                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_82z), (IData)(vlSelf->__PVT__celloutsig_62z))) 
                                              + VL_CONCAT_III(8,7,1, 
                                                              (0x7fU 
                                                               & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x16U, 7U)), (IData)(vlSelf->__PVT__celloutsig_57z))));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__464(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__464\n"); );
    // Body
    vlSelf->__PVT__celloutsig_10z = vlSelf->__Vdly__celloutsig_10z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__465(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__465\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_15z), 0U)));
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__466(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__466\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
            VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_49z, vlSelf->__PVT__celloutsig_1z);
        }
    } else {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__467(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__467\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U)));
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__468(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__468\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 3U)));
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__469(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__469\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 4U)));
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__470(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__470\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 5U)));
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__471(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__471\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 6U)));
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__472(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__472\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 7U)));
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__473(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__473\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 8U)));
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__474(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__474\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 9U)));
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__475(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__475\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xaU)));
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__476(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__476\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xbU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__477(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__477\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xcU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__478(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__478\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xdU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__479(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__479\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xeU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__480(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__480\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
            VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xfU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__481(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__481\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
            VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 1U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__482(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__482\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
            VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__483(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__483\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x93U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x73U))) {
            VL_ASSIGNBIT_IO(0x13U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 3U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__484(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__484\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x94U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x74U))) {
            VL_ASSIGNBIT_IO(0x14U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 4U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__485(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__485\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x95U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x75U))) {
            VL_ASSIGNBIT_IO(0x15U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 5U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__486(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__486\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x96U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x76U))) {
            VL_ASSIGNBIT_IO(0x16U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 6U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__487(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__487\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x97U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x77U))) {
            VL_ASSIGNBIT_IO(0x17U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x17U, vlSelf->__Vdly__celloutsig_49z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 7U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__488(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__488\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
            VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_49z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_49z, vlSelf->__PVT__celloutsig_23z);
        }
    } else {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_49z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__489(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__489\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__490(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__490\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__491(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__491\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__492(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__492\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__493(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__493\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__494(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__494\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__495(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__495\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__496(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__496\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__497(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__497\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__498(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__498\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__499(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__499\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__500(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__500\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__501(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__501\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__502(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__502\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__503(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__503\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__504(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__504\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__505(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__505\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__506(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__506\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x93U))) {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x73U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0x13U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__507(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__507\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x94U))) {
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x74U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0x14U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__508(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__508\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x95U))) {
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x75U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0x15U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__509(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__509\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x96U))) {
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_7z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x76U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_7z, 0U);
        }
    } else {
        VL_ASSIGNBIT_IO(0x16U, vlSelf->__Vdly__celloutsig_7z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__13(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__13\n"); );
    // Body
    vlSelf->__PVT__celloutsig_106z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_84z) 
                                               ^ (IData)(vlSelf->__PVT__celloutsig_86z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__14(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__14\n"); );
    // Body
    vlSelf->__PVT__celloutsig_90z = (VL_REDOR_I((0x3ffU 
                                                 & VL_SEL_IIII(21, vlSelf->__PVT__celloutsig_67z, 9U, 0xaU))) 
                                     & VL_REDOR_I((0x3ffU 
                                                   & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_72z, 2U, 0xaU))));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__510(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__510\n"); );
    // Body
    vlSelf->__PVT__celloutsig_44z = vlSelf->__Vdly__celloutsig_44z;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__15(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__15\n"); );
    // Body
    vlSelf->__PVT__celloutsig_26z = (1U & (~ ((1U & 
                                               VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 2U))
                                               ? VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT__celloutsig_19z), 4U)
                                               : (IData)(vlSelf->__PVT__celloutsig_18z))));
    vlSelf->__PVT__celloutsig_35z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_26z) 
                                              & (IData)(vlSelf->__PVT__celloutsig_2z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__16(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__16\n"); );
    // Body
    vlSelf->__PVT__celloutsig_125z = (vlSelf->__PVT__celloutsig_121z 
                                      | VL_CONCAT_III(19,8,11, 
                                                      (0xffU 
                                                       & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 0xaU, 8U)), (IData)(vlSelf->__PVT__celloutsig_63z)));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__511(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__511\n"); );
    // Body
    vlSelf->__PVT__celloutsig_49z = vlSelf->__Vdly__celloutsig_49z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__512(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__512\n"); );
    // Body
    vlSelf->__PVT__celloutsig_7z = vlSelf->__Vdly__celloutsig_7z;
    vlSelf->__PVT__celloutsig_119z = VL_REDAND_II(13, 
                                                  (0x1fffU 
                                                   & VL_SEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 2U, 0xdU)));
    vlSelf->__PVT__celloutsig_53z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_1z) 
                                              & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 2U))));
    vlSelf->__PVT__celloutsig_33z = (7U & (VL_CONCAT_III(3,2,1, 
                                                         (3U 
                                                          & VL_SEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 5U, 2U)), (IData)(vlSelf->__PVT__celloutsig_25z)) 
                                           | VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 7U, 3U)));
    vlSelf->__PVT__celloutsig_9z = (1U & (VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0x10U) 
                                          | (~ VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__celloutsig_6z), 1U))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__17(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__17\n"); );
    // Body
    vlSelf->__PVT__celloutsig_626z = (1U & ((1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_615z, 1U))
                                             ? (IData)(vlSelf->__PVT__celloutsig_90z)
                                             : VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT__celloutsig_335z), 2U)));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__513(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__513\n"); );
    // Body
    vlSelf->__PVT__celloutsig_48z = (1U & (VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 4U) 
                                           ^ (IData)(vlSelf->__PVT__celloutsig_23z)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__18(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__18\n"); );
    // Body
    vlSelf->__PVT__celloutsig_21z = (VL_CONCAT_III(29,3,26, 
                                                   (7U 
                                                    & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 0xeU, 3U)), vlSelf->__PVT__celloutsig_17z) 
                                     == VL_CONCAT_III(29,1,28, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_12z, 6U)), 
                                                      VL_CONCAT_III(28,4,24, (IData)(vlSelf->__PVT__celloutsig_6z), 
                                                                    VL_CONCAT_III(24,23,1, vlSelf->__PVT__celloutsig_7z, (IData)(vlSelf->__PVT__celloutsig_2z)))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__19(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__19\n"); );
    // Body
    vlSelf->__PVT__celloutsig_14z = ((1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xfU)) 
                                     >= (1U & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 0x10U)));
    VL_ASSIGNSEL_II(24,16,0U, vlSelf->__PVT__celloutsig_77z, 
                    (0xffffU & (~ VL_CONCAT_III(16,14,2, 
                                                (0x3fffU 
                                                 & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U, 0xeU)), 
                                                VL_CONCAT_III(2,1,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_15z), 0U)), (IData)(vlSelf->__PVT__celloutsig_14z))))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__20(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__20\n"); );
    // Body
    vlSelf->__PVT__celloutsig_56z = (0x1ffffffU & (
                                                   VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_12z, 1U, 0x19U) 
                                                   ^ 
                                                   VL_CONCAT_III(25,10,15, 
                                                                 (0x3ffU 
                                                                  & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 7U, 0xaU)), 
                                                                 VL_CONCAT_III(15,10,5, (IData)(vlSelf->__PVT__celloutsig_11z), 
                                                                               VL_CONCAT_III(5,4,1, (IData)(vlSelf->__PVT__celloutsig_6z), (IData)(vlSelf->__PVT__celloutsig_9z))))));
    vlSelf->__PVT__celloutsig_118z = (VL_REDOR_I((0x3ffU 
                                                  & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xfU, 0xaU))) 
                                      & VL_REDOR_I(
                                                   (0x3ffU 
                                                    & VL_SEL_IIII(25, vlSelf->__PVT__celloutsig_56z, 0xcU, 0xaU))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__21(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__21\n"); );
    // Body
    vlSelf->__PVT__celloutsig_66z = (VL_CONCAT_III(24,23,1, 
                                                   (0x7fffffU 
                                                    & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 2U, 0x17U)), (IData)(vlSelf->__PVT__celloutsig_26z)) 
                                     | VL_CONCAT_III(24,3,21, 
                                                     (7U 
                                                      & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 4U, 3U)), 
                                                     VL_CONCAT_III(21,17,4, vlSelf->__PVT__celloutsig_32z, 
                                                                   VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__celloutsig_9z), 
                                                                                VL_CONCAT_III(3,2,1, (IData)(vlSelf->__PVT__celloutsig_44z), (IData)(vlSelf->__PVT__celloutsig_62z))))));
    vlSelf->__PVT__celloutsig_134z = ((VL_REDOR_I((0x3ffffU 
                                                   & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 1U, 0x12U))) 
                                       | (IData)(vlSelf->__PVT__celloutsig_14z)) 
                                      | VL_REDOR_I(
                                                   (0x7ffffU 
                                                    & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 4U, 0x13U))));
    vlSelf->__PVT__celloutsig_87z = (VL_REDAND_II(4, 
                                                  (0xfU 
                                                   & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 0x14U, 4U))) 
                                     & ((IData)(vlSelf->__PVT__celloutsig_14z) 
                                        & VL_REDAND_II(23, vlSelf->__PVT__celloutsig_7z)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__22(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__22\n"); );
    // Body
    vlSelf->__PVT__celloutsig_698z = (VL_CONCAT_III(21,6,15, 
                                                    (0x3fU 
                                                     & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 5U, 6U)), 
                                                    VL_CONCAT_III(15,13,2, (IData)(vlSelf->__PVT__celloutsig_78z), (IData)(vlSelf->__PVT__celloutsig_44z))) 
                                      ^ VL_CONCAT_III(21,18,3, 
                                                      (0x3ffffU 
                                                       & VL_SEL_IIII(20, vlSelf->__PVT__celloutsig_549z, 1U, 0x12U)), 
                                                      VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_626z), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_106z), (IData)(vlSelf->__PVT__celloutsig_1z)))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__23(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__23\n"); );
    // Body
    vlSelf->__PVT__celloutsig_158z = (0xfU & (VL_CONCAT_III(4,2,2, 
                                                            (3U 
                                                             & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 8U, 2U)), 
                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_113z), (IData)(vlSelf->__PVT__celloutsig_99z))) 
                                              * VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__celloutsig_86z), 
                                                              VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_64z), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_0z), (IData)(vlSelf->__PVT__celloutsig_14z))))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__24(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__24\n"); );
    // Body
    vlSelf->__PVT__celloutsig_16z = (0x7ffU & ((IData)(vlSelf->__PVT__celloutsig_14z)
                                                ? VL_CONCAT_III(11,10,1, 
                                                                (0x3ffU 
                                                                 & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U, 0xaU)), 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_15z), 0U)))
                                                : VL_SEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 3U, 0xbU)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__25(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__25\n"); );
    // Body
    vlSelf->__PVT__celloutsig_572z = (1U & (VL_REDXOR_32(
                                                         (0xffffffU 
                                                          & VL_SEL_IIII(25, vlSelf->__PVT__celloutsig_56z, 0U, 0x18U))) 
                                            ^ (IData)(vlSelf->__PVT__celloutsig_86z)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__26(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__26\n"); );
    // Body
    vlSelf->__PVT__celloutsig_145z = (0x1ffU & (~ VL_CONCAT_III(9,8,1, (IData)(vlSelf->__PVT__celloutsig_110z), (IData)(vlSelf->__PVT__celloutsig_118z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__27(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__27\n"); );
    // Body
    vlSelf->__PVT__celloutsig_144z = (0x3fffU & (VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 0xaU, 0xeU) 
                                                 + 
                                                 VL_CONCAT_III(14,13,1, 
                                                               (0x1fffU 
                                                                & VL_SEL_IIII(22, vlSelf->__PVT__celloutsig_79z, 0U, 0xdU)), (IData)(vlSelf->__PVT__celloutsig_26z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__28(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__28\n"); );
    // Body
    vlSelf->__PVT__celloutsig_89z = ((IData)(vlSelf->__PVT__celloutsig_69z) 
                                     & (VL_REDAND_II(8, 
                                                     (0xffU 
                                                      & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 1U, 8U))) 
                                        & ((IData)(vlSelf->__PVT__celloutsig_64z) 
                                           & (VL_REDAND_II(12, (IData)(vlSelf->__PVT__celloutsig_46z)) 
                                              & (IData)(vlSelf->__PVT__celloutsig_0z)))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__29(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__29\n"); );
    // Body
    vlSelf->__PVT__celloutsig_214z = (VL_CONCAT_III(25,1,24, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_209z), 1U)), vlSelf->__PVT__celloutsig_66z) 
                                      ^ VL_CONCAT_III(25,3,22, 
                                                      (7U 
                                                       & VL_SEL_IIII(14, (IData)(vlSelf->__PVT__celloutsig_120z), 3U, 3U)), 
                                                      VL_CONCAT_III(22,1,21, (IData)(vlSelf->__PVT__celloutsig_196z), 
                                                                    VL_CONCAT_III(21,20,1, 
                                                                                (0xfffffU 
                                                                                & VL_SEL_IIII(22, vlSelf->__PVT__celloutsig_92z, 2U, 0x14U)), (IData)(vlSelf->__PVT__celloutsig_1z)))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__30(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__30\n"); );
    // Body
    vlSelf->__PVT__celloutsig_122z = (VL_CONCAT_III(12,10,2, 
                                                    (0x3ffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 6U, 0xaU)), 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_29z), (IData)(vlSelf->__PVT__celloutsig_86z))) 
                                      < VL_CONCAT_III(12,7,5, 
                                                      (0x7fU 
                                                       & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_121z, 5U, 7U)), 
                                                      VL_CONCAT_III(5,1,4, (IData)(vlSelf->__PVT__celloutsig_64z), (IData)(vlSelf->__PVT__celloutsig_6z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__31(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__31\n"); );
    // Body
    vlSelf->__PVT__celloutsig_829z = ((VL_REDOR_I((0xfffU 
                                                   & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_125z, 4U, 0xcU))) 
                                       | (IData)(vlSelf->__PVT__celloutsig_534z)) 
                                      & VL_REDOR_I(
                                                   (0x1fffU 
                                                    & VL_SEL_IIII(21, vlSelf->__PVT__celloutsig_698z, 6U, 0xdU))));
    VL_ASSIGNBIT_WI(0U, vlSelf->out_data, vlSelf->__PVT__celloutsig_829z);
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__32(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__32\n"); );
    // Body
    vlSelf->__PVT__celloutsig_40z = (VL_CONCAT_III(25,20,5, 
                                                   (0xfffffU 
                                                    & VL_SEL_IWII(96, vlSelf->in_data, 0x38U, 0x14U)), 
                                                   VL_CONCAT_III(5,1,4, (IData)(vlSelf->__PVT__celloutsig_18z), 
                                                                 VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__celloutsig_23z), (IData)(vlSelf->__PVT__celloutsig_33z)))) 
                                     | VL_CONCAT_III(25,10,15, 
                                                     (0x3ffU 
                                                      & VL_SEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 1U, 0xaU)), 
                                                     VL_CONCAT_III(15,1,14, (IData)(vlSelf->__PVT__celloutsig_1z), 
                                                                   VL_CONCAT_III(14,1,13, (IData)(vlSelf->__PVT__celloutsig_35z), 
                                                                                VL_CONCAT_III(13,1,12, (IData)(vlSelf->__PVT__celloutsig_37z), 
                                                                                VL_CONCAT_III(12,4,8, (IData)(vlSelf->__PVT__celloutsig_6z), 
                                                                                VL_CONCAT_III(8,1,7, (IData)(vlSelf->__PVT__celloutsig_21z), (IData)(vlSelf->__PVT__celloutsig_27z))))))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__33(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__33\n"); );
    // Body
    vlSelf->__PVT__celloutsig_51z = (VL_CONCAT_III(17,1,16, 
                                                   (1U 
                                                    & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 2U)), 
                                                   VL_CONCAT_III(16,12,4, (IData)(vlSelf->__PVT__celloutsig_46z), (IData)(vlSelf->__PVT__celloutsig_6z))) 
                                     >= VL_CONCAT_III(17,2,15, 
                                                      (3U 
                                                       & VL_SEL_IIII(9, (IData)(vlSelf->__PVT__celloutsig_230z), 0U, 2U)), 
                                                      VL_CONCAT_III(15,3,12, (IData)(vlSelf->__PVT__celloutsig_33z), (IData)(vlSelf->__PVT__celloutsig_46z))));
    vlSelf->__PVT__celloutsig_93z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_51z) 
                                              & (IData)(vlSelf->__PVT__celloutsig_29z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__34(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__34\n"); );
    // Body
    vlSelf->__PVT__celloutsig_20z = (0x1fffffU & (~ 
                                                  (VL_CONCAT_III(21,10,11, 
                                                                 (0x3ffU 
                                                                  & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 6U, 0xaU)), (IData)(vlSelf->__PVT__celloutsig_16z)) 
                                                   ^ 
                                                   VL_CONCAT_III(21,5,16, 
                                                                 (0x1fU 
                                                                  & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 9U, 5U)), 
                                                                 VL_CONCAT_III(16,1,15, (IData)(vlSelf->__PVT__celloutsig_13z), 
                                                                               VL_CONCAT_III(15,14,1, 
                                                                                (0x3fffU 
                                                                                & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U, 0xeU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_15z), 0U))))))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__35(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__35\n"); );
    // Body
    vlSelf->__PVT__celloutsig_60z = (VL_REDOR_I((3U 
                                                 & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_31z), 9U, 2U))) 
                                     & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 5U) 
                                        | (IData)(vlSelf->__PVT__celloutsig_51z)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__36(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__36\n"); );
    // Body
    vlSelf->__PVT__celloutsig_115z = (VL_CONCAT_III(8,6,2, 
                                                    (0x3fU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__celloutsig_68z, 0xeU, 6U)), 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_25z), (IData)(vlSelf->__PVT__celloutsig_107z))) 
                                      > VL_CONCAT_III(8,7,1, 
                                                      (0x7fU 
                                                       & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 1U, 7U)), (IData)(vlSelf->__PVT__celloutsig_51z)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__37(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__37\n"); );
    // Body
    vlSelf->__PVT__celloutsig_102z = ((VL_REDOR_I((0x1ffffffU 
                                                   & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 1U, 0x19U))) 
                                       | ((IData)(vlSelf->__PVT__celloutsig_0z) 
                                          | ((IData)(vlSelf->__PVT__celloutsig_64z) 
                                             | (IData)(vlSelf->__PVT__celloutsig_90z)))) 
                                      & (VL_REDOR_I(
                                                    (0xfffU 
                                                     & VL_SEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 4U, 0xcU))) 
                                         | ((IData)(vlSelf->__PVT__celloutsig_35z) 
                                            | ((IData)(vlSelf->__PVT__celloutsig_84z) 
                                               | ((IData)(vlSelf->__PVT__celloutsig_90z) 
                                                  | (VL_REDOR_I((IData)(vlSelf->__PVT__celloutsig_94z)) 
                                                     | (IData)(vlSelf->__PVT__celloutsig_93z)))))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__38(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__38\n"); );
    // Body
    vlSelf->__PVT__celloutsig_211z = (1U & (~ ((1U 
                                                & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0x14U))
                                                ? VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_142z, 0xdU)
                                                : (IData)(vlSelf->__PVT__celloutsig_90z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__39(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__39\n"); );
    // Body
    vlSelf->__PVT__celloutsig_30z = (VL_CONCAT_III(22,1,21, (IData)(vlSelf->__PVT__celloutsig_26z), vlSelf->__PVT__celloutsig_20z) 
                                     | VL_CONCAT_III(22,6,16, 
                                                     (0x3fU 
                                                      & VL_SEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 1U, 6U)), 
                                                     VL_CONCAT_III(16,15,1, (IData)(vlSelf->__PVT__celloutsig_8z), (IData)(vlSelf->__PVT__celloutsig_1z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__40(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__40\n"); );
    // Body
    VL_ASSIGNSEL_II(24,12,8U, vlSelf->__PVT__celloutsig_38z, 
                    (0xfffU & VL_SEL_IIII(20, ((1U 
                                                & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 2U))
                                                ? VL_CONCAT_III(20,2,18, 
                                                                (3U 
                                                                 & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0U, 2U)), 
                                                                VL_CONCAT_III(18,14,4, 
                                                                              (0x3fffU 
                                                                               & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U, 0xeU)), 
                                                                              VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_15z), 0U)), 
                                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_3z), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_29z), (IData)(vlSelf->__PVT__celloutsig_18z))))))
                                                : 0U), 8U, 0xcU)));
    VL_ASSIGNSEL_II(24,4,0x14U, vlSelf->__PVT__celloutsig_38z, 
                    (0xfU & VL_SEL_IIII(20, ((1U & 
                                              VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 2U))
                                              ? VL_CONCAT_III(20,2,18, 
                                                              (3U 
                                                               & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0U, 2U)), 
                                                              VL_CONCAT_III(18,14,4, 
                                                                            (0x3fffU 
                                                                             & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U, 0xeU)), 
                                                                            VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_15z), 0U)), 
                                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_3z), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_29z), (IData)(vlSelf->__PVT__celloutsig_18z))))))
                                              : 0U), 4U, 4U)));
    VL_ASSIGNSEL_II(24,4,0U, vlSelf->__PVT__celloutsig_38z, 
                    (0xfU & VL_SEL_IIII(20, ((1U & 
                                              VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 2U))
                                              ? VL_CONCAT_III(20,2,18, 
                                                              (3U 
                                                               & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0U, 2U)), 
                                                              VL_CONCAT_III(18,14,4, 
                                                                            (0x3fffU 
                                                                             & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U, 0xeU)), 
                                                                            VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_15z), 0U)), 
                                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_3z), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_29z), (IData)(vlSelf->__PVT__celloutsig_18z))))))
                                              : 0U), 0U, 4U)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__41(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__41\n"); );
    // Body
    vlSelf->__PVT__celloutsig_34z = (0xffffffU & (~ 
                                                  (VL_CONCAT_III(24,7,17, 
                                                                 (0x7fU 
                                                                  & VL_SEL_IIII(13, (IData)(vlSelf->__PVT__celloutsig_19z), 3U, 7U)), 
                                                                 VL_CONCAT_III(17,7,10, (IData)(vlSelf->__PVT__celloutsig_27z), 
                                                                               VL_CONCAT_III(10,1,9, (IData)(vlSelf->__PVT__celloutsig_1z), (IData)(vlSelf->__PVT__celloutsig_230z)))) 
                                                   ^ 
                                                   VL_CONCAT_III(24,2,22, 
                                                                 (3U 
                                                                  & VL_SEL_IIII(13, (IData)(vlSelf->__PVT__celloutsig_19z), 6U, 2U)), 
                                                                 VL_CONCAT_III(22,1,21, (IData)(vlSelf->__PVT__celloutsig_2z), vlSelf->__PVT__celloutsig_20z)))));
    vlSelf->__PVT__celloutsig_36z = (0x1ffU & (VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 8U, 9U) 
                                               | VL_CONCAT_III(9,5,4, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_34z, 0xdU, 5U)), (IData)(vlSelf->__PVT__celloutsig_6z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__42(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__42\n"); );
    // Body
    vlSelf->__PVT__celloutsig_47z = (0xfffU & ((1U 
                                                & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0x12U))
                                                ? VL_CONCAT_III(12,5,7, 
                                                                (0x1fU 
                                                                 & VL_SEL_IIII(25, vlSelf->__PVT__celloutsig_40z, 5U, 5U)), (IData)(vlSelf->__PVT__celloutsig_27z))
                                                : VL_SEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 3U, 0xcU)));
    vlSelf->__PVT__celloutsig_70z = (1U & (VL_BITSEL_IIII(25, vlSelf->__PVT__celloutsig_56z, 0x13U) 
                                           | (~ VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_47z), 8U))));
    vlSelf->__PVT__celloutsig_91z = (0x3ffU & (VL_CONCAT_III(10,8,2, 
                                                             (0xffU 
                                                              & VL_SEL_IWII(96, vlSelf->in_data, 0x57U, 8U)), 
                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_70z), (IData)(vlSelf->__PVT__celloutsig_23z))) 
                                               ^ VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 4U, 0xaU)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__43(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__43\n"); );
    // Body
    vlSelf->__PVT__celloutsig_61z = (1U & ((IData)(vlSelf->__PVT__celloutsig_60z) 
                                           | (~ VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_42z, 0xcU))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__44(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__44\n"); );
    // Body
    vlSelf->__PVT__celloutsig_195z = (1U & (~ (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_63z), 0U) 
                                               & (IData)(vlSelf->__PVT__celloutsig_60z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__45(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__45\n"); );
    // Body
    vlSelf->__PVT__celloutsig_137z = ((IData)(vlSelf->__PVT__celloutsig_87z)
                                       ? (IData)(vlSelf->__PVT__celloutsig_115z)
                                       : (IData)(vlSelf->__PVT__celloutsig_14z));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__46(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__46\n"); );
    // Body
    vlSelf->__PVT__celloutsig_54z = ((VL_REDOR_I((0x3fffU 
                                                  & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_49z, 4U, 0xeU))) 
                                      | VL_REDOR_I((IData)(vlSelf->__PVT__celloutsig_230z))) 
                                     & (VL_REDOR_I(
                                                   (0xffffU 
                                                    & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 8U, 0x10U))) 
                                        | (VL_REDOR_I(
                                                      (0xfU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x14U, 4U))) 
                                           | VL_REDOR_I(
                                                        (7U 
                                                         & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 1U, 3U))))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__47(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__47\n"); );
    // Body
    vlSelf->__PVT__celloutsig_109z = (1U & (VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_34z, 8U) 
                                            | (~ VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_67z, 9U))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__48(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__48\n"); );
    // Body
    vlSelf->__PVT__celloutsig_141z = (1U & ((IData)(vlSelf->__PVT__celloutsig_3z)
                                             ? VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 4U)
                                             : VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__celloutsig_36z), 2U)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__49(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__49\n"); );
    // Body
    vlSelf->__PVT__celloutsig_116z = (1U & ((IData)(vlSelf->__PVT__celloutsig_60z) 
                                            ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_47z), 1U)));
    vlSelf->__PVT__celloutsig_228z = (VL_REDOR_I((0x7fU 
                                                  & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_207z, 0U, 7U))) 
                                      | (VL_REDOR_I((IData)(vlSelf->__PVT__celloutsig_165z)) 
                                         | ((IData)(vlSelf->__PVT__celloutsig_60z) 
                                            | (IData)(vlSelf->__PVT__celloutsig_116z))));
    vlSelf->__PVT__celloutsig_336z = (1U & (~ (VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_77z, 9U) 
                                               | (IData)(vlSelf->__PVT__celloutsig_228z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__50(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__50\n"); );
    // Body
    vlSelf->__PVT__celloutsig_132z = (0xffffU & (~ 
                                                 (VL_CONCAT_III(16,14,2, 
                                                                (0x3fffU 
                                                                 & VL_SEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 1U, 0xeU)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_122z), (IData)(vlSelf->__PVT__celloutsig_81z))) 
                                                  ^ 
                                                  VL_CONCAT_III(16,14,2, 
                                                                (0x3fffU 
                                                                 & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_49z, 0U, 0xeU)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_93z), (IData)(vlSelf->__PVT__celloutsig_70z))))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__51(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__51\n"); );
    // Body
    vlSelf->__PVT__celloutsig_117z = (1U & (~ ((1U 
                                                & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_28z, 5U))
                                                ? VL_BITSEL_IIII(20, vlSelf->__PVT__celloutsig_65z, 0xaU)
                                                : VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_91z), 2U))));
    vlSelf->__PVT__celloutsig_445z = (1U & (~ (IData)(vlSelf->__PVT__celloutsig_117z)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__52(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__52\n"); );
    // Body
    vlSelf->__PVT__celloutsig_232z = (1U & (~ ((1U 
                                                & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_74z), 4U))
                                                ? (IData)(vlSelf->__PVT__celloutsig_154z)
                                                : (IData)(vlSelf->__PVT__celloutsig_195z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__53(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__53\n"); );
    // Body
    vlSelf->__PVT__celloutsig_221z = ((1U & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_125z, 9U))
                                       ? VL_CONCAT_III(6,5,1, 
                                                       (0x1fU 
                                                        & VL_SEL_IIII(25, vlSelf->__PVT__celloutsig_214z, 7U, 5U)), (IData)(vlSelf->__PVT__celloutsig_137z))
                                       : VL_CONCAT_III(6,4,2, 
                                                       (0xfU 
                                                        & VL_SEL_IWII(96, vlSelf->in_data, 3U, 4U)), (IData)(vlSelf->__PVT__celloutsig_194z)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__54(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__54\n"); );
    // Body
    vlSelf->__PVT__celloutsig_168z = ((VL_REDOR_I((7U 
                                                   & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_125z, 6U, 3U))) 
                                       | ((IData)(vlSelf->__PVT__celloutsig_14z) 
                                          | ((IData)(vlSelf->__PVT__celloutsig_2z) 
                                             | ((IData)(vlSelf->__PVT__celloutsig_109z) 
                                                | (VL_REDOR_I((IData)(vlSelf->__PVT__celloutsig_6z)) 
                                                   | (VL_REDOR_I((IData)(vlSelf->__PVT__celloutsig_162z)) 
                                                      | (IData)(vlSelf->__PVT__celloutsig_86z))))))) 
                                      | (VL_REDOR_I(
                                                    (0xfU 
                                                     & VL_SEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 2U, 4U))) 
                                         | VL_REDOR_I((IData)(vlSelf->__PVT__celloutsig_149z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__55(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__55\n"); );
    // Body
    vlSelf->__PVT__celloutsig_329z = (7U & (~ (VL_SEL_IIII(30, vlSelf->__PVT__celloutsig_285z, 2U, 3U) 
                                               ^ VL_CONCAT_III(3,1,2, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_326z, 3U)), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_141z), (IData)(vlSelf->__PVT__celloutsig_134z))))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__56(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__56\n"); );
    // Body
    vlSelf->__PVT__celloutsig_133z = ((VL_REDOR_I((0x1ffU 
                                                   & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_94z), 1U, 9U))) 
                                       | (VL_REDOR_I((IData)(vlSelf->__PVT__celloutsig_132z)) 
                                          | ((IData)(vlSelf->__PVT__celloutsig_48z) 
                                             | (IData)(vlSelf->__PVT__celloutsig_87z)))) 
                                      | (VL_REDOR_I(
                                                    (3U 
                                                     & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_28z, 6U, 2U))) 
                                         | ((IData)(vlSelf->__PVT__celloutsig_99z) 
                                            | ((IData)(vlSelf->__PVT__celloutsig_81z) 
                                               | ((IData)(vlSelf->__PVT__celloutsig_70z) 
                                                  | VL_REDOR_I(vlSelf->__PVT__celloutsig_100z))))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__57(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__57\n"); );
    // Body
    vlSelf->__PVT__celloutsig_274z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_54z) 
                                               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__celloutsig_221z), 5U))));
    vlSelf->__PVT__celloutsig_828z = (1U & (~ (IData)(vlSelf->__PVT__celloutsig_274z)));
    VL_ASSIGNBIT_WI(0x20U, vlSelf->out_data, vlSelf->__PVT__celloutsig_828z);
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__58(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__58\n"); );
    // Body
    vlSelf->__PVT__celloutsig_231z = (0x1fU & (VL_SEL_IIII(22, vlSelf->__PVT__celloutsig_92z, 2U, 5U) 
                                               ^ VL_CONCAT_III(5,4,1, 
                                                               (0xfU 
                                                                & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__celloutsig_221z), 1U, 4U)), (IData)(vlSelf->__PVT__celloutsig_168z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__59(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__59\n"); );
    // Body
    vlSelf->__PVT__celloutsig_166z = (VL_CONCAT_III(26,2,24, (IData)(vlSelf->__PVT__celloutsig_124z), 
                                                    VL_CONCAT_III(24,9,15, (IData)(vlSelf->__PVT__celloutsig_145z), (IData)(vlSelf->__PVT__celloutsig_8z))) 
                                      > VL_CONCAT_III(26,9,17, (IData)(vlSelf->__PVT__celloutsig_36z), 
                                                      VL_CONCAT_III(17,1,16, (IData)(vlSelf->__PVT__celloutsig_133z), 
                                                                    VL_CONCAT_III(16,1,15, (IData)(vlSelf->__PVT__celloutsig_18z), (IData)(vlSelf->__PVT__celloutsig_101z)))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__60(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__60\n"); );
    // Body
    vlSelf->__PVT__celloutsig_497z = (1U & (VL_REDXOR_32(
                                                         (3U 
                                                          & VL_SEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_496z), 6U, 2U))) 
                                            ^ (VL_REDXOR_4(vlSelf->__PVT__celloutsig_329z) 
                                               ^ VL_REDXOR_8(vlSelf->__PVT__celloutsig_231z))));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__61(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__61\n"); );
    // Body
    vlSelf->__PVT__celloutsig_283z = (1U & ((IData)(vlSelf->__PVT__celloutsig_166z)
                                             ? (IData)(vlSelf->__PVT__celloutsig_122z)
                                             : VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_95z), 6U)));
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__62(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__62\n"); );
    // Body
    vlSelf->__PVT__celloutsig_294z = (0x7fU & (~ (VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_121z, 0xaU, 7U) 
                                                  ^ 
                                                  VL_CONCAT_III(7,4,3, 
                                                                (0xfU 
                                                                 & VL_SEL_IIII(14, (IData)(vlSelf->__PVT__celloutsig_22z), 1U, 4U)), 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_283z), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_137z), (IData)(vlSelf->__PVT__celloutsig_84z)))))));
}
