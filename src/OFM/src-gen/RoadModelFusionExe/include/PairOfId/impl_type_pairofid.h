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
/**        \file  RoadModelFusionExe/include/PairOfId/impl_type_pairofid.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_PAIROFID_IMPL_TYPE_PAIROFID_H_
#define ROADMODELFUSIONEXE_INCLUDE_PAIROFID_IMPL_TYPE_PAIROFID_H_

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
#include "LinearObjectId/impl_type_linearobjectid.h"
#include "PathId/impl_type_pathid.h"

namespace PairOfId {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PairOfId.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PairOfId
 */
struct PairOfId {
  using _PathId_ref_type = PathId::PathId;
  using _InstanceId_ref_type = InstanceId::InstanceId;
  using _LaneNumber_ref_type = LaneNumber::LaneNumber;
  using _LinearObjectId_ref_type = LinearObjectId::LinearObjectId;

  _PathId_ref_type PathId_ref;
  _InstanceId_ref_type InstanceId_ref;
  _LaneNumber_ref_type LaneNumber_ref;
  _LinearObjectId_ref_type LinearObjectId_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another PairOfId instance.
 */
inline bool operator==(PairOfId const& l,
                       PairOfId const& r) noexcept {
  return (&l == &r) || ((l.PathId_ref == r.PathId_ref)
                         && (l.InstanceId_ref == r.InstanceId_ref)
                         && (l.LaneNumber_ref == r.LaneNumber_ref)
                         && (l.LinearObjectId_ref == r.LinearObjectId_ref)
  );
}

/*!
 * \brief Compare for inequality with another PairOfId instance.
 */
inline bool operator!=(PairOfId const& l,
                       PairOfId const& r) noexcept {
  return !(l == r);
}

}  // namespace PairOfId

#endif  // ROADMODELFUSIONEXE_INCLUDE_PAIROFID_IMPL_TYPE_PAIROFID_H_
