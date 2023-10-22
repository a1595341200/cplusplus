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
/**        \file  RoadModelFusionExe/include/SwitchLaneReason/impl_type_switchlanereason.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_SWITCHLANEREASON_IMPL_TYPE_SWITCHLANEREASON_H_
#define ROADMODELFUSIONEXE_INCLUDE_SWITCHLANEREASON_IMPL_TYPE_SWITCHLANEREASON_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SwitchLaneReason {

/*!
 * \brief Type SwitchLaneReason.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SwitchLaneReason
 */
enum class SwitchLaneReason : uint8_t {
  SwitchLaneReason_NoReason = 0,
  SwitchLaneReason_LaneDisappear = 1,
  SwitchLaneReason_EnterJCTRampAhead = 2,
  SwitchLaneReason_EnterJCTRamp = 3,
  SwitchLaneReason_ExitJCTRampAhead = 4,
  SwitchLaneReason_ExitJCTRamp = 5,
  SwitchLaneReason_Y_shapedRoad = 6,
  SwitchLaneReason_Reserved0 = 7,
  SwitchLaneReason_Reserved1 = 8,
  SwitchLaneReason_Reserved2 = 9,
  SwitchLaneReason_EnterICRampAhead = 10,
  SwitchLaneReason_EnteringICRamp = 11,
  SwitchLaneReason_ExitICRampAhead = 12,
  SwitchLaneReason_ExitICRamp = 13,
  SwitchLaneReason_OFFWAY = 14,
  SwitchLaneReason_Others = 15
};

}  // namespace SwitchLaneReason

#endif  // ROADMODELFUSIONEXE_INCLUDE_SWITCHLANEREASON_IMPL_TYPE_SWITCHLANEREASON_H_
