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
/**        \file  PerceptionRearExe/include/GNSSinf1OutIDT/impl_type_gnssinf1outidt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_GNSSINF1OUTIDT_IMPL_TYPE_GNSSINF1OUTIDT_H_
#define PERCEPTIONREAREXE_INCLUDE_GNSSINF1OUTIDT_IMPL_TYPE_GNSSINF1OUTIDT_H_

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
#include "PVTposType1IDT/impl_type_pvtpostype1idt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint16IDT/impl_type_uint16idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace GNSSinf1OutIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type GNSSinf1OutIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GNSSinf1OutIDT
 */
struct GNSSinf1OutIDT {
  using GNSSinf1Chks_generated_type = uint8IDT::uint8IDT;
  using GNSSinf1Cntr_generated_type = uint8IDT::uint8IDT;
  using FixType_generated_type = uint8IDT::uint8IDT;
  using PVTStdTrack_generated_type = float32IDT::float32IDT;
  using PVTTimeValid_generated_type = uint8IDT::uint8IDT;
  using PVTTimestampHi1_generated_type = uint32IDT::uint32IDT;
  using PVTTimestampLo1_generated_type = uint32IDT::uint32IDT;
  using PVTTrack_generated_type = float32IDT::float32IDT;
  using PVThAcc_generated_type = uint16IDT::uint16IDT;
  using PVThDOP_generated_type = float32IDT::float32IDT;
  using PVTheight_generated_type = float32IDT::float32IDT;
  using PVTiTOW_generated_type = uint32IDT::uint32IDT;
  using PVTlat_generated_type = uint32IDT::uint32IDT;
  using PVTlon_generated_type = uint32IDT::uint32IDT;
  using PVTnumSV_generated_type = uint8IDT::uint8IDT;
  using PVTpDOP_generated_type = float32IDT::float32IDT;
  using PVTposType_generated_type = PVTposType1IDT::PVTposType1IDT;
  using PVTstdHeight_generated_type = float32IDT::float32IDT;
  using PVTstdLat_generated_type = float32IDT::float32IDT;
  using PVTstdLon_generated_type = float32IDT::float32IDT;
  using PVTtAcc_generated_type = uint32IDT::uint32IDT;
  using PVTvAcc_generated_type = uint16IDT::uint16IDT;
  using PVTvDOP_generated_type = float32IDT::float32IDT;
  using PVTweek_generated_type = uint16IDT::uint16IDT;
  using GNSSinf1Reserve_generated_type = uint8IDT::uint8IDT;

  GNSSinf1Chks_generated_type GNSSinf1Chks;
  GNSSinf1Cntr_generated_type GNSSinf1Cntr;
  FixType_generated_type FixType;
  PVTStdTrack_generated_type PVTStdTrack;
  PVTTimeValid_generated_type PVTTimeValid;
  PVTTimestampHi1_generated_type PVTTimestampHi1;
  PVTTimestampLo1_generated_type PVTTimestampLo1;
  PVTTrack_generated_type PVTTrack;
  PVThAcc_generated_type PVThAcc;
  PVThDOP_generated_type PVThDOP;
  PVTheight_generated_type PVTheight;
  PVTiTOW_generated_type PVTiTOW;
  PVTlat_generated_type PVTlat;
  PVTlon_generated_type PVTlon;
  PVTnumSV_generated_type PVTnumSV;
  PVTpDOP_generated_type PVTpDOP;
  PVTposType_generated_type PVTposType;
  PVTstdHeight_generated_type PVTstdHeight;
  PVTstdLat_generated_type PVTstdLat;
  PVTstdLon_generated_type PVTstdLon;
  PVTtAcc_generated_type PVTtAcc;
  PVTvAcc_generated_type PVTvAcc;
  PVTvDOP_generated_type PVTvDOP;
  PVTweek_generated_type PVTweek;
  GNSSinf1Reserve_generated_type GNSSinf1Reserve;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another GNSSinf1OutIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(GNSSinf1OutIDT const& l,
                       GNSSinf1OutIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.GNSSinf1Chks == r.GNSSinf1Chks)
                         && (l.GNSSinf1Cntr == r.GNSSinf1Cntr)
                         && (l.FixType == r.FixType)
                         && compare_float(l.PVTStdTrack, r.PVTStdTrack)
                         && (l.PVTTimeValid == r.PVTTimeValid)
                         && (l.PVTTimestampHi1 == r.PVTTimestampHi1)
                         && (l.PVTTimestampLo1 == r.PVTTimestampLo1)
                         && compare_float(l.PVTTrack, r.PVTTrack)
                         && (l.PVThAcc == r.PVThAcc)
                         && compare_float(l.PVThDOP, r.PVThDOP)
                         && compare_float(l.PVTheight, r.PVTheight)
                         && (l.PVTiTOW == r.PVTiTOW)
                         && (l.PVTlat == r.PVTlat)
                         && (l.PVTlon == r.PVTlon)
                         && (l.PVTnumSV == r.PVTnumSV)
                         && compare_float(l.PVTpDOP, r.PVTpDOP)
                         && (l.PVTposType == r.PVTposType)
                         && compare_float(l.PVTstdHeight, r.PVTstdHeight)
                         && compare_float(l.PVTstdLat, r.PVTstdLat)
                         && compare_float(l.PVTstdLon, r.PVTstdLon)
                         && (l.PVTtAcc == r.PVTtAcc)
                         && (l.PVTvAcc == r.PVTvAcc)
                         && compare_float(l.PVTvDOP, r.PVTvDOP)
                         && (l.PVTweek == r.PVTweek)
                         && (l.GNSSinf1Reserve == r.GNSSinf1Reserve)
  );
}

/*!
 * \brief   Compare for inequality with another GNSSinf1OutIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(GNSSinf1OutIDT const& l,
                       GNSSinf1OutIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace GNSSinf1OutIDT

#endif  // PERCEPTIONREAREXE_INCLUDE_GNSSINF1OUTIDT_IMPL_TYPE_GNSSINF1OUTIDT_H_
