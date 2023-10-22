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
/**        \file  PerceptionExe/include/StopLine/impl_type_stopline.h
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

#ifndef PERCEPTIONEXE_INCLUDE_STOPLINE_IMPL_TYPE_STOPLINE_H_
#define PERCEPTIONEXE_INCLUDE_STOPLINE_IMPL_TYPE_STOPLINE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CamTimeStamp/impl_type_camtimestamp.h"
#include "Confidence/impl_type_confidence.h"
#include "Distance/impl_type_distance.h"

namespace StopLine {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type StopLine.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/StopLine
 */
struct StopLine {
  using _Confidence_ref_type = Confidence::Confidence;
  using _Distance_ref_type = Distance::Distance;
  using _CamTimeStamp_ref_type = CamTimeStamp::CamTimeStamp;

  _Confidence_ref_type Confidence_ref;
  _Distance_ref_type Distance_ref;
  _CamTimeStamp_ref_type CamTimeStamp_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another StopLine instance.
 */
inline bool operator==(StopLine const& l,
                       StopLine const& r) noexcept {
  return (&l == &r) || ((l.Confidence_ref == r.Confidence_ref)
                         && (l.Distance_ref == r.Distance_ref)
                         && (l.CamTimeStamp_ref == r.CamTimeStamp_ref)
  );
}

/*!
 * \brief Compare for inequality with another StopLine instance.
 */
inline bool operator!=(StopLine const& l,
                       StopLine const& r) noexcept {
  return !(l == r);
}

}  // namespace StopLine

#endif  // PERCEPTIONEXE_INCLUDE_STOPLINE_IMPL_TYPE_STOPLINE_H_
