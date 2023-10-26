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
/**        \file  TrafficSignInformationExe/include/SignShapeIDT/impl_type_signshapeidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_SIGNSHAPEIDT_IMPL_TYPE_SIGNSHAPEIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_SIGNSHAPEIDT_IMPL_TYPE_SIGNSHAPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SignShapeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SignShapeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SignShapeIDT
 */
enum class SignShapeIDT : uint8_t {
  SignShape_Unknown = 0,
  SignShape_Circle = 1,
  SignShape_Rectangle = 2,
  SignShape_Triangle = 3,
  SignShape_InvertedTriangle = 4,
  SignShape_Diamond = 5,
  SignShape_Pentangle = 6,
  SignShape_Reserved1 = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SignShapeIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_SIGNSHAPEIDT_IMPL_TYPE_SIGNSHAPEIDT_H_
