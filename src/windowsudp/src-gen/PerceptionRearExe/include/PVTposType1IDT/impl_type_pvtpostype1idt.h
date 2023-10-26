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
/**        \file  PerceptionRearExe/include/PVTposType1IDT/impl_type_pvtpostype1idt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_PVTPOSTYPE1IDT_IMPL_TYPE_PVTPOSTYPE1IDT_H_
#define PERCEPTIONREAREXE_INCLUDE_PVTPOSTYPE1IDT_IMPL_TYPE_PVTPOSTYPE1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace PVTposType1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type PVTposType1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PVTposType1IDT
 */
enum class PVTposType1IDT : uint8_t {
  PVTposType1_NotValid = 0,
  PVTposType1_SinglePointPositioning = 1,
  PVTposType1_DifferentialPositioning = 2,
  PVTposType1_InvalidPPS = 3,
  PVTposType1_RealTiKinematicPos = 4,
  PVTposType1_RtkFloat = 5,
  PVTposType1_Ongoing = 6
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace PVTposType1IDT

#endif  // PERCEPTIONREAREXE_INCLUDE_PVTPOSTYPE1IDT_IMPL_TYPE_PVTPOSTYPE1IDT_H_
