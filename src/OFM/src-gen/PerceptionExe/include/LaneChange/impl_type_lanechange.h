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
/**        \file  PerceptionExe/include/LaneChange/impl_type_lanechange.h
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

#ifndef PERCEPTIONEXE_INCLUDE_LANECHANGE_IMPL_TYPE_LANECHANGE_H_
#define PERCEPTIONEXE_INCLUDE_LANECHANGE_IMPL_TYPE_LANECHANGE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneChange {

/*!
 * \brief Type LaneChange.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneChange
 */
enum class LaneChange : uint8_t {
  NoLaneChange = 0,
  ChangeToLeft = 1,
  ChangeToRight = 2
};

}  // namespace LaneChange

#endif  // PERCEPTIONEXE_INCLUDE_LANECHANGE_IMPL_TYPE_LANECHANGE_H_