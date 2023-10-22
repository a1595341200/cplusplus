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
/**        \file  LocalizationFusionExe/include/SuppSignType2/impl_type_suppsigntype2.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_SUPPSIGNTYPE2_IMPL_TYPE_SUPPSIGNTYPE2_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_SUPPSIGNTYPE2_IMPL_TYPE_SUPPSIGNTYPE2_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SuppSignType2 {

/*!
 * \brief Type SuppSignType2.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SuppSignType2
 */
enum class SuppSignType2 : uint8_t {
  SuppSignType2_Empty = 0,
  SuppSignType2_IcyRoad = 1,
  SuppSignType2_WetRoad = 2,
  SuppSignType2_TmRstrct = 3,
  SuppSignType2_Fog = 4,
  SuppSignType2_Rstrct = 5,
  SuppSignType2_RiExit = 6,
  SuppSignType2_LeExit = 7,
  SuppSignType2_SpdZn = 8,
  SuppSignType2_PssgCarTrailer = 9,
  SuppSignType2_SchoolZn = 10,
  SuppSignType2_Night = 11,
  SuppSignType2_IcyOrWet = 12,
  SuppSignType2_ExcptTractors = 13,
  SuppSignType2_DistanceIn = 14,
  SuppSignType2_DistanceFor = 15,
  SuppSignType2_ArrowLeft = 16,
  SuppSignType2_ArrowRight = 17,
  SuppSignType2_Rainy = 18,
  SuppSignType2_Snowy = 19,
  SuppSignType2_Region = 20,
  SuppSignType2_Trailer = 21
};

}  // namespace SuppSignType2

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_SUPPSIGNTYPE2_IMPL_TYPE_SUPPSIGNTYPE2_H_
