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
/**        \file  RoadModelFusionExe/include/Construction/impl_type_construction.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_CONSTRUCTION_IMPL_TYPE_CONSTRUCTION_H_
#define ROADMODELFUSIONEXE_INCLUDE_CONSTRUCTION_IMPL_TYPE_CONSTRUCTION_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Construction_distance/impl_type_construction_distance.h"
#include "Has_construction/impl_type_has_construction.h"

namespace Construction {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Construction.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Construction
 */
struct Construction {
  using _Has_construction_ref_type = Has_construction::Has_construction;
  using _Construction_distance_ref_type = Construction_distance::Construction_distance;

  _Has_construction_ref_type Has_construction_ref;
  _Construction_distance_ref_type Construction_distance_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another Construction instance.
 */
inline bool operator==(Construction const& l,
                       Construction const& r) noexcept {
  return (&l == &r) || ((l.Has_construction_ref == r.Has_construction_ref)
                         && (l.Construction_distance_ref == r.Construction_distance_ref)
  );
}

/*!
 * \brief Compare for inequality with another Construction instance.
 */
inline bool operator!=(Construction const& l,
                       Construction const& r) noexcept {
  return !(l == r);
}

}  // namespace Construction

#endif  // ROADMODELFUSIONEXE_INCLUDE_CONSTRUCTION_IMPL_TYPE_CONSTRUCTION_H_
