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
/**        \file  RoadModelFusionExe/include/LaneSlope/impl_type_laneslope.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LANESLOPE_IMPL_TYPE_LANESLOPE_H_
#define ROADMODELFUSIONEXE_INCLUDE_LANESLOPE_IMPL_TYPE_LANESLOPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "InstanceId/impl_type_instanceid.h"
#include "LaneNumber/impl_type_lanenumber.h"
#include "PathId/impl_type_pathid.h"
#include "SlopePoint/impl_type_slopepoint.h"

namespace LaneSlope {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneSlope.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneSlope
 */
struct LaneSlope {
  using _InstanceId_ref_type = InstanceId::InstanceId;
  using _PathId_ref_type = PathId::PathId;
  using _LaneNumber_ref_type = LaneNumber::LaneNumber;
  using _SlopePoint_ref_type = SlopePoint::SlopePoint;

  _InstanceId_ref_type InstanceId_ref;
  _PathId_ref_type PathId_ref;
  _LaneNumber_ref_type LaneNumber_ref;
  _SlopePoint_ref_type SlopePoint_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LaneSlope instance.
 */
inline bool operator==(LaneSlope const& l,
                       LaneSlope const& r) noexcept {
  return (&l == &r) || ((l.InstanceId_ref == r.InstanceId_ref)
                         && (l.PathId_ref == r.PathId_ref)
                         && (l.LaneNumber_ref == r.LaneNumber_ref)
                         && (l.SlopePoint_ref == r.SlopePoint_ref)
  );
}

/*!
 * \brief Compare for inequality with another LaneSlope instance.
 */
inline bool operator!=(LaneSlope const& l,
                       LaneSlope const& r) noexcept {
  return !(l == r);
}

}  // namespace LaneSlope

#endif  // ROADMODELFUSIONEXE_INCLUDE_LANESLOPE_IMPL_TYPE_LANESLOPE_H_
