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
/**        \file  PerceptionExe/include/TrackStsRE/impl_type_trackstsre.h
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

#ifndef PERCEPTIONEXE_INCLUDE_TRACKSTSRE_IMPL_TYPE_TRACKSTSRE_H_
#define PERCEPTIONEXE_INCLUDE_TRACKSTSRE_IMPL_TYPE_TRACKSTSRE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrackStsRE {

/*!
 * \brief Type TrackStsRE.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrackStsRE
 */
enum class TrackStsRE : uint8_t {
  TrackStsRE_Invalid = 0,
  TrackStsRE_Tracked = 1,
  TrackStsRE_CloseRangePredicted = 2,
  TrackStsRE_FarRangePredicted = 3,
  TrackStsRE_Predicted = 4
};

}  // namespace TrackStsRE

#endif  // PERCEPTIONEXE_INCLUDE_TRACKSTSRE_IMPL_TYPE_TRACKSTSRE_H_
