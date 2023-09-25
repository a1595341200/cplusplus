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
/**        \file  PerceptionExe/include/RainfallAmnt/impl_type_rainfallamnt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_RAINFALLAMNT_IMPL_TYPE_RAINFALLAMNT_H_
#define PERCEPTIONEXE_INCLUDE_RAINFALLAMNT_IMPL_TYPE_RAINFALLAMNT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RainfallAmnt {

/*!
 * \brief Type RainfallAmnt.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RainfallAmnt
 */
enum class RainfallAmnt : uint8_t {
  AmntSnsr1_Amntvcc = 0,
  AmntSnsr1_InitValuevcc = 14,
  AmntSnsr1_Errorvcc = 15
};

}  // namespace RainfallAmnt

#endif  // PERCEPTIONEXE_INCLUDE_RAINFALLAMNT_IMPL_TYPE_RAINFALLAMNT_H_
