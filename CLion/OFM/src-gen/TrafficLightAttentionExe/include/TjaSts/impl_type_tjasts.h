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
/**        \file  TrafficLightAttentionExe/include/TjaSts/impl_type_tjasts.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TJASTS_IMPL_TYPE_TJASTS_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TJASTS_IMPL_TYPE_TJASTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TjaSts {

/*!
 * \brief Type TjaSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TjaSts
 */
enum class TjaSts : uint8_t {
  TjaSts_Off = 0,
  TjaSts_Passive = 1,
  TjaSts_Standby = 2,
  TjaSts_Active = 3,
  TjaSts_Failure = 4
};

}  // namespace TjaSts

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TJASTS_IMPL_TYPE_TJASTS_H_
