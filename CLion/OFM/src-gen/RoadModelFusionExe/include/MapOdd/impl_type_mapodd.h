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
/**        \file  RoadModelFusionExe/include/MapOdd/impl_type_mapodd.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_MAPODD_IMPL_TYPE_MAPODD_H_
#define ROADMODELFUSIONEXE_INCLUDE_MAPODD_IMPL_TYPE_MAPODD_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "DistanceToOdd/impl_type_distancetoodd.h"
#include "InOdd/impl_type_inodd.h"
#include "Reason/impl_type_reason.h"

namespace MapOdd {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type MapOdd.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/MapOdd
 */
struct MapOdd {
  using _InOdd_ref_type = InOdd::InOdd;
  using _DistanceToOdd_ref_type = DistanceToOdd::DistanceToOdd;
  using _Reason_ref_type = Reason::Reason;

  _InOdd_ref_type InOdd_ref;
  _DistanceToOdd_ref_type DistanceToOdd_ref;
  _Reason_ref_type Reason_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another MapOdd instance.
 */
inline bool operator==(MapOdd const& l,
                       MapOdd const& r) noexcept {
  return (&l == &r) || ((l.InOdd_ref == r.InOdd_ref)
                         && (l.DistanceToOdd_ref == r.DistanceToOdd_ref)
                         && (l.Reason_ref == r.Reason_ref)
  );
}

/*!
 * \brief Compare for inequality with another MapOdd instance.
 */
inline bool operator!=(MapOdd const& l,
                       MapOdd const& r) noexcept {
  return !(l == r);
}

}  // namespace MapOdd

#endif  // ROADMODELFUSIONEXE_INCLUDE_MAPODD_IMPL_TYPE_MAPODD_H_
