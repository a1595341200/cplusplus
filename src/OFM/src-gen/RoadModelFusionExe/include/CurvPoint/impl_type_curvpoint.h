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
/**        \file  RoadModelFusionExe/include/CurvPoint/impl_type_curvpoint.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_CURVPOINT_IMPL_TYPE_CURVPOINT_H_
#define ROADMODELFUSIONEXE_INCLUDE_CURVPOINT_IMPL_TYPE_CURVPOINT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CurvPointValue/impl_type_curvpointvalue.h"
#include "PathOffset/impl_type_pathoffset.h"

namespace CurvPoint {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type CurvPoint.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CurvPoint
 */
struct CurvPoint {
  using _PathOffset_ref_type = PathOffset::PathOffset;
  using _CurvPointValue_ref_type = CurvPointValue::CurvPointValue;

  _PathOffset_ref_type PathOffset_ref;
  _CurvPointValue_ref_type CurvPointValue_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another CurvPoint instance.
 */
inline bool operator==(CurvPoint const& l,
                       CurvPoint const& r) noexcept {
  return (&l == &r) || ((l.PathOffset_ref == r.PathOffset_ref)
                         && (l.CurvPointValue_ref == r.CurvPointValue_ref)
  );
}

/*!
 * \brief Compare for inequality with another CurvPoint instance.
 */
inline bool operator!=(CurvPoint const& l,
                       CurvPoint const& r) noexcept {
  return !(l == r);
}

}  // namespace CurvPoint

#endif  // ROADMODELFUSIONEXE_INCLUDE_CURVPOINT_IMPL_TYPE_CURVPOINT_H_
