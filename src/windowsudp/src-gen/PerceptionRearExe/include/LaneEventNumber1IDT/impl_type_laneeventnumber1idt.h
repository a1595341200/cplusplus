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
/**        \file  PerceptionRearExe/include/LaneEventNumber1IDT/impl_type_laneeventnumber1idt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_LANEEVENTNUMBER1IDT_IMPL_TYPE_LANEEVENTNUMBER1IDT_H_
#define PERCEPTIONREAREXE_INCLUDE_LANEEVENTNUMBER1IDT_IMPL_TYPE_LANEEVENTNUMBER1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneEventNumber1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LaneEventNumber1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneEventNumber1IDT
 */
enum class LaneEventNumber1IDT : uint8_t {
  LaneEventNumber1_Unknown = 0,
  LaneEventNumber1_Left = 1,
  LaneEventNumber1_Right = 2,
  LaneEventNumber1_OtherLeft = 3,
  LaneEventNumber1_OtherRight = 4
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneEventNumber1IDT

#endif  // PERCEPTIONREAREXE_INCLUDE_LANEEVENTNUMBER1IDT_IMPL_TYPE_LANEEVENTNUMBER1IDT_H_
