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
/**        \file  LocalizationFusionExe/include/INSCalStatus/impl_type_inscalstatus.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_INSCALSTATUS_IMPL_TYPE_INSCALSTATUS_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_INSCALSTATUS_IMPL_TYPE_INSCALSTATUS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace INSCalStatus {

/*!
 * \brief Type INSCalStatus.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/INSCalStatus
 */
enum class INSCalStatus : uint8_t {
  InsCalSts1_Failure = 0,
  InsCalSts1_Success = 1
};

}  // namespace INSCalStatus

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_INSCALSTATUS_IMPL_TYPE_INSCALSTATUS_H_
