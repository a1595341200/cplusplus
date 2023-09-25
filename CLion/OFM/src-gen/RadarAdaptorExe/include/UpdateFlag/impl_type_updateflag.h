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
/**        \file  RadarAdaptorExe/include/UpdateFlag/impl_type_updateflag.h
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

#ifndef RADARADAPTOREXE_INCLUDE_UPDATEFLAG_IMPL_TYPE_UPDATEFLAG_H_
#define RADARADAPTOREXE_INCLUDE_UPDATEFLAG_IMPL_TYPE_UPDATEFLAG_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace UpdateFlag {

/*!
 * \brief Type UpdateFlag.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/UpdateFlag
 */
enum class UpdateFlag : uint8_t {
  Boolean_FALSE = 0,
  Boolean_TRUE = 1
};

}  // namespace UpdateFlag

#endif  // RADARADAPTOREXE_INCLUDE_UPDATEFLAG_IMPL_TYPE_UPDATEFLAG_H_
