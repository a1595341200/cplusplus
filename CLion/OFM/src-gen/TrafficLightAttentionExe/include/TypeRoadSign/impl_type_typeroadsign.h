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
/**        \file  TrafficLightAttentionExe/include/TypeRoadSign/impl_type_typeroadsign.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TYPEROADSIGN_IMPL_TYPE_TYPEROADSIGN_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TYPEROADSIGN_IMPL_TYPE_TYPEROADSIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TypeRoadSign {

/*!
 * \brief Type TypeRoadSign.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TypeRoadSign
 */
enum class TypeRoadSign : uint8_t {
  TypeRoadSign_Unknown = 0,
  TypeRoadSign_Left = 1,
  TypeRoadSign_Right = 2,
  TypeRoadSign_Forward = 3,
  TypeRoadSign_LeftForward = 4,
  TypeRoadSign_LeftRight = 5,
  TypeRoadSign_RightForward = 6,
  TypeRoadSign_LeftRightForward = 7,
  TypeRoadSign_U_turn = 8,
  Left_turn_and_u_turn = 9,
  Speed_limitation_10kph = 10,
  Speed_limitation_20kph = 11,
  Speed_limitation_30kph = 12,
  Speed_limitation_40kph = 13,
  Speed_limitation_50kph = 14,
  Speed_limitation_60kph = 15,
  Speed_limitation_70kph = 16,
  Speed_limitation_80kph = 17,
  Speed_limitation_90kph = 18,
  Speed_limitation_100kph = 19,
  Speed_limitation_110kph = 20,
  Speed_limitation_120kph = 21,
  Speed_limitation_130kph = 22,
  Speed_limitation_140kph = 23,
  Speed_limitation_150kph = 24,
  TypeRoadSign_Reserved = 25,
  TypeRoadSign_Reserved1 = 26,
  TypeRoadSign_Reserved2 = 27,
  TypeRoadSign_Reserved3 = 28,
  TypeRoadSign_Reserved4 = 29,
  TypeRoadSign_Reserved5 = 30,
  TypeRoadSign_Reserved6 = 31
};

}  // namespace TypeRoadSign

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TYPEROADSIGN_IMPL_TYPE_TYPEROADSIGN_H_
