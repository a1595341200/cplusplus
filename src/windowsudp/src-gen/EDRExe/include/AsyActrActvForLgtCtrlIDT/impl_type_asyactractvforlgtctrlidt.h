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
/**        \file  EDRExe/include/AsyActrActvForLgtCtrlIDT/impl_type_asyactractvforlgtctrlidt.h
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

#ifndef EDREXE_INCLUDE_ASYACTRACTVFORLGTCTRLIDT_IMPL_TYPE_ASYACTRACTVFORLGTCTRLIDT_H_
#define EDREXE_INCLUDE_ASYACTRACTVFORLGTCTRLIDT_IMPL_TYPE_ASYACTRACTVFORLGTCTRLIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AsyActrActvForLgtCtrlIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AsyActrActvForLgtCtrlIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyActrActvForLgtCtrlIDT
 */
enum class AsyActrActvForLgtCtrlIDT : uint8_t {
  AsyActrActvForLgtCtrl_ActrNotEnadForCmft = 0,
  AsyActrActvForLgtCtrl_PrpsnActrEnadForCmft = 1,
  AsyActrActvForLgtCtrl_BrkActrEnadForCmft = 2
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AsyActrActvForLgtCtrlIDT

#endif  // EDREXE_INCLUDE_ASYACTRACTVFORLGTCTRLIDT_IMPL_TYPE_ASYACTRACTVFORLGTCTRLIDT_H_
