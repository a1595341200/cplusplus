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
/**        \file  PerceptionRearExe/include/VehSpdIndcdUnit/impl_type_vehspdindcdunit.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_VEHSPDINDCDUNIT_IMPL_TYPE_VEHSPDINDCDUNIT_H_
#define PERCEPTIONREAREXE_INCLUDE_VEHSPDINDCDUNIT_IMPL_TYPE_VEHSPDINDCDUNIT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace VehSpdIndcdUnit {

/*!
 * \brief Type VehSpdIndcdUnit.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehSpdIndcdUnit
 */
enum class VehSpdIndcdUnit : uint8_t {
  VehSpdIndcdUnit1Vcc_Kmph = 0,
  VehSpdIndcdUnit1Vcc_Mph = 1,
  VehSpdIndcdUnit1Vcc_UkwnUnit = 2
};

}  // namespace VehSpdIndcdUnit

#endif  // PERCEPTIONREAREXE_INCLUDE_VEHSPDINDCDUNIT_IMPL_TYPE_VEHSPDINDCDUNIT_H_