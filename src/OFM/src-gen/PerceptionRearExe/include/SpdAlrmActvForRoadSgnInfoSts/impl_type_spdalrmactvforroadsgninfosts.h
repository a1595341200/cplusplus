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
/**        \file  PerceptionRearExe/include/SpdAlrmActvForRoadSgnInfoSts/impl_type_spdalrmactvforroadsgninfosts.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_SPDALRMACTVFORROADSGNINFOSTS_IMPL_TYPE_SPDALRMACTVFORROADSGNINFOSTS_H_
#define PERCEPTIONREAREXE_INCLUDE_SPDALRMACTVFORROADSGNINFOSTS_IMPL_TYPE_SPDALRMACTVFORROADSGNINFOSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SpdAlrmActvForRoadSgnInfoSts {

/*!
 * \brief Type SpdAlrmActvForRoadSgnInfoSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfoSts
 */
enum class SpdAlrmActvForRoadSgnInfoSts : uint8_t {
  DY1Vcc_NoRequest = 0,
  DY1Vcc_NoWarning = 1,
  DY1Vcc_Flashing = 2,
  DY1Vcc_FlashingAndAudio = 3
};

}  // namespace SpdAlrmActvForRoadSgnInfoSts

#endif  // PERCEPTIONREAREXE_INCLUDE_SPDALRMACTVFORROADSGNINFOSTS_IMPL_TYPE_SPDALRMACTVFORROADSGNINFOSTS_H_
