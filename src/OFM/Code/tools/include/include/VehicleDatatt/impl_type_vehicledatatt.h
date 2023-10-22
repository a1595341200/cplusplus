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
/**        \file  ObjectFusionModelExe/include/VehicleDatatt/impl_type_vehicledatatt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_VEHICLEDATATT_IMPL_TYPE_VEHICLEDATATT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_VEHICLEDATATT_IMPL_TYPE_VEHICLEDATATT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace VehicleDatatt {

/*!
 * \brief Type VehicleDatatt.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehicleDatatt
 */
enum class VehicleDatatt : uint8_t {
  GNSSDatFr1_Normal = 0,
  GNSSDatFr1_Abnormal = 1,
  GNSSDatFr1_Reserved1 = 2,
  GNSSDatFr1_Reserved2 = 3
};

}  // namespace VehicleDatatt

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_VEHICLEDATATT_IMPL_TYPE_VEHICLEDATATT_H_
