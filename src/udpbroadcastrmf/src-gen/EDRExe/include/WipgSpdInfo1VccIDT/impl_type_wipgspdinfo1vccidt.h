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
/**        \file  EDRExe/include/WipgSpdInfo1VccIDT/impl_type_wipgspdinfo1vccidt.h
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

#ifndef EDREXE_INCLUDE_WIPGSPDINFO1VCCIDT_IMPL_TYPE_WIPGSPDINFO1VCCIDT_H_
#define EDREXE_INCLUDE_WIPGSPDINFO1VCCIDT_IMPL_TYPE_WIPGSPDINFO1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace WipgSpdInfo1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type WipgSpdInfo1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/WipgSpdInfo1VccIDT
 */
enum class WipgSpdInfo1VccIDT : uint8_t {
  WipgSpdInfo1Vcc_Off = 0,
  WipgSpdInfo1Vcc_IntlLo = 1,
  WipgSpdInfo1Vcc_IntlHi = 2,
  WipgSpdInfo1Vcc_WipgSpd4045 = 3,
  WipgSpdInfo1Vcc_WipgSpd4650 = 4,
  WipgSpdInfo1Vcc_WipgSpd5155 = 5,
  WipgSpdInfo1Vcc_WipgSpd5660 = 6,
  WipgSpdInfo1Vcc_WiprErr = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace WipgSpdInfo1VccIDT

#endif  // EDREXE_INCLUDE_WIPGSPDINFO1VCCIDT_IMPL_TYPE_WIPGSPDINFO1VCCIDT_H_
