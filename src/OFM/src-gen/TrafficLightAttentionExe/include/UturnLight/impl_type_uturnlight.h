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
/**        \file  TrafficLightAttentionExe/include/UturnLight/impl_type_uturnlight.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_UTURNLIGHT_IMPL_TYPE_UTURNLIGHT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_UTURNLIGHT_IMPL_TYPE_UTURNLIGHT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace UturnLight {

/*!
 * \brief Type UturnLight.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/UturnLight
 */
enum class UturnLight : uint8_t {
  ColorSts1Vcc_Red = 0,
  ColorSts1Vcc_Yellow = 1,
  ColorSts1Vcc_Green = 2,
  ColorSts1Vcc_Reserved = 3
};

}  // namespace UturnLight

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_UTURNLIGHT_IMPL_TYPE_UTURNLIGHT_H_
