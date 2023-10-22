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
/**        \file  PerceptionExe/include/TypeTL/impl_type_typetl.h
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

#ifndef PERCEPTIONEXE_INCLUDE_TYPETL_IMPL_TYPE_TYPETL_H_
#define PERCEPTIONEXE_INCLUDE_TYPETL_IMPL_TYPE_TYPETL_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TypeTL {

/*!
 * \brief Type TypeTL.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TypeTL
 */
enum class TypeTL : uint8_t {
  TrfcLiTyp_Uknwn = 0,
  TrfcLiTyp_SldCrcl = 1,
  TrfcLiTyp_LftArrw = 2,
  TrfcLiTyp_RghtArrw = 3,
  TrfcLiTyp_FwdArrw = 4,
  TrfcLiTyp_LftFwdArrw = 5,
  TrfcLiTyp_RgtFwdArrw = 6,
  TrfcLiTyp_Reserved = 7
};

}  // namespace TypeTL

#endif  // PERCEPTIONEXE_INCLUDE_TYPETL_IMPL_TYPE_TYPETL_H_
