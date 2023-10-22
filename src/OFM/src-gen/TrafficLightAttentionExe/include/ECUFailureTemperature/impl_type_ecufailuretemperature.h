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
/**        \file  TrafficLightAttentionExe/include/ECUFailureTemperature/impl_type_ecufailuretemperature.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_ECUFAILURETEMPERATURE_IMPL_TYPE_ECUFAILURETEMPERATURE_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_ECUFAILURETEMPERATURE_IMPL_TYPE_ECUFAILURETEMPERATURE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ECUFailureTemperature {

/*!
 * \brief Type ECUFailureTemperature.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ECUFailureTemperature
 */
enum class ECUFailureTemperature : uint8_t {
  FailrNoFailr1Vcc_NoFailr = 0,
  FailrNoFailr1Vcc_Failr = 1
};

}  // namespace ECUFailureTemperature

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_ECUFAILURETEMPERATURE_IMPL_TYPE_ECUFAILURETEMPERATURE_H_
