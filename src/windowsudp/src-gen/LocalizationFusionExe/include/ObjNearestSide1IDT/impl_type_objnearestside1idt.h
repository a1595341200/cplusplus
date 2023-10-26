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
/**        \file  LocalizationFusionExe/include/ObjNearestSide1IDT/impl_type_objnearestside1idt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_OBJNEARESTSIDE1IDT_IMPL_TYPE_OBJNEARESTSIDE1IDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_OBJNEARESTSIDE1IDT_IMPL_TYPE_OBJNEARESTSIDE1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ObjNearestSide1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type ObjNearestSide1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjNearestSide1IDT
 */
enum class ObjNearestSide1IDT : uint8_t {
  ObjNearestSide1_UnknownSide = 0,
  ObjNearestSide1_RearSide = 1,
  ObjNearestSide1_FrontSide = 2,
  ObjNearestSide1_RightSide = 3,
  ObjNearestSide1_LeftSide = 4
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjNearestSide1IDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_OBJNEARESTSIDE1IDT_IMPL_TYPE_OBJNEARESTSIDE1IDT_H_
