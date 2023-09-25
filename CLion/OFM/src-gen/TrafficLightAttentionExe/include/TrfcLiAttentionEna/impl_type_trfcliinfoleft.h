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
/**        \file  TrafficLightAttentionExe/include/TrfcLiAttentionEna/impl_type_trfcliinfoleft.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIATTENTIONENA_IMPL_TYPE_TRFCLIINFOLEFT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIATTENTIONENA_IMPL_TYPE_TRFCLIINFOLEFT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcLiAttentionEna {

/*!
 * \brief Type TrfcliInfoLeft.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcliInfoLeft
 */
enum class TrfcliInfoLeft : uint8_t {
  TrfcliInfoLeft1_Empty = 0,
  TrfcliInfoLeft1_Timetogo = 1,
  TrfcliInfoLeft1_LightenRedCircle = 2,
  TrfcliInfoLeft1_LightenYellowCircle = 3,
  TrfcliInfoLeft1_LightenGreenCircle = 4,
  TrfcliInfoLeft1_LightenRedLeftArrow = 5,
  TrfcliInfoLeft1_LightenYellowLeftArrow = 6,
  TrfcliInfoLeft1_LightenGreenLeftArrow = 7,
  TrfcliInfoLeft1_LightenRedStraightArrow = 8,
  TrfcliInfoLeft1_LightenYellowStraightArrow = 9,
  TrfcliInfoLeft1_LightenGreenStraightArrow = 10,
  TrfcliInfoLeft1_LightenRedRightArrow = 11,
  TrfcliInfoLeft1_LightenYellowRightArrow = 12,
  TrfcliInfoLeft1_LightenGreenRightArrow = 13,
  TrfcliInfoLeft1_UturnRedLight = 14,
  TrfcliInfoLeft1_UturnYellowLight = 15,
  TrfcliInfoLeft1_UturnGreenLight = 16
};

}  // namespace TrfcLiAttentionEna

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIATTENTIONENA_IMPL_TYPE_TRFCLIINFOLEFT_H_
