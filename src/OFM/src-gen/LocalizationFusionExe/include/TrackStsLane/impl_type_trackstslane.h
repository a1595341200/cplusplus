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
/**        \file  LocalizationFusionExe/include/TrackStsLane/impl_type_trackstslane.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_TRACKSTSLANE_IMPL_TYPE_TRACKSTSLANE_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_TRACKSTSLANE_IMPL_TYPE_TRACKSTSLANE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrackStsLane {

/*!
 * \brief Type TrackStsLane.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrackStsLane
 */
enum class TrackStsLane : uint8_t {
  LaneTrackSts_NoMarkingDetected = 0,
  LaneTrackSts_TrackedDetectedMarking = 1,
  LaneTrackSts_CloseRangePredictedMarking = 2,
  LaneTrackSts_FarRangePredictedMarking = 3,
  LaneTrackSts_PredictedMarking = 4
};

}  // namespace TrackStsLane

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_TRACKSTSLANE_IMPL_TYPE_TRACKSTSLANE_H_
