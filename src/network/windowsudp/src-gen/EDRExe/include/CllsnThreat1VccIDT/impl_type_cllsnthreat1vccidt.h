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
/**        \file  EDRExe/include/CllsnThreat1VccIDT/impl_type_cllsnthreat1vccidt.h
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

#ifndef EDREXE_INCLUDE_CLLSNTHREAT1VCCIDT_IMPL_TYPE_CLLSNTHREAT1VCCIDT_H_
#define EDREXE_INCLUDE_CLLSNTHREAT1VCCIDT_IMPL_TYPE_CLLSNTHREAT1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CllsnThreat1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type CllsnThreat1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CllsnThreat1VccIDT
 */
enum class CllsnThreat1VccIDT : uint8_t {
  CllsnThreat1Vcc_Ukwn = 0,
  CllsnThreat1Vcc_ThreatLo = 1,
  CllsnThreat1Vcc_ThreatMed = 2,
  CllsnThreat1Vcc_ThreatHi = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CllsnThreat1VccIDT

#endif  // EDREXE_INCLUDE_CLLSNTHREAT1VCCIDT_IMPL_TYPE_CLLSNTHREAT1VCCIDT_H_
