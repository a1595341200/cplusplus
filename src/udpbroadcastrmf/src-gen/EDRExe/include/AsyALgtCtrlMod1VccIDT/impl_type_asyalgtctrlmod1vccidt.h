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
/**        \file  EDRExe/include/AsyALgtCtrlMod1VccIDT/impl_type_asyalgtctrlmod1vccidt.h
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

#ifndef EDREXE_INCLUDE_ASYALGTCTRLMOD1VCCIDT_IMPL_TYPE_ASYALGTCTRLMOD1VCCIDT_H_
#define EDREXE_INCLUDE_ASYALGTCTRLMOD1VCCIDT_IMPL_TYPE_ASYALGTCTRLMOD1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AsyALgtCtrlMod1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AsyALgtCtrlMod1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyALgtCtrlMod1VccIDT
 */
enum class AsyALgtCtrlMod1VccIDT : uint8_t {
  AsyALgtCtrlMod1Vcc_NoReq = 0,
  AsyALgtCtrlMod1Vcc_PEB = 10,
  AsyALgtCtrlMod1Vcc_APA = 11,
  AsyALgtCtrlMod1Vcc_RPA = 12,
  AsyALgtCtrlMod1Vcc_HPA = 13
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AsyALgtCtrlMod1VccIDT

#endif  // EDREXE_INCLUDE_ASYALGTCTRLMOD1VCCIDT_IMPL_TYPE_ASYALGTCTRLMOD1VCCIDT_H_
