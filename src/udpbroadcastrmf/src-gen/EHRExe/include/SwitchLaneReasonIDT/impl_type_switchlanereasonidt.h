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
/**        \file  EHRExe/include/SwitchLaneReasonIDT/impl_type_switchlanereasonidt.h
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

#ifndef EHREXE_INCLUDE_SWITCHLANEREASONIDT_IMPL_TYPE_SWITCHLANEREASONIDT_H_
#define EHREXE_INCLUDE_SWITCHLANEREASONIDT_IMPL_TYPE_SWITCHLANEREASONIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SwitchLaneReasonIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SwitchLaneReasonIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SwitchLaneReasonIDT
 */
enum class SwitchLaneReasonIDT : uint8_t {
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
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SwitchLaneReasonIDT

#endif  // EHREXE_INCLUDE_SWITCHLANEREASONIDT_IMPL_TYPE_SWITCHLANEREASONIDT_H_
