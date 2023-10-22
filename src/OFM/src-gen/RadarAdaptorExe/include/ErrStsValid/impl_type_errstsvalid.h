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
/**        \file  RadarAdaptorExe/include/ErrStsValid/impl_type_errstsvalid.h
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

#ifndef RADARADAPTOREXE_INCLUDE_ERRSTSVALID_IMPL_TYPE_ERRSTSVALID_H_
#define RADARADAPTOREXE_INCLUDE_ERRSTSVALID_IMPL_TYPE_ERRSTSVALID_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ErrStsValid {

/*!
 * \brief Type ErrStsValid.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ErrStsValid
 */
enum class ErrStsValid : uint8_t {
  EFourDRadarDataValid_NotValid = 0,
  EFourDRadarDataValid_Valid = 1
};

}  // namespace ErrStsValid

#endif  // RADARADAPTOREXE_INCLUDE_ERRSTSVALID_IMPL_TYPE_ERRSTSVALID_H_