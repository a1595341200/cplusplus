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
/**        \file  TrafficLightAttentionExe/include/MtnPat/impl_type_mtnpat.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_MTNPAT_IMPL_TYPE_MTNPAT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_MTNPAT_IMPL_TYPE_MTNPAT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace MtnPat {

/*!
 * \brief Type MtnPat.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/MtnPat
 */
enum class MtnPat : uint8_t {
  ObjMtnPat1Vcc_Ukwn = 0,
  ObjMtnPat1Vcc_Staty = 1,
  ObjMtnPat1Vcc_MovgFromSelf = 2,
  ObjMtnPat1Vcc_MovgToSelf = 3
};

}  // namespace MtnPat

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_MTNPAT_IMPL_TYPE_MTNPAT_H_
