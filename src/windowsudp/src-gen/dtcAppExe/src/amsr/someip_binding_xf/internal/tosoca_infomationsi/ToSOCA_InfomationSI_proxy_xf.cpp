// VECTOR Same Line AutosarC++17_10-A1.1.1: MD_SOMEIPBINDING_AutosarC++17_10-A1.1.1_external_identifiers
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
/**        \file  dtcAppExe/src/amsr/someip_binding_xf/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_xf.cpp
 *        \brief  SOME/IP proxy binding of service 'ToSOCA_InfomationSI'
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
#include "amsr/someip_binding_xf/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_xf.h"
#include <utility>
#include "amsr/someip_binding_core/internal/types.h"
#include "osabstraction/io/io_buffer.h"
#include "tosoca_infomationsi/tosoca_infomationsi_proxy.h"
#include "vac/memory/memory_buffer.h"


namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_tosoca_infomationsi {

// ---- Methods --------------------------------------------------------------------------------------------------

// ---- Fields ---------------------------------------------------------------------------------------------------

ToSOCA_InfomationSIProxyXf::ToSOCA_InfomationSIProxyXf(
    ::amsr::someip_protocol::internal::ServiceId const service_id,
    ::amsr::someip_protocol::internal::MajorVersion const major_version,
    ::amsr::someip_protocol::internal::InstanceId const instance_id,
    E2EPropsMap const& e2e_props_map,
    ::amsr::someip_binding::internal::configuration::ConfigWrapperInterface const& config_wrapper,
    ::amsr::someip_binding::internal::configuration::SomeIpBindingConfig::E2EProfileMap const&
    e2e_profile_config_map, ::amsr::someip_binding_core::internal::SomeIpClient&& someip_client) : major_version_{major_version},
                              proxy_identity_{service_id, instance_id, someip_client.GetClientId()},
                              someip_client_{std::move(someip_client)},
                              e2e_props_map_{e2e_props_map},
                              // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
                              config_wrapper_{config_wrapper},
                              // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
                              e2e_profile_config_map_{e2e_profile_config_map} {
}  // COV_SOMEIPBINDING_PROXY_XF

// VCA_SLC_23_SOMEIPBINDING_DEFAULT_DTOR_MOLE_1298
ToSOCA_InfomationSIProxyXf::~ToSOCA_InfomationSIProxyXf() noexcept {
// VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
}  // COV_SOMEIPBINDING_PROXY_XF 

}  // namespace gen_tosoca_infomationsi
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

