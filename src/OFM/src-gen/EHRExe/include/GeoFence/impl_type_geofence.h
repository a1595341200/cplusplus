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
/**        \file  EHRExe/include/GeoFence/impl_type_geofence.h
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

#ifndef EHREXE_INCLUDE_GEOFENCE_IMPL_TYPE_GEOFENCE_H_
#define EHREXE_INCLUDE_GEOFENCE_IMPL_TYPE_GEOFENCE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "E_Offset/impl_type_e_offset.h"
#include "EndOffset/impl_type_endoffset.h"
#include "GeoFenceCount/impl_type_geofencecount.h"
#include "GeofenceType/impl_type_geofencetype.h"
#include "InstanceId/impl_type_instanceid.h"
#include "LaneNumber/impl_type_lanenumber.h"
#include "Lanesequence/impl_type_lanesequence.h"
#include "PathId/impl_type_pathid.h"
#include "PathOffset/impl_type_pathoffset.h"
#include "S_Offset/impl_type_s_offset.h"

namespace GeoFence {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type GeoFence.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GeoFence
 */
struct GeoFence {
  using _InstanceId_ref_type = InstanceId::InstanceId;
  using _PathId_ref_type = PathId::PathId;
  using _LaneNumber_ref_type = LaneNumber::LaneNumber;
  using _PathOffset_ref_type = PathOffset::PathOffset;
  using _EndOffset_ref_type = EndOffset::EndOffset;
  using _GeoFenceCount_ref_type = GeoFenceCount::GeoFenceCount;
  using _GeofenceType_ref_type = GeofenceType::GeofenceType;
  using _Lanesequence_ref_type = Lanesequence::Lanesequence;
  using _S_Offset_ref_type = S_Offset::S_Offset;
  using _E_Offset_ref_type = E_Offset::E_Offset;

  _InstanceId_ref_type InstanceId_ref;
  _PathId_ref_type PathId_ref;
  _LaneNumber_ref_type LaneNumber_ref;
  _PathOffset_ref_type PathOffset_ref;
  _EndOffset_ref_type EndOffset_ref;
  _GeoFenceCount_ref_type GeoFenceCount_ref;
  _GeofenceType_ref_type GeofenceType_ref;
  _Lanesequence_ref_type Lanesequence_ref;
  _S_Offset_ref_type S_Offset_ref;
  _E_Offset_ref_type E_Offset_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another GeoFence instance.
 */
inline bool operator==(GeoFence const& l,
                       GeoFence const& r) noexcept {
  return (&l == &r) || ((l.InstanceId_ref == r.InstanceId_ref)
                         && (l.PathId_ref == r.PathId_ref)
                         && (l.LaneNumber_ref == r.LaneNumber_ref)
                         && (l.PathOffset_ref == r.PathOffset_ref)
                         && (l.EndOffset_ref == r.EndOffset_ref)
                         && (l.GeoFenceCount_ref == r.GeoFenceCount_ref)
                         && (l.GeofenceType_ref == r.GeofenceType_ref)
                         && (l.Lanesequence_ref == r.Lanesequence_ref)
                         && (l.S_Offset_ref == r.S_Offset_ref)
                         && (l.E_Offset_ref == r.E_Offset_ref)
  );
}

/*!
 * \brief Compare for inequality with another GeoFence instance.
 */
inline bool operator!=(GeoFence const& l,
                       GeoFence const& r) noexcept {
  return !(l == r);
}

}  // namespace GeoFence

#endif  // EHREXE_INCLUDE_GEOFENCE_IMPL_TYPE_GEOFENCE_H_
