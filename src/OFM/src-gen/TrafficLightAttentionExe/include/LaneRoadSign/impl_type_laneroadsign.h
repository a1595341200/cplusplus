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
/**        \file  TrafficLightAttentionExe/include/LaneRoadSign/impl_type_laneroadsign.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_LANEROADSIGN_IMPL_TYPE_LANEROADSIGN_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_LANEROADSIGN_IMPL_TYPE_LANEROADSIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneRoadSign {

/*!
 * \brief Type LaneRoadSign.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneRoadSign
 */
enum class LaneRoadSign : uint8_t {
  Unassigned = 0,
  Current = 1,
  FirstLeft = 2,
  SecondLeft = 3,
  FirstRight = 4,
  SecondRight = 5
};

}  // namespace LaneRoadSign

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_LANEROADSIGN_IMPL_TYPE_LANEROADSIGN_H_
