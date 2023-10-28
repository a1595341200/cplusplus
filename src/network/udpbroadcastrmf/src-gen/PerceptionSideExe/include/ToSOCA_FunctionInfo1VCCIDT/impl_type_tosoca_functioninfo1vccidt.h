/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2023 by Vector Informatik GmbH. All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  PerceptionSideExe/include/ToSOCA_FunctionInfo1VCCIDT/impl_type_tosoca_functioninfo1vccidt.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#ifndef PERCEPTIONSIDEEXE_INCLUDE_TOSOCA_FUNCTIONINFO1VCCIDT_IMPL_TYPE_TOSOCA_FUNCTIONINFO1VCCIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_TOSOCA_FUNCTIONINFO1VCCIDT_IMPL_TYPE_TOSOCA_FUNCTIONINFO1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cmath>
#include <cstdint>
#include <limits>
#include <map>
#include <string>
#include <vector>
#include "AccSts1IDT/impl_type_accsts1idt.h"
#include "AccTarSeln1RecIDT/impl_type_acctarseln1recidt.h"
#include "ActvnAvl2VccIDT/impl_type_actvnavl2vccidt.h"
#include "AsyALatSts1VccIDT/impl_type_asyalatsts1vccidt.h"
#include "AsyAutDrvCtrlTyp1VccIDT/impl_type_asyautdrvctrltyp1vccidt.h"
#include "AsyAutDrvgAvl1VccIDT/impl_type_asyautdrvgavl1vccidt.h"
#include "AsyIndcrDispSts1VccIDT/impl_type_asyindcrdispsts1vccidt.h"
#include "AvlStsForLongAutDrv4VccIDT/impl_type_avlstsforlongautdrv4vccidt.h"
#include "Bool1VccIDT/impl_type_bool1vccidt.h"
#include "CamSts1IDT/impl_type_camsts1idt.h"
#include "CllsnFwdWarnReq1VccIDT/impl_type_cllsnfwdwarnreq1vccidt.h"
#include "DispTSRInfoForLgtCtrl1VccIDT/impl_type_disptsrinfoforlgtctrl1vccidt.h"
#include "FctaOn1VccIDT/impl_type_fctaon1vccidt.h"
#include "HWAMode1VccIDT/impl_type_hwamode1vccidt.h"
#include "IntvAndWarnModForLaneKeepAidSts1VccIDT/impl_type_intvandwarnmodforlanekeepaidsts1vccidt.h"
#include "LanguageRegion1VccIDT/impl_type_languageregion1vccidt.h"
#include "LcmaCtraOn1VccIDT/impl_type_lcmactraon1vccidt.h"
#include "LcmaIndcn1VccIDT/impl_type_lcmaindcn1vccidt.h"
#include "LppLaneChgStsIDT/impl_type_lpplanechgstsidt.h"
#include "LvlWarn1VccIDT/impl_type_lvlwarn1vccidt.h"
#include "NgpSts1IDT/impl_type_ngpsts1idt.h"
#include "NoYes1VccIDT/impl_type_noyes1vccidt.h"
#include "OnOff1VccIDT/impl_type_onoff1vccidt.h"
#include "TiGapSetForLgtCtrl1VccIDT/impl_type_tigapsetforlgtctrl1vccidt.h"
#include "TjaStsIDT/impl_type_tjastsidt.h"
#include "TjaTrailBusIDT/impl_type_tjatrailbusidt.h"
#include "VehStopReq1VccIDT/impl_type_vehstopreq1vccidt.h"
#include "YesNo2VccIDT/impl_type_yesno2vccidt.h"
#include "YesNoRes1VccIDT/impl_type_yesnores1vccidt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "singleIDT/impl_type_singleidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace ToSOCA_FunctionInfo1VCCIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ToSOCA_FunctionInfo1VCCIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ToSOCA_FunctionInfo1VCCIDT
 */
