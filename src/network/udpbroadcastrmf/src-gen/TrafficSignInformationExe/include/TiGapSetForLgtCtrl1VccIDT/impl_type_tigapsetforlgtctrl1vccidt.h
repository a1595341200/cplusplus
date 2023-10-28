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
/**        \file  TrafficSignInformationExe/include/TiGapSetForLgtCtrl1VccIDT/impl_type_tigapsetforlgtctrl1vccidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_TIGAPSETFORLGTCTRL1VCCIDT_IMPL_TYPE_TIGAPSETFORLGTCTRL1VCCIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_TIGAPSETFORLGTCTRL1VCCIDT_IMPL_TYPE_TIGAPSETFORLGTCTRL1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TiGapSetForLgtCtrl1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TiGapSetForLgtCtrl1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TiGapSetForLgtCtrl1VccIDT
 */
enum class TiGapSetForLgtCtrl1VccIDT : uint8_t {
  TiGapSetForLgtCtrl1Vcc_None = 0,
  TiGapSetForLgtCtrl1Vcc_TimeGap_1 = 1,
  TiGapSetForLgtCtrl1Vcc_TimeGap_2 = 2,
  TiGapSetForLgtCtrl1Vcc_TimeGap_3 = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TiGapSetForLgtCtrl1VccIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_TIGAPSETFORLGTCTRL1VCCIDT_IMPL_TYPE_TIGAPSETFORLGTCTRL1VCCIDT_H_
