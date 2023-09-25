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
/**        \file  ObjectFusionModelExe/include/NgpSts1/impl_type_ngpsts1.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_NGPSTS1_IMPL_TYPE_NGPSTS1_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_NGPSTS1_IMPL_TYPE_NGPSTS1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace NgpSts1 {

/*!
 * \brief Type NgpSts1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/NgpSts1
 */
enum class NgpSts1 : uint8_t {
  NgpSts1_Off = 0,
  NgpSts1_Passive = 1,
  NgpSts1_Standby = 2,
  NgpSts1_Active = 3,
  NgpSts1_Failure = 4
};

}  // namespace NgpSts1

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_NGPSTS1_IMPL_TYPE_NGPSTS1_H_
