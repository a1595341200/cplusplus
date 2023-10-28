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
/**        \file  EDRExe/include/EDRDataGroupIDT/impl_type_edrdatagroupidt.h
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

#ifndef EDREXE_INCLUDE_EDRDATAGROUPIDT_IMPL_TYPE_EDRDATAGROUPIDT_H_
#define EDREXE_INCLUDE_EDRDATAGROUPIDT_IMPL_TYPE_EDRDATAGROUPIDT_H_

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
#include "AsyALgtCtrlMod1VccIDT/impl_type_asyalgtctrlmod1vccidt.h"
#include "AsyALgtReqRngForCmft1VccIDT/impl_type_asyalgtreqrngforcmft1vccidt.h"
#include "AsyALgtSts1VccIDT/impl_type_asyalgtsts1vccidt.h"
#include "AsyIndcrDispSts2VccIDT/impl_type_asyindcrdispsts2vccidt.h"
#include "AsyLanChgColorDspIDT/impl_type_asylanchgcolordspidt.h"
#include "AsyLineLe2Pah2IDT/impl_type_asylinele2pah2idt.h"
#include "AsyLineLe2PahIDT/impl_type_asylinele2pahidt.h"
#include "AsyLineLeColor1VccIDT/impl_type_asylinelecolor1vccidt.h"
#include "AsyLineLePah2IDT/impl_type_asylinelepah2idt.h"
#include "AsyLineLePahIDT/impl_type_asylinelepahidt.h"
#include "AsyLineLeTyp1VccIDT/impl_type_asylineletyp1vccidt.h"
#include "AsyLineRi2Pah2IDT/impl_type_asylineri2pah2idt.h"
#include "AsyLineRi2PahIDT/impl_type_asylineri2pahidt.h"
#include "AsyLineRiPah2IDT/impl_type_asylineripah2idt.h"
#include "AsyLineRiPahIDT/impl_type_asylineripahidt.h"
#include "AsyObjColor1VccIDT/impl_type_asyobjcolor1vccidt.h"
#include "AsyObjForBigData0IDT/impl_type_asyobjforbigdata0idt.h"
#include "AsyObjForBigData1IDT/impl_type_asyobjforbigdata1idt.h"
#include "AsyObjForBigData2IDT/impl_type_asyobjforbigdata2idt.h"
#include "AsyObjType1VccIDT/impl_type_asyobjtype1vccidt.h"
#include "AsyObjstat1VccIDT/impl_type_asyobjstat1vccidt.h"
#include "AsySftyDecelEnadByVehDyn1VccIDT/impl_type_asysftydecelenadbyvehdyn1vccidt.h"
#include "BiasedPosnFromSatlt1FGIDT/impl_type_biasedposnfromsatlt1fgidt.h"
#include "BrkSysCylPMstRec1VccIDT/impl_type_brksyscylpmstrec1vccidt.h"
#include "CllsnMtgtnWarnSts1IDT/impl_type_cllsnmtgtnwarnsts1idt.h"
#include "CllsnThreat1VccIDT/impl_type_cllsnthreat1vccidt.h"
#include "CrashSts2VccIDT/impl_type_crashsts2vccidt.h"
#include "CtrlSts1VccIDT/impl_type_ctrlsts1vccidt.h"
#include "DevSts1VccIDT/impl_type_devsts1vccidt.h"
#include "DoorSts2VccIDT/impl_type_doorsts2vccidt.h"
#include "DrvrPrsntSts0IDT/impl_type_drvrprsntsts0idt.h"
#include "DrvrSteerWhlHldGroup0IDT/impl_type_drvrsteerwhlhldgroup0idt.h"
#include "EscSt1VccIDT/impl_type_escst1vccidt.h"
#include "EyeOnRoadFromDHUIDT/impl_type_eyeonroadfromdhuidt.h"
#include "FricEstimnFromVehDyn1VccIDT/impl_type_fricestimnfromvehdyn1vccidt.h"
#include "GenQf1VccIDT/impl_type_genqf1vccidt.h"
#include "LaneChgAutStsForAsyHiWay2IDT/impl_type_lanechgautstsforasyhiway2idt.h"
#include "LatCtrlMod1VccIDT/impl_type_latctrlmod1vccidt.h"
#include "LcmaIndcn1VccIDT/impl_type_lcmaindcn1vccidt.h"
#include "LppLeadPntEDRIDT/impl_type_lppleadpntedridt.h"
#include "LppPathSelectEDRIDT/impl_type_lpppathselectedridt.h"
#include "NoYes1VccIDT/impl_type_noyes1vccidt.h"
#include "ObjFrnt1VccIDT/impl_type_objfrnt1vccidt.h"
#include "OnOff1VccIDT/impl_type_onoff1vccidt.h"
#include "PosnFromSatlt1VccIDT/impl_type_posnfromsatlt1vccidt.h"
#include "RampType1VccIDT/impl_type_ramptype1vccidt.h"
#include "ReSideRdrLeObj1IDT/impl_type_residerdrleobj1idt.h"
#include "ReSideRdrRiObj1IDT/impl_type_residerdrriobj1idt.h"
#include "RoadIncln1IDT/impl_type_roadincln1idt.h"
#include "RsdsMstSt1VccIDT/impl_type_rsdsmstst1vccidt.h"
#include "SftyDecelGroupSafeIDT/impl_type_sftydecelgroupsafeidt.h"
#include "SftySigGroupFromHmiSafe1IDT/impl_type_sftysiggroupfromhmisafe1idt.h"
#include "SteerExtFctStsRec1VccIDT/impl_type_steerextfctstsrec1vccidt.h"
#include "SteerServoStsIDT/impl_type_steerservostsidt.h"
#include "WarnLvl1VccIDT/impl_type_warnlvl1vccidt.h"
#include "YesNo1VccIDT/impl_type_yesno1vccidt.h"
#include "YesNo2VccIDT/impl_type_yesno2vccidt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint16IDT/impl_type_uint16idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace EDRDataGroupIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type EDRDataGroupIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EDRDataGroupIDT
 */
