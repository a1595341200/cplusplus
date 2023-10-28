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
/**        \file  ObjectFusionModelExe/include/ErrorStatuse41_42/impl_type_errorstatuse41_42.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_ERRORSTATUSE41_42_IMPL_TYPE_ERRORSTATUSE41_42_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_ERRORSTATUSE41_42_IMPL_TYPE_ERRORSTATUSE41_42_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ErrorStatus/impl_type_errorstatus.h"

namespace ErrorStatuse41_42 {

/*!
 * \brief Type ErrorStatuse41_42.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ErrorStatuse41_42
 */
using ErrorStatuse41_42 = std::array<
  ErrorStatus::ErrorStatus,
  2
>;

}  // namespace ErrorStatuse41_42

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_ERRORSTATUSE41_42_IMPL_TYPE_ERRORSTATUSE41_42_H_
