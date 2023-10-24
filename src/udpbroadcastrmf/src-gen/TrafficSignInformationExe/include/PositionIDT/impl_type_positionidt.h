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
/**        \file  TrafficSignInformationExe/include/PositionIDT/impl_type_positionidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_POSITIONIDT_IMPL_TYPE_POSITIONIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_POSITIONIDT_IMPL_TYPE_POSITIONIDT_H_

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
#include "uint64IDT/impl_type_uint64idt.h"

namespace PositionIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PositionIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PositionIDT
 */
struct PositionIDT {
  using PositionTimestamp_generated_type = uint64IDT::uint64IDT;
  using PosX_generated_type = float32IDT::float32IDT;
  using PosY_generated_type = float32IDT::float32IDT;
  using PosZ_generated_type = float32IDT::float32IDT;
  using PositionHeading_generated_type = float32IDT::float32IDT;
  using PositionVX_generated_type = float32IDT::float32IDT;
  using PositionVY_generated_type = float32IDT::float32IDT;
  using PositionVZ_generated_type = float32IDT::float32IDT;

  PositionTimestamp_generated_type PositionTimestamp;
  PosX_generated_type PosX;
  PosY_generated_type PosY;
  PosZ_generated_type PosZ;
  PositionHeading_generated_type PositionHeading;
  PositionVX_generated_type PositionVX;
  PositionVY_generated_type PositionVY;
  PositionVZ_generated_type PositionVZ;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another PositionIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(PositionIDT const& l,
                       PositionIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.PositionTimestamp == r.PositionTimestamp)
                         && compare_float(l.PosX, r.PosX)
                         && compare_float(l.PosY, r.PosY)
                         && compare_float(l.PosZ, r.PosZ)
                         && compare_float(l.PositionHeading, r.PositionHeading)
                         && compare_float(l.PositionVX, r.PositionVX)
                         && compare_float(l.PositionVY, r.PositionVY)
                         && compare_float(l.PositionVZ, r.PositionVZ)
  );
}

/*!
 * \brief   Compare for inequality with another PositionIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(PositionIDT const& l,
                       PositionIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace PositionIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_POSITIONIDT_IMPL_TYPE_POSITIONIDT_H_
