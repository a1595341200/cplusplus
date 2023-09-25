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
/**        \file  TrafficSignInformationExe/include/TsiHmiData1Vcc/impl_type_tsihmidata1vcc.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_TSIHMIDATA1VCC_IMPL_TYPE_TSIHMIDATA1VCC_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_TSIHMIDATA1VCC_IMPL_TYPE_TSIHMIDATA1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CtryForRoadSgnInfo/impl_type_ctryforroadsgninfo.h"
#include "OffsForSpdWarnSetgSts/impl_type_offsforspdwarnsetgsts.h"
#include "RoadSgnInfoSts/impl_type_roadsgninfosts.h"
#include "SpdAlrmActvSts/impl_type_spdalrmactvsts.h"
#include "SpdLimCamFirst/impl_type_spdlimcamfirst.h"
#include "SpdLimCoupldFirst/impl_type_spdlimcoupldfirst.h"
#include "SpdLimFirst/impl_type_spdlimfirst.h"
#include "SpdLimSec/impl_type_spdlimsec.h"
#include "SpdLimSpplFirst/impl_type_spdlimspplfirst.h"
#include "SpdLimWarnReqAud/impl_type_spdlimwarnreqaud.h"
#include "TrfcInfoMiscFirst/impl_type_trfcinfomiscfirst.h"

namespace TsiHmiData1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TsiHmiData1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TsiHmiData1Vcc
 */
struct TsiHmiData1Vcc {
  using _RoadSgnInfoSts_ref_type = RoadSgnInfoSts::RoadSgnInfoSts;
  using _TrfcInfoMiscFirst_ref_type = TrfcInfoMiscFirst::TrfcInfoMiscFirst;
  using _SpdAlrmActvSts_ref_type = SpdAlrmActvSts::SpdAlrmActvSts;
  using _SpdLimFirst_ref_type = SpdLimFirst::SpdLimFirst;
  using _SpdLimSec_ref_type = SpdLimSec::SpdLimSec;
  using _SpdLimSpplFirst_ref_type = SpdLimSpplFirst::SpdLimSpplFirst;
  using _SpdLimCoupldFirst_ref_type = SpdLimCoupldFirst::SpdLimCoupldFirst;
  using _OffsForSpdWarnSetgSts_ref_type = OffsForSpdWarnSetgSts::OffsForSpdWarnSetgSts;
  using _SpdLimWarnReqAud_ref_type = SpdLimWarnReqAud::SpdLimWarnReqAud;
  using _SpdLimCamFirst_ref_type = SpdLimCamFirst::SpdLimCamFirst;
  using _CtryForRoadSgnInfo_ref_type = CtryForRoadSgnInfo::CtryForRoadSgnInfo;

  _RoadSgnInfoSts_ref_type RoadSgnInfoSts_ref;
  _TrfcInfoMiscFirst_ref_type TrfcInfoMiscFirst_ref;
  _SpdAlrmActvSts_ref_type SpdAlrmActvSts_ref;
  _SpdLimFirst_ref_type SpdLimFirst_ref;
  _SpdLimSec_ref_type SpdLimSec_ref;
  _SpdLimSpplFirst_ref_type SpdLimSpplFirst_ref;
  _SpdLimCoupldFirst_ref_type SpdLimCoupldFirst_ref;
  _OffsForSpdWarnSetgSts_ref_type OffsForSpdWarnSetgSts_ref;
  _SpdLimWarnReqAud_ref_type SpdLimWarnReqAud_ref;
  _SpdLimCamFirst_ref_type SpdLimCamFirst_ref;
  _CtryForRoadSgnInfo_ref_type CtryForRoadSgnInfo_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TsiHmiData1Vcc instance.
 */
inline bool operator==(TsiHmiData1Vcc const& l,
                       TsiHmiData1Vcc const& r) noexcept {
  return (&l == &r) || ((l.RoadSgnInfoSts_ref == r.RoadSgnInfoSts_ref)
                         && (l.TrfcInfoMiscFirst_ref == r.TrfcInfoMiscFirst_ref)
                         && (l.SpdAlrmActvSts_ref == r.SpdAlrmActvSts_ref)
                         && (l.SpdLimFirst_ref == r.SpdLimFirst_ref)
                         && (l.SpdLimSec_ref == r.SpdLimSec_ref)
                         && (l.SpdLimSpplFirst_ref == r.SpdLimSpplFirst_ref)
                         && (l.SpdLimCoupldFirst_ref == r.SpdLimCoupldFirst_ref)
                         && (l.OffsForSpdWarnSetgSts_ref == r.OffsForSpdWarnSetgSts_ref)
                         && (l.SpdLimWarnReqAud_ref == r.SpdLimWarnReqAud_ref)
                         && (l.SpdLimCamFirst_ref == r.SpdLimCamFirst_ref)
                         && (l.CtryForRoadSgnInfo_ref == r.CtryForRoadSgnInfo_ref)
  );
}

/*!
 * \brief Compare for inequality with another TsiHmiData1Vcc instance.
 */
inline bool operator!=(TsiHmiData1Vcc const& l,
                       TsiHmiData1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace TsiHmiData1Vcc

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_TSIHMIDATA1VCC_IMPL_TYPE_TSIHMIDATA1VCC_H_
