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
/**        \file  EDRExe/include/TypOfObjFrnt1VccIDT/impl_type_typofobjfrnt1vccidt.h
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

#ifndef EDREXE_INCLUDE_TYPOFOBJFRNT1VCCIDT_IMPL_TYPE_TYPOFOBJFRNT1VCCIDT_H_
#define EDREXE_INCLUDE_TYPOFOBJFRNT1VCCIDT_IMPL_TYPE_TYPOFOBJFRNT1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TypOfObjFrnt1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TypOfObjFrnt1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TypOfObjFrnt1VccIDT
 */
enum class TypOfObjFrnt1VccIDT : uint8_t {
  TypOfObjFrnt1Vcc_NoDisplay = 0,
  TypOfObjFrnt1Vcc_Car = 1,
  TypOfObjFrnt1Vcc_Pedestrian = 2,
  TypOfObjFrnt1Vcc_Bikecycle = 3,
  TypOfObjFrnt1Vcc_Animal = 4,
  TypOfObjFrnt1Vcc_Motocycle = 5,
  TypOfObjFrnt1Vcc_Bus = 6,
  TypOfObjFrnt1Vcc_Truck = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TypOfObjFrnt1VccIDT

#endif  // EDREXE_INCLUDE_TYPOFOBJFRNT1VCCIDT_IMPL_TYPE_TYPOFOBJFRNT1VCCIDT_H_
