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
/**        \file  PerceptionSideExe/include/AsyAutDrvCtrlTyp1VccIDT/impl_type_asyautdrvctrltyp1vccidt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_ASYAUTDRVCTRLTYP1VCCIDT_IMPL_TYPE_ASYAUTDRVCTRLTYP1VCCIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_ASYAUTDRVCTRLTYP1VCCIDT_IMPL_TYPE_ASYAUTDRVCTRLTYP1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AsyAutDrvCtrlTyp1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AsyAutDrvCtrlTyp1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyAutDrvCtrlTyp1VccIDT
 */
enum class AsyAutDrvCtrlTyp1VccIDT : uint8_t {
  AsyAutDrvCtrlTyp1Vcc_Inactive = 0,
  AsyAutDrvCtrlTyp1Vcc_ACC = 1,
  AsyAutDrvCtrlTyp1Vcc_GPilot = 2
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AsyAutDrvCtrlTyp1VccIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_ASYAUTDRVCTRLTYP1VCCIDT_IMPL_TYPE_ASYAUTDRVCTRLTYP1VCCIDT_H_
