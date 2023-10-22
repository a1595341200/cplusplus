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
/**        \file  Soc2LidarExe/include/ROI_Switch/impl_type_roi_switch.h
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

#ifndef SOC2LIDAREXE_INCLUDE_ROI_SWITCH_IMPL_TYPE_ROI_SWITCH_H_
#define SOC2LIDAREXE_INCLUDE_ROI_SWITCH_IMPL_TYPE_ROI_SWITCH_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ROI_Switch {

/*!
 * \brief Type ROI_Switch.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ROI_Switch
 */
enum class ROI_Switch : uint8_t {
  ROI_FUNC_OFF = 0,
  ROI_FUNC_ON = 1
};

}  // namespace ROI_Switch

#endif  // SOC2LIDAREXE_INCLUDE_ROI_SWITCH_IMPL_TYPE_ROI_SWITCH_H_
