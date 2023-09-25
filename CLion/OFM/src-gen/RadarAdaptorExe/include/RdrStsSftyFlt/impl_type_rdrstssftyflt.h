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
/**        \file  RadarAdaptorExe/include/RdrStsSftyFlt/impl_type_rdrstssftyflt.h
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

#ifndef RADARADAPTOREXE_INCLUDE_RDRSTSSFTYFLT_IMPL_TYPE_RDRSTSSFTYFLT_H_
#define RADARADAPTOREXE_INCLUDE_RDRSTSSFTYFLT_IMPL_TYPE_RDRSTSSFTYFLT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RdrStsSftyFlt {

/*!
 * \brief Type RdrStsSftyFlt.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RdrStsSftyFlt
 */
enum class RdrStsSftyFlt : uint8_t {
  SftyFlt_Undefined = 0,
  SftyFlt_NoSafetyFault = 1,
  SftyFlt_SafetyFault = 2,
  SftyFlt_Reserved = 3
};

}  // namespace RdrStsSftyFlt

#endif  // RADARADAPTOREXE_INCLUDE_RDRSTSSFTYFLT_IMPL_TYPE_RDRSTSSFTYFLT_H_
