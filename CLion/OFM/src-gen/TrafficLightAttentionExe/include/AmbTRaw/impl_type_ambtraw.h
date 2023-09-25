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
/**        \file  TrafficLightAttentionExe/include/AmbTRaw/impl_type_ambtraw.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMBTRAW_IMPL_TYPE_AMBTRAW_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMBTRAW_IMPL_TYPE_AMBTRAW_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "AmbTRawQly/impl_type_ambtrawqly.h"
#include "AmbTVal/impl_type_ambtval.h"

namespace AmbTRaw {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type AmbTRaw.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AmbTRaw
 */
struct AmbTRaw {
  using _AmbTVal_ref_type = AmbTVal::AmbTVal;
  using _AmbTRawQly_ref_type = AmbTRawQly::AmbTRawQly;

  _AmbTVal_ref_type AmbTVal_ref;
  _AmbTRawQly_ref_type AmbTRawQly_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another AmbTRaw instance.
 */
inline bool operator==(AmbTRaw const& l,
                       AmbTRaw const& r) noexcept {
  return (&l == &r) || ((l.AmbTVal_ref == r.AmbTVal_ref)
                         && (l.AmbTRawQly_ref == r.AmbTRawQly_ref)
  );
}

/*!
 * \brief Compare for inequality with another AmbTRaw instance.
 */
inline bool operator!=(AmbTRaw const& l,
                       AmbTRaw const& r) noexcept {
  return !(l == r);
}

}  // namespace AmbTRaw

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMBTRAW_IMPL_TYPE_AMBTRAW_H_
