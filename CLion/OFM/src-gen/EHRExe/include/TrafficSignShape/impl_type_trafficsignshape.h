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
/**        \file  EHRExe/include/TrafficSignShape/impl_type_trafficsignshape.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef EHREXE_INCLUDE_TRAFFICSIGNSHAPE_IMPL_TYPE_TRAFFICSIGNSHAPE_H_
#define EHREXE_INCLUDE_TRAFFICSIGNSHAPE_IMPL_TYPE_TRAFFICSIGNSHAPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrafficSignShape {

/*!
 * \brief Type TrafficSignShape.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrafficSignShape
 */
enum class TrafficSignShape : uint8_t {
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

}  // namespace TrafficSignShape

#endif  // EHREXE_INCLUDE_TRAFFICSIGNSHAPE_IMPL_TYPE_TRAFFICSIGNSHAPE_H_
