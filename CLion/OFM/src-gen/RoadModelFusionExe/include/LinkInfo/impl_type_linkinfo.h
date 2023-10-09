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
/**        \file  RoadModelFusionExe/include/LinkInfo/impl_type_linkinfo.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LINKINFO_IMPL_TYPE_LINKINFO_H_
#define ROADMODELFUSIONEXE_INCLUDE_LINKINFO_IMPL_TYPE_LINKINFO_H_

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
#include "LaneInfos/impl_type_laneinfos.h"
#include "PathId/impl_type_pathid.h"
#include "PathOffset/impl_type_pathoffset.h"
#include "TotalNumLane/impl_type_totalnumlane.h"

namespace LinkInfo {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LinkInfo.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinkInfo
 */
struct LinkInfo {
  using _InstanceId_ref_type = InstanceId::InstanceId;
  using _PathId_ref_type = PathId::PathId;
  using _PathOffset_ref_type = PathOffset::PathOffset;
  using _EndOffset_ref_type = EndOffset::EndOffset;
  using _TotalNumLane_ref_type = TotalNumLane::TotalNumLane;
  using _LaneInfos_ref_type = LaneInfos::LaneInfos;

  _InstanceId_ref_type InstanceId_ref;
  _PathId_ref_type PathId_ref;
  _PathOffset_ref_type PathOffset_ref;
  _EndOffset_ref_type EndOffset_ref;
  _TotalNumLane_ref_type TotalNumLane_ref;
  _LaneInfos_ref_type LaneInfos_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LinkInfo instance.
 */
inline bool operator==(LinkInfo const& l,
                       LinkInfo const& r) noexcept {
  return (&l == &r) || ((l.InstanceId_ref == r.InstanceId_ref)
                         && (l.PathId_ref == r.PathId_ref)
                         && (l.PathOffset_ref == r.PathOffset_ref)
                         && (l.EndOffset_ref == r.EndOffset_ref)
                         && (l.TotalNumLane_ref == r.TotalNumLane_ref)
                         && (l.LaneInfos_ref == r.LaneInfos_ref)
  );
}

/*!
 * \brief Compare for inequality with another LinkInfo instance.
 */
inline bool operator!=(LinkInfo const& l,
                       LinkInfo const& r) noexcept {
  return !(l == r);
}

}  // namespace LinkInfo

#endif  // ROADMODELFUSIONEXE_INCLUDE_LINKINFO_IMPL_TYPE_LINKINFO_H_