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
/**        \file  TrafficLightAttentionExe/include/HznSplyElectcSts1/impl_type_hznsplyelectcsts1.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_HZNSPLYELECTCSTS1_IMPL_TYPE_HZNSPLYELECTCSTS1_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_HZNSPLYELECTCSTS1_IMPL_TYPE_HZNSPLYELECTCSTS1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace HznSplyElectcSts1 {

/*!
 * \brief Type HznSplyElectcSts1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/HznSplyElectcSts1
 */
enum class HznSplyElectcSts1 : uint8_t {
  HznSplyElectcSts1Vcc_Ukwn = 0,
  HznSplyElectcSts1Vcc_NoSpprt = 1,
  HznSplyElectcSts1Vcc_Failr = 2,
  HznSplyElectcSts1Vcc_Spprt = 3
};

}  // namespace HznSplyElectcSts1

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_HZNSPLYELECTCSTS1_IMPL_TYPE_HZNSPLYELECTCSTS1_H_
