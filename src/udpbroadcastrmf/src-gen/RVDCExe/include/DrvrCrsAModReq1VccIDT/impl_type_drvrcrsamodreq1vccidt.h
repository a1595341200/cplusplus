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
/**        \file  RVDCExe/include/DrvrCrsAModReq1VccIDT/impl_type_drvrcrsamodreq1vccidt.h
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

#ifndef RVDCEXE_INCLUDE_DRVRCRSAMODREQ1VCCIDT_IMPL_TYPE_DRVRCRSAMODREQ1VCCIDT_H_
#define RVDCEXE_INCLUDE_DRVRCRSAMODREQ1VCCIDT_IMPL_TYPE_DRVRCRSAMODREQ1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace DrvrCrsAModReq1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type DrvrCrsAModReq1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DrvrCrsAModReq1VccIDT
 */
enum class DrvrCrsAModReq1VccIDT : uint8_t {
  DrvrCrsAModReq1Vcc_Neutral = 0,
  DrvrCrsAModReq1Vcc_APosReqMod1 = 1,
  DrvrCrsAModReq1Vcc_APosReqMod2 = 2,
  DrvrCrsAModReq1Vcc_ANegReqMod1 = 3,
  DrvrCrsAModReq1Vcc_ANegReqMod2 = 4
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DrvrCrsAModReq1VccIDT

#endif  // RVDCEXE_INCLUDE_DRVRCRSAMODREQ1VCCIDT_IMPL_TYPE_DRVRCRSAMODREQ1VCCIDT_H_
