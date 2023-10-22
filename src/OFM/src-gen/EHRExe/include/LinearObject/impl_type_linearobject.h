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
/**        \file  EHRExe/include/LinearObject/impl_type_linearobject.h
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

#ifndef EHREXE_INCLUDE_LINEAROBJECT_IMPL_TYPE_LINEAROBJECT_H_
#define EHREXE_INCLUDE_LINEAROBJECT_IMPL_TYPE_LINEAROBJECT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "EndOffset/impl_type_endoffset.h"
#include "GeometryPoints/impl_type_geometrypoints.h"
#include "IDLinearObject/impl_type_idlinearobject.h"
#include "InstanceId/impl_type_instanceid.h"
#include "LaneNumber/impl_type_lanenumber.h"
#include "LinearObjectColour/impl_type_linearobjectcolour.h"
#include "LinearObjectCurveType/impl_type_linearobjectcurvetype.h"
#include "LinearObjectIsBold/impl_type_linearobjectisbold.h"
#include "LinearObjectType/impl_type_linearobjecttype.h"
#include "LinearObjectmarking/impl_type_linearobjectmarking.h"
#include "PathId/impl_type_pathid.h"
#include "PathOffset/impl_type_pathoffset.h"
#include "PointCount/impl_type_pointcount.h"

namespace LinearObject {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LinearObject.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinearObject
 */
struct LinearObject {
  using _InstanceId_ref_type = InstanceId::InstanceId;
  using _PathId_ref_type = PathId::PathId;
  using _LaneNumber_ref_type = LaneNumber::LaneNumber;
  using _PathOffset_ref_type = PathOffset::PathOffset;
  using _EndOffset_ref_type = EndOffset::EndOffset;
  using _IDLinearObject_ref_type = IDLinearObject::IDLinearObject;
  using _LinearObjectType_ref_type = LinearObjectType::LinearObjectType;
  using _LinearObjectmarking_ref_type = LinearObjectmarking::LinearObjectmarking;
  using _LinearObjectColour_ref_type = LinearObjectColour::LinearObjectColour;
  using _LinearObjectIsBold_ref_type = LinearObjectIsBold::LinearObjectIsBold;
  using _LinearObjectCurveType_ref_type = LinearObjectCurveType::LinearObjectCurveType;
  using _PointCount_ref_type = PointCount::PointCount;
  using _GeometryPoints_ref_type = GeometryPoints::GeometryPoints;

  _InstanceId_ref_type InstanceId_ref;
  _PathId_ref_type PathId_ref;
  _LaneNumber_ref_type LaneNumber_ref;
  _PathOffset_ref_type PathOffset_ref;
  _EndOffset_ref_type EndOffset_ref;
  _IDLinearObject_ref_type IDLinearObject_ref;
  _LinearObjectType_ref_type LinearObjectType_ref;
  _LinearObjectmarking_ref_type LinearObjectmarking_ref;
  _LinearObjectColour_ref_type LinearObjectColour_ref;
  _LinearObjectIsBold_ref_type LinearObjectIsBold_ref;
  _LinearObjectCurveType_ref_type LinearObjectCurveType_ref;
  _PointCount_ref_type PointCount_ref;
  _GeometryPoints_ref_type GeometryPoints_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LinearObject instance.
 */
inline bool operator==(LinearObject const& l,
                       LinearObject const& r) noexcept {
  return (&l == &r) || ((l.InstanceId_ref == r.InstanceId_ref)
                         && (l.PathId_ref == r.PathId_ref)
                         && (l.LaneNumber_ref == r.LaneNumber_ref)
                         && (l.PathOffset_ref == r.PathOffset_ref)
                         && (l.EndOffset_ref == r.EndOffset_ref)
                         && (l.IDLinearObject_ref == r.IDLinearObject_ref)
                         && (l.LinearObjectType_ref == r.LinearObjectType_ref)
                         && (l.LinearObjectmarking_ref == r.LinearObjectmarking_ref)
                         && (l.LinearObjectColour_ref == r.LinearObjectColour_ref)
                         && (l.LinearObjectIsBold_ref == r.LinearObjectIsBold_ref)
                         && (l.LinearObjectCurveType_ref == r.LinearObjectCurveType_ref)
                         && (l.PointCount_ref == r.PointCount_ref)
                         && (l.GeometryPoints_ref == r.GeometryPoints_ref)
  );
}

/*!
 * \brief Compare for inequality with another LinearObject instance.
 */
inline bool operator!=(LinearObject const& l,
                       LinearObject const& r) noexcept {
  return !(l == r);
}

}  // namespace LinearObject

#endif  // EHREXE_INCLUDE_LINEAROBJECT_IMPL_TYPE_LINEAROBJECT_H_
