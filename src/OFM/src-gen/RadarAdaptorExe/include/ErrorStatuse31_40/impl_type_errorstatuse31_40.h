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
/**        \file  RadarAdaptorExe/include/ErrorStatuse31_40/impl_type_errorstatuse31_40.h
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

#ifndef RADARADAPTOREXE_INCLUDE_ERRORSTATUSE31_40_IMPL_TYPE_ERRORSTATUSE31_40_H_
#define RADARADAPTOREXE_INCLUDE_ERRORSTATUSE31_40_IMPL_TYPE_ERRORSTATUSE31_40_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ErrorStatus/impl_type_errorstatus.h"

namespace ErrorStatuse31_40 {

/*!
 * \brief Type ErrorStatuse31_40.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ErrorStatuse31_40
 */
using ErrorStatuse31_40 = std::array<
  ErrorStatus::ErrorStatus,
  10
>;

}  // namespace ErrorStatuse31_40

#endif  // RADARADAPTOREXE_INCLUDE_ERRORSTATUSE31_40_IMPL_TYPE_ERRORSTATUSE31_40_H_
