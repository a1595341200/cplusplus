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
/**        \file  RadarAdaptorExe/include/DynamicProperty/impl_type_dynamicproperty.h
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

#ifndef RADARADAPTOREXE_INCLUDE_DYNAMICPROPERTY_IMPL_TYPE_DYNAMICPROPERTY_H_
#define RADARADAPTOREXE_INCLUDE_DYNAMICPROPERTY_IMPL_TYPE_DYNAMICPROPERTY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace DynamicProperty {

/*!
 * \brief Type DynamicProperty.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DynamicProperty
 */
enum class DynamicProperty : uint8_t {
  EDynamicProperty_Moving = 0,
  EDynamicProperty_Stationary = 1,
  EDynamicProperty_Oncoming = 2,
  EDynamicProperty_CrossingLeftToRight = 3,
  EDynamicProperty_CrossingRightToLeft = 4,
  EDynamicProperty_Unknown = 5,
  EDynamicProperty_Stopped = 6,
  EDynamicProperty_Reserved1 = 7
};

}  // namespace DynamicProperty

#endif  // RADARADAPTOREXE_INCLUDE_DYNAMICPROPERTY_IMPL_TYPE_DYNAMICPROPERTY_H_
