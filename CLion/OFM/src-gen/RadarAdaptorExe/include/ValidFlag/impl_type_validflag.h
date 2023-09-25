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
/**        \file  RadarAdaptorExe/include/ValidFlag/impl_type_validflag.h
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

#ifndef RADARADAPTOREXE_INCLUDE_VALIDFLAG_IMPL_TYPE_VALIDFLAG_H_
#define RADARADAPTOREXE_INCLUDE_VALIDFLAG_IMPL_TYPE_VALIDFLAG_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ValidFlag {

/*!
 * \brief Type ValidFlag.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ValidFlag
 */
enum class ValidFlag : uint8_t {
  Validity_NotValid = 0,
  Validity_Valid = 1
};

}  // namespace ValidFlag

#endif  // RADARADAPTOREXE_INCLUDE_VALIDFLAG_IMPL_TYPE_VALIDFLAG_H_
