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
/**        \file  PerceptionRearExe/include/LineColor1VccIDT/impl_type_linecolor1vccidt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_LINECOLOR1VCCIDT_IMPL_TYPE_LINECOLOR1VCCIDT_H_
#define PERCEPTIONREAREXE_INCLUDE_LINECOLOR1VCCIDT_IMPL_TYPE_LINECOLOR1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LineColor1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LineColor1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LineColor1VccIDT
 */
enum class LineColor1VccIDT : uint8_t {
  LineColor1Vcc_White = 0,
  LineColor1Vcc_Yellow = 1,
  LineColor1Vcc_Red = 2,
  LineColor1Vcc_Orange = 3,
  LineColor1Vcc_Green = 4,
  LineColor1Vcc_Other = 5
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LineColor1VccIDT

#endif  // PERCEPTIONREAREXE_INCLUDE_LINECOLOR1VCCIDT_IMPL_TYPE_LINECOLOR1VCCIDT_H_