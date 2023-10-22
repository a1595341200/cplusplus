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
/**        \file  RadarAdaptorExe/include/CalibrationSts/impl_type_calibrationsts.h
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

#ifndef RADARADAPTOREXE_INCLUDE_CALIBRATIONSTS_IMPL_TYPE_CALIBRATIONSTS_H_
#define RADARADAPTOREXE_INCLUDE_CALIBRATIONSTS_IMPL_TYPE_CALIBRATIONSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CalibrationSts {

/*!
 * \brief Type CalibrationSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CalibrationSts
 */
enum class CalibrationSts : uint8_t {
  CalibSts1Vcc_Unknown = 0,
  CalibSts1Vcc_Calibrated = 1,
  CalibSts1Vcc_SensorMisalignmentDetected = 2,
  CalibSts1Vcc_CalibrationInProgress = 3,
  CalibSts1Vcc_Reserved1 = 4,
  CalibSts1Vcc_Reserved2 = 5,
  CalibSts1Vcc_Reserved3 = 6,
  CalibSts1Vcc_Reserved4 = 7
};

}  // namespace CalibrationSts

#endif  // RADARADAPTOREXE_INCLUDE_CALIBRATIONSTS_IMPL_TYPE_CALIBRATIONSTS_H_
