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
/**        \file  ObjectFusionModelExe/include/Vehicleerr/impl_type_vehicleerr.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_VEHICLEERR_IMPL_TYPE_VEHICLEERR_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_VEHICLEERR_IMPL_TYPE_VEHICLEERR_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace Vehicleerr {

/*!
 * \brief Type Vehicleerr.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Vehicleerr
 */
enum class Vehicleerr : uint8_t {
  GNSSDatFr1_Normal = 0,
  GNSSDatFr1_Abnormal = 1,
  GNSSDatFr1_Reserved1 = 2,
  GNSSDatFr1_Reserved2 = 3
};

}  // namespace Vehicleerr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_VEHICLEERR_IMPL_TYPE_VEHICLEERR_H_
