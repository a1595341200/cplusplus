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
/**        \file  RoadModelFusionExe/include/RefPathGlobals/impl_type_refpathglobals.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_REFPATHGLOBALS_IMPL_TYPE_REFPATHGLOBALS_H_
#define ROADMODELFUSIONEXE_INCLUDE_REFPATHGLOBALS_IMPL_TYPE_REFPATHGLOBALS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "RefPathGlobal/impl_type_refpathglobal.h"

namespace RefPathGlobals {

/*!
 * \brief Type RefPathGlobals.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RefPathGlobals
 */
using RefPathGlobals = std::array<
  RefPathGlobal::RefPathGlobal,
  6
>;

}  // namespace RefPathGlobals

#endif  // ROADMODELFUSIONEXE_INCLUDE_REFPATHGLOBALS_IMPL_TYPE_REFPATHGLOBALS_H_
