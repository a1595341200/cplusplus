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
/**        \file  PerceptionSideExe/include/amsr/someip_binding_xf/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_xf.h
 *        \brief  SOME/IP binding of service proxy for service 'ToSOCA_InfomationSI'
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_XF_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_XF_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <map>
#include <memory>
#include "amsr/socal/internal/methods/proxy_fire_and_forget_method_backend_interface.h"
#include "amsr/someip_binding/internal/configuration/config_types.h"
#include "amsr/someip_binding/internal/configuration/config_wrapper_interface.h"
#include "amsr/someip_binding/internal/configuration/event_config.h"
#include "amsr/someip_binding/internal/configuration/notifier_config.h"
#include "amsr/someip_binding/internal/configuration/service_interface_config.h"
#include "amsr/someip_binding/internal/configuration/someipbinding_config.h"
#include "amsr/someip_binding/internal/someipbinding_proxy_event_xf_initializer.h"
#include "amsr/someip_binding_core/internal/binding_client.h"
#include "amsr/someip_binding_core/internal/someip_client.h"
#include "amsr/someip_binding_core/internal/types.h"
#include "amsr/someip_binding_xf/internal/e2e/client_side_transformer.h"
#include "amsr/someip_binding_xf/internal/ser_deser/deserializer_wrapper.h"
#include "amsr/someip_binding_xf/internal/tosoca_infomationsi/ToSOCA_InfomationSI_payload_deserializer_factory.h"
#include "amsr/someip_binding_xf/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_methods.h"
#include "someip-protocol/internal/someip_posix_types.h"
#include "tosoca_infomationsi/ToSOCA_InfomationSI_proxy_backend_interface.h"
#include "tosoca_infomationsi/tosoca_infomationsi_proxy.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_tosoca_infomationsi {

// VECTOR NC Metric-OO.WMC.One: MD_SOMEIPBINDING_Metric-OO.WMC.One_methods_per_class
/*!
 * \brief SOME/IP proxy binding of Service 'ToSOCA_InfomationSI'.
 * \details Handles serialization and deserialization of all method calls, events, etc.
 * \remark generated
 * \unit SomeIpBinding::SomeIpBindingXf::Communication::ProxyXf
 */
