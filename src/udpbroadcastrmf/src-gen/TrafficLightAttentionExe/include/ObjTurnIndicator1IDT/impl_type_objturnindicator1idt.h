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
/**        \file  TrafficLightAttentionExe/include/ObjTurnIndicator1IDT/impl_type_objturnindicator1idt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJTURNINDICATOR1IDT_IMPL_TYPE_OBJTURNINDICATOR1IDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJTURNINDICATOR1IDT_IMPL_TYPE_OBJTURNINDICATOR1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ObjTurnIndicator1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type ObjTurnIndicator1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjTurnIndicator1IDT
 */
enum class ObjTurnIndicator1IDT : uint8_t {
  ObjTurnIndicator1_Off = 0,
  ObjTurnIndicator1_LeftOn = 1,
  ObjTurnIndicator1_RightOn = 2,
  ObjTurnIndicator1_BothOn = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjTurnIndicator1IDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJTURNINDICATOR1IDT_IMPL_TYPE_OBJTURNINDICATOR1IDT_H_
