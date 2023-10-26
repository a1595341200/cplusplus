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
/**        \file  PerceptionRearExe/include/amsr/someip_binding/internal/configuration/perceptionrearsi_out/PerceptionRearSI_Out_config_validation_data.h
 *        \brief  SOME/IP proxy event handling for events and field notifications of service 'PerceptionRearSI_Out'
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

#ifndef PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_INTERNAL_CONFIGURATION_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_CONFIG_VALIDATION_DATA_H_
#define PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_INTERNAL_CONFIGURATION_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_CONFIG_VALIDATION_DATA_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding/internal/configuration/config_types.h"

namespace amsr {
namespace someip_binding {
namespace internal {
namespace configuration {
namespace gen_perceptionrearsi_out {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace ::vac::container::literals;  // NOLINT(build/namespaces)

/*!
 * \brief Validation data for configuration of service 'PerceptionRearSI_Out'.
 */
struct PerceptionRearSI_OutConfigValidationData {
  /*!
   * \brief Array of valid event entities.
   */
  static constexpr std::array<ValidEventConfigurationEntities, 3U> kValidEventConfigurationEntities {{
    // Element entries: {name of event, is signal based serialized}
    {"PerceptionRear_Bus_LaneInfo"_sv, false},
    {"PerceptionRear_Bus_CameraStatus"_sv, false},
    {"PerceptionRear_Bus_VisnObj"_sv, false}
  }};


};

}  // namespace gen_perceptionrearsi_out

}  // namespace configuration
}  // namespace internal
}  // namespace someip_binding
}  // namespace amsr


#endif  // PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_INTERNAL_CONFIGURATION_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_CONFIG_VALIDATION_DATA_H_

