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
/**        \file  LocalizationFusionExe/include/EscWarnIndcnReq1VccIDT/impl_type_escwarnindcnreq1vccidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_ESCWARNINDCNREQ1VCCIDT_IMPL_TYPE_ESCWARNINDCNREQ1VCCIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_ESCWARNINDCNREQ1VCCIDT_IMPL_TYPE_ESCWARNINDCNREQ1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace EscWarnIndcnReq1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type EscWarnIndcnReq1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EscWarnIndcnReq1VccIDT
 */
enum class EscWarnIndcnReq1VccIDT : uint8_t {
  EscWarnIndcnReq1Vcc_EscWarnIndcnOnReq = 0,
  EscWarnIndcnReq1Vcc_EscWarnIndcnFlsgReq = 1,
  EscWarnIndcnReq1Vcc_Resd2 = 2,
  EscWarnIndcnReq1Vcc_EscWarnIndcnOffReq = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace EscWarnIndcnReq1VccIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_ESCWARNINDCNREQ1VCCIDT_IMPL_TYPE_ESCWARNINDCNREQ1VCCIDT_H_
