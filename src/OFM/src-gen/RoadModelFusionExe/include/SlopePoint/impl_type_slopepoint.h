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
/**        \file  RoadModelFusionExe/include/SlopePoint/impl_type_slopepoint.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_SLOPEPOINT_IMPL_TYPE_SLOPEPOINT_H_
#define ROADMODELFUSIONEXE_INCLUDE_SLOPEPOINT_IMPL_TYPE_SLOPEPOINT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Crossvalue/impl_type_crossvalue.h"
#include "Crossvalue/impl_type_slopevalue.h"
#include "PathOffset/impl_type_pathoffset.h"

namespace SlopePoint {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type SlopePoint.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SlopePoint
 */
struct SlopePoint {
  using _PathOffset_ref_type = PathOffset::PathOffset;
  using _Slopevalue_ref_type = Crossvalue::Slopevalue;
  using _Crossvalue_ref_type = Crossvalue::Crossvalue;

  _PathOffset_ref_type PathOffset_ref;
  _Slopevalue_ref_type Slopevalue_ref;
  _Crossvalue_ref_type Crossvalue_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another SlopePoint instance.
 */
inline bool operator==(SlopePoint const& l,
                       SlopePoint const& r) noexcept {
  return (&l == &r) || ((l.PathOffset_ref == r.PathOffset_ref)
                         && (l.Slopevalue_ref == r.Slopevalue_ref)
                         && (l.Crossvalue_ref == r.Crossvalue_ref)
  );
}

/*!
 * \brief Compare for inequality with another SlopePoint instance.
 */
inline bool operator!=(SlopePoint const& l,
                       SlopePoint const& r) noexcept {
  return !(l == r);
}

}  // namespace SlopePoint

#endif  // ROADMODELFUSIONEXE_INCLUDE_SLOPEPOINT_IMPL_TYPE_SLOPEPOINT_H_
