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
/**        \file  PerceptionRearExe/include/LppLaneChgSts/impl_type_lpplanechgsts.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_LPPLANECHGSTS_IMPL_TYPE_LPPLANECHGSTS_H_
#define PERCEPTIONREAREXE_INCLUDE_LPPLANECHGSTS_IMPL_TYPE_LPPLANECHGSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "LaneChgObjId/impl_type_lanechgobjid.h"
#include "LaneChgpossible/impl_type_lanechgpossible.h"
#include "LaneChgreason/impl_type_lanechgreason.h"
#include "LaneChgstatus/impl_type_lanechgstatus.h"
#include "LaneChgtype/impl_type_lanechgtype.h"

namespace LppLaneChgSts {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LppLaneChgSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LppLaneChgSts
 */
struct LppLaneChgSts {
  using _LaneChgtype_ref_type = LaneChgtype::LaneChgtype;
  using _LaneChgpossible_ref_type = LaneChgpossible::LaneChgpossible;
  using _LaneChgstatus_ref_type = LaneChgstatus::LaneChgstatus;
  using _LaneChgreason_ref_type = LaneChgreason::LaneChgreason;
  using _LaneChgObjId_ref_type = LaneChgObjId::LaneChgObjId;

  _LaneChgtype_ref_type LaneChgtype_ref;
  _LaneChgpossible_ref_type LaneChgpossible_ref;
  _LaneChgstatus_ref_type LaneChgstatus_ref;
  _LaneChgreason_ref_type LaneChgreason_ref;
  _LaneChgObjId_ref_type LaneChgObjId_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LppLaneChgSts instance.
 */
inline bool operator==(LppLaneChgSts const& l,
                       LppLaneChgSts const& r) noexcept {
  return (&l == &r) || ((l.LaneChgtype_ref == r.LaneChgtype_ref)
                         && (l.LaneChgpossible_ref == r.LaneChgpossible_ref)
                         && (l.LaneChgstatus_ref == r.LaneChgstatus_ref)
                         && (l.LaneChgreason_ref == r.LaneChgreason_ref)
                         && (l.LaneChgObjId_ref == r.LaneChgObjId_ref)
  );
}

/*!
 * \brief Compare for inequality with another LppLaneChgSts instance.
 */
inline bool operator!=(LppLaneChgSts const& l,
                       LppLaneChgSts const& r) noexcept {
  return !(l == r);
}

}  // namespace LppLaneChgSts

#endif  // PERCEPTIONREAREXE_INCLUDE_LPPLANECHGSTS_IMPL_TYPE_LPPLANECHGSTS_H_
