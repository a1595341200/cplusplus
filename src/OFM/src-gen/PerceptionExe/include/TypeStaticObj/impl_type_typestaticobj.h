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
/**        \file  PerceptionExe/include/TypeStaticObj/impl_type_typestaticobj.h
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

#ifndef PERCEPTIONEXE_INCLUDE_TYPESTATICOBJ_IMPL_TYPE_TYPESTATICOBJ_H_
#define PERCEPTIONEXE_INCLUDE_TYPESTATICOBJ_IMPL_TYPE_TYPESTATICOBJ_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TypeStaticObj {

/*!
 * \brief Type TypeStaticObj.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TypeStaticObj
 */
enum class TypeStaticObj : uint8_t {
  TypeStaticObj_Invalid = 0,
  TypeStaticObj_Unknown = 1,
  TypeStaticObj_Poles = 2,
  TypeStaticObj_Cone = 3,
  TypeStaticObj_TriangleWarning = 4,
  TypeStaticObj_Underdrivable = 5
};

}  // namespace TypeStaticObj

#endif  // PERCEPTIONEXE_INCLUDE_TYPESTATICOBJ_IMPL_TYPE_TYPESTATICOBJ_H_
