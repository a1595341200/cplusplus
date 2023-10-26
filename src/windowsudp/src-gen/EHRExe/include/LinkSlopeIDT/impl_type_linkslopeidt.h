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
/**        \file  EHRExe/include/LinkSlopeIDT/impl_type_linkslopeidt.h
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

#ifndef EHREXE_INCLUDE_LINKSLOPEIDT_IMPL_TYPE_LINKSLOPEIDT_H_
#define EHREXE_INCLUDE_LINKSLOPEIDT_IMPL_TYPE_LINKSLOPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_SlopePointIDT_Vector/impl_type_array_slopepointidt_vector.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace LinkSlopeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LinkSlopeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinkSlopeIDT
 */
struct LinkSlopeIDT {
  using InstanceId_generated_type = uint32IDT::uint32IDT;
  using PathId_generated_type = uint32IDT::uint32IDT;
  using NumOfLane_generated_type = uint8IDT::uint8IDT;
  using PathOffset_generated_type = uint32IDT::uint32IDT;
  using EndOffset_generated_type = uint32IDT::uint32IDT;
  using SlopeCount_generated_type = uint8IDT::uint8IDT;
  using SlopePoints_generated_type = Array_SlopePointIDT_Vector::Array_SlopePointIDT_Vector;

  InstanceId_generated_type InstanceId;
  PathId_generated_type PathId;
  NumOfLane_generated_type NumOfLane;
  PathOffset_generated_type PathOffset;
  EndOffset_generated_type EndOffset;
  SlopeCount_generated_type SlopeCount;
  SlopePoints_generated_type SlopePoints;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LinkSlopeIDT instance.
 */
inline bool operator==(LinkSlopeIDT const& l,
                       LinkSlopeIDT const& r) noexcept {
  return (&l == &r) || ((l.InstanceId == r.InstanceId)
                         && (l.PathId == r.PathId)
                         && (l.NumOfLane == r.NumOfLane)
                         && (l.PathOffset == r.PathOffset)
                         && (l.EndOffset == r.EndOffset)
                         && (l.SlopeCount == r.SlopeCount)
                         && (l.SlopePoints == r.SlopePoints)
  );
}

/*!
 * \brief Compare for inequality with another LinkSlopeIDT instance.
 */
inline bool operator!=(LinkSlopeIDT const& l,
                       LinkSlopeIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LinkSlopeIDT

#endif  // EHREXE_INCLUDE_LINKSLOPEIDT_IMPL_TYPE_LINKSLOPEIDT_H_
