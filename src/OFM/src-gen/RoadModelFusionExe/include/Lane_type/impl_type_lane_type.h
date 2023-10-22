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
/**        \file  RoadModelFusionExe/include/Lane_type/impl_type_lane_type.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LANE_TYPE_IMPL_TYPE_LANE_TYPE_H_
#define ROADMODELFUSIONEXE_INCLUDE_LANE_TYPE_IMPL_TYPE_LANE_TYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace Lane_type {

/*!
 * \brief Type Lane_type.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Lane_type
 */
enum class Lane_type : uint8_t {
  EnumLaneType_Invalid = 0,
  EnumLaneType_EgoLane = 1,
  EnumLaneType_LeftLane = 2,
  EnumLaneType_RightLane = 3
};

}  // namespace Lane_type

#endif  // ROADMODELFUSIONEXE_INCLUDE_LANE_TYPE_IMPL_TYPE_LANE_TYPE_H_
