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
/**        \file  TrafficSignInformationExe/include/SpdCoupldSgn3IDT/impl_type_spdcoupldsgn3idt.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDCOUPLDSGN3IDT_IMPL_TYPE_SPDCOUPLDSGN3IDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDCOUPLDSGN3IDT_IMPL_TYPE_SPDCOUPLDSGN3IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SpdCoupldSgn3IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SpdCoupldSgn3IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpdCoupldSgn3IDT
 */
enum class SpdCoupldSgn3IDT : uint8_t {
  SpdCoupldSgn3_NoSpdInfo = 0,
  SpdCoupldSgn3_EndOfAllLiml = 1,
  SpdCoupldSgn3_HiWaySgn1 = 2,
  SpdCoupldSgn3_HiWaySgn2 = 3,
  SpdCoupldSgn3_EndOfHiWaySgn1 = 4,
  SpdCoupldSgn3_EndOfHiWaySgn2 = 5,
  SpdCoupldSgn3_FreeWaySgn1 = 6,
  SpdCoupldSgn3_FreeWaySgn2 = 7,
  SpdCoupldSgn3_EndOfFreeWaySgn1 = 8,
  SpdCoupldSgn3_EndOfFreeWaySgn2 = 9,
  SpdCoupldSgn3_StrtOfCty = 10,
  SpdCoupldSgn3_EndOfCty = 11,
  SpdCoupldSgn3_StrtOfTown = 12,
  SpdCoupldSgn3_EndOfTown = 13,
  SpdCoupldSgn3_StrtOfSpdArLo = 14,
  SpdCoupldSgn3_EndOfSpdArLo = 15,
  SpdCoupldSgn3_EndOfSpdLim = 16,
  SpdCoupldSgn3_StrtOfTownSec = 17,
  SpdCoupldSgn3_EndOfTownSec = 18
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SpdCoupldSgn3IDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPDCOUPLDSGN3IDT_IMPL_TYPE_SPDCOUPLDSGN3IDT_H_
