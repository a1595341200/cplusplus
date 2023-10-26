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
/**        \file  EDRExe/include/WarnLvl1VccIDT/impl_type_warnlvl1vccidt.h
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

#ifndef EDREXE_INCLUDE_WARNLVL1VCCIDT_IMPL_TYPE_WARNLVL1VCCIDT_H_
#define EDREXE_INCLUDE_WARNLVL1VCCIDT_IMPL_TYPE_WARNLVL1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace WarnLvl1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type WarnLvl1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/WarnLvl1VccIDT
 */
enum class WarnLvl1VccIDT : uint8_t {
  WarnLvl1Vcc_NoWarn = 0,
  WarnLvl1Vcc_WarnLvl1 = 1,
  WarnLvl1Vcc_WarnLvl2_NoAudio = 2,
  WarnLvl1Vcc_WarnLvl3_Audio = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace WarnLvl1VccIDT

#endif  // EDREXE_INCLUDE_WARNLVL1VCCIDT_IMPL_TYPE_WARNLVL1VCCIDT_H_
