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
/**        \file  RoadModelFusionExe/include/CenterLineIDT/impl_type_centerlineidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_CENTERLINEIDT_IMPL_TYPE_CENTERLINEIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_CENTERLINEIDT_IMPL_TYPE_CENTERLINEIDT_H_

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

namespace CenterLineIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type CenterLineIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CenterLineIDT
 */
struct CenterLineIDT {
  using CenterCoeffA_C0_generated_type = float32IDT::float32IDT;
  using CenterCoeffA_C1_generated_type = float32IDT::float32IDT;
  using CenterCoeffA_C2_generated_type = float32IDT::float32IDT;
  using CenterCoeffA_C3_generated_type = float32IDT::float32IDT;
  using CenterCoeffB_C0_generated_type = float32IDT::float32IDT;
  using CenterCoeffB_C1_generated_type = float32IDT::float32IDT;
  using CenterCoeffB_C2_generated_type = float32IDT::float32IDT;
  using CenterCoeffB_C3_generated_type = float32IDT::float32IDT;
  using CenterCoeffC_C0_generated_type = float32IDT::float32IDT;
  using CenterCoeffC_C1_generated_type = float32IDT::float32IDT;
  using CenterCoeffC_C2_generated_type = float32IDT::float32IDT;
  using CenterCoeffC_C3_generated_type = float32IDT::float32IDT;
  using CenterCoeffD_C0_generated_type = float32IDT::float32IDT;
  using CenterCoeffD_C1_generated_type = float32IDT::float32IDT;
  using CenterCoeffD_C2_generated_type = float32IDT::float32IDT;
  using CenterCoeffD_C3_generated_type = float32IDT::float32IDT;
  using CenterXMin_generated_type = float32IDT::float32IDT;
  using CenterXMax_generated_type = float32IDT::float32IDT;
  using CenterLgtSeprtX1_generated_type = float32IDT::float32IDT;
  using CenterLgtSeprtX2_generated_type = float32IDT::float32IDT;
  using CenterLgtSeprtX3_generated_type = float32IDT::float32IDT;

  CenterCoeffA_C0_generated_type CenterCoeffA_C0;
  CenterCoeffA_C1_generated_type CenterCoeffA_C1;
  CenterCoeffA_C2_generated_type CenterCoeffA_C2;
  CenterCoeffA_C3_generated_type CenterCoeffA_C3;
  CenterCoeffB_C0_generated_type CenterCoeffB_C0;
  CenterCoeffB_C1_generated_type CenterCoeffB_C1;
  CenterCoeffB_C2_generated_type CenterCoeffB_C2;
  CenterCoeffB_C3_generated_type CenterCoeffB_C3;
  CenterCoeffC_C0_generated_type CenterCoeffC_C0;
  CenterCoeffC_C1_generated_type CenterCoeffC_C1;
  CenterCoeffC_C2_generated_type CenterCoeffC_C2;
  CenterCoeffC_C3_generated_type CenterCoeffC_C3;
  CenterCoeffD_C0_generated_type CenterCoeffD_C0;
  CenterCoeffD_C1_generated_type CenterCoeffD_C1;
  CenterCoeffD_C2_generated_type CenterCoeffD_C2;
  CenterCoeffD_C3_generated_type CenterCoeffD_C3;
  CenterXMin_generated_type CenterXMin;
  CenterXMax_generated_type CenterXMax;
  CenterLgtSeprtX1_generated_type CenterLgtSeprtX1;
  CenterLgtSeprtX2_generated_type CenterLgtSeprtX2;
  CenterLgtSeprtX3_generated_type CenterLgtSeprtX3;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another CenterLineIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(CenterLineIDT const& l,
                       CenterLineIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.CenterCoeffA_C0, r.CenterCoeffA_C0)
                         && compare_float(l.CenterCoeffA_C1, r.CenterCoeffA_C1)
                         && compare_float(l.CenterCoeffA_C2, r.CenterCoeffA_C2)
                         && compare_float(l.CenterCoeffA_C3, r.CenterCoeffA_C3)
                         && compare_float(l.CenterCoeffB_C0, r.CenterCoeffB_C0)
                         && compare_float(l.CenterCoeffB_C1, r.CenterCoeffB_C1)
                         && compare_float(l.CenterCoeffB_C2, r.CenterCoeffB_C2)
                         && compare_float(l.CenterCoeffB_C3, r.CenterCoeffB_C3)
                         && compare_float(l.CenterCoeffC_C0, r.CenterCoeffC_C0)
                         && compare_float(l.CenterCoeffC_C1, r.CenterCoeffC_C1)
                         && compare_float(l.CenterCoeffC_C2, r.CenterCoeffC_C2)
                         && compare_float(l.CenterCoeffC_C3, r.CenterCoeffC_C3)
                         && compare_float(l.CenterCoeffD_C0, r.CenterCoeffD_C0)
                         && compare_float(l.CenterCoeffD_C1, r.CenterCoeffD_C1)
                         && compare_float(l.CenterCoeffD_C2, r.CenterCoeffD_C2)
                         && compare_float(l.CenterCoeffD_C3, r.CenterCoeffD_C3)
                         && compare_float(l.CenterXMin, r.CenterXMin)
                         && compare_float(l.CenterXMax, r.CenterXMax)
                         && compare_float(l.CenterLgtSeprtX1, r.CenterLgtSeprtX1)
                         && compare_float(l.CenterLgtSeprtX2, r.CenterLgtSeprtX2)
                         && compare_float(l.CenterLgtSeprtX3, r.CenterLgtSeprtX3)
  );
}

/*!
 * \brief   Compare for inequality with another CenterLineIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(CenterLineIDT const& l,
                       CenterLineIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CenterLineIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_CENTERLINEIDT_IMPL_TYPE_CENTERLINEIDT_H_
