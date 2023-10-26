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
/**        \file  EDRExe/include/CllsnMtgtnWarnSts1IDT/impl_type_cllsnmtgtnwarnsts1idt.h
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

#ifndef EDREXE_INCLUDE_CLLSNMTGTNWARNSTS1IDT_IMPL_TYPE_CLLSNMTGTNWARNSTS1IDT_H_
#define EDREXE_INCLUDE_CLLSNMTGTNWARNSTS1IDT_IMPL_TYPE_CLLSNMTGTNWARNSTS1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CllsnMtgtnWarnSts1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type CllsnMtgtnWarnSts1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CllsnMtgtnWarnSts1IDT
 */
enum class CllsnMtgtnWarnSts1IDT : uint8_t {
  CllsnMtgtnWarnSts1_Reserved1 = 0,
  CllsnMtgtnWarnSts1_OFF = 1,
  CllsnMtgtnWarnSts1_LowSensitive = 2,
  CllsnMtgtnWarnSts1_MediumSensitive = 3,
  CllsnMtgtnWarnSts1_HighSensitive = 4,
  CllsnMtgtnWarnSts1_Reserved2 = 5,
  CllsnMtgtnWarnSts1_Reserved3 = 6,
  CllsnMtgtnWarnSts1_Reserved4 = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CllsnMtgtnWarnSts1IDT

#endif  // EDREXE_INCLUDE_CLLSNMTGTNWARNSTS1IDT_IMPL_TYPE_CLLSNMTGTNWARNSTS1IDT_H_
