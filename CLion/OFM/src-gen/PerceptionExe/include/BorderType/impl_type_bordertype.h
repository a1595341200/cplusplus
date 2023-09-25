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
/**        \file  PerceptionExe/include/BorderType/impl_type_bordertype.h
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

#ifndef PERCEPTIONEXE_INCLUDE_BORDERTYPE_IMPL_TYPE_BORDERTYPE_H_
#define PERCEPTIONEXE_INCLUDE_BORDERTYPE_IMPL_TYPE_BORDERTYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace BorderType {

/*!
 * \brief Type BorderType.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/BorderType
 */
enum class BorderType : uint8_t {
  FsBorderType_None = 0,
  FsBorderType_RoadUser = 1,
  FsBorderType_RoadEdge = 2,
  FsBorderType_Unknown = 3
};

}  // namespace BorderType

#endif  // PERCEPTIONEXE_INCLUDE_BORDERTYPE_IMPL_TYPE_BORDERTYPE_H_
