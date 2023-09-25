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
/**        \file  TrafficSignInformationExe/include/SpdAlrmActvSts/impl_type_spdalrmactvsts.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDALRMACTVSTS_IMPL_TYPE_SPDALRMACTVSTS_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDALRMACTVSTS_IMPL_TYPE_SPDALRMACTVSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SpdAlrmActvSts {

/*!
 * \brief Type SpdAlrmActvSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpdAlrmActvSts
 */
enum class SpdAlrmActvSts : uint8_t {
  DY1Vcc_NoRequest = 0,
  DY1Vcc_NoWarning = 1,
  DY1Vcc_Flashing = 2,
  DY1Vcc_FlashingAndAudio = 3
};

}  // namespace SpdAlrmActvSts

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDALRMACTVSTS_IMPL_TYPE_SPDALRMACTVSTS_H_
