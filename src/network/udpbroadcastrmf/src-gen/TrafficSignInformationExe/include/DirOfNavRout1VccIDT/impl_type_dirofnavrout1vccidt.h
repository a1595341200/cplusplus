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
/**        \file  TrafficSignInformationExe/include/DirOfNavRout1VccIDT/impl_type_dirofnavrout1vccidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_DIROFNAVROUT1VCCIDT_IMPL_TYPE_DIROFNAVROUT1VCCIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_DIROFNAVROUT1VCCIDT_IMPL_TYPE_DIROFNAVROUT1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace DirOfNavRout1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type DirOfNavRout1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DirOfNavRout1VccIDT
 */
enum class DirOfNavRout1VccIDT : uint8_t {
  DirOfNavRout1Vcc_Idle = 0,
  DirOfNavRout1Vcc_TurnLe = 1,
  DirOfNavRout1Vcc_TurnRi = 2,
  DirOfNavRout1Vcc_LeAhd = 3,
  DirOfNavRout1Vcc_RiAhd = 4,
  DirOfNavRout1Vcc_SharpLe = 5,
  DirOfNavRout1Vcc_SharpRi = 6,
  DirOfNavRout1Vcc_LeUTurn = 7,
  DirOfNavRout1Vcc_RiUTurn = 8,
  DirOfNavRout1Vcc_Straight = 9
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DirOfNavRout1VccIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_DIROFNAVROUT1VCCIDT_IMPL_TYPE_DIROFNAVROUT1VCCIDT_H_
