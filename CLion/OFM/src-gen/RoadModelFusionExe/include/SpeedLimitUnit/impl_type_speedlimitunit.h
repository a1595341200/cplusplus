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
/**        \file  RoadModelFusionExe/include/SpeedLimitUnit/impl_type_speedlimitunit.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_SPEEDLIMITUNIT_IMPL_TYPE_SPEEDLIMITUNIT_H_
#define ROADMODELFUSIONEXE_INCLUDE_SPEEDLIMITUNIT_IMPL_TYPE_SPEEDLIMITUNIT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SpeedLimitUnit {

/*!
 * \brief Type SpeedLimitUnit.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpeedLimitUnit
 */
enum class SpeedLimitUnit : uint8_t {
  SpeedLimitUnit_kmh = 0,
  SpeedLimitUnit_ms = 1
};

}  // namespace SpeedLimitUnit

#endif  // ROADMODELFUSIONEXE_INCLUDE_SPEEDLIMITUNIT_IMPL_TYPE_SPEEDLIMITUNIT_H_
