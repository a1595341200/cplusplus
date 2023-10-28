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
/**        \file  TargetPredictExe/include/FailrNoFailr1VccIDT/impl_type_failrnofailr1vccidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_FAILRNOFAILR1VCCIDT_IMPL_TYPE_FAILRNOFAILR1VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_FAILRNOFAILR1VCCIDT_IMPL_TYPE_FAILRNOFAILR1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace FailrNoFailr1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type FailrNoFailr1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FailrNoFailr1VccIDT
 */
enum class FailrNoFailr1VccIDT : uint8_t {
  FailrNoFailr1Vcc_NoFailr = 0,
  FailrNoFailr1Vcc_Failr = 1
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FailrNoFailr1VccIDT

#endif  // TARGETPREDICTEXE_INCLUDE_FAILRNOFAILR1VCCIDT_IMPL_TYPE_FAILRNOFAILR1VCCIDT_H_
