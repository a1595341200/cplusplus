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
/**        \file  RoadModelFusionExe/include/LaneSpeedLimitIDT/impl_type_lanespeedlimitidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LANESPEEDLIMITIDT_IMPL_TYPE_LANESPEEDLIMITIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_LANESPEEDLIMITIDT_IMPL_TYPE_LANESPEEDLIMITIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "SpeedLimitUnitIDT/impl_type_speedlimitunitidt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace LaneSpeedLimitIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneSpeedLimitIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneSpeedLimitIDT
 */
struct LaneSpeedLimitIDT {
  using InstanceId_generated_type = uint32IDT::uint32IDT;
  using PathId_generated_type = uint32IDT::uint32IDT;
  using LaneNumber_generated_type = uint8IDT::uint8IDT;
  using PathOffset_generated_type = uint32IDT::uint32IDT;
  using EndOffset_generated_type = uint32IDT::uint32IDT;
  using Value_H_generated_type = uint8IDT::uint8IDT;
  using Value_L_generated_type = uint8IDT::uint8IDT;
  using SpeedLimitUnit_generated_type = SpeedLimitUnitIDT::SpeedLimitUnitIDT;

  InstanceId_generated_type InstanceId;
  PathId_generated_type PathId;
  LaneNumber_generated_type LaneNumber;
  PathOffset_generated_type PathOffset;
  EndOffset_generated_type EndOffset;
  Value_H_generated_type Value_H;
  Value_L_generated_type Value_L;
  SpeedLimitUnit_generated_type SpeedLimitUnit;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LaneSpeedLimitIDT instance.
 */
inline bool operator==(LaneSpeedLimitIDT const& l,
                       LaneSpeedLimitIDT const& r) noexcept {
  return (&l == &r) || ((l.InstanceId == r.InstanceId)
                         && (l.PathId == r.PathId)
                         && (l.LaneNumber == r.LaneNumber)
                         && (l.PathOffset == r.PathOffset)
                         && (l.EndOffset == r.EndOffset)
                         && (l.Value_H == r.Value_H)
                         && (l.Value_L == r.Value_L)
                         && (l.SpeedLimitUnit == r.SpeedLimitUnit)
  );
}

/*!
 * \brief Compare for inequality with another LaneSpeedLimitIDT instance.
 */
inline bool operator!=(LaneSpeedLimitIDT const& l,
                       LaneSpeedLimitIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneSpeedLimitIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_LANESPEEDLIMITIDT_IMPL_TYPE_LANESPEEDLIMITIDT_H_
