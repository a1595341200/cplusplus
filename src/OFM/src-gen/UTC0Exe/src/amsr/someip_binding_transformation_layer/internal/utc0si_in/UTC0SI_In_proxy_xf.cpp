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
/**        \file  UTC0Exe/src/amsr/someip_binding_transformation_layer/internal/utc0si_in/UTC0SI_In_proxy_xf.cpp
 *        \brief  SOME/IP proxy binding of service 'UTC0SI_In'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 5d8070897bdfaedb620f897381ef230973e3ab64
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/utc0si_in/UTC0SI_In_proxy_xf.h"
#include <tuple>
#include <utility>
#include "osabstraction/io/io_buffer.h"
#include "someip_binding/internal/client_manager_interface.h"
#include "utc0si_in/utc0si_in_proxy.h"
#include "vac/memory/memory_buffer.h"


namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace utc0si_in {

// ---- Methods --------------------------------------------------------------------------------------------------

// ---- Fields ---------------------------------------------------------------------------------------------------

UTC0SI_InProxyXf::UTC0SI_InProxyXf(
    ::amsr::someip_protocol::internal::ServiceId const service_id,
    ::amsr::someip_protocol::internal::MajorVersion const major_version,
    ::amsr::someip_protocol::internal::InstanceId const instance_id,
    ::amsr::someip_protocol::internal::ClientId const client_id,
    ::amsr::someip_binding::internal::ClientManager<>& someip_binding_client_manager,
    ::amsr::someip_binding::internal::ThreadPoolInterface& thread_pool_interface)
    : service_id_(service_id),
      major_version_(major_version),
      instance_id_(instance_id),
      client_id_(client_id),
      requestor_count_{0},
      is_active_{false},
      client_manager_(someip_binding_client_manager),
      thread_pool_interface_{thread_pool_interface} {}

void UTC0SI_InProxyXf::Start() noexcept { is_active_ = true; }

void UTC0SI_InProxyXf::Stop() noexcept { is_active_ = false; }

// VECTOR NC AutosarC++17_10-A15.4.2: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_GoogleTest
// VECTOR NC AutosarC++17_10-A15.5.3: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_GoogleTest
::ara::core::Result<void> UTC0SI_InProxyXf::RequestService() noexcept {
  // The only error that can possibly be returned from ClientManager::RequestService is kAccessDenied
  ::ara::core::Result<void> result{ara::com::ComErrc::kGrantEnforcementError};

  std::lock_guard<std::mutex> const request_service_guard{request_service_mutex_};
   if(++requestor_count_ == 1) {
   ::amsr::someip_daemon_client::internal::RequestClientParam const request_client_param{service_id_, instance_id_};
     client_id_ =   client_manager_.RequestClientId(request_client_param);
     // Register this proxy binding for method responses and event notifications.
     ::amsr::someip_binding::internal::ProxyBindingIdentity const proxy_identity{std::make_tuple(service_id_, instance_id_, client_id_)};
     client_manager_.RegisterProxyBinding(proxy_identity, shared_from_this());
   }
   ::ara::core::Result<void> const rs{client_manager_.RequestService(service_id_, instance_id_, major_version_)};
   if (rs.HasValue()) {
     result.EmplaceValue();
   }
  return result;
}

void UTC0SI_InProxyXf::ReleaseService() noexcept {
  std::lock_guard<std::mutex> const request_service_guard{request_service_mutex_};
   if (--requestor_count_ == 0) {
      client_manager_.DeRegisterProxyBinding( std::make_tuple(service_id_, instance_id_, client_id_));
   }
}

bool UTC0SI_InProxyXf::SendMethodRequest(::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet) {
  return client_manager_.SendMethodRequest(instance_id_, std::move(packet));
}

void UTC0SI_InProxyXf::HandleMethodResponse(
    ::amsr::someip_protocol::internal::SomeIpMessageHeader const& header,
    ::amsr::someip_protocol::internal::SomeIpMessage ) {
  // Get method ID from header
  ::amsr::someip_protocol::internal::MethodId const method_id{header.method_id_};

  // Based on the method id -> static dispatching to the method request/response manager
  switch (method_id) {
    default: {
      logger_.LogError([&method_id](ara::log::LogStream& s) {
                        s << "Method response handling implementation for SOME/IP method ID " << method_id
                        << " is missing. Please re-configure."; },
                        __func__, __LINE__);
      break;
    }
  }
}

void UTC0SI_InProxyXf::OnServiceDown() {
}

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace utc0si_in

