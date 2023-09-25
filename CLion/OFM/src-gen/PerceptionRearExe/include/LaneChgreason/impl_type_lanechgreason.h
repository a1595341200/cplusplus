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
/**        \file  PerceptionRearExe/include/LaneChgreason/impl_type_lanechgreason.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_LANECHGREASON_IMPL_TYPE_LANECHGREASON_H_
#define PERCEPTIONREAREXE_INCLUDE_LANECHGREASON_IMPL_TYPE_LANECHGREASON_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneChgreason {

/*!
 * \brief Type LaneChgreason.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneChgreason
 */
enum class LaneChgreason : uint8_t {
  NotOdd = 0,
  Tunnel = 1,
  LowSpd = 2,
  RearVeh = 3,
  FrntVeh = 4,
  Barrier = 5,
  RoadWidth = 6,
  LineType = 7,
  Override = 8,
  HandsOff = 9,
  TurnIndcr = 10,
  Other = 11
};

}  // namespace LaneChgreason

#endif  // PERCEPTIONREAREXE_INCLUDE_LANECHGREASON_IMPL_TYPE_LANECHGREASON_H_
