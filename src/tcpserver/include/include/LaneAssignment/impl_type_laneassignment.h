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
/**        \file  ObjectFusionModelExe/include/LaneAssignment/impl_type_laneassignment.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_LANEASSIGNMENT_IMPL_TYPE_LANEASSIGNMENT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_LANEASSIGNMENT_IMPL_TYPE_LANEASSIGNMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneAssignment {

/*!
 * \brief Type LaneAssignment.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneAssignment
 */
enum class LaneAssignment : uint8_t {
  ObjLaneAssignment1_Unknown = 0,
  ObjLaneAssignment1_EgoLane = 1,
  ObjLaneAssignment1_LeftLane = 2,
  ObjLaneAssignment1_RightLane = 3,
  ObjLaneAssignment1_SecLeft = 4,
  ObjLaneAssignment1_SecRight = 5
};

}  // namespace LaneAssignment

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_LANEASSIGNMENT_IMPL_TYPE_LANEASSIGNMENT_H_
