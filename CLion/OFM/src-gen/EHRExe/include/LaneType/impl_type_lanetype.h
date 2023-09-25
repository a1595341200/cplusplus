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
/**        \file  EHRExe/include/LaneType/impl_type_lanetype.h
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

#ifndef EHREXE_INCLUDE_LANETYPE_IMPL_TYPE_LANETYPE_H_
#define EHREXE_INCLUDE_LANETYPE_IMPL_TYPE_LANETYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneType {

/*!
 * \brief Type LaneType.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneType
 */
enum class LaneType : uint32_t {
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

}  // namespace LaneType

#endif  // EHREXE_INCLUDE_LANETYPE_IMPL_TYPE_LANETYPE_H_
