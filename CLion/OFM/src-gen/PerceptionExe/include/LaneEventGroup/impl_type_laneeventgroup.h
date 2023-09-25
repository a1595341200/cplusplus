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
/**        \file  PerceptionExe/include/LaneEventGroup/impl_type_laneeventgroup.h
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

#ifndef PERCEPTIONEXE_INCLUDE_LANEEVENTGROUP_IMPL_TYPE_LANEEVENTGROUP_H_
#define PERCEPTIONEXE_INCLUDE_LANEEVENTGROUP_IMPL_TYPE_LANEEVENTGROUP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "C0/impl_type_c0.h"
#include "C0Variance/impl_type_c0variance.h"
#include "C1/impl_type_c1.h"
#include "C1/impl_type_c2.h"
#include "C1Variance/impl_type_c1variance.h"
#include "C2Variance/impl_type_c2variance.h"
#include "C3/impl_type_c3.h"
#include "C3Variance/impl_type_c3variance.h"
#include "DistanceLaneEvent/impl_type_distancelaneevent.h"
#include "LaneNumber/impl_type_lanenumber.h"
#include "TypeLaneEvent/impl_type_typelaneevent.h"

namespace LaneEventGroup {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneEventGroup.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneEventGroup
 */
struct LaneEventGroup {
  using _TypeLaneEvent_ref_type = TypeLaneEvent::TypeLaneEvent;
  using _LaneNumber_ref_type = LaneNumber::LaneNumber;
  using _DistanceLaneEvent_ref_type = DistanceLaneEvent::DistanceLaneEvent;
  using _C0_ref_type = C0::C0;
  using _C0Variance_ref_type = C0Variance::C0Variance;
  using _C1_ref_type = C1::C1;
  using _C1Variance_ref_type = C1Variance::C1Variance;
  using _C2_ref_type = C1::C2;
  using _C2Variance_ref_type = C2Variance::C2Variance;
  using _C3_ref_type = C3::C3;
  using _C3Variance_ref_type = C3Variance::C3Variance;

  _TypeLaneEvent_ref_type TypeLaneEvent_ref;
  _LaneNumber_ref_type LaneNumber_ref;
  _DistanceLaneEvent_ref_type DistanceLaneEvent_ref;
  _C0_ref_type C0_ref;
  _C0Variance_ref_type C0Variance_ref;
  _C1_ref_type C1_ref;
  _C1Variance_ref_type C1Variance_ref;
  _C2_ref_type C2_ref;
  _C2Variance_ref_type C2Variance_ref;
  _C3_ref_type C3_ref;
  _C3Variance_ref_type C3Variance_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LaneEventGroup instance.
 */
inline bool operator==(LaneEventGroup const& l,
                       LaneEventGroup const& r) noexcept {
  return (&l == &r) || ((l.TypeLaneEvent_ref == r.TypeLaneEvent_ref)
                         && (l.LaneNumber_ref == r.LaneNumber_ref)
                         && (l.DistanceLaneEvent_ref == r.DistanceLaneEvent_ref)
                         && (l.C0_ref == r.C0_ref)
                         && (l.C0Variance_ref == r.C0Variance_ref)
                         && (l.C1_ref == r.C1_ref)
                         && (l.C1Variance_ref == r.C1Variance_ref)
                         && (l.C2_ref == r.C2_ref)
                         && (l.C2Variance_ref == r.C2Variance_ref)
                         && (l.C3_ref == r.C3_ref)
                         && (l.C3Variance_ref == r.C3Variance_ref)
  );
}

/*!
 * \brief Compare for inequality with another LaneEventGroup instance.
 */
inline bool operator!=(LaneEventGroup const& l,
                       LaneEventGroup const& r) noexcept {
  return !(l == r);
}

}  // namespace LaneEventGroup

#endif  // PERCEPTIONEXE_INCLUDE_LANEEVENTGROUP_IMPL_TYPE_LANEEVENTGROUP_H_
