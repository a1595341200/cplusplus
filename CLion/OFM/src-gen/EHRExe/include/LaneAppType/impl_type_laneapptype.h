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
/**        \file  EHRExe/include/LaneAppType/impl_type_laneapptype.h
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

#ifndef EHREXE_INCLUDE_LANEAPPTYPE_IMPL_TYPE_LANEAPPTYPE_H_
#define EHREXE_INCLUDE_LANEAPPTYPE_IMPL_TYPE_LANEAPPTYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneAppType {

/*!
 * \brief Type LaneAppType.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneAppType
 */
enum class LaneAppType : uint32_t {
  LaneAppType_None = 0,
  LaneAppType_ReversibleLane = 1,
  LaneAppType_Buslane = 2,
  LaneAppType_HOV_Lane = 3
};

}  // namespace LaneAppType

#endif  // EHREXE_INCLUDE_LANEAPPTYPE_IMPL_TYPE_LANEAPPTYPE_H_
