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
/**        \file  PerceptionExe/include/GNSSDatLose1IDT/impl_type_gnssdatlose1idt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_GNSSDATLOSE1IDT_IMPL_TYPE_GNSSDATLOSE1IDT_H_
#define PERCEPTIONEXE_INCLUDE_GNSSDATLOSE1IDT_IMPL_TYPE_GNSSDATLOSE1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace GNSSDatLose1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type GNSSDatLose1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GNSSDatLose1IDT
 */
enum class GNSSDatLose1IDT : uint8_t {
  GNSSDatLose1_Normal = 0,
  GNSSDatLose1_Lost = 1,
  GNSSDatLose1_Reserved1 = 2,
  GNSSDatLose1_Reserved2 = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace GNSSDatLose1IDT

#endif  // PERCEPTIONEXE_INCLUDE_GNSSDATLOSE1IDT_IMPL_TYPE_GNSSDATLOSE1IDT_H_
