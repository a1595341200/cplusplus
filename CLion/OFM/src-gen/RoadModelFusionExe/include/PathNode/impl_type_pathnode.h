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
/**        \file  RoadModelFusionExe/include/PathNode/impl_type_pathnode.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_PATHNODE_IMPL_TYPE_PATHNODE_H_
#define ROADMODELFUSIONEXE_INCLUDE_PATHNODE_IMPL_TYPE_PATHNODE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CompIntSec/impl_type_compintsec.h"
#include "EndOffset/impl_type_endoffset.h"
#include "InstanceId/impl_type_instanceid.h"
#include "LaneNumber/impl_type_lanenumber.h"
#include "PathId/impl_type_pathid.h"
#include "PathOffset/impl_type_pathoffset.h"
#include "Probability/impl_type_probability.h"
#include "RightOfWay/impl_type_rightofway.h"
#include "SubPath/impl_type_subpath.h"
#include "TurnAngle/impl_type_turnangle.h"

namespace PathNode {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PathNode.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PathNode
 */
struct PathNode {
  using _InstanceId_ref_type = InstanceId::InstanceId;
  using _PathId_ref_type = PathId::PathId;
  using _LaneNumber_ref_type = LaneNumber::LaneNumber;
  using _PathOffset_ref_type = PathOffset::PathOffset;
  using _EndOffset_ref_type = EndOffset::EndOffset;
  using _SubPath_ref_type = SubPath::SubPath;
  using _Probability_ref_type = Probability::Probability;
  using _TurnAngle_ref_type = TurnAngle::TurnAngle;
  using _CompIntSec_ref_type = CompIntSec::CompIntSec;
  using _RightOfWay_ref_type = RightOfWay::RightOfWay;

  _InstanceId_ref_type InstanceId_ref;
  _PathId_ref_type PathId_ref;
  _LaneNumber_ref_type LaneNumber_ref;
  _PathOffset_ref_type PathOffset_ref;
  _EndOffset_ref_type EndOffset_ref;
  _SubPath_ref_type SubPath_ref;
  _Probability_ref_type Probability_ref;
  _TurnAngle_ref_type TurnAngle_ref;
  _CompIntSec_ref_type CompIntSec_ref;
  _RightOfWay_ref_type RightOfWay_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another PathNode instance.
 */
inline bool operator==(PathNode const& l,
                       PathNode const& r) noexcept {
  return (&l == &r) || ((l.InstanceId_ref == r.InstanceId_ref)
                         && (l.PathId_ref == r.PathId_ref)
                         && (l.LaneNumber_ref == r.LaneNumber_ref)
                         && (l.PathOffset_ref == r.PathOffset_ref)
                         && (l.EndOffset_ref == r.EndOffset_ref)
                         && (l.SubPath_ref == r.SubPath_ref)
                         && (l.Probability_ref == r.Probability_ref)
                         && (l.TurnAngle_ref == r.TurnAngle_ref)
                         && (l.CompIntSec_ref == r.CompIntSec_ref)
                         && (l.RightOfWay_ref == r.RightOfWay_ref)
  );
}

/*!
 * \brief Compare for inequality with another PathNode instance.
 */
inline bool operator!=(PathNode const& l,
                       PathNode const& r) noexcept {
  return !(l == r);
}

}  // namespace PathNode

#endif  // ROADMODELFUSIONEXE_INCLUDE_PATHNODE_IMPL_TYPE_PATHNODE_H_
