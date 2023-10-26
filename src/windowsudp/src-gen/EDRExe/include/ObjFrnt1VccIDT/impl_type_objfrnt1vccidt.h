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
/**        \file  EDRExe/include/ObjFrnt1VccIDT/impl_type_objfrnt1vccidt.h
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

#ifndef EDREXE_INCLUDE_OBJFRNT1VCCIDT_IMPL_TYPE_OBJFRNT1VCCIDT_H_
#define EDREXE_INCLUDE_OBJFRNT1VCCIDT_IMPL_TYPE_OBJFRNT1VCCIDT_H_

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
#include "AsyLineLeColor1VccIDT/impl_type_asylinelecolor1vccidt.h"
#include "HdDirOfObjFrnt1VccIDT/impl_type_hddirofobjfrnt1vccidt.h"
#include "TypOfObjFrnt1VccIDT/impl_type_typofobjfrnt1vccidt.h"
#include "float32IDT/impl_type_float32idt.h"

namespace ObjFrnt1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ObjFrnt1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjFrnt1VccIDT
 */
struct ObjFrnt1VccIDT {
  using ObjFrnt1ColorOfObjFrnt1_generated_type = AsyLineLeColor1VccIDT::AsyLineLeColor1VccIDT;
  using ObjFrnt1DstLatOfObjFrnt1_generated_type = float32IDT::float32IDT;
  using ObjFrnt1DstLgtOfObjFrnt1_generated_type = float32IDT::float32IDT;
  using ObjFrnt1HdDirOfObjFrnt1_generated_type = HdDirOfObjFrnt1VccIDT::HdDirOfObjFrnt1VccIDT;
  using ObjFrnt1TypOfObjFrnt1_generated_type = TypOfObjFrnt1VccIDT::TypOfObjFrnt1VccIDT;

  ObjFrnt1ColorOfObjFrnt1_generated_type ObjFrnt1ColorOfObjFrnt1;
  ObjFrnt1DstLatOfObjFrnt1_generated_type ObjFrnt1DstLatOfObjFrnt1;
  ObjFrnt1DstLgtOfObjFrnt1_generated_type ObjFrnt1DstLgtOfObjFrnt1;
  ObjFrnt1HdDirOfObjFrnt1_generated_type ObjFrnt1HdDirOfObjFrnt1;
  ObjFrnt1TypOfObjFrnt1_generated_type ObjFrnt1TypOfObjFrnt1;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another ObjFrnt1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(ObjFrnt1VccIDT const& l,
                       ObjFrnt1VccIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.ObjFrnt1ColorOfObjFrnt1 == r.ObjFrnt1ColorOfObjFrnt1)
                         && compare_float(l.ObjFrnt1DstLatOfObjFrnt1, r.ObjFrnt1DstLatOfObjFrnt1)
                         && compare_float(l.ObjFrnt1DstLgtOfObjFrnt1, r.ObjFrnt1DstLgtOfObjFrnt1)
                         && (l.ObjFrnt1HdDirOfObjFrnt1 == r.ObjFrnt1HdDirOfObjFrnt1)
                         && (l.ObjFrnt1TypOfObjFrnt1 == r.ObjFrnt1TypOfObjFrnt1)
  );
}

/*!
 * \brief   Compare for inequality with another ObjFrnt1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(ObjFrnt1VccIDT const& l,
                       ObjFrnt1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjFrnt1VccIDT

#endif  // EDREXE_INCLUDE_OBJFRNT1VCCIDT_IMPL_TYPE_OBJFRNT1VCCIDT_H_
