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
/**        \file  TrafficSignInformationExe/include/LaneAssignmentTL/impl_type_laneassignmenttl.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_LANEASSIGNMENTTL_IMPL_TYPE_LANEASSIGNMENTTL_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_LANEASSIGNMENTTL_IMPL_TYPE_LANEASSIGNMENTTL_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneAssignmentTL {

/*!
 * \brief Type LaneAssignmentTL.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneAssignmentTL
 */
enum class LaneAssignmentTL : uint8_t {
  LaneAssignmentTL_None = 0,
  LaneAssignmentTL_Ego = 1,
  LaneAssignmentTL_AdjLeft = 2,
  LaneAssignmentTL_AdjRight = 3,
  LaneAssignmentTL_OthrLeft = 4,
  LaneAssignmentTL_OthrRight = 5
};

}  // namespace LaneAssignmentTL

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_LANEASSIGNMENTTL_IMPL_TYPE_LANEASSIGNMENTTL_H_
