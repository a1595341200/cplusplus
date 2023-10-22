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
/**        \file  TrafficSignInformationExe/include/SpdLimCoupldFirst/impl_type_spdlimcoupldfirst.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDLIMCOUPLDFIRST_IMPL_TYPE_SPDLIMCOUPLDFIRST_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDLIMCOUPLDFIRST_IMPL_TYPE_SPDLIMCOUPLDFIRST_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SpdLimCoupldFirst {

/*!
 * \brief Type SpdLimCoupldFirst.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpdLimCoupldFirst
 */
enum class SpdLimCoupldFirst : uint8_t {
  SpdCoupldSgn3Vcc_NoSpdInfo = 0,
  SpdCoupldSgn3Vcc_EndOfAllLiml = 1,
  SpdCoupldSgn3Vcc_HiWaySgn1 = 2,
  SpdCoupldSgn3Vcc_HiWaySgn2 = 3,
  SpdCoupldSgn3Vcc_EndOfHiWaySgn1 = 4,
  SpdCoupldSgn3Vcc_EndOfHiWaySgn2 = 5,
  SpdCoupldSgn3Vcc_FreeWaySgn1 = 6,
  SpdCoupldSgn3Vcc_FreeWaySgn2 = 7,
  SpdCoupldSgn3Vcc_EndOfFreeWaySgn1 = 8,
  SpdCoupldSgn3Vcc_EndOfFreeWaySgn2 = 9,
  SpdCoupldSgn3Vcc_StrtOfCty = 10,
  SpdCoupldSgn3Vcc_EndOfCty = 11,
  SpdCoupldSgn3Vcc_StrtOfTown = 12,
  SpdCoupldSgn3Vcc_EndOfTown = 13,
  SpdCoupldSgn3Vcc_StrtOfSpdArLo = 14,
  SpdCoupldSgn3Vcc_EndOfSpdArLo = 15,
  SpdCoupldSgn3Vcc_EndOfSpdLim = 16,
  SpdCoupldSgn3Vcc_StrtOfTownSec = 17,
  SpdCoupldSgn3Vcc_EndOfTownSec = 18
};

}  // namespace SpdLimCoupldFirst

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDLIMCOUPLDFIRST_IMPL_TYPE_SPDLIMCOUPLDFIRST_H_
