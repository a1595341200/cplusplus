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
/**        \file  PerceptionSideExe/include/TlaFaultSts/impl_type_tlafaultsts.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_TLAFAULTSTS_IMPL_TYPE_TLAFAULTSTS_H_
#define PERCEPTIONSIDEEXE_INCLUDE_TLAFAULTSTS_IMPL_TYPE_TLAFAULTSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TlaFaultSts {

/*!
 * \brief Type TlaFaultSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TlaFaultSts
 */
enum class TlaFaultSts : uint8_t {
  OnOff1Vcc_Off = 0,
  OnOff1Vcc_On = 1
};

}  // namespace TlaFaultSts

#endif  // PERCEPTIONSIDEEXE_INCLUDE_TLAFAULTSTS_IMPL_TYPE_TLAFAULTSTS_H_
