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
/**        \file  PerceptionExe/include/SurfaceCondition/impl_type_surfacecondition.h
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

#ifndef PERCEPTIONEXE_INCLUDE_SURFACECONDITION_IMPL_TYPE_SURFACECONDITION_H_
#define PERCEPTIONEXE_INCLUDE_SURFACECONDITION_IMPL_TYPE_SURFACECONDITION_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SurfaceCondition {

/*!
 * \brief Type SurfaceCondition.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SurfaceCondition
 */
enum class SurfaceCondition : uint8_t {
  SurfaceCondition_Unknown = 0,
  SurfaceCondition_Dry = 1,
  SurfaceCondition_Puddles = 2,
  SurfaceCondition_Snow = 3
};

}  // namespace SurfaceCondition

#endif  // PERCEPTIONEXE_INCLUDE_SURFACECONDITION_IMPL_TYPE_SURFACECONDITION_H_