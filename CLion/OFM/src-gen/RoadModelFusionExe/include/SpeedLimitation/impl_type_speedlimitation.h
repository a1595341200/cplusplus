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
/**        \file  RoadModelFusionExe/include/SpeedLimitation/impl_type_speedlimitation.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_SPEEDLIMITATION_IMPL_TYPE_SPEEDLIMITATION_H_
#define ROADMODELFUSIONEXE_INCLUDE_SPEEDLIMITATION_IMPL_TYPE_SPEEDLIMITATION_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "SpeedMax/impl_type_speedmax.h"
#include "SpeedMin/impl_type_speedmin.h"

namespace SpeedLimitation {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type SpeedLimitation.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpeedLimitation
 */
struct SpeedLimitation {
  using _SpeedMin_ref_type = SpeedMin::SpeedMin;
  using _SpeedMax_ref_type = SpeedMax::SpeedMax;

  _SpeedMin_ref_type SpeedMin_ref;
  _SpeedMax_ref_type SpeedMax_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another SpeedLimitation instance.
 */
inline bool operator==(SpeedLimitation const& l,
                       SpeedLimitation const& r) noexcept {
  return (&l == &r) || ((l.SpeedMin_ref == r.SpeedMin_ref)
                         && (l.SpeedMax_ref == r.SpeedMax_ref)
  );
}

/*!
 * \brief Compare for inequality with another SpeedLimitation instance.
 */
inline bool operator!=(SpeedLimitation const& l,
                       SpeedLimitation const& r) noexcept {
  return !(l == r);
}

}  // namespace SpeedLimitation

#endif  // ROADMODELFUSIONEXE_INCLUDE_SPEEDLIMITATION_IMPL_TYPE_SPEEDLIMITATION_H_
