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
/**        \file  TargetPredictExe/include/LaneEventGroupCam1VccIDT/impl_type_laneeventgroupcam1vccidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_LANEEVENTGROUPCAM1VCCIDT_IMPL_TYPE_LANEEVENTGROUPCAM1VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_LANEEVENTGROUPCAM1VCCIDT_IMPL_TYPE_LANEEVENTGROUPCAM1VCCIDT_H_

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
#include "LaneEventNumber1IDT/impl_type_laneeventnumber1idt.h"
#include "LaneEventTyp1IDT/impl_type_laneeventtyp1idt.h"
#include "float32IDT/impl_type_float32idt.h"

namespace LaneEventGroupCam1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneEventGroupCam1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneEventGroupCam1VccIDT
 */
struct LaneEventGroupCam1VccIDT {
  using LaneEventType_generated_type = LaneEventTyp1IDT::LaneEventTyp1IDT;
  using LaneEventNumber_generated_type = LaneEventNumber1IDT::LaneEventNumber1IDT;
  using DistanceLaneEvent_generated_type = float32IDT::float32IDT;
  using C0_generated_type = float32IDT::float32IDT;
  using C0Variance_generated_type = float32IDT::float32IDT;
  using C1_generated_type = float32IDT::float32IDT;
  using C1Variance_generated_type = float32IDT::float32IDT;
  using C2_generated_type = float32IDT::float32IDT;
  using C2Variance_generated_type = float32IDT::float32IDT;
  using C3_generated_type = float32IDT::float32IDT;
  using C3Variance_generated_type = float32IDT::float32IDT;

  LaneEventType_generated_type LaneEventType;
  LaneEventNumber_generated_type LaneEventNumber;
  DistanceLaneEvent_generated_type DistanceLaneEvent;
  C0_generated_type C0;
  C0Variance_generated_type C0Variance;
  C1_generated_type C1;
  C1Variance_generated_type C1Variance;
  C2_generated_type C2;
  C2Variance_generated_type C2Variance;
  C3_generated_type C3;
  C3Variance_generated_type C3Variance;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another LaneEventGroupCam1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(LaneEventGroupCam1VccIDT const& l,
                       LaneEventGroupCam1VccIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.LaneEventType == r.LaneEventType)
                         && (l.LaneEventNumber == r.LaneEventNumber)
                         && compare_float(l.DistanceLaneEvent, r.DistanceLaneEvent)
                         && compare_float(l.C0, r.C0)
                         && compare_float(l.C0Variance, r.C0Variance)
                         && compare_float(l.C1, r.C1)
                         && compare_float(l.C1Variance, r.C1Variance)
                         && compare_float(l.C2, r.C2)
                         && compare_float(l.C2Variance, r.C2Variance)
                         && compare_float(l.C3, r.C3)
                         && compare_float(l.C3Variance, r.C3Variance)
  );
}

/*!
 * \brief   Compare for inequality with another LaneEventGroupCam1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(LaneEventGroupCam1VccIDT const& l,
                       LaneEventGroupCam1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneEventGroupCam1VccIDT

#endif  // TARGETPREDICTEXE_INCLUDE_LANEEVENTGROUPCAM1VCCIDT_IMPL_TYPE_LANEEVENTGROUPCAM1VCCIDT_H_
