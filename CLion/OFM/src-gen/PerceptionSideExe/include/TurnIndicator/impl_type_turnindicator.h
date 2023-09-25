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
/**        \file  PerceptionSideExe/include/TurnIndicator/impl_type_turnindicator.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_TURNINDICATOR_IMPL_TYPE_TURNINDICATOR_H_
#define PERCEPTIONSIDEEXE_INCLUDE_TURNINDICATOR_IMPL_TYPE_TURNINDICATOR_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TurnIndicator {

/*!
 * \brief Type TurnIndicator.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TurnIndicator
 */
enum class TurnIndicator : uint8_t {
  ObjTurnIndicator1_Off = 0,
  ObjTurnIndicator1_LeftOn = 1,
  ObjTurnIndicator1_RightOn = 2,
  ObjTurnIndicator1_BothOn = 3
};

}  // namespace TurnIndicator

#endif  // PERCEPTIONSIDEEXE_INCLUDE_TURNINDICATOR_IMPL_TYPE_TURNINDICATOR_H_
