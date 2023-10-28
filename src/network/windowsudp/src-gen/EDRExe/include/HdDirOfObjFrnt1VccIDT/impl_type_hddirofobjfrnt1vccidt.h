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
/**        \file  EDRExe/include/HdDirOfObjFrnt1VccIDT/impl_type_hddirofobjfrnt1vccidt.h
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

#ifndef EDREXE_INCLUDE_HDDIROFOBJFRNT1VCCIDT_IMPL_TYPE_HDDIROFOBJFRNT1VCCIDT_H_
#define EDREXE_INCLUDE_HDDIROFOBJFRNT1VCCIDT_IMPL_TYPE_HDDIROFOBJFRNT1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace HdDirOfObjFrnt1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type HdDirOfObjFrnt1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/HdDirOfObjFrnt1VccIDT
 */
enum class HdDirOfObjFrnt1VccIDT : uint8_t {
  HdDirOfObjFrnt1Vcc_Straight = 0,
  HdDirOfObjFrnt1Vcc_Left_lean = 1,
  HdDirOfObjFrnt1Vcc_Right_lean = 2
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace HdDirOfObjFrnt1VccIDT

#endif  // EDREXE_INCLUDE_HDDIROFOBJFRNT1VCCIDT_IMPL_TYPE_HDDIROFOBJFRNT1VCCIDT_H_
