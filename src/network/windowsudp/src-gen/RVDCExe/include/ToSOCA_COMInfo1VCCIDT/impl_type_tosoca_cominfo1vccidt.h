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
/**        \file  RVDCExe/include/ToSOCA_COMInfo1VCCIDT/impl_type_tosoca_cominfo1vccidt.h
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

#ifndef RVDCEXE_INCLUDE_TOSOCA_COMINFO1VCCIDT_IMPL_TYPE_TOSOCA_COMINFO1VCCIDT_H_
#define RVDCEXE_INCLUDE_TOSOCA_COMINFO1VCCIDT_IMPL_TYPE_TOSOCA_COMINFO1VCCIDT_H_

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
#include "ADDimLight1VccIDT/impl_type_addimlight1vccidt.h"
#include "ADModCtrlInhbn1VccIDT/impl_type_admodctrlinhbn1vccidt.h"
#include "ALgtStdFromWhlSpdSafe1ChkdIDT/impl_type_algtstdfromwhlspdsafe1chkdidt.h"
#include "AccFusnTrfcReqIDT/impl_type_accfusntrfcreqidt.h"
#include "AccrPedlPsd0IDT/impl_type_accrpedlpsd0idt.h"
#include "AgDataRaw2Safe1VccIDT/impl_type_agdataraw2safe1vccidt.h"
#include "AmbTRawIDT/impl_type_ambtrawidt.h"
#include "AmntSnsrIDT/impl_type_amntsnsridt.h"
#include "AsyALatSts1VccIDT/impl_type_asyalatsts1vccidt.h"
#include "AsyActrActvForLgtCtrlIDT/impl_type_asyactractvforlgtctrlidt.h"
#include "AsyAutDrvCtrlTyp1VccIDT/impl_type_asyautdrvctrltyp1vccidt.h"
#include "AsyDataWithCmpSafe1ChkdIDT/impl_type_asydatawithcmpsafe1chkdidt.h"
#include "BltLockStFrntIDT/impl_type_bltlockstfrntidt.h"
#include "Bool1VccIDT/impl_type_bool1vccidt.h"
#include "BrkPedlPsdRecIDT/impl_type_brkpedlpsdrecidt.h"
#include "BrkPedlrRatIDT/impl_type_brkpedlrratidt.h"
#include "ChgWarnMod1VccIDT/impl_type_chgwarnmod1vccidt.h"
#include "CllsnMtgtnFctSts1VccIDT/impl_type_cllsnmtgtnfctsts1vccidt.h"
#include "CrossInfo1VccIDT/impl_type_crossinfo1vccidt.h"
#include "CurrentRoadLvl1VccIDT/impl_type_currentroadlvl1vccidt.h"
#include "DevSts4IDT/impl_type_devsts4idt.h"
#include "DoorSts2VccIDT/impl_type_doorsts2vccidt.h"
#include "DoorStsWithFacQlyIDT/impl_type_doorstswithfacqlyidt.h"
#include "DrvModReqIDT/impl_type_drvmodreqidt.h"
#include "DrvrACCrsSetSpdReq1VccIDT/impl_type_drvraccrssetspdreq1vccidt.h"
#include "DrvrCrsCtrlFctActvReq1VccIDT/impl_type_drvrcrsctrlfctactvreq1vccidt.h"
#include "DrvrDesDir1VccIDT/impl_type_drvrdesdir1vccidt.h"
#include "DrvrSteerActv1VccIDT/impl_type_drvrsteeractv1vccidt.h"
#include "DrvrSteerWhlHldGroup0IDT/impl_type_drvrsteerwhlhldgroup0idt.h"
#include "EgoMotionIDT/impl_type_egomotionidt.h"
#include "EpbSts1VccIDT/impl_type_epbsts1vccidt.h"
#include "EscWarnIndcnReqRec1VccIDT/impl_type_escwarnindcnreqrec1vccidt.h"
#include "EyeGaze3VccIDT/impl_type_eyegaze3vccidt.h"
#include "EyeOnRoadFromDHUIDT/impl_type_eyeonroadfromdhuidt.h"
#include "GearLvrIDT/impl_type_gearlvridt.h"
#include "HmiAutoLaneChgStyle1VccIDT/impl_type_hmiautolanechgstyle1vccidt.h"
#include "HznSplyElectcSts1IDT/impl_type_hznsplyelectcsts1idt.h"
#include "IndcrTurnReqIDT/impl_type_indcrturnreqidt.h"
#include "InhbOfAsySftyDecelByVehDyn1VccIDT/impl_type_inhbofasysftydecelbyvehdyn1vccidt.h"
#include "LatCtrlMod1VccIDT/impl_type_latctrlmod1vccidt.h"
#include "NoYes1VccIDT/impl_type_noyes1vccidt.h"
#include "NoYesCrit1VccIDT/impl_type_noyescrit1vccidt.h"
#include "OffsForSpdWarnSetgReqIDT/impl_type_offsforspdwarnsetgreqidt.h"
#include "OnOff1VccIDT/impl_type_onoff1vccidt.h"
#include "OnOff1_2IDT/impl_type_onoff1_2idt.h"
#include "PinionSteerAgGroupIDT/impl_type_pinionsteeraggroupidt.h"
#include "PtDrvrSetg1VccIDT/impl_type_ptdrvrsetg1vccidt.h"
#include "RampInfo1VccIDT/impl_type_rampinfo1vccidt.h"
#include "ReqChg1VccIDT/impl_type_reqchg1vccidt.h"
#include "RoadSgnInfoActv0IDT/impl_type_roadsgninfoactv0idt.h"
#include "RsdsMstStIDT/impl_type_rsdsmststidt.h"
#include "SetgReqSts1VccIDT/impl_type_setgreqsts1vccidt.h"
#include "SideRdrSts2VccIDT/impl_type_siderdrsts2vccidt.h"
#include "SpdAlrmActvForRoadSgnInfo0IDT/impl_type_spdalrmactvforroadsgninfo0idt.h"
#include "SpplTrfcSgnInfo1IDT/impl_type_sppltrfcsgninfo1idt.h"
#include "SteerWhlSnsrSafe1IDT/impl_type_steerwhlsnsrsafe1idt.h"
#include "SwtIndcr1VccIDT/impl_type_swtindcr1vccidt.h"
#include "TiGapPen1IDT/impl_type_tigappen1idt.h"
#include "TiGapSetForLgtCtrl1VccIDT/impl_type_tigapsetforlgtctrl1vccidt.h"
#include "TrfcInfoMiscFirst1IDT/impl_type_trfcinfomiscfirst1idt.h"
#include "TrfcLiActvStsIDT/impl_type_trfcliactvstsidt.h"
#include "TrfcLiWarnTyp1VccIDT/impl_type_trfcliwarntyp1vccidt.h"
#include "TrsmParkLockdIDT/impl_type_trsmparklockdidt.h"
#include "TurnIndcrMonostable1VccIDT/impl_type_turnindcrmonostable1vccidt.h"
#include "TwliBriSts1VccIDT/impl_type_twlibrists1vccidt.h"
#include "VehBattU1VccIDT/impl_type_vehbattu1vccidt.h"
#include "VehDynCtrlStsForALgtCmftRec1IDT/impl_type_vehdynctrlstsforalgtcmftrec1idt.h"
#include "VehMNomRecsts_1IDT/impl_type_vehmnomrecsts_1idt.h"
#include "VehModMngtGlbSafe1IDT/impl_type_vehmodmngtglbsafe1idt.h"
#include "VehMtnStSafeGroup1IDT/impl_type_vehmtnstsafegroup1idt.h"
#include "VehSpdIndcd1IDT/impl_type_vehspdindcd1idt.h"
#include "VehSpdLgtSafe1ChkdIDT/impl_type_vehspdlgtsafe1chkdidt.h"
#include "Vin1VccIDT/impl_type_vin1vccidt.h"
#include "WhlInfoGroupIDT/impl_type_whlinfogroupidt.h"
#include "WipgInfoGroupIDT/impl_type_wipginfogroupidt.h"
#include "YesNo1VccIDT/impl_type_yesno1vccidt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "singleIDT/impl_type_singleidt.h"
#include "uint16IDT/impl_type_uint16idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace ToSOCA_COMInfo1VCCIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ToSOCA_COMInfo1VCCIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ToSOCA_COMInfo1VCCIDT
 */
