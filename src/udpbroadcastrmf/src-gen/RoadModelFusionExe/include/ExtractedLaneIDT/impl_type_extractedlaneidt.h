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
/**        \file  RoadModelFusionExe/include/ExtractedLaneIDT/impl_type_extractedlaneidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDLANEIDT_IMPL_TYPE_EXTRACTEDLANEIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDLANEIDT_IMPL_TYPE_EXTRACTEDLANEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CenterLineIDT/impl_type_centerlineidt.h"
#include "ConstructionIDT/impl_type_constructionidt.h"
#include "Lane_typeIDT/impl_type_lane_typeidt.h"
#include "Lane_widthIDT/impl_type_lane_widthidt.h"
#include "RoadChangeIDT/impl_type_roadchangeidt.h"
#include "SpeedLimitationIDT/impl_type_speedlimitationidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace ExtractedLaneIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ExtractedLaneIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ExtractedLaneIDT
 */
struct ExtractedLaneIDT {
  using ExLaneNumber_generated_type = uint8IDT::uint8IDT;
  using LaneIndex_generated_type = uint8IDT::uint8IDT;
  using EgoLaneIndex_generated_type = uint8IDT::uint8IDT;
  using CenterLine_generated_type = CenterLineIDT::CenterLineIDT;
  using Lane_width_generated_type = Lane_widthIDT::Lane_widthIDT;
  using RoadChange_generated_type = RoadChangeIDT::RoadChangeIDT;
  using Construction_generated_type = ConstructionIDT::ConstructionIDT;
  using SpeedLimitation_generated_type = SpeedLimitationIDT::SpeedLimitationIDT;
  using Lane_type_generated_type = Lane_typeIDT::Lane_typeIDT;

  ExLaneNumber_generated_type ExLaneNumber;
  LaneIndex_generated_type LaneIndex;
  EgoLaneIndex_generated_type EgoLaneIndex;
  CenterLine_generated_type CenterLine;
  Lane_width_generated_type Lane_width;
  RoadChange_generated_type RoadChange;
  Construction_generated_type Construction;
  SpeedLimitation_generated_type SpeedLimitation;
  Lane_type_generated_type Lane_type;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ExtractedLaneIDT instance.
 */
inline bool operator==(ExtractedLaneIDT const& l,
                       ExtractedLaneIDT const& r) noexcept {
  return (&l == &r) || ((l.ExLaneNumber == r.ExLaneNumber)
                         && (l.LaneIndex == r.LaneIndex)
                         && (l.EgoLaneIndex == r.EgoLaneIndex)
                         && (l.CenterLine == r.CenterLine)
                         && (l.Lane_width == r.Lane_width)
                         && (l.RoadChange == r.RoadChange)
                         && (l.Construction == r.Construction)
                         && (l.SpeedLimitation == r.SpeedLimitation)
                         && (l.Lane_type == r.Lane_type)
  );
}

/*!
 * \brief Compare for inequality with another ExtractedLaneIDT instance.
 */
inline bool operator!=(ExtractedLaneIDT const& l,
                       ExtractedLaneIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ExtractedLaneIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDLANEIDT_IMPL_TYPE_EXTRACTEDLANEIDT_H_
