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
/**        \file  RoadModelFusionExe/include/MergePoint/impl_type_mergepoint.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_MERGEPOINT_IMPL_TYPE_MERGEPOINT_H_
#define ROADMODELFUSIONEXE_INCLUDE_MERGEPOINT_IMPL_TYPE_MERGEPOINT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "IsMaster/impl_type_ismaster.h"
#include "PathId/impl_type_pathid.h"
#include "PathOffset/impl_type_pathoffset.h"

namespace MergePoint {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type MergePoint.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/MergePoint
 */
struct MergePoint {
  using _PathId_ref_type = PathId::PathId;
  using _PathOffset_ref_type = PathOffset::PathOffset;
  using _IsMaster_ref_type = IsMaster::IsMaster;

  _PathId_ref_type PathId_ref;
  _PathOffset_ref_type PathOffset_ref;
  _IsMaster_ref_type IsMaster_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another MergePoint instance.
 */
inline bool operator==(MergePoint const& l,
                       MergePoint const& r) noexcept {
  return (&l == &r) || ((l.PathId_ref == r.PathId_ref)
                         && (l.PathOffset_ref == r.PathOffset_ref)
                         && (l.IsMaster_ref == r.IsMaster_ref)
  );
}

/*!
 * \brief Compare for inequality with another MergePoint instance.
 */
inline bool operator!=(MergePoint const& l,
                       MergePoint const& r) noexcept {
  return !(l == r);
}

}  // namespace MergePoint

#endif  // ROADMODELFUSIONEXE_INCLUDE_MERGEPOINT_IMPL_TYPE_MERGEPOINT_H_
