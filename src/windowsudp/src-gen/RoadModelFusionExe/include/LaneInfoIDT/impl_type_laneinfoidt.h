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
/**        \file  RoadModelFusionExe/include/LaneInfoIDT/impl_type_laneinfoidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LANEINFOIDT_IMPL_TYPE_LANEINFOIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_LANEINFOIDT_IMPL_TYPE_LANEINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "DirectionIDT/impl_type_directionidt.h"
#include "LaneAppTypeIDT/impl_type_laneapptypeidt.h"
#include "LaneTypeIDT/impl_type_lanetypeidt.h"
#include "TransitIDT/impl_type_transitidt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace LaneInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneInfoIDT
 */
struct LaneInfoIDT {
  using LaneNum_generated_type = uint8IDT::uint8IDT;
  using Direction_generated_type = DirectionIDT::DirectionIDT;
  using Transit_generated_type = TransitIDT::TransitIDT;
  using LaneType_generated_type = LaneTypeIDT::LaneTypeIDT;
  using LaneAppType_generated_type = LaneAppTypeIDT::LaneAppTypeIDT;
  using Centeline_generated_type = uint32IDT::uint32IDT;
  using L_Bound_generated_type = uint32IDT::uint32IDT;
  using R_Bound_generated_type = uint32IDT::uint32IDT;

  LaneNum_generated_type LaneNum;
  Direction_generated_type Direction;
  Transit_generated_type Transit;
  LaneType_generated_type LaneType;
  LaneAppType_generated_type LaneAppType;
  Centeline_generated_type Centeline;
  L_Bound_generated_type L_Bound;
  R_Bound_generated_type R_Bound;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LaneInfoIDT instance.
 */
inline bool operator==(LaneInfoIDT const& l,
                       LaneInfoIDT const& r) noexcept {
  return (&l == &r) || ((l.LaneNum == r.LaneNum)
                         && (l.Direction == r.Direction)
                         && (l.Transit == r.Transit)
                         && (l.LaneType == r.LaneType)
                         && (l.LaneAppType == r.LaneAppType)
                         && (l.Centeline == r.Centeline)
                         && (l.L_Bound == r.L_Bound)
                         && (l.R_Bound == r.R_Bound)
  );
}

/*!
 * \brief Compare for inequality with another LaneInfoIDT instance.
 */
inline bool operator!=(LaneInfoIDT const& l,
                       LaneInfoIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneInfoIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_LANEINFOIDT_IMPL_TYPE_LANEINFOIDT_H_
