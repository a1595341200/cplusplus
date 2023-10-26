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
/**        \file  PerceptionExe/include/SuppSignType1IDT/impl_type_suppsigntype1idt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_SUPPSIGNTYPE1IDT_IMPL_TYPE_SUPPSIGNTYPE1IDT_H_
#define PERCEPTIONEXE_INCLUDE_SUPPSIGNTYPE1IDT_IMPL_TYPE_SUPPSIGNTYPE1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SuppSignType1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SuppSignType1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SuppSignType1IDT
 */
enum class SuppSignType1IDT : uint8_t {
  SuppSignType1_Empty = 0,
  SuppSignType1_Ramp = 1,
  SuppSignType1_Car = 2,
  SuppSignType1_Truck = 3,
  SuppSignType1_Bus = 4,
  SuppSignType1_School = 5,
  SuppSignType1_Accident = 6
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SuppSignType1IDT

#endif  // PERCEPTIONEXE_INCLUDE_SUPPSIGNTYPE1IDT_IMPL_TYPE_SUPPSIGNTYPE1IDT_H_
