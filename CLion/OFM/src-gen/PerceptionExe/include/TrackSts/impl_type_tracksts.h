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
/**        \file  PerceptionExe/include/TrackSts/impl_type_tracksts.h
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

#ifndef PERCEPTIONEXE_INCLUDE_TRACKSTS_IMPL_TYPE_TRACKSTS_H_
#define PERCEPTIONEXE_INCLUDE_TRACKSTS_IMPL_TYPE_TRACKSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrackSts {

/*!
 * \brief Type TrackSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrackSts
 */
enum class TrackSts : uint8_t {
  ObjTrackSts1_Invalid = 0,
  ObjTrackSts1_Updated = 1,
  ObjTrackSts1_New = 2,
  ObjTrackSts1_Predicted = 3
};

}  // namespace TrackSts

#endif  // PERCEPTIONEXE_INCLUDE_TRACKSTS_IMPL_TYPE_TRACKSTS_H_
