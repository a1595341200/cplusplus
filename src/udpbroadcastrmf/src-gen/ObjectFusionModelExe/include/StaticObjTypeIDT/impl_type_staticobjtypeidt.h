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
/**        \file  ObjectFusionModelExe/include/StaticObjTypeIDT/impl_type_staticobjtypeidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_STATICOBJTYPEIDT_IMPL_TYPE_STATICOBJTYPEIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_STATICOBJTYPEIDT_IMPL_TYPE_STATICOBJTYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace StaticObjTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type StaticObjTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/StaticObjTypeIDT
 */
enum class StaticObjTypeIDT : uint8_t {
  StaticObjType_Invalid = 0,
  StaticObjType_Cone = 1,
  StaticObjType_Pole = 2,
  StaticObjType_Reflector = 3,
  StaticObjType_Sign = 4,
  StaticObjType_Barrel = 5,
  StaticObjType_Trashcan = 6,
  StaticObjType_Stroller = 7,
  StaticObjType_Wheelchair = 8,
  StaticObjType_SupermarketCart = 9,
  StaticObjType_Box = 10,
  StaticObjType_Boundery = 11,
  StaticObjType_Other = 12,
  StaticObjType_NumTypes = 13,
  StaticObjType_Reserved1 = 14,
  StaticObjType_Reserved2 = 15
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace StaticObjTypeIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_STATICOBJTYPEIDT_IMPL_TYPE_STATICOBJTYPEIDT_H_
