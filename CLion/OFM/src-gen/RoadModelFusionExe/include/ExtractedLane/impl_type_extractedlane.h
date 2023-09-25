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
/**        \file  RoadModelFusionExe/include/ExtractedLane/impl_type_extractedlane.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDLANE_IMPL_TYPE_EXTRACTEDLANE_H_
#define ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDLANE_IMPL_TYPE_EXTRACTEDLANE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CenterLine/impl_type_centerline.h"
#include "Construction/impl_type_construction.h"
#include "EgoLaneIndex/impl_type_egolaneindex.h"
#include "ExLaneNumber/impl_type_exlanenumber.h"
#include "LaneIndex/impl_type_laneindex.h"
#include "Lane_type/impl_type_lane_type.h"
#include "Lane_width/impl_type_lane_width.h"
#include "RoadChange/impl_type_roadchange.h"
#include "SpeedLimitation/impl_type_speedlimitation.h"

namespace ExtractedLane {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ExtractedLane.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ExtractedLane
 */
struct ExtractedLane {
  using _ExLaneNumber_ref_type = ExLaneNumber::ExLaneNumber;
  using _LaneIndex_ref_type = LaneIndex::LaneIndex;
  using _EgoLaneIndex_ref_type = EgoLaneIndex::EgoLaneIndex;
  using _CenterLine_ref_type = CenterLine::CenterLine;
  using _Lane_width_ref_type = Lane_width::Lane_width;
  using _RoadChange_ref_type = RoadChange::RoadChange;
  using _Construction_ref_type = Construction::Construction;
  using _SpeedLimitation_ref_type = SpeedLimitation::SpeedLimitation;
  using _Lane_type_ref_type = Lane_type::Lane_type;

  _ExLaneNumber_ref_type ExLaneNumber_ref;
  _LaneIndex_ref_type LaneIndex_ref;
  _EgoLaneIndex_ref_type EgoLaneIndex_ref;
  _CenterLine_ref_type CenterLine_ref;
  _Lane_width_ref_type Lane_width_ref;
  _RoadChange_ref_type RoadChange_ref;
  _Construction_ref_type Construction_ref;
  _SpeedLimitation_ref_type SpeedLimitation_ref;
  _Lane_type_ref_type Lane_type_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ExtractedLane instance.
 */
inline bool operator==(ExtractedLane const& l,
                       ExtractedLane const& r) noexcept {
  return (&l == &r) || ((l.ExLaneNumber_ref == r.ExLaneNumber_ref)
                         && (l.LaneIndex_ref == r.LaneIndex_ref)
                         && (l.EgoLaneIndex_ref == r.EgoLaneIndex_ref)
                         && (l.CenterLine_ref == r.CenterLine_ref)
                         && (l.Lane_width_ref == r.Lane_width_ref)
                         && (l.RoadChange_ref == r.RoadChange_ref)
                         && (l.Construction_ref == r.Construction_ref)
                         && (l.SpeedLimitation_ref == r.SpeedLimitation_ref)
                         && (l.Lane_type_ref == r.Lane_type_ref)
  );
}

/*!
 * \brief Compare for inequality with another ExtractedLane instance.
 */
inline bool operator!=(ExtractedLane const& l,
                       ExtractedLane const& r) noexcept {
  return !(l == r);
}

}  // namespace ExtractedLane

#endif  // ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDLANE_IMPL_TYPE_EXTRACTEDLANE_H_
