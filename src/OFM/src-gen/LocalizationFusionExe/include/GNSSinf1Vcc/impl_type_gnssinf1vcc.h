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
/**        \file  LocalizationFusionExe/include/GNSSinf1Vcc/impl_type_gnssinf1vcc.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_GNSSINF1VCC_IMPL_TYPE_GNSSINF1VCC_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_GNSSINF1VCC_IMPL_TYPE_GNSSINF1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "FixType/impl_type_fixtype.h"
#include "GNSSinf1Chks/impl_type_gnssinf1chks.h"
#include "GNSSinf1Cntr/impl_type_gnssinf1cntr.h"
#include "GNSSinf1Reserve/impl_type_gnssinf1reserve.h"
#include "PVTStdTrack/impl_type_pvtstdtrack.h"
#include "PVTTimeValid/impl_type_pvttimevalid.h"
#include "PVTTimestampHi1/impl_type_pvttimestamphi1.h"
#include "PVTTimestampLo1/impl_type_pvttimestamplo1.h"
#include "PVTTrack/impl_type_pvttrack.h"
#include "PVThAcc/impl_type_pvthacc.h"
#include "PVThDOP/impl_type_pvthdop.h"
#include "PVTheight/impl_type_pvtheight.h"
#include "PVTiTOW/impl_type_pvtitow.h"
#include "PVTlat/impl_type_pvtlat.h"
#include "PVTlon/impl_type_pvtlon.h"
#include "PVTnumSV/impl_type_pvtnumsv.h"
#include "PVTpDOP/impl_type_pvtpdop.h"
#include "PVTposType/impl_type_pvtpostype.h"
#include "PVTstdHeight/impl_type_pvtstdheight.h"
#include "PVTstdLat/impl_type_pvtstdlat.h"
#include "PVTstdLon/impl_type_pvtstdlon.h"
#include "PVTtAcc1/impl_type_pvttacc1.h"
#include "PVTvAcc/impl_type_pvtvacc.h"
#include "PVTvDOP/impl_type_pvtvdop.h"
#include "PVTweek/impl_type_pvtweek.h"

namespace GNSSinf1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type GNSSinf1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GNSSinf1Vcc
 */
struct GNSSinf1Vcc {
  using _GNSSinf1Chks_ref_type = GNSSinf1Chks::GNSSinf1Chks;
  using _GNSSinf1Cntr_ref_type = GNSSinf1Cntr::GNSSinf1Cntr;
  using _FixType_ref_type = FixType::FixType;
  using _PVTStdTrack_ref_type = PVTStdTrack::PVTStdTrack;
  using _PVTTimeValid_ref_type = PVTTimeValid::PVTTimeValid;
  using _PVTTimestampHi1_ref_type = PVTTimestampHi1::PVTTimestampHi1;
  using _PVTTimestampLo1_ref_type = PVTTimestampLo1::PVTTimestampLo1;
  using _PVTTrack_ref_type = PVTTrack::PVTTrack;
  using _PVThAcc_ref_type = PVThAcc::PVThAcc;
  using _PVThDOP_ref_type = PVThDOP::PVThDOP;
  using _PVTheight_ref_type = PVTheight::PVTheight;
  using _PVTiTOW_ref_type = PVTiTOW::PVTiTOW;
  using _PVTlat_ref_type = PVTlat::PVTlat;
  using _PVTlon_ref_type = PVTlon::PVTlon;
  using _PVTnumSV_ref_type = PVTnumSV::PVTnumSV;
  using _PVTpDOP_ref_type = PVTpDOP::PVTpDOP;
  using _PVTposType_ref_type = PVTposType::PVTposType;
  using _PVTstdHeight_ref_type = PVTstdHeight::PVTstdHeight;
  using _PVTstdLat_ref_type = PVTstdLat::PVTstdLat;
  using _PVTstdLon_ref_type = PVTstdLon::PVTstdLon;
  using _PVTtAcc1_ref_type = PVTtAcc1::PVTtAcc1;
  using _PVTvAcc_ref_type = PVTvAcc::PVTvAcc;
  using _PVTvDOP_ref_type = PVTvDOP::PVTvDOP;
  using _PVTweek_ref_type = PVTweek::PVTweek;
  using _GNSSinf1Reserve_ref_type = GNSSinf1Reserve::GNSSinf1Reserve;

