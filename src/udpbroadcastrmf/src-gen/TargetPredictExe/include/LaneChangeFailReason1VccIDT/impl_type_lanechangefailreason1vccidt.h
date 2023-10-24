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
/**        \file  TargetPredictExe/include/LaneChangeFailReason1VccIDT/impl_type_lanechangefailreason1vccidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_LANECHANGEFAILREASON1VCCIDT_IMPL_TYPE_LANECHANGEFAILREASON1VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_LANECHANGEFAILREASON1VCCIDT_IMPL_TYPE_LANECHANGEFAILREASON1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneChangeFailReason1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LaneChangeFailReason1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneChangeFailReason1VccIDT
 */
enum class LaneChangeFailReason1VccIDT : uint8_t {
  LaneChangeFailReason1Vcc_No = 0,
  LaneChangeFailReason1Vcc_HandsOff = 1,
  LaneChangeFailReason1Vcc_Override = 2,
  LaneChangeFailReason1Vcc_TurnIndicator = 3,
  LaneChangeFailReason1Vcc_LineType = 4,
  LaneChangeFailReason1Vcc_RearVehicle = 5,
  LaneChangeFailReason1Vcc_FrontVehicle = 6,
  LaneChangeFailReason1Vcc_Barrier = 7,
  LaneChangeFailReason1Vcc_RoadWidth = 8,
  LaneChangeFailReason1Vcc_Other = 9,
  LaneChangeFailReason1Vcc_LowSpeed = 10,
  LaneChangeFailReason1Vcc_Tunnel = 11,
  LaneChangeFailReason1Vcc_NotOdd = 12,
  LaneChangeFailReason1Vcc_Reserve1 = 13,
  LaneChangeFailReason1Vcc_Reserve2 = 14,
  LaneChangeFailReason1Vcc_Reserve3 = 15
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneChangeFailReason1VccIDT

#endif  // TARGETPREDICTEXE_INCLUDE_LANECHANGEFAILREASON1VCCIDT_IMPL_TYPE_LANECHANGEFAILREASON1VCCIDT_H_
