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
/**        \file  PerceptionSideExe/include/ToSOCA_COMInfo1VCC/impl_type_tosoca_cominfo1vcc.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef PERCEPTIONSIDEEXE_INCLUDE_TOSOCA_COMINFO1VCC_IMPL_TYPE_TOSOCA_COMINFO1VCC_H_
#define PERCEPTIONSIDEEXE_INCLUDE_TOSOCA_COMINFO1VCC_IMPL_TYPE_TOSOCA_COMINFO1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ALgtStdFromWhlSpdSafe1Chkd/impl_type_algtstdfromwhlspdsafe1chkd.h"
#include "AccFusnTrfcReq/impl_type_accfusntrfcreq.h"
#include "AccrPedlPsd0/impl_type_accrpedlpsd0.h"
#include "AmbTRaw/impl_type_ambtraw.h"
#include "AsyDataWithCmpSafe1Chkd/impl_type_asydatawithcmpsafe1chkd.h"
#include "BkpOfDstTrvld/impl_type_bkpofdsttrvld.h"
#include "BltLockStFrnt/impl_type_bltlockstfrnt.h"
#include "BrkPedlPsdRec/impl_type_brkpedlpsdrec.h"
#include "CarTiGlb/impl_type_cartiglb.h"
#include "DoorLeReSts/impl_type_doorlerests.h"
#include "DoorPassSts/impl_type_doorpasssts.h"
#include "DoorRiReSts/impl_type_doorrirests.h"
#include "EgoMotion/impl_type_egomotion.h"
#include "EpbSts/impl_type_epbsts.h"
#include "ExtrLtgStsFrntFog/impl_type_extrltgstsfrntfog.h"
#include "ExtrLtgStsReFog/impl_type_extrltgstsrefog.h"
#include "FogSetFrntReq/impl_type_fogsetfrntreq.h"
#include "FogSetReReq/impl_type_fogsetrereq.h"
#include "GearLvr/impl_type_gearlvr.h"
#include "HoodSts/impl_type_hoodsts.h"
#include "HznSplyElectcSts1/impl_type_hznsplyelectcsts1.h"
#include "IndcrTurnReq/impl_type_indcrturnreq.h"
#include "OSM2TimeStamp/impl_type_osm2timestamp.h"
#include "OffsForSpdWarnSetgReq/impl_type_offsforspdwarnsetgreq.h"
#include "PinionSteerAgGroup/impl_type_pinionsteeraggroup.h"
#include "RainfallAmnt/impl_type_rainfallamnt.h"
#include "RoadMiscSgnInfoSts/impl_type_roadmiscsgninfosts.h"
#include "RoadSgnInfoActv0/impl_type_roadsgninfoactv0.h"
#include "SpdAlrmActvForRoadSgnInfo0/impl_type_spdalrmactvforroadsgninfo0.h"
#include "SteerWhlSnsrSafe1/impl_type_steerwhlsnsrsafe1.h"
#include "TrSts/impl_type_trsts.h"
#include "TrfcLiActvSts/impl_type_trfcliactvsts.h"
#include "TrsmParkLockd/impl_type_trsmparklockd.h"
#include "VehBattU1Vcc/impl_type_vehbattu1vcc.h"
#include "VehMNomRecsts_1/impl_type_vehmnomrecsts_1.h"
#include "VehModMngtGlbSafe1/impl_type_vehmodmngtglbsafe1.h"
#include "VehMtnStSafeGroup1/impl_type_vehmtnstsafegroup1.h"
#include "VehSpdIndcd1/impl_type_vehspdindcd1.h"
#include "VehSpdLgtSafe1Chkd/impl_type_vehspdlgtsafe1chkd.h"
#include "Vin1Vcc/impl_type_vin1vcc.h"
#include "WhlInfoGroup/impl_type_whlinfogroup.h"
#include "WipgInfoGroup/impl_type_wipginfogroup.h"

namespace ToSOCA_COMInfo1VCC {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ToSOCA_COMInfo1VCC.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ToSOCA_COMInfo1VCC
 */
