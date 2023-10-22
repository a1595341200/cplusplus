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
/**        \file  ObjectFusionModelExe/include/ImuStatus/impl_type_imustatus.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_IMUSTATUS_IMPL_TYPE_IMUSTATUS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_IMUSTATUS_IMPL_TYPE_IMUSTATUS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ImuStatus {

/*!
 * \brief Type ImuStatus.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ImuStatus
 */
enum class ImuStatus : uint8_t {
  ImuCalSts1_Success = 0,
  ImuCalSts1_Failure = 1,
  ImuCalSts1_Reserved = 2
};

}  // namespace ImuStatus

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_IMUSTATUS_IMPL_TYPE_IMUSTATUS_H_
