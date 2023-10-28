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
/**        \file  RoadModelFusionExe/include/LinkCurvatureIDT/impl_type_linkcurvatureidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LINKCURVATUREIDT_IMPL_TYPE_LINKCURVATUREIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_LINKCURVATUREIDT_IMPL_TYPE_LINKCURVATUREIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_CurvPointIDT_Vector/impl_type_array_curvpointidt_vector.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace LinkCurvatureIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LinkCurvatureIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinkCurvatureIDT
 */
struct LinkCurvatureIDT {
  using InstanceId_generated_type = uint32IDT::uint32IDT;
  using PathId_generated_type = uint32IDT::uint32IDT;
  using LaneNumber_generated_type = uint8IDT::uint8IDT;
  using PathOffset_generated_type = uint32IDT::uint32IDT;
  using EndOffset_generated_type = uint32IDT::uint32IDT;
  using CurvCount_generated_type = uint8IDT::uint8IDT;
  using CurvPoints_generated_type = Array_CurvPointIDT_Vector::Array_CurvPointIDT_Vector;

  InstanceId_generated_type InstanceId;
  PathId_generated_type PathId;
  LaneNumber_generated_type LaneNumber;
  PathOffset_generated_type PathOffset;
  EndOffset_generated_type EndOffset;
  CurvCount_generated_type CurvCount;
  CurvPoints_generated_type CurvPoints;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LinkCurvatureIDT instance.
 */
inline bool operator==(LinkCurvatureIDT const& l,
                       LinkCurvatureIDT const& r) noexcept {
  return (&l == &r) || ((l.InstanceId == r.InstanceId)
                         && (l.PathId == r.PathId)
                         && (l.LaneNumber == r.LaneNumber)
                         && (l.PathOffset == r.PathOffset)
                         && (l.EndOffset == r.EndOffset)
                         && (l.CurvCount == r.CurvCount)
                         && (l.CurvPoints == r.CurvPoints)
  );
}

/*!
 * \brief Compare for inequality with another LinkCurvatureIDT instance.
 */
inline bool operator!=(LinkCurvatureIDT const& l,
                       LinkCurvatureIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LinkCurvatureIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_LINKCURVATUREIDT_IMPL_TYPE_LINKCURVATUREIDT_H_
