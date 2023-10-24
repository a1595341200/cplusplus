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
/**        \file  LocalizationFusionExe/include/SetgReqSts1VccIDT/impl_type_setgreqsts1vccidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_SETGREQSTS1VCCIDT_IMPL_TYPE_SETGREQSTS1VCCIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_SETGREQSTS1VCCIDT_IMPL_TYPE_SETGREQSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SetgReqSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SetgReqSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SetgReqSts1VccIDT
 */
enum class SetgReqSts1VccIDT : uint8_t {
  SetgReqSts1Vcc_Zero = 0,
  SetgReqSts1Vcc_Minus10kmh = 1,
  SetgReqSts1Vcc_Minus5kmh = 2,
  SetgReqSts1Vcc_Plus5kmh = 3,
  SetgReqSts1Vcc_Plus10kmh = 4,
  SetgReqSts1Vcc_Minus5mph = 5,
  SetgReqSts1Vcc_Minus3mph = 6,
  SetgReqSts1Vcc_Plus3mph = 7,
  SetgReqSts1Vcc_Plus5mph = 8,
  SetgReqSts1Vcc_Minus10Percentage = 9,
  SetgReqSts1Vcc_Minus5Percentage = 10,
  SetgReqSts1Vcc_Plus5Percentage = 11,
  SetgReqSts1Vcc_Plus10Percentage = 12,
  SetgReqSts1Vcc_Reserved1 = 13,
  SetgReqSts1Vcc_Reserved2 = 14,
  SetgReqSts1Vcc_Reserved3 = 15
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SetgReqSts1VccIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_SETGREQSTS1VCCIDT_IMPL_TYPE_SETGREQSTS1VCCIDT_H_
