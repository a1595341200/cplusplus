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
/**        \file  TrafficLightAttentionExe/include/BrkPedlNotPsdSafe/impl_type_brkpedlnotpsdsafe.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_BRKPEDLNOTPSDSAFE_IMPL_TYPE_BRKPEDLNOTPSDSAFE_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_BRKPEDLNOTPSDSAFE_IMPL_TYPE_BRKPEDLNOTPSDSAFE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace BrkPedlNotPsdSafe {

/*!
 * \brief Type BrkPedlNotPsdSafe.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/BrkPedlNotPsdSafe
 */
enum class BrkPedlNotPsdSafe : uint8_t {
  NoYes1Vcc_No = 0,
  NoYes1Vcc_Yes = 1
};

}  // namespace BrkPedlNotPsdSafe

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_BRKPEDLNOTPSDSAFE_IMPL_TYPE_BRKPEDLNOTPSDSAFE_H_
