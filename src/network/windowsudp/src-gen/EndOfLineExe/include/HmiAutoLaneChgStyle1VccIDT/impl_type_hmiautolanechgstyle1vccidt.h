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
/**        \file  EndOfLineExe/include/HmiAutoLaneChgStyle1VccIDT/impl_type_hmiautolanechgstyle1vccidt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_HMIAUTOLANECHGSTYLE1VCCIDT_IMPL_TYPE_HMIAUTOLANECHGSTYLE1VCCIDT_H_
#define ENDOFLINEEXE_INCLUDE_HMIAUTOLANECHGSTYLE1VCCIDT_IMPL_TYPE_HMIAUTOLANECHGSTYLE1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace HmiAutoLaneChgStyle1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type HmiAutoLaneChgStyle1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/HmiAutoLaneChgStyle1VccIDT
 */
enum class HmiAutoLaneChgStyle1VccIDT : uint8_t {
  HmiAutoLaneChgStyle1Vcc_Normal = 0,
  HmiAutoLaneChgStyle1Vcc_Gentle = 1,
  HmiAutoLaneChgStyle1Vcc_Rapid = 2,
  HmiAutoLaneChgStyle1Vcc_Fault = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace HmiAutoLaneChgStyle1VccIDT

#endif  // ENDOFLINEEXE_INCLUDE_HMIAUTOLANECHGSTYLE1VCCIDT_IMPL_TYPE_HMIAUTOLANECHGSTYLE1VCCIDT_H_
