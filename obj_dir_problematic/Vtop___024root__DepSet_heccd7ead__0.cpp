// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_62z = (1U & ((~ ((IData)(vlSelf->top__DOT__celloutsig_50z) 
                                                  >> 1U)) 
                                              | (vlSelf->in_data[0U] 
                                                 >> 0x1aU)));
    vlSelf->top__DOT__celloutsig_0z = ((0x7fU & (vlSelf->in_data[0U] 
                                                 >> 2U)) 
                                       == (0x7fU & 
                                           (vlSelf->in_data[2U] 
                                            >> 8U)));
    vlSelf->top__DOT__celloutsig_18z = (1U & (~ (((IData)(vlSelf->top__DOT__celloutsig_11z) 
                                                  >> 8U) 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_0z))));
    vlSelf->top__DOT__celloutsig_2z = (1U & ((IData)(vlSelf->top__DOT__celloutsig_0z)
                                              ? (IData)(vlSelf->top__DOT__celloutsig_0z)
                                              : (~ (IData)(vlSelf->top__DOT__celloutsig_0z))));
    vlSelf->top__DOT__celloutsig_57z = ((IData)(vlSelf->top__DOT__celloutsig_18z) 
                                        ^ ((IData)(vlSelf->top__DOT__celloutsig_230z) 
                                           >> 8U));
    vlSelf->top__DOT__celloutsig_86z = (1U & ((0x80U 
                                               & vlSelf->top__DOT__celloutsig_76z)
                                               ? (vlSelf->in_data[1U] 
                                                  >> 5U)
                                               : (IData)(vlSelf->top__DOT__celloutsig_18z)));
    vlSelf->top__DOT__celloutsig_26z = (1U & (~ ((4U 
                                                  & vlSelf->top__DOT__celloutsig_10z)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__celloutsig_19z) 
                                                  >> 4U)
                                                  : (IData)(vlSelf->top__DOT__celloutsig_18z))));
    vlSelf->top__DOT____VdfgTmp_hf052a1ba__0 = (1U 
                                                & ((0x40U 
                                                    & vlSelf->in_data[0U])
                                                    ? 
                                                   (~ (IData)(vlSelf->top__DOT__celloutsig_0z))
                                                    : (IData)(vlSelf->top__DOT__celloutsig_2z)));
    vlSelf->top__DOT__celloutsig_81z = (1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_57z) 
                                                 ^ 
                                                 ((IData)(vlSelf->top__DOT__celloutsig_41z) 
                                                  >> 1U))));
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
    vlSelf->top__DOT__celloutsig_35z = (1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_26z) 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_2z))));
    vlSelf->top__DOT__celloutsig_13z = (1U & (~ ((~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)) 
                                                 ^ (IData)(vlSelf->top__DOT__celloutsig_0z))));
    vlSelf->top__DOT__celloutsig_6z = (((0xeU & (vlSelf->in_data[0U] 
                                                 >> 0xbU)) 
                                        | (1U & (~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)))) 
                                       | ((8U & (vlSelf->in_data[0U] 
                                                 >> 4U)) 
                                          | ((4U & 
                                              ((~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)) 
                                               << 2U)) 
                                             | (((IData)(vlSelf->top__DOT__celloutsig_2z) 
                                                 << 1U) 
                                                | (1U 
                                                   & (~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)))))));
    vlSelf->top__DOT__celloutsig_4z = (((0x1ffffffcU 
                                         & ((vlSelf->in_data[2U] 
                                             << 0x13U) 
                                            | (0x7fffcU 
                                               & (vlSelf->in_data[1U] 
                                                  >> 0xdU)))) 
                                        | (((IData)(vlSelf->top__DOT__celloutsig_0z) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelf->top__DOT__celloutsig_0z))))) 
                                       ^ ((0x1ffffc00U 
                                           & (vlSelf->in_data[0U] 
                                              << 6U)) 
                                          | (((IData)(vlSelf->top__DOT__celloutsig_2z) 
                                              << 9U) 
                                             | ((0x100U 
                                                 & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                                       << 7U)) 
                                                   | (((IData)(vlSelf->top__DOT__celloutsig_0z) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT__celloutsig_0z) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT__celloutsig_2z) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->top__DOT__celloutsig_0z) 
                                                                << 3U) 
                                                               | ((4U 
                                                                   & ((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                                                      << 2U)) 
                                                                  | ((2U 
                                                                      & ((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0))))))))))))));
    vlSelf->out_data[0U] = ((0xfffffffeU & vlSelf->out_data[0U]) 
                            | ((IData)(((0U != (0xfff0U 
                                                & vlSelf->top__DOT__celloutsig_125z)) 
                                        | (IData)(vlSelf->top__DOT__celloutsig_534z))) 
                               & (0U != (0x1fffU & 
                                         (vlSelf->top__DOT__celloutsig_698z 
                                          >> 6U)))));
    vlSelf->top__DOT____VdfgTmp_h8ae1fb61__0 = (1U 
                                                ^ ((IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0) 
                                                   ^ (IData)(vlSelf->top__DOT__celloutsig_13z)));
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
    vlSelf->top__DOT__celloutsig_9z = (1U & ((~ ((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                                 >> 1U)) 
                                             | (vlSelf->top__DOT__celloutsig_7z 
                                                >> 0x10U)));
    vlSelf->top__DOT__celloutsig_64z = (1U & (~ ((vlSelf->top__DOT__celloutsig_4z 
                                                  >> 0xdU) 
                                                 & (vlSelf->top__DOT__celloutsig_32z 
                                                    >> 5U))));
    vlSelf->top__DOT__celloutsig_25z = (1U & ((~ (vlSelf->top__DOT__celloutsig_4z 
                                                  >> 2U)) 
                                              | ((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                                 >> 1U)));
    vlSelf->top__DOT__celloutsig_15z = ((0x7ffeU & 
                                         (vlSelf->top__DOT__celloutsig_4z 
                                          >> 1U)) | (IData)(vlSelf->top__DOT____VdfgTmp_h8ae1fb61__0));
    vlSelf->top__DOT__celloutsig_16z = (0x7ffU & ((IData)(vlSelf->top__DOT__celloutsig_14z)
                                                   ? 
                                                  ((0x7feU 
                                                    & (vlSelf->top__DOT__celloutsig_4z 
                                                       >> 1U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h8ae1fb61__0))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                   >> 3U)));
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
    vlSelf->top__DOT__celloutsig_29z = (1U & (~ ((~ (IData)(vlSelf->top__DOT____VdfgTmp_hf052a1ba__0)) 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_25z))));
    vlSelf->top__DOT__celloutsig_33z = (7U & (((6U 
                                                & (vlSelf->top__DOT__celloutsig_7z 
                                                   >> 4U)) 
                                               | (IData)(vlSelf->top__DOT__celloutsig_25z)) 
                                              | (vlSelf->top__DOT__celloutsig_4z 
                                                 >> 7U)));
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
    vlSelf->top__DOT__celloutsig_87z = (IData)((((0xf00000U 
                                                  == 
                                                  (0xf00000U 
                                                   & vlSelf->top__DOT__celloutsig_66z)) 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_14z)) 
                                                & (0x7fffffU 
                                                   == vlSelf->top__DOT__celloutsig_7z)));
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
    vlSelf->top__DOT__celloutsig_60z = ((0U != (3U 
                                                & ((IData)(vlSelf->top__DOT__celloutsig_31z) 
                                                   >> 9U))) 
                                        & (((IData)(vlSelf->top__DOT__celloutsig_16z) 
                                            >> 5U) 
                                           | (IData)(vlSelf->top__DOT__celloutsig_51z)));
    vlSelf->top__DOT__celloutsig_93z = (1U & (~ ((IData)(vlSelf->top__DOT__celloutsig_29z) 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_51z))));
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
    vlSelf->top__DOT__celloutsig_36z = (0x1ffU & ((vlSelf->top__DOT__celloutsig_17z 
                                                   >> 8U) 
                                                  | ((0x1f0U 
                                                      & (vlSelf->top__DOT__celloutsig_34z 
                                                         >> 9U)) 
                                                     | (IData)(vlSelf->top__DOT__celloutsig_6z))));
    vlSelf->top__DOT__celloutsig_70z = (1U & ((~ ((IData)(vlSelf->top__DOT__celloutsig_47z) 
                                                  >> 8U)) 
                                              | (vlSelf->top__DOT__celloutsig_56z 
                                                 >> 0x13U)));
    vlSelf->top__DOT__celloutsig_61z = (1U & ((~ (vlSelf->top__DOT__celloutsig_42z 
                                                  >> 0xcU)) 
                                              | (IData)(vlSelf->top__DOT__celloutsig_60z)));
    vlSelf->top__DOT__celloutsig_116z = (1U & ((IData)(vlSelf->top__DOT__celloutsig_60z) 
                                               ^ ((IData)(vlSelf->top__DOT__celloutsig_47z) 
                                                  >> 1U)));
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

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__0\n"); );
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
    vlSelf->out_data[1U] = ((0xfffffffeU & vlSelf->out_data[1U]) 
                            | ((IData)(vlSelf->top__DOT__celloutsig_54z) 
                               ^ ((IData)(vlSelf->top__DOT__celloutsig_221z) 
                                  >> 5U)));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_98z = (0x3ffU & (vlSelf->top__DOT__celloutsig_72z 
                                                  >> 4U));
    vlSelf->top__DOT__celloutsig_194z = vlSelf->top__DOT__celloutsig_41z;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_19z = (0x1fffU & (vlSelf->top__DOT__celloutsig_4z 
                                                   >> 0xcU));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_534z = 0U;
    } else if ((1U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_534z = 1U;
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_534z = (1U & (
                                                   ((0xcU 
                                                     & (vlSelf->top__DOT__celloutsig_17z 
                                                        >> 6U)) 
                                                    | ((2U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                             >> 4U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (~ (IData)(vlSelf->top__DOT___002_))))) 
                                                   * 
                                                   (((IData)(vlSelf->top__DOT__celloutsig_86z) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__celloutsig_64z) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT__celloutsig_0z) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT__celloutsig_14z))))));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_209z = (1U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_209z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_209z = ((2U 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_209z)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                       >> 2U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_209z = (2U & (IData)(vlSelf->top__DOT__celloutsig_209z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_209z = (2U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_209z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_209z = ((1U 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_209z)) 
                                                 | (2U 
                                                    & ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                       >> 2U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_209z = (1U & (IData)(vlSelf->top__DOT__celloutsig_209z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (0x800U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (0x800U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x17ffU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (0x800U & (vlSelf->in_data[2U] 
                                  >> 4U)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x77ffU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (0x800U & (vlSelf->top__DOT__celloutsig_20z 
                                  << 2U)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x17ffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x77ffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        if ((0x1000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (0x1000U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (0x1000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0xfffU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (0x1000U & (vlSelf->in_data[2U] 
                                   >> 4U)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x6fffU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (0x1000U & (vlSelf->top__DOT__celloutsig_20z 
                                   << 2U)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0xfffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x6fffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (1U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (1U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x1ffeU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (1U & (IData)(vlSelf->top__DOT__celloutsig_16z)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x7ffeU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (1U & (IData)(vlSelf->top__DOT__celloutsig_110z)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x1ffeU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x7ffeU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (2U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (2U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x1ffdU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (2U & (IData)(vlSelf->top__DOT__celloutsig_16z)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x7ffdU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (2U & (IData)(vlSelf->top__DOT__celloutsig_110z)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x1ffdU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x7ffdU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (4U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (4U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x1ffbU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (4U & (IData)(vlSelf->top__DOT__celloutsig_16z)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x7ffbU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (4U & (IData)(vlSelf->top__DOT__celloutsig_110z)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x1ffbU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x7ffbU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (8U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (8U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x1ff7U & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (8U & (IData)(vlSelf->top__DOT__celloutsig_16z)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x7ff7U & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (8U & (IData)(vlSelf->top__DOT__celloutsig_110z)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x1ff7U 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x7ff7U 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (0x10U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (0x10U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x1fefU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (0x10U & (IData)(vlSelf->top__DOT__celloutsig_16z)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x7fefU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (0x10U & (IData)(vlSelf->top__DOT__celloutsig_110z)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x1fefU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x7fefU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (0x20U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (0x20U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x1fdfU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (0x20U & (IData)(vlSelf->top__DOT__celloutsig_16z)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x7fdfU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (0x20U & (IData)(vlSelf->top__DOT__celloutsig_110z)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x1fdfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x7fdfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (0x40U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (0x40U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x1fbfU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (0x40U & (IData)(vlSelf->top__DOT__celloutsig_16z)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x7fbfU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (0x40U & (IData)(vlSelf->top__DOT__celloutsig_110z)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x1fbfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x7fbfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (0x80U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (0x80U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x1f7fU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (0x80U & (IData)(vlSelf->top__DOT__celloutsig_16z)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x7f7fU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (0x80U & (IData)(vlSelf->top__DOT__celloutsig_110z)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x1f7fU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x7f7fU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__24\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (0x100U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (0x100U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x1effU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (0x100U & (IData)(vlSelf->top__DOT__celloutsig_16z)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x7effU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (0x100U & (vlSelf->top__DOT__celloutsig_20z 
                                  << 2U)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x1effU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x7effU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__25\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (0x200U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (0x200U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x1dffU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (0x200U & (IData)(vlSelf->top__DOT__celloutsig_16z)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x7dffU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (0x200U & (vlSelf->top__DOT__celloutsig_20z 
                                  << 2U)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x1dffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x7dffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__26\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_78z = (0x400U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_78z));
            vlSelf->top__DOT__celloutsig_138z = (0x400U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_78z = 
                    ((0x1bffU & (IData)(vlSelf->top__DOT__celloutsig_78z)) 
                     | (0x400U & (IData)(vlSelf->top__DOT__celloutsig_16z)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_138z = 
                    ((0x7bffU & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                     | (0x400U & (vlSelf->top__DOT__celloutsig_20z 
                                  << 2U)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_78z = (0x1bffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_78z));
        vlSelf->top__DOT__celloutsig_138z = (0x7bffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__27\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7fffeU & vlSelf->top__DOT__celloutsig_204z) 
                     | (1U & (vlSelf->top__DOT__celloutsig_83z 
                              >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (1U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7fffeU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__28\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7fffdU & vlSelf->top__DOT__celloutsig_204z) 
                     | (2U & (vlSelf->top__DOT__celloutsig_83z 
                              >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (2U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7fffdU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__29\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7fffbU & vlSelf->top__DOT__celloutsig_204z) 
                     | (4U & (vlSelf->top__DOT__celloutsig_83z 
                              >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (4U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7fffbU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__30\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7fff7U & vlSelf->top__DOT__celloutsig_204z) 
                     | (8U & (vlSelf->top__DOT__celloutsig_83z 
                              >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (8U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7fff7U 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__31(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__31\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7ffefU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x10U & (vlSelf->top__DOT__celloutsig_83z 
                                 >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x10U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7ffefU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__32(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__32\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7ffdfU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x20U & (vlSelf->top__DOT__celloutsig_83z 
                                 >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x20U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7ffdfU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__33(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__33\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7ffbfU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x40U & (vlSelf->top__DOT__celloutsig_83z 
                                 >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x40U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7ffbfU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__34(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__34\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7ff7fU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x80U & (vlSelf->top__DOT__celloutsig_83z 
                                 >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x80U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7ff7fU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__35(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__35\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7feffU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x100U & (vlSelf->top__DOT__celloutsig_83z 
                                  >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x100U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7feffU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__36(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__36\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7fdffU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x200U & (vlSelf->top__DOT__celloutsig_83z 
                                  >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x200U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7fdffU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__37(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__37\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7fbffU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x400U & (vlSelf->top__DOT__celloutsig_83z 
                                  >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x400U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7fbffU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__38(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__38\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7f7ffU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x800U & (vlSelf->top__DOT__celloutsig_83z 
                                  >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x800U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7f7ffU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__39(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__39\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        if ((0x1000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7efffU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x1000U & (vlSelf->top__DOT__celloutsig_83z 
                                   >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x1000U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7efffU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__40(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__40\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        if ((0x2000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7dfffU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x2000U & (vlSelf->top__DOT__celloutsig_83z 
                                   >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x2000U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7dfffU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__41(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__41\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        if ((0x4000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x7bfffU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x4000U & (vlSelf->top__DOT__celloutsig_83z 
                                   >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x4000U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x7bfffU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__42(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__42\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        if ((0x8000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x77fffU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x8000U & (vlSelf->top__DOT__celloutsig_83z 
                                   >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x8000U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x77fffU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__43(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__43\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        if ((0x10000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x6ffffU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x10000U & (vlSelf->top__DOT__celloutsig_83z 
                                    >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x10000U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x6ffffU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__44(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__44\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        if ((0x20000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x5ffffU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x20000U & (vlSelf->top__DOT__celloutsig_83z 
                                    >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x20000U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x5ffffU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__45(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__45\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        if ((0x40000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_204z = 
                    ((0x3ffffU & vlSelf->top__DOT__celloutsig_204z) 
                     | (0x40000U & (vlSelf->top__DOT__celloutsig_83z 
                                    >> 5U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_204z = (0x40000U 
                                                 | vlSelf->top__DOT__celloutsig_204z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_204z = (0x3ffffU 
                                             & vlSelf->top__DOT__celloutsig_204z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__46(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__46\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x1feU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x1ffeU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((1U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_230z = (1U | (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (1U | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_230z = ((0x1feU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_230z)) 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_14z));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_335z = ((0x1ffeU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_13z));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__47(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__47\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x1fdU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x1ffdU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((2U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_230z = (2U | (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (2U | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_230z = ((0x1fdU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_230z)) 
                                                 | ((IData)(vlSelf->top__DOT__celloutsig_14z) 
                                                    << 1U));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_335z = ((0x1ffdU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                                 | (2U 
                                                    & (vlSelf->top__DOT__celloutsig_290z 
                                                       >> 6U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__48(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__48\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x1fbU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x1ffbU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((4U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_230z = (4U | (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (4U | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_230z = ((0x1fbU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_230z)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_22z)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_335z = ((0x1ffbU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                                 | (4U 
                                                    & (vlSelf->top__DOT__celloutsig_290z 
                                                       >> 6U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__49(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__49\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x1f7U 
                                             & (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x1ff7U 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((8U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_230z = (8U | (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (8U | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_230z = ((0x1f7U 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_230z)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_22z)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_335z = ((0x1ff7U 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                                 | (8U 
                                                    & (vlSelf->top__DOT__celloutsig_290z 
                                                       >> 6U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__50(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__50\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x1efU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x1fefU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x10U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x10U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_230z = ((0x1efU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_230z)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_22z)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_335z = ((0x1fefU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                                 | (0x10U 
                                                    & (vlSelf->top__DOT__celloutsig_290z 
                                                       >> 6U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__51(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__51\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x1dfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x1fdfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x20U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x20U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_230z = ((0x1dfU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_230z)) 
                                                 | (0x20U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_22z)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_335z = ((0x1fdfU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                                 | (0x20U 
                                                    & (vlSelf->top__DOT__celloutsig_290z 
                                                       >> 6U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__52(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__52\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x1bfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x1fbfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x40U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x40U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_230z = ((0x1bfU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_230z)) 
                                                 | (0x40U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_22z)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_335z = ((0x1fbfU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                                 | (0x40U 
                                                    & (vlSelf->top__DOT__celloutsig_290z 
                                                       >> 6U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__53(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__53\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x17fU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x1f7fU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x80U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x80U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_230z = ((0x17fU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_230z)) 
                                                 | (0x80U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_22z)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_335z = ((0x1f7fU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                                 | (0x80U 
                                                    & (vlSelf->top__DOT__celloutsig_290z 
                                                       >> 6U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__54(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__54\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_230z = (0xffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x1effU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_230z = (0x100U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_230z));
        vlSelf->top__DOT__celloutsig_335z = (0x100U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_230z = ((0xffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_230z)) 
                                                 | (0x100U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_22z)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_335z = ((0x1effU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                                 | (0x100U 
                                                    & (vlSelf->top__DOT__celloutsig_290z 
                                                       >> 6U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__55(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__55\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_140z = (0x77fU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_140z));
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_140z = ((0x77fU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_140z)) 
                                                 | ((IData)(vlSelf->top__DOT__celloutsig_116z) 
                                                    << 7U));
        }
    } else {
        vlSelf->top__DOT__celloutsig_140z = (0x80U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_140z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__56(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__56\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_140z = (0x7feU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_140z));
    } else if ((1U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_140z = ((0x7feU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_140z)) 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_122z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_140z = (1U | (IData)(vlSelf->top__DOT__celloutsig_140z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__57(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__57\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_140z = (0x6ffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_140z));
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_140z = ((0x6ffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_140z)) 
                                                 | (0x100U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_63z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_140z = (0x100U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_140z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__58(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__58\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_140z = (0x5ffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_140z));
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_140z = ((0x5ffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_140z)) 
                                                 | (0x200U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_63z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_140z = (0x200U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_140z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__59(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__59\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_140z = (0x3ffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_140z));
    } else if ((0x400U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_140z = ((0x3ffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_140z)) 
                                                 | (0x400U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_63z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_140z = (0x400U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_140z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__60(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__60\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_140z = (0x7fdU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_140z));
    } else if ((2U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_140z = ((0x7fdU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_140z)) 
                                                 | (2U 
                                                    & ((IData)(vlSelf->top__DOT__celloutsig_44z) 
                                                       << 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_140z = (2U | (IData)(vlSelf->top__DOT__celloutsig_140z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__61(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__61\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_140z = (0x7fbU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_140z));
    } else if ((4U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_140z = ((0x7fbU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_140z)) 
                                                 | (4U 
                                                    & ((IData)(vlSelf->top__DOT__celloutsig_44z) 
                                                       << 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_140z = (4U | (IData)(vlSelf->top__DOT__celloutsig_140z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__62(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__62\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_140z = (0x7dfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_140z));
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_140z = ((0x7dfU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_140z)) 
                                                 | (0x20U 
                                                    & ((IData)(vlSelf->top__DOT__celloutsig_44z) 
                                                       << 5U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_140z = (0x20U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_140z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__63(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__63\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_140z = (0x7bfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_140z));
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_140z = ((0x7bfU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_140z)) 
                                                 | (0x40U 
                                                    & ((IData)(vlSelf->top__DOT__celloutsig_44z) 
                                                       << 5U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_140z = (0x40U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_140z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__64(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__64\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_140z = (0x7f7U 
                                             & (IData)(vlSelf->top__DOT__celloutsig_140z));
    } else if ((8U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_140z = ((0x7f7U 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_140z)) 
                                                 | (8U 
                                                    & ((IData)(vlSelf->top__DOT__celloutsig_41z) 
                                                       << 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_140z = (8U | (IData)(vlSelf->top__DOT__celloutsig_140z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__65(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__65\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_140z = (0x7efU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_140z));
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_140z = ((0x7efU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_140z)) 
                                                 | (0x10U 
                                                    & ((IData)(vlSelf->top__DOT__celloutsig_41z) 
                                                       << 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_140z = (0x10U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_140z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__66(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__66\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        if ((0x2000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_138z = (0x2000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_138z = ((0x5fffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                                                 | (0x2000U 
                                                    & (vlSelf->top__DOT__celloutsig_20z 
                                                       << 2U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_138z = (0x5fffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__67(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__67\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        if ((0x4000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_138z = (0x4000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_138z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_138z = ((0x3fffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_138z)) 
                                                 | (0x4000U 
                                                    & (vlSelf->top__DOT__celloutsig_20z 
                                                       << 2U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_138z = (0x3fffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_138z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__68(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__68\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3fffeU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (1U | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3fffeU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (1U 
                                                & (VL_REDXOR_32(
                                                                (0xffffffU 
                                                                 & vlSelf->top__DOT__celloutsig_56z)) 
                                                   ^ (IData)(vlSelf->top__DOT__celloutsig_86z))));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__69(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__69\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3fffdU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((2U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (2U | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3fffdU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (2U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__70(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__70\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3fffbU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((4U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (4U | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3fffbU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (4U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__71(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__71\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3fff7U 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((8U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (8U | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3fff7U 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (8U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__72(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__72\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3ffefU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x10U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3ffefU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x10U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__73(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__73\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3ffdfU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x20U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3ffdfU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x20U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__74(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__74\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3ffbfU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x40U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3ffbfU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x40U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__75(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__75\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3ff7fU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x80U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3ff7fU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x80U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__76(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__76\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3feffU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x100U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3feffU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x100U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__77(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__77\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3fdffU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x200U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3fdffU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x200U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__78(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__78\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3fbffU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x400U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x400U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3fbffU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x400U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__79(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__79\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3f7ffU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x800U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x800U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3f7ffU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x800U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__80(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__80\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3efffU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x1000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x1000U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3efffU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x1000U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__81(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__81\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3dfffU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x2000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x2000U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3dfffU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x2000U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__82(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__82\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x3bfffU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x4000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x4000U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x3bfffU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x4000U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__83(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__83\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x37fffU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x8000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x8000U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x37fffU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x8000U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__84(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__84\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x2ffffU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x10000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x10000U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x2ffffU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x10000U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__85(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__85\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x1ffffU 
                                             & vlSelf->top__DOT__celloutsig_615z);
    } else if ((0x20000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_615z = (0x20000U 
                                             | vlSelf->top__DOT__celloutsig_615z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_615z = ((0x1ffffU 
                                              & vlSelf->top__DOT__celloutsig_615z) 
                                             | (0x20000U 
                                                & (vlSelf->top__DOT__celloutsig_160z 
                                                   >> 7U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__86(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__86\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_335z = (0x1dffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_335z = (0x200U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_335z = ((0x1dffU 
                                              & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                             | (0x200U 
                                                & (vlSelf->top__DOT__celloutsig_290z 
                                                   >> 6U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__87(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__87\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_335z = (0x1bffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((0x400U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_335z = (0x400U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_335z = ((0x1bffU 
                                              & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                             | (0x400U 
                                                & (vlSelf->top__DOT__celloutsig_290z 
                                                   >> 6U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__88(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__88\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_335z = (0x17ffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((0x800U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_335z = (0x800U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_335z = ((0x17ffU 
                                              & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                             | (0x800U 
                                                & (vlSelf->top__DOT__celloutsig_290z 
                                                   >> 6U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__89(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__89\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_335z = (0xfffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((0x1000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_335z = (0x1000U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_335z));
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_335z = ((0xfffU 
                                              & (IData)(vlSelf->top__DOT__celloutsig_335z)) 
                                             | (0x1000U 
                                                & (vlSelf->top__DOT__celloutsig_290z 
                                                   >> 6U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__90(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__90\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xdffffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x20000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xdffffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x20000U 
                                                    & (vlSelf->top__DOT__celloutsig_248z 
                                                       << 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x20000U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__91(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__91\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xbffffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x40000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xbffffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x40000U 
                                                    & (vlSelf->top__DOT__celloutsig_248z 
                                                       << 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x40000U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__92(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__92\n"); );
    // Body
    if ((0x80000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0x7ffffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x80000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0x7ffffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x80000U 
                                                    & (vlSelf->top__DOT__celloutsig_248z 
                                                       << 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x80000U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__93(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__93\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xeffffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x10000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xeffffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x10000U 
                                                    & (((0x20U 
                                                         & vlSelf->top__DOT__celloutsig_28z)
                                                         ? 
                                                        (vlSelf->top__DOT__celloutsig_65z 
                                                         >> 0xaU)
                                                         : 
                                                        ((vlSelf->in_data[2U] 
                                                          >> 0x17U) 
                                                         ^ 
                                                         (vlSelf->top__DOT__celloutsig_17z 
                                                          >> 6U))) 
                                                       << 0x10U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x10000U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__94(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__94\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xffffeU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((1U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xffffeU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (1U | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__95(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__95\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xffffdU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((2U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xffffdU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (2U | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__96(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__96\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xffffbU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((4U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xffffbU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (4U | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__97(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__97\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xffff7U 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((8U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xffff7U 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (8U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (8U | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__98(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__98\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xfffefU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xfffefU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x10U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x10U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__99(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__99\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xfffdfU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xfffdfU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x20U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x20U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__100(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__100\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xfffbfU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xfffbfU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x40U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x40U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__101(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__101\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xfff7fU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xfff7fU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x80U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x80U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__102(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__102\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xffeffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xffeffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x100U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x100U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__103(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__103\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xffdffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xffdffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x200U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x200U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__104(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__104\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xffbffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x400U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xffbffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x400U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x400U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__105(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__105\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xff7ffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x800U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xff7ffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x800U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x800U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__106(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__106\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xfefffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x1000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xfefffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x1000U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x1000U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__107(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__107\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xfdfffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x2000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xfdfffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x2000U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x2000U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__108(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__108\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xfbfffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x4000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xfbfffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x4000U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x4000U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__109(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__109\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_549z = (0xf7fffU 
                                             & vlSelf->top__DOT__celloutsig_549z);
    } else if ((0x8000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_549z = ((0xf7fffU 
                                                  & vlSelf->top__DOT__celloutsig_549z) 
                                                 | (0x8000U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_498z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_549z = (0x8000U 
                                             | vlSelf->top__DOT__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__117(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__117\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_160z = ((0x7c000000U 
                                          & (vlSelf->top__DOT__celloutsig_30z 
                                             << 0x18U)) 
                                         | ((0x3fc0000U 
                                             & ((((0xfcU 
                                                   & (vlSelf->top__DOT__celloutsig_12z 
                                                      >> 2U)) 
                                                  | (((IData)(vlSelf->top__DOT__celloutsig_82z) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT__celloutsig_62z))) 
                                                 + 
                                                 ((0xfeU 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0x15U)) 
                                                  | (IData)(vlSelf->top__DOT__celloutsig_57z))) 
                                                << 0x12U)) 
                                            | (((IData)(vlSelf->top__DOT__celloutsig_11z) 
                                                << 8U) 
                                               | (((IData)(vlSelf->top__DOT__celloutsig_27z) 
                                                   << 1U) 
                                                  | ((0U 
                                                      != 
                                                      (0x1fffffU 
                                                       & vlSelf->top__DOT__celloutsig_45z)) 
                                                     | ((0U 
                                                         != (IData)(vlSelf->top__DOT__celloutsig_50z)) 
                                                        | ((0U 
                                                            != (IData)(vlSelf->top__DOT__celloutsig_41z)) 
                                                           | (IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0x7eU 
                                                                        & vlSelf->top__DOT__celloutsig_79z)) 
                                                                      | (0U 
                                                                         != vlSelf->top__DOT__celloutsig_28z))))))))));
    vlSelf->top__DOT__celloutsig_290z = ((0xe0000000U 
                                          & ((IData)(vlSelf->top__DOT__celloutsig_16z) 
                                             << 0x15U)) 
                                         | ((0x10000000U 
                                             & ((~ 
                                                 ((0x100000U 
                                                   & vlSelf->top__DOT__celloutsig_20z)
                                                   ? 
                                                  (vlSelf->top__DOT__celloutsig_142z 
                                                   >> 0xdU)
                                                   : (IData)(vlSelf->top__DOT__celloutsig_90z))) 
                                                << 0x1cU)) 
                                            | ((vlSelf->top__DOT__celloutsig_10z 
                                                << 9U) 
                                               | ((0x100U 
                                                   & ((~ 
                                                       ((0x10U 
                                                         & (IData)(vlSelf->top__DOT__celloutsig_74z))
                                                         ? 
                                                        (~ 
                                                         ((0x20U 
                                                           & (IData)(vlSelf->top__DOT__celloutsig_27z))
                                                           ? 
                                                          ((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                                           >> 2U)
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                           >> 6U)))
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->top__DOT__celloutsig_63z) 
                                                          & (IData)(vlSelf->top__DOT__celloutsig_60z))))) 
                                                      << 8U)) 
                                                  | (IData)(vlSelf->top__DOT__celloutsig_55z)))));
    vlSelf->top__DOT__celloutsig_63z = ((0x7fcU & (vlSelf->top__DOT__celloutsig_20z 
                                                   << 2U)) 
                                        | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffffffU 
                                                      & (vlSelf->in_data[2U] 
                                                         >> 1U)))) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT__celloutsig_21z)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__123(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__123\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xfdfffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x2000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x2000U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xfdfffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | ((IData)(vlSelf->top__DOT__celloutsig_102z) 
                                                << 0xdU));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__124(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__124\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xfbfffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x4000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x4000U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xfbfffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x4000U 
                                                & (vlSelf->top__DOT__celloutsig_30z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__125(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__125\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xf7fffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x8000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x8000U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xf7fffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x8000U 
                                                & (vlSelf->top__DOT__celloutsig_30z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__126(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__126\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xeffffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x10000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x10000U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xeffffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x10000U 
                                                & (vlSelf->top__DOT__celloutsig_30z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__127(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__127\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xdffffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x20000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x20000U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xdffffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x20000U 
                                                & (vlSelf->top__DOT__celloutsig_30z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__128(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__128\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xbffffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x40000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x40000U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xbffffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x40000U 
                                                & (vlSelf->top__DOT__celloutsig_30z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__129(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__129\n"); );
    // Body
    if ((0x80000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x7ffffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x80000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x80000U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0x7ffffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x80000U 
                                                & (vlSelf->top__DOT__celloutsig_30z 
                                                   << 4U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__130(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__130\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xfefffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x1000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x1000U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xfefffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | ((IData)(vlSelf->top__DOT__celloutsig_14z) 
                                                << 0xcU));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__131(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__131\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xffffeU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (1U | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xffffeU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (1U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__132(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__132\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xffffdU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((2U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (2U | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xffffdU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (2U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__133(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__133\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xffffbU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((4U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (4U | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xffffbU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (4U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__134(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__134\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xffff7U 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((8U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (8U | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xffff7U 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (8U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__135(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__135\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xfffefU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x10U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xfffefU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x10U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__136(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__136\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xfffdfU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x20U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xfffdfU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x20U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__137(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__137\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xfffbfU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x40U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xfffbfU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x40U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__138(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__138\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xfff7fU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x80U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xfff7fU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x80U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__139(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__139\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xffeffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x100U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xffeffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x100U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__140(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__140\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xffdffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x200U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xffdffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x200U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__141(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__141\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xffbffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x400U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x400U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xffbffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x400U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__142(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__142\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_248z = (0xff7ffU 
                                             & vlSelf->top__DOT__celloutsig_248z);
    } else if ((0x800U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_248z = (0x800U 
                                             | vlSelf->top__DOT__celloutsig_248z);
    } else if ((1U & vlSelf->clkin_data[2U])) {
        vlSelf->top__DOT__celloutsig_248z = ((0xff7ffU 
                                              & vlSelf->top__DOT__celloutsig_248z) 
                                             | (0x800U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_46z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__143(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__143\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (8U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xfff7U 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (8U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xfff7U 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__144(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__144\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x10U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xffefU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x10U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xffefU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__145(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__145\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x20U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xffdfU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x20U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xffdfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__146(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__146\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x40U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xffbfU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x40U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xffbfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__147(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__147\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x80U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xff7fU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x80U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xff7fU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__148(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__148\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x100U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xfeffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x100U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xfeffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__149(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__149\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x200U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xfdffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x200U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xfdffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__150(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__150\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x400U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xfbffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x400U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xfbffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__151(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__151\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x800U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xf7ffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x800U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xf7ffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__152(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__152\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        if ((0x1000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x1000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xefffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x1000U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xefffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__153(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__153\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        if ((0x2000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x2000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xdfffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x2000U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xdfffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__154(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__154\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        if ((0x4000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x4000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xbfffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x4000U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xbfffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__155(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__155\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        if ((0x8000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (0x8000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0x7fffU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (0x8000U 
                                                    & (vlSelf->top__DOT__celloutsig_7z 
                                                       >> 1U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0x7fffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__156(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__156\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (2U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
            vlSelf->top__DOT__celloutsig_41z = (2U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_41z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_498z = 
                    ((0xfffdU & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                     | (2U & ((~ ((~ (vlSelf->top__DOT__celloutsig_4z 
                                      >> 9U)) | ((0U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__celloutsig_207z)) 
                                                 | ((0U 
                                                     != (IData)(vlSelf->top__DOT__celloutsig_165z)) 
                                                    | ((IData)(vlSelf->top__DOT__celloutsig_60z) 
                                                       | (IData)(vlSelf->top__DOT__celloutsig_116z)))))) 
                              << 1U)));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_41z = 
                    ((1U & (IData)(vlSelf->top__DOT__celloutsig_41z)) 
                     | (2U & (vlSelf->top__DOT__celloutsig_17z 
                              >> 0x17U)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xfffdU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
        vlSelf->top__DOT__celloutsig_41z = (1U & (IData)(vlSelf->top__DOT__celloutsig_41z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__157(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__157\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (4U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_498z = ((0xfffbU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                                                 | (4U 
                                                    & ((~ 
                                                        (((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                                          | ((IData)(vlSelf->top__DOT__celloutsig_27z) 
                                                             >> 4U)) 
                                                         & (IData)(vlSelf->top__DOT___000_))) 
                                                       << 2U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xfffbU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__158(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__158\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_498z = (1U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_498z));
            vlSelf->top__DOT__celloutsig_41z = (1U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_41z));
        } else {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_498z = 
                    ((0xfffeU & (IData)(vlSelf->top__DOT__celloutsig_498z)) 
                     | (1U & (VL_REDXOR_32((3U & (~ 
                                                  (vlSelf->top__DOT__celloutsig_181z 
                                                   >> 6U)))) 
                              ^ (VL_REDXOR_32((7U & 
                                               (~ (
                                                   (vlSelf->top__DOT__celloutsig_285z 
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
                                 ^ VL_REDXOR_32((0x1fU 
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
                                                              != (IData)(vlSelf->top__DOT__celloutsig_149z))))))))))));
            }
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_41z = 
                    ((2U & (IData)(vlSelf->top__DOT__celloutsig_41z)) 
                     | (1U & (vlSelf->top__DOT__celloutsig_17z 
                              >> 0x17U)));
            }
        }
    } else {
        vlSelf->top__DOT__celloutsig_498z = (0xfffeU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_498z));
        vlSelf->top__DOT__celloutsig_41z = (2U & (IData)(vlSelf->top__DOT__celloutsig_41z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__160(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__160\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_207z = ((0x70000U 
                                          & ((IData)(vlSelf->top__DOT__celloutsig_185z) 
                                             << 0xcU)) 
                                         | (IData)(vlSelf->top__DOT__celloutsig_148z));
    vlSelf->top__DOT__celloutsig_67z = (0x1fffffU & 
                                        (vlSelf->top__DOT__celloutsig_12z 
                                         >> 5U));
    vlSelf->top__DOT__celloutsig_12z = ((0x3fffffeU 
                                         & (vlSelf->top__DOT__celloutsig_4z 
                                            >> 2U)) 
                                        | (IData)(vlSelf->top__DOT__celloutsig_0z));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__161(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__161\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_165z = (0x1fU & (vlSelf->top__DOT__celloutsig_68z 
                                                  >> 0x11U));
    vlSelf->top__DOT__celloutsig_185z = (0x1fffU & (IData)(vlSelf->top__DOT__celloutsig_8z));
    vlSelf->top__DOT__celloutsig_148z = ((0xff00U & 
                                          (vlSelf->top__DOT__celloutsig_83z 
                                           << 5U)) 
                                         | (((IData)(vlSelf->top__DOT__celloutsig_103z) 
                                             << 3U) 
                                            | (((IData)(vlSelf->top__DOT__celloutsig_18z) 
                                                << 2U) 
                                               | (((IData)(vlSelf->top__DOT__celloutsig_2z) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT__celloutsig_35z)))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__164(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__164\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_162z = (0xffU & (vlSelf->top__DOT__celloutsig_65z 
                                                  >> 0xaU));
    vlSelf->top__DOT__celloutsig_181z = ((0xfc000000U 
                                          & (vlSelf->top__DOT__celloutsig_121z 
                                             << 0xfU)) 
                                         | ((0x3fff000U 
                                             & (((vlSelf->top__DOT__celloutsig_66z 
                                                  >> 0xaU) 
                                                 + 
                                                 ((0x3ffeU 
                                                   & (vlSelf->top__DOT__celloutsig_79z 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->top__DOT__celloutsig_26z))) 
                                                << 0xcU)) 
                                            | (IData)(vlSelf->top__DOT__celloutsig_31z)));
    vlSelf->top__DOT__celloutsig_285z = ((0x20000000U 
                                          & (vlSelf->top__DOT__celloutsig_66z 
                                             << 0xcU)) 
                                         | ((0x1f800000U 
                                             & ((IData)(vlSelf->top__DOT__celloutsig_120z) 
                                                << 0x14U)) 
                                            | (((IData)(vlSelf->top__DOT__celloutsig_196z) 
                                                << 0x16U) 
                                               | vlSelf->top__DOT__celloutsig_92z)));
    vlSelf->top__DOT__celloutsig_326z = ((0x3ffe000U 
                                          & (vlSelf->top__DOT__celloutsig_189z 
                                             << 5U)) 
                                         | (((IData)(vlSelf->top__DOT__celloutsig_221z) 
                                             << 7U) 
                                            | (0x7fU 
                                               & (~ 
                                                  ((vlSelf->top__DOT__celloutsig_121z 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((0x78U 
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
                                                                 >> 0xbU)))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__167(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__167\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_68z = ((0xffc00000U 
                                         & (vlSelf->top__DOT__celloutsig_28z 
                                            << 0x13U)) 
                                        | (((IData)(vlSelf->top__DOT__celloutsig_57z) 
                                            << 0x15U) 
                                           | ((0x100000U 
                                               & ((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                                  << 0x14U)) 
                                              | vlSelf->top__DOT__celloutsig_65z)));
    vlSelf->top__DOT__celloutsig_92z = ((1U & vlSelf->top__DOT__celloutsig_92z) 
                                        | ((0x3fff00U 
                                            & vlSelf->top__DOT__celloutsig_38z) 
                                           | ((0xf0U 
                                               & (vlSelf->top__DOT__celloutsig_38z 
                                                  >> 0x10U)) 
                                              | (0xeU 
                                                 & vlSelf->top__DOT__celloutsig_38z))));
    vlSelf->top__DOT__celloutsig_92z = ((0x3ffffeU 
                                         & vlSelf->top__DOT__celloutsig_92z) 
                                        | ((vlSelf->top__DOT__celloutsig_20z 
                                            >> 2U) 
                                           & (IData)(vlSelf->top__DOT__celloutsig_18z)));
    vlSelf->top__DOT__celloutsig_94z = ((0xff8U & (vlSelf->top__DOT__celloutsig_72z 
                                                   >> 3U)) 
                                        | (((IData)(vlSelf->top__DOT__celloutsig_82z) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__celloutsig_86z) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT__celloutsig_61z))));
    vlSelf->top__DOT__celloutsig_101z = (0x7fffU & 
                                         (vlSelf->top__DOT__celloutsig_17z 
                                          >> 1U));
    vlSelf->top__DOT__celloutsig_189z = ((0xf800000U 
                                          & (vlSelf->top__DOT__celloutsig_142z 
                                             << 0x13U)) 
                                         | (((IData)(vlSelf->top__DOT__celloutsig_6z) 
                                             << 0x13U) 
                                            | (((IData)(vlSelf->top__DOT__celloutsig_90z) 
                                                << 0x12U) 
                                               | (((IData)(vlSelf->top__DOT__celloutsig_50z) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->top__DOT__celloutsig_87z) 
                                                      << 0xfU) 
                                                     | (IData)(vlSelf->top__DOT__celloutsig_8z))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__168(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__168\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_27z = (1U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_27z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_27z = ((0x7eU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_27z)) 
                                                | (1U 
                                                   & (vlSelf->top__DOT__celloutsig_10z 
                                                      >> 6U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_27z = (0x7eU & (IData)(vlSelf->top__DOT__celloutsig_27z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__169(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__169\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_27z = (2U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_27z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_27z = ((0x7dU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_27z)) 
                                                | (2U 
                                                   & (vlSelf->top__DOT__celloutsig_10z 
                                                      >> 6U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_27z = (0x7dU & (IData)(vlSelf->top__DOT__celloutsig_27z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__170(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__170\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_27z = (4U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_27z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_27z = ((0x7bU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_27z)) 
                                                | (4U 
                                                   & (vlSelf->top__DOT__celloutsig_10z 
                                                      >> 6U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_27z = (0x7bU & (IData)(vlSelf->top__DOT__celloutsig_27z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__171(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__171\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_27z = (8U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_27z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_27z = ((0x77U 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_27z)) 
                                                | (8U 
                                                   & (vlSelf->top__DOT__celloutsig_10z 
                                                      >> 6U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_27z = (0x77U & (IData)(vlSelf->top__DOT__celloutsig_27z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__172(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__172\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_27z = (0x10U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_27z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_27z = ((0x6fU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_27z)) 
                                                | (0x10U 
                                                   & (vlSelf->top__DOT__celloutsig_10z 
                                                      >> 6U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_27z = (0x6fU & (IData)(vlSelf->top__DOT__celloutsig_27z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__173(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__173\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_27z = (0x20U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_27z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_27z = ((0x5fU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_27z)) 
                                                | (0x20U 
                                                   & (vlSelf->top__DOT__celloutsig_10z 
                                                      >> 6U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_27z = (0x5fU & (IData)(vlSelf->top__DOT__celloutsig_27z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__174(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__174\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_27z = (0x40U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_27z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_27z = ((0x3fU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_27z)) 
                                                | (0x40U 
                                                   & (vlSelf->top__DOT__celloutsig_10z 
                                                      >> 6U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_27z = (0x3fU & (IData)(vlSelf->top__DOT__celloutsig_27z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__184(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__184\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x7ffeU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (1U & (vlSelf->top__DOT__celloutsig_76z 
                              >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0xffeU & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (1U & (IData)(vlSelf->top__DOT__celloutsig_6z)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (1U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (1U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x7ffeU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0xffeU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__185(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__185\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x7ffdU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (2U & (vlSelf->top__DOT__celloutsig_76z 
                              >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0xffdU & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (2U & (IData)(vlSelf->top__DOT__celloutsig_6z)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (2U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (2U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x7ffdU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0xffdU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__186(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__186\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x7ffbU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (4U & (vlSelf->top__DOT__celloutsig_76z 
                              >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0xffbU & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (4U & (IData)(vlSelf->top__DOT__celloutsig_6z)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (4U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (4U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x7ffbU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0xffbU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__187(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__187\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x7ff7U & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (8U & (vlSelf->top__DOT__celloutsig_76z 
                              >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0xff7U & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (8U & (IData)(vlSelf->top__DOT__celloutsig_6z)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (8U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (8U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x7ff7U 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0xff7U 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__188(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__188\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x7fefU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (0x10U & (vlSelf->top__DOT__celloutsig_76z 
                                 >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0xfefU & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (0x10U & ((IData)(vlSelf->top__DOT__celloutsig_71z) 
                                 << 2U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (0x10U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (0x10U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x7fefU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0xfefU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__189(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__189\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x7fdfU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (0x20U & (vlSelf->top__DOT__celloutsig_76z 
                                 >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0xfdfU & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (0x20U & ((IData)(vlSelf->top__DOT__celloutsig_71z) 
                                 << 2U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (0x20U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (0x20U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x7fdfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0xfdfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__190(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__190\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x7fbfU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (0x40U & (vlSelf->top__DOT__celloutsig_76z 
                                 >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0xfbfU & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (0x40U & ((IData)(vlSelf->top__DOT__celloutsig_71z) 
                                 << 2U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (0x40U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (0x40U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x7fbfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0xfbfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__191(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__191\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x7f7fU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (0x80U & (vlSelf->top__DOT__celloutsig_76z 
                                 >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0xf7fU & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (0x80U & ((IData)(vlSelf->top__DOT__celloutsig_71z) 
                                 << 2U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (0x80U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (0x80U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x7f7fU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0xf7fU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__192(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__192\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x7effU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (0x100U & (vlSelf->top__DOT__celloutsig_76z 
                                  >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0xeffU & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (0x100U & ((IData)(vlSelf->top__DOT__celloutsig_71z) 
                                  << 2U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (0x100U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (0x100U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x7effU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0xeffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__193(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__193\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x7dffU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (0x200U & (vlSelf->top__DOT__celloutsig_76z 
                                  >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0xdffU & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (0x200U & ((IData)(vlSelf->top__DOT__celloutsig_71z) 
                                  << 2U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (0x200U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (0x200U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x7dffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0xdffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__194(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__194\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x7bffU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (0x400U & (vlSelf->top__DOT__celloutsig_76z 
                                  >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0xbffU & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (0x400U & ((IData)(vlSelf->top__DOT__celloutsig_71z) 
                                  << 2U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (0x400U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (0x400U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x7bffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0xbffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__195(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__195\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x77ffU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (0x800U & (vlSelf->top__DOT__celloutsig_76z 
                                  >> 1U)));
                vlSelf->top__DOT__celloutsig_95z = 
                    ((0x7ffU & (IData)(vlSelf->top__DOT__celloutsig_95z)) 
                     | (0x800U & ((IData)(vlSelf->top__DOT__celloutsig_71z) 
                                  << 2U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (0x800U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
            vlSelf->top__DOT__celloutsig_95z = (0x800U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_95z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x77ffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
        vlSelf->top__DOT__celloutsig_95z = (0x7ffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_95z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__196(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__196\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        if ((0x1000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x6fffU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (0x1000U & (vlSelf->top__DOT__celloutsig_76z 
                                   >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (0x1000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x6fffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__197(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__197\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        if ((0x2000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x5fffU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (0x2000U & (vlSelf->top__DOT__celloutsig_76z 
                                   >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (0x2000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x5fffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__198(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__198\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        if ((0x4000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_149z = 
                    ((0x3fffU & (IData)(vlSelf->top__DOT__celloutsig_149z)) 
                     | (0x4000U & (vlSelf->top__DOT__celloutsig_76z 
                                   >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_149z = (0x4000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_149z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_149z = (0x3fffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_149z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__199(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__199\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_28z = ((0x7fffeU & 
                                         (vlSelf->top__DOT__celloutsig_17z 
                                          >> 7U)) | 
                                        (0U != (0x3ffffffU 
                                                & (vlSelf->in_data[2U] 
                                                   >> 1U))));
    vlSelf->top__DOT__celloutsig_65z = ((0xffc00U & 
                                         (vlSelf->top__DOT__celloutsig_34z 
                                          << 0xaU)) 
                                        | (((IData)(vlSelf->top__DOT__celloutsig_55z) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__celloutsig_14z) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT__celloutsig_35z))));
    vlSelf->top__DOT__celloutsig_50z = (3U & (vlSelf->top__DOT__celloutsig_20z 
                                              >> 0x12U));
    vlSelf->top__DOT__celloutsig_62z = (1U & ((~ ((IData)(vlSelf->top__DOT__celloutsig_50z) 
                                                  >> 1U)) 
                                              | (vlSelf->in_data[0U] 
                                                 >> 0x1aU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_196z = (1U & ((0x2000U 
                                                & vlSelf->top__DOT__celloutsig_68z)
                                                ? ((IData)(vlSelf->top__DOT__celloutsig_138z) 
                                                   >> 3U)
                                                : ((IData)(vlSelf->top__DOT__celloutsig_140z) 
                                                   >> 9U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__203(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__203\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (1U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0xffeU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (1U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0xffeU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__204(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__204\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (2U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0xffdU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (2U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0xffdU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__205(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__205\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (4U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0xffbU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (4U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0xffbU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__206(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__206\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (8U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0xff7U 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (8U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0xff7U 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__207(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__207\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (0x10U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0xfefU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (0x10U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0xfefU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__208(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__208\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (0x20U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0xfdfU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (0x20U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0xfdfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__209(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__209\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (0x40U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0xfbfU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (0x40U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0xfbfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__210(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__210\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (0x80U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0xf7fU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (0x80U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0xf7fU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__211(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__211\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (0x100U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0xeffU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (0x100U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0xeffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__212(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__212\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (0x200U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0xdffU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (0x200U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0xdffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__213(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__213\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (0x400U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0xbffU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (0x400U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0xbffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__214(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__214\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_31z = (0x800U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_31z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_31z = ((0x7ffU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_31z)) 
                                                | (0x800U 
                                                   & (vlSelf->top__DOT__celloutsig_20z 
                                                      >> 3U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_31z = (0x7ffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_31z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__215(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__215\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3ffbffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x400U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3ffbffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | ((IData)(vlSelf->top__DOT__celloutsig_51z) 
                                                   << 0xaU));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x400U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__216(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__216\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3fefffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x1000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3fefffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | ((IData)(vlSelf->top__DOT__celloutsig_26z) 
                                                   << 0xcU));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x1000U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__217(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__217\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3ffffeU 
                                            & vlSelf->top__DOT__celloutsig_79z);
        vlSelf->top__DOT__celloutsig_124z = (2U & (IData)(vlSelf->top__DOT__celloutsig_124z));
    } else if ((1U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3ffffeU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT__celloutsig_11z)));
            vlSelf->top__DOT__celloutsig_124z = ((2U 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_124z)) 
                                                 | ((~ 
                                                     ((vlSelf->top__DOT__celloutsig_45z 
                                                       >> 0xcU) 
                                                      ^ 
                                                      ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                       >> 0xeU))) 
                                                    & (IData)(
                                                              ((((0x1feU 
                                                                  == 
                                                                  (0x1feU 
                                                                   & vlSelf->top__DOT__celloutsig_66z)) 
                                                                 & (IData)(vlSelf->top__DOT__celloutsig_64z)) 
                                                                & (0xfffU 
                                                                   == (IData)(vlSelf->top__DOT__celloutsig_46z))) 
                                                               & (IData)(vlSelf->top__DOT__celloutsig_0z)))));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (1U | vlSelf->top__DOT__celloutsig_79z);
        vlSelf->top__DOT__celloutsig_124z = (1U | (IData)(vlSelf->top__DOT__celloutsig_124z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__218(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__218\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3ffffdU 
                                            & vlSelf->top__DOT__celloutsig_79z);
        vlSelf->top__DOT__celloutsig_124z = (1U & (IData)(vlSelf->top__DOT__celloutsig_124z));
    } else if ((2U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3ffffdU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (2U 
                                                   & (IData)(vlSelf->top__DOT__celloutsig_11z)));
            vlSelf->top__DOT__celloutsig_124z = ((1U 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_124z)) 
                                                 | (2U 
                                                    & (vlSelf->top__DOT__celloutsig_34z 
                                                       >> 0x10U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (2U | vlSelf->top__DOT__celloutsig_79z);
        vlSelf->top__DOT__celloutsig_124z = (2U | (IData)(vlSelf->top__DOT__celloutsig_124z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__219(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__219\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3ffffbU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((4U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3ffffbU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (4U 
                                                   & (IData)(vlSelf->top__DOT__celloutsig_11z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (4U | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__220(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__220\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3ffff7U 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((8U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3ffff7U 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (8U 
                                                   & (IData)(vlSelf->top__DOT__celloutsig_11z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (8U | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__221(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__221\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3fffefU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3fffefU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->top__DOT__celloutsig_11z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x10U | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__222(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__222\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3fffdfU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3fffdfU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->top__DOT__celloutsig_11z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x20U | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__223(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__223\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3fffbfU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3fffbfU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->top__DOT__celloutsig_11z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x40U | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__224(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__224\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3fff7fU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3fff7fU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x80U 
                                                   & (IData)(vlSelf->top__DOT__celloutsig_11z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x80U | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__225(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__225\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3ffeffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3ffeffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x100U 
                                                   & (IData)(vlSelf->top__DOT__celloutsig_11z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x100U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__226(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__226\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3ffdffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3ffdffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x200U 
                                                   & (IData)(vlSelf->top__DOT__celloutsig_11z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x200U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__227(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__227\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3fdfffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x2000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3fdfffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x2000U 
                                                   & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                      << 0xdU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x2000U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__228(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__228\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3fbfffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x4000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3fbfffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x4000U 
                                                   & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                      << 0xdU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x4000U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__229(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__229\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3f7fffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x8000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3f7fffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x8000U 
                                                   & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                      << 0xdU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x8000U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__230(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__230\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3effffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x10000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3effffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x10000U 
                                                   & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                      << 0xdU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x10000U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__231(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__231\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3dffffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x20000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3dffffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x20000U 
                                                   & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                      << 0xdU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x20000U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__232(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__232\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3bffffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x40000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3bffffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x40000U 
                                                   & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                      << 0xdU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x40000U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__233(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__233\n"); );
    // Body
    if ((0x80000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x37ffffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x80000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x37ffffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x80000U 
                                                   & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                      << 0xdU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x80000U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__234(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__234\n"); );
    // Body
    if ((0x100000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x2fffffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x100000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x2fffffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x100000U 
                                                   & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                      << 0xdU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x100000U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__235(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__235\n"); );
    // Body
    if ((0x200000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x1fffffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x200000U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x1fffffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x200000U 
                                                   & ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                      << 0xdU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x200000U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__236(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__236\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_79z = (0x3ff7ffU 
                                            & vlSelf->top__DOT__celloutsig_79z);
    } else if ((0x800U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_79z = ((0x3ff7ffU 
                                                 & vlSelf->top__DOT__celloutsig_79z) 
                                                | (0x800U 
                                                   & (((IData)(vlSelf->top__DOT__celloutsig_57z)
                                                        ? 
                                                       (vlSelf->top__DOT__celloutsig_42z 
                                                        >> 3U)
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__celloutsig_52z) 
                                                        >> 1U)) 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_79z = (0x800U 
                                            | vlSelf->top__DOT__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__237(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__237\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x3ffeU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (0x1fffU == (0x1fffU & (vlSelf->top__DOT__celloutsig_7z 
                                               >> 2U))));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (1U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x3ffeU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__238(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__238\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x3ffdU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (2U & (vlSelf->top__DOT__celloutsig_76z 
                              >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (2U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x3ffdU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__239(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__239\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x3ffbU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (4U & (vlSelf->top__DOT__celloutsig_76z 
                              >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (4U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x3ffbU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__240(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__240\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x3ff7U & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (8U & (vlSelf->top__DOT__celloutsig_76z 
                              >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (8U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x3ff7U 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__241(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__241\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x3fefU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (0x10U & (vlSelf->top__DOT__celloutsig_76z 
                                 >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (0x10U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x3fefU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__242(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__242\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x3fdfU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (0x20U & (vlSelf->top__DOT__celloutsig_76z 
                                 >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (0x20U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x3fdfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__243(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__243\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x3fbfU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (0x40U & (vlSelf->top__DOT__celloutsig_76z 
                                 >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (0x40U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x3fbfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__244(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__244\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x3f7fU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (0x80U & (vlSelf->top__DOT__celloutsig_76z 
                                 >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (0x80U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x3f7fU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__245(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__245\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x3effU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (0x100U & (vlSelf->top__DOT__celloutsig_76z 
                                  >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (0x100U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x3effU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__246(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__246\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x3dffU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (0x200U & (vlSelf->top__DOT__celloutsig_76z 
                                  >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (0x200U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x3dffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__247(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__247\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x3bffU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (0x400U & (vlSelf->top__DOT__celloutsig_76z 
                                  >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (0x400U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x3bffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__248(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__248\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x37ffU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (0x800U & (vlSelf->top__DOT__celloutsig_76z 
                                  >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (0x800U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x37ffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__249(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__249\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        if ((0x1000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x2fffU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (0x1000U & (vlSelf->top__DOT__celloutsig_76z 
                                   >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (0x1000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x2fffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__250(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__250\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        if ((0x2000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_120z = 
                    ((0x1fffU & (IData)(vlSelf->top__DOT__celloutsig_120z)) 
                     | (0x2000U & (vlSelf->top__DOT__celloutsig_76z 
                                   >> 3U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_120z = (0x2000U 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_120z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_120z = (0x1fffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_120z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__251(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__251\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (1U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x3ffeU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x3ffeU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__252(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__252\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (2U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x3ffdU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x3ffdU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__253(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__253\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (4U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x3ffbU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x3ffbU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__254(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__254\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (8U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x3ff7U 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x3ff7U 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__255(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__255\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (0x10U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x3fefU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x3fefU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__256(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__256\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (0x20U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x3fdfU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x3fdfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__257(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__257\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (0x40U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x3fbfU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x3fbfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__258(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__258\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (0x80U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x3f7fU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x3f7fU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__259(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__259\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (0x100U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x3effU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x3effU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__260(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__260\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (0x200U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x3dffU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x3dffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__261(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__261\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (0x400U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x3bffU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x3bffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__262(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__262\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (0x800U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x37ffU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x37ffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__263(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__263\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        if ((0x1000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (0x1000U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x2fffU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x2fffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__264(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__264\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        if ((0x2000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_22z = (0x2000U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_22z));
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_22z = (0x1fffU 
                                                & (IData)(vlSelf->top__DOT__celloutsig_22z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_22z = (0x1fffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_22z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__265(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__265\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (2U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1fffdU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1fffdU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__266(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__266\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (4U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1fffbU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1fffbU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__267(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__267\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (8U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1fff7U 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1fff7U 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__268(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__268\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x10U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1ffefU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1ffefU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__269(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__269\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x20U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1ffdfU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1ffdfU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__270(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__270\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x40U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1ffbfU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1ffbfU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__271(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__271\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x80U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1ff7fU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1ff7fU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__272(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__272\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x100U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1feffU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1feffU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__273(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__273\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x200U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1fdffU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1fdffU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__274(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__274\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x400U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1fbffU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1fbffU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__275(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__275\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x800U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1f7ffU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1f7ffU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__276(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__276\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        if ((0x1000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1000U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1efffU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1efffU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__277(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__277\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        if ((0x2000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x2000U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1dfffU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1dfffU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__278(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__278\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        if ((0x4000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x4000U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x1bfffU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1bfffU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__279(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__279\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        if ((0x8000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x8000U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x17fffU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x17fffU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__280(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__280\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        if ((0x10000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (0x10000U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = (0xffffU 
                                                & vlSelf->top__DOT__celloutsig_32z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0xffffU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__281(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__281\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_32z = (1U 
                                                | vlSelf->top__DOT__celloutsig_32z);
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_32z = ((0x1fffeU 
                                                 & vlSelf->top__DOT__celloutsig_32z) 
                                                | (1U 
                                                   & (~ (IData)(vlSelf->top__DOT__celloutsig_0z))));
        }
    } else {
        vlSelf->top__DOT__celloutsig_32z = (0x1fffeU 
                                            & vlSelf->top__DOT__celloutsig_32z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__282(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__282\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_110z = (0xfeU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_110z));
    } else if ((1U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_110z = ((0xfeU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_110z)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_55z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_110z = (1U | (IData)(vlSelf->top__DOT__celloutsig_110z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__283(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__283\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_110z = (0xfdU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_110z));
    } else if ((2U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_110z = ((0xfdU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_110z)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_55z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_110z = (2U | (IData)(vlSelf->top__DOT__celloutsig_110z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__284(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__284\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_110z = (0xfbU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_110z));
    } else if ((4U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_110z = ((0xfbU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_110z)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_55z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_110z = (4U | (IData)(vlSelf->top__DOT__celloutsig_110z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__285(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__285\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_110z = (0xf7U 
                                             & (IData)(vlSelf->top__DOT__celloutsig_110z));
    } else if ((8U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_110z = ((0xf7U 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_110z)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_55z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_110z = (8U | (IData)(vlSelf->top__DOT__celloutsig_110z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__286(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__286\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_110z = (0xefU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_110z));
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_110z = ((0xefU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_110z)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_55z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_110z = (0x10U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_110z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__287(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__287\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_110z = (0xdfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_110z));
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_110z = ((0xdfU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_110z)) 
                                                 | (0x20U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_55z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_110z = (0x20U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_110z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__288(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__288\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_110z = (0xbfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_110z));
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_110z = ((0xbfU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_110z)) 
                                                 | (0x40U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_55z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_110z = (0x40U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_110z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__289(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__289\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_110z = (0x7fU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_110z));
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_110z = ((0x7fU 
                                                  & (IData)(vlSelf->top__DOT__celloutsig_110z)) 
                                                 | (0x80U 
                                                    & (IData)(vlSelf->top__DOT__celloutsig_55z)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_110z = (0x80U 
                                             | (IData)(vlSelf->top__DOT__celloutsig_110z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__290(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__290\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3ffffeU & vlSelf->top__DOT__celloutsig_100z) 
                     | (1U & (IData)(vlSelf->top__DOT__celloutsig_74z)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7ffffeU & vlSelf->top__DOT__celloutsig_142z) 
                     | (1U & (vlSelf->top__DOT__celloutsig_114z 
                              >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (1U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (1U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3ffffeU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7ffffeU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__291(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__291\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3ffffdU & vlSelf->top__DOT__celloutsig_100z) 
                     | (2U & (IData)(vlSelf->top__DOT__celloutsig_74z)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7ffffdU & vlSelf->top__DOT__celloutsig_142z) 
                     | (2U & (vlSelf->top__DOT__celloutsig_114z 
                              >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (2U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (2U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3ffffdU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7ffffdU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__292(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__292\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3ffffbU & vlSelf->top__DOT__celloutsig_100z) 
                     | (4U & (IData)(vlSelf->top__DOT__celloutsig_74z)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7ffffbU & vlSelf->top__DOT__celloutsig_142z) 
                     | (4U & (vlSelf->top__DOT__celloutsig_114z 
                              >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (4U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (4U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3ffffbU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7ffffbU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__293(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__293\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3ffff7U & vlSelf->top__DOT__celloutsig_100z) 
                     | (8U & (IData)(vlSelf->top__DOT__celloutsig_74z)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7ffff7U & vlSelf->top__DOT__celloutsig_142z) 
                     | (8U & (vlSelf->top__DOT__celloutsig_114z 
                              >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (8U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (8U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3ffff7U 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7ffff7U 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__294(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__294\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3fffefU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x10U & (IData)(vlSelf->top__DOT__celloutsig_74z)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7fffefU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x10U & (vlSelf->top__DOT__celloutsig_114z 
                                 >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x10U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x10U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3fffefU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7fffefU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__295(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__295\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3fffdfU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x20U & (IData)(vlSelf->top__DOT__celloutsig_74z)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7fffdfU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x20U & (vlSelf->top__DOT__celloutsig_114z 
                                 >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x20U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x20U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3fffdfU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7fffdfU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__296(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__296\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3fffbfU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x40U & (IData)(vlSelf->top__DOT__celloutsig_74z)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7fffbfU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x40U & (vlSelf->top__DOT__celloutsig_114z 
                                 >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x40U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x40U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3fffbfU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7fffbfU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__297(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__297\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3fff7fU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x80U & (IData)(vlSelf->top__DOT__celloutsig_74z)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7fff7fU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x80U & (vlSelf->top__DOT__celloutsig_114z 
                                 >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x80U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x80U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3fff7fU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7fff7fU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__298(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__298\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3ffeffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x100U & (vlSelf->top__DOT__celloutsig_7z 
                                  >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7ffeffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x100U & (vlSelf->top__DOT__celloutsig_114z 
                                  >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x100U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x100U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3ffeffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7ffeffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__299(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__299\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3ffdffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x200U & (vlSelf->top__DOT__celloutsig_7z 
                                  >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7ffdffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x200U & (vlSelf->top__DOT__celloutsig_114z 
                                  >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x200U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x200U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3ffdffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7ffdffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__300(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__300\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3ffbffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x400U & (vlSelf->top__DOT__celloutsig_7z 
                                  >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7ffbffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x400U & (vlSelf->top__DOT__celloutsig_114z 
                                  >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x400U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x400U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3ffbffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7ffbffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__301(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__301\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3ff7ffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x800U & (vlSelf->top__DOT__celloutsig_7z 
                                  >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7ff7ffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x800U & (vlSelf->top__DOT__celloutsig_114z 
                                  >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x800U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x800U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3ff7ffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7ff7ffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__302(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__302\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        if ((0x1000U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3fefffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x1000U & (vlSelf->top__DOT__celloutsig_7z 
                                   >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7fefffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x1000U & (vlSelf->top__DOT__celloutsig_114z 
                                   >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x1000U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x1000U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3fefffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7fefffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__303(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__303\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        if ((0x2000U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3fdfffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x2000U & (vlSelf->top__DOT__celloutsig_7z 
                                   >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7fdfffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x2000U & (vlSelf->top__DOT__celloutsig_114z 
                                   >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x2000U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x2000U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3fdfffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7fdfffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__304(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__304\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        if ((0x4000U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3fbfffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x4000U & (vlSelf->top__DOT__celloutsig_7z 
                                   >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7fbfffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x4000U & (vlSelf->top__DOT__celloutsig_114z 
                                   >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x4000U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x4000U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3fbfffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7fbfffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__305(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__305\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        if ((0x8000U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3f7fffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x8000U & (vlSelf->top__DOT__celloutsig_7z 
                                   >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7f7fffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x8000U & (vlSelf->top__DOT__celloutsig_114z 
                                   >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x8000U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x8000U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3f7fffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7f7fffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__306(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__306\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        if ((0x10000U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3effffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x10000U & (vlSelf->top__DOT__celloutsig_7z 
                                    >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7effffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x10000U & (vlSelf->top__DOT__celloutsig_114z 
                                    >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x10000U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x10000U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3effffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7effffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__307(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__307\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        if ((0x20000U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3dffffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x20000U & (vlSelf->top__DOT__celloutsig_7z 
                                    >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7dffffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x20000U & (vlSelf->top__DOT__celloutsig_114z 
                                    >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x20000U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x20000U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3dffffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7dffffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__308(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__308\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        if ((0x40000U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x3bffffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x40000U & (vlSelf->top__DOT__celloutsig_7z 
                                    >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x7bffffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x40000U & (vlSelf->top__DOT__celloutsig_114z 
                                    >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x40000U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x40000U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x3bffffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x7bffffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__309(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__309\n"); );
    // Body
    if ((0x80000U & vlSelf->clkin_data[4U])) {
        if ((0x80000U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x37ffffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x80000U & (vlSelf->top__DOT__celloutsig_7z 
                                    >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x77ffffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x80000U & (vlSelf->top__DOT__celloutsig_114z 
                                    >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x80000U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x80000U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x37ffffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x77ffffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__310(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__310\n"); );
    // Body
    if ((0x100000U & vlSelf->clkin_data[4U])) {
        if ((0x100000U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x2fffffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x100000U & (vlSelf->top__DOT__celloutsig_7z 
                                     >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x6fffffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x100000U & (vlSelf->top__DOT__celloutsig_114z 
                                     >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x100000U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x100000U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x2fffffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x6fffffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__311(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__311\n"); );
    // Body
    if ((0x200000U & vlSelf->clkin_data[4U])) {
        if ((0x200000U & vlSelf->clkin_data[3U])) {
            if ((1U & vlSelf->clkin_data[2U])) {
                vlSelf->top__DOT__celloutsig_100z = 
                    ((0x1fffffU & vlSelf->top__DOT__celloutsig_100z) 
                     | (0x200000U & (vlSelf->top__DOT__celloutsig_7z 
                                     >> 1U)));
            }
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x5fffffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x200000U & (vlSelf->top__DOT__celloutsig_114z 
                                     >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_100z = (0x200000U 
                                                 | vlSelf->top__DOT__celloutsig_100z);
            vlSelf->top__DOT__celloutsig_142z = (0x200000U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_100z = (0x1fffffU 
                                             & vlSelf->top__DOT__celloutsig_100z);
        vlSelf->top__DOT__celloutsig_142z = (0x5fffffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__316(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__316\n"); );
    // Body
    if ((0x400000U & vlSelf->clkin_data[4U])) {
        if ((0x400000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_142z = 
                    ((0x3fffffU & vlSelf->top__DOT__celloutsig_142z) 
                     | (0x400000U & (vlSelf->top__DOT__celloutsig_114z 
                                     >> 7U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_142z = (0x400000U 
                                                 | vlSelf->top__DOT__celloutsig_142z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_142z = (0x3fffffU 
                                             & vlSelf->top__DOT__celloutsig_142z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__317(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__317\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7ffefU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x10U | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x7ffefU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__318(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__318\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7ffdfU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x20U | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x7ffdfU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__319(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__319\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7ffbfU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x40U | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x7ffbfU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__320(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__320\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7ff7fU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x80U | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x7ff7fU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__321(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__321\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7feffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x100U 
                                            | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x7feffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__322(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__322\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7fdffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x200U 
                                            | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x7fdffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__323(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__323\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7fbffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x400U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x400U 
                                            | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x7fbffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__324(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__324\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7f7ffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x800U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x800U 
                                            | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x7f7ffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__325(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__325\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7efffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x1000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x1000U 
                                            | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x7efffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__326(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__326\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7dfffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x2000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x2000U 
                                            | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x7dfffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__327(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__327\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7bfffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x4000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x4000U 
                                            | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x7bfffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__328(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__328\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x77fffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x8000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x8000U 
                                            | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x77fffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__329(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__329\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x6ffffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x10000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x10000U 
                                            | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x6ffffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__330(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__330\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x5ffffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x20000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x20000U 
                                            | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x5ffffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__331(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__331\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x3ffffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((0x40000U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x40000U 
                                            | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = (0x3ffffU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__332(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__332\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7fff7U 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((8U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (8U | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = ((0x7fff7U 
                                             & vlSelf->top__DOT__celloutsig_10z) 
                                            | ((IData)(vlSelf->top__DOT__celloutsig_2z) 
                                               << 3U));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__333(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__333\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7fffeU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (1U | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = ((0x7fffeU 
                                             & vlSelf->top__DOT__celloutsig_10z) 
                                            | (IData)(vlSelf->top__DOT__celloutsig_0z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__334(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__334\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7fffdU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((2U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (2U | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = ((0x7fffdU 
                                             & vlSelf->top__DOT__celloutsig_10z) 
                                            | (2U & 
                                               ((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                                << 1U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__335(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__335\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_10z = (0x7fffbU 
                                            & vlSelf->top__DOT__celloutsig_10z);
    } else if ((4U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_10z = (4U | vlSelf->top__DOT__celloutsig_10z);
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_10z = ((0x7fffbU 
                                             & vlSelf->top__DOT__celloutsig_10z) 
                                            | ((IData)(vlSelf->top__DOT__celloutsig_0z) 
                                               << 2U));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__345(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__345\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_64z = (1U & (~ ((vlSelf->top__DOT__celloutsig_4z 
                                                  >> 0xdU) 
                                                 & (vlSelf->top__DOT__celloutsig_32z 
                                                    >> 5U))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__348(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__348\n"); );
    // Body
    vlSelf->top__DOT__celloutsig_74z = (0xffU & (vlSelf->top__DOT__celloutsig_66z 
                                                 >> 0xcU));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__350(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__350\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x3feU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0xfeU & (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((1U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_71z = (1U | (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (1U | (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_71z = ((0x3feU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_71z)) 
                                            | (IData)(vlSelf->top__DOT__celloutsig_18z));
        vlSelf->top__DOT__celloutsig_55z = ((0xfeU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_55z)) 
                                            | (1U & (IData)(vlSelf->top__DOT__celloutsig_44z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__351(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__351\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x3fdU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0xfdU & (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((2U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_71z = (2U | (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (2U | (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_71z = ((0x3fdU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_71z)) 
                                            | (2U & 
                                               ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                >> 1U)));
        vlSelf->top__DOT__celloutsig_55z = ((0xfdU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_55z)) 
                                            | (2U & (IData)(vlSelf->top__DOT__celloutsig_44z)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__352(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__352\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x3fbU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0xfbU & (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((4U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_71z = (4U | (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (4U | (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_71z = ((0x3fbU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_71z)) 
                                            | (4U & 
                                               ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                >> 1U)));
        vlSelf->top__DOT__celloutsig_55z = ((0xfbU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_55z)) 
                                            | (4U & 
                                               ((~ 
                                                 ((~ (IData)(vlSelf->top__DOT__celloutsig_0z)) 
                                                  & (vlSelf->top__DOT__celloutsig_7z 
                                                     >> 2U))) 
                                                << 2U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__353(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__353\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x3f7U 
                                            & (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0xf7U & (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((8U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_71z = (8U | (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (8U | (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_71z = ((0x3f7U 
                                             & (IData)(vlSelf->top__DOT__celloutsig_71z)) 
                                            | (8U & 
                                               ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                >> 1U)));
        vlSelf->top__DOT__celloutsig_55z = ((0xf7U 
                                             & (IData)(vlSelf->top__DOT__celloutsig_55z)) 
                                            | (8U & 
                                               (vlSelf->top__DOT__celloutsig_4z 
                                                << 2U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__354(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__354\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x3efU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0xefU & (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x10U | (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0x10U | (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_71z = ((0x3efU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_71z)) 
                                            | (0x10U 
                                               & ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                  >> 1U)));
        vlSelf->top__DOT__celloutsig_55z = ((0xefU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_55z)) 
                                            | (0x10U 
                                               & (vlSelf->top__DOT__celloutsig_4z 
                                                  << 2U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__355(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__355\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x3dfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0xdfU & (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x20U | (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0x20U | (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_71z = ((0x3dfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_71z)) 
                                            | (0x20U 
                                               & ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                  >> 1U)));
        vlSelf->top__DOT__celloutsig_55z = ((0xdfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_55z)) 
                                            | (0x20U 
                                               & (vlSelf->top__DOT__celloutsig_4z 
                                                  << 2U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__356(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__356\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x3bfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0xbfU & (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x40U | (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0x40U | (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_71z = ((0x3bfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_71z)) 
                                            | (0x40U 
                                               & ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                  >> 1U)));
        vlSelf->top__DOT__celloutsig_55z = ((0xbfU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_55z)) 
                                            | (0x40U 
                                               & (vlSelf->top__DOT__celloutsig_4z 
                                                  << 2U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__357(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__357\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x37fU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0x7fU & (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x80U | (IData)(vlSelf->top__DOT__celloutsig_71z));
        vlSelf->top__DOT__celloutsig_55z = (0x80U | (IData)(vlSelf->top__DOT__celloutsig_55z));
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_71z = ((0x37fU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_71z)) 
                                            | (0x80U 
                                               & ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                  >> 1U)));
        vlSelf->top__DOT__celloutsig_55z = ((0x7fU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_55z)) 
                                            | (0x80U 
                                               & (vlSelf->top__DOT__celloutsig_4z 
                                                  << 2U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__358(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__358\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x2ffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_71z));
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x100U 
                                            | (IData)(vlSelf->top__DOT__celloutsig_71z));
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_71z = ((0x2ffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_71z)) 
                                            | (0x100U 
                                               & ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                  >> 1U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__359(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__359\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x1ffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_71z));
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_71z = (0x200U 
                                            | (IData)(vlSelf->top__DOT__celloutsig_71z));
    } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
        vlSelf->top__DOT__celloutsig_71z = ((0x1ffU 
                                             & (IData)(vlSelf->top__DOT__celloutsig_71z)) 
                                            | (0x200U 
                                               & ((IData)(vlSelf->top__DOT__celloutsig_46z) 
                                                  >> 1U)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__360(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__360\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3fffffeU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((1U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3fffffeU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (1U 
                                                   & (vlSelf->in_data[1U] 
                                                      >> 0x15U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (1U | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__361(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__361\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3fffffdU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((2U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3fffffdU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (2U 
                                                   & (vlSelf->in_data[1U] 
                                                      >> 0x15U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (2U | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__362(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__362\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3fffffbU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((4U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3fffffbU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (4U 
                                                   & (vlSelf->in_data[1U] 
                                                      >> 0x15U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (4U | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__363(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__363\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3fffff7U 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((8U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3fffff7U 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (8U 
                                                   & (vlSelf->in_data[1U] 
                                                      >> 0x15U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (8U | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__364(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__364\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3ffffefU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3ffffefU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x10U 
                                                   & (vlSelf->in_data[1U] 
                                                      >> 0x15U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x10U | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__365(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__365\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3ffffdfU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3ffffdfU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x20U 
                                                   & (vlSelf->in_data[1U] 
                                                      >> 0x15U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x20U | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__366(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__366\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3ffffbfU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3ffffbfU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x40U 
                                                   & (vlSelf->in_data[1U] 
                                                      >> 0x15U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x40U | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__367(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__367\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3ffff7fU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3ffff7fU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x80U 
                                                   & (vlSelf->in_data[1U] 
                                                      >> 0x15U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x80U | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__368(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__368\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3fffeffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3fffeffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x100U 
                                                   & (vlSelf->in_data[1U] 
                                                      >> 0x15U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x100U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__369(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__369\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3fffdffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3fffdffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x200U 
                                                   & (vlSelf->in_data[1U] 
                                                      >> 0x15U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x200U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__370(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__370\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3fffbffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x400U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3fffbffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x400U 
                                                   & (vlSelf->in_data[1U] 
                                                      >> 0x15U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x400U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__371(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__371\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3fff7ffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x800U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3fff7ffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x800U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x800U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__372(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__372\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3ffefffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x1000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3ffefffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x1000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x1000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__373(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__373\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3ffdfffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x2000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3ffdfffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x2000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x2000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__374(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__374\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3ffbfffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x4000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3ffbfffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x4000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x4000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__375(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__375\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3ff7fffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x8000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3ff7fffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x8000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x8000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__376(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__376\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3feffffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x10000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3feffffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x10000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x10000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__377(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__377\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3fdffffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x20000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3fdffffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x20000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x20000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__378(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__378\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3fbffffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x40000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3fbffffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x40000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x40000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__379(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__379\n"); );
    // Body
    if ((0x80000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3f7ffffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x80000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3f7ffffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x80000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x80000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__380(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__380\n"); );
    // Body
    if ((0x100000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3efffffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x100000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3efffffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x100000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x100000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__381(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__381\n"); );
    // Body
    if ((0x200000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3dfffffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x200000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3dfffffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x200000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x200000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__382(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__382\n"); );
    // Body
    if ((0x400000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x3bfffffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x400000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x3bfffffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x400000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x400000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__383(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__383\n"); );
    // Body
    if ((0x800000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x37fffffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x800000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x37fffffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x800000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x800000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__384(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__384\n"); );
    // Body
    if ((0x1000000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x2ffffffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x1000000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x2ffffffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x1000000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x1000000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__385(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__385\n"); );
    // Body
    if ((0x2000000U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_17z = (0x1ffffffU 
                                            & vlSelf->top__DOT__celloutsig_17z);
    } else if ((0x2000000U & vlSelf->clkin_data[3U])) {
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_17z = ((0x1ffffffU 
                                                 & vlSelf->top__DOT__celloutsig_17z) 
                                                | (0x2000000U 
                                                   & (vlSelf->in_data[2U] 
                                                      << 0xbU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_17z = (0x2000000U 
                                            | vlSelf->top__DOT__celloutsig_17z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__389(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__389\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3ffffeU & vlSelf->top__DOT__celloutsig_45z) 
                     | (1U & (vlSelf->top__DOT__celloutsig_38z 
                              >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (1U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3ffffeU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__390(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__390\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3ffffdU & vlSelf->top__DOT__celloutsig_45z) 
                     | (2U & (vlSelf->top__DOT__celloutsig_38z 
                              >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (2U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3ffffdU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__391(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__391\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3ffffbU & vlSelf->top__DOT__celloutsig_45z) 
                     | (4U & (vlSelf->top__DOT__celloutsig_38z 
                              >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (4U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3ffffbU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__392(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__392\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3ffff7U & vlSelf->top__DOT__celloutsig_45z) 
                     | (8U & (vlSelf->top__DOT__celloutsig_38z 
                              >> 0x11U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (8U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3ffff7U 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__393(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__393\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3fffefU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x10U & (vlSelf->top__DOT__celloutsig_38z 
                                 >> 0x11U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x10U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3fffefU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__394(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__394\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3fffdfU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x20U & (vlSelf->top__DOT__celloutsig_38z 
                                 >> 0x11U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x20U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3fffdfU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__395(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__395\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3fffbfU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x40U & (vlSelf->top__DOT__celloutsig_38z 
                                 >> 0x11U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x40U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3fffbfU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__396(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__396\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3fff7fU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x80U & (vlSelf->top__DOT__celloutsig_38z 
                                 >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x80U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3fff7fU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__397(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__397\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3ffeffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x100U & (vlSelf->top__DOT__celloutsig_38z 
                                  >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x100U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3ffeffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__398(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__398\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3ffdffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x200U & (vlSelf->top__DOT__celloutsig_38z 
                                  >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x200U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3ffdffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__399(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__399\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3ffbffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x400U & (vlSelf->top__DOT__celloutsig_38z 
                                  >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x400U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3ffbffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__400(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__400\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3ff7ffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x800U & (vlSelf->top__DOT__celloutsig_38z 
                                  >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x800U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3ff7ffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__401(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__401\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        if ((0x1000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3fefffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x1000U & (vlSelf->top__DOT__celloutsig_38z 
                                   >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x1000U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3fefffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__402(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__402\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        if ((0x2000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3fdfffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x2000U & (vlSelf->top__DOT__celloutsig_38z 
                                   >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x2000U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3fdfffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__403(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__403\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        if ((0x4000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3fbfffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x4000U & (vlSelf->top__DOT__celloutsig_38z 
                                   >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x4000U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3fbfffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__404(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__404\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        if ((0x8000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3f7fffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x8000U & (vlSelf->top__DOT__celloutsig_38z 
                                   >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x8000U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3f7fffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__405(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__405\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        if ((0x10000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3effffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x10000U & (vlSelf->top__DOT__celloutsig_38z 
                                    >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x10000U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3effffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__406(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__406\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        if ((0x20000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3dffffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x20000U & (vlSelf->top__DOT__celloutsig_38z 
                                    >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x20000U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3dffffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__407(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__407\n"); );
    // Body
    if ((0x40000U & vlSelf->clkin_data[4U])) {
        if ((0x40000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x3bffffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x40000U & (vlSelf->top__DOT__celloutsig_38z 
                                    >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x40000U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x3bffffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__408(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__408\n"); );
    // Body
    if ((0x80000U & vlSelf->clkin_data[4U])) {
        if ((0x80000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x37ffffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x80000U & (vlSelf->top__DOT__celloutsig_38z 
                                    >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x80000U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x37ffffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__409(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__409\n"); );
    // Body
    if ((0x100000U & vlSelf->clkin_data[4U])) {
        if ((0x100000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x2fffffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x100000U & (vlSelf->top__DOT__celloutsig_38z 
                                     >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x100000U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x2fffffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__410(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__410\n"); );
    // Body
    if ((0x200000U & vlSelf->clkin_data[4U])) {
        if ((0x200000U & vlSelf->clkin_data[3U])) {
            if ((1U & (~ vlSelf->clkin_data[2U]))) {
                vlSelf->top__DOT__celloutsig_45z = 
                    ((0x1fffffU & vlSelf->top__DOT__celloutsig_45z) 
                     | (0x200000U & (vlSelf->top__DOT__celloutsig_38z 
                                     >> 1U)));
            }
        } else {
            vlSelf->top__DOT__celloutsig_45z = (0x200000U 
                                                | vlSelf->top__DOT__celloutsig_45z);
        }
    } else {
        vlSelf->top__DOT__celloutsig_45z = (0x1fffffU 
                                            & vlSelf->top__DOT__celloutsig_45z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__411(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__411\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_11z = (1U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_11z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_11z = ((0x3feU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_11z)) 
                                                | (IData)(vlSelf->top__DOT__celloutsig_0z));
        }
    } else {
        vlSelf->top__DOT__celloutsig_11z = (0x3feU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_11z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__412(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__412\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_11z = (2U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_11z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_11z = ((0x3fdU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_11z)) 
                                                | (2U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0xcU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_11z = (0x3fdU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_11z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__413(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__413\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_11z = (4U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_11z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_11z = ((0x3fbU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_11z)) 
                                                | (4U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0xcU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_11z = (0x3fbU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_11z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__414(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__414\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_11z = (8U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_11z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_11z = ((0x3f7U 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_11z)) 
                                                | (8U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0xcU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_11z = (0x3f7U 
                                            & (IData)(vlSelf->top__DOT__celloutsig_11z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__415(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__415\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_11z = (0x10U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_11z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_11z = ((0x3efU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_11z)) 
                                                | (0x10U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0xcU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_11z = (0x3efU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_11z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__416(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__416\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_11z = (0x20U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_11z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_11z = ((0x3dfU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_11z)) 
                                                | (0x20U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0xcU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_11z = (0x3dfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_11z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__417(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__417\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_11z = (0x40U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_11z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_11z = ((0x3bfU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_11z)) 
                                                | (0x40U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0xcU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_11z = (0x3bfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_11z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__418(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__418\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_11z = (0x80U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_11z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_11z = ((0x37fU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_11z)) 
                                                | (0x80U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0xcU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_11z = (0x37fU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_11z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__419(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__419\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_11z = (0x100U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_11z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_11z = ((0x2ffU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_11z)) 
                                                | (0x100U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0xcU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_11z = (0x2ffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_11z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__420(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__420\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_11z = (0x200U 
                                                | (IData)(vlSelf->top__DOT__celloutsig_11z));
        } else if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_11z = ((0x1ffU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_11z)) 
                                                | (0x200U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0xcU)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_11z = (0x1ffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_11z));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__421(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__421\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x3feU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x7ffffffeU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((1U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_52z = (1U | (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (1U | vlSelf->top__DOT__celloutsig_114z);
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_52z = ((0x3feU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_52z)) 
                                                | (1U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0x10U)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_114z = ((0x7ffffffeU 
                                                  & vlSelf->top__DOT__celloutsig_114z) 
                                                 | (IData)(vlSelf->top__DOT__celloutsig_61z));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__422(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__422\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x3fdU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x7ffffffdU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((2U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_52z = (2U | (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (2U | vlSelf->top__DOT__celloutsig_114z);
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_52z = ((0x3fdU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_52z)) 
                                                | (2U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0x10U)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_114z = ((0x7ffffffdU 
                                                  & vlSelf->top__DOT__celloutsig_114z) 
                                                 | ((IData)(vlSelf->top__DOT__celloutsig_81z) 
                                                    << 1U));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__423(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__423\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x3fbU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x7ffffffbU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((4U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_52z = (4U | (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (4U | vlSelf->top__DOT__celloutsig_114z);
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_52z = ((0x3fbU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_52z)) 
                                                | (4U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0x10U)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_114z = ((0x7ffffffbU 
                                                  & vlSelf->top__DOT__celloutsig_114z) 
                                                 | (4U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->top__DOT__celloutsig_8z) 
                                                         >> 4U)) 
                                                       << 2U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__424(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__424\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x3f7U 
                                            & (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x7ffffff7U 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((8U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_52z = (8U | (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (8U | vlSelf->top__DOT__celloutsig_114z);
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_52z = ((0x3f7U 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_52z)) 
                                                | (8U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0x10U)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_114z = ((0x7ffffff7U 
                                                  & vlSelf->top__DOT__celloutsig_114z) 
                                                 | ((IData)(vlSelf->top__DOT__celloutsig_54z) 
                                                    << 3U));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__425(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__425\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x3efU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x7fffffefU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x10U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x10U | (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x10U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_52z = ((0x3efU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_52z)) 
                                                | (0x10U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0x10U)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_114z = ((0x7fffffefU 
                                                  & vlSelf->top__DOT__celloutsig_114z) 
                                                 | (0x10U 
                                                    & (vlSelf->top__DOT__celloutsig_76z 
                                                       << 4U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__426(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__426\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x3dfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x7fffffdfU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x20U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x20U | (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x20U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_52z = ((0x3dfU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_52z)) 
                                                | (0x20U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0x10U)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_114z = ((0x7fffffdfU 
                                                  & vlSelf->top__DOT__celloutsig_114z) 
                                                 | (0x20U 
                                                    & (vlSelf->top__DOT__celloutsig_76z 
                                                       << 4U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__427(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__427\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x3bfU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x7fffffbfU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x40U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x40U | (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x40U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_52z = ((0x3bfU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_52z)) 
                                                | (0x40U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0x10U)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_114z = ((0x7fffffbfU 
                                                  & vlSelf->top__DOT__celloutsig_114z) 
                                                 | (0x40U 
                                                    & (vlSelf->top__DOT__celloutsig_76z 
                                                       << 4U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__428(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__428\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x37fU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x7fffff7fU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x80U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x80U | (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x80U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_52z = ((0x37fU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_52z)) 
                                                | (0x80U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0x10U)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_114z = ((0x7fffff7fU 
                                                  & vlSelf->top__DOT__celloutsig_114z) 
                                                 | (0x80U 
                                                    & (vlSelf->top__DOT__celloutsig_76z 
                                                       << 4U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__429(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__429\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x2ffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x7ffffeffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x100U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x100U 
                                            | (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x100U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_52z = ((0x2ffU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_52z)) 
                                                | (0x100U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0x10U)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_114z = ((0x7ffffeffU 
                                                  & vlSelf->top__DOT__celloutsig_114z) 
                                                 | (0x100U 
                                                    & (vlSelf->top__DOT__celloutsig_76z 
                                                       << 4U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__430(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__430\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x1ffU 
                                            & (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x7ffffdffU 
                                             & vlSelf->top__DOT__celloutsig_114z);
    } else if ((0x200U & vlSelf->clkin_data[3U])) {
        vlSelf->top__DOT__celloutsig_52z = (0x200U 
                                            | (IData)(vlSelf->top__DOT__celloutsig_52z));
        vlSelf->top__DOT__celloutsig_114z = (0x200U 
                                             | vlSelf->top__DOT__celloutsig_114z);
    } else {
        if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_52z = ((0x1ffU 
                                                 & (IData)(vlSelf->top__DOT__celloutsig_52z)) 
                                                | (0x200U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 0x10U)));
        }
        if ((1U & vlSelf->clkin_data[2U])) {
            vlSelf->top__DOT__celloutsig_114z = ((0x7ffffdffU 
                                                  & vlSelf->top__DOT__celloutsig_114z) 
                                                 | (0x200U 
                                                    & (vlSelf->top__DOT__celloutsig_76z 
                                                       << 4U)));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__431(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__431\n"); );
    // Body
    if ((1U & vlSelf->clkin_data[4U])) {
        if ((1U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (1U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xfffffeU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (1U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xfffffeU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__432(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__432\n"); );
    // Body
    if ((2U & vlSelf->clkin_data[4U])) {
        if ((2U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (2U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xfffffdU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (2U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xfffffdU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__433(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__433\n"); );
    // Body
    if ((4U & vlSelf->clkin_data[4U])) {
        if ((4U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (4U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xfffffbU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (4U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xfffffbU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__434(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__434\n"); );
    // Body
    if ((8U & vlSelf->clkin_data[4U])) {
        if ((8U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (8U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xfffff7U 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (8U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xfffff7U 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__435(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__435\n"); );
    // Body
    if ((0x10U & vlSelf->clkin_data[4U])) {
        if ((0x10U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x10U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xffffefU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x10U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xffffefU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__436(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__436\n"); );
    // Body
    if ((0x20U & vlSelf->clkin_data[4U])) {
        if ((0x20U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x20U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xffffdfU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x20U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xffffdfU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__437(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__437\n"); );
    // Body
    if ((0x40U & vlSelf->clkin_data[4U])) {
        if ((0x40U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x40U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xffffbfU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x40U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xffffbfU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__438(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__438\n"); );
    // Body
    if ((0x80U & vlSelf->clkin_data[4U])) {
        if ((0x80U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x80U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xffff7fU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x80U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xffff7fU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__439(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__439\n"); );
    // Body
    if ((0x100U & vlSelf->clkin_data[4U])) {
        if ((0x100U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x100U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xfffeffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x100U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xfffeffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__440(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__440\n"); );
    // Body
    if ((0x200U & vlSelf->clkin_data[4U])) {
        if ((0x200U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x200U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xfffdffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x200U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xfffdffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__441(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__441\n"); );
    // Body
    if ((0x400U & vlSelf->clkin_data[4U])) {
        if ((0x400U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x400U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xfffbffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x400U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xfffbffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__442(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__442\n"); );
    // Body
    if ((0x800U & vlSelf->clkin_data[4U])) {
        if ((0x800U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x800U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xfff7ffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x800U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xfff7ffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__443(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__443\n"); );
    // Body
    if ((0x1000U & vlSelf->clkin_data[4U])) {
        if ((0x1000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x1000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xffefffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x1000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xffefffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__444(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__444\n"); );
    // Body
    if ((0x2000U & vlSelf->clkin_data[4U])) {
        if ((0x2000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x2000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xffdfffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x2000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xffdfffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__445(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__445\n"); );
    // Body
    if ((0x4000U & vlSelf->clkin_data[4U])) {
        if ((0x4000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x4000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xffbfffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x4000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xffbfffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__446(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__446\n"); );
    // Body
    if ((0x8000U & vlSelf->clkin_data[4U])) {
        if ((0x8000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x8000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xff7fffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x8000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xff7fffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__447(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__447\n"); );
    // Body
    if ((0x10000U & vlSelf->clkin_data[4U])) {
        if ((0x10000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x10000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xfeffffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x10000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xfeffffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__448(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__448\n"); );
    // Body
    if ((0x20000U & vlSelf->clkin_data[4U])) {
        if ((0x20000U & vlSelf->clkin_data[3U])) {
            vlSelf->top__DOT__celloutsig_42z = (0x20000U 
                                                | vlSelf->top__DOT__celloutsig_42z);
        } else if ((1U & (~ vlSelf->clkin_data[2U]))) {
            vlSelf->top__DOT__celloutsig_42z = ((0xfdffffU 
                                                 & vlSelf->top__DOT__celloutsig_42z) 
                                                | (0x20000U 
                                                   & (vlSelf->top__DOT__celloutsig_4z 
                                                      >> 4U)));
        }
    } else {
        vlSelf->top__DOT__celloutsig_42z = (0xfdffffU 
                                            & vlSelf->top__DOT__celloutsig_42z);
    }
}