class ToSOCA_InfomationSIProxyXf final :
  public ::tosoca_infomationsi::internal::ToSOCA_InfomationSIProxyBackendInterface {
 public:
  /*!
   * \brief Map used to contain events E2E protection Props.
   */
  using E2EPropsMap =
      std::map<::amsr::someip_protocol::internal::EventId,
              std::reference_wrapper<::amsr::someip_binding::internal::configuration::E2EPropsConfig const>>;

  /*!
   * \brief Constructor.
   * \param[in] service_id               SOME/IP service identifier to be used.
   * \param[in] major_version            SOME/IP major version to be used.
   * \param[in] instance_id              SOME/IP instance identifier to be used.
   * \param[in] e2e_props_map            E2E Event properties for all E2E Events (can be empty if no E2E events are configured).
   * \param[in] config_wrapper           Reference to config wrapper.
   * \param[in] e2e_profile_config_map   Reference to the E2EProfileConfig map.
   * \param[in] someip_client            The SomeIpClient.
   * \pre -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  ToSOCA_InfomationSIProxyXf(::amsr::someip_protocol::internal::ServiceId const service_id,
                                           ::amsr::someip_protocol::internal::MajorVersion const major_version,
                                           ::amsr::someip_protocol::internal::InstanceId const instance_id,
                                           E2EPropsMap const& e2e_props_map,
                                           ::amsr::someip_binding::internal::configuration::ConfigWrapperInterface const& config_wrapper,
                                           ::amsr::someip_binding::internal::configuration::SomeIpBindingConfig::E2EProfileMap const&
                                           e2e_profile_config_map, ::amsr::someip_binding_core::internal::SomeIpClient&& someip_client);

  /*!
   * \brief Destructor.
   * \pre -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A15.4.2: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_GoogleTest
  // VECTOR NC AutosarC++17_10-A15.5.1: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_GoogleTest
  // VECTOR NC AutosarC++17_10-A15.5.2: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_GoogleTest
  // VECTOR NC AutosarC++17_10-A15.5.3: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_GoogleTest
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ~ToSOCA_InfomationSIProxyXf() noexcept override;

  ToSOCA_InfomationSIProxyXf(ToSOCA_InfomationSIProxyXf const&) noexcept = delete;
  ToSOCA_InfomationSIProxyXf(ToSOCA_InfomationSIProxyXf&& other) noexcept = delete;
  ToSOCA_InfomationSIProxyXf& operator=(ToSOCA_InfomationSIProxyXf const&) & = delete;
  ToSOCA_InfomationSIProxyXf& operator=(ToSOCA_InfomationSIProxyXf&&) & noexcept = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_ToSOCA_FunctionInfo'
   * \return A proxy event object supporting event sample and subscription.
   *         The returned reference shall not be used after this ProxyXf object has been destroyed.
   * \pre -
   * \context App
   * \threadsafe FALSE
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::ToSOCA_FunctionInfo1VCCIDT::ToSOCA_FunctionInfo1VCCIDT>& GetEventBackendOSM2_Bus_ToSOCA_FunctionInfo() noexcept override {
    return event_xf_OSM2_Bus_ToSOCA_FunctionInfo_;
  }  // COV_SOMEIPBINDING_PROXY_XF


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_ToSOCA_COMInfo'
   * \return A proxy event object supporting event sample and subscription.
   *         The returned reference shall not be used after this ProxyXf object has been destroyed.
   * \pre -
   * \context App
   * \threadsafe FALSE
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::ToSOCA_COMInfo1VCCIDT::ToSOCA_COMInfo1VCCIDT>& GetEventBackendOSM2_Bus_ToSOCA_COMInfo() noexcept override {
    return event_xf_OSM2_Bus_ToSOCA_COMInfo_;
  }  // COV_SOMEIPBINDING_PROXY_XF


  // ---- Fields ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the connection state between proxy and skeleton.
   * \return amsr::socal::SkeletonConnectionState.
   * \pre -
   * \context App
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::SkeletonConnectionState ReadSkeletonConnectionState() noexcept override {
      return ::amsr::socal::SkeletonConnectionState::kConnected;
  }  // COV_SOMEIPBINDING_PROXY_XF
 private:
  /*!
   * \brief SOME/IP major version used by this binding.
   */
  ::amsr::someip_protocol::internal::MajorVersion const major_version_;

  /*!
   * \brief SOME/IP related proxy identity.
   */
  ::amsr::someip_binding_core::internal::ProxyBindingIdentity const proxy_identity_;

  /*!
   * \brief Client object used for the real SOME/IP communication (currently only used for reception).
   */
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  ::amsr::someip_binding_core::internal::SomeIpClient someip_client_;
  /*!
   * \brief Map containing E2E Props for all E2E Events.
   *        If this Proxy does not require any E2E Events, the map will be empty.
   */
  E2EPropsMap const& e2e_props_map_;

  /*!
   * \brief Reference to the config proxy wrapper.
   */
  ::amsr::someip_binding::internal::configuration::ConfigWrapperInterface const& config_wrapper_;

  /*!
   * \brief Reference to the E2EProfileConfig map.
   */
  ::amsr::someip_binding::internal::configuration::SomeIpBindingConfig::E2EProfileMap const& e2e_profile_config_map_;

  // ---- Methods ------------------------------------------------------------------------------------------

  // ---- Event manager --------------------------------------------------------------------------------------------
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_FunctionInfo_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::proxy::OSM2_Bus_ToSOCA_FunctionInfo::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for proxy event 'OSM2_Bus_ToSOCA_FunctionInfo'
  // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
  // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
  std::unique_ptr<ser_deser::DeserializerInterface<events::proxy::OSM2_Bus_ToSOCA_FunctionInfo::EventDesignInfo::SampleType>> deserializer_ptr_OSM2_Bus_ToSOCA_FunctionInfo_{
    events::proxy::OSM2_Bus_ToSOCA_FunctionInfo::DeserializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_CLIENT_MANAGER_OBJECT_LIFECYCLE
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::proxy::OSM2_Bus_ToSOCA_FunctionInfo::ToSOCA_InfomationSIProxySomeIpEventBackendOSM2_Bus_ToSOCA_FunctionInfo event_xf_OSM2_Bus_ToSOCA_FunctionInfo_{
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      someip_binding_core::internal::SomeIpEventIdentity{
          proxy_identity_.GetServiceId(),
          major_version_,
          proxy_identity_.GetInstanceId(),
          events_ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_FunctionInfo_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      someip_client_,
      *(deserializer_ptr_OSM2_Bus_ToSOCA_FunctionInfo_.get()),
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingProxyEventXfInitializer::GetProxyEventXfE2EParametrizationData(
          events_ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_FunctionInfo_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
      events_ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_FunctionInfo_event_config_
          // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
          .GetSerialization().value_or(
              // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
              ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
      events_ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_FunctionInfo_event_config_
           // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
           .GetPduPayloadOffset().value_or(
               // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
               static_cast<std::uint8_t>(0U))};
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_COMInfo_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::proxy::OSM2_Bus_ToSOCA_COMInfo::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for proxy event 'OSM2_Bus_ToSOCA_COMInfo'
  // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
  // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
  std::unique_ptr<ser_deser::DeserializerInterface<events::proxy::OSM2_Bus_ToSOCA_COMInfo::EventDesignInfo::SampleType>> deserializer_ptr_OSM2_Bus_ToSOCA_COMInfo_{
    events::proxy::OSM2_Bus_ToSOCA_COMInfo::DeserializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_CLIENT_MANAGER_OBJECT_LIFECYCLE
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::proxy::OSM2_Bus_ToSOCA_COMInfo::ToSOCA_InfomationSIProxySomeIpEventBackendOSM2_Bus_ToSOCA_COMInfo event_xf_OSM2_Bus_ToSOCA_COMInfo_{
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      someip_binding_core::internal::SomeIpEventIdentity{
          proxy_identity_.GetServiceId(),
          major_version_,
          proxy_identity_.GetInstanceId(),
          events_ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_COMInfo_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      someip_client_,
      *(deserializer_ptr_OSM2_Bus_ToSOCA_COMInfo_.get()),
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingProxyEventXfInitializer::GetProxyEventXfE2EParametrizationData(
          events_ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_COMInfo_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
      events_ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_COMInfo_event_config_
          // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
          .GetSerialization().value_or(
              // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
              ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
      events_ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_COMInfo_event_config_
           // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
           .GetPduPayloadOffset().value_or(
               // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
               static_cast<std::uint8_t>(0U))};

  // ---- Field notifiers ------------------------------------------------------------------------------------------

  // ---- Field setters / getters  ---------------------------------------------------------------------------------
};

}  // namespace gen_tosoca_infomationsi
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

// COV_JUSTIFICATION_BEGIN
// \ID COV_SOMEIPBINDING_PROXY_XF
//   \ACCEPT  XX
//   \REASON  The justified method just forward the calls to another class
//            that is fully tested.
// COV_JUSTIFICATION_END

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_XF_H_

