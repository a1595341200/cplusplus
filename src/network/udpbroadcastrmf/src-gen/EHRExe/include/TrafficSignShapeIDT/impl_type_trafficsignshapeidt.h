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
/**        \file  EHRExe/include/TrafficSignShapeIDT/impl_type_trafficsignshapeidt.h
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

#ifndef EHREXE_INCLUDE_TRAFFICSIGNSHAPEIDT_IMPL_TYPE_TRAFFICSIGNSHAPEIDT_H_
#define EHREXE_INCLUDE_TRAFFICSIGNSHAPEIDT_IMPL_TYPE_TRAFFICSIGNSHAPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrafficSignShapeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrafficSignShapeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrafficSignShapeIDT
 */
enum class TrafficSignShapeIDT : uint8_t {
  TrafficSignShape_Unknown = 0,
  TrafficSignShape_Square = 1,
  TrafficSignShape_Triangle = 2,
  TrafficSignShape_Circle = 3,
  TrafficSignShape_Diamond = 4,
  TrafficSignShape_Hexagon = 5,
  TrafficSignShape_Octagon = 6,
  TrafficSignShape_ForkedType = 7,
  TrafficSignShape_CombinedType = 8,
  TrafficSignShape_Others = 99
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrafficSignShapeIDT

#endif  // EHREXE_INCLUDE_TRAFFICSIGNSHAPEIDT_IMPL_TYPE_TRAFFICSIGNSHAPEIDT_H_
