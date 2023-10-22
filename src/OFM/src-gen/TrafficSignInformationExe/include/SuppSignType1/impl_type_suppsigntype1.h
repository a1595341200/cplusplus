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
/**        \file  TrafficSignInformationExe/include/SuppSignType1/impl_type_suppsigntype1.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_SUPPSIGNTYPE1_IMPL_TYPE_SUPPSIGNTYPE1_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_SUPPSIGNTYPE1_IMPL_TYPE_SUPPSIGNTYPE1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SuppSignType1 {

/*!
 * \brief Type SuppSignType1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SuppSignType1
 */
enum class SuppSignType1 : uint8_t {
  SuppSignType1_Empty = 0,
  SuppSignType1_Ramp = 1,
  SuppSignType1_Car = 2,
  SuppSignType1_Truck = 3,
  SuppSignType1_Bus = 4,
  SuppSignType1_School = 5,
  SuppSignType1_Accident = 6
};

}  // namespace SuppSignType1

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_SUPPSIGNTYPE1_IMPL_TYPE_SUPPSIGNTYPE1_H_
