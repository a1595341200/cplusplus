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
/**        \file  PerceptionExe/include/DrvrCrsCtrlFctActvReq1VccIDT/impl_type_drvrcrsctrlfctactvreq1vccidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_DRVRCRSCTRLFCTACTVREQ1VCCIDT_IMPL_TYPE_DRVRCRSCTRLFCTACTVREQ1VCCIDT_H_
#define PERCEPTIONEXE_INCLUDE_DRVRCRSCTRLFCTACTVREQ1VCCIDT_IMPL_TYPE_DRVRCRSCTRLFCTACTVREQ1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace DrvrCrsCtrlFctActvReq1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type DrvrCrsCtrlFctActvReq1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DrvrCrsCtrlFctActvReq1VccIDT
 */
enum class DrvrCrsCtrlFctActvReq1VccIDT : uint8_t {
  DrvrCrsCtrlFctActvReq1Vcc_Inactive = 0,
  DrvrCrsCtrlFctActvReq1Vcc_Activatedbyonoffbutton = 1,
  DrvrCrsCtrlFctActvReq1Vcc_Activatedbyresumebutton = 2,
  DrvrCrsCtrlFctActvReq1Vcc_Reserved = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DrvrCrsCtrlFctActvReq1VccIDT

#endif  // PERCEPTIONEXE_INCLUDE_DRVRCRSCTRLFCTACTVREQ1VCCIDT_IMPL_TYPE_DRVRCRSCTRLFCTACTVREQ1VCCIDT_H_
