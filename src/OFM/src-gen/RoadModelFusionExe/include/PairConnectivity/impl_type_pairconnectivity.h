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
/**        \file  RoadModelFusionExe/include/PairConnectivity/impl_type_pairconnectivity.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_PAIRCONNECTIVITY_IMPL_TYPE_PAIRCONNECTIVITY_H_
#define ROADMODELFUSIONEXE_INCLUDE_PAIRCONNECTIVITY_IMPL_TYPE_PAIRCONNECTIVITY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "FromLinkId/impl_type_fromlinkid.h"
#include "InitLaneNum/impl_type_initlanenum.h"
#include "InitPath/impl_type_initpath.h"
#include "InstanceId/impl_type_instanceid.h"
#include "LaneNumber/impl_type_lanenumber.h"
#include "NewLaneNum/impl_type_newlanenum.h"
#include "NewPath/impl_type_newpath.h"
#include "PathId/impl_type_pathid.h"
#include "PathOffset/impl_type_pathoffset.h"
#include "ToLinkId/impl_type_tolinkid.h"

namespace PairConnectivity {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PairConnectivity.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PairConnectivity
 */
struct PairConnectivity {
  using _InstanceId_ref_type = InstanceId::InstanceId;
  using _PathId_ref_type = PathId::PathId;
  using _LaneNumber_ref_type = LaneNumber::LaneNumber;
  using _PathOffset_ref_type = PathOffset::PathOffset;
  using _FromLinkId_ref_type = FromLinkId::FromLinkId;
  using _InitPath_ref_type = InitPath::InitPath;
  using _InitLaneNum_ref_type = InitLaneNum::InitLaneNum;
  using _ToLinkId_ref_type = ToLinkId::ToLinkId;
  using _NewPath_ref_type = NewPath::NewPath;
  using _NewLaneNum_ref_type = NewLaneNum::NewLaneNum;

  _InstanceId_ref_type InstanceId_ref;
  _PathId_ref_type PathId_ref;
  _LaneNumber_ref_type LaneNumber_ref;
  _PathOffset_ref_type PathOffset_ref;
  _FromLinkId_ref_type FromLinkId_ref;
  _InitPath_ref_type InitPath_ref;
  _InitLaneNum_ref_type InitLaneNum_ref;
  _ToLinkId_ref_type ToLinkId_ref;
  _NewPath_ref_type NewPath_ref;
  _NewLaneNum_ref_type NewLaneNum_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another PairConnectivity instance.
 */
inline bool operator==(PairConnectivity const& l,
                       PairConnectivity const& r) noexcept {
  return (&l == &r) || ((l.InstanceId_ref == r.InstanceId_ref)
                         && (l.PathId_ref == r.PathId_ref)
                         && (l.LaneNumber_ref == r.LaneNumber_ref)
                         && (l.PathOffset_ref == r.PathOffset_ref)
                         && (l.FromLinkId_ref == r.FromLinkId_ref)
                         && (l.InitPath_ref == r.InitPath_ref)
                         && (l.InitLaneNum_ref == r.InitLaneNum_ref)
                         && (l.ToLinkId_ref == r.ToLinkId_ref)
                         && (l.NewPath_ref == r.NewPath_ref)
                         && (l.NewLaneNum_ref == r.NewLaneNum_ref)
  );
}

/*!
 * \brief Compare for inequality with another PairConnectivity instance.
 */
inline bool operator!=(PairConnectivity const& l,
                       PairConnectivity const& r) noexcept {
  return !(l == r);
}

}  // namespace PairConnectivity

#endif  // ROADMODELFUSIONEXE_INCLUDE_PAIRCONNECTIVITY_IMPL_TYPE_PAIRCONNECTIVITY_H_
