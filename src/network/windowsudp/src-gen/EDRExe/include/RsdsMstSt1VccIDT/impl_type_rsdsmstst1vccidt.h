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
/**        \file  EDRExe/include/RsdsMstSt1VccIDT/impl_type_rsdsmstst1vccidt.h
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

#ifndef EDREXE_INCLUDE_RSDSMSTST1VCCIDT_IMPL_TYPE_RSDSMSTST1VCCIDT_H_
#define EDREXE_INCLUDE_RSDSMSTST1VCCIDT_IMPL_TYPE_RSDSMSTST1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RsdsMstSt1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type RsdsMstSt1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RsdsMstSt1VccIDT
 */
enum class RsdsMstSt1VccIDT : uint8_t {
  RsdsMstSt1Vcc_Cfg = 0,
  RsdsMstSt1Vcc_StrtUp = 1,
  RsdsMstSt1Vcc_Runng = 2,
  RsdsMstSt1Vcc_Blkd = 3,
  RsdsMstSt1Vcc_Faulty = 4,
  RsdsMstSt1Vcc_Shutdown = 5,
  RsdsMstSt1Vcc_Hot = 6,
  RsdsMstSt1Vcc_Cal = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RsdsMstSt1VccIDT

#endif  // EDREXE_INCLUDE_RSDSMSTST1VCCIDT_IMPL_TYPE_RSDSMSTST1VCCIDT_H_
