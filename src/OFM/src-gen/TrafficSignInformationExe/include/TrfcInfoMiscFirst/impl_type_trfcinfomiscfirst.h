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
/**        \file  TrafficSignInformationExe/include/TrfcInfoMiscFirst/impl_type_trfcinfomiscfirst.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCINFOMISCFIRST_IMPL_TYPE_TRFCINFOMISCFIRST_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCINFOMISCFIRST_IMPL_TYPE_TRFCINFOMISCFIRST_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcInfoMiscFirst {

/*!
 * \brief Type TrfcInfoMiscFirst.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcInfoMiscFirst
 */
enum class TrfcInfoMiscFirst : uint8_t {
  TrfcInfoMiscFirst1_Off = 0,
  TrfcInfoMiscFirst1_NoEntrance = 1,
  TrfcInfoMiscFirst1_VehiclePassingNotAllowed = 2,
  TrfcInfoMiscFirst1_EndOfVehiclePassingNotAllowed = 3,
  TrfcInfoMiscFirst1_Stop = 4,
  TrfcInfoMiscFirst1_SpeedLimitControl = 5,
  TrfcInfoMiscFirst1_USNightSpeedLimit = 6,
  TrfcInfoMiscFirst1_Schoolandchildrenwarning = 7,
  TrfcInfoMiscFirst1_Roadwork = 8,
  TrfcInfoMiscFirst1_leftcurve = 9,
  TrfcInfoMiscFirst1_rightcurve = 10,
  TrfcInfoMiscFirst1_seriescurves = 11,
  TrfcInfoMiscFirst1_Reserved = 12
};

}  // namespace TrfcInfoMiscFirst

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCINFOMISCFIRST_IMPL_TYPE_TRFCINFOMISCFIRST_H_
