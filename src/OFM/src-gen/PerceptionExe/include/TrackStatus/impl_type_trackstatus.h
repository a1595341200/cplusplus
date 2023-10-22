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
/**        \file  PerceptionExe/include/TrackStatus/impl_type_trackstatus.h
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

#ifndef PERCEPTIONEXE_INCLUDE_TRACKSTATUS_IMPL_TYPE_TRACKSTATUS_H_
#define PERCEPTIONEXE_INCLUDE_TRACKSTATUS_IMPL_TYPE_TRACKSTATUS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrackStatus {

/*!
 * \brief Type TrackStatus.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrackStatus
 */
enum class TrackStatus : uint8_t {
  TrackStatus_Invalid = 0,
  TrackStatus_NotTracked = 1,
  TrackStatus_Initialized = 2,
  TrackStatus_Tracked = 3,
  TrackStatus_Predicted = 4
};

}  // namespace TrackStatus

#endif  // PERCEPTIONEXE_INCLUDE_TRACKSTATUS_IMPL_TYPE_TRACKSTATUS_H_
