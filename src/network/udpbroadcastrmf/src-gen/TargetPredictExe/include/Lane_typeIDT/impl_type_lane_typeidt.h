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
/**        \file  TargetPredictExe/include/Lane_typeIDT/impl_type_lane_typeidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_LANE_TYPEIDT_IMPL_TYPE_LANE_TYPEIDT_H_
#define TARGETPREDICTEXE_INCLUDE_LANE_TYPEIDT_IMPL_TYPE_LANE_TYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace Lane_typeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type Lane_typeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Lane_typeIDT
 */
enum class Lane_typeIDT : uint8_t {
  Lane_type_NORMAL = 0,
  Lane_type_ENTRY = 1,
  Lane_type_EXIT = 2,
  Lane_type_EMERGENCY = 3,
  Lane_type_ON_RAMP = 4,
  Lane_type_OFF_RAMP = 5,
  Lane_type_CONNECT_RAMP = 6,
  Lane_type_ACCELERATE = 7,
  Lane_type_DECELERATE = 8,
  Lane_type_EMERGENCY_PARKING_STRIP = 9,
  Lane_type_RESERVE0 = 10,
  Lane_type_RESERVE1 = 11,
  Lane_type_RESERVE2 = 12,
  Lane_type_RESERVE3 = 13,
  Lane_type_RESERVE4 = 14,
  Lane_type_DIVERSION = 17,
  Lane_type_RESERVE5 = 19,
  Lane_type_RESERVE6 = 20,
  Lane_type_RESERVE7 = 21,
  Lane_type_RESERVE8 = 22,
  Lane_type_RESERVE9 = 23,
  Lane_type_RESERVE10 = 24
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace Lane_typeIDT

#endif  // TARGETPREDICTEXE_INCLUDE_LANE_TYPEIDT_IMPL_TYPE_LANE_TYPEIDT_H_
