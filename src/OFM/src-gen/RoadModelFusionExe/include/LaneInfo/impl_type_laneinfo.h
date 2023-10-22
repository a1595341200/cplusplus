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
/**        \file  RoadModelFusionExe/include/LaneInfo/impl_type_laneinfo.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LANEINFO_IMPL_TYPE_LANEINFO_H_
#define ROADMODELFUSIONEXE_INCLUDE_LANEINFO_IMPL_TYPE_LANEINFO_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Direction/impl_type_direction.h"
#include "LaneAppType/impl_type_laneapptype.h"
#include "LaneNum/impl_type_lanenum.h"
#include "LaneType/impl_type_lanetype.h"
#include "LaneWidth1/impl_type_lanewidth1.h"
#include "LinearObjects/impl_type_linearobjects.h"
#include "TotalNumObj/impl_type_totalnumobj.h"
#include "Transit/impl_type_transit.h"

namespace LaneInfo {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneInfo.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneInfo
 */
struct LaneInfo {
  using _LaneNum_ref_type = LaneNum::LaneNum;
  using _LaneWidth1_ref_type = LaneWidth1::LaneWidth1;
  using _Direction_ref_type = Direction::Direction;
  using _Transit_ref_type = Transit::Transit;
  using _LaneType_ref_type = LaneType::LaneType;
  using _LaneAppType_ref_type = LaneAppType::LaneAppType;
  using _TotalNumObj_ref_type = TotalNumObj::TotalNumObj;
  using _LinearObjects_ref_type = LinearObjects::LinearObjects;

  _LaneNum_ref_type LaneNum_ref;
  _LaneWidth1_ref_type LaneWidth1_ref;
  _Direction_ref_type Direction_ref;
  _Transit_ref_type Transit_ref;
  _LaneType_ref_type LaneType_ref;
  _LaneAppType_ref_type LaneAppType_ref;
  _TotalNumObj_ref_type TotalNumObj_ref;
  _LinearObjects_ref_type LinearObjects_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LaneInfo instance.
 */
inline bool operator==(LaneInfo const& l,
                       LaneInfo const& r) noexcept {
  return (&l == &r) || ((l.LaneNum_ref == r.LaneNum_ref)
                         && (l.LaneWidth1_ref == r.LaneWidth1_ref)
                         && (l.Direction_ref == r.Direction_ref)
                         && (l.Transit_ref == r.Transit_ref)
                         && (l.LaneType_ref == r.LaneType_ref)
                         && (l.LaneAppType_ref == r.LaneAppType_ref)
                         && (l.TotalNumObj_ref == r.TotalNumObj_ref)
                         && (l.LinearObjects_ref == r.LinearObjects_ref)
  );
}

/*!
 * \brief Compare for inequality with another LaneInfo instance.
 */
inline bool operator!=(LaneInfo const& l,
                       LaneInfo const& r) noexcept {
  return !(l == r);
}

}  // namespace LaneInfo

#endif  // ROADMODELFUSIONEXE_INCLUDE_LANEINFO_IMPL_TYPE_LANEINFO_H_
