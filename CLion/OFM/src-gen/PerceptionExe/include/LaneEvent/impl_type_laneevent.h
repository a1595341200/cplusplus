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
/**        \file  PerceptionExe/include/LaneEvent/impl_type_laneevent.h
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

#ifndef PERCEPTIONEXE_INCLUDE_LANEEVENT_IMPL_TYPE_LANEEVENT_H_
#define PERCEPTIONEXE_INCLUDE_LANEEVENT_IMPL_TYPE_LANEEVENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "AssignedLaneNumber/impl_type_assignedlanenumber.h"
#include "LaneChange/impl_type_lanechange.h"
#include "NumberOfLanes/impl_type_numberoflanes.h"

namespace LaneEvent {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneEvent.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneEvent
 */
struct LaneEvent {
  using _NumberOfLanes_ref_type = NumberOfLanes::NumberOfLanes;
  using _AssignedLaneNumber_ref_type = AssignedLaneNumber::AssignedLaneNumber;
  using _LaneChange_ref_type = LaneChange::LaneChange;

  _NumberOfLanes_ref_type NumberOfLanes_ref;
  _AssignedLaneNumber_ref_type AssignedLaneNumber_ref;
  _LaneChange_ref_type LaneChange_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LaneEvent instance.
 */
inline bool operator==(LaneEvent const& l,
                       LaneEvent const& r) noexcept {
  return (&l == &r) || ((l.NumberOfLanes_ref == r.NumberOfLanes_ref)
                         && (l.AssignedLaneNumber_ref == r.AssignedLaneNumber_ref)
                         && (l.LaneChange_ref == r.LaneChange_ref)
  );
}

/*!
 * \brief Compare for inequality with another LaneEvent instance.
 */
inline bool operator!=(LaneEvent const& l,
                       LaneEvent const& r) noexcept {
  return !(l == r);
}

}  // namespace LaneEvent

#endif  // PERCEPTIONEXE_INCLUDE_LANEEVENT_IMPL_TYPE_LANEEVENT_H_
