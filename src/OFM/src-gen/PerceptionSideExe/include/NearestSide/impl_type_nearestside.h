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
/**        \file  PerceptionSideExe/include/NearestSide/impl_type_nearestside.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_NEARESTSIDE_IMPL_TYPE_NEARESTSIDE_H_
#define PERCEPTIONSIDEEXE_INCLUDE_NEARESTSIDE_IMPL_TYPE_NEARESTSIDE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace NearestSide {

/*!
 * \brief Type NearestSide.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/NearestSide
 */
enum class NearestSide : uint8_t {
  ObjNearestSide1_UnknownSide = 0,
  ObjNearestSide1_RearSide = 1,
  ObjNearestSide1_FrontSide = 2,
  ObjNearestSide1_RightSide = 3,
  ObjNearestSide1_LeftSide = 4
};

}  // namespace NearestSide

#endif  // PERCEPTIONSIDEEXE_INCLUDE_NEARESTSIDE_IMPL_TYPE_NEARESTSIDE_H_
