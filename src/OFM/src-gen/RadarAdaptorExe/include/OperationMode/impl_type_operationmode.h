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
/**        \file  RadarAdaptorExe/include/OperationMode/impl_type_operationmode.h
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

#ifndef RADARADAPTOREXE_INCLUDE_OPERATIONMODE_IMPL_TYPE_OPERATIONMODE_H_
#define RADARADAPTOREXE_INCLUDE_OPERATIONMODE_IMPL_TYPE_OPERATIONMODE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace OperationMode {

/*!
 * \brief Type OperationMode.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/OperationMode
 */
enum class OperationMode : uint8_t {
  OperationMode_Reserved1 = 0,
  OperationMode_Init = 1,
  OperationMode_Normal = 2,
  OperationMode_Degraded = 4,
  OperationMode_Blocked = 8
};

}  // namespace OperationMode

#endif  // RADARADAPTOREXE_INCLUDE_OPERATIONMODE_IMPL_TYPE_OPERATIONMODE_H_
