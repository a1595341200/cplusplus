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
/**        \file  TrafficLightAttentionExe/include/Crosswalk/impl_type_crosswalk.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_CROSSWALK_IMPL_TYPE_CROSSWALK_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_CROSSWALK_IMPL_TYPE_CROSSWALK_H_

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
#include "CrosswalkLength/impl_type_crosswalklength.h"
#include "CrosswalkWidth/impl_type_crosswalkwidth.h"
#include "Distance/impl_type_distance.h"

namespace Crosswalk {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Crosswalk.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Crosswalk
 */
struct Crosswalk {
  using _Confidence_ref_type = Confidence::Confidence;
  using _Distance_ref_type = Distance::Distance;
  using _CrosswalkLength_ref_type = CrosswalkLength::CrosswalkLength;
  using _CrosswalkWidth_ref_type = CrosswalkWidth::CrosswalkWidth;
  using _CamTimeStamp_ref_type = CamTimeStamp::CamTimeStamp;

  _Confidence_ref_type Confidence_ref;
  _Distance_ref_type Distance_ref;
  _CrosswalkLength_ref_type CrosswalkLength_ref;
  _CrosswalkWidth_ref_type CrosswalkWidth_ref;
  _CamTimeStamp_ref_type CamTimeStamp_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another Crosswalk instance.
 */
inline bool operator==(Crosswalk const& l,
                       Crosswalk const& r) noexcept {
  return (&l == &r) || ((l.Confidence_ref == r.Confidence_ref)
                         && (l.Distance_ref == r.Distance_ref)
                         && (l.CrosswalkLength_ref == r.CrosswalkLength_ref)
                         && (l.CrosswalkWidth_ref == r.CrosswalkWidth_ref)
                         && (l.CamTimeStamp_ref == r.CamTimeStamp_ref)
  );
}

/*!
 * \brief Compare for inequality with another Crosswalk instance.
 */
inline bool operator!=(Crosswalk const& l,
                       Crosswalk const& r) noexcept {
  return !(l == r);
}

}  // namespace Crosswalk

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_CROSSWALK_IMPL_TYPE_CROSSWALK_H_
