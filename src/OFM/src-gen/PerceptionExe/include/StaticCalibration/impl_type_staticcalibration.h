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
/**        \file  PerceptionExe/include/StaticCalibration/impl_type_staticcalibration.h
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

#ifndef PERCEPTIONEXE_INCLUDE_STATICCALIBRATION_IMPL_TYPE_STATICCALIBRATION_H_
#define PERCEPTIONEXE_INCLUDE_STATICCALIBRATION_IMPL_TYPE_STATICCALIBRATION_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace StaticCalibration {

/*!
 * \brief Type StaticCalibration.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/StaticCalibration
 */
enum class StaticCalibration : uint8_t {
  DynCaliSts1_NotCalibrated = 0,
  DynCaliSts1_CalibrationOngoing = 1,
  DynCaliSts1_CalibrationFailed = 2,
  DynCaliSts1_CalibrationDone = 3
};

}  // namespace StaticCalibration

#endif  // PERCEPTIONEXE_INCLUDE_STATICCALIBRATION_IMPL_TYPE_STATICCALIBRATION_H_
