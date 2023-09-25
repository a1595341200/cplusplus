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
/**        \file  RoadModelFusionExe/include/PathTrafficSigns/impl_type_pathtrafficsigns.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_PATHTRAFFICSIGNS_IMPL_TYPE_PATHTRAFFICSIGNS_H_
#define ROADMODELFUSIONEXE_INCLUDE_PATHTRAFFICSIGNS_IMPL_TYPE_PATHTRAFFICSIGNS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Altitude/impl_type_altitude.h"
#include "EndOffset/impl_type_endoffset.h"
#include "InstanceId/impl_type_instanceid.h"
#include "LaneNumber/impl_type_lanenumber.h"
#include "Latitude/impl_type_latitude.h"
#include "Longitude/impl_type_longitude.h"
#include "PathId/impl_type_pathid.h"
#include "PathOffset/impl_type_pathoffset.h"
#include "TrafficSignShape/impl_type_trafficsignshape.h"
#include "TrafficSignType/impl_type_trafficsigntype.h"

namespace PathTrafficSigns {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PathTrafficSigns.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PathTrafficSigns
 */
struct PathTrafficSigns {
  using _InstanceId_ref_type = InstanceId::InstanceId;
  using _PathId_ref_type = PathId::PathId;
  using _LaneNumber_ref_type = LaneNumber::LaneNumber;
  using _PathOffset_ref_type = PathOffset::PathOffset;
  using _EndOffset_ref_type = EndOffset::EndOffset;
  using _TrafficSignType_ref_type = TrafficSignType::TrafficSignType;
  using _TrafficSignShape_ref_type = TrafficSignShape::TrafficSignShape;
  using _Latitude_ref_type = Latitude::Latitude;
  using _Longitude_ref_type = Longitude::Longitude;
  using _Altitude_ref_type = Altitude::Altitude;

  _InstanceId_ref_type InstanceId_ref;
  _PathId_ref_type PathId_ref;
  _LaneNumber_ref_type LaneNumber_ref;
  _PathOffset_ref_type PathOffset_ref;
  _EndOffset_ref_type EndOffset_ref;
  _TrafficSignType_ref_type TrafficSignType_ref;
  _TrafficSignShape_ref_type TrafficSignShape_ref;
  _Latitude_ref_type Latitude_ref;
  _Longitude_ref_type Longitude_ref;
  _Altitude_ref_type Altitude_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another PathTrafficSigns instance.
 */
inline bool operator==(PathTrafficSigns const& l,
                       PathTrafficSigns const& r) noexcept {
  return (&l == &r) || ((l.InstanceId_ref == r.InstanceId_ref)
                         && (l.PathId_ref == r.PathId_ref)
                         && (l.LaneNumber_ref == r.LaneNumber_ref)
                         && (l.PathOffset_ref == r.PathOffset_ref)
                         && (l.EndOffset_ref == r.EndOffset_ref)
                         && (l.TrafficSignType_ref == r.TrafficSignType_ref)
                         && (l.TrafficSignShape_ref == r.TrafficSignShape_ref)
                         && (l.Latitude_ref == r.Latitude_ref)
                         && (l.Longitude_ref == r.Longitude_ref)
                         && (l.Altitude_ref == r.Altitude_ref)
  );
}

/*!
 * \brief Compare for inequality with another PathTrafficSigns instance.
 */
inline bool operator!=(PathTrafficSigns const& l,
                       PathTrafficSigns const& r) noexcept {
  return !(l == r);
}

}  // namespace PathTrafficSigns

#endif  // ROADMODELFUSIONEXE_INCLUDE_PATHTRAFFICSIGNS_IMPL_TYPE_PATHTRAFFICSIGNS_H_