struct ToSOCA_FunctionInfo1VCCIDT {
  using CamSts1_generated_type = CamSts1IDT::CamSts1IDT;
  using LppLaneChgSts_generated_type = LppLaneChgStsIDT::LppLaneChgStsIDT;
  using TrfcLiAttentionEna_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using TrfcSignInfoEna_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using VehInLaneChg_generated_type = Bool1VccIDT::Bool1VccIDT;
  using DynCalPrmForAxleDstReToVehFrnt_generated_type = float32IDT::float32IDT;
  using DynCalPrmForCamLatDistToVehFrnt_generated_type = float32IDT::float32IDT;
  using DynCalPrmForCamLongDistToVehFrnt_generated_type = float32IDT::float32IDT;
  using DynCalPrmForVehTyp_generated_type = uint8IDT::uint8IDT;
  using HWASts_generated_type = TjaStsIDT::TjaStsIDT;
  using NgpSts1_generated_type = NgpSts1IDT::NgpSts1IDT;
  using TlaFaultSts_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using TsiFaultSts_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using AsyALgtIndcr_generated_type = AsyIndcrDispSts1VccIDT::AsyIndcrDispSts1VccIDT;
  using Vinmatch_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using  ACCSts_generated_type = AccSts1IDT::AccSts1IDT;
  using TjaPath_generated_type = TjaTrailBusIDT::TjaTrailBusIDT;
  using ACCStopRequest_generated_type = VehStopReq1VccIDT::VehStopReq1VccIDT;
  using AccTarSeln_generated_type = AccTarSeln1RecIDT::AccTarSeln1RecIDT;
  using DynCalPrmForBicycleMdlAxleDistFrnt_generated_type = singleIDT::singleIDT;
  using DynCalPrmForVehM_generated_type = singleIDT::singleIDT;
  using DynCalPrmForVehWhlBas_generated_type = singleIDT::singleIDT;
  using DynCalPrmForVehWidth_generated_type = singleIDT::singleIDT;
  using DynCalPrmForVehLen_generated_type = singleIDT::singleIDT;
  using LanguageRegion_generated_type = LanguageRegion1VccIDT::LanguageRegion1VccIDT;
  using SetSpdForCrsCtrlFct_generated_type = singleIDT::singleIDT;
  using HWAMode_generated_type = HWAMode1VccIDT::HWAMode1VccIDT;
  using AsyAutDrvCtrlTyp_generated_type = AsyAutDrvCtrlTyp1VccIDT::AsyAutDrvCtrlTyp1VccIDT;
  using AsyAutDrvgAvl_generated_type = AsyAutDrvgAvl1VccIDT::AsyAutDrvgAvl1VccIDT;
  using AsyEmgyManoeuvreAidSts_generated_type = FctaOn1VccIDT::FctaOn1VccIDT;
  using AsyLaneKeepAidSts_generated_type = AsyALatSts1VccIDT::AsyALatSts1VccIDT;
  using AsyLgtCtrlTakeOverReq_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using AsyStandStillReqForCmft_generated_type = VehStopReq1VccIDT::VehStopReq1VccIDT;
  using AsySteerApplyRqrd_generated_type = LvlWarn1VccIDT::LvlWarn1VccIDT;
  using AvlStsForLongAutDrv_generated_type = AvlStsForLongAutDrv4VccIDT::AvlStsForLongAutDrv4VccIDT;
  using CllsnFwdWarn_generated_type = CllsnFwdWarnReq1VccIDT::CllsnFwdWarnReq1VccIDT;
  using IntvAndWarnModInfoSts_generated_type = IntvAndWarnModForLaneKeepAidSts1VccIDT::IntvAndWarnModForLaneKeepAidSts1VccIDT;
  using LaneChgAutActvSts_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using LaneKeepAidInfoSts_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using TiGapSetForLgtCtrl_generated_type = TiGapSetForLgtCtrl1VccIDT::TiGapSetForLgtCtrl1VccIDT;
  using AsySodPilotCfirm_generated_type = ActvnAvl2VccIDT::ActvnAvl2VccIDT;
  using HmiNOPCofmOfLanChag_generated_type = YesNoRes1VccIDT::YesNoRes1VccIDT;
  using DispSpdSetForLgtCtrl_generated_type = singleIDT::singleIDT;
  using DispTSIInfoForLgtCtrl_generated_type = DispTSRInfoForLgtCtrl1VccIDT::DispTSRInfoForLgtCtrl1VccIDT;
  using CllsnWarnReOn1_generated_type = LcmaCtraOn1VccIDT::LcmaCtraOn1VccIDT;
  using CllsnMtgtnOnoffSts_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using CtraOn1_generated_type = LcmaCtraOn1VccIDT::LcmaCtraOn1VccIDT;
  using DoorOpenwarnOn1_generated_type = LcmaCtraOn1VccIDT::LcmaCtraOn1VccIDT;
  using LcmaOn_generated_type = LcmaCtraOn1VccIDT::LcmaCtraOn1VccIDT;
  using LcmaAudWarn_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using CllsnWarnReIndcn_generated_type = LcmaIndcn1VccIDT::LcmaIndcn1VccIDT;
  using DoorOpenwarnLeIndcn_generated_type = LcmaIndcn1VccIDT::LcmaIndcn1VccIDT;
  using DoorOpenwarnRiIndcn_generated_type = LcmaIndcn1VccIDT::LcmaIndcn1VccIDT;

