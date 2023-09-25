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
/**        \file  EHRExe/include/NavigationStatus/impl_type_navigationstatus.h
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

#ifndef EHREXE_INCLUDE_NAVIGATIONSTATUS_IMPL_TYPE_NAVIGATIONSTATUS_H_
#define EHREXE_INCLUDE_NAVIGATIONSTATUS_IMPL_TYPE_NAVIGATIONSTATUS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace NavigationStatus {

/*!
 * \brief Type NavigationStatus.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/NavigationStatus
 */
enum class NavigationStatus : uint8_t {
  NavigationStatus_NotReceived = 0,
  NavigationStatus_PathPlanningInProgress = 1,
  NavigationStatus_Navigating = 2,
  NavigationStatus_Cruise = 3,
  NavigationStatus_GoingOffCourse = 4,
  NavigationStatus_Replanning = 5
};

}  // namespace NavigationStatus

#endif  // EHREXE_INCLUDE_NAVIGATIONSTATUS_IMPL_TYPE_NAVIGATIONSTATUS_H_
