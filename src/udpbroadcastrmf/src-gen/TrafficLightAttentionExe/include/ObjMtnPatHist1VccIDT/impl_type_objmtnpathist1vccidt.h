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
/**        \file  TrafficLightAttentionExe/include/ObjMtnPatHist1VccIDT/impl_type_objmtnpathist1vccidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJMTNPATHIST1VCCIDT_IMPL_TYPE_OBJMTNPATHIST1VCCIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJMTNPATHIST1VCCIDT_IMPL_TYPE_OBJMTNPATHIST1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ObjMtnPatHist1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type ObjMtnPatHist1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjMtnPatHist1VccIDT
 */
enum class ObjMtnPatHist1VccIDT : uint8_t {
  ObjMtnPatHist1Vcc_Ukwn = 0,
  ObjMtnPatHist1Vcc_NotMovg = 1,
  ObjMtnPatHist1Vcc_PrevMovmtFromSelf = 2,
  ObjMtnPatHist1Vcc_PrevMovmtToSelf = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjMtnPatHist1VccIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJMTNPATHIST1VCCIDT_IMPL_TYPE_OBJMTNPATHIST1VCCIDT_H_
