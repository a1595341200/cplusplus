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
/**        \file  RoadModelFusionExe/include/Geofennce_judge_status/impl_type_geofennce_judge_status.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_GEOFENNCE_JUDGE_STATUS_IMPL_TYPE_GEOFENNCE_JUDGE_STATUS_H_
#define ROADMODELFUSIONEXE_INCLUDE_GEOFENNCE_JUDGE_STATUS_IMPL_TYPE_GEOFENNCE_JUDGE_STATUS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace Geofennce_judge_status {

/*!
 * \brief Type Geofennce_judge_status.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Geofennce_judge_status
 */
enum class Geofennce_judge_status : uint8_t {
  Geofennce_NotInTheGeofence = 0,
  Geofennce_InTheGeofence = 1
};

}  // namespace Geofennce_judge_status

#endif  // ROADMODELFUSIONEXE_INCLUDE_GEOFENNCE_JUDGE_STATUS_IMPL_TYPE_GEOFENNCE_JUDGE_STATUS_H_
