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
/**        \file  LocalizationFusionExe/include/UsgModSts1VccIDT/impl_type_usgmodsts1vccidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_USGMODSTS1VCCIDT_IMPL_TYPE_USGMODSTS1VCCIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_USGMODSTS1VCCIDT_IMPL_TYPE_USGMODSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace UsgModSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type UsgModSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/UsgModSts1VccIDT
 */
enum class UsgModSts1VccIDT : uint8_t {
  UsgModSts1Vcc_UsgModAbdnd = 0,
  UsgModSts1Vcc_UsgModInActv = 1,
  UsgModSts1Vcc_UsgModCnvinc = 2,
  UsgModSts1Vcc_UsgModActv = 11,
  UsgModSts1Vcc_UsgModDrvg = 13
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace UsgModSts1VccIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_USGMODSTS1VCCIDT_IMPL_TYPE_USGMODSTS1VCCIDT_H_
