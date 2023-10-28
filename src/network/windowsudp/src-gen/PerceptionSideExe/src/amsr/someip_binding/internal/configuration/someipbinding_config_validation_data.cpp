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
/**        \file  PerceptionSideExe/src/amsr/someip_binding/internal/configuration/someipbinding_config_validation_data.cpp
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
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding/internal/configuration/someipbinding_config_validation_data.h"
#include "amsr/someip_binding/internal/configuration/perceptionsidesi_out/PerceptionSideSI_Out_config_validation_data.h"
#include "amsr/someip_binding/internal/configuration/tosoca_infomationsi/ToSOCA_InfomationSI_config_validation_data.h"
#include "amsr/someip_binding/internal/configuration/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_config_validation_data.h"

namespace amsr {
namespace someip_binding {
namespace internal {
namespace configuration {

// VECTOR NL AutosarC++17_10-A3.3.2: MD_SOMEIPBINDING_AutosarC++17_10-A3.3.2_Container_static_objects
std::array<ValidServiceConfigurationEntity, 3> const SomeipBindingConfigValidationData::kValidServiceEntities{{
{"/JICA/Service/Interface/PerceptionSideSI_Out"_sv,
     ConfigValidationDataAccess{
      &::amsr::someip_binding::internal::configuration::gen_perceptionsidesi_out::PerceptionSideSI_OutConfigValidationData::kValidEventConfigurationEntities[0],
      5,
      nullptr,
      0,
      nullptr,
      0}},
     {"/JICA/Service/Interface/ToSOCA_InfomationSI"_sv,
     ConfigValidationDataAccess{
      &::amsr::someip_binding::internal::configuration::gen_tosoca_infomationsi::ToSOCA_InfomationSIConfigValidationData::kValidEventConfigurationEntities[0],
      2,
      nullptr,
      0,
      nullptr,
      0}},
     {"/JICA/Service/Interface/ToSOCA_LocSensorInfoSI"_sv,
     ConfigValidationDataAccess{
      &::amsr::someip_binding::internal::configuration::gen_tosoca_locsensorinfosi::ToSOCA_LocSensorInfoSIConfigValidationData::kValidEventConfigurationEntities[0],
      1,
      nullptr,
      0,
      nullptr,
      0}}
}};

}  // namespace configuration
}  // namespace internal
}  // namespace someip_binding
}  // namespace amsr

