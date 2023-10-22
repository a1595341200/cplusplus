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
/**        \file  TrafficLightAttentionExe/include/MainType/impl_type_maintype.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_MAINTYPE_IMPL_TYPE_MAINTYPE_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_MAINTYPE_IMPL_TYPE_MAINTYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace MainType {

/*!
 * \brief Type MainType.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/MainType
 */
enum class MainType : uint8_t {
  SignMainType_Unknown = 0,
  SignMainType_SpeedLimit5 = 1,
  SignMainType_SpeedLimit10 = 2,
  SignMainType_SpeedLimit15 = 3,
  SignMainType_SpeedLimit20 = 4,
  SignMainType_SpeedLimit25 = 5,
  SignMainType_SpeedLimit30 = 6,
  SignMainType_SpeedLimit35 = 7,
  SignMainType_SpeedLimit40 = 8,
  SignMainType_SpeedLimit45 = 9,
  SignMainType_SpeedLimit50 = 10,
  SignMainType_SpeedLimit55 = 11,
  SignMainType_SpeedLimit60 = 12,
  SignMainType_SpeedLimit65 = 13,
  SignMainType_SpeedLimit70 = 14,
  SignMainType_SpeedLimit75 = 15,
  SignMainType_SpeedLimit80 = 16,
  SignMainType_SpeedLimit85 = 17,
  SignMainType_SpeedLimit90 = 18,
  SignMainType_SpeedLimit95 = 19,
  SignMainType_SpeedLimit100 = 20,
  SignMainType_SpeedLimit105 = 21,
  SignMainType_SpeedLimit110 = 22,
  SignMainType_SpeedLimit115 = 23,
  SignMainType_SpeedLimit120 = 24,
  SignMainType_SpeedLimit125 = 25,
  SignMainType_SpeedLimit130 = 26,
  SignMainType_SpeedLimit135 = 27,
  SignMainType_SpeedLimit140 = 28,
  SignMainType_SpeedLimit145 = 29,
  SignMainType_SpeedLimit150 = 30,
  SignMainType_SpeedLimit155 = 31,
  SignMainType_SpeedLimit160 = 32,
  SignMainType_EndOfSpeedLimit5 = 33,
  SignMainType_EndOfSpeedLimit10 = 34,
  SignMainType_EndOfSpeedLimit15 = 35,
  SignMainType_EndOfSpeedLimit20 = 36,
  SignMainType_EndOfSpeedLimit25 = 37,
  SignMainType_EndOfSpeedLimit30 = 38,
  SignMainType_EndOfSpeedLimit35 = 39,
  SignMainType_EndOfSpeedLimit40 = 40,
  SignMainType_EndOfSpeedLimit45 = 41,
  SignMainType_EndOfSpeedLimit50 = 42,
  SignMainType_EndOfSpeedLimit55 = 43,
  SignMainType_EndOfSpeedLimit60 = 44,
  SignMainType_EndOfSpeedLimit65 = 45,
  SignMainType_EndOfSpeedLimit70 = 46,
  SignMainType_EndOfSpeedLimit75 = 47,
  SignMainType_EndOfSpeedLimit80 = 48,
  SignMainType_EndOfSpeedLimit85 = 49,
  SignMainType_EndOfSpeedLimit90 = 50,
  SignMainType_EndOfSpeedLimit95 = 51,
  SignMainType_EndOfSpeedLimit100 = 52,
  SignMainType_EndOfSpeedLimit105 = 53,
  SignMainType_EndOfSpeedLimit110 = 54,
  SignMainType_EndOfSpeedLimit115 = 55,
  SignMainType_EndOfSpeedLimit120 = 56,
  SignMainType_EndOfSpeedLimit125 = 57,
  SignMainType_EndOfSpeedLimit130 = 58,
  SignMainType_EndOfSpeedLimit135 = 59,
  SignMainType_EndOfSpeedLimit140 = 60,
  SignMainType_EndOfSpeedLimit145 = 61,
  SignMainType_EndOfSpeedLimit150 = 62,
  SignMainType_EndOfSpeedLimit155 = 63,
  SignMainType_EndOfSpeedLimit160 = 64,
  SignMainType_LowSpeedLimit50 = 65,
  SignMainType_LowSpeedLimit60 = 66,
  SignMainType_LowSpeedLimit70 = 67,
  SignMainType_LowSpeedLimit80 = 68,
  SignMainType_LowSpeedLimit90 = 69,
  SignMainType_LowSpeedLimit100 = 70,
  SignMainType_LowSpeedLimit110 = 71,
  SignMainType_RecSpeedLimit5 = 72,
  SignMainType_RecSpeedLimit10 = 73,
  SignMainType_RecSpeedLimit15 = 74,
  SignMainType_RecSpeedLimit20 = 75,
  SignMainType_RecSpeedLimit30 = 76,
  SignMainType_RecSpeedLimit40 = 77,
  SignMainType_RecSpeedLimit50 = 78,
  SignMainType_RecSpeedLimit60 = 79,
  SignMainType_RecSpeedLimit70 = 80,
  SignMainType_RecSpeedLimit80 = 81,
  SignMainType_RecSpeedLimit90 = 82,
  SignMainType_RecSpeedLimit100 = 83,
  SignMainType_RecSpeedLimit110 = 84,
  SignMainType_RecSpeedLimit120 = 85,
  SignMainType_WeightLimit2_4 = 86,
  SignMainType_WeightLimit5 = 87,
  SignMainType_WeightLimit5_5 = 88,
  SignMainType_WeightLimit7 = 89,
  SignMainType_WeightLimit8 = 90,
  SignMainType_WeightLimit10 = 91,
  SignMainType_WeightLimit12 = 92,
  SignMainType_WeightLimit20 = 93,
  SignMainType_WeightLimit30 = 94,
  SignMainType_WeightLimit40 = 95,
  SignMainType_WeightLimit55 = 96,
  SignMainType_HeightLimit2_4 = 97,
  SignMainType_HeightLimit2_9 = 98,
  SignMainType_HeightLimit3 = 99,
  SignMainType_HeightLimit3_8 = 100,
  SignMainType_HeightLimit4 = 101,
  SignMainType_HeightLimit4_2 = 102,
  SignMainType_HeightLimit4_3 = 103,
  SignMainType_HeightLimit4_5 = 104,
  SignMainType_HeightLimit5 = 105,
  SignMainType_WidthLimit2 = 106,
  SignMainType_WidthLimit2_2 = 107,
  SignMainType_WidthLimit2_5 = 108,
  SignMainType_WidthLimit3 = 109,
  SignMainType_CautionForBadWeather = 110,
  SignMainType_CautionForIcyRoad = 111,
  SignMainType_CautionForFog = 112,
  SignMainType_CautionForRainAndSnow = 113,
  SignMainType_SharpLeftTurn = 114,
  SignMainType_SharpRightTurn = 115,
  SignMainType_ReverseDetour = 116,
  SignMainType_ContinuousDetour = 117,
  SignMainType_SteepHillUpwards = 118,
  SignMainType_SteepHillDownwards = 119,
  SignMainType_CautionForChild = 120,
  SignMainType_Construction = 121,
  SignMainType_SlowDownForSharpCurveUpwards = 122,
  SignMainType_SlowDownForSharpCurveDownwards = 123,
  SignMainType_NoThoroughfare = 124,
  SignMainType_NoEntry = 125,
  SignMainType_NoMotorVehicles = 126,
  SignMainType_NoPassing = 127,
  SignMainType_SlowDown = 128,
  SignMainType_Stop = 129,
  SignMainType_NoRightTurn = 130,
  SignMainType_NoLeftTurn = 131,
  SignMainType_NoGoingStraight = 132,
  SignMainType_NoLeftAndRightTurn = 133,
  SignMainType_NoGoingStraightAndLeftTurn = 134,
  SignMainType_NoGoingStraightAndRightTurn = 135,
  SignMainType_NoU_turn = 136,
  SignMainType_ForMotorVehicleDriving = 137,
  SignMainType_ForNonMotorVehicleDriving = 138,
  SignMainType_HighwayEntrance = 139,
  SignMainType_HighwayExit = 140,
  SignMainType_ExpresswayEntrance = 141,
  SignMainType_ExpresswayExit = 142,
  SignMainType_CityEntrance = 143,
  SignMainType_CityExit = 144,
  SignMainType_ResidentialAreaEntrance = 145,
  SignMainType_ResidentialAreaExit = 146,
  SignMainType_Invalid = 255
};

}  // namespace MainType

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_MAINTYPE_IMPL_TYPE_MAINTYPE_H_
