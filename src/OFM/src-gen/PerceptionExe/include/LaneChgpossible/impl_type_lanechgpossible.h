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
/**        \file  PerceptionExe/include/LaneChgpossible/impl_type_lanechgpossible.h
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

#ifndef PERCEPTIONEXE_INCLUDE_LANECHGPOSSIBLE_IMPL_TYPE_LANECHGPOSSIBLE_H_
#define PERCEPTIONEXE_INCLUDE_LANECHGPOSSIBLE_IMPL_TYPE_LANECHGPOSSIBLE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneChgpossible {

/*!
 * \brief Type LaneChgpossible.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneChgpossible
 */
enum class LaneChgpossible : uint8_t {
  NoLaneChgAvl = 0,
  LaneChgAvlOnLeSide = 1,
  LaneChgAvlOnRiSide = 2,
  LaneChgAvlOnRiLeSide = 3
};

}  // namespace LaneChgpossible

#endif  // PERCEPTIONEXE_INCLUDE_LANECHGPOSSIBLE_IMPL_TYPE_LANECHGPOSSIBLE_H_
