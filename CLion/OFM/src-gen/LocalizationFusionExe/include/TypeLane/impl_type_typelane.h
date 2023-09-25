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
/**        \file  LocalizationFusionExe/include/TypeLane/impl_type_typelane.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_TYPELANE_IMPL_TYPE_TYPELANE_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_TYPELANE_IMPL_TYPE_TYPELANE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TypeLane {

/*!
 * \brief Type TypeLane.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TypeLane
 */
enum class TypeLane : uint8_t {
  CamLineType_None = 0,
  CamLineType_Solid = 1,
  CamLineType_Dashed = 2,
  CamLineType_DoubleSolid = 3,
  CamLineType_DoubleDashed = 4,
  CamLineType_SolidDashed = 5,
  CamLineType_DashedSolid = 6,
  CamLineType_Fishbone = 7
};

}  // namespace TypeLane

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_TYPELANE_IMPL_TYPE_TYPELANE_H_
