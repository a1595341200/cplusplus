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
/**        \file  RoadModelFusionExe/include/LaneTypeIDT/impl_type_lanetypeidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LANETYPEIDT_IMPL_TYPE_LANETYPEIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_LANETYPEIDT_IMPL_TYPE_LANETYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LaneTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneTypeIDT
 */
enum class LaneTypeIDT : uint8_t {
  LaneType_NORMAL = 0,
  LaneType_ENTRY = 1,
  LaneType_EXIT = 2,
  LaneType_EMERGENCY = 3,
  LaneType_ON_RAMP = 4,
  LaneType_OFF_RAMP = 5,
  LaneType_CONNECT_RAMP = 6,
  LaneType_ACCELERATE = 7,
  LaneType_DECELERATE = 8,
  LaneType_EMERGENCY_PARKING_STRIP = 9,
  LaneType_RESERVE0 = 10,
  LaneType_RESERVE1 = 11,
  LaneType_RESERVE2 = 12,
  LaneType_RESERVE3 = 13,
  LaneType_RESERVE4 = 14,
  LaneType_DIVERSION = 17,
  LaneType_RESERVE5 = 19,
  LaneType_RESERVE6 = 20,
  LaneType_RESERVE7 = 21,
  LaneType_RESERVE8 = 22,
  LaneType_RESERVE9 = 23,
  LaneType_RESERVE10 = 24
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneTypeIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_LANETYPEIDT_IMPL_TYPE_LANETYPEIDT_H_
