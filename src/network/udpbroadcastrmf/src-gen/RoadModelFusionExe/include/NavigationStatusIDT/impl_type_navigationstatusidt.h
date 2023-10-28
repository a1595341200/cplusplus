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
/**        \file  RoadModelFusionExe/include/NavigationStatusIDT/impl_type_navigationstatusidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_NAVIGATIONSTATUSIDT_IMPL_TYPE_NAVIGATIONSTATUSIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_NAVIGATIONSTATUSIDT_IMPL_TYPE_NAVIGATIONSTATUSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace NavigationStatusIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type NavigationStatusIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/NavigationStatusIDT
 */
enum class NavigationStatusIDT : uint8_t {
  NavigationStatus_NotReceived = 0,
  NavigationStatus_PathPlanningInProgress = 1,
  NavigationStatus_Navigating = 2,
  NavigationStatus_Cruise = 3,
  NavigationStatus_GoingOffCourse = 4,
  NavigationStatus_Replanning = 5
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace NavigationStatusIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_NAVIGATIONSTATUSIDT_IMPL_TYPE_NAVIGATIONSTATUSIDT_H_