struct EDRDataGroupIDT {
  using CllsnAidPost_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using CllsnMtgtnWarnSts_generated_type = CllsnMtgtnWarnSts1IDT::CllsnMtgtnWarnSts1IDT;
  using WarnForAsyEmgyLaneKeepAid_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using CllsnAidPostEMA_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using FctaIndcnLe_generated_type = LcmaIndcn1VccIDT::LcmaIndcn1VccIDT;
  using FctaIndcnRi_generated_type = LcmaIndcn1VccIDT::LcmaIndcn1VccIDT;
  using LaneChgAutStsForAsyHiWay_generated_type = LaneChgAutStsForAsyHiWay2IDT::LaneChgAutStsForAsyHiWay2IDT;
  using AsyALgtSts_generated_type = AsyALgtSts1VccIDT::AsyALgtSts1VccIDT;
  using AsyALatIndcr_generated_type = AsyIndcrDispSts2VccIDT::AsyIndcrDispSts2VccIDT;
  using LcmaIndcnLe_generated_type = WarnLvl1VccIDT::WarnLvl1VccIDT;
  using LcmaIndcnRi_generated_type = WarnLvl1VccIDT::WarnLvl1VccIDT;
  using RcwmBrkReq_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using AsySftyDecelEnadByVehDyn_generated_type = AsySftyDecelEnadByVehDyn1VccIDT::AsySftyDecelEnadByVehDyn1VccIDT;
  using SftyDecelGroupSafe_generated_type = SftyDecelGroupSafeIDT::SftyDecelGroupSafeIDT;
  using AsySftyEnaDecelByDBS_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using AsySftyStandStillReq_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using BrkHptcWarnReqForAutDrv_generated_type = CllsnThreat1VccIDT::CllsnThreat1VccIDT;
  using CllsnThreat_generated_type = CllsnThreat1VccIDT::CllsnThreat1VccIDT;
  using AgCtrlTqLowrLim_generated_type = float32IDT::float32IDT;
  using AgCtrlTqUpprLim_generated_type = float32IDT::float32IDT;
  using AsyPinionAgReq_generated_type = float32IDT::float32IDT;
  using TqAssAddl_generated_type = float32IDT::float32IDT;
  using SteerWhlTqAddl_generated_type = float32IDT::float32IDT;
  using SteerTqAddlForEma_generated_type = float32IDT::float32IDT;
  using RctaBrkReq_generated_type = YesNo1VccIDT::YesNo1VccIDT;
  using RctaBrkReqQM_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using RctaBrkActvd_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using AsyALgtActvAftLim_generated_type = float32IDT::float32IDT;
  using AsyInformForDrvr_generated_type = uint8IDT::uint8IDT;
  using AsyNoaActvSuggest_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using AsySafeStopSts_generated_type = uint8IDT::uint8IDT;
  using AsyLatOffstSts_generated_type = uint8IDT::uint8IDT;
  using ADCtrlMode_generated_type = uint8IDT::uint8IDT;
  using AsyEyesOffWarnRqrd_generated_type = uint8IDT::uint8IDT;
  using AsyNoaSts_generated_type = uint8IDT::uint8IDT;
  using AbsCtrlActv_generated_type = CtrlSts1VccIDT::CtrlSts1VccIDT;
  using AccrPedlRatAccrPedlRat_generated_type = float32IDT::float32IDT;
  using LatCtrlModCfmd_generated_type = LatCtrlMod1VccIDT::LatCtrlMod1VccIDT;
  using AsyALgtCtrlModCfmd_generated_type = AsyALgtCtrlMod1VccIDT::AsyALgtCtrlMod1VccIDT;
  using BrkPrecActv_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using BrkSysCylPMstRec1Vcc_generated_type = BrkSysCylPMstRec1VccIDT::BrkSysCylPMstRec1VccIDT;
  using DrvrDecelReqFloat8_generated_type = float32IDT::float32IDT;
  using EscCtrlIndcn_generated_type = DevSts1VccIDT::DevSts1VccIDT;
  using EscSt_generated_type = EscSt1VccIDT::EscSt1VccIDT;
  using VehSpdIndcdQly_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using FricEstimnFromVehDyn1Vcc_generated_type = FricEstimnFromVehDyn1VccIDT::FricEstimnFromVehDyn1VccIDT;
  using DrvrPrsntSts0_generated_type = DrvrPrsntSts0IDT::DrvrPrsntSts0IDT;
  using DoorDrvrSts_generated_type = DoorSts2VccIDT::DoorSts2VccIDT;
  using AsyLineLePah_generated_type = AsyLineLePahIDT::AsyLineLePahIDT;
  using AsyLineLePah2_generated_type = AsyLineLePah2IDT::AsyLineLePah2IDT;
  using AsyLeFirstStrt_generated_type = uint8IDT::uint8IDT;
  using AsyLeFirstEnd_generated_type = uint8IDT::uint8IDT;
  using AsyLeSecStrt_generated_type = uint8IDT::uint8IDT;
  using AsyLeSecEnd_generated_type = uint8IDT::uint8IDT;
  using AsyLineDstLe_generated_type = float32IDT::float32IDT;
  using AsyLineLeColor_generated_type = AsyLineLeColor1VccIDT::AsyLineLeColor1VccIDT;
  using AsyLineLeTyp_generated_type = AsyLineLeTyp1VccIDT::AsyLineLeTyp1VccIDT;
  using AsyLineRiPah_generated_type = AsyLineRiPahIDT::AsyLineRiPahIDT;
  using AsyLineRiPah2_generated_type = AsyLineRiPah2IDT::AsyLineRiPah2IDT;
  using AsyRiFirstStrt_generated_type = uint8IDT::uint8IDT;
  using AsyRiFirstEnd_generated_type = uint8IDT::uint8IDT;
  using AsyRiSecStrt_generated_type = uint8IDT::uint8IDT;
  using AsyRiSecEnd_generated_type = uint8IDT::uint8IDT;
  using AsyLineDstRi_generated_type = float32IDT::float32IDT;
  using AsyLineRiColor_generated_type = AsyLineLeColor1VccIDT::AsyLineLeColor1VccIDT;
  using AsyLineRiTyp_generated_type = AsyLineLeTyp1VccIDT::AsyLineLeTyp1VccIDT;
  using AsyLineLe2Pah_generated_type = AsyLineLe2PahIDT::AsyLineLe2PahIDT;
  using AsyLineLe2Pah2_generated_type = AsyLineLe2Pah2IDT::AsyLineLe2Pah2IDT;
  using AsyLe2FirstStrt_generated_type = uint8IDT::uint8IDT;
  using AsyLe2FirstEnd_generated_type = uint8IDT::uint8IDT;
  using AsyLe2SecStrt_generated_type = uint8IDT::uint8IDT;
  using AsyLe2SecEnd_generated_type = uint8IDT::uint8IDT;
  using AsyLineLe2Color_generated_type = AsyLineLeColor1VccIDT::AsyLineLeColor1VccIDT;
  using AsyLineLe2Typ_generated_type = AsyLineLeTyp1VccIDT::AsyLineLeTyp1VccIDT;
  using AsyLineRi2Pah_generated_type = AsyLineRi2PahIDT::AsyLineRi2PahIDT;
  using AsyLineRi2Pah2_generated_type = AsyLineRi2Pah2IDT::AsyLineRi2Pah2IDT;
  using AsyRi2FirstStrt_generated_type = uint8IDT::uint8IDT;
  using AsyRi2FirstEnd_generated_type = uint8IDT::uint8IDT;
  using AsyRi2SecStrt_generated_type = uint8IDT::uint8IDT;
  using AsyRi2SecEnd_generated_type = uint8IDT::uint8IDT;
  using AsyLineRi2Color_generated_type = AsyLineLeColor1VccIDT::AsyLineLeColor1VccIDT;
  using AsyLineRi2Typ_generated_type = AsyLineLeTyp1VccIDT::AsyLineLeTyp1VccIDT;
  using EyesOnRoad_generated_type = EyeOnRoadFromDHUIDT::EyeOnRoadFromDHUIDT;
  using DrvrSteerWhlHldGroup0_generated_type = DrvrSteerWhlHldGroup0IDT::DrvrSteerWhlHldGroup0IDT;
  using RoadIncln1_generated_type = RoadIncln1IDT::RoadIncln1IDT;
  using SftySigGroupFromHmiSafe1_generated_type = SftySigGroupFromHmiSafe1IDT::SftySigGroupFromHmiSafe1IDT;
  using SteerServoSts_generated_type = SteerServoStsIDT::SteerServoStsIDT;
  using AsyObjForBigData0_generated_type = AsyObjForBigData0IDT::AsyObjForBigData0IDT;
  using AsyObjForBigData1_generated_type = AsyObjForBigData1IDT::AsyObjForBigData1IDT;
  using AsyObjForBigData2_generated_type = AsyObjForBigData2IDT::AsyObjForBigData2IDT;
  using ObjFrnt1Vcc_generated_type = ObjFrnt1VccIDT::ObjFrnt1VccIDT;
  using ReSideRdrLeObj1_generated_type = ReSideRdrLeObj1IDT::ReSideRdrLeObj1IDT;
  using ReSideRdrRiObj1_generated_type = ReSideRdrRiObj1IDT::ReSideRdrRiObj1IDT;
  using BiasedPosnFromSatlt1FG_generated_type = BiasedPosnFromSatlt1FGIDT::BiasedPosnFromSatlt1FGIDT;
  using BkpOfDstTrvld_generated_type = uint32IDT::uint32IDT;
  using PosnFromSatlt1Vcc_generated_type = PosnFromSatlt1VccIDT::PosnFromSatlt1VccIDT;
  using LppLeadPnt_generated_type = LppLeadPntEDRIDT::LppLeadPntEDRIDT;
  using AsyLanChgColorDsp_generated_type = AsyLanChgColorDspIDT::AsyLanChgColorDspIDT;
  using LppPathSelect_generated_type = LppPathSelectEDRIDT::LppPathSelectEDRIDT;
  using HmiStaticObj_generated_type = AsyObjType1VccIDT::AsyObjType1VccIDT;
  using HmiMovgObj_generated_type = AsyObjType1VccIDT::AsyObjType1VccIDT;
  using HmiObjID0_generated_type = uint8IDT::uint8IDT;
  using HmiObjID1_generated_type = uint8IDT::uint8IDT;
  using ColorOfHmiMovgObj_generated_type = AsyObjColor1VccIDT::AsyObjColor1VccIDT;
  using HdDirOfMovgObj_generated_type = AsyObjstat1VccIDT::AsyObjstat1VccIDT;
  using HmiMoving_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using Objectposnlat_generated_type = uint16IDT::uint16IDT;
  using Objectposnlgt_generated_type = uint16IDT::uint16IDT;
  using AsyLineLe2RampPosn_generated_type = uint8IDT::uint8IDT;
  using AsyLineLe2RampTyp_generated_type = RampType1VccIDT::RampType1VccIDT;
  using AsyLineRi2RampPosn_generated_type = uint8IDT::uint8IDT;
  using AsyLineRi2RampTyp_generated_type = RampType1VccIDT::RampType1VccIDT;
  using CrashStsSafe_generated_type = CrashSts2VccIDT::CrashSts2VccIDT;
  using CircularCamsts_generated_type = RsdsMstSt1VccIDT::RsdsMstSt1VccIDT;
  using SteerExtFctStsRec1Vcc_generated_type = SteerExtFctStsRec1VccIDT::SteerExtFctStsRec1VccIDT;
  using AsyALgtReqRngForCmft1Vcc_generated_type = AsyALgtReqRngForCmft1VccIDT::AsyALgtReqRngForCmft1VccIDT;