  _GNSSinf1Chks_ref_type GNSSinf1Chks_ref;
  _GNSSinf1Cntr_ref_type GNSSinf1Cntr_ref;
  _FixType_ref_type FixType_ref;
  _PVTStdTrack_ref_type PVTStdTrack_ref;
  _PVTTimeValid_ref_type PVTTimeValid_ref;
  _PVTTimestampHi1_ref_type PVTTimestampHi1_ref;
  _PVTTimestampLo1_ref_type PVTTimestampLo1_ref;
  _PVTTrack_ref_type PVTTrack_ref;
  _PVThAcc_ref_type PVThAcc_ref;
  _PVThDOP_ref_type PVThDOP_ref;
  _PVTheight_ref_type PVTheight_ref;
  _PVTiTOW_ref_type PVTiTOW_ref;
  _PVTlat_ref_type PVTlat_ref;
  _PVTlon_ref_type PVTlon_ref;
  _PVTnumSV_ref_type PVTnumSV_ref;
  _PVTpDOP_ref_type PVTpDOP_ref;
  _PVTposType_ref_type PVTposType_ref;
  _PVTstdHeight_ref_type PVTstdHeight_ref;
  _PVTstdLat_ref_type PVTstdLat_ref;
  _PVTstdLon_ref_type PVTstdLon_ref;
  _PVTtAcc1_ref_type PVTtAcc1_ref;
  _PVTvAcc_ref_type PVTvAcc_ref;
  _PVTvDOP_ref_type PVTvDOP_ref;
  _PVTweek_ref_type PVTweek_ref;
  _GNSSinf1Reserve_ref_type GNSSinf1Reserve_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another GNSSinf1Vcc instance.
 */
inline bool operator==(GNSSinf1Vcc const& l,
                       GNSSinf1Vcc const& r) noexcept {
  return (&l == &r) || ((l.GNSSinf1Chks_ref == r.GNSSinf1Chks_ref)
                         && (l.GNSSinf1Cntr_ref == r.GNSSinf1Cntr_ref)
                         && (l.FixType_ref == r.FixType_ref)
                         && (l.PVTStdTrack_ref == r.PVTStdTrack_ref)
                         && (l.PVTTimeValid_ref == r.PVTTimeValid_ref)
                         && (l.PVTTimestampHi1_ref == r.PVTTimestampHi1_ref)
                         && (l.PVTTimestampLo1_ref == r.PVTTimestampLo1_ref)
                         && (l.PVTTrack_ref == r.PVTTrack_ref)
                         && (l.PVThAcc_ref == r.PVThAcc_ref)
                         && (l.PVThDOP_ref == r.PVThDOP_ref)
                         && (l.PVTheight_ref == r.PVTheight_ref)
                         && (l.PVTiTOW_ref == r.PVTiTOW_ref)
                         && (l.PVTlat_ref == r.PVTlat_ref)
                         && (l.PVTlon_ref == r.PVTlon_ref)
                         && (l.PVTnumSV_ref == r.PVTnumSV_ref)
                         && (l.PVTpDOP_ref == r.PVTpDOP_ref)
                         && (l.PVTposType_ref == r.PVTposType_ref)
                         && (l.PVTstdHeight_ref == r.PVTstdHeight_ref)
                         && (l.PVTstdLat_ref == r.PVTstdLat_ref)
                         && (l.PVTstdLon_ref == r.PVTstdLon_ref)
                         && (l.PVTtAcc1_ref == r.PVTtAcc1_ref)
                         && (l.PVTvAcc_ref == r.PVTvAcc_ref)
                         && (l.PVTvDOP_ref == r.PVTvDOP_ref)
                         && (l.PVTweek_ref == r.PVTweek_ref)
                         && (l.GNSSinf1Reserve_ref == r.GNSSinf1Reserve_ref)
  );
}

/*!
 * \brief Compare for inequality with another GNSSinf1Vcc instance.
 */
inline bool operator!=(GNSSinf1Vcc const& l,
                       GNSSinf1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace GNSSinf1Vcc

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_GNSSINF1VCC_IMPL_TYPE_GNSSINF1VCC_H_