struct ToSOCA_COMInfo1VCC {
  using _AccFusnTrfcReq_ref_type = AccFusnTrfcReq::AccFusnTrfcReq;
  using _AccrPedlPsd0_ref_type = AccrPedlPsd0::AccrPedlPsd0;
  using _ALgtStdFromWhlSpdSafe1Chkd_ref_type = ALgtStdFromWhlSpdSafe1Chkd::ALgtStdFromWhlSpdSafe1Chkd;
  using _AmbTRaw_ref_type = AmbTRaw::AmbTRaw;
  using _AsyDataWithCmpSafe1Chkd_ref_type = AsyDataWithCmpSafe1Chkd::AsyDataWithCmpSafe1Chkd;
  using _BltLockStFrnt_ref_type = BltLockStFrnt::BltLockStFrnt;
  using _BrkPedlPsdRec_ref_type = BrkPedlPsdRec::BrkPedlPsdRec;
  using _EgoMotion_ref_type = EgoMotion::EgoMotion;
  using _IndcrTurnReq_ref_type = IndcrTurnReq::IndcrTurnReq;
  using _PinionSteerAgGroup_ref_type = PinionSteerAgGroup::PinionSteerAgGroup;
  using _RoadSgnInfoActv0_ref_type = RoadSgnInfoActv0::RoadSgnInfoActv0;
  using _SpdAlrmActvForRoadSgnInfo0_ref_type = SpdAlrmActvForRoadSgnInfo0::SpdAlrmActvForRoadSgnInfo0;
  using _SteerWhlSnsrSafe1_ref_type = SteerWhlSnsrSafe1::SteerWhlSnsrSafe1;
  using _TrfcLiActvSts_ref_type = TrfcLiActvSts::TrfcLiActvSts;
  using _TrsmParkLockd_ref_type = TrsmParkLockd::TrsmParkLockd;
  using _VehBattU1Vcc_ref_type = VehBattU1Vcc::VehBattU1Vcc;
  using _VehMNomRecsts_1_ref_type = VehMNomRecsts_1::VehMNomRecsts_1;
  using _VehModMngtGlbSafe1_ref_type = VehModMngtGlbSafe1::VehModMngtGlbSafe1;
  using _VehMtnStSafeGroup1_ref_type = VehMtnStSafeGroup1::VehMtnStSafeGroup1;
  using _VehSpdIndcd1_ref_type = VehSpdIndcd1::VehSpdIndcd1;
  using _VehSpdLgtSafe1Chkd_ref_type = VehSpdLgtSafe1Chkd::VehSpdLgtSafe1Chkd;
  using _Vin1Vcc_ref_type = Vin1Vcc::Vin1Vcc;
  using _WhlInfoGroup_ref_type = WhlInfoGroup::WhlInfoGroup;
  using _WipgInfoGroup_ref_type = WipgInfoGroup::WipgInfoGroup;
  using _BkpOfDstTrvld_ref_type = BkpOfDstTrvld::BkpOfDstTrvld;
  using _FogSetFrntReq_ref_type = FogSetFrntReq::FogSetFrntReq;
  using _FogSetReReq_ref_type = FogSetReReq::FogSetReReq;
  using _OffsForSpdWarnSetgReq_ref_type = OffsForSpdWarnSetgReq::OffsForSpdWarnSetgReq;
  using _DoorLeReSts_ref_type = DoorLeReSts::DoorLeReSts;
  using _DoorPassSts_ref_type = DoorPassSts::DoorPassSts;
  using _DoorRiReSts_ref_type = DoorRiReSts::DoorRiReSts;
  using _EpbSts_ref_type = EpbSts::EpbSts;
  using _ExtrLtgStsFrntFog_ref_type = ExtrLtgStsFrntFog::ExtrLtgStsFrntFog;
  using _ExtrLtgStsReFog_ref_type = ExtrLtgStsReFog::ExtrLtgStsReFog;
  using _GearLvr_ref_type = GearLvr::GearLvr;
  using _HoodSts_ref_type = HoodSts::HoodSts;
  using _HznSplyElectcSts1_ref_type = HznSplyElectcSts1::HznSplyElectcSts1;
  using _RainfallAmnt_ref_type = RainfallAmnt::RainfallAmnt;
  using _RoadMiscSgnInfoSts_ref_type = RoadMiscSgnInfoSts::RoadMiscSgnInfoSts;
  using _TrSts_ref_type = TrSts::TrSts;
  using _CarTiGlb_ref_type = CarTiGlb::CarTiGlb;
  using _OSM2TimeStamp_ref_type = OSM2TimeStamp::OSM2TimeStamp;

