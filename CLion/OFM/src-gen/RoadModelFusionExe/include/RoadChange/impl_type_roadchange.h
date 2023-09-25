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
/**        \file  RoadModelFusionExe/include/RoadChange/impl_type_roadchange.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_ROADCHANGE_IMPL_TYPE_ROADCHANGE_H_
#define ROADMODELFUSIONEXE_INCLUDE_ROADCHANGE_IMPL_TYPE_ROADCHANGE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "RoadChangeDistance/impl_type_roadchangedistance.h"
#include "RoadChangeType/impl_type_roadchangetype.h"

namespace RoadChange {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RoadChange.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RoadChange
 */
struct RoadChange {
  using _RoadChangeType_ref_type = RoadChangeType::RoadChangeType;
  using _RoadChangeDistance_ref_type = RoadChangeDistance::RoadChangeDistance;

  _RoadChangeType_ref_type RoadChangeType_ref;
  _RoadChangeDistance_ref_type RoadChangeDistance_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RoadChange instance.
 */
inline bool operator==(RoadChange const& l,
                       RoadChange const& r) noexcept {
  return (&l == &r) || ((l.RoadChangeType_ref == r.RoadChangeType_ref)
                         && (l.RoadChangeDistance_ref == r.RoadChangeDistance_ref)
  );
}

/*!
 * \brief Compare for inequality with another RoadChange instance.
 */
inline bool operator!=(RoadChange const& l,
                       RoadChange const& r) noexcept {
  return !(l == r);
}

}  // namespace RoadChange

#endif  // ROADMODELFUSIONEXE_INCLUDE_ROADCHANGE_IMPL_TYPE_ROADCHANGE_H_
