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
/**        \file  LocalizationFusionExe/include/GNSSDatLose/impl_type_gnssdatlose.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_GNSSDATLOSE_IMPL_TYPE_GNSSDATLOSE_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_GNSSDATLOSE_IMPL_TYPE_GNSSDATLOSE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace GNSSDatLose {

/*!
 * \brief Type GNSSDatLose.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GNSSDatLose
 */
enum class GNSSDatLose : uint8_t {
  GNSSDatLose1_Normal = 0,
  GNSSDatLose1_Lost = 1,
  GNSSDatLose1_Reserved1 = 2,
  GNSSDatLose1_Reserved2 = 3
};

}  // namespace GNSSDatLose

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_GNSSDATLOSE_IMPL_TYPE_GNSSDATLOSE_H_
