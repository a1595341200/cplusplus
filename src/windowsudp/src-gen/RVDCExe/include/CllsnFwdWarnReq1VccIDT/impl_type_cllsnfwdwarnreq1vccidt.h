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
/**        \file  RVDCExe/include/CllsnFwdWarnReq1VccIDT/impl_type_cllsnfwdwarnreq1vccidt.h
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

#ifndef RVDCEXE_INCLUDE_CLLSNFWDWARNREQ1VCCIDT_IMPL_TYPE_CLLSNFWDWARNREQ1VCCIDT_H_
#define RVDCEXE_INCLUDE_CLLSNFWDWARNREQ1VCCIDT_IMPL_TYPE_CLLSNFWDWARNREQ1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CllsnFwdWarnReq1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type CllsnFwdWarnReq1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CllsnFwdWarnReq1VccIDT
 */
enum class CllsnFwdWarnReq1VccIDT : uint8_t {
  CllsnFwdWarnReq1Vcc_NoWarning = 0,
  CllsnFwdWarnReq1Vcc_WarningActive = 1,
  CllsnFwdWarnReq1Vcc_LatentWarning = 2
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CllsnFwdWarnReq1VccIDT

#endif  // RVDCEXE_INCLUDE_CLLSNFWDWARNREQ1VCCIDT_IMPL_TYPE_CLLSNFWDWARNREQ1VCCIDT_H_
