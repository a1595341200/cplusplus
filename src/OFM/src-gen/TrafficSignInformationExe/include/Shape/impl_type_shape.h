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
/**        \file  TrafficSignInformationExe/include/Shape/impl_type_shape.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_SHAPE_IMPL_TYPE_SHAPE_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_SHAPE_IMPL_TYPE_SHAPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace Shape {

/*!
 * \brief Type Shape.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Shape
 */
enum class Shape : uint8_t {
  SignShape_Unknown = 0,
  SignShape_Circle = 1,
  SignShape_Rectangle = 2,
  SignShape_Triangle = 3,
  SignShape_InvertedTriangle = 4,
  SignShape_Diamond = 5,
  SignShape_Pentangle = 6,
  SignShape_Reserved1 = 7
};

}  // namespace Shape

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_SHAPE_IMPL_TYPE_SHAPE_H_