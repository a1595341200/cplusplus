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
/**        \file  PerceptionExe/include/TimeOfDay/impl_type_timeofday.h
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

#ifndef PERCEPTIONEXE_INCLUDE_TIMEOFDAY_IMPL_TYPE_TIMEOFDAY_H_
#define PERCEPTIONEXE_INCLUDE_TIMEOFDAY_IMPL_TYPE_TIMEOFDAY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TimeOfDay {

/*!
 * \brief Type TimeOfDay.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TimeOfDay
 */
enum class TimeOfDay : uint8_t {
  TimeOfDay_Idle = 0,
  TimeOfDay_Day = 1,
  TimeOfDay_Night = 2
};

}  // namespace TimeOfDay

#endif  // PERCEPTIONEXE_INCLUDE_TIMEOFDAY_IMPL_TYPE_TIMEOFDAY_H_
