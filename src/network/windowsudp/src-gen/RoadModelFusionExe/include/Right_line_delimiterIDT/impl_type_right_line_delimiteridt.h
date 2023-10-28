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
/**        \file  RoadModelFusionExe/include/Right_line_delimiterIDT/impl_type_right_line_delimiteridt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_RIGHT_LINE_DELIMITERIDT_IMPL_TYPE_RIGHT_LINE_DELIMITERIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_RIGHT_LINE_DELIMITERIDT_IMPL_TYPE_RIGHT_LINE_DELIMITERIDT_H_

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
#include "FromTypeIDT/impl_type_fromtypeidt.h"
#include "LineTypeIDT/impl_type_linetypeidt.h"
#include "float32IDT/impl_type_float32idt.h"

namespace Right_line_delimiterIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Right_line_delimiterIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Right_line_delimiterIDT
 */
struct Right_line_delimiterIDT {
  using CoeffA_C0_generated_type = float32IDT::float32IDT;
  using CoeffA_C1_generated_type = float32IDT::float32IDT;
  using CoeffA_C2_generated_type = float32IDT::float32IDT;
  using CoeffA_C3_generated_type = float32IDT::float32IDT;
  using CoeffB_C0_generated_type = float32IDT::float32IDT;
  using CoeffB_C1_generated_type = float32IDT::float32IDT;
  using CoeffB_C2_generated_type = float32IDT::float32IDT;
  using CoeffB_C3_generated_type = float32IDT::float32IDT;
  using CoeffC_C0_generated_type = float32IDT::float32IDT;
  using CoeffC_C1_generated_type = float32IDT::float32IDT;
  using CoeffC_C2_generated_type = float32IDT::float32IDT;
  using CoeffC_C3_generated_type = float32IDT::float32IDT;
  using CoeffD_C0_generated_type = float32IDT::float32IDT;
  using CoeffD_C1_generated_type = float32IDT::float32IDT;
  using CoeffD_C2_generated_type = float32IDT::float32IDT;
  using CoeffD_C3_generated_type = float32IDT::float32IDT;
  using XMin_generated_type = float32IDT::float32IDT;
  using XMax_generated_type = float32IDT::float32IDT;
  using FromType_generated_type = FromTypeIDT::FromTypeIDT;
  using ToType_generated_type = LineTypeIDT::LineTypeIDT;
  using LgtTypeChg_generated_type = float32IDT::float32IDT;
  using LgtSeprtX1_generated_type = float32IDT::float32IDT;
  using LgtSeprtX2_generated_type = float32IDT::float32IDT;
  using LgtSeprtX3_generated_type = float32IDT::float32IDT;

  CoeffA_C0_generated_type CoeffA_C0;
  CoeffA_C1_generated_type CoeffA_C1;
  CoeffA_C2_generated_type CoeffA_C2;
  CoeffA_C3_generated_type CoeffA_C3;
  CoeffB_C0_generated_type CoeffB_C0;
  CoeffB_C1_generated_type CoeffB_C1;
  CoeffB_C2_generated_type CoeffB_C2;
  CoeffB_C3_generated_type CoeffB_C3;
  CoeffC_C0_generated_type CoeffC_C0;
  CoeffC_C1_generated_type CoeffC_C1;
  CoeffC_C2_generated_type CoeffC_C2;
  CoeffC_C3_generated_type CoeffC_C3;
  CoeffD_C0_generated_type CoeffD_C0;
  CoeffD_C1_generated_type CoeffD_C1;
  CoeffD_C2_generated_type CoeffD_C2;
  CoeffD_C3_generated_type CoeffD_C3;
  XMin_generated_type XMin;
  XMax_generated_type XMax;
  FromType_generated_type FromType;
  ToType_generated_type ToType;
  LgtTypeChg_generated_type LgtTypeChg;
  LgtSeprtX1_generated_type LgtSeprtX1;
  LgtSeprtX2_generated_type LgtSeprtX2;
  LgtSeprtX3_generated_type LgtSeprtX3;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another Right_line_delimiterIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(Right_line_delimiterIDT const& l,
                       Right_line_delimiterIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.CoeffA_C0, r.CoeffA_C0)
                         && compare_float(l.CoeffA_C1, r.CoeffA_C1)
                         && compare_float(l.CoeffA_C2, r.CoeffA_C2)
                         && compare_float(l.CoeffA_C3, r.CoeffA_C3)
                         && compare_float(l.CoeffB_C0, r.CoeffB_C0)
                         && compare_float(l.CoeffB_C1, r.CoeffB_C1)
                         && compare_float(l.CoeffB_C2, r.CoeffB_C2)
                         && compare_float(l.CoeffB_C3, r.CoeffB_C3)
                         && compare_float(l.CoeffC_C0, r.CoeffC_C0)
                         && compare_float(l.CoeffC_C1, r.CoeffC_C1)
                         && compare_float(l.CoeffC_C2, r.CoeffC_C2)
                         && compare_float(l.CoeffC_C3, r.CoeffC_C3)
                         && compare_float(l.CoeffD_C0, r.CoeffD_C0)
                         && compare_float(l.CoeffD_C1, r.CoeffD_C1)
                         && compare_float(l.CoeffD_C2, r.CoeffD_C2)
                         && compare_float(l.CoeffD_C3, r.CoeffD_C3)
                         && compare_float(l.XMin, r.XMin)
                         && compare_float(l.XMax, r.XMax)
                         && (l.FromType == r.FromType)
                         && (l.ToType == r.ToType)
                         && compare_float(l.LgtTypeChg, r.LgtTypeChg)
                         && compare_float(l.LgtSeprtX1, r.LgtSeprtX1)
                         && compare_float(l.LgtSeprtX2, r.LgtSeprtX2)
                         && compare_float(l.LgtSeprtX3, r.LgtSeprtX3)
  );
}

/*!
 * \brief   Compare for inequality with another Right_line_delimiterIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(Right_line_delimiterIDT const& l,
                       Right_line_delimiterIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace Right_line_delimiterIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_RIGHT_LINE_DELIMITERIDT_IMPL_TYPE_RIGHT_LINE_DELIMITERIDT_H_
