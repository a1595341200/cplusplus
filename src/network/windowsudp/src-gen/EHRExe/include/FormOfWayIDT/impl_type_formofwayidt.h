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
/**        \file  EHRExe/include/FormOfWayIDT/impl_type_formofwayidt.h
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

#ifndef EHREXE_INCLUDE_FORMOFWAYIDT_IMPL_TYPE_FORMOFWAYIDT_H_
#define EHREXE_INCLUDE_FORMOFWAYIDT_IMPL_TYPE_FORMOFWAYIDT_H_

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
#include "AvailableIDT/impl_type_availableidt.h"
#include "FormOfWay1IDT/impl_type_formofway1idt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace FormOfWayIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FormOfWayIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FormOfWayIDT
 */
struct FormOfWayIDT {
  using InstanceId_generated_type = uint32IDT::uint32IDT;
  using FromOfWayConfidence_generated_type = float32IDT::float32IDT;
  using PathId_generated_type = uint32IDT::uint32IDT;
  using LaneNumber_generated_type = uint8IDT::uint8IDT;
  using PathOffset_generated_type = uint32IDT::uint32IDT;
  using EndOffset_generated_type = uint32IDT::uint32IDT;
  using Available_generated_type = AvailableIDT::AvailableIDT;
  using FormOfWay1_generated_type = FormOfWay1IDT::FormOfWay1IDT;

  InstanceId_generated_type InstanceId;
  FromOfWayConfidence_generated_type FromOfWayConfidence;
  PathId_generated_type PathId;
  LaneNumber_generated_type LaneNumber;
  PathOffset_generated_type PathOffset;
  EndOffset_generated_type EndOffset;
  Available_generated_type Available;
  FormOfWay1_generated_type FormOfWay1;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another FormOfWayIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(FormOfWayIDT const& l,
                       FormOfWayIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.InstanceId == r.InstanceId)
                         && compare_float(l.FromOfWayConfidence, r.FromOfWayConfidence)
                         && (l.PathId == r.PathId)
                         && (l.LaneNumber == r.LaneNumber)
                         && (l.PathOffset == r.PathOffset)
                         && (l.EndOffset == r.EndOffset)
                         && (l.Available == r.Available)
                         && (l.FormOfWay1 == r.FormOfWay1)
  );
}

/*!
 * \brief   Compare for inequality with another FormOfWayIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(FormOfWayIDT const& l,
                       FormOfWayIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FormOfWayIDT

#endif  // EHREXE_INCLUDE_FORMOFWAYIDT_IMPL_TYPE_FORMOFWAYIDT_H_
