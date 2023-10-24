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
/**        \file  EDRExe/include/PosnFromSatlt1VccIDT/impl_type_posnfromsatlt1vccidt.h
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

#ifndef EDREXE_INCLUDE_POSNFROMSATLT1VCCIDT_IMPL_TYPE_POSNFROMSATLT1VCCIDT_H_
#define EDREXE_INCLUDE_POSNFROMSATLT1VCCIDT_IMPL_TYPE_POSNFROMSATLT1VCCIDT_H_

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
#include "float32IDT/impl_type_float32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace PosnFromSatlt1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PosnFromSatlt1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PosnFromSatlt1VccIDT
 */
struct PosnFromSatlt1VccIDT {
  using PosnAlti_generated_type = float32IDT::float32IDT;
  using PosnDir_generated_type = float32IDT::float32IDT;
  using PosnLatFromSatlt_generated_type = float32IDT::float32IDT;
  using PosnLgtFromSatlt_generated_type = float32IDT::float32IDT;
  using PosnSPd_generated_type = float32IDT::float32IDT;
  using PosnVHozl_generated_type = float32IDT::float32IDT;
  using PosnVVert_generated_type = float32IDT::float32IDT;
  using TiForMins_generated_type = uint8IDT::uint8IDT;
  using TiForMsec_generated_type = float32IDT::float32IDT;
  using TiForSec_generated_type = uint8IDT::uint8IDT;
  using UTCForDay_generated_type = uint8IDT::uint8IDT;
  using UTCForHr_generated_type = uint8IDT::uint8IDT;
  using UTCForMins_generated_type = uint8IDT::uint8IDT;
  using UTCForMth_generated_type = uint8IDT::uint8IDT;
  using UTCForSec_generated_type = uint8IDT::uint8IDT;
  using UTCForYr_generated_type = uint8IDT::uint8IDT;

  PosnAlti_generated_type PosnAlti;
  PosnDir_generated_type PosnDir;
  PosnLatFromSatlt_generated_type PosnLatFromSatlt;
  PosnLgtFromSatlt_generated_type PosnLgtFromSatlt;
  PosnSPd_generated_type PosnSPd;
  PosnVHozl_generated_type PosnVHozl;
  PosnVVert_generated_type PosnVVert;
  TiForMins_generated_type TiForMins;
  TiForMsec_generated_type TiForMsec;
  TiForSec_generated_type TiForSec;
  UTCForDay_generated_type UTCForDay;
  UTCForHr_generated_type UTCForHr;
  UTCForMins_generated_type UTCForMins;
  UTCForMth_generated_type UTCForMth;
  UTCForSec_generated_type UTCForSec;
  UTCForYr_generated_type UTCForYr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another PosnFromSatlt1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(PosnFromSatlt1VccIDT const& l,
                       PosnFromSatlt1VccIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.PosnAlti, r.PosnAlti)
                         && compare_float(l.PosnDir, r.PosnDir)
                         && compare_float(l.PosnLatFromSatlt, r.PosnLatFromSatlt)
                         && compare_float(l.PosnLgtFromSatlt, r.PosnLgtFromSatlt)
                         && compare_float(l.PosnSPd, r.PosnSPd)
                         && compare_float(l.PosnVHozl, r.PosnVHozl)
                         && compare_float(l.PosnVVert, r.PosnVVert)
                         && (l.TiForMins == r.TiForMins)
                         && compare_float(l.TiForMsec, r.TiForMsec)
                         && (l.TiForSec == r.TiForSec)
                         && (l.UTCForDay == r.UTCForDay)
                         && (l.UTCForHr == r.UTCForHr)
                         && (l.UTCForMins == r.UTCForMins)
                         && (l.UTCForMth == r.UTCForMth)
                         && (l.UTCForSec == r.UTCForSec)
                         && (l.UTCForYr == r.UTCForYr)
  );
}

/*!
 * \brief   Compare for inequality with another PosnFromSatlt1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(PosnFromSatlt1VccIDT const& l,
                       PosnFromSatlt1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace PosnFromSatlt1VccIDT

#endif  // EDREXE_INCLUDE_POSNFROMSATLT1VCCIDT_IMPL_TYPE_POSNFROMSATLT1VCCIDT_H_
