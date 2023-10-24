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
/**        \file  LocalizationFusionExe/include/SignMainTypeIDT/impl_type_signmaintypeidt.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_SIGNMAINTYPEIDT_IMPL_TYPE_SIGNMAINTYPEIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_SIGNMAINTYPEIDT_IMPL_TYPE_SIGNMAINTYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SignMainTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SignMainTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SignMainTypeIDT
 */
enum class SignMainTypeIDT : uint8_t {
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
  SignMainType_LowSpeedLimit5 = 65,
  SignMainType_LowSpeedLimit10 = 66,
  SignMainType_LowSpeedLimit15 = 67,
  SignMainType_LowSpeedLimit20 = 68,
  SignMainType_LowSpeedLimit25 = 69,
  SignMainType_LowSpeedLimit30 = 70,
  SignMainType_LowSpeedLimit35 = 71,
  SignMainType_LowSpeedLimit40 = 72,
  SignMainType_LowSpeedLimit45 = 73,
  SignMainType_LowSpeedLimit50 = 74,
  SignMainType_LowSpeedLimit55 = 75,
  SignMainType_LowSpeedLimit60 = 76,
  SignMainType_LowSpeedLimit65 = 77,
  SignMainType_LowSpeedLimit70 = 78,
  SignMainType_LowSpeedLimit75 = 79,
  SignMainType_LowSpeedLimit80 = 80,
  SignMainType_LowSpeedLimit85 = 81,
  SignMainType_LowSpeedLimit90 = 82,
  SignMainType_LowSpeedLimit95 = 83,
  SignMainType_LowSpeedLimit100 = 84,
  SignMainType_LowSpeedLimit105 = 85,
  SignMainType_LowSpeedLimit110 = 86,
  SignMainType_LowSpeedLimit115 = 87,
  SignMainType_LowSpeedLimit120 = 88,
  SignMainType_LowSpeedLimit125 = 89,
  SignMainType_LowSpeedLimit130 = 90,
  SignMainType_LowSpeedLimit135 = 91,
  SignMainType_LowSpeedLimit140 = 92,
  SignMainType_LowSpeedLimit145 = 93,
  SignMainType_LowSpeedLimit150 = 94,
  SignMainType_LowSpeedLimit155 = 95,
  SignMainType_LowSpeedLimit160 = 96,
  SignMainType_WeightLimit2_4 = 97,
  SignMainType_WeightLimit5 = 98,
  SignMainType_WeightLimit5_5 = 99,
  SignMainType_WeightLimit7 = 100,
  SignMainType_WeightLimit8 = 101,
  SignMainType_WeightLimit10 = 102,
  SignMainType_WeightLimit12 = 103,
  SignMainType_WeightLimit20 = 104,
  SignMainType_WeightLimit30 = 105,
  SignMainType_WeightLimit40 = 106,
  SignMainType_WeightLimit55 = 107,
  SignMainType_HeightLimit2_4 = 108,
  SignMainType_HeightLimit2_9 = 109,
  SignMainType_HeightLimit3 = 110,
  SignMainType_HeightLimit3_8 = 111,
  SignMainType_HeightLimit4 = 112,
  SignMainType_HeightLimit4_2 = 113,
  SignMainType_HeightLimit4_3 = 114,
  SignMainType_HeightLimit4_5 = 115,
  SignMainType_HeightLimit5 = 116,
  SignMainType_WidthLimit2 = 117,
  SignMainType_WidthLimit2_2 = 118,
  SignMainType_WidthLimit2_5 = 119,
  SignMainType_WidthLimit3 = 120,
  SignMainType_CautionForBadWeather = 121,
  SignMainType_CautionForIcyRoad = 122,
  SignMainType_CautionForFog = 123,
  SignMainType_CautionForRainAndSnow = 124,
  SignMainType_SharpLeftTurn = 125,
  SignMainType_SharpRightTurn = 126,
  SignMainType_ReverseDetour = 127,
  SignMainType_ContinuousDetour = 128,
  SignMainType_SteepHillUpwards = 129,
  SignMainType_SteepHillDownwards = 130,
  SignMainType_CautionForChild = 131,
  SignMainType_Construction = 132,
  SignMainType_SlowDownForSharpCurveUpwards = 133,
  SignMainType_SlowDownForSharpCurveDownwards = 134,
  SignMainType_NoThoroughfare = 135,
  SignMainType_NoEntry = 136,
  SignMainType_NoMotorVehicles = 137,
  SignMainType_NoPassing = 138,
  SignMainType_SlowDown = 139,
  SignMainType_Stop = 140,
  SignMainType_NoRightTurn = 141,
  SignMainType_NoLeftTurn = 142,
  SignMainType_NoGoingStraight = 143,
  SignMainType_NoLeftAndRightTurn = 144,
  SignMainType_NoGoingStraightAndLeftTurn = 145,
  SignMainType_NoGoingStraightAndRightTurn = 146,
  SignMainType_NoU_turn = 147,
  SignMainType_ForMotorVehicleDriving = 148,
  SignMainType_ForNonMotorVehicleDriving = 149,
  SignMainType_HighwayEntrance = 150,
  SignMainType_HighwayExit = 151,
  SignMainType_ExpresswayEntrance = 152,
  SignMainType_ExpresswayExit = 153,
  SignMainType_CityEntrance = 154,
  SignMainType_CityExit = 155,
  SignMainType_ResidentialAreaEntrance = 156,
  SignMainType_ResidentialAreaExit = 157,
  SignMainType_EndOfAllSpeedLimit = 158,
  SignMainType_EndOfVehiclePassingNotAllowed = 159,
  SignMainType_Invalid = 255
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SignMainTypeIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_SIGNMAINTYPEIDT_IMPL_TYPE_SIGNMAINTYPEIDT_H_
