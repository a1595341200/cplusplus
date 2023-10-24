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
/**        \file  RadarAdaptorExe/include/EClassification1_1IDT/impl_type_eclassification1_1idt.h
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

#ifndef RADARADAPTOREXE_INCLUDE_ECLASSIFICATION1_1IDT_IMPL_TYPE_ECLASSIFICATION1_1IDT_H_
#define RADARADAPTOREXE_INCLUDE_ECLASSIFICATION1_1IDT_IMPL_TYPE_ECLASSIFICATION1_1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace EClassification1_1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type EClassification1_1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EClassification1_1IDT
 */
enum class EClassification1_1IDT : uint8_t {
  EClassification_Point = 0,
  EClassification_Car = 1,
  EClassification_Truck = 2,
  EClassification_Pedestrian = 3,
  EClassification_Motorcycle = 4,
  EClassification_Bicycle = 5,
  EClassification_Wide = 6,
  EClassification_Reserved1 = 7,
  EClassification_Reserved2 = 8,
  EClassification_Reserved3 = 9,
  EClassification_Unclassified = 10,
  EClassification_Reserved4 = 11,
  EClassification_Reserved5 = 12,
  EClassification_Reserved6 = 13,
  EClassification_Reserved7 = 14,
  EClassification_Reserved8 = 15
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace EClassification1_1IDT

#endif  // RADARADAPTOREXE_INCLUDE_ECLASSIFICATION1_1IDT_IMPL_TYPE_ECLASSIFICATION1_1IDT_H_
