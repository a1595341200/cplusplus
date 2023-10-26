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
/**        \file  PerceptionSideExe/include/VehSpdLgtSafe1ChkdIDT/impl_type_vehspdlgtsafe1chkdidt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_VEHSPDLGTSAFE1CHKDIDT_IMPL_TYPE_VEHSPDLGTSAFE1CHKDIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_VEHSPDLGTSAFE1CHKDIDT_IMPL_TYPE_VEHSPDLGTSAFE1CHKDIDT_H_

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
#include "Bool1VccIDT/impl_type_bool1vccidt.h"
#include "GenQf1VccIDT/impl_type_genqf1vccidt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint16IDT/impl_type_uint16idt.h"

namespace VehSpdLgtSafe1ChkdIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehSpdLgtSafe1ChkdIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehSpdLgtSafe1ChkdIDT
 */
struct VehSpdLgtSafe1ChkdIDT {
  using Age1_generated_type = uint16IDT::uint16IDT;
  using IsUpdated_generated_type = Bool1VccIDT::Bool1VccIDT;
  using IsUpdatedAndValid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using IsValid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using VehSpdLgt_generated_type = float32IDT::float32IDT;
  using VehSpdLgtQf_generated_type = GenQf1VccIDT::GenQf1VccIDT;

  Age1_generated_type Age1;
  IsUpdated_generated_type IsUpdated;
  IsUpdatedAndValid_generated_type IsUpdatedAndValid;
  IsValid_generated_type IsValid;
  VehSpdLgt_generated_type VehSpdLgt;
  VehSpdLgtQf_generated_type VehSpdLgtQf;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another VehSpdLgtSafe1ChkdIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(VehSpdLgtSafe1ChkdIDT const& l,
                       VehSpdLgtSafe1ChkdIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.Age1 == r.Age1)
                         && (l.IsUpdated == r.IsUpdated)
                         && (l.IsUpdatedAndValid == r.IsUpdatedAndValid)
                         && (l.IsValid == r.IsValid)
                         && compare_float(l.VehSpdLgt, r.VehSpdLgt)
                         && (l.VehSpdLgtQf == r.VehSpdLgtQf)
  );
}

/*!
 * \brief   Compare for inequality with another VehSpdLgtSafe1ChkdIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(VehSpdLgtSafe1ChkdIDT const& l,
                       VehSpdLgtSafe1ChkdIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace VehSpdLgtSafe1ChkdIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_VEHSPDLGTSAFE1CHKDIDT_IMPL_TYPE_VEHSPDLGTSAFE1CHKDIDT_H_
