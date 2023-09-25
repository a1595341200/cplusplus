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
/**        \file  PerceptionExe/include/ColorLane/impl_type_colorlane.h
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

#ifndef PERCEPTIONEXE_INCLUDE_COLORLANE_IMPL_TYPE_COLORLANE_H_
#define PERCEPTIONEXE_INCLUDE_COLORLANE_IMPL_TYPE_COLORLANE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ColorLane {

/*!
 * \brief Type ColorLane.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ColorLane
 */
enum class ColorLane : uint8_t {
  LineColor1Vcc_White = 0,
  LineColor1Vcc_Yellow = 1,
  LineColor1Vcc_Red = 2,
  LineColor1Vcc_Orange = 3,
  LineColor1Vcc_Green = 4,
  LineColor1Vcc_Other = 5
};

}  // namespace ColorLane

#endif  // PERCEPTIONEXE_INCLUDE_COLORLANE_IMPL_TYPE_COLORLANE_H_
