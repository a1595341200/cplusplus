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
/**        \file  EDRExe/include/amsr/someip_binding/internal/configuration/someipbinding_config_validation_data.h
 *        \brief  SOME/IP config services validation data
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 34a78d6264927917d6838a378b15b039fd1cad4a
 *********************************************************************************************************************/

#ifndef EDREXE_INCLUDE_AMSR_SOMEIP_BINDING_INTERNAL_CONFIGURATION_SOMEIPBINDING_CONFIG_VALIDATION_DATA_H_
#define EDREXE_INCLUDE_AMSR_SOMEIP_BINDING_INTERNAL_CONFIGURATION_SOMEIPBINDING_CONFIG_VALIDATION_DATA_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding/internal/configuration/config_types.h"

namespace amsr {
namespace someip_binding {
namespace internal {
namespace configuration {

/*!
 * \brief SomeipBinding Validation data for all generated services.
 */
struct SomeipBindingConfigValidationData {
  /*!
   * \brief Array of valid service entities.
   */
  // VECTOR NL AutosarC++17_10-A3.3.2: MD_SOMEIPBINDING_AutosarC++17_10-A3.3.2_Container_static_objects
  static std::array<ValidServiceConfigurationEntity, 3> const kValidServiceEntities;
};

}  // configuration
}  // namespace internal
}  // namespace someip_binding
}  // namespace amsr


#endif  // EDREXE_INCLUDE_AMSR_SOMEIP_BINDING_INTERNAL_CONFIGURATION_SOMEIPBINDING_CONFIG_VALIDATION_DATA_H_

