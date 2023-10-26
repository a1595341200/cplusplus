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
/**        \file  LocalizationFusionExe/include/LsrObjIDT/impl_type_lsrobjidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_LSROBJIDT_IMPL_TYPE_LSROBJIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_LSROBJIDT_IMPL_TYPE_LSROBJIDT_H_

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
#include "LitAreaIDT/impl_type_litareaidt.h"
#include "LsrObjDirIDT/impl_type_lsrobjdiridt.h"
#include "LsrObjTypeIDT/impl_type_lsrobjtypeidt.h"
#include "ValidTrueFalseIDT/impl_type_validtruefalseidt.h"
#include "float32IDT/impl_type_float32idt.h"

namespace LsrObjIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LsrObjIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LsrObjIDT
 */
struct LsrObjIDT {
  using LsrObjType_generated_type = LsrObjTypeIDT::LsrObjTypeIDT;
  using Dir_generated_type = LsrObjDirIDT::LsrObjDirIDT;
  using LgtDist_generated_type = float32IDT::float32IDT;
  using Confidence_generated_type = float32IDT::float32IDT;
  using ValidTrueFalse_generated_type = ValidTrueFalseIDT::ValidTrueFalseIDT;
  using LitArea_generated_type = LitAreaIDT::LitAreaIDT;
  using VertAg_generated_type = float32IDT::float32IDT;
  using HozlAgLe_generated_type = float32IDT::float32IDT;
  using HozlAgRi_generated_type = float32IDT::float32IDT;

  LsrObjType_generated_type LsrObjType;
  Dir_generated_type Dir;
  LgtDist_generated_type LgtDist;
  Confidence_generated_type Confidence;
  ValidTrueFalse_generated_type ValidTrueFalse;
  LitArea_generated_type LitArea;
  VertAg_generated_type VertAg;
  HozlAgLe_generated_type HozlAgLe;
  HozlAgRi_generated_type HozlAgRi;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another LsrObjIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(LsrObjIDT const& l,
                       LsrObjIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.LsrObjType == r.LsrObjType)
                         && (l.Dir == r.Dir)
                         && compare_float(l.LgtDist, r.LgtDist)
                         && compare_float(l.Confidence, r.Confidence)
                         && (l.ValidTrueFalse == r.ValidTrueFalse)
                         && (l.LitArea == r.LitArea)
                         && compare_float(l.VertAg, r.VertAg)
                         && compare_float(l.HozlAgLe, r.HozlAgLe)
                         && compare_float(l.HozlAgRi, r.HozlAgRi)
  );
}

/*!
 * \brief   Compare for inequality with another LsrObjIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(LsrObjIDT const& l,
                       LsrObjIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LsrObjIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_LSROBJIDT_IMPL_TYPE_LSROBJIDT_H_
