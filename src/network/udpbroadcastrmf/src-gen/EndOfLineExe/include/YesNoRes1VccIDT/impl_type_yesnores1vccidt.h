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
/**        \file  EndOfLineExe/include/YesNoRes1VccIDT/impl_type_yesnores1vccidt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_YESNORES1VCCIDT_IMPL_TYPE_YESNORES1VCCIDT_H_
#define ENDOFLINEEXE_INCLUDE_YESNORES1VCCIDT_IMPL_TYPE_YESNORES1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace YesNoRes1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type YesNoRes1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/YesNoRes1VccIDT
 */
enum class YesNoRes1VccIDT : uint8_t {
  YesNoRes1Vcc_Resd1 = 0,
  YesNoRes1Vcc_Yes = 1,
  YesNoRes1Vcc_No = 2,
  YesNoRes1Vcc_Resd2 = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace YesNoRes1VccIDT

#endif  // ENDOFLINEEXE_INCLUDE_YESNORES1VCCIDT_IMPL_TYPE_YESNORES1VCCIDT_H_
