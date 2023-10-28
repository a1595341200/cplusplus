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
/**        \file  PerceptionExe/include/UnfilteredObjIDT/impl_type_unfilteredobjidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_UNFILTEREDOBJIDT_IMPL_TYPE_UNFILTEREDOBJIDT_H_
#define PERCEPTIONEXE_INCLUDE_UNFILTEREDOBJIDT_IMPL_TYPE_UNFILTEREDOBJIDT_H_

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
#include "CamObjClass1IDT/impl_type_camobjclass1idt.h"
#include "singleIDT/impl_type_singleidt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace UnfilteredObjIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type UnfilteredObjIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/UnfilteredObjIDT
 */
struct UnfilteredObjIDT {
  using DetectionConfidence_generated_type = singleIDT::singleIDT;
  using CamUnfilteredObjClass_generated_type = CamObjClass1IDT::CamObjClass1IDT;
  using CamTimeStamp_generated_type = uint32IDT::uint32IDT;
  using CamUnfilteredObjId_generated_type = uint8IDT::uint8IDT;
  using NumberOfPoints_generated_type = uint8IDT::uint8IDT;
  using Point1UPos_generated_type = uint32IDT::uint32IDT;
  using Point1VPos_generated_type = uint32IDT::uint32IDT;
  using Point2UPos_generated_type = uint32IDT::uint32IDT;
  using Point2VPos_generated_type = uint32IDT::uint32IDT;
  using Point3D1XPos_generated_type = uint32IDT::uint32IDT;
  using Point3D1YPos_generated_type = uint32IDT::uint32IDT;
  using Point3D1ZPos_generated_type = uint32IDT::uint32IDT;
  using LgtPos_generated_type = singleIDT::singleIDT;
  using LatPos_generated_type = singleIDT::singleIDT;
  using Height_generated_type = singleIDT::singleIDT;
  using Width_generated_type = singleIDT::singleIDT;
  using Length_generated_type = singleIDT::singleIDT;
  using CamChks_generated_type = uint8IDT::uint8IDT;
  using CamCntr_generated_type = uint8IDT::uint8IDT;
  using Valid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using ISPTimeStamp_generated_type = uint32IDT::uint32IDT;

  DetectionConfidence_generated_type DetectionConfidence;
  CamUnfilteredObjClass_generated_type CamUnfilteredObjClass;
  CamTimeStamp_generated_type CamTimeStamp;
  CamUnfilteredObjId_generated_type CamUnfilteredObjId;
  NumberOfPoints_generated_type NumberOfPoints;
  Point1UPos_generated_type Point1UPos;
  Point1VPos_generated_type Point1VPos;
  Point2UPos_generated_type Point2UPos;
  Point2VPos_generated_type Point2VPos;
  Point3D1XPos_generated_type Point3D1XPos;
  Point3D1YPos_generated_type Point3D1YPos;
  Point3D1ZPos_generated_type Point3D1ZPos;
  LgtPos_generated_type LgtPos;
  LatPos_generated_type LatPos;
  Height_generated_type Height;
  Width_generated_type Width;
  Length_generated_type Length;
  CamChks_generated_type CamChks;
  CamCntr_generated_type CamCntr;
  Valid_generated_type Valid;
  ISPTimeStamp_generated_type ISPTimeStamp;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another UnfilteredObjIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(UnfilteredObjIDT const& l,
                       UnfilteredObjIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.DetectionConfidence, r.DetectionConfidence)
                         && (l.CamUnfilteredObjClass == r.CamUnfilteredObjClass)
                         && (l.CamTimeStamp == r.CamTimeStamp)
                         && (l.CamUnfilteredObjId == r.CamUnfilteredObjId)
                         && (l.NumberOfPoints == r.NumberOfPoints)
                         && (l.Point1UPos == r.Point1UPos)
                         && (l.Point1VPos == r.Point1VPos)
                         && (l.Point2UPos == r.Point2UPos)
                         && (l.Point2VPos == r.Point2VPos)
                         && (l.Point3D1XPos == r.Point3D1XPos)
                         && (l.Point3D1YPos == r.Point3D1YPos)
                         && (l.Point3D1ZPos == r.Point3D1ZPos)
                         && compare_float(l.LgtPos, r.LgtPos)
                         && compare_float(l.LatPos, r.LatPos)
                         && compare_float(l.Height, r.Height)
                         && compare_float(l.Width, r.Width)
                         && compare_float(l.Length, r.Length)
                         && (l.CamChks == r.CamChks)
                         && (l.CamCntr == r.CamCntr)
                         && (l.Valid == r.Valid)
                         && (l.ISPTimeStamp == r.ISPTimeStamp)
  );
}

/*!
 * \brief   Compare for inequality with another UnfilteredObjIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(UnfilteredObjIDT const& l,
                       UnfilteredObjIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace UnfilteredObjIDT

#endif  // PERCEPTIONEXE_INCLUDE_UNFILTEREDOBJIDT_IMPL_TYPE_UNFILTEREDOBJIDT_H_
