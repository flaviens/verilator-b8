// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_top.h"

VL_INLINE_OPT void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___ico_sequent__TOP__top__0\n"); );
    // Body
    vlSelf->__PVT__celloutsig_23z = VL_REDOR_I((0x3ffffffU 
                                                & VL_SEL_IWII(96, vlSelf->in_data, 0x41U, 0x1aU)));
    vlSelf->__PVT__celloutsig_62z = (1U & (VL_BITSEL_IWII(96, vlSelf->in_data, 0x1aU) 
                                           | (~ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_50z), 1U))));
    vlSelf->__PVT__celloutsig_0z = ((0x7fU & VL_SEL_IWII(96, vlSelf->in_data, 2U, 7U)) 
                                    == (0x7fU & VL_SEL_IWII(96, vlSelf->in_data, 0x48U, 7U)));
    vlSelf->__PVT__celloutsig_48z = (1U & (VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 4U) 
                                           ^ (IData)(vlSelf->__PVT__celloutsig_23z)));
    vlSelf->__PVT__celloutsig_18z = (1U & (~ (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 8U) 
                                              & (IData)(vlSelf->__PVT__celloutsig_0z))));
    vlSelf->__PVT__celloutsig_1z = (1U & (~ (IData)(vlSelf->__PVT__celloutsig_0z)));
    vlSelf->__PVT__celloutsig_57z = (1U & (VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__celloutsig_230z), 8U) 
                                           ^ (IData)(vlSelf->__PVT__celloutsig_18z)));
    vlSelf->__PVT__celloutsig_86z = (1U & ((1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 7U))
                                            ? VL_BITSEL_IWII(96, vlSelf->in_data, 0x25U)
                                            : (IData)(vlSelf->__PVT__celloutsig_18z)));
    vlSelf->__PVT__celloutsig_26z = (1U & (~ ((1U & 
                                               VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 2U))
                                               ? VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT__celloutsig_19z), 4U)
                                               : (IData)(vlSelf->__PVT__celloutsig_18z))));
    vlSelf->__PVT__celloutsig_53z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_1z) 
                                              & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 2U))));
    vlSelf->__PVT__celloutsig_302z = (1U & (~ (((IData)(vlSelf->__PVT__celloutsig_1z) 
                                                | VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__celloutsig_27z), 4U)) 
                                               & (IData)(vlSelf->__PVT___000_))));
    vlSelf->__PVT__celloutsig_2z = ((IData)(vlSelf->__PVT__celloutsig_0z)
                                     ? (IData)(vlSelf->__PVT__celloutsig_0z)
                                     : (IData)(vlSelf->__PVT__celloutsig_1z));
    vlSelf->__PVT__celloutsig_58z = (1U & ((IData)(vlSelf->__PVT__celloutsig_57z)
                                            ? VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_42z, 3U)
                                            : VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_52z), 1U)));
    vlSelf->__PVT__celloutsig_81z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_57z) 
                                              ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_41z), 1U))));
    vlSelf->__PVT__celloutsig_106z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_84z) 
                                               ^ (IData)(vlSelf->__PVT__celloutsig_86z))));
    vlSelf->__PVT__celloutsig_35z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_26z) 
                                              & (IData)(vlSelf->__PVT__celloutsig_2z))));
    vlSelf->__PVT__celloutsig_3z = (1U & (~ ((1U & 
                                              VL_BITSEL_IWII(96, vlSelf->in_data, 6U))
                                              ? (IData)(vlSelf->__PVT__celloutsig_1z)
                                              : (IData)(vlSelf->__PVT__celloutsig_2z))));
    vlSelf->__PVT__celloutsig_698z = (VL_CONCAT_III(21,6,15, 
                                                    (0x3fU 
                                                     & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 5U, 6U)), 
                                                    VL_CONCAT_III(15,13,2, (IData)(vlSelf->__PVT__celloutsig_78z), (IData)(vlSelf->__PVT__celloutsig_44z))) 
                                      ^ VL_CONCAT_III(21,18,3, 
                                                      (0x3ffffU 
                                                       & VL_SEL_IIII(20, vlSelf->__PVT__celloutsig_549z, 1U, 0x12U)), 
                                                      VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_626z), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_106z), (IData)(vlSelf->__PVT__celloutsig_1z)))));
    vlSelf->__PVT__celloutsig_13z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_0z) 
                                              ^ (IData)(vlSelf->__PVT__celloutsig_3z))));
    vlSelf->__PVT__celloutsig_6z = (VL_CONCAT_III(4,3,1, 
                                                  (7U 
                                                   & VL_SEL_IWII(96, vlSelf->in_data, 0xcU, 3U)), (IData)(vlSelf->__PVT__celloutsig_3z)) 
                                    | VL_CONCAT_III(4,1,3, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(96, vlSelf->in_data, 7U)), 
                                                    VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_3z), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_2z), (IData)(vlSelf->__PVT__celloutsig_3z)))));
    vlSelf->__PVT__celloutsig_4z = (VL_CONCAT_III(29,27,2, 
                                                  (0x7ffffffU 
                                                   & VL_SEL_IWII(96, vlSelf->in_data, 0x2fU, 0x1bU)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_0z), (IData)(vlSelf->__PVT__celloutsig_1z))) 
                                    ^ VL_CONCAT_III(29,19,10, 
                                                    (0x7ffffU 
                                                     & VL_SEL_IWII(96, vlSelf->in_data, 4U, 0x13U)), 
                                                    VL_CONCAT_III(10,1,9, (IData)(vlSelf->__PVT__celloutsig_2z), 
                                                                  VL_CONCAT_III(9,1,8, (IData)(vlSelf->__PVT__celloutsig_3z), 
                                                                                VL_CONCAT_III(8,1,7, (IData)(vlSelf->__PVT__celloutsig_1z), 
                                                                                VL_CONCAT_III(7,1,6, (IData)(vlSelf->__PVT__celloutsig_0z), 
                                                                                VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT__celloutsig_0z), 
                                                                                VL_CONCAT_III(5,1,4, (IData)(vlSelf->__PVT__celloutsig_2z), 
                                                                                VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__celloutsig_0z), 
                                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_1z), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_1z), (IData)(vlSelf->__PVT__celloutsig_3z))))))))))));
    vlSelf->__PVT__celloutsig_829z = ((VL_REDOR_I((0xfffU 
                                                   & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_125z, 4U, 0xcU))) 
                                       | (IData)(vlSelf->__PVT__celloutsig_534z)) 
                                      & VL_REDOR_I(
                                                   (0x1fffU 
                                                    & VL_SEL_IIII(21, vlSelf->__PVT__celloutsig_698z, 6U, 0xdU))));
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__celloutsig_15z, 
                    ((IData)(vlSelf->__PVT__celloutsig_3z) 
                     ^ (IData)(vlSelf->__PVT__celloutsig_13z)));
    vlSelf->__PVT__celloutsig_154z = (1U & (~ ((1U 
                                                & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__celloutsig_27z), 5U))
                                                ? VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__celloutsig_6z), 2U)
                                                : VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 6U))));
    vlSelf->__PVT__celloutsig_21z = (VL_CONCAT_III(29,3,26, 
                                                   (7U 
                                                    & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_10z, 0xeU, 3U)), vlSelf->__PVT__celloutsig_17z) 
                                     == VL_CONCAT_III(29,1,28, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_12z, 6U)), 
                                                      VL_CONCAT_III(28,4,24, (IData)(vlSelf->__PVT__celloutsig_6z), 
                                                                    VL_CONCAT_III(24,23,1, vlSelf->__PVT__celloutsig_7z, (IData)(vlSelf->__PVT__celloutsig_2z)))));
    vlSelf->__PVT__celloutsig_9z = (1U & (VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0x10U) 
                                          | (~ VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__celloutsig_6z), 1U))));
    vlSelf->__PVT__celloutsig_88z = (0xffU & (VL_CONCAT_III(8,6,2, 
                                                            (0x3fU 
                                                             & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_12z, 4U, 6U)), 
                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_82z), (IData)(vlSelf->__PVT__celloutsig_62z))) 
                                              + VL_CONCAT_III(8,7,1, 
                                                              (0x7fU 
                                                               & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x16U, 7U)), (IData)(vlSelf->__PVT__celloutsig_57z))));
    vlSelf->__PVT__celloutsig_64z = (1U & (~ (VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xdU) 
                                              & VL_BITSEL_IIII(17, vlSelf->__PVT__celloutsig_32z, 5U))));
    vlSelf->__PVT__celloutsig_37z = (1U & (~ ((VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 9U) 
                                               | (IData)(vlSelf->__PVT__celloutsig_13z)) 
                                              & (IData)(vlSelf->__PVT___001_))));
    vlSelf->__PVT__celloutsig_25z = (1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__celloutsig_6z), 1U) 
                                           | (~ VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U))));
    VL_ASSIGNSEL_II(15,14,1U, vlSelf->__PVT__celloutsig_15z, 
                    (0x3fffU & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U, 0xeU)));
    VL_ASSIGNBIT_WI(0U, vlSelf->out_data, vlSelf->__PVT__celloutsig_829z);
    vlSelf->__PVT__celloutsig_56z = (0x1ffffffU & (
                                                   VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_12z, 1U, 0x19U) 
                                                   ^ 
                                                   VL_CONCAT_III(25,10,15, 
                                                                 (0x3ffU 
                                                                  & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 7U, 0xaU)), 
                                                                 VL_CONCAT_III(15,10,5, (IData)(vlSelf->__PVT__celloutsig_11z), 
                                                                               VL_CONCAT_III(5,4,1, (IData)(vlSelf->__PVT__celloutsig_6z), (IData)(vlSelf->__PVT__celloutsig_9z))))));
    vlSelf->__PVT__celloutsig_66z = (VL_CONCAT_III(24,23,1, 
                                                   (0x7fffffU 
                                                    & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 2U, 0x17U)), (IData)(vlSelf->__PVT__celloutsig_26z)) 
                                     | VL_CONCAT_III(24,3,21, 
                                                     (7U 
                                                      & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 4U, 3U)), 
                                                     VL_CONCAT_III(21,17,4, vlSelf->__PVT__celloutsig_32z, 
                                                                   VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__celloutsig_9z), 
                                                                                VL_CONCAT_III(3,2,1, (IData)(vlSelf->__PVT__celloutsig_44z), (IData)(vlSelf->__PVT__celloutsig_62z))))));
    vlSelf->__PVT__celloutsig_158z = (0xfU & (VL_CONCAT_III(4,2,2, 
                                                            (3U 
                                                             & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 8U, 2U)), 
                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_113z), (IData)(vlSelf->__PVT__celloutsig_99z))) 
                                              * VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__celloutsig_86z), 
                                                              VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_64z), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_0z), (IData)(vlSelf->__PVT__celloutsig_14z))))));
    vlSelf->__PVT__celloutsig_29z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_25z) 
                                              & (IData)(vlSelf->__PVT__celloutsig_3z))));
    vlSelf->__PVT__celloutsig_33z = (7U & (VL_CONCAT_III(3,2,1, 
                                                         (3U 
                                                          & VL_SEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 5U, 2U)), (IData)(vlSelf->__PVT__celloutsig_25z)) 
                                           | VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 7U, 3U)));
    VL_ASSIGNSEL_II(24,16,0U, vlSelf->__PVT__celloutsig_77z, 
                    (0xffffU & (~ VL_CONCAT_III(16,14,2, 
                                                (0x3fffU 
                                                 & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U, 0xeU)), 
                                                VL_CONCAT_III(2,1,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_15z), 0U)), (IData)(vlSelf->__PVT__celloutsig_14z))))));
    vlSelf->__PVT__celloutsig_16z = (0x7ffU & ((IData)(vlSelf->__PVT__celloutsig_14z)
                                                ? VL_CONCAT_III(11,10,1, 
                                                                (0x3ffU 
                                                                 & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 2U, 0xaU)), 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_15z), 0U)))
                                                : VL_SEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 3U, 0xbU)));
    vlSelf->__PVT__celloutsig_572z = (1U & (VL_REDXOR_32(
                                                         (0xffffffU 
                                                          & VL_SEL_IIII(25, vlSelf->__PVT__celloutsig_56z, 0U, 0x18U))) 
                                            ^ (IData)(vlSelf->__PVT__celloutsig_86z)));
    vlSelf->__PVT__celloutsig_118z = (VL_REDOR_I((0x3ffU 
                                                  & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xfU, 0xaU))) 
                                      & VL_REDOR_I(
                                                   (0x3ffU 
                                                    & VL_SEL_IIII(25, vlSelf->__PVT__celloutsig_56z, 0xcU, 0xaU))));
    vlSelf->__PVT__celloutsig_144z = (0x3fffU & (VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 0xaU, 0xeU) 
                                                 + 
                                                 VL_CONCAT_III(14,13,1, 
                                                               (0x1fffU 
                                                                & VL_SEL_IIII(22, vlSelf->__PVT__celloutsig_79z, 0U, 0xdU)), (IData)(vlSelf->__PVT__celloutsig_26z))));
    vlSelf->__PVT__celloutsig_89z = ((IData)(vlSelf->__PVT__celloutsig_69z) 
                                     & (VL_REDAND_II(8, 
                                                     (0xffU 
                                                      & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 1U, 8U))) 
                                        & ((IData)(vlSelf->__PVT__celloutsig_64z) 
                                           & (VL_REDAND_II(12, (IData)(vlSelf->__PVT__celloutsig_46z)) 
                                              & (IData)(vlSelf->__PVT__celloutsig_0z)))));
    vlSelf->__PVT__celloutsig_134z = ((VL_REDOR_I((0x3ffffU 
                                                   & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 1U, 0x12U))) 
                                       | (IData)(vlSelf->__PVT__celloutsig_14z)) 
                                      | VL_REDOR_I(
                                                   (0x7ffffU 
                                                    & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 4U, 0x13U))));
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
    vlSelf->__PVT__celloutsig_87z = (VL_REDAND_II(4, 
                                                  (0xfU 
                                                   & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 0x14U, 4U))) 
                                     & ((IData)(vlSelf->__PVT__celloutsig_14z) 
                                        & VL_REDAND_II(23, vlSelf->__PVT__celloutsig_7z)));
    vlSelf->__PVT__celloutsig_122z = (VL_CONCAT_III(12,10,2, 
                                                    (0x3ffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 6U, 0xaU)), 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_29z), (IData)(vlSelf->__PVT__celloutsig_86z))) 
                                      < VL_CONCAT_III(12,7,5, 
                                                      (0x7fU 
                                                       & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_121z, 5U, 7U)), 
                                                      VL_CONCAT_III(5,1,4, (IData)(vlSelf->__PVT__celloutsig_64z), (IData)(vlSelf->__PVT__celloutsig_6z))));
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
    vlSelf->__PVT__celloutsig_51z = (VL_CONCAT_III(17,1,16, 
                                                   (1U 
                                                    & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 2U)), 
                                                   VL_CONCAT_III(16,12,4, (IData)(vlSelf->__PVT__celloutsig_46z), (IData)(vlSelf->__PVT__celloutsig_6z))) 
                                     >= VL_CONCAT_III(17,2,15, 
                                                      (3U 
                                                       & VL_SEL_IIII(9, (IData)(vlSelf->__PVT__celloutsig_230z), 0U, 2U)), 
                                                      VL_CONCAT_III(15,3,12, (IData)(vlSelf->__PVT__celloutsig_33z), (IData)(vlSelf->__PVT__celloutsig_46z))));
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
    vlSelf->__PVT__celloutsig_145z = (0x1ffU & (~ VL_CONCAT_III(9,8,1, (IData)(vlSelf->__PVT__celloutsig_110z), (IData)(vlSelf->__PVT__celloutsig_118z))));
    vlSelf->__PVT__celloutsig_60z = (VL_REDOR_I((3U 
                                                 & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_31z), 9U, 2U))) 
                                     & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 5U) 
                                        | (IData)(vlSelf->__PVT__celloutsig_51z)));
    vlSelf->__PVT__celloutsig_115z = (VL_CONCAT_III(8,6,2, 
                                                    (0x3fU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__celloutsig_68z, 0xeU, 6U)), 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_25z), (IData)(vlSelf->__PVT__celloutsig_107z))) 
                                      > VL_CONCAT_III(8,7,1, 
                                                      (0x7fU 
                                                       & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 1U, 7U)), (IData)(vlSelf->__PVT__celloutsig_51z)));
    vlSelf->__PVT__celloutsig_93z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_51z) 
                                              & (IData)(vlSelf->__PVT__celloutsig_29z))));
    vlSelf->__PVT__celloutsig_211z = (1U & (~ ((1U 
                                                & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0x14U))
                                                ? VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_142z, 0xdU)
                                                : (IData)(vlSelf->__PVT__celloutsig_90z))));
    vlSelf->__PVT__celloutsig_30z = (VL_CONCAT_III(22,1,21, (IData)(vlSelf->__PVT__celloutsig_26z), vlSelf->__PVT__celloutsig_20z) 
                                     | VL_CONCAT_III(22,6,16, 
                                                     (0x3fU 
                                                      & VL_SEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 1U, 6U)), 
                                                     VL_CONCAT_III(16,15,1, (IData)(vlSelf->__PVT__celloutsig_8z), (IData)(vlSelf->__PVT__celloutsig_1z))));
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
    vlSelf->__PVT__celloutsig_47z = (0xfffU & ((1U 
                                                & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0x12U))
                                                ? VL_CONCAT_III(12,5,7, 
                                                                (0x1fU 
                                                                 & VL_SEL_IIII(25, vlSelf->__PVT__celloutsig_40z, 5U, 5U)), (IData)(vlSelf->__PVT__celloutsig_27z))
                                                : VL_SEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 3U, 0xcU)));
    vlSelf->__PVT__celloutsig_61z = (1U & ((IData)(vlSelf->__PVT__celloutsig_60z) 
                                           | (~ VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_42z, 0xcU))));
    vlSelf->__PVT__celloutsig_195z = (1U & (~ (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_63z), 0U) 
                                               & (IData)(vlSelf->__PVT__celloutsig_60z))));
    vlSelf->__PVT__celloutsig_137z = ((IData)(vlSelf->__PVT__celloutsig_87z)
                                       ? (IData)(vlSelf->__PVT__celloutsig_115z)
                                       : (IData)(vlSelf->__PVT__celloutsig_14z));
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
    vlSelf->__PVT__celloutsig_109z = (1U & (VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_34z, 8U) 
                                            | (~ VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_67z, 9U))));
    vlSelf->__PVT__celloutsig_36z = (0x1ffU & (VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 8U, 9U) 
                                               | VL_CONCAT_III(9,5,4, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_34z, 0xdU, 5U)), (IData)(vlSelf->__PVT__celloutsig_6z))));
    vlSelf->__PVT__celloutsig_116z = (1U & ((IData)(vlSelf->__PVT__celloutsig_60z) 
                                            ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_47z), 1U)));
    vlSelf->__PVT__celloutsig_70z = (1U & (VL_BITSEL_IIII(25, vlSelf->__PVT__celloutsig_56z, 0x13U) 
                                           | (~ VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_47z), 8U))));
    vlSelf->__PVT__celloutsig_232z = (1U & (~ ((1U 
                                                & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_74z), 4U))
                                                ? (IData)(vlSelf->__PVT__celloutsig_154z)
                                                : (IData)(vlSelf->__PVT__celloutsig_195z))));
    vlSelf->__PVT__celloutsig_221z = ((1U & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_125z, 9U))
                                       ? VL_CONCAT_III(6,5,1, 
                                                       (0x1fU 
                                                        & VL_SEL_IIII(25, vlSelf->__PVT__celloutsig_214z, 7U, 5U)), (IData)(vlSelf->__PVT__celloutsig_137z))
                                       : VL_CONCAT_III(6,4,2, 
                                                       (0xfU 
                                                        & VL_SEL_IWII(96, vlSelf->in_data, 3U, 4U)), (IData)(vlSelf->__PVT__celloutsig_194z)));
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
    vlSelf->__PVT__celloutsig_141z = (1U & ((IData)(vlSelf->__PVT__celloutsig_3z)
                                             ? VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 4U)
                                             : VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__celloutsig_36z), 2U)));
    vlSelf->__PVT__celloutsig_228z = (VL_REDOR_I((0x7fU 
                                                  & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_207z, 0U, 7U))) 
                                      | (VL_REDOR_I((IData)(vlSelf->__PVT__celloutsig_165z)) 
                                         | ((IData)(vlSelf->__PVT__celloutsig_60z) 
                                            | (IData)(vlSelf->__PVT__celloutsig_116z))));
    vlSelf->__PVT__celloutsig_91z = (0x3ffU & (VL_CONCAT_III(10,8,2, 
                                                             (0xffU 
                                                              & VL_SEL_IWII(96, vlSelf->in_data, 0x57U, 8U)), 
                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_70z), (IData)(vlSelf->__PVT__celloutsig_23z))) 
                                               ^ VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 4U, 0xaU)));
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
    vlSelf->__PVT__celloutsig_274z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_54z) 
                                               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__celloutsig_221z), 5U))));
    vlSelf->__PVT__celloutsig_231z = (0x1fU & (VL_SEL_IIII(22, vlSelf->__PVT__celloutsig_92z, 2U, 5U) 
                                               ^ VL_CONCAT_III(5,4,1, 
                                                               (0xfU 
                                                                & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__celloutsig_221z), 1U, 4U)), (IData)(vlSelf->__PVT__celloutsig_168z))));
    vlSelf->__PVT__celloutsig_329z = (7U & (~ (VL_SEL_IIII(30, vlSelf->__PVT__celloutsig_285z, 2U, 3U) 
                                               ^ VL_CONCAT_III(3,1,2, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_326z, 3U)), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_141z), (IData)(vlSelf->__PVT__celloutsig_134z))))));
    vlSelf->__PVT__celloutsig_336z = (1U & (~ (VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_77z, 9U) 
                                               | (IData)(vlSelf->__PVT__celloutsig_228z))));
    vlSelf->__PVT__celloutsig_117z = (1U & (~ ((1U 
                                                & VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_28z, 5U))
                                                ? VL_BITSEL_IIII(20, vlSelf->__PVT__celloutsig_65z, 0xaU)
                                                : VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_91z), 2U))));
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
    vlSelf->__PVT__celloutsig_828z = (1U & (~ (IData)(vlSelf->__PVT__celloutsig_274z)));
    vlSelf->__PVT__celloutsig_497z = (1U & (VL_REDXOR_32(
                                                         (3U 
                                                          & VL_SEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_496z), 6U, 2U))) 
                                            ^ (VL_REDXOR_4(vlSelf->__PVT__celloutsig_329z) 
                                               ^ VL_REDXOR_8(vlSelf->__PVT__celloutsig_231z))));
    vlSelf->__PVT__celloutsig_445z = (1U & (~ (IData)(vlSelf->__PVT__celloutsig_117z)));
    vlSelf->__PVT__celloutsig_166z = (VL_CONCAT_III(26,2,24, (IData)(vlSelf->__PVT__celloutsig_124z), 
                                                    VL_CONCAT_III(24,9,15, (IData)(vlSelf->__PVT__celloutsig_145z), (IData)(vlSelf->__PVT__celloutsig_8z))) 
                                      > VL_CONCAT_III(26,9,17, (IData)(vlSelf->__PVT__celloutsig_36z), 
                                                      VL_CONCAT_III(17,1,16, (IData)(vlSelf->__PVT__celloutsig_133z), 
                                                                    VL_CONCAT_III(16,1,15, (IData)(vlSelf->__PVT__celloutsig_18z), (IData)(vlSelf->__PVT__celloutsig_101z)))));
    VL_ASSIGNBIT_WI(0x20U, vlSelf->out_data, vlSelf->__PVT__celloutsig_828z);
    vlSelf->__PVT__celloutsig_283z = (1U & ((IData)(vlSelf->__PVT__celloutsig_166z)
                                             ? (IData)(vlSelf->__PVT__celloutsig_122z)
                                             : VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_95z), 6U)));
    vlSelf->__PVT__celloutsig_294z = (0x7fU & (~ (VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_121z, 0xaU, 7U) 
                                                  ^ 
                                                  VL_CONCAT_III(7,4,3, 
                                                                (0xfU 
                                                                 & VL_SEL_IIII(14, (IData)(vlSelf->__PVT__celloutsig_22z), 1U, 4U)), 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_283z), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_137z), (IData)(vlSelf->__PVT__celloutsig_84z)))))));
}