struct ToSOCA_COMInfo1VCCIDT {
  using OSM2TimeStamp_generated_type = uint32IDT::uint32IDT;
  using AccFusnTrfcReq_generated_type = AccFusnTrfcReqIDT::AccFusnTrfcReqIDT;
  using AccrPedlPsd0_generated_type = AccrPedlPsd0IDT::AccrPedlPsd0IDT;
  using AgDataRaw2Safe1Vcc_generated_type = AgDataRaw2Safe1VccIDT::AgDataRaw2Safe1VccIDT;
  using ALgtStdFromWhlSpdSafe1Chkd_generated_type = ALgtStdFromWhlSpdSafe1ChkdIDT::ALgtStdFromWhlSpdSafe1ChkdIDT;
  using AmbTRaw_generated_type = AmbTRawIDT::AmbTRawIDT;
  using AsyDataWithCmpSafe1Chkd_generated_type = AsyDataWithCmpSafe1ChkdIDT::AsyDataWithCmpSafe1ChkdIDT;
  using BltLockStFrnt_generated_type = BltLockStFrntIDT::BltLockStFrntIDT;
  using BrkPedlPsdRec_generated_type = BrkPedlPsdRecIDT::BrkPedlPsdRecIDT;
  using DoorStsWithFacQly_generated_type = DoorStsWithFacQlyIDT::DoorStsWithFacQlyIDT;
  using EgoMotion_generated_type = EgoMotionIDT::EgoMotionIDT;
  using IndcrTurnReq_generated_type = IndcrTurnReqIDT::IndcrTurnReqIDT;
  using PinionSteerAgGroup_generated_type = PinionSteerAgGroupIDT::PinionSteerAgGroupIDT;
  using RampInfo1Vcc_generated_type = RampInfo1VccIDT::RampInfo1VccIDT;
  using RoadSgnInfoActv0_generated_type = RoadSgnInfoActv0IDT::RoadSgnInfoActv0IDT;
  using SpdAlrmActvForRoadSgnInfo0_generated_type = SpdAlrmActvForRoadSgnInfo0IDT::SpdAlrmActvForRoadSgnInfo0IDT;
  using SteerWhlSnsrSafe1_generated_type = SteerWhlSnsrSafe1IDT::SteerWhlSnsrSafe1IDT;
  using SwtIndcr1Vcc_generated_type = SwtIndcr1VccIDT::SwtIndcr1VccIDT;
  using TrfcLiActvSts_generated_type = TrfcLiActvStsIDT::TrfcLiActvStsIDT;
  using TrfcLiWarnTyp1Vcc_generated_type = TrfcLiWarnTyp1VccIDT::TrfcLiWarnTyp1VccIDT;
  using TrsmParkLockd_generated_type = TrsmParkLockdIDT::TrsmParkLockdIDT;
  using VehBattU1Vcc_generated_type = VehBattU1VccIDT::VehBattU1VccIDT;
  using VehMNomRecsts_1_generated_type = VehMNomRecsts_1IDT::VehMNomRecsts_1IDT;
  using VehModMngtGlbSafe1_generated_type = VehModMngtGlbSafe1IDT::VehModMngtGlbSafe1IDT;
  using VehMtnStSafeGroup1_generated_type = VehMtnStSafeGroup1IDT::VehMtnStSafeGroup1IDT;
  using VehSpdIndcd1_generated_type = VehSpdIndcd1IDT::VehSpdIndcd1IDT;
  using VehSpdLgtSafe1Chkd_generated_type = VehSpdLgtSafe1ChkdIDT::VehSpdLgtSafe1ChkdIDT;
  using Vin1Vcc_generated_type = Vin1VccIDT::Vin1VccIDT;
  using WhlInfoGroup_generated_type = WhlInfoGroupIDT::WhlInfoGroupIDT;
  using WipgInfoGroup_generated_type = WipgInfoGroupIDT::WipgInfoGroupIDT;
  using BkpOfDstTrvld_generated_type = uint32IDT::uint32IDT;
  using FogSetFrntReq_generated_type = OnOff1_2IDT::OnOff1_2IDT;
  using FogSetReReq_generated_type = OnOff1_2IDT::OnOff1_2IDT;
  using OffsForSpdWarnSetgReq_generated_type = OffsForSpdWarnSetgReqIDT::OffsForSpdWarnSetgReqIDT;
  using OffsForSpdWarnSetgReqSts_generated_type = SetgReqSts1VccIDT::SetgReqSts1VccIDT;
  using CtryCodInfo_generated_type = uint16IDT::uint16IDT;
  using CurrentRoadLvl_generated_type = CurrentRoadLvl1VccIDT::CurrentRoadLvl1VccIDT;
  using DoorLeReSts_generated_type = DoorSts2VccIDT::DoorSts2VccIDT;
  using DoorPassSts_generated_type = DoorSts2VccIDT::DoorSts2VccIDT;
  using DoorRiReSts_generated_type = DoorSts2VccIDT::DoorSts2VccIDT;
  using DrvrDesDir1Vcc_generated_type = DrvrDesDir1VccIDT::DrvrDesDir1VccIDT;
  using EpbSts_generated_type = EpbSts1VccIDT::EpbSts1VccIDT;
  using ExtrLtgStsFrntFog_generated_type = DevSts4IDT::DevSts4IDT;
  using ExtrLtgStsReFog_generated_type = DevSts4IDT::DevSts4IDT;
  using FrontFourDRadarStsForDim_generated_type = RsdsMstStIDT::RsdsMstStIDT;
  using GearLvr_generated_type = GearLvrIDT::GearLvrIDT;
  using HoodSts_generated_type = DoorSts2VccIDT::DoorSts2VccIDT;
  using HznSplyElectcSts1_generated_type = HznSplyElectcSts1IDT::HznSplyElectcSts1IDT;
  using MiscTrfcSgnInfoFromNavMap_generated_type = TrfcInfoMiscFirst1IDT::TrfcInfoMiscFirst1IDT;
  using NavInfoSts_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using RainfallAmnt_generated_type = AmntSnsrIDT::AmntSnsrIDT;
  using RoadMiscSgnInfoForRoadSgnInfoSts_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using SpdCamFromNavMap_generated_type = uint8IDT::uint8IDT;
  using SpdLimOfRoad_generated_type = uint8IDT::uint8IDT;
  using SpplTrfcSgnInfoFromNavMap_generated_type = SpplTrfcSgnInfo1IDT::SpplTrfcSgnInfo1IDT;
  using TrSts_generated_type = DoorSts2VccIDT::DoorSts2VccIDT;
  using TwliBriSts_generated_type = TwliBriSts1VccIDT::TwliBriSts1VccIDT;
  using CarTiGlbTi_generated_type = float32IDT::float32IDT;
  using HznDataCountryCode_generated_type = uint16IDT::uint16IDT;
  using TurnIndcrMonostable_generated_type = TurnIndcrMonostable1VccIDT::TurnIndcrMonostable1VccIDT;
  using CrossInfo_generated_type = CrossInfo1VccIDT::CrossInfo1VccIDT;
  using PlannedPahDe_generated_type = NoYesCrit1VccIDT::NoYesCrit1VccIDT;
  using LatCtrlModCfmd_generated_type = LatCtrlMod1VccIDT::LatCtrlMod1VccIDT;
  using AsyAutDrvCtrlTypDIMReq_generated_type = AsyAutDrvCtrlTyp1VccIDT::AsyAutDrvCtrlTyp1VccIDT;
  using AutoLaneChgStyleSwSts_generated_type = HmiAutoLaneChgStyle1VccIDT::HmiAutoLaneChgStyle1VccIDT;
  using PtDrvrSetg_generated_type = PtDrvrSetg1VccIDT::PtDrvrSetg1VccIDT;
  using DrvrLaneChgAutActvSts_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using NOPCofmOfLanChagOnoff_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using HmiSodLanChgSwitch_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using HmiDrvrSodReqChg_generated_type = ReqChg1VccIDT::ReqChg1VccIDT;
  using EyeOnRoadFromDHU_generated_type = EyeOnRoadFromDHUIDT::EyeOnRoadFromDHUIDT;
  using DrvrSteerWhlHldGroup_generated_type = DrvrSteerWhlHldGroup0IDT::DrvrSteerWhlHldGroup0IDT;
  using TiGap_generated_type = TiGapPen1IDT::TiGapPen1IDT;
  using BrkPedlrRat_generated_type = BrkPedlrRatIDT::BrkPedlrRatIDT;
  using DrvrACCFctDeactvnReq_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using DrvrCrsCtrlFctActvReq_generated_type = DrvrCrsCtrlFctActvReq1VccIDT::DrvrCrsCtrlFctActvReq1VccIDT;
  using AsyNoaUpgradeswitch_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using VehDynCtrlStsForALgtCmft_generated_type = VehDynCtrlStsForALgtCmftRec1IDT::VehDynCtrlStsForALgtCmftRec1IDT;
  using InhbOfAsySftyDecelByVehDyn_generated_type = InhbOfAsySftyDecelByVehDyn1VccIDT::InhbOfAsySftyDecelByVehDyn1VccIDT;
  using ADModCtrlInhbn_generated_type = ADModCtrlInhbn1VccIDT::ADModCtrlInhbn1VccIDT;
  using DrvModReq_generated_type = DrvModReqIDT::DrvModReqIDT;
  using DrvrSteerActv_generated_type = DrvrSteerActv1VccIDT::DrvrSteerActv1VccIDT;
  using EscWarnIndcnReq_generated_type = EscWarnIndcnReqRec1VccIDT::EscWarnIndcnReqRec1VccIDT;
  using EyeGazeFromDHU_generated_type = EyeGaze3VccIDT::EyeGaze3VccIDT;
  using TwliBriRaw_generated_type = singleIDT::singleIDT;
  using ADDimLight_generated_type = ADDimLight1VccIDT::ADDimLight1VccIDT;
  using CpmswOnOff_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using CrsCtrlTiGapAdjReq_generated_type = TiGapSetForLgtCtrl1VccIDT::TiGapSetForLgtCtrl1VccIDT;
  using CllsnMtgtnFctSts_generated_type = CllsnMtgtnFctSts1VccIDT::CllsnMtgtnFctSts1VccIDT;
  using DrvOffReqForLgtCtrl_generated_type = Bool1VccIDT::Bool1VccIDT;
  using AsyActrActvForLgtCtrl_generated_type = AsyActrActvForLgtCtrlIDT::AsyActrActvForLgtCtrlIDT;
  using AsyLaneChgWarnMod_generated_type = ChgWarnMod1VccIDT::ChgWarnMod1VccIDT;
  using DrvrACCrsSetSpdReq_generated_type = DrvrACCrsSetSpdReq1VccIDT::DrvrACCrsSetSpdReq1VccIDT;
  using LcmaLedStsDrvrSide_generated_type = YesNo1VccIDT::YesNo1VccIDT;
  using LcmaLedStsPassSide_generated_type = YesNo1VccIDT::YesNo1VccIDT;
  using LaneChgWarnSts_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using AsySteerWhlHptcWarnReq_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using StopReqOfLgtCtrlForPrpsn_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using StrtReqOfLgtCtrlForPrpsn_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using AsyEmgyLaneKeepAidSts_generated_type = AsyALatSts1VccIDT::AsyALatSts1VccIDT;
  using FrntSideRdrLeSts_generated_type = SideRdrSts2VccIDT::SideRdrSts2VccIDT;
  using FrntSideRdrRiSts_generated_type = SideRdrSts2VccIDT::SideRdrSts2VccIDT;
  using ReSideRdrLeSts_generated_type = SideRdrSts2VccIDT::SideRdrSts2VccIDT;
  using ReSideRdrRiSts_generated_type = SideRdrSts2VccIDT::SideRdrSts2VccIDT;

