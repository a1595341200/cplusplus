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
/**        \file  EHRExe/include/SwitchLaneDirection/impl_type_switchlanedirection.h
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

#ifndef EHREXE_INCLUDE_SWITCHLANEDIRECTION_IMPL_TYPE_SWITCHLANEDIRECTION_H_
#define EHREXE_INCLUDE_SWITCHLANEDIRECTION_IMPL_TYPE_SWITCHLANEDIRECTION_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SwitchLaneDirection {

/*!
 * \brief Type SwitchLaneDirection.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SwitchLaneDirection
 */
enum class SwitchLaneDirection : uint8_t {
  SwitchLaneDir_NoSwitch = 0,
  SwitchLaneDir_ToLeft = 1,
  SwitchLaneDir_ToRight = 2,
  SwitchLaneDir_Invalid = 3
};

}  // namespace SwitchLaneDirection

#endif  // EHREXE_INCLUDE_SWITCHLANEDIRECTION_IMPL_TYPE_SWITCHLANEDIRECTION_H_
