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
/**        \file  TrafficLightAttentionExe/include/RdrStsFaulty/impl_type_rdrstsfaulty.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_RDRSTSFAULTY_IMPL_TYPE_RDRSTSFAULTY_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_RDRSTSFAULTY_IMPL_TYPE_RDRSTSFAULTY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RdrStsFaulty {

/*!
 * \brief Type RdrStsFaulty.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RdrStsFaulty
 */
enum class RdrStsFaulty : uint8_t {
  YesNo2Vcc_No = 0,
  YesNo2Vcc_Yes = 1
};

}  // namespace RdrStsFaulty

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_RDRSTSFAULTY_IMPL_TYPE_RDRSTSFAULTY_H_
