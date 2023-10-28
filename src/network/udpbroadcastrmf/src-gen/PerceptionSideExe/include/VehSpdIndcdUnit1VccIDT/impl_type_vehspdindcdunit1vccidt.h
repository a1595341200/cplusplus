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
/**        \file  PerceptionSideExe/include/VehSpdIndcdUnit1VccIDT/impl_type_vehspdindcdunit1vccidt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_VEHSPDINDCDUNIT1VCCIDT_IMPL_TYPE_VEHSPDINDCDUNIT1VCCIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_VEHSPDINDCDUNIT1VCCIDT_IMPL_TYPE_VEHSPDINDCDUNIT1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace VehSpdIndcdUnit1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type VehSpdIndcdUnit1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehSpdIndcdUnit1VccIDT
 */
enum class VehSpdIndcdUnit1VccIDT : uint8_t {
  VehSpdIndcdUnit1Vcc_Kmph = 0,
  VehSpdIndcdUnit1Vcc_Mph = 1,
  VehSpdIndcdUnit1Vcc_UkwnUnit = 2
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace VehSpdIndcdUnit1VccIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_VEHSPDINDCDUNIT1VCCIDT_IMPL_TYPE_VEHSPDINDCDUNIT1VCCIDT_H_
