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
/**        \file  TrafficLightAttentionExe/include/TrfcLiSts/impl_type_trfclists.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLISTS_IMPL_TYPE_TRFCLISTS_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLISTS_IMPL_TYPE_TRFCLISTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcLiSts {

/*!
 * \brief Type TrfcLiSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcLiSts
 */
enum class TrfcLiSts : uint8_t {
  FctSts2Vcc_Ukwn = 0,
  FctSts2Vcc_Off = 1,
  FctSts2Vcc_SpdLoStb = 2,
  FctSts2Vcc_SpdHiStb = 3,
  FctSts2Vcc_NotAvl = 4,
  FctSts2Vcc_SrvRqrd = 5,
  FctSts2Vcc_On = 6,
  FctSts2Vcc_NotInUse = 7
};

}  // namespace TrfcLiSts

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLISTS_IMPL_TYPE_TRFCLISTS_H_
