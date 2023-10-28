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
/**        \file  LocalizationFusionExe/include/GNSSinf2VccIDT/impl_type_gnssinf2vccidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_GNSSINF2VCCIDT_IMPL_TYPE_GNSSINF2VCCIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_GNSSINF2VCCIDT_IMPL_TYPE_GNSSINF2VCCIDT_H_

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
#include "uint16IDT/impl_type_uint16idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace GNSSinf2VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type GNSSinf2VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GNSSinf2VccIDT
 */
struct GNSSinf2VccIDT {
  using CN0_generated_type = float32IDT::float32IDT;
  using GNSSinf2Chks_generated_type = uint8IDT::uint8IDT;
  using GNSSinf2Cntr_generated_type = uint8IDT::uint8IDT;
  using Hdop_generated_type = float32IDT::float32IDT;
  using Leap_generated_type = float32IDT::float32IDT;
  using PVTErrcode_generated_type = uint16IDT::uint16IDT;
  using PVTTimestampHi2_generated_type = uint32IDT::uint32IDT;
  using PVTTimestampLo2_generated_type = uint32IDT::uint32IDT;
  using PVTeDOP_generated_type = float32IDT::float32IDT;
  using PVTgDOP_generated_type = float32IDT::float32IDT;
  using PVTnDOP_generated_type = float32IDT::float32IDT;
  using PVTsAcc_generated_type = uint16IDT::uint16IDT;
  using PVTtAcc2_generated_type = uint32IDT::uint32IDT;
  using PVTtDOP_generated_type = float32IDT::float32IDT;
  using PVTvelD_generated_type = float32IDT::float32IDT;
  using PVTvelDStd_generated_type = float32IDT::float32IDT;
  using PVTvelE_generated_type = float32IDT::float32IDT;
  using PVTvelEStd_generated_type = float32IDT::float32IDT;
  using PVTvelN_generated_type = float32IDT::float32IDT;
  using PVTvelNStd_generated_type = float32IDT::float32IDT;
  using GNSSinf2Reserve_generated_type = uint8IDT::uint8IDT;
  using Svtrk_generated_type = uint8IDT::uint8IDT;
  using Svused_generated_type = uint8IDT::uint8IDT;

  CN0_generated_type CN0;
  GNSSinf2Chks_generated_type GNSSinf2Chks;
  GNSSinf2Cntr_generated_type GNSSinf2Cntr;
  Hdop_generated_type Hdop;
  Leap_generated_type Leap;
  PVTErrcode_generated_type PVTErrcode;
  PVTTimestampHi2_generated_type PVTTimestampHi2;
  PVTTimestampLo2_generated_type PVTTimestampLo2;
  PVTeDOP_generated_type PVTeDOP;
  PVTgDOP_generated_type PVTgDOP;
  PVTnDOP_generated_type PVTnDOP;
  PVTsAcc_generated_type PVTsAcc;
  PVTtAcc2_generated_type PVTtAcc2;
  PVTtDOP_generated_type PVTtDOP;
  PVTvelD_generated_type PVTvelD;
  PVTvelDStd_generated_type PVTvelDStd;
  PVTvelE_generated_type PVTvelE;
  PVTvelEStd_generated_type PVTvelEStd;
  PVTvelN_generated_type PVTvelN;
  PVTvelNStd_generated_type PVTvelNStd;
  GNSSinf2Reserve_generated_type GNSSinf2Reserve;
  Svtrk_generated_type Svtrk;
  Svused_generated_type Svused;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another GNSSinf2VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(GNSSinf2VccIDT const& l,
                       GNSSinf2VccIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.CN0, r.CN0)
                         && (l.GNSSinf2Chks == r.GNSSinf2Chks)
                         && (l.GNSSinf2Cntr == r.GNSSinf2Cntr)
                         && compare_float(l.Hdop, r.Hdop)
                         && compare_float(l.Leap, r.Leap)
                         && (l.PVTErrcode == r.PVTErrcode)
                         && (l.PVTTimestampHi2 == r.PVTTimestampHi2)
                         && (l.PVTTimestampLo2 == r.PVTTimestampLo2)
                         && compare_float(l.PVTeDOP, r.PVTeDOP)
                         && compare_float(l.PVTgDOP, r.PVTgDOP)
                         && compare_float(l.PVTnDOP, r.PVTnDOP)
                         && (l.PVTsAcc == r.PVTsAcc)
                         && (l.PVTtAcc2 == r.PVTtAcc2)
                         && compare_float(l.PVTtDOP, r.PVTtDOP)
                         && compare_float(l.PVTvelD, r.PVTvelD)
                         && compare_float(l.PVTvelDStd, r.PVTvelDStd)
                         && compare_float(l.PVTvelE, r.PVTvelE)
                         && compare_float(l.PVTvelEStd, r.PVTvelEStd)
                         && compare_float(l.PVTvelN, r.PVTvelN)
                         && compare_float(l.PVTvelNStd, r.PVTvelNStd)
                         && (l.GNSSinf2Reserve == r.GNSSinf2Reserve)
                         && (l.Svtrk == r.Svtrk)
                         && (l.Svused == r.Svused)
  );
}

/*!
 * \brief   Compare for inequality with another GNSSinf2VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(GNSSinf2VccIDT const& l,
                       GNSSinf2VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace GNSSinf2VccIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_GNSSINF2VCCIDT_IMPL_TYPE_GNSSINF2VCCIDT_H_
