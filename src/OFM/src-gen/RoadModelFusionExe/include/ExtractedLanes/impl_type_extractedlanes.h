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
/**        \file  RoadModelFusionExe/include/ExtractedLanes/impl_type_extractedlanes.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDLANES_IMPL_TYPE_EXTRACTEDLANES_H_
#define ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDLANES_IMPL_TYPE_EXTRACTEDLANES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ExtractedLane/impl_type_extractedlane.h"

namespace ExtractedLanes {

/*!
 * \brief Type ExtractedLanes.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ExtractedLanes
 */
using ExtractedLanes = std::array<
  ExtractedLane::ExtractedLane,
  3
>;

}  // namespace ExtractedLanes

#endif  // ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDLANES_IMPL_TYPE_EXTRACTEDLANES_H_
