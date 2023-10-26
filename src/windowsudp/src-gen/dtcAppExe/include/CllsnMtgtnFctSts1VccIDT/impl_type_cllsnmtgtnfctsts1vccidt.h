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
/**        \file  dtcAppExe/include/CllsnMtgtnFctSts1VccIDT/impl_type_cllsnmtgtnfctsts1vccidt.h
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

#ifndef DTCAPPEXE_INCLUDE_CLLSNMTGTNFCTSTS1VCCIDT_IMPL_TYPE_CLLSNMTGTNFCTSTS1VCCIDT_H_
#define DTCAPPEXE_INCLUDE_CLLSNMTGTNFCTSTS1VCCIDT_IMPL_TYPE_CLLSNMTGTNFCTSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CllsnMtgtnFctSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type CllsnMtgtnFctSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CllsnMtgtnFctSts1VccIDT
 */
enum class CllsnMtgtnFctSts1VccIDT : uint8_t {
  CllsnMtgtnFctSts1Vcc_Reserved1 = 0,
  CllsnMtgtnFctSts1Vcc_OFF = 1,
  CllsnMtgtnFctSts1Vcc_ON = 2,
  CllsnMtgtnFctSts1Vcc_TemporaryError = 3,
  CllsnMtgtnFctSts1Vcc_PermenentError = 4,
  CllsnMtgtnFctSts1Vcc_AEB_PEDNotAvalid = 5,
  CllsnMtgtnFctSts1Vcc_Reserved2 = 6,
  CllsnMtgtnFctSts1Vcc_Reserved3 = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CllsnMtgtnFctSts1VccIDT

#endif  // DTCAPPEXE_INCLUDE_CLLSNMTGTNFCTSTS1VCCIDT_IMPL_TYPE_CLLSNMTGTNFCTSTS1VCCIDT_H_