VL_INLINE_OPT void Vtop_top___act_sequent__TOP__top__0(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___act_sequent__TOP__top__0\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (0xfU & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x14U, 4U));
    VL_ASSIGNSEL_II(24,4,4U, vlSelf->__PVT__celloutsig_38z, __Vtemp_1);
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
    vlSelf->__PVT__celloutsig_274z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_54z) 
                                               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__celloutsig_221z), 5U))));
    vlSelf->__PVT__celloutsig_828z = (1U & (~ (IData)(vlSelf->__PVT__celloutsig_274z)));
    VL_ASSIGNBIT_WI(0x20U, vlSelf->out_data, vlSelf->__PVT__celloutsig_828z);
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__0\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_98z = vlSelf->__PVT__celloutsig_98z;
    vlSelf->__Vdly__celloutsig_94z = vlSelf->__PVT__celloutsig_94z;
    vlSelf->__Vdly__celloutsig_67z = vlSelf->__PVT__celloutsig_67z;
    vlSelf->__Vdly__celloutsig_101z = vlSelf->__PVT__celloutsig_101z;
    vlSelf->__Vdly__celloutsig_207z = vlSelf->__PVT__celloutsig_207z;
    vlSelf->__Vdly__celloutsig_194z = vlSelf->__PVT__celloutsig_194z;
    vlSelf->__Vdly__celloutsig_98z = (0x3ffU & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_72z, 4U, 0xaU));
    vlSelf->__Vdly__celloutsig_94z = VL_CONCAT_III(12,9,3, 
                                                   (0x1ffU 
                                                    & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_72z, 6U, 9U)), 
                                                   VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_82z), 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_86z), (IData)(vlSelf->__PVT__celloutsig_61z))));
    vlSelf->__Vdly__celloutsig_67z = (0x1fffffU & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_12z, 5U, 0x15U));
    vlSelf->__Vdly__celloutsig_101z = (0x7fffU & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 1U, 0xfU));
    vlSelf->__Vdly__celloutsig_207z = VL_CONCAT_III(19,3,16, 
                                                    (7U 
                                                     & VL_SEL_IIII(13, (IData)(vlSelf->__PVT__celloutsig_185z), 4U, 3U)), (IData)(vlSelf->__PVT__celloutsig_148z));
    vlSelf->__Vdly__celloutsig_194z = vlSelf->__PVT__celloutsig_41z;
    vlSelf->__PVT__celloutsig_98z = vlSelf->__Vdly__celloutsig_98z;
    vlSelf->__PVT__celloutsig_94z = vlSelf->__Vdly__celloutsig_94z;
    vlSelf->__PVT__celloutsig_67z = vlSelf->__Vdly__celloutsig_67z;
    vlSelf->__Vdly__celloutsig_12z = vlSelf->__PVT__celloutsig_12z;
    vlSelf->__PVT__celloutsig_101z = vlSelf->__Vdly__celloutsig_101z;
    vlSelf->__PVT__celloutsig_207z = vlSelf->__Vdly__celloutsig_207z;
    vlSelf->__PVT__celloutsig_194z = vlSelf->__Vdly__celloutsig_194z;
    vlSelf->__PVT__celloutsig_107z = (1U & (~ ((IData)(vlSelf->__PVT__celloutsig_99z) 
                                               ^ VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_98z), 5U))));
    vlSelf->__Vdly__celloutsig_12z = VL_CONCAT_III(26,25,1, 
                                                   (0x1ffffffU 
                                                    & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 3U, 0x19U)), (IData)(vlSelf->__PVT__celloutsig_0z));
    vlSelf->__PVT__celloutsig_12z = vlSelf->__Vdly__celloutsig_12z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__1\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_19z = vlSelf->__PVT__celloutsig_19z;
    vlSelf->__Vdly__celloutsig_165z = vlSelf->__PVT__celloutsig_165z;
    vlSelf->__Vdly__celloutsig_185z = vlSelf->__PVT__celloutsig_185z;
    vlSelf->__Vdly__celloutsig_148z = vlSelf->__PVT__celloutsig_148z;
    vlSelf->__Vdly__celloutsig_19z = (0x1fffU & VL_SEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xcU, 0xdU));
    vlSelf->__Vdly__celloutsig_165z = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__celloutsig_68z, 0x11U, 5U));
    vlSelf->__Vdly__celloutsig_185z = (0x1fffU & VL_SEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 0U, 0xdU));
    vlSelf->__Vdly__celloutsig_148z = VL_CONCAT_III(16,8,8, 
                                                    (0xffU 
                                                     & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 3U, 8U)), 
                                                    VL_CONCAT_III(8,5,3, (IData)(vlSelf->__PVT__celloutsig_103z), 
                                                                  VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__celloutsig_18z), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_2z), (IData)(vlSelf->__PVT__celloutsig_35z)))));
    vlSelf->__PVT__celloutsig_19z = vlSelf->__Vdly__celloutsig_19z;
    vlSelf->__PVT__celloutsig_165z = vlSelf->__Vdly__celloutsig_165z;
    vlSelf->__PVT__celloutsig_185z = vlSelf->__Vdly__celloutsig_185z;
    vlSelf->__PVT__celloutsig_148z = vlSelf->__Vdly__celloutsig_148z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__2\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_534z = vlSelf->__PVT__celloutsig_534z;
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        vlSelf->__Vdly__celloutsig_534z = 0U;
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        vlSelf->__Vdly__celloutsig_534z = 1U;
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        vlSelf->__Vdly__celloutsig_534z = (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__celloutsig_158z), 0U));
    }
    vlSelf->__PVT__celloutsig_534z = vlSelf->__Vdly__celloutsig_534z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__3(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__3\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_124z = vlSelf->__PVT__celloutsig_124z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__4(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__4\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_209z = vlSelf->__PVT__celloutsig_209z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__5(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__5\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_52z = vlSelf->__PVT__celloutsig_52z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__6(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__6\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_162z = vlSelf->__PVT__celloutsig_162z;
    vlSelf->__Vdly__celloutsig_181z = vlSelf->__PVT__celloutsig_181z;
    vlSelf->__Vdly__celloutsig_285z = vlSelf->__PVT__celloutsig_285z;
    vlSelf->__Vdly__celloutsig_326z = vlSelf->__PVT__celloutsig_326z;
    vlSelf->__Vdly__celloutsig_162z = (0xffU & VL_SEL_IIII(20, vlSelf->__PVT__celloutsig_65z, 0xaU, 8U));
    vlSelf->__Vdly__celloutsig_181z = VL_CONCAT_III(32,6,26, 
                                                    (0x3fU 
                                                     & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_121z, 0xbU, 6U)), 
                                                    VL_CONCAT_III(26,14,12, (IData)(vlSelf->__PVT__celloutsig_144z), (IData)(vlSelf->__PVT__celloutsig_31z)));
    vlSelf->__Vdly__celloutsig_285z = VL_CONCAT_III(30,1,29, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 0x11U)), 
                                                    VL_CONCAT_III(29,6,23, 
                                                                  (0x3fU 
                                                                   & VL_SEL_IIII(14, (IData)(vlSelf->__PVT__celloutsig_120z), 3U, 6U)), 
                                                                  VL_CONCAT_III(23,1,22, (IData)(vlSelf->__PVT__celloutsig_196z), vlSelf->__PVT__celloutsig_92z)));
    vlSelf->__Vdly__celloutsig_326z = VL_CONCAT_III(26,13,13, 
                                                    (0x1fffU 
                                                     & VL_SEL_IIII(28, vlSelf->__PVT__celloutsig_189z, 8U, 0xdU)), 
                                                    VL_CONCAT_III(13,6,7, (IData)(vlSelf->__PVT__celloutsig_221z), (IData)(vlSelf->__PVT__celloutsig_294z)));
    vlSelf->__PVT__celloutsig_162z = vlSelf->__Vdly__celloutsig_162z;
    vlSelf->__PVT__celloutsig_181z = vlSelf->__Vdly__celloutsig_181z;
    vlSelf->__PVT__celloutsig_285z = vlSelf->__Vdly__celloutsig_285z;
    vlSelf->__PVT__celloutsig_326z = vlSelf->__Vdly__celloutsig_326z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__7(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__7\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_78z = vlSelf->__PVT__celloutsig_78z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__8(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__8\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_204z = vlSelf->__PVT__celloutsig_204z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__9(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__9\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_32z = vlSelf->__PVT__celloutsig_32z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__10(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__10\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_45z = vlSelf->__PVT__celloutsig_45z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__11(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__11\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_42z = vlSelf->__PVT__celloutsig_42z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__12(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__12\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_230z = vlSelf->__PVT__celloutsig_230z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__13(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__13\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_95z = vlSelf->__PVT__celloutsig_95z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__14(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__14\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_140z = vlSelf->__PVT__celloutsig_140z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__15(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__15\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_79z = vlSelf->__PVT__celloutsig_79z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__16(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__16\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_335z = vlSelf->__PVT__celloutsig_335z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__17(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__17\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_100z = vlSelf->__PVT__celloutsig_100z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__18(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__18\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_149z = vlSelf->__PVT__celloutsig_149z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__19(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__19\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_138z = vlSelf->__PVT__celloutsig_138z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__20(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__20\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_615z = vlSelf->__PVT__celloutsig_615z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__21(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__21\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_549z = vlSelf->__PVT__celloutsig_549z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__22(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__22\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_68z = vlSelf->__PVT__celloutsig_68z;
    vlSelf->__Vdly__celloutsig_92z = vlSelf->__PVT__celloutsig_92z;
    vlSelf->__Vdly__celloutsig_189z = vlSelf->__PVT__celloutsig_189z;
    vlSelf->__Vdly__celloutsig_68z = VL_CONCAT_III(32,10,22, 
                                                   (0x3ffU 
                                                    & VL_SEL_IIII(19, vlSelf->__PVT__celloutsig_28z, 3U, 0xaU)), 
                                                   VL_CONCAT_III(22,1,21, (IData)(vlSelf->__PVT__celloutsig_57z), 
                                                                 VL_CONCAT_III(21,1,20, (IData)(vlSelf->__PVT__celloutsig_1z), vlSelf->__PVT__celloutsig_65z)));
    VL_ASSIGNSEL_II(22,21,1U, vlSelf->__Vdly__celloutsig_92z, 
                    VL_CONCAT_III(21,14,7, (0x3fffU 
                                            & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 8U, 0xeU)), 
                                  VL_CONCAT_III(7,4,3, 
                                                (0xfU 
                                                 & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x14U, 4U)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 1U, 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_92z, 
                    (VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 2U) 
                     & (IData)(vlSelf->__PVT__celloutsig_18z)));
    vlSelf->__Vdly__celloutsig_189z = VL_CONCAT_III(28,5,23, 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(23, vlSelf->__PVT__celloutsig_142z, 4U, 5U)), 
                                                    VL_CONCAT_III(23,4,19, (IData)(vlSelf->__PVT__celloutsig_6z), 
                                                                  VL_CONCAT_III(19,1,18, (IData)(vlSelf->__PVT__celloutsig_90z), 
                                                                                VL_CONCAT_III(18,2,16, (IData)(vlSelf->__PVT__celloutsig_50z), 
                                                                                VL_CONCAT_III(16,1,15, (IData)(vlSelf->__PVT__celloutsig_87z), (IData)(vlSelf->__PVT__celloutsig_8z))))));
    vlSelf->__PVT__celloutsig_68z = vlSelf->__Vdly__celloutsig_68z;
    vlSelf->__PVT__celloutsig_92z = vlSelf->__Vdly__celloutsig_92z;
    vlSelf->__PVT__celloutsig_189z = vlSelf->__Vdly__celloutsig_189z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__23(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__23\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_124z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_124z, vlSelf->__PVT__celloutsig_89z);
        }
    } else {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_124z);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 0U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__24(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__24\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_124z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_124z, 
                            (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_34z, 0x11U)));
        }
    } else {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_124z);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 1U)));
        }
    } else {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__25(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__25\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_209z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_209z, 
                            (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 2U)));
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_209z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__26(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__26\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_209z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_209z, 
                            (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 3U)));
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_209z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__27(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__27\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_52z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_52z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_52z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x10U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_615z, vlSelf->__PVT__celloutsig_572z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__28(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__28\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_52z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_52z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_52z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x11U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 8U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__29(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__29\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_52z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_52z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_52z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x12U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 9U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__30(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__30\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_52z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_52z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_52z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x13U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0xaU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__31(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__31\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_52z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_52z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_52z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x14U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0xbU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__32(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__32\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_52z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_52z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_52z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x15U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0xcU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__33(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__33\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_52z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_52z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_52z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x16U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0xdU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__34(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__34\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_52z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_52z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_52z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x17U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0xeU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__35(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__35\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_52z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_52z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_52z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x18U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0xfU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__36(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__36\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_52z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_52z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_52z, 
                        (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x19U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0x10U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__37(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__37\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_31z = vlSelf->__PVT__celloutsig_31z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__38(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__38\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_120z = vlSelf->__PVT__celloutsig_120z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__39(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__39\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x4fU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xfU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 9U)));
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0xeU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__40(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__40\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IWII(96, vlSelf->in_data, 0x50U)));
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x10U)));
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0xaU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__41(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__41\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 0U)));
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 4U)));
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 0U)));
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 3U)));
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__42(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__42\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 1U)));
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 5U)));
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 1U)));
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 4U)));
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__43(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__43\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 2U)));
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 6U)));
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 2U)));
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 5U)));
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__44(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__44\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 3U)));
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 7U)));
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 3U)));
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 6U)));
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__45(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__45\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 4U)));
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 8U)));
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 4U)));
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 7U)));
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__46(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__46\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 5U)));
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 9U)));
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 5U)));
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 8U)));
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__47(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__47\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 6U)));
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xaU)));
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 6U)));
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 9U)));
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__48(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__48\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 7U)));
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xbU)));
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_110z), 7U)));
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0xaU)));
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__49(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__49\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 8U)));
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xcU)));
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 6U)));
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0xbU)));
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__50(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__50\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 9U)));
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xdU)));
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 7U)));
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0xcU)));
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__51(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__51\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_78z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_78z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 0xaU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_78z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xeU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 8U)));
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_31z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_31z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0xdU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_31z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__52(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__52\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 5U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__celloutsig_6z), 0U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 1U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__53(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__53\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 6U)));
            }
        } else {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__celloutsig_6z), 1U)));
            }
        } else {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 2U)));
            }
        } else {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__54(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__54\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 7U)));
            }
        } else {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__celloutsig_6z), 2U)));
            }
        } else {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 3U)));
            }
        } else {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__55(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__55\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 8U)));
            }
        } else {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__celloutsig_6z), 3U)));
            }
        } else {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 4U)));
            }
        } else {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__56(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__56\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 9U)));
            }
        } else {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_71z), 2U)));
            }
        } else {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 5U)));
            }
        } else {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__57(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__57\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0xaU)));
            }
        } else {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_71z), 3U)));
            }
        } else {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 6U)));
            }
        } else {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__58(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__58\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0xbU)));
            }
        } else {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_71z), 4U)));
            }
        } else {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 7U)));
            }
        } else {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__59(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__59\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0xcU)));
            }
        } else {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_71z), 5U)));
            }
        } else {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 8U)));
            }
        } else {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__60(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__60\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0xdU)));
            }
        } else {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_71z), 6U)));
            }
        } else {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 9U)));
            }
        } else {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__61(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__61\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0xeU)));
            }
        } else {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_71z), 7U)));
            }
        } else {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xaU)));
            }
        } else {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__62(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__62\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0xfU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_71z), 8U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xbU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__63(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__63\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0x10U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_95z, 
                                (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_71z), 9U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_95z);
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_95z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xcU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__64(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__64\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0x11U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xdU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__65(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__65\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0x12U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xeU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__66(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__66\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0x13U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_149z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xfU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_149z);
        }
    } else {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_149z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__67(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__67\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0x14U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__68(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__68\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0x15U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__69(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__69\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0x16U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__70(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__70\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_204z, 
                                (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_83z, 0x17U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_204z);
        }
    } else {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_204z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__71(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__71\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__72(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__72\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__73(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__73\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__74(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__74\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__75(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__75\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__76(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__76\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__77(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__77\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__78(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__78\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__79(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__79\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__80(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__80\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__81(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__81\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__82(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__82\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__83(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__83\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__84(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__84\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
            VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__85(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__85\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
            VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__86(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__86\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
            VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_32z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__87(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__87\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_32z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_32z, vlSelf->__PVT__celloutsig_1z);
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_32z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__88(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__88\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 1U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_120z, vlSelf->__PVT__celloutsig_119z);
            }
        } else {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__89(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__89\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 2U)));
            }
        } else {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 4U)));
            }
        } else {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__90(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__90\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 3U)));
            }
        } else {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 5U)));
            }
        } else {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__91(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__91\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x14U)));
            }
        } else {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 6U)));
            }
        } else {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__92(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__92\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x15U)));
            }
        } else {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 7U)));
            }
        } else {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__93(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__93\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x16U)));
            }
        } else {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 8U)));
            }
        } else {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__94(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__94\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x17U)));
            }
        } else {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 9U)));
            }
        } else {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__95(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__95\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 8U)));
            }
        } else {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xaU)));
            }
        } else {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__96(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__96\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 9U)));
            }
        } else {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xbU)));
            }
        } else {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__97(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__97\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0xaU)));
            }
        } else {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xcU)));
            }
        } else {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__98(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__98\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0xbU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xdU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__99(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__99\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0xcU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xeU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__100(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__100\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0xdU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0xfU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__101(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__101\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0xeU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_120z, 
                                (1U & VL_BITSEL_IIII(18, vlSelf->__PVT__celloutsig_76z, 0x10U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_120z);
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_120z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__102(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__102\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0xfU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__103(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__103\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x10U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__104(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__104\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x11U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__105(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__105\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x12U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__106(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__106\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x13U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__107(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__107\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x93U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x73U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x14U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x13U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__108(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__108\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x94U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x74U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x15U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x14U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__109(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__109\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x95U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x75U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_45z, 
                                (1U & VL_BITSEL_IIII(24, vlSelf->__PVT__celloutsig_38z, 0x16U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x15U, vlSelf->__Vdly__celloutsig_45z);
        }
    } else {
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_45z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__110(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__110\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x11U)));
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0xbU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__111(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__111\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
            VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x12U)));
        }
    } else {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
            VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_138z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_138z, 
                            (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0xcU)));
        }
    } else {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_138z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__112(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__112\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
            VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x13U)));
        }
    } else {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__113(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__113\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
            VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x14U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__114(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__114\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
            VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x15U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__115(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__115\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
            VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x16U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__116(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__116\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x93U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x73U))) {
            VL_ASSIGNBIT_IO(0x13U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x17U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__117(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__117\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x94U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x74U))) {
            VL_ASSIGNBIT_IO(0x14U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x18U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__118(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__118\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x95U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x75U))) {
            VL_ASSIGNBIT_IO(0x15U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x19U)));
        }
    } else {
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__119(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__119\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x96U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x76U))) {
            VL_ASSIGNBIT_IO(0x16U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x1aU)));
        }
    } else {
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__120(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__120\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x97U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x77U))) {
            VL_ASSIGNBIT_IO(0x17U, vlSelf->__Vdly__celloutsig_42z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x17U, vlSelf->__Vdly__celloutsig_42z, 
                            (1U & VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0x1bU)));
        }
    } else {
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vdly__celloutsig_42z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__121(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__121\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_230z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_230z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_230z, vlSelf->__PVT__celloutsig_14z);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_335z, vlSelf->__PVT__celloutsig_13z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__122(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__122\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_230z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_230z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_230z, vlSelf->__PVT__celloutsig_14z);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 7U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__123(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__123\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_230z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_230z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_230z, 
                        (1U & VL_BITSEL_IIII(14, (IData)(vlSelf->__PVT__celloutsig_22z), 2U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 8U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__124(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__124\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_230z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_230z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_230z, 
                        (1U & VL_BITSEL_IIII(14, (IData)(vlSelf->__PVT__celloutsig_22z), 3U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 9U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__125(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__125\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_230z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_230z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_230z, 
                        (1U & VL_BITSEL_IIII(14, (IData)(vlSelf->__PVT__celloutsig_22z), 4U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 0xaU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__126(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__126\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_230z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_230z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_230z, 
                        (1U & VL_BITSEL_IIII(14, (IData)(vlSelf->__PVT__celloutsig_22z), 5U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 0xbU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__127(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__127\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_230z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_230z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_230z, 
                        (1U & VL_BITSEL_IIII(14, (IData)(vlSelf->__PVT__celloutsig_22z), 6U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 0xcU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__128(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__128\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_230z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_230z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_230z, 
                        (1U & VL_BITSEL_IIII(14, (IData)(vlSelf->__PVT__celloutsig_22z), 7U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 0xdU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__129(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__129\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_230z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_230z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_230z, 
                        (1U & VL_BITSEL_IIII(14, (IData)(vlSelf->__PVT__celloutsig_22z), 8U)));
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 0xeU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__130(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__130\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_140z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_140z, vlSelf->__PVT__celloutsig_116z);
        }
    } else {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_140z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__131(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__131\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_140z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_140z, vlSelf->__PVT__celloutsig_122z);
        }
    } else {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_140z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__132(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__132\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_140z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_140z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_63z), 8U)));
        }
    } else {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_140z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__133(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__133\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_140z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_140z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_63z), 9U)));
        }
    } else {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_140z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__134(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__134\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_140z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_140z, 
                            (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_63z), 0xaU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_140z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__135(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__135\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_140z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_140z, 
                            (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_44z), 0U)));
        }
    } else {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_140z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__136(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__136\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_140z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_140z, 
                            (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_44z), 1U)));
        }
    } else {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_140z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__137(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__137\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_140z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_140z, 
                            (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_44z), 0U)));
        }
    } else {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_140z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__138(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__138\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_140z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_140z, 
                            (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_44z), 1U)));
        }
    } else {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_140z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__139(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__139\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_140z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_140z, 
                            (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_41z), 0U)));
        }
    } else {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_140z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__140(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__140\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_140z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_140z, 
                            (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_41z), 1U)));
        }
    } else {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_140z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__141(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__141\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_79z, vlSelf->__PVT__celloutsig_58z);
        }
    } else {
        VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__142(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__142\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_79z, vlSelf->__PVT__celloutsig_51z);
        }
    } else {
        VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__143(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__143\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_79z, vlSelf->__PVT__celloutsig_26z);
        }
    } else {
        VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__144(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__144\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 2U)));
        }
    } else {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__145(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__145\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 3U)));
        }
    } else {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__146(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__146\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 4U)));
        }
    } else {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__147(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__147\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 5U)));
        }
    } else {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__148(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__148\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 6U)));
        }
    } else {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__149(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__149\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 7U)));
        }
    } else {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__150(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__150\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 8U)));
        }
    } else {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__151(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__151\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__celloutsig_11z), 9U)));
        }
    } else {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__152(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__152\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 0U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__153(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__153\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 1U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__154(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__154\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 2U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__155(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__155\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 3U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__156(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__156\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 4U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__157(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__157\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 5U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__158(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__158\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x93U))) {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x73U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 6U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x13U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__159(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__159\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x94U))) {
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x74U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 7U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x14U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__160(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__160\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x95U))) {
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_79z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x75U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_79z, 
                            (1U & VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_8z), 8U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x15U, vlSelf->__Vdly__celloutsig_79z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__161(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__161\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 0xfU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__162(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__162\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 0x10U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__163(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__163\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 0x11U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__164(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__164\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_335z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_335z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_335z, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_290z, 0x12U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__165(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__165\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_74z), 0U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__166(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__166\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_74z), 1U)));
            }
        } else {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__167(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__167\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_74z), 2U)));
            }
        } else {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__168(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__168\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_74z), 3U)));
            }
        } else {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__169(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__169\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_74z), 4U)));
            }
        } else {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__170(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__170\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_74z), 5U)));
            }
        } else {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__171(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__171\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_74z), 6U)));
            }
        } else {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__172(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__172\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_74z), 7U)));
            }
        } else {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__173(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__173\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 9U)));
            }
        } else {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__174(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__174\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xaU)));
            }
        } else {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__175(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__175\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xbU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__176(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__176\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xcU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__177(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__177\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xdU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__178(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__178\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xeU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__179(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__179\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0xfU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__180(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__180\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0x10U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__181(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__181\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0x11U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__182(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__182\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0x12U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__183(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__183\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0x13U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__184(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__184\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x93U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x73U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0x14U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x13U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__185(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__185\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x94U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x74U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0x15U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x14U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__186(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__186\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x95U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x75U))) {
            if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
                VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_100z, 
                                (1U & VL_BITSEL_IIII(23, vlSelf->__PVT__celloutsig_7z, 0x16U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x15U, vlSelf->__Vdly__celloutsig_100z);
        }
    } else {
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_100z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__187(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__187\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0x11U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__188(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__188\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0x12U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__189(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__189\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0x13U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__190(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__190\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0x14U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__191(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__191\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0x15U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__192(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__192\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0x16U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__193(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__193\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0x17U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__194(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__194\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_615z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_615z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_615z, 
                        (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_160z, 0x18U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__195(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__195\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_549z, vlSelf->__PVT__celloutsig_445z);
        }
    } else {
        VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__196(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__196\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(20, vlSelf->__PVT__celloutsig_248z, 0x10U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__197(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__197\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(20, vlSelf->__PVT__celloutsig_248z, 0x11U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__198(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__198\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x93U))) {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x73U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(20, vlSelf->__PVT__celloutsig_248z, 0x12U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0x13U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__199(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__199\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 0U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__200(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__200\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 1U)));
        }
    } else {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__201(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__201\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 2U)));
        }
    } else {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__202(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__202\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 3U)));
        }
    } else {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__203(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__203\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 4U)));
        }
    } else {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__204(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__204\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 5U)));
        }
    } else {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__205(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__205\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 6U)));
        }
    } else {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__206(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__206\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 7U)));
        }
    } else {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__207(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__207\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 8U)));
        }
    } else {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__208(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__208\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 9U)));
        }
    } else {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__209(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__209\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 0xaU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__210(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__210\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 0xbU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__211(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__211\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 0xcU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__212(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__212\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 0xdU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__213(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__213\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 0xeU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__214(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__214\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_549z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_549z, 
                            (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__celloutsig_498z), 0xfU)));
        }
    } else {
        VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_549z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__215(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__215\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_65z = vlSelf->__PVT__celloutsig_65z;
    vlSelf->__Vdly__celloutsig_28z = vlSelf->__PVT__celloutsig_28z;
    vlSelf->__Vdly__celloutsig_50z = vlSelf->__PVT__celloutsig_50z;
    vlSelf->__Vdly__celloutsig_65z = VL_CONCAT_III(20,10,10, 
                                                   (0x3ffU 
                                                    & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_34z, 0U, 0xaU)), 
                                                   VL_CONCAT_III(10,8,2, (IData)(vlSelf->__PVT__celloutsig_55z), 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_14z), (IData)(vlSelf->__PVT__celloutsig_35z))));
    vlSelf->__Vdly__celloutsig_28z = VL_CONCAT_III(19,18,1, 
                                                   (0x3ffffU 
                                                    & VL_SEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 8U, 0x12U)), (IData)(vlSelf->__PVT__celloutsig_23z));
    vlSelf->__Vdly__celloutsig_50z = (3U & VL_SEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0x12U, 2U));
    vlSelf->__PVT__celloutsig_65z = vlSelf->__Vdly__celloutsig_65z;
    vlSelf->__PVT__celloutsig_28z = vlSelf->__Vdly__celloutsig_28z;
    vlSelf->__PVT__celloutsig_50z = vlSelf->__Vdly__celloutsig_50z;
    vlSelf->__PVT__celloutsig_62z = (1U & (VL_BITSEL_IWII(96, vlSelf->in_data, 0x1aU) 
                                           | (~ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__celloutsig_50z), 1U))));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__216(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__216\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_142z = vlSelf->__PVT__celloutsig_142z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__217(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__217\n"); );
    // Body
    vlSelf->__PVT__celloutsig_124z = vlSelf->__Vdly__celloutsig_124z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__218(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__218\n"); );
    // Body
    vlSelf->__PVT__celloutsig_209z = vlSelf->__Vdly__celloutsig_209z;
    vlSelf->__Vdly__celloutsig_41z = vlSelf->__PVT__celloutsig_41z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__219(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__219\n"); );
    // Body
    vlSelf->__PVT__celloutsig_52z = vlSelf->__Vdly__celloutsig_52z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__220(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__220\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_110z = vlSelf->__PVT__celloutsig_110z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__221(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__221\n"); );
    // Body
    vlSelf->__PVT__celloutsig_78z = vlSelf->__Vdly__celloutsig_78z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__222(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__222\n"); );
    // Body
    vlSelf->__PVT__celloutsig_31z = vlSelf->__Vdly__celloutsig_31z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__223(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__223\n"); );
    // Body
    vlSelf->__PVT__celloutsig_95z = vlSelf->__Vdly__celloutsig_95z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__224(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__224\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_71z = vlSelf->__PVT__celloutsig_71z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__225(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__225\n"); );
    // Body
    vlSelf->__PVT__celloutsig_149z = vlSelf->__Vdly__celloutsig_149z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__226(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__226\n"); );
    // Body
    vlSelf->__PVT__celloutsig_204z = vlSelf->__Vdly__celloutsig_204z;
    vlSelf->__PVT__celloutsig_402z = (1U & (~ VL_BITSEL_IIII(19, vlSelf->__PVT__celloutsig_204z, 4U)));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__227(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__227\n"); );
    // Body
    vlSelf->__PVT__celloutsig_32z = vlSelf->__Vdly__celloutsig_32z;
    vlSelf->__PVT__celloutsig_84z = VL_REDAND_II(2, 
                                                 (3U 
                                                  & VL_SEL_IIII(17, vlSelf->__PVT__celloutsig_32z, 0xbU, 2U)));
    vlSelf->__PVT__celloutsig_64z = (1U & (~ (VL_BITSEL_IIII(29, vlSelf->__PVT__celloutsig_4z, 0xdU) 
                                              & VL_BITSEL_IIII(17, vlSelf->__PVT__celloutsig_32z, 5U))));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__228(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__228\n"); );
    // Body
    vlSelf->__PVT__celloutsig_120z = vlSelf->__Vdly__celloutsig_120z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__229(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__229\n"); );
    // Body
    vlSelf->__PVT__celloutsig_45z = vlSelf->__Vdly__celloutsig_45z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__230(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__230\n"); );
    // Body
    vlSelf->__PVT__celloutsig_138z = vlSelf->__Vdly__celloutsig_138z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__231(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__231\n"); );
    // Body
    vlSelf->__PVT__celloutsig_42z = vlSelf->__Vdly__celloutsig_42z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__232(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__232\n"); );
    // Body
    vlSelf->__PVT__celloutsig_230z = vlSelf->__Vdly__celloutsig_230z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__233(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__233\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_22z = vlSelf->__PVT__celloutsig_22z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__234(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__234\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_63z = vlSelf->__PVT__celloutsig_63z;
    vlSelf->__Vdly__celloutsig_290z = vlSelf->__PVT__celloutsig_290z;
    vlSelf->__Vdly__celloutsig_160z = vlSelf->__PVT__celloutsig_160z;
    vlSelf->__Vdly__celloutsig_63z = VL_CONCAT_III(11,9,2, 
                                                   (0x1ffU 
                                                    & VL_SEL_IIII(21, vlSelf->__PVT__celloutsig_20z, 0U, 9U)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__celloutsig_23z), (IData)(vlSelf->__PVT__celloutsig_21z)));
    vlSelf->__Vdly__celloutsig_290z = VL_CONCAT_III(32,3,29, 
                                                    (7U 
                                                     & VL_SEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_16z), 8U, 3U)), 
                                                    VL_CONCAT_III(29,1,28, (IData)(vlSelf->__PVT__celloutsig_211z), 
                                                                  VL_CONCAT_III(28,19,9, vlSelf->__PVT__celloutsig_10z, 
                                                                                VL_CONCAT_III(9,1,8, (IData)(vlSelf->__PVT__celloutsig_232z), (IData)(vlSelf->__PVT__celloutsig_55z)))));
    vlSelf->__Vdly__celloutsig_160z = VL_CONCAT_III(31,5,26, 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(22, vlSelf->__PVT__celloutsig_30z, 2U, 5U)), 
                                                    VL_CONCAT_III(26,8,18, (IData)(vlSelf->__PVT__celloutsig_88z), 
                                                                  VL_CONCAT_III(18,10,8, (IData)(vlSelf->__PVT__celloutsig_11z), 
                                                                                VL_CONCAT_III(8,7,1, (IData)(vlSelf->__PVT__celloutsig_27z), (IData)(vlSelf->__PVT__celloutsig_135z)))));
    vlSelf->__PVT__celloutsig_63z = vlSelf->__Vdly__celloutsig_63z;
    vlSelf->__PVT__celloutsig_290z = vlSelf->__Vdly__celloutsig_290z;
    vlSelf->__PVT__celloutsig_160z = vlSelf->__Vdly__celloutsig_160z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__235(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__235\n"); );
    // Body
    vlSelf->__PVT__celloutsig_140z = vlSelf->__Vdly__celloutsig_140z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__236(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__236\n"); );
    // Body
    vlSelf->__PVT__celloutsig_79z = vlSelf->__Vdly__celloutsig_79z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__237(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__237\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_8z = vlSelf->__PVT__celloutsig_8z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__238(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__238\n"); );
    // Body
    vlSelf->__PVT__celloutsig_335z = vlSelf->__Vdly__celloutsig_335z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__239(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__239\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_74z = vlSelf->__PVT__celloutsig_74z;
    vlSelf->__Vdly__celloutsig_74z = (0xffU & VL_SEL_IIII(24, vlSelf->__PVT__celloutsig_66z, 0xcU, 8U));
    vlSelf->__PVT__celloutsig_74z = vlSelf->__Vdly__celloutsig_74z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__240(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__240\n"); );
    // Body
    vlSelf->__PVT__celloutsig_100z = vlSelf->__Vdly__celloutsig_100z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__241(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__241\n"); );
    // Body
    vlSelf->__PVT__celloutsig_615z = vlSelf->__Vdly__celloutsig_615z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__242(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__242\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_248z = vlSelf->__PVT__celloutsig_248z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__243(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__243\n"); );
    // Body
    vlSelf->__PVT__celloutsig_549z = vlSelf->__Vdly__celloutsig_549z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__244(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__244\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_498z = vlSelf->__PVT__celloutsig_498z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__245(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__245\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 7U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__246(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__246\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 8U)));
            }
        } else {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__247(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__247\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 9U)));
            }
        } else {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__248(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__248\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0xaU)));
            }
        } else {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__249(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__249\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0xbU)));
            }
        } else {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__250(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__250\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0xcU)));
            }
        } else {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__251(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__251\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0xdU)));
            }
        } else {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__252(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__252\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0xeU)));
            }
        } else {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__253(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__253\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0xfU)));
            }
        } else {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__254(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__254\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x10U)));
            }
        } else {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__255(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__255\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x11U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__256(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__256\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x12U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__257(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__257\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x13U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__258(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__258\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x14U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__259(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__259\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x15U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__260(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__260\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x16U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__261(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__261\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x17U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__262(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__262\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x18U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__263(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__263\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x19U)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__264(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__264\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x93U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x73U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x1aU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x13U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__265(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__265\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x94U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x74U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x1bU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x14U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__266(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__266\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x95U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x75U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x1cU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x15U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__267(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__267\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x96U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x76U))) {
            if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
                VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_142z, 
                                (1U & VL_BITSEL_IIII(31, vlSelf->__PVT__celloutsig_114z, 0x1dU)));
            }
        } else {
            VL_ASSIGNBIT_IO(0x16U, vlSelf->__Vdly__celloutsig_142z);
        }
    } else {
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vdly__celloutsig_142z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__268(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__268\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_41z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_41z, 
                            (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 0x17U)));
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_41z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_498z, vlSelf->__PVT__celloutsig_497z);
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__269(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__269\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_41z);
        } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_41z, 
                            (1U & VL_BITSEL_IIII(26, vlSelf->__PVT__celloutsig_17z, 0x18U)));
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_41z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_498z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_498z, vlSelf->__PVT__celloutsig_336z);
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_498z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__270(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__270\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_110z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_110z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_55z), 0U)));
        }
    } else {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_110z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__271(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__271\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_110z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_110z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_55z), 1U)));
        }
    } else {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_110z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__272(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__272\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_110z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_110z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_55z), 2U)));
        }
    } else {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_110z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__273(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__273\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_110z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_110z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_55z), 3U)));
        }
    } else {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_110z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__274(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__274\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_110z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_110z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_55z), 4U)));
        }
    } else {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_110z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__275(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__275\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_110z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_110z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_55z), 5U)));
        }
    } else {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_110z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__276(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__276\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_110z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_110z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_55z), 6U)));
        }
    } else {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_110z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__277(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__277\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_110z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_110z, 
                            (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__celloutsig_55z), 7U)));
        }
    } else {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_110z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__278(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__278\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_71z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_71z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_71z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 2U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__279(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__279\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_71z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_71z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_71z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 3U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__280(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__280\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_71z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_71z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_71z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 4U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__281(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__281\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_71z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_71z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_71z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 5U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__282(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__282\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_71z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_71z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_71z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 6U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__283(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__283\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_71z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_71z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_71z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 7U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__284(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__284\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_71z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_71z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_71z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 8U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__285(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__285\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_71z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_71z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_71z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 9U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__286(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__286\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_71z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_71z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_71z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 0xaU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__287(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__287\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_71z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_71z);
    } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_71z, vlSelf->__PVT__celloutsig_18z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__0\n"); );
    // Body
    vlSelf->__PVT__celloutsig_496z = (0xffffU & (~ 
                                                 VL_CONCAT_III(16,15,1, 
                                                               (0x7fffU 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__celloutsig_181z, 1U, 0xfU)), (IData)(vlSelf->__PVT__celloutsig_402z))));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__288(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__288\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
            VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__289(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__289\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
            VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__290(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__290\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
            VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__291(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__291\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
            VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__292(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__292\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
            VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__293(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__293\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
            VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__294(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__294\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
            VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__295(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__295\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
            VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__296(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__296\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
            VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__297(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__297\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__298(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__298\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
            VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__299(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__299\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
            VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__300(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__300\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
            VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__301(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__301\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
            VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_22z);
        } else if ((1U & (~ VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U)))) {
            VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_22z, 0U);
        }
    } else {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_22z, 0U);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__302(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__302\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_11z = vlSelf->__PVT__celloutsig_11z;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__303(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__303\n"); );
    // Body
    vlSelf->__Vdly__celloutsig_27z = vlSelf->__PVT__celloutsig_27z;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__1(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_comb__TOP__top__1\n"); );
    // Body
    vlSelf->__PVT__celloutsig_196z = (1U & ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__celloutsig_68z, 0xdU))
                                             ? VL_BITSEL_IIII(15, (IData)(vlSelf->__PVT__celloutsig_138z), 3U)
                                             : VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__celloutsig_140z), 9U)));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__304(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__304\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x80U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x60U))) {
        VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 0U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__305(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__305\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x81U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x61U))) {
        VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 1U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__306(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__306\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x82U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x62U))) {
        VL_ASSIGNBIT_IO(2U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 2U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__307(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__307\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x83U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x63U))) {
        VL_ASSIGNBIT_IO(3U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(3U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 3U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__308(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__308\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x84U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x64U))) {
        VL_ASSIGNBIT_IO(4U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(4U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 4U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__309(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__309\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x85U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x65U))) {
        VL_ASSIGNBIT_IO(5U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(5U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 5U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__310(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__310\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x86U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x66U))) {
        VL_ASSIGNBIT_IO(6U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(6U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 6U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__311(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__311\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x87U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x67U))) {
        VL_ASSIGNBIT_IO(7U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(7U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 7U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__312(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__312\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x88U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x68U))) {
        VL_ASSIGNBIT_IO(8U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(8U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 8U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__313(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__313\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x89U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x69U))) {
        VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(9U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 9U)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__314(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__314\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8aU))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6aU))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 0xaU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__315(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__315\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8bU))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6bU))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__celloutsig_46z), 0xbU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__316(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__316\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8cU))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6cU))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vdly__celloutsig_248z, vlSelf->__PVT__celloutsig_14z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__317(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__317\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8dU))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6dU))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vdly__celloutsig_248z, vlSelf->__PVT__celloutsig_102z);
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__318(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__318\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_8z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_8z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_8z, 0U);
    }
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8eU))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6eU))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(22, vlSelf->__PVT__celloutsig_30z, 0xaU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__319(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__319\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x8fU))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x6fU))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(22, vlSelf->__PVT__celloutsig_30z, 0xbU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__320(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__320\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x90U))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x70U))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(22, vlSelf->__PVT__celloutsig_30z, 0xcU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__321(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__321\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x91U))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x71U))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(22, vlSelf->__PVT__celloutsig_30z, 0xdU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__322(Vtop_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_top___nba_sequent__TOP__top__322\n"); );
    // Body
    if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x92U))) {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_248z, 0U);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x72U))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelf->__Vdly__celloutsig_248z);
    } else if ((1U & VL_BITSEL_IWII(160, vlSelf->clkin_data, 0x40U))) {
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vdly__celloutsig_248z, 
                        (1U & VL_BITSEL_IIII(22, vlSelf->__PVT__celloutsig_30z, 0xeU)));
    }
}
