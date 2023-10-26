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
/**        \file  PerceptionExe/include/LaneMkrTempCam1VccIDT/impl_type_lanemkrtempcam1vccidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_LANEMKRTEMPCAM1VCCIDT_IMPL_TYPE_LANEMKRTEMPCAM1VCCIDT_H_
#define PERCEPTIONEXE_INCLUDE_LANEMKRTEMPCAM1VCCIDT_IMPL_TYPE_LANEMKRTEMPCAM1VCCIDT_H_

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
#include "float32IDT/impl_type_float32idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace LaneMkrTempCam1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneMkrTempCam1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneMkrTempCam1VccIDT
 */
struct LaneMkrTempCam1VccIDT {
  using C0First_generated_type = float32IDT::float32IDT;
  using C0FirstVariance_generated_type = float32IDT::float32IDT;
  using C1First_generated_type = float32IDT::float32IDT;
  using C1FirstVariance_generated_type = float32IDT::float32IDT;
  using C2First_generated_type = float32IDT::float32IDT;
  using C2FirstVariance_generated_type = float32IDT::float32IDT;
  using C3First_generated_type = float32IDT::float32IDT;
  using C3FirstVariance_generated_type = float32IDT::float32IDT;
  using FirstStartPoint_generated_type = float32IDT::float32IDT;
  using FirstEndPoint_generated_type = float32IDT::float32IDT;
  using C0Sec_generated_type = float32IDT::float32IDT;
  using C0SecVariance_generated_type = float32IDT::float32IDT;
  using C1Sec_generated_type = float32IDT::float32IDT;
  using C1SecVariance_generated_type = float32IDT::float32IDT;
  using C2Sec_generated_type = float32IDT::float32IDT;
  using C2SecVariance_generated_type = float32IDT::float32IDT;
  using C3Sec_generated_type = float32IDT::float32IDT;
  using C3SecVariance_generated_type = float32IDT::float32IDT;
  using SecStartPoint_generated_type = float32IDT::float32IDT;
  using SecEndPoint_generated_type = float32IDT::float32IDT;
  using IsSecValid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using CamObjId_generated_type = uint8IDT::uint8IDT;
  using Valid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using MeasQlyLane_generated_type = float32IDT::float32IDT;
  using MdlQlyLane_generated_type = float32IDT::float32IDT;
  using CamChks_generated_type = uint8IDT::uint8IDT;
  using CamCntr_generated_type = uint8IDT::uint8IDT;
  using CamTimeStamp_generated_type = uint32IDT::uint32IDT;

  C0First_generated_type C0First;
  C0FirstVariance_generated_type C0FirstVariance;
  C1First_generated_type C1First;
  C1FirstVariance_generated_type C1FirstVariance;
  C2First_generated_type C2First;
  C2FirstVariance_generated_type C2FirstVariance;
  C3First_generated_type C3First;
  C3FirstVariance_generated_type C3FirstVariance;
  FirstStartPoint_generated_type FirstStartPoint;
  FirstEndPoint_generated_type FirstEndPoint;
  C0Sec_generated_type C0Sec;
  C0SecVariance_generated_type C0SecVariance;
  C1Sec_generated_type C1Sec;
  C1SecVariance_generated_type C1SecVariance;
  C2Sec_generated_type C2Sec;
  C2SecVariance_generated_type C2SecVariance;
  C3Sec_generated_type C3Sec;
  C3SecVariance_generated_type C3SecVariance;
  SecStartPoint_generated_type SecStartPoint;
  SecEndPoint_generated_type SecEndPoint;
  IsSecValid_generated_type IsSecValid;
  CamObjId_generated_type CamObjId;
  Valid_generated_type Valid;
  MeasQlyLane_generated_type MeasQlyLane;
  MdlQlyLane_generated_type MdlQlyLane;
  CamChks_generated_type CamChks;
  CamCntr_generated_type CamCntr;
  CamTimeStamp_generated_type CamTimeStamp;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another LaneMkrTempCam1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(LaneMkrTempCam1VccIDT const& l,
                       LaneMkrTempCam1VccIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.C0First, r.C0First)
                         && compare_float(l.C0FirstVariance, r.C0FirstVariance)
                         && compare_float(l.C1First, r.C1First)
                         && compare_float(l.C1FirstVariance, r.C1FirstVariance)
                         && compare_float(l.C2First, r.C2First)
                         && compare_float(l.C2FirstVariance, r.C2FirstVariance)
                         && compare_float(l.C3First, r.C3First)
                         && compare_float(l.C3FirstVariance, r.C3FirstVariance)
                         && compare_float(l.FirstStartPoint, r.FirstStartPoint)
                         && compare_float(l.FirstEndPoint, r.FirstEndPoint)
                         && compare_float(l.C0Sec, r.C0Sec)
                         && compare_float(l.C0SecVariance, r.C0SecVariance)
                         && compare_float(l.C1Sec, r.C1Sec)
                         && compare_float(l.C1SecVariance, r.C1SecVariance)
                         && compare_float(l.C2Sec, r.C2Sec)
                         && compare_float(l.C2SecVariance, r.C2SecVariance)
                         && compare_float(l.C3Sec, r.C3Sec)
                         && compare_float(l.C3SecVariance, r.C3SecVariance)
                         && compare_float(l.SecStartPoint, r.SecStartPoint)
                         && compare_float(l.SecEndPoint, r.SecEndPoint)
                         && (l.IsSecValid == r.IsSecValid)
                         && (l.CamObjId == r.CamObjId)
                         && (l.Valid == r.Valid)
                         && compare_float(l.MeasQlyLane, r.MeasQlyLane)
                         && compare_float(l.MdlQlyLane, r.MdlQlyLane)
                         && (l.CamChks == r.CamChks)
                         && (l.CamCntr == r.CamCntr)
                         && (l.CamTimeStamp == r.CamTimeStamp)
  );
}

/*!
 * \brief   Compare for inequality with another LaneMkrTempCam1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(LaneMkrTempCam1VccIDT const& l,
                       LaneMkrTempCam1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneMkrTempCam1VccIDT

#endif  // PERCEPTIONEXE_INCLUDE_LANEMKRTEMPCAM1VCCIDT_IMPL_TYPE_LANEMKRTEMPCAM1VCCIDT_H_