  _AccFusnTrfcReq_ref_type AccFusnTrfcReq_ref;
  _AccrPedlPsd0_ref_type AccrPedlPsd0_ref;
  _ALgtStdFromWhlSpdSafe1Chkd_ref_type ALgtStdFromWhlSpdSafe1Chkd_ref;
  _AmbTRaw_ref_type AmbTRaw_ref;
  _AsyDataWithCmpSafe1Chkd_ref_type AsyDataWithCmpSafe1Chkd_ref;
  _BltLockStFrnt_ref_type BltLockStFrnt_ref;
  _BrkPedlPsdRec_ref_type BrkPedlPsdRec_ref;
  _EgoMotion_ref_type EgoMotion_ref;
  _IndcrTurnReq_ref_type IndcrTurnReq_ref;
  _PinionSteerAgGroup_ref_type PinionSteerAgGroup_ref;
  _RoadSgnInfoActv0_ref_type RoadSgnInfoActv0_ref;
  _SpdAlrmActvForRoadSgnInfo0_ref_type SpdAlrmActvForRoadSgnInfo0_ref;
  _SteerWhlSnsrSafe1_ref_type SteerWhlSnsrSafe1_ref;
  _TrfcLiActvSts_ref_type TrfcLiActvSts_ref;
  _TrsmParkLockd_ref_type TrsmParkLockd_ref;
  _VehBattU1Vcc_ref_type VehBattU1Vcc_ref;
  _VehMNomRecsts_1_ref_type VehMNomRecsts_1_ref;
  _VehModMngtGlbSafe1_ref_type VehModMngtGlbSafe1_ref;
  _VehMtnStSafeGroup1_ref_type VehMtnStSafeGroup1_ref;
  _VehSpdIndcd1_ref_type VehSpdIndcd1_ref;
  _VehSpdLgtSafe1Chkd_ref_type VehSpdLgtSafe1Chkd_ref;
  _Vin1Vcc_ref_type Vin1Vcc_ref;
  _WhlInfoGroup_ref_type WhlInfoGroup_ref;
  _WipgInfoGroup_ref_type WipgInfoGroup_ref;
  _BkpOfDstTrvld_ref_type BkpOfDstTrvld_ref;
  _FogSetFrntReq_ref_type FogSetFrntReq_ref;
  _FogSetReReq_ref_type FogSetReReq_ref;
  _OffsForSpdWarnSetgReq_ref_type OffsForSpdWarnSetgReq_ref;
  _DoorLeReSts_ref_type DoorLeReSts_ref;
  _DoorPassSts_ref_type DoorPassSts_ref;
  _DoorRiReSts_ref_type DoorRiReSts_ref;
  _EpbSts_ref_type EpbSts_ref;
  _ExtrLtgStsFrntFog_ref_type ExtrLtgStsFrntFog_ref;
  _ExtrLtgStsReFog_ref_type ExtrLtgStsReFog_ref;
  _GearLvr_ref_type GearLvr_ref;
  _HoodSts_ref_type HoodSts_ref;
  _HznSplyElectcSts1_ref_type HznSplyElectcSts1_ref;
  _RainfallAmnt_ref_type RainfallAmnt_ref;
  _RoadMiscSgnInfoSts_ref_type RoadMiscSgnInfoSts_ref;
  _TrSts_ref_type TrSts_ref;
  _CarTiGlb_ref_type CarTiGlb_ref;
  _OSM2TimeStamp_ref_type OSM2TimeStamp_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ToSOCA_COMInfo1VCC instance.
 */
inline bool operator==(ToSOCA_COMInfo1VCC const& l,
                       ToSOCA_COMInfo1VCC const& r) noexcept {
  return (&l == &r) || ((l.AccFusnTrfcReq_ref == r.AccFusnTrfcReq_ref)
                         && (l.AccrPedlPsd0_ref == r.AccrPedlPsd0_ref)
                         && (l.ALgtStdFromWhlSpdSafe1Chkd_ref == r.ALgtStdFromWhlSpdSafe1Chkd_ref)
                         && (l.AmbTRaw_ref == r.AmbTRaw_ref)
                         && (l.AsyDataWithCmpSafe1Chkd_ref == r.AsyDataWithCmpSafe1Chkd_ref)
                         && (l.BltLockStFrnt_ref == r.BltLockStFrnt_ref)
                         && (l.BrkPedlPsdRec_ref == r.BrkPedlPsdRec_ref)
                         && (l.EgoMotion_ref == r.EgoMotion_ref)
                         && (l.IndcrTurnReq_ref == r.IndcrTurnReq_ref)
                         && (l.PinionSteerAgGroup_ref == r.PinionSteerAgGroup_ref)
                         && (l.RoadSgnInfoActv0_ref == r.RoadSgnInfoActv0_ref)
                         && (l.SpdAlrmActvForRoadSgnInfo0_ref == r.SpdAlrmActvForRoadSgnInfo0_ref)
                         && (l.SteerWhlSnsrSafe1_ref == r.SteerWhlSnsrSafe1_ref)
                         && (l.TrfcLiActvSts_ref == r.TrfcLiActvSts_ref)
                         && (l.TrsmParkLockd_ref == r.TrsmParkLockd_ref)
                         && (l.VehBattU1Vcc_ref == r.VehBattU1Vcc_ref)
                         && (l.VehMNomRecsts_1_ref == r.VehMNomRecsts_1_ref)
                         && (l.VehModMngtGlbSafe1_ref == r.VehModMngtGlbSafe1_ref)
                         && (l.VehMtnStSafeGroup1_ref == r.VehMtnStSafeGroup1_ref)
                         && (l.VehSpdIndcd1_ref == r.VehSpdIndcd1_ref)
                         && (l.VehSpdLgtSafe1Chkd_ref == r.VehSpdLgtSafe1Chkd_ref)
                         && (l.Vin1Vcc_ref == r.Vin1Vcc_ref)
                         && (l.WhlInfoGroup_ref == r.WhlInfoGroup_ref)
                         && (l.WipgInfoGroup_ref == r.WipgInfoGroup_ref)
                         && (l.BkpOfDstTrvld_ref == r.BkpOfDstTrvld_ref)
                         && (l.FogSetFrntReq_ref == r.FogSetFrntReq_ref)
                         && (l.FogSetReReq_ref == r.FogSetReReq_ref)
                         && (l.OffsForSpdWarnSetgReq_ref == r.OffsForSpdWarnSetgReq_ref)
                         && (l.DoorLeReSts_ref == r.DoorLeReSts_ref)
                         && (l.DoorPassSts_ref == r.DoorPassSts_ref)
                         && (l.DoorRiReSts_ref == r.DoorRiReSts_ref)
                         && (l.EpbSts_ref == r.EpbSts_ref)
                         && (l.ExtrLtgStsFrntFog_ref == r.ExtrLtgStsFrntFog_ref)
                         && (l.ExtrLtgStsReFog_ref == r.ExtrLtgStsReFog_ref)
                         && (l.GearLvr_ref == r.GearLvr_ref)
                         && (l.HoodSts_ref == r.HoodSts_ref)
                         && (l.HznSplyElectcSts1_ref == r.HznSplyElectcSts1_ref)
                         && (l.RainfallAmnt_ref == r.RainfallAmnt_ref)
                         && (l.RoadMiscSgnInfoSts_ref == r.RoadMiscSgnInfoSts_ref)
                         && (l.TrSts_ref == r.TrSts_ref)
                         && (l.CarTiGlb_ref == r.CarTiGlb_ref)
                         && (l.OSM2TimeStamp_ref == r.OSM2TimeStamp_ref)
  );
}

/*!
 * \brief Compare for inequality with another ToSOCA_COMInfo1VCC instance.
 */
inline bool operator!=(ToSOCA_COMInfo1VCC const& l,
                       ToSOCA_COMInfo1VCC const& r) noexcept {
  return !(l == r);
}

}  // namespace ToSOCA_COMInfo1VCC

#endif  // PERCEPTIONSIDEEXE_INCLUDE_TOSOCA_COMINFO1VCC_IMPL_TYPE_TOSOCA_COMINFO1VCC_H_