  CllsnAidPost_generated_type CllsnAidPost;
  CllsnMtgtnWarnSts_generated_type CllsnMtgtnWarnSts;
  WarnForAsyEmgyLaneKeepAid_generated_type WarnForAsyEmgyLaneKeepAid;
  CllsnAidPostEMA_generated_type CllsnAidPostEMA;
  FctaIndcnLe_generated_type FctaIndcnLe;
  FctaIndcnRi_generated_type FctaIndcnRi;
  LaneChgAutStsForAsyHiWay_generated_type LaneChgAutStsForAsyHiWay;
  AsyALgtSts_generated_type AsyALgtSts;
  AsyALatIndcr_generated_type AsyALatIndcr;
  LcmaIndcnLe_generated_type LcmaIndcnLe;
  LcmaIndcnRi_generated_type LcmaIndcnRi;
  RcwmBrkReq_generated_type RcwmBrkReq;
  AsySftyDecelEnadByVehDyn_generated_type AsySftyDecelEnadByVehDyn;
  SftyDecelGroupSafe_generated_type SftyDecelGroupSafe;
  AsySftyEnaDecelByDBS_generated_type AsySftyEnaDecelByDBS;
  AsySftyStandStillReq_generated_type AsySftyStandStillReq;
  BrkHptcWarnReqForAutDrv_generated_type BrkHptcWarnReqForAutDrv;
  CllsnThreat_generated_type CllsnThreat;
  AgCtrlTqLowrLim_generated_type AgCtrlTqLowrLim;
  AgCtrlTqUpprLim_generated_type AgCtrlTqUpprLim;
  AsyPinionAgReq_generated_type AsyPinionAgReq;
  TqAssAddl_generated_type TqAssAddl;
  SteerWhlTqAddl_generated_type SteerWhlTqAddl;
  SteerTqAddlForEma_generated_type SteerTqAddlForEma;
  RctaBrkReq_generated_type RctaBrkReq;
  RctaBrkReqQM_generated_type RctaBrkReqQM;
  RctaBrkActvd_generated_type RctaBrkActvd;
  AsyALgtActvAftLim_generated_type AsyALgtActvAftLim;
  AsyInformForDrvr_generated_type AsyInformForDrvr;
  AsyNoaActvSuggest_generated_type AsyNoaActvSuggest;
  AsySafeStopSts_generated_type AsySafeStopSts;
  AsyLatOffstSts_generated_type AsyLatOffstSts;
  ADCtrlMode_generated_type ADCtrlMode;
  AsyEyesOffWarnRqrd_generated_type AsyEyesOffWarnRqrd;
  AsyNoaSts_generated_type AsyNoaSts;
  AbsCtrlActv_generated_type AbsCtrlActv;
  AccrPedlRatAccrPedlRat_generated_type AccrPedlRatAccrPedlRat;
  LatCtrlModCfmd_generated_type LatCtrlModCfmd;
  AsyALgtCtrlModCfmd_generated_type AsyALgtCtrlModCfmd;
  BrkPrecActv_generated_type BrkPrecActv;
  BrkSysCylPMstRec1Vcc_generated_type BrkSysCylPMstRec1Vcc;
  DrvrDecelReqFloat8_generated_type DrvrDecelReqFloat8;
  EscCtrlIndcn_generated_type EscCtrlIndcn;
  EscSt_generated_type EscSt;
  VehSpdIndcdQly_generated_type VehSpdIndcdQly;
  FricEstimnFromVehDyn1Vcc_generated_type FricEstimnFromVehDyn1Vcc;
  DrvrPrsntSts0_generated_type DrvrPrsntSts0;
  DoorDrvrSts_generated_type DoorDrvrSts;
  AsyLineLePah_generated_type AsyLineLePah;
  AsyLineLePah2_generated_type AsyLineLePah2;
  AsyLeFirstStrt_generated_type AsyLeFirstStrt;
  AsyLeFirstEnd_generated_type AsyLeFirstEnd;
  AsyLeSecStrt_generated_type AsyLeSecStrt;
  AsyLeSecEnd_generated_type AsyLeSecEnd;
  AsyLineDstLe_generated_type AsyLineDstLe;
  AsyLineLeColor_generated_type AsyLineLeColor;
  AsyLineLeTyp_generated_type AsyLineLeTyp;
  AsyLineRiPah_generated_type AsyLineRiPah;
  AsyLineRiPah2_generated_type AsyLineRiPah2;
  AsyRiFirstStrt_generated_type AsyRiFirstStrt;
  AsyRiFirstEnd_generated_type AsyRiFirstEnd;
  AsyRiSecStrt_generated_type AsyRiSecStrt;
  AsyRiSecEnd_generated_type AsyRiSecEnd;
  AsyLineDstRi_generated_type AsyLineDstRi;
  AsyLineRiColor_generated_type AsyLineRiColor;
  AsyLineRiTyp_generated_type AsyLineRiTyp;
  AsyLineLe2Pah_generated_type AsyLineLe2Pah;
  AsyLineLe2Pah2_generated_type AsyLineLe2Pah2;
  AsyLe2FirstStrt_generated_type AsyLe2FirstStrt;
  AsyLe2FirstEnd_generated_type AsyLe2FirstEnd;
  AsyLe2SecStrt_generated_type AsyLe2SecStrt;
  AsyLe2SecEnd_generated_type AsyLe2SecEnd;
  AsyLineLe2Color_generated_type AsyLineLe2Color;
  AsyLineLe2Typ_generated_type AsyLineLe2Typ;
  AsyLineRi2Pah_generated_type AsyLineRi2Pah;
  AsyLineRi2Pah2_generated_type AsyLineRi2Pah2;
  AsyRi2FirstStrt_generated_type AsyRi2FirstStrt;
  AsyRi2FirstEnd_generated_type AsyRi2FirstEnd;
  AsyRi2SecStrt_generated_type AsyRi2SecStrt;
  AsyRi2SecEnd_generated_type AsyRi2SecEnd;
  AsyLineRi2Color_generated_type AsyLineRi2Color;
  AsyLineRi2Typ_generated_type AsyLineRi2Typ;
  EyesOnRoad_generated_type EyesOnRoad;
  DrvrSteerWhlHldGroup0_generated_type DrvrSteerWhlHldGroup0;
  RoadIncln1_generated_type RoadIncln1;
  SftySigGroupFromHmiSafe1_generated_type SftySigGroupFromHmiSafe1;
  SteerServoSts_generated_type SteerServoSts;
  AsyObjForBigData0_generated_type AsyObjForBigData0;
  AsyObjForBigData1_generated_type AsyObjForBigData1;
  AsyObjForBigData2_generated_type AsyObjForBigData2;
  ObjFrnt1Vcc_generated_type ObjFrnt1Vcc;
  ReSideRdrLeObj1_generated_type ReSideRdrLeObj1;
  ReSideRdrRiObj1_generated_type ReSideRdrRiObj1;
  BiasedPosnFromSatlt1FG_generated_type BiasedPosnFromSatlt1FG;
  BkpOfDstTrvld_generated_type BkpOfDstTrvld;
  PosnFromSatlt1Vcc_generated_type PosnFromSatlt1Vcc;
  LppLeadPnt_generated_type LppLeadPnt;
  AsyLanChgColorDsp_generated_type AsyLanChgColorDsp;
  LppPathSelect_generated_type LppPathSelect;
  HmiStaticObj_generated_type HmiStaticObj;
  HmiMovgObj_generated_type HmiMovgObj;
  HmiObjID0_generated_type HmiObjID0;
  HmiObjID1_generated_type HmiObjID1;
  ColorOfHmiMovgObj_generated_type ColorOfHmiMovgObj;
  HdDirOfMovgObj_generated_type HdDirOfMovgObj;
  HmiMoving_generated_type HmiMoving;
  Objectposnlat_generated_type Objectposnlat;
  Objectposnlgt_generated_type Objectposnlgt;
  AsyLineLe2RampPosn_generated_type AsyLineLe2RampPosn;
  AsyLineLe2RampTyp_generated_type AsyLineLe2RampTyp;
  AsyLineRi2RampPosn_generated_type AsyLineRi2RampPosn;
  AsyLineRi2RampTyp_generated_type AsyLineRi2RampTyp;
  CrashStsSafe_generated_type CrashStsSafe;
  CircularCamsts_generated_type CircularCamsts;
  SteerExtFctStsRec1Vcc_generated_type SteerExtFctStsRec1Vcc;
  AsyALgtReqRngForCmft1Vcc_generated_type AsyALgtReqRngForCmft1Vcc;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another EDRDataGroupIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(EDRDataGroupIDT const& l,
                       EDRDataGroupIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.CllsnAidPost == r.CllsnAidPost)
                         && (l.CllsnMtgtnWarnSts == r.CllsnMtgtnWarnSts)
                         && (l.WarnForAsyEmgyLaneKeepAid == r.WarnForAsyEmgyLaneKeepAid)
                         && (l.CllsnAidPostEMA == r.CllsnAidPostEMA)
                         && (l.FctaIndcnLe == r.FctaIndcnLe)
                         && (l.FctaIndcnRi == r.FctaIndcnRi)
                         && (l.LaneChgAutStsForAsyHiWay == r.LaneChgAutStsForAsyHiWay)
                         && (l.AsyALgtSts == r.AsyALgtSts)
                         && (l.AsyALatIndcr == r.AsyALatIndcr)
                         && (l.LcmaIndcnLe == r.LcmaIndcnLe)
                         && (l.LcmaIndcnRi == r.LcmaIndcnRi)
                         && (l.RcwmBrkReq == r.RcwmBrkReq)
                         && (l.AsySftyDecelEnadByVehDyn == r.AsySftyDecelEnadByVehDyn)
                         && (l.SftyDecelGroupSafe == r.SftyDecelGroupSafe)
                         && (l.AsySftyEnaDecelByDBS == r.AsySftyEnaDecelByDBS)
                         && (l.AsySftyStandStillReq == r.AsySftyStandStillReq)
                         && (l.BrkHptcWarnReqForAutDrv == r.BrkHptcWarnReqForAutDrv)
                         && (l.CllsnThreat == r.CllsnThreat)
                         && compare_float(l.AgCtrlTqLowrLim, r.AgCtrlTqLowrLim)
                         && compare_float(l.AgCtrlTqUpprLim, r.AgCtrlTqUpprLim)
                         && compare_float(l.AsyPinionAgReq, r.AsyPinionAgReq)
                         && compare_float(l.TqAssAddl, r.TqAssAddl)
                         && compare_float(l.SteerWhlTqAddl, r.SteerWhlTqAddl)
                         && compare_float(l.SteerTqAddlForEma, r.SteerTqAddlForEma)
                         && (l.RctaBrkReq == r.RctaBrkReq)
                         && (l.RctaBrkReqQM == r.RctaBrkReqQM)
                         && (l.RctaBrkActvd == r.RctaBrkActvd)
                         && compare_float(l.AsyALgtActvAftLim, r.AsyALgtActvAftLim)
                         && (l.AsyInformForDrvr == r.AsyInformForDrvr)
                         && (l.AsyNoaActvSuggest == r.AsyNoaActvSuggest)
                         && (l.AsySafeStopSts == r.AsySafeStopSts)
                         && (l.AsyLatOffstSts == r.AsyLatOffstSts)
                         && (l.ADCtrlMode == r.ADCtrlMode)
                         && (l.AsyEyesOffWarnRqrd == r.AsyEyesOffWarnRqrd)
                         && (l.AsyNoaSts == r.AsyNoaSts)
                         && (l.AbsCtrlActv == r.AbsCtrlActv)
                         && compare_float(l.AccrPedlRatAccrPedlRat, r.AccrPedlRatAccrPedlRat)
                         && (l.LatCtrlModCfmd == r.LatCtrlModCfmd)
                         && (l.AsyALgtCtrlModCfmd == r.AsyALgtCtrlModCfmd)
                         && (l.BrkPrecActv == r.BrkPrecActv)
                         && (l.BrkSysCylPMstRec1Vcc == r.BrkSysCylPMstRec1Vcc)
                         && compare_float(l.DrvrDecelReqFloat8, r.DrvrDecelReqFloat8)
                         && (l.EscCtrlIndcn == r.EscCtrlIndcn)
                         && (l.EscSt == r.EscSt)
                         && (l.VehSpdIndcdQly == r.VehSpdIndcdQly)
                         && (l.FricEstimnFromVehDyn1Vcc == r.FricEstimnFromVehDyn1Vcc)
                         && (l.DrvrPrsntSts0 == r.DrvrPrsntSts0)
                         && (l.DoorDrvrSts == r.DoorDrvrSts)
                         && (l.AsyLineLePah == r.AsyLineLePah)
                         && (l.AsyLineLePah2 == r.AsyLineLePah2)
                         && (l.AsyLeFirstStrt == r.AsyLeFirstStrt)
                         && (l.AsyLeFirstEnd == r.AsyLeFirstEnd)
                         && (l.AsyLeSecStrt == r.AsyLeSecStrt)
                         && (l.AsyLeSecEnd == r.AsyLeSecEnd)
                         && compare_float(l.AsyLineDstLe, r.AsyLineDstLe)
                         && (l.AsyLineLeColor == r.AsyLineLeColor)
                         && (l.AsyLineLeTyp == r.AsyLineLeTyp)
                         && (l.AsyLineRiPah == r.AsyLineRiPah)
                         && (l.AsyLineRiPah2 == r.AsyLineRiPah2)
                         && (l.AsyRiFirstStrt == r.AsyRiFirstStrt)
                         && (l.AsyRiFirstEnd == r.AsyRiFirstEnd)
                         && (l.AsyRiSecStrt == r.AsyRiSecStrt)
                         && (l.AsyRiSecEnd == r.AsyRiSecEnd)
                         && compare_float(l.AsyLineDstRi, r.AsyLineDstRi)
                         && (l.AsyLineRiColor == r.AsyLineRiColor)
                         && (l.AsyLineRiTyp == r.AsyLineRiTyp)
                         && (l.AsyLineLe2Pah == r.AsyLineLe2Pah)
                         && (l.AsyLineLe2Pah2 == r.AsyLineLe2Pah2)
                         && (l.AsyLe2FirstStrt == r.AsyLe2FirstStrt)
                         && (l.AsyLe2FirstEnd == r.AsyLe2FirstEnd)
                         && (l.AsyLe2SecStrt == r.AsyLe2SecStrt)
                         && (l.AsyLe2SecEnd == r.AsyLe2SecEnd)
                         && (l.AsyLineLe2Color == r.AsyLineLe2Color)
                         && (l.AsyLineLe2Typ == r.AsyLineLe2Typ)
                         && (l.AsyLineRi2Pah == r.AsyLineRi2Pah)
                         && (l.AsyLineRi2Pah2 == r.AsyLineRi2Pah2)
                         && (l.AsyRi2FirstStrt == r.AsyRi2FirstStrt)
                         && (l.AsyRi2FirstEnd == r.AsyRi2FirstEnd)
                         && (l.AsyRi2SecStrt == r.AsyRi2SecStrt)
                         && (l.AsyRi2SecEnd == r.AsyRi2SecEnd)
                         && (l.AsyLineRi2Color == r.AsyLineRi2Color)
                         && (l.AsyLineRi2Typ == r.AsyLineRi2Typ)
                         && (l.EyesOnRoad == r.EyesOnRoad)
                         && (l.DrvrSteerWhlHldGroup0 == r.DrvrSteerWhlHldGroup0)
                         && (l.RoadIncln1 == r.RoadIncln1)
                         && (l.SftySigGroupFromHmiSafe1 == r.SftySigGroupFromHmiSafe1)
                         && (l.SteerServoSts == r.SteerServoSts)
                         && (l.AsyObjForBigData0 == r.AsyObjForBigData0)
                         && (l.AsyObjForBigData1 == r.AsyObjForBigData1)
                         && (l.AsyObjForBigData2 == r.AsyObjForBigData2)
                         && (l.ObjFrnt1Vcc == r.ObjFrnt1Vcc)
                         && (l.ReSideRdrLeObj1 == r.ReSideRdrLeObj1)
                         && (l.ReSideRdrRiObj1 == r.ReSideRdrRiObj1)
                         && (l.BiasedPosnFromSatlt1FG == r.BiasedPosnFromSatlt1FG)
                         && (l.BkpOfDstTrvld == r.BkpOfDstTrvld)
                         && (l.PosnFromSatlt1Vcc == r.PosnFromSatlt1Vcc)
                         && (l.LppLeadPnt == r.LppLeadPnt)
                         && (l.AsyLanChgColorDsp == r.AsyLanChgColorDsp)
                         && (l.LppPathSelect == r.LppPathSelect)
                         && (l.HmiStaticObj == r.HmiStaticObj)
                         && (l.HmiMovgObj == r.HmiMovgObj)
                         && (l.HmiObjID0 == r.HmiObjID0)
                         && (l.HmiObjID1 == r.HmiObjID1)
                         && (l.ColorOfHmiMovgObj == r.ColorOfHmiMovgObj)
                         && (l.HdDirOfMovgObj == r.HdDirOfMovgObj)
                         && (l.HmiMoving == r.HmiMoving)
                         && (l.Objectposnlat == r.Objectposnlat)
                         && (l.Objectposnlgt == r.Objectposnlgt)
                         && (l.AsyLineLe2RampPosn == r.AsyLineLe2RampPosn)
                         && (l.AsyLineLe2RampTyp == r.AsyLineLe2RampTyp)
                         && (l.AsyLineRi2RampPosn == r.AsyLineRi2RampPosn)
                         && (l.AsyLineRi2RampTyp == r.AsyLineRi2RampTyp)
                         && (l.CrashStsSafe == r.CrashStsSafe)
                         && (l.CircularCamsts == r.CircularCamsts)
                         && (l.SteerExtFctStsRec1Vcc == r.SteerExtFctStsRec1Vcc)
                         && (l.AsyALgtReqRngForCmft1Vcc == r.AsyALgtReqRngForCmft1Vcc)
  );
}

/*!
 * \brief   Compare for inequality with another EDRDataGroupIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(EDRDataGroupIDT const& l,
                       EDRDataGroupIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace EDRDataGroupIDT

#endif  // EDREXE_INCLUDE_EDRDATAGROUPIDT_IMPL_TYPE_EDRDATAGROUPIDT_H_
