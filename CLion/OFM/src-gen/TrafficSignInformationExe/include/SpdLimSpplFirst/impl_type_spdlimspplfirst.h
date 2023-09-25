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
/**        \file  TrafficSignInformationExe/include/SpdLimSpplFirst/impl_type_spdlimspplfirst.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDLIMSPPLFIRST_IMPL_TYPE_SPDLIMSPPLFIRST_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDLIMSPPLFIRST_IMPL_TYPE_SPDLIMSPPLFIRST_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SpdLimSpplFirst {

/*!
 * \brief Type SpdLimSpplFirst.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpdLimSpplFirst
 */
enum class SpdLimSpplFirst : uint8_t {
  SpplTrfcSgnInfo1Vcc_Off = 0,
  SpplTrfcSgnInfo1Vcc_Left = 1,
  SpplTrfcSgnInfo1Vcc_Right = 2,
  SpplTrfcSgnInfo1Vcc_Rain = 3,
  SpplTrfcSgnInfo1Vcc_Snow = 4,
  SpplTrfcSgnInfo1Vcc_Snowandrain = 5,
  SpplTrfcSgnInfo1Vcc_Wet = 6,
  SpplTrfcSgnInfo1Vcc_Ice = 7,
  SpplTrfcSgnInfo1Vcc_Trailer = 8,
  SpplTrfcSgnInfo1Vcc_Zone = 9,
  SpplTrfcSgnInfo1Vcc_Timelimit = 10,
  SpplTrfcSgnInfo1Vcc_Distanceto = 11,
  SpplTrfcSgnInfo1Vcc_Distanceduring = 12,
  SpplTrfcSgnInfo1Vcc_Schoolarea = 13,
  SpplTrfcSgnInfo1Vcc_Fog = 14,
  SpplTrfcSgnInfo1Vcc_Night = 15,
  SpplTrfcSgnInfo1Vcc_Ramp = 16,
  SpplTrfcSgnInfo1Vcc_Generalsupplementarysign = 17,
  SpplTrfcSgnInfo1Vcc_End = 18
};

}  // namespace SpdLimSpplFirst

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDLIMSPPLFIRST_IMPL_TYPE_SPDLIMSPPLFIRST_H_