  CamSts1_generated_type CamSts1;
  LppLaneChgSts_generated_type LppLaneChgSts;
  TrfcLiAttentionEna_generated_type TrfcLiAttentionEna;
  TrfcSignInfoEna_generated_type TrfcSignInfoEna;
  VehInLaneChg_generated_type VehInLaneChg;
  DynCalPrmForAxleDstReToVehFrnt_generated_type DynCalPrmForAxleDstReToVehFrnt;
  DynCalPrmForCamLatDistToVehFrnt_generated_type DynCalPrmForCamLatDistToVehFrnt;
  DynCalPrmForCamLongDistToVehFrnt_generated_type DynCalPrmForCamLongDistToVehFrnt;
  DynCalPrmForVehTyp_generated_type DynCalPrmForVehTyp;
  HWASts_generated_type HWASts;
  NgpSts1_generated_type NgpSts1;
  TlaFaultSts_generated_type TlaFaultSts;
  TsiFaultSts_generated_type TsiFaultSts;
  AsyALgtIndcr_generated_type AsyALgtIndcr;
  Vinmatch_generated_type Vinmatch;
   ACCSts_generated_type  ACCSts;
  TjaPath_generated_type TjaPath;
  ACCStopRequest_generated_type ACCStopRequest;
  AccTarSeln_generated_type AccTarSeln;
  DynCalPrmForBicycleMdlAxleDistFrnt_generated_type DynCalPrmForBicycleMdlAxleDistFrnt;
  DynCalPrmForVehM_generated_type DynCalPrmForVehM;
  DynCalPrmForVehWhlBas_generated_type DynCalPrmForVehWhlBas;
  DynCalPrmForVehWidth_generated_type DynCalPrmForVehWidth;
  DynCalPrmForVehLen_generated_type DynCalPrmForVehLen;
  LanguageRegion_generated_type LanguageRegion;
  SetSpdForCrsCtrlFct_generated_type SetSpdForCrsCtrlFct;
  HWAMode_generated_type HWAMode;
  AsyAutDrvCtrlTyp_generated_type AsyAutDrvCtrlTyp;
  AsyAutDrvgAvl_generated_type AsyAutDrvgAvl;
  AsyEmgyManoeuvreAidSts_generated_type AsyEmgyManoeuvreAidSts;
  AsyLaneKeepAidSts_generated_type AsyLaneKeepAidSts;
  AsyLgtCtrlTakeOverReq_generated_type AsyLgtCtrlTakeOverReq;
  AsyStandStillReqForCmft_generated_type AsyStandStillReqForCmft;
  AsySteerApplyRqrd_generated_type AsySteerApplyRqrd;
  AvlStsForLongAutDrv_generated_type AvlStsForLongAutDrv;
  CllsnFwdWarn_generated_type CllsnFwdWarn;
  IntvAndWarnModInfoSts_generated_type IntvAndWarnModInfoSts;
  LaneChgAutActvSts_generated_type LaneChgAutActvSts;
  LaneKeepAidInfoSts_generated_type LaneKeepAidInfoSts;
  TiGapSetForLgtCtrl_generated_type TiGapSetForLgtCtrl;
  AsySodPilotCfirm_generated_type AsySodPilotCfirm;
  HmiNOPCofmOfLanChag_generated_type HmiNOPCofmOfLanChag;
  DispSpdSetForLgtCtrl_generated_type DispSpdSetForLgtCtrl;
  DispTSIInfoForLgtCtrl_generated_type DispTSIInfoForLgtCtrl;
  CllsnWarnReOn1_generated_type CllsnWarnReOn1;
  CllsnMtgtnOnoffSts_generated_type CllsnMtgtnOnoffSts;
  CtraOn1_generated_type CtraOn1;
  DoorOpenwarnOn1_generated_type DoorOpenwarnOn1;
  LcmaOn_generated_type LcmaOn;
  LcmaAudWarn_generated_type LcmaAudWarn;
  CllsnWarnReIndcn_generated_type CllsnWarnReIndcn;
  DoorOpenwarnLeIndcn_generated_type DoorOpenwarnLeIndcn;
  DoorOpenwarnRiIndcn_generated_type DoorOpenwarnRiIndcn;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another ToSOCA_FunctionInfo1VCCIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(ToSOCA_FunctionInfo1VCCIDT const& l,
                       ToSOCA_FunctionInfo1VCCIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.CamSts1 == r.CamSts1)
                         && (l.LppLaneChgSts == r.LppLaneChgSts)
                         && (l.TrfcLiAttentionEna == r.TrfcLiAttentionEna)
                         && (l.TrfcSignInfoEna == r.TrfcSignInfoEna)
                         && (l.VehInLaneChg == r.VehInLaneChg)
                         && compare_float(l.DynCalPrmForAxleDstReToVehFrnt, r.DynCalPrmForAxleDstReToVehFrnt)
                         && compare_float(l.DynCalPrmForCamLatDistToVehFrnt, r.DynCalPrmForCamLatDistToVehFrnt)
                         && compare_float(l.DynCalPrmForCamLongDistToVehFrnt, r.DynCalPrmForCamLongDistToVehFrnt)
                         && (l.DynCalPrmForVehTyp == r.DynCalPrmForVehTyp)
                         && (l.HWASts == r.HWASts)
                         && (l.NgpSts1 == r.NgpSts1)
                         && (l.TlaFaultSts == r.TlaFaultSts)
                         && (l.TsiFaultSts == r.TsiFaultSts)
                         && (l.AsyALgtIndcr == r.AsyALgtIndcr)
                         && (l.Vinmatch == r.Vinmatch)
                         && (l. ACCSts == r. ACCSts)
                         && (l.TjaPath == r.TjaPath)
                         && (l.ACCStopRequest == r.ACCStopRequest)
                         && (l.AccTarSeln == r.AccTarSeln)
                         && compare_float(l.DynCalPrmForBicycleMdlAxleDistFrnt, r.DynCalPrmForBicycleMdlAxleDistFrnt)
                         && compare_float(l.DynCalPrmForVehM, r.DynCalPrmForVehM)
                         && compare_float(l.DynCalPrmForVehWhlBas, r.DynCalPrmForVehWhlBas)
                         && compare_float(l.DynCalPrmForVehWidth, r.DynCalPrmForVehWidth)
                         && compare_float(l.DynCalPrmForVehLen, r.DynCalPrmForVehLen)
                         && (l.LanguageRegion == r.LanguageRegion)
                         && compare_float(l.SetSpdForCrsCtrlFct, r.SetSpdForCrsCtrlFct)
                         && (l.HWAMode == r.HWAMode)
                         && (l.AsyAutDrvCtrlTyp == r.AsyAutDrvCtrlTyp)
                         && (l.AsyAutDrvgAvl == r.AsyAutDrvgAvl)
                         && (l.AsyEmgyManoeuvreAidSts == r.AsyEmgyManoeuvreAidSts)
                         && (l.AsyLaneKeepAidSts == r.AsyLaneKeepAidSts)
                         && (l.AsyLgtCtrlTakeOverReq == r.AsyLgtCtrlTakeOverReq)
                         && (l.AsyStandStillReqForCmft == r.AsyStandStillReqForCmft)
                         && (l.AsySteerApplyRqrd == r.AsySteerApplyRqrd)
                         && (l.AvlStsForLongAutDrv == r.AvlStsForLongAutDrv)
                         && (l.CllsnFwdWarn == r.CllsnFwdWarn)
                         && (l.IntvAndWarnModInfoSts == r.IntvAndWarnModInfoSts)
                         && (l.LaneChgAutActvSts == r.LaneChgAutActvSts)
                         && (l.LaneKeepAidInfoSts == r.LaneKeepAidInfoSts)
                         && (l.TiGapSetForLgtCtrl == r.TiGapSetForLgtCtrl)
                         && (l.AsySodPilotCfirm == r.AsySodPilotCfirm)
                         && (l.HmiNOPCofmOfLanChag == r.HmiNOPCofmOfLanChag)
                         && compare_float(l.DispSpdSetForLgtCtrl, r.DispSpdSetForLgtCtrl)
                         && (l.DispTSIInfoForLgtCtrl == r.DispTSIInfoForLgtCtrl)
                         && (l.CllsnWarnReOn1 == r.CllsnWarnReOn1)
                         && (l.CllsnMtgtnOnoffSts == r.CllsnMtgtnOnoffSts)
                         && (l.CtraOn1 == r.CtraOn1)
                         && (l.DoorOpenwarnOn1 == r.DoorOpenwarnOn1)
                         && (l.LcmaOn == r.LcmaOn)
                         && (l.LcmaAudWarn == r.LcmaAudWarn)
                         && (l.CllsnWarnReIndcn == r.CllsnWarnReIndcn)
                         && (l.DoorOpenwarnLeIndcn == r.DoorOpenwarnLeIndcn)
                         && (l.DoorOpenwarnRiIndcn == r.DoorOpenwarnRiIndcn)
  );
}

/*!
 * \brief   Compare for inequality with another ToSOCA_FunctionInfo1VCCIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(ToSOCA_FunctionInfo1VCCIDT const& l,
                       ToSOCA_FunctionInfo1VCCIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ToSOCA_FunctionInfo1VCCIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_TOSOCA_FUNCTIONINFO1VCCIDT_IMPL_TYPE_TOSOCA_FUNCTIONINFO1VCCIDT_H_
