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
/**        \file  EHRExe/include/NOAInfo/impl_type_noainfo.h
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

#ifndef EHREXE_INCLUDE_NOAINFO_IMPL_TYPE_NOAINFO_H_
#define EHREXE_INCLUDE_NOAINFO_IMPL_TYPE_NOAINFO_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Count/impl_type_count.h"
#include "MatchingStatus/impl_type_matchingstatus.h"
#include "NavigationStatus/impl_type_navigationstatus.h"
#include "PairOfIds/impl_type_pairofids.h"
#include "RemainDistance/impl_type_remaindistance.h"
#include "SwitchLaneDirection/impl_type_switchlanedirection.h"
#include "SwitchLaneDistance/impl_type_switchlanedistance.h"
#include "SwitchLaneEndDistance/impl_type_switchlaneenddistance.h"
#include "SwitchLaneReason/impl_type_switchlanereason.h"

namespace NOAInfo {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type NOAInfo.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/NOAInfo
 */
struct NOAInfo {
  using _NavigationStatus_ref_type = NavigationStatus::NavigationStatus;
  using _MatchingStatus_ref_type = MatchingStatus::MatchingStatus;
  using _RemainDistance_ref_type = RemainDistance::RemainDistance;
  using _SwitchLaneDirection_ref_type = SwitchLaneDirection::SwitchLaneDirection;
  using _SwitchLaneReason_ref_type = SwitchLaneReason::SwitchLaneReason;
  using _SwitchLaneDistance_ref_type = SwitchLaneDistance::SwitchLaneDistance;
  using _SwitchLaneEndDistance_ref_type = SwitchLaneEndDistance::SwitchLaneEndDistance;
  using _Count_ref_type = Count::Count;
  using _PairOfIds_ref_type = PairOfIds::PairOfIds;

  _NavigationStatus_ref_type NavigationStatus_ref;
  _MatchingStatus_ref_type MatchingStatus_ref;
  _RemainDistance_ref_type RemainDistance_ref;
  _SwitchLaneDirection_ref_type SwitchLaneDirection_ref;
  _SwitchLaneReason_ref_type SwitchLaneReason_ref;
  _SwitchLaneDistance_ref_type SwitchLaneDistance_ref;
  _SwitchLaneEndDistance_ref_type SwitchLaneEndDistance_ref;
  _Count_ref_type Count_ref;
  _PairOfIds_ref_type PairOfIds_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another NOAInfo instance.
 */
inline bool operator==(NOAInfo const& l,
                       NOAInfo const& r) noexcept {
  return (&l == &r) || ((l.NavigationStatus_ref == r.NavigationStatus_ref)
                         && (l.MatchingStatus_ref == r.MatchingStatus_ref)
                         && (l.RemainDistance_ref == r.RemainDistance_ref)
                         && (l.SwitchLaneDirection_ref == r.SwitchLaneDirection_ref)
                         && (l.SwitchLaneReason_ref == r.SwitchLaneReason_ref)
                         && (l.SwitchLaneDistance_ref == r.SwitchLaneDistance_ref)
                         && (l.SwitchLaneEndDistance_ref == r.SwitchLaneEndDistance_ref)
                         && (l.Count_ref == r.Count_ref)
                         && (l.PairOfIds_ref == r.PairOfIds_ref)
  );
}

/*!
 * \brief Compare for inequality with another NOAInfo instance.
 */
inline bool operator!=(NOAInfo const& l,
                       NOAInfo const& r) noexcept {
  return !(l == r);
}

}  // namespace NOAInfo

#endif  // EHREXE_INCLUDE_NOAINFO_IMPL_TYPE_NOAINFO_H_
