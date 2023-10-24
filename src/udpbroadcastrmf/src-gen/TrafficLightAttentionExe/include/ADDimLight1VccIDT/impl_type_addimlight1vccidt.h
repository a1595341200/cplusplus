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
/**        \file  TrafficLightAttentionExe/include/ADDimLight1VccIDT/impl_type_addimlight1vccidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_ADDIMLIGHT1VCCIDT_IMPL_TYPE_ADDIMLIGHT1VCCIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_ADDIMLIGHT1VCCIDT_IMPL_TYPE_ADDIMLIGHT1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ADDimLight1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type ADDimLight1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ADDimLight1VccIDT
 */
enum class ADDimLight1VccIDT : uint8_t {
  ADDimLight1Vcc_NoRequest = 0,
  ADDimLight1Vcc_Level2 = 1,
  ADDimLight1Vcc_Level2plus = 2,
  ADDimLight1Vcc_Level3 = 3,
  ADDimLight1Vcc_MildAlert = 4,
  ADDimLight1Vcc_SeriousAlert = 5,
  ADDimLight1Vcc_SafetyStop = 6
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ADDimLight1VccIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_ADDIMLIGHT1VCCIDT_IMPL_TYPE_ADDIMLIGHT1VCCIDT_H_
