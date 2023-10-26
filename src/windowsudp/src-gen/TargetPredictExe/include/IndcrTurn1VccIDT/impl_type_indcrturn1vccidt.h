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
/**        \file  TargetPredictExe/include/IndcrTurn1VccIDT/impl_type_indcrturn1vccidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_INDCRTURN1VCCIDT_IMPL_TYPE_INDCRTURN1VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_INDCRTURN1VCCIDT_IMPL_TYPE_INDCRTURN1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace IndcrTurn1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type IndcrTurn1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/IndcrTurn1VccIDT
 */
enum class IndcrTurn1VccIDT : uint8_t {
  IndcrTurn1Vcc_NoIndcn = 0,
  IndcrTurn1Vcc_Le = 1,
  IndcrTurn1Vcc_Ri = 2,
  IndcrTurn1Vcc_Ukwn = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace IndcrTurn1VccIDT

#endif  // TARGETPREDICTEXE_INCLUDE_INDCRTURN1VCCIDT_IMPL_TYPE_INDCRTURN1VCCIDT_H_
