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
/**        \file  EHRExe/include/LinearObjectType/impl_type_linearobjecttype.h
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

#ifndef EHREXE_INCLUDE_LINEAROBJECTTYPE_IMPL_TYPE_LINEAROBJECTTYPE_H_
#define EHREXE_INCLUDE_LINEAROBJECTTYPE_IMPL_TYPE_LINEAROBJECTTYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LinearObjectType {

/*!
 * \brief Type LinearObjectType.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinearObjectType
 */
enum class LinearObjectType : uint8_t {
  LinearObjectType_Centerline = 0,
  LinearObjectType_Leftline = 1,
  LinearObjectType_Rightline = 2,
  LinearObjectType_Kerb = 3,
  LinearObjectType_Barrier = 4,
  LinearObjectType_Natural = 5,
  LinearObjectType_Virtual = 6,
  LinearObjectType_Ditch = 7,
  LinearObjectType_Other = 99
};

}  // namespace LinearObjectType

#endif  // EHREXE_INCLUDE_LINEAROBJECTTYPE_IMPL_TYPE_LINEAROBJECTTYPE_H_
