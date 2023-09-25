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
/**        \file  TrafficLightAttentionExe/include/DynCalibration/impl_type_dyncalibration.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_DYNCALIBRATION_IMPL_TYPE_DYNCALIBRATION_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_DYNCALIBRATION_IMPL_TYPE_DYNCALIBRATION_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace DynCalibration {

/*!
 * \brief Type DynCalibration.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DynCalibration
 */
enum class DynCalibration : uint8_t {
  DynCaliSts1_NotCalibrated = 0,
  DynCaliSts1_Pending = 1,
  DynCaliSts1_CalibrationOngoing = 2,
  DynCaliSts1_CalibrationFailed = 3,
  DynCaliSts1_CalibrationDone = 4
};

}  // namespace DynCalibration

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_DYNCALIBRATION_IMPL_TYPE_DYNCALIBRATION_H_
