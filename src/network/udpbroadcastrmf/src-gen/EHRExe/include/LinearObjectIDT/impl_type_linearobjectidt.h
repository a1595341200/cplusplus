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
/**        \file  EHRExe/include/LinearObjectIDT/impl_type_linearobjectidt.h
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

#ifndef EHREXE_INCLUDE_LINEAROBJECTIDT_IMPL_TYPE_LINEAROBJECTIDT_H_
#define EHREXE_INCLUDE_LINEAROBJECTIDT_IMPL_TYPE_LINEAROBJECTIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_GeometryPointIDT_Vector/impl_type_array_geometrypointidt_vector.h"
#include "LinearObjectColourIDT/impl_type_linearobjectcolouridt.h"
#include "LinearObjectCurveTypeIDT/impl_type_linearobjectcurvetypeidt.h"
#include "LinearObjectIsBoldIDT/impl_type_linearobjectisboldidt.h"
#include "LinearObjectTypeIDT/impl_type_linearobjecttypeidt.h"
#include "LinearObjectmarkingIDT/impl_type_linearobjectmarkingidt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace LinearObjectIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LinearObjectIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinearObjectIDT
 */
struct LinearObjectIDT {
  using InstanceId_generated_type = uint32IDT::uint32IDT;
  using PathId_generated_type = uint32IDT::uint32IDT;
  using LaneNumber_generated_type = uint8IDT::uint8IDT;
  using PathOffset_generated_type = uint32IDT::uint32IDT;
  using EndOffset_generated_type = uint32IDT::uint32IDT;
  using IDLinearObject_generated_type = uint32IDT::uint32IDT;
  using LinearObjectType_generated_type = LinearObjectTypeIDT::LinearObjectTypeIDT;
  using LinearObjectmarking_generated_type = LinearObjectmarkingIDT::LinearObjectmarkingIDT;
  using LinearObjectColour_generated_type = LinearObjectColourIDT::LinearObjectColourIDT;
  using LinearObjectIsBold_generated_type = LinearObjectIsBoldIDT::LinearObjectIsBoldIDT;
  using LinearObjectCurveType_generated_type = LinearObjectCurveTypeIDT::LinearObjectCurveTypeIDT;
  using PointCount_generated_type = uint8IDT::uint8IDT;
  using GeometryPoints_generated_type = Array_GeometryPointIDT_Vector::Array_GeometryPointIDT_Vector;

  InstanceId_generated_type InstanceId;
  PathId_generated_type PathId;
  LaneNumber_generated_type LaneNumber;
  PathOffset_generated_type PathOffset;
  EndOffset_generated_type EndOffset;
  IDLinearObject_generated_type IDLinearObject;
  LinearObjectType_generated_type LinearObjectType;
  LinearObjectmarking_generated_type LinearObjectmarking;
  LinearObjectColour_generated_type LinearObjectColour;
  LinearObjectIsBold_generated_type LinearObjectIsBold;
  LinearObjectCurveType_generated_type LinearObjectCurveType;
  PointCount_generated_type PointCount;
  GeometryPoints_generated_type GeometryPoints;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LinearObjectIDT instance.
 */
inline bool operator==(LinearObjectIDT const& l,
                       LinearObjectIDT const& r) noexcept {
  return (&l == &r) || ((l.InstanceId == r.InstanceId)
                         && (l.PathId == r.PathId)
                         && (l.LaneNumber == r.LaneNumber)
                         && (l.PathOffset == r.PathOffset)
                         && (l.EndOffset == r.EndOffset)
                         && (l.IDLinearObject == r.IDLinearObject)
                         && (l.LinearObjectType == r.LinearObjectType)
                         && (l.LinearObjectmarking == r.LinearObjectmarking)
                         && (l.LinearObjectColour == r.LinearObjectColour)
                         && (l.LinearObjectIsBold == r.LinearObjectIsBold)
                         && (l.LinearObjectCurveType == r.LinearObjectCurveType)
                         && (l.PointCount == r.PointCount)
                         && (l.GeometryPoints == r.GeometryPoints)
  );
}

/*!
 * \brief Compare for inequality with another LinearObjectIDT instance.
 */
inline bool operator!=(LinearObjectIDT const& l,
                       LinearObjectIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LinearObjectIDT

#endif  // EHREXE_INCLUDE_LINEAROBJECTIDT_IMPL_TYPE_LINEAROBJECTIDT_H_
