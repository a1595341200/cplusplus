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
/**        \file  RoadModelFusionExe/include/Ramp/impl_type_ramp.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_RAMP_IMPL_TYPE_RAMP_H_
#define ROADMODELFUSIONEXE_INCLUDE_RAMP_IMPL_TYPE_RAMP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "EndPnt/impl_type_endpnt.h"
#include "RampDistance/impl_type_rampdistance.h"
#include "StartPnt/impl_type_startpnt.h"

namespace Ramp {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Ramp.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Ramp
 */
struct Ramp {
  using _RampDistance_ref_type = RampDistance::RampDistance;
  using _EndPnt_ref_type = EndPnt::EndPnt;
  using _StartPnt_ref_type = StartPnt::StartPnt;

  _RampDistance_ref_type RampDistance_ref;
  _EndPnt_ref_type EndPnt_ref;
  _StartPnt_ref_type StartPnt_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another Ramp instance.
 */
inline bool operator==(Ramp const& l,
                       Ramp const& r) noexcept {
  return (&l == &r) || ((l.RampDistance_ref == r.RampDistance_ref)
                         && (l.EndPnt_ref == r.EndPnt_ref)
                         && (l.StartPnt_ref == r.StartPnt_ref)
  );
}

/*!
 * \brief Compare for inequality with another Ramp instance.
 */
inline bool operator!=(Ramp const& l,
                       Ramp const& r) noexcept {
  return !(l == r);
}

}  // namespace Ramp

#endif  // ROADMODELFUSIONEXE_INCLUDE_RAMP_IMPL_TYPE_RAMP_H_
