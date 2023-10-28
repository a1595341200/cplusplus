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
/**        \file  TrafficSignInformationExe/include/TsiHmiData1VccIDT/impl_type_tsihmidata1vccidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_TSIHMIDATA1VCCIDT_IMPL_TYPE_TSIHMIDATA1VCCIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_TSIHMIDATA1VCCIDT_IMPL_TYPE_TSIHMIDATA1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "DY1IDT/impl_type_dy1idt.h"
#include "OffsForSpdWarnSetgSts1IDT/impl_type_offsforspdwarnsetgsts1idt.h"
#include "OnOff1IDT/impl_type_onoff1idt.h"
#include "SpdCoupldSgn3IDT/impl_type_spdcoupldsgn3idt.h"
#include "SpdLimWarnReq1IDT/impl_type_spdlimwarnreq1idt.h"
#include "SpdUnit1IDT/impl_type_spdunit1idt.h"
#include "SpplTrfcSgnInfoIDT/impl_type_sppltrfcsgninfoidt.h"
#include "TrfcInfoMiscFirstIDT/impl_type_trfcinfomiscfirstidt.h"
#include "TrfcSgnInfoStsIDT/impl_type_trfcsgninfostsidt.h"
#include "YesNo2VccIDT/impl_type_yesno2vccidt.h"
#include "uint16IDT/impl_type_uint16idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace TsiHmiData1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TsiHmiData1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TsiHmiData1VccIDT
 */
struct TsiHmiData1VccIDT {
  using RoadSgnInfoSts_generated_type = TrfcSgnInfoStsIDT::TrfcSgnInfoStsIDT;
  using SpdLimFirst_generated_type = uint8IDT::uint8IDT;
  using SpdLimWarnReq_generated_type = SpdLimWarnReq1IDT::SpdLimWarnReq1IDT;
  using TsiRoadMiscSgnInfoSts_generated_type = OnOff1IDT::OnOff1IDT;
  using SpdAlrmActvSts_generated_type = DY1IDT::DY1IDT;
  using OffsForSpdWarnSetgSts_generated_type = OffsForSpdWarnSetgSts1IDT::OffsForSpdWarnSetgSts1IDT;
  using TrfcInfoMiscFirst_generated_type = TrfcInfoMiscFirstIDT::TrfcInfoMiscFirstIDT;
  using SpdLimCamFirst_generated_type = OnOff1IDT::OnOff1IDT;
  using SpdLimSec_generated_type = uint8IDT::uint8IDT;
  using SpdLimUnit_generated_type = SpdUnit1IDT::SpdUnit1IDT;
  using CtryForRoadSgnInfo_generated_type = uint16IDT::uint16IDT;
  using SpdLimWarnReqAud_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using SpdLimSpplFirst_generated_type = SpplTrfcSgnInfoIDT::SpplTrfcSgnInfoIDT;
  using SpdLimCoupldFirst_generated_type = SpdCoupldSgn3IDT::SpdCoupldSgn3IDT;

  RoadSgnInfoSts_generated_type RoadSgnInfoSts;
  SpdLimFirst_generated_type SpdLimFirst;
  SpdLimWarnReq_generated_type SpdLimWarnReq;
  TsiRoadMiscSgnInfoSts_generated_type TsiRoadMiscSgnInfoSts;
  SpdAlrmActvSts_generated_type SpdAlrmActvSts;
  OffsForSpdWarnSetgSts_generated_type OffsForSpdWarnSetgSts;
  TrfcInfoMiscFirst_generated_type TrfcInfoMiscFirst;
  SpdLimCamFirst_generated_type SpdLimCamFirst;
  SpdLimSec_generated_type SpdLimSec;
  SpdLimUnit_generated_type SpdLimUnit;
  CtryForRoadSgnInfo_generated_type CtryForRoadSgnInfo;
  SpdLimWarnReqAud_generated_type SpdLimWarnReqAud;
  SpdLimSpplFirst_generated_type SpdLimSpplFirst;
  SpdLimCoupldFirst_generated_type SpdLimCoupldFirst;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TsiHmiData1VccIDT instance.
 */
inline bool operator==(TsiHmiData1VccIDT const& l,
                       TsiHmiData1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.RoadSgnInfoSts == r.RoadSgnInfoSts)
                         && (l.SpdLimFirst == r.SpdLimFirst)
                         && (l.SpdLimWarnReq == r.SpdLimWarnReq)
                         && (l.TsiRoadMiscSgnInfoSts == r.TsiRoadMiscSgnInfoSts)
                         && (l.SpdAlrmActvSts == r.SpdAlrmActvSts)
                         && (l.OffsForSpdWarnSetgSts == r.OffsForSpdWarnSetgSts)
                         && (l.TrfcInfoMiscFirst == r.TrfcInfoMiscFirst)
                         && (l.SpdLimCamFirst == r.SpdLimCamFirst)
                         && (l.SpdLimSec == r.SpdLimSec)
                         && (l.SpdLimUnit == r.SpdLimUnit)
                         && (l.CtryForRoadSgnInfo == r.CtryForRoadSgnInfo)
                         && (l.SpdLimWarnReqAud == r.SpdLimWarnReqAud)
                         && (l.SpdLimSpplFirst == r.SpdLimSpplFirst)
                         && (l.SpdLimCoupldFirst == r.SpdLimCoupldFirst)
  );
}

/*!
 * \brief Compare for inequality with another TsiHmiData1VccIDT instance.
 */
inline bool operator!=(TsiHmiData1VccIDT const& l,
                       TsiHmiData1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TsiHmiData1VccIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_TSIHMIDATA1VCCIDT_IMPL_TYPE_TSIHMIDATA1VCCIDT_H_
