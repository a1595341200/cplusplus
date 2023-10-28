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
/**        \file  EndOfLineExe/include/FctaOn1VccIDT/impl_type_fctaon1vccidt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_FCTAON1VCCIDT_IMPL_TYPE_FCTAON1VCCIDT_H_
#define ENDOFLINEEXE_INCLUDE_FCTAON1VCCIDT_IMPL_TYPE_FCTAON1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace FctaOn1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type FctaOn1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FctaOn1VccIDT
 */
enum class FctaOn1VccIDT : uint8_t {
  FctaOn1Vcc_StrtUpOn = 0,
  FctaOn1Vcc_On = 1,
  FctaOn1Vcc_Off = 2,
  FctaOn1Vcc_TrlrOff = 3,
  FctaOn1Vcc_TempError = 4,
  FctaOn1Vcc_PermError = 5
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FctaOn1VccIDT

#endif  // ENDOFLINEEXE_INCLUDE_FCTAON1VCCIDT_IMPL_TYPE_FCTAON1VCCIDT_H_
