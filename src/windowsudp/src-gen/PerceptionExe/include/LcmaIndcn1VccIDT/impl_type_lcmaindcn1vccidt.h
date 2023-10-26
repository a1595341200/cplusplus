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
/**        \file  PerceptionExe/include/LcmaIndcn1VccIDT/impl_type_lcmaindcn1vccidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_LCMAINDCN1VCCIDT_IMPL_TYPE_LCMAINDCN1VCCIDT_H_
#define PERCEPTIONEXE_INCLUDE_LCMAINDCN1VCCIDT_IMPL_TYPE_LCMAINDCN1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LcmaIndcn1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LcmaIndcn1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LcmaIndcn1VccIDT
 */
enum class LcmaIndcn1VccIDT : uint8_t {
  LcmaIndcn1Vcc_NoLcmaWarn = 0,
  LcmaIndcn1Vcc_LcmaWarnLvl1 = 1,
  LcmaIndcn1Vcc_NotUsed = 2,
  LcmaIndcn1Vcc_LcmaWarnLvl2 = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LcmaIndcn1VccIDT

#endif  // PERCEPTIONEXE_INCLUDE_LCMAINDCN1VCCIDT_IMPL_TYPE_LCMAINDCN1VCCIDT_H_
