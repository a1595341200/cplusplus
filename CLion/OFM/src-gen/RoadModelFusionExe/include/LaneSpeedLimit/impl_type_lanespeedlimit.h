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
/**        \file  RoadModelFusionExe/include/LaneSpeedLimit/impl_type_lanespeedlimit.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LANESPEEDLIMIT_IMPL_TYPE_LANESPEEDLIMIT_H_
#define ROADMODELFUSIONEXE_INCLUDE_LANESPEEDLIMIT_IMPL_TYPE_LANESPEEDLIMIT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "EndOffset/impl_type_endoffset.h"
#include "InstanceId/impl_type_instanceid.h"
#include "LaneNumber/impl_type_lanenumber.h"
#include "PathId/impl_type_pathid.h"
#include "PathOffset/impl_type_pathoffset.h"
#include "SpeedLimitUnit/impl_type_speedlimitunit.h"
#include "Value_H/impl_type_value_h.h"
#include "Value_L/impl_type_value_l.h"

namespace LaneSpeedLimit {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneSpeedLimit.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneSpeedLimit
 */
struct LaneSpeedLimit {
  using _InstanceId_ref_type = InstanceId::InstanceId;
  using _PathId_ref_type = PathId::PathId;
  using _LaneNumber_ref_type = LaneNumber::LaneNumber;
  using _PathOffset_ref_type = PathOffset::PathOffset;
  using _EndOffset_ref_type = EndOffset::EndOffset;
  using _Value_H_ref_type = Value_H::Value_H;
  using _Value_L_ref_type = Value_L::Value_L;
  using _SpeedLimitUnit_ref_type = SpeedLimitUnit::SpeedLimitUnit;

  _InstanceId_ref_type InstanceId_ref;
  _PathId_ref_type PathId_ref;
  _LaneNumber_ref_type LaneNumber_ref;
  _PathOffset_ref_type PathOffset_ref;
  _EndOffset_ref_type EndOffset_ref;
  _Value_H_ref_type Value_H_ref;
  _Value_L_ref_type Value_L_ref;
  _SpeedLimitUnit_ref_type SpeedLimitUnit_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LaneSpeedLimit instance.
 */
inline bool operator==(LaneSpeedLimit const& l,
                       LaneSpeedLimit const& r) noexcept {
  return (&l == &r) || ((l.InstanceId_ref == r.InstanceId_ref)
                         && (l.PathId_ref == r.PathId_ref)
                         && (l.LaneNumber_ref == r.LaneNumber_ref)
                         && (l.PathOffset_ref == r.PathOffset_ref)
                         && (l.EndOffset_ref == r.EndOffset_ref)
                         && (l.Value_H_ref == r.Value_H_ref)
                         && (l.Value_L_ref == r.Value_L_ref)
                         && (l.SpeedLimitUnit_ref == r.SpeedLimitUnit_ref)
  );
}

/*!
 * \brief Compare for inequality with another LaneSpeedLimit instance.
 */
inline bool operator!=(LaneSpeedLimit const& l,
                       LaneSpeedLimit const& r) noexcept {
  return !(l == r);
}

}  // namespace LaneSpeedLimit

#endif  // ROADMODELFUSIONEXE_INCLUDE_LANESPEEDLIMIT_IMPL_TYPE_LANESPEEDLIMIT_H_