  OSM2TimeStamp_generated_type OSM2TimeStamp;
  AccFusnTrfcReq_generated_type AccFusnTrfcReq;
  AccrPedlPsd0_generated_type AccrPedlPsd0;
  AgDataRaw2Safe1Vcc_generated_type AgDataRaw2Safe1Vcc;
  ALgtStdFromWhlSpdSafe1Chkd_generated_type ALgtStdFromWhlSpdSafe1Chkd;
  AmbTRaw_generated_type AmbTRaw;
  AsyDataWithCmpSafe1Chkd_generated_type AsyDataWithCmpSafe1Chkd;
  BltLockStFrnt_generated_type BltLockStFrnt;
  BrkPedlPsdRec_generated_type BrkPedlPsdRec;
  DoorStsWithFacQly_generated_type DoorStsWithFacQly;
  EgoMotion_generated_type EgoMotion;
  IndcrTurnReq_generated_type IndcrTurnReq;
  PinionSteerAgGroup_generated_type PinionSteerAgGroup;
  RampInfo1Vcc_generated_type RampInfo1Vcc;
  RoadSgnInfoActv0_generated_type RoadSgnInfoActv0;
  SpdAlrmActvForRoadSgnInfo0_generated_type SpdAlrmActvForRoadSgnInfo0;
  SteerWhlSnsrSafe1_generated_type SteerWhlSnsrSafe1;
  SwtIndcr1Vcc_generated_type SwtIndcr1Vcc;
  TrfcLiActvSts_generated_type TrfcLiActvSts;
  TrfcLiWarnTyp1Vcc_generated_type TrfcLiWarnTyp1Vcc;
  TrsmParkLockd_generated_type TrsmParkLockd;
  VehBattU1Vcc_generated_type VehBattU1Vcc;
  VehMNomRecsts_1_generated_type VehMNomRecsts_1;
  VehModMngtGlbSafe1_generated_type VehModMngtGlbSafe1;
  VehMtnStSafeGroup1_generated_type VehMtnStSafeGroup1;
  VehSpdIndcd1_generated_type VehSpdIndcd1;
  VehSpdLgtSafe1Chkd_generated_type VehSpdLgtSafe1Chkd;
  Vin1Vcc_generated_type Vin1Vcc;
  WhlInfoGroup_generated_type WhlInfoGroup;
  WipgInfoGroup_generated_type WipgInfoGroup;
  BkpOfDstTrvld_generated_type BkpOfDstTrvld;
  FogSetFrntReq_generated_type FogSetFrntReq;
  FogSetReReq_generated_type FogSetReReq;
  OffsForSpdWarnSetgReq_generated_type OffsForSpdWarnSetgReq;
  OffsForSpdWarnSetgReqSts_generated_type OffsForSpdWarnSetgReqSts;
  CtryCodInfo_generated_type CtryCodInfo;
  CurrentRoadLvl_generated_type CurrentRoadLvl;
  DoorLeReSts_generated_type DoorLeReSts;
  DoorPassSts_generated_type DoorPassSts;
  DoorRiReSts_generated_type DoorRiReSts;
  DrvrDesDir1Vcc_generated_type DrvrDesDir1Vcc;
  EpbSts_generated_type EpbSts;
  ExtrLtgStsFrntFog_generated_type ExtrLtgStsFrntFog;
  ExtrLtgStsReFog_generated_type ExtrLtgStsReFog;
  FrontFourDRadarStsForDim_generated_type FrontFourDRadarStsForDim;
  GearLvr_generated_type GearLvr;
  HoodSts_generated_type HoodSts;
  HznSplyElectcSts1_generated_type HznSplyElectcSts1;
  MiscTrfcSgnInfoFromNavMap_generated_type MiscTrfcSgnInfoFromNavMap;
  NavInfoSts_generated_type NavInfoSts;
  RainfallAmnt_generated_type RainfallAmnt;
  RoadMiscSgnInfoForRoadSgnInfoSts_generated_type RoadMiscSgnInfoForRoadSgnInfoSts;
  SpdCamFromNavMap_generated_type SpdCamFromNavMap;
  SpdLimOfRoad_generated_type SpdLimOfRoad;
  SpplTrfcSgnInfoFromNavMap_generated_type SpplTrfcSgnInfoFromNavMap;
  TrSts_generated_type TrSts;
  TwliBriSts_generated_type TwliBriSts;
  CarTiGlbTi_generated_type CarTiGlbTi;
  HznDataCountryCode_generated_type HznDataCountryCode;
  TurnIndcrMonostable_generated_type TurnIndcrMonostable;
  CrossInfo_generated_type CrossInfo;
  PlannedPahDe_generated_type PlannedPahDe;
  LatCtrlModCfmd_generated_type LatCtrlModCfmd;
  AsyAutDrvCtrlTypDIMReq_generated_type AsyAutDrvCtrlTypDIMReq;
  AutoLaneChgStyleSwSts_generated_type AutoLaneChgStyleSwSts;
  PtDrvrSetg_generated_type PtDrvrSetg;
  DrvrLaneChgAutActvSts_generated_type DrvrLaneChgAutActvSts;
  NOPCofmOfLanChagOnoff_generated_type NOPCofmOfLanChagOnoff;
  HmiSodLanChgSwitch_generated_type HmiSodLanChgSwitch;
  HmiDrvrSodReqChg_generated_type HmiDrvrSodReqChg;
  EyeOnRoadFromDHU_generated_type EyeOnRoadFromDHU;
  DrvrSteerWhlHldGroup_generated_type DrvrSteerWhlHldGroup;
  TiGap_generated_type TiGap;
  BrkPedlrRat_generated_type BrkPedlrRat;
  DrvrACCFctDeactvnReq_generated_type DrvrACCFctDeactvnReq;
  DrvrCrsCtrlFctActvReq_generated_type DrvrCrsCtrlFctActvReq;
  AsyNoaUpgradeswitch_generated_type AsyNoaUpgradeswitch;
  VehDynCtrlStsForALgtCmft_generated_type VehDynCtrlStsForALgtCmft;
  InhbOfAsySftyDecelByVehDyn_generated_type InhbOfAsySftyDecelByVehDyn;
  ADModCtrlInhbn_generated_type ADModCtrlInhbn;
  DrvModReq_generated_type DrvModReq;
  DrvrSteerActv_generated_type DrvrSteerActv;
  EscWarnIndcnReq_generated_type EscWarnIndcnReq;
  EyeGazeFromDHU_generated_type EyeGazeFromDHU;
  TwliBriRaw_generated_type TwliBriRaw;
  ADDimLight_generated_type ADDimLight;
  CpmswOnOff_generated_type CpmswOnOff;
  CrsCtrlTiGapAdjReq_generated_type CrsCtrlTiGapAdjReq;
  CllsnMtgtnFctSts_generated_type CllsnMtgtnFctSts;
  DrvOffReqForLgtCtrl_generated_type DrvOffReqForLgtCtrl;
  AsyActrActvForLgtCtrl_generated_type AsyActrActvForLgtCtrl;
  AsyLaneChgWarnMod_generated_type AsyLaneChgWarnMod;
  DrvrACCrsSetSpdReq_generated_type DrvrACCrsSetSpdReq;
  LcmaLedStsDrvrSide_generated_type LcmaLedStsDrvrSide;
  LcmaLedStsPassSide_generated_type LcmaLedStsPassSide;
  LaneChgWarnSts_generated_type LaneChgWarnSts;
  AsySteerWhlHptcWarnReq_generated_type AsySteerWhlHptcWarnReq;
  StopReqOfLgtCtrlForPrpsn_generated_type StopReqOfLgtCtrlForPrpsn;
  StrtReqOfLgtCtrlForPrpsn_generated_type StrtReqOfLgtCtrlForPrpsn;
  AsyEmgyLaneKeepAidSts_generated_type AsyEmgyLaneKeepAidSts;
  FrntSideRdrLeSts_generated_type FrntSideRdrLeSts;
  FrntSideRdrRiSts_generated_type FrntSideRdrRiSts;
  ReSideRdrLeSts_generated_type ReSideRdrLeSts;
  ReSideRdrRiSts_generated_type ReSideRdrRiSts;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another ToSOCA_COMInfo1VCCIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(ToSOCA_COMInfo1VCCIDT const& l,
                       ToSOCA_COMInfo1VCCIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.OSM2TimeStamp == r.OSM2TimeStamp)
                         && (l.AccFusnTrfcReq == r.AccFusnTrfcReq)
                         && (l.AccrPedlPsd0 == r.AccrPedlPsd0)
                         && (l.AgDataRaw2Safe1Vcc == r.AgDataRaw2Safe1Vcc)
                         && (l.ALgtStdFromWhlSpdSafe1Chkd == r.ALgtStdFromWhlSpdSafe1Chkd)
                         && (l.AmbTRaw == r.AmbTRaw)
                         && (l.AsyDataWithCmpSafe1Chkd == r.AsyDataWithCmpSafe1Chkd)
                         && (l.BltLockStFrnt == r.BltLockStFrnt)
                         && (l.BrkPedlPsdRec == r.BrkPedlPsdRec)
                         && (l.DoorStsWithFacQly == r.DoorStsWithFacQly)
                         && (l.EgoMotion == r.EgoMotion)
                         && (l.IndcrTurnReq == r.IndcrTurnReq)
                         && (l.PinionSteerAgGroup == r.PinionSteerAgGroup)
                         && (l.RampInfo1Vcc == r.RampInfo1Vcc)
                         && (l.RoadSgnInfoActv0 == r.RoadSgnInfoActv0)
                         && (l.SpdAlrmActvForRoadSgnInfo0 == r.SpdAlrmActvForRoadSgnInfo0)
                         && (l.SteerWhlSnsrSafe1 == r.SteerWhlSnsrSafe1)
                         && (l.SwtIndcr1Vcc == r.SwtIndcr1Vcc)
                         && (l.TrfcLiActvSts == r.TrfcLiActvSts)
                         && (l.TrfcLiWarnTyp1Vcc == r.TrfcLiWarnTyp1Vcc)
                         && (l.TrsmParkLockd == r.TrsmParkLockd)
                         && (l.VehBattU1Vcc == r.VehBattU1Vcc)
                         && (l.VehMNomRecsts_1 == r.VehMNomRecsts_1)
                         && (l.VehModMngtGlbSafe1 == r.VehModMngtGlbSafe1)
                         && (l.VehMtnStSafeGroup1 == r.VehMtnStSafeGroup1)
                         && (l.VehSpdIndcd1 == r.VehSpdIndcd1)
                         && (l.VehSpdLgtSafe1Chkd == r.VehSpdLgtSafe1Chkd)
                         && (l.Vin1Vcc == r.Vin1Vcc)
                         && (l.WhlInfoGroup == r.WhlInfoGroup)
                         && (l.WipgInfoGroup == r.WipgInfoGroup)
                         && (l.BkpOfDstTrvld == r.BkpOfDstTrvld)
                         && (l.FogSetFrntReq == r.FogSetFrntReq)
                         && (l.FogSetReReq == r.FogSetReReq)
                         && (l.OffsForSpdWarnSetgReq == r.OffsForSpdWarnSetgReq)
                         && (l.OffsForSpdWarnSetgReqSts == r.OffsForSpdWarnSetgReqSts)
                         && (l.CtryCodInfo == r.CtryCodInfo)
                         && (l.CurrentRoadLvl == r.CurrentRoadLvl)
                         && (l.DoorLeReSts == r.DoorLeReSts)
                         && (l.DoorPassSts == r.DoorPassSts)
                         && (l.DoorRiReSts == r.DoorRiReSts)
                         && (l.DrvrDesDir1Vcc == r.DrvrDesDir1Vcc)
                         && (l.EpbSts == r.EpbSts)
                         && (l.ExtrLtgStsFrntFog == r.ExtrLtgStsFrntFog)
                         && (l.ExtrLtgStsReFog == r.ExtrLtgStsReFog)
                         && (l.FrontFourDRadarStsForDim == r.FrontFourDRadarStsForDim)
                         && (l.GearLvr == r.GearLvr)
                         && (l.HoodSts == r.HoodSts)
                         && (l.HznSplyElectcSts1 == r.HznSplyElectcSts1)
                         && (l.MiscTrfcSgnInfoFromNavMap == r.MiscTrfcSgnInfoFromNavMap)
                         && (l.NavInfoSts == r.NavInfoSts)
                         && (l.RainfallAmnt == r.RainfallAmnt)
                         && (l.RoadMiscSgnInfoForRoadSgnInfoSts == r.RoadMiscSgnInfoForRoadSgnInfoSts)
                         && (l.SpdCamFromNavMap == r.SpdCamFromNavMap)
                         && (l.SpdLimOfRoad == r.SpdLimOfRoad)
                         && (l.SpplTrfcSgnInfoFromNavMap == r.SpplTrfcSgnInfoFromNavMap)
                         && (l.TrSts == r.TrSts)
                         && (l.TwliBriSts == r.TwliBriSts)
                         && compare_float(l.CarTiGlbTi, r.CarTiGlbTi)
                         && (l.HznDataCountryCode == r.HznDataCountryCode)
                         && (l.TurnIndcrMonostable == r.TurnIndcrMonostable)
                         && (l.CrossInfo == r.CrossInfo)
                         && (l.PlannedPahDe == r.PlannedPahDe)
                         && (l.LatCtrlModCfmd == r.LatCtrlModCfmd)
                         && (l.AsyAutDrvCtrlTypDIMReq == r.AsyAutDrvCtrlTypDIMReq)
                         && (l.AutoLaneChgStyleSwSts == r.AutoLaneChgStyleSwSts)
                         && (l.PtDrvrSetg == r.PtDrvrSetg)
                         && (l.DrvrLaneChgAutActvSts == r.DrvrLaneChgAutActvSts)
                         && (l.NOPCofmOfLanChagOnoff == r.NOPCofmOfLanChagOnoff)
                         && (l.HmiSodLanChgSwitch == r.HmiSodLanChgSwitch)
                         && (l.HmiDrvrSodReqChg == r.HmiDrvrSodReqChg)
                         && (l.EyeOnRoadFromDHU == r.EyeOnRoadFromDHU)
                         && (l.DrvrSteerWhlHldGroup == r.DrvrSteerWhlHldGroup)
                         && (l.TiGap == r.TiGap)
                         && (l.BrkPedlrRat == r.BrkPedlrRat)
                         && (l.DrvrACCFctDeactvnReq == r.DrvrACCFctDeactvnReq)
                         && (l.DrvrCrsCtrlFctActvReq == r.DrvrCrsCtrlFctActvReq)
                         && (l.AsyNoaUpgradeswitch == r.AsyNoaUpgradeswitch)
                         && (l.VehDynCtrlStsForALgtCmft == r.VehDynCtrlStsForALgtCmft)
                         && (l.InhbOfAsySftyDecelByVehDyn == r.InhbOfAsySftyDecelByVehDyn)
                         && (l.ADModCtrlInhbn == r.ADModCtrlInhbn)
                         && (l.DrvModReq == r.DrvModReq)
                         && (l.DrvrSteerActv == r.DrvrSteerActv)
                         && (l.EscWarnIndcnReq == r.EscWarnIndcnReq)
                         && (l.EyeGazeFromDHU == r.EyeGazeFromDHU)
                         && compare_float(l.TwliBriRaw, r.TwliBriRaw)
                         && (l.ADDimLight == r.ADDimLight)
                         && (l.CpmswOnOff == r.CpmswOnOff)
                         && (l.CrsCtrlTiGapAdjReq == r.CrsCtrlTiGapAdjReq)
                         && (l.CllsnMtgtnFctSts == r.CllsnMtgtnFctSts)
                         && (l.DrvOffReqForLgtCtrl == r.DrvOffReqForLgtCtrl)
                         && (l.AsyActrActvForLgtCtrl == r.AsyActrActvForLgtCtrl)
                         && (l.AsyLaneChgWarnMod == r.AsyLaneChgWarnMod)
                         && (l.DrvrACCrsSetSpdReq == r.DrvrACCrsSetSpdReq)
                         && (l.LcmaLedStsDrvrSide == r.LcmaLedStsDrvrSide)
                         && (l.LcmaLedStsPassSide == r.LcmaLedStsPassSide)
                         && (l.LaneChgWarnSts == r.LaneChgWarnSts)
                         && (l.AsySteerWhlHptcWarnReq == r.AsySteerWhlHptcWarnReq)
                         && (l.StopReqOfLgtCtrlForPrpsn == r.StopReqOfLgtCtrlForPrpsn)
                         && (l.StrtReqOfLgtCtrlForPrpsn == r.StrtReqOfLgtCtrlForPrpsn)
                         && (l.AsyEmgyLaneKeepAidSts == r.AsyEmgyLaneKeepAidSts)
                         && (l.FrntSideRdrLeSts == r.FrntSideRdrLeSts)
                         && (l.FrntSideRdrRiSts == r.FrntSideRdrRiSts)
                         && (l.ReSideRdrLeSts == r.ReSideRdrLeSts)
                         && (l.ReSideRdrRiSts == r.ReSideRdrRiSts)
  );
}

/*!
 * \brief   Compare for inequality with another ToSOCA_COMInfo1VCCIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(ToSOCA_COMInfo1VCCIDT const& l,
                       ToSOCA_COMInfo1VCCIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ToSOCA_COMInfo1VCCIDT

#endif  // RVDCEXE_INCLUDE_TOSOCA_COMINFO1VCCIDT_IMPL_TYPE_TOSOCA_COMINFO1VCCIDT_H_
