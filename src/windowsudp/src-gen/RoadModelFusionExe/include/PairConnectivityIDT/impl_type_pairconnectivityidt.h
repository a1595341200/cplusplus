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
/**        \file  RoadModelFusionExe/include/PairConnectivityIDT/impl_type_pairconnectivityidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_PAIRCONNECTIVITYIDT_IMPL_TYPE_PAIRCONNECTIVITYIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_PAIRCONNECTIVITYIDT_IMPL_TYPE_PAIRCONNECTIVITYIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace PairConnectivityIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PairConnectivityIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PairConnectivityIDT
 */
struct PairConnectivityIDT {
  using InstanceId_generated_type = uint32IDT::uint32IDT;
  using PathId_generated_type = uint32IDT::uint32IDT;
  using LaneNumber_generated_type = uint8IDT::uint8IDT;
  using PathOffset_generated_type = uint32IDT::uint32IDT;
  using FromLinkId_generated_type = uint32IDT::uint32IDT;
  using InitPath_generated_type = uint32IDT::uint32IDT;
  using InitLaneNum_generated_type = uint8IDT::uint8IDT;
  using ToLinkId_generated_type = uint32IDT::uint32IDT;
  using NewPath_generated_type = uint32IDT::uint32IDT;
  using NewLaneNum_generated_type = uint8IDT::uint8IDT;

  InstanceId_generated_type InstanceId;
  PathId_generated_type PathId;
  LaneNumber_generated_type LaneNumber;
  PathOffset_generated_type PathOffset;
  FromLinkId_generated_type FromLinkId;
  InitPath_generated_type InitPath;
  InitLaneNum_generated_type InitLaneNum;
  ToLinkId_generated_type ToLinkId;
  NewPath_generated_type NewPath;
  NewLaneNum_generated_type NewLaneNum;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another PairConnectivityIDT instance.
 */
inline bool operator==(PairConnectivityIDT const& l,
                       PairConnectivityIDT const& r) noexcept {
  return (&l == &r) || ((l.InstanceId == r.InstanceId)
                         && (l.PathId == r.PathId)
                         && (l.LaneNumber == r.LaneNumber)
                         && (l.PathOffset == r.PathOffset)
                         && (l.FromLinkId == r.FromLinkId)
                         && (l.InitPath == r.InitPath)
                         && (l.InitLaneNum == r.InitLaneNum)
                         && (l.ToLinkId == r.ToLinkId)
                         && (l.NewPath == r.NewPath)
                         && (l.NewLaneNum == r.NewLaneNum)
  );
}

/*!
 * \brief Compare for inequality with another PairConnectivityIDT instance.
 */
inline bool operator!=(PairConnectivityIDT const& l,
                       PairConnectivityIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace PairConnectivityIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_PAIRCONNECTIVITYIDT_IMPL_TYPE_PAIRCONNECTIVITYIDT_H_
