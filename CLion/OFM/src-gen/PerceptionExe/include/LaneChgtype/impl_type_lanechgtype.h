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
/**        \file  PerceptionExe/include/LaneChgtype/impl_type_lanechgtype.h
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

#ifndef PERCEPTIONEXE_INCLUDE_LANECHGTYPE_IMPL_TYPE_LANECHGTYPE_H_
#define PERCEPTIONEXE_INCLUDE_LANECHGTYPE_IMPL_TYPE_LANECHGTYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneChgtype {

/*!
 * \brief Type LaneChgtype.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneChgtype
 */
enum class LaneChgtype : uint8_t {
  LaneChange_NoLaneChange = 0,
  LaneChange_laneChangeToTheLeft = 1,
  LaneChange_LaneChangeToTheRight = 2
};

}  // namespace LaneChgtype

#endif  // PERCEPTIONEXE_INCLUDE_LANECHGTYPE_IMPL_TYPE_LANECHGTYPE_H_
