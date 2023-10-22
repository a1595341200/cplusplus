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
/**        \file  TrafficLightAttentionExe/include/TrfcSigns/impl_type_trfcsigns.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCSIGNS_IMPL_TYPE_TRFCSIGNS_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCSIGNS_IMPL_TYPE_TRFCSIGNS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "TrfcSign/impl_type_trfcsign.h"

namespace TrfcSigns {

/*!
 * \brief Type TrfcSigns.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcSigns
 */
using TrfcSigns = std::array<
  TrfcSign::TrfcSign,
  8
>;

}  // namespace TrfcSigns

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCSIGNS_IMPL_TYPE_TRFCSIGNS_H_
