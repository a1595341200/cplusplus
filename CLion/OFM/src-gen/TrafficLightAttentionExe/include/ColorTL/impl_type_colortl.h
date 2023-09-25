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
/**        \file  TrafficLightAttentionExe/include/ColorTL/impl_type_colortl.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_COLORTL_IMPL_TYPE_COLORTL_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_COLORTL_IMPL_TYPE_COLORTL_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ColorTL {

/*!
 * \brief Type ColorTL.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ColorTL
 */
enum class ColorTL : uint8_t {
  TrfcLiColor_Unkwn = 0,
  TrfcLiColor_Red = 1,
  TrfcLiColor_Yllw = 2,
  TrfcLiColor_Green = 3,
  TrfcLiColor_BlnkGreen = 4,
  TrfcLiColor_BlnkYllw = 5,
  TrfcLiColor_BlnkRed = 6
};

}  // namespace ColorTL

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_COLORTL_IMPL_TYPE_COLORTL_H_
