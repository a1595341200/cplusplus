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
/**        \file  RoadModelFusionExe/include/SpecialSituation/impl_type_specialsituation.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_SPECIALSITUATION_IMPL_TYPE_SPECIALSITUATION_H_
#define ROADMODELFUSIONEXE_INCLUDE_SPECIALSITUATION_IMPL_TYPE_SPECIALSITUATION_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "SSDistance/impl_type_ssdistance.h"
#include "SSType/impl_type_sstype.h"

namespace SpecialSituation {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type SpecialSituation.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpecialSituation
 */
struct SpecialSituation {
  using _SSType_ref_type = SSType::SSType;
  using _SSDistance_ref_type = SSDistance::SSDistance;

  _SSType_ref_type SSType_ref;
  _SSDistance_ref_type SSDistance_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another SpecialSituation instance.
 */
inline bool operator==(SpecialSituation const& l,
                       SpecialSituation const& r) noexcept {
  return (&l == &r) || ((l.SSType_ref == r.SSType_ref)
                         && (l.SSDistance_ref == r.SSDistance_ref)
  );
}

/*!
 * \brief Compare for inequality with another SpecialSituation instance.
 */
inline bool operator!=(SpecialSituation const& l,
                       SpecialSituation const& r) noexcept {
  return !(l == r);
}

}  // namespace SpecialSituation

#endif  // ROADMODELFUSIONEXE_INCLUDE_SPECIALSITUATION_IMPL_TYPE_SPECIALSITUATION_H_
