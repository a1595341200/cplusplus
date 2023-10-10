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
/**        \file  ObjectFusionModelExe/include/ObjValid/impl_type_objvalid.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_OBJVALID_IMPL_TYPE_OBJVALID_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_OBJVALID_IMPL_TYPE_OBJVALID_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ObjValid {

/*!
 * \brief Type ObjValid.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjValid
 */
enum class ObjValid : uint8_t {
  EFourDRadarDataValid_NotValid = 0,
  EFourDRadarDataValid_Valid = 1
};

}  // namespace ObjValid

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_OBJVALID_IMPL_TYPE_OBJVALID_H_
