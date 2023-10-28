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
/**        \file  RVDCExe/include/amsr/someip_binding_xf/internal/mcu_data_info/MCU_Data_Info_proxy_xf.h
 *        \brief  SOME/IP binding of service proxy for service 'MCU_Data_Info'
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

#ifndef RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_XF_H_
#define RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_XF_H_

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
#include "amsr/someip_binding_xf/internal/mcu_data_info/MCU_Data_Info_payload_deserializer_factory.h"
#include "amsr/someip_binding_xf/internal/mcu_data_info/MCU_Data_Info_proxy_methods.h"
#include "amsr/someip_binding_xf/internal/ser_deser/deserializer_wrapper.h"
#include "mcu_data_info/MCU_Data_Info_proxy_backend_interface.h"
#include "mcu_data_info/mcu_data_info_proxy.h"
#include "someip-protocol/internal/someip_posix_types.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_mcu_data_info {

// VECTOR NC Metric-OO.WMC.One: MD_SOMEIPBINDING_Metric-OO.WMC.One_methods_per_class
/*!
 * \brief SOME/IP proxy binding of Service 'MCU_Data_Info'.
 * \details Handles serialization and deserialization of all method calls, events, etc.
 * \remark generated
 * \unit SomeIpBinding::SomeIpBindingXf::Communication::ProxyXf
 */
class MCU_Data_InfoProxyXf final :
  public ::mcu_data_info::internal::MCU_Data_InfoProxyBackendInterface {
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
  MCU_Data_InfoProxyXf(::amsr::someip_protocol::internal::ServiceId const service_id,
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
  ~MCU_Data_InfoProxyXf() noexcept override;

  MCU_Data_InfoProxyXf(MCU_Data_InfoProxyXf const&) noexcept = delete;
  MCU_Data_InfoProxyXf(MCU_Data_InfoProxyXf&& other) noexcept = delete;
  MCU_Data_InfoProxyXf& operator=(MCU_Data_InfoProxyXf const&) & = delete;
  MCU_Data_InfoProxyXf& operator=(MCU_Data_InfoProxyXf&&) & noexcept = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'Ids'
   * \return A proxy event object supporting event sample and subscription.
   *         The returned reference shall not be used after this ProxyXf object has been destroyed.
   * \pre -
   * \context App
   * \threadsafe FALSE
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::Ids_Data>& GetEventBackendIds() noexcept override {
    return event_xf_Ids_;
  }  // COV_SOMEIPBINDING_PROXY_XF


  /*!
   * \brief Get the event manager object for the service event 'Mcu_Reset_Info1'
   * \return A proxy event object supporting event sample and subscription.
   *         The returned reference shall not be used after this ProxyXf object has been destroyed.
   * \pre -
   * \context App
   * \threadsafe FALSE
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::Mcu_Reset_Data>& GetEventBackendMcu_Reset_Info1() noexcept override {
    return event_xf_Mcu_Reset_Info1_;
  }  // COV_SOMEIPBINDING_PROXY_XF


  /*!
   * \brief Get the event manager object for the service event 'Mcu_Reset_Info2'
   * \return A proxy event object supporting event sample and subscription.
   *         The returned reference shall not be used after this ProxyXf object has been destroyed.
   * \pre -
   * \context App
   * \threadsafe FALSE
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::Mcu_Reset_Data>& GetEventBackendMcu_Reset_Info2() noexcept override {
    return event_xf_Mcu_Reset_Info2_;
  }  // COV_SOMEIPBINDING_PROXY_XF


  /*!
   * \brief Get the event manager object for the service event 'Mcu_Reset_Info3'
   * \return A proxy event object supporting event sample and subscription.
   *         The returned reference shall not be used after this ProxyXf object has been destroyed.
   * \pre -
   * \context App
   * \threadsafe FALSE
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::Mcu_Reset_Data>& GetEventBackendMcu_Reset_Info3() noexcept override {
    return event_xf_Mcu_Reset_Info3_;
  }  // COV_SOMEIPBINDING_PROXY_XF


  /*!
   * \brief Get the event manager object for the service event 'Mcu_Reset_Info4'
   * \return A proxy event object supporting event sample and subscription.
   *         The returned reference shall not be used after this ProxyXf object has been destroyed.
   * \pre -
   * \context App
   * \threadsafe FALSE
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::Mcu_Reset_Data>& GetEventBackendMcu_Reset_Info4() noexcept override {
    return event_xf_Mcu_Reset_Info4_;
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
      events_MCU_Data_InfoProxySomeIpEventConfigurationIds_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::proxy::Ids::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for proxy event 'Ids'
  // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
  // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
  std::unique_ptr<ser_deser::DeserializerInterface<events::proxy::Ids::EventDesignInfo::SampleType>> deserializer_ptr_Ids_{
    events::proxy::Ids::DeserializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_CLIENT_MANAGER_OBJECT_LIFECYCLE
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::proxy::Ids::MCU_Data_InfoProxySomeIpEventBackendIds event_xf_Ids_{
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      someip_binding_core::internal::SomeIpEventIdentity{
          proxy_identity_.GetServiceId(),
          major_version_,
          proxy_identity_.GetInstanceId(),
          events_MCU_Data_InfoProxySomeIpEventConfigurationIds_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      someip_client_,
      *(deserializer_ptr_Ids_.get()),
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingProxyEventXfInitializer::GetProxyEventXfE2EParametrizationData(
          events_MCU_Data_InfoProxySomeIpEventConfigurationIds_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
      events_MCU_Data_InfoProxySomeIpEventConfigurationIds_event_config_
          // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
          .GetSerialization().value_or(
              // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
              ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
      events_MCU_Data_InfoProxySomeIpEventConfigurationIds_event_config_
           // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
           .GetPduPayloadOffset().value_or(
               // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
               static_cast<std::uint8_t>(0U))};
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info1_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::proxy::Mcu_Reset_Info1::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for proxy event 'Mcu_Reset_Info1'
  // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
  // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
  std::unique_ptr<ser_deser::DeserializerInterface<events::proxy::Mcu_Reset_Info1::EventDesignInfo::SampleType>> deserializer_ptr_Mcu_Reset_Info1_{
    events::proxy::Mcu_Reset_Info1::DeserializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_CLIENT_MANAGER_OBJECT_LIFECYCLE
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::proxy::Mcu_Reset_Info1::MCU_Data_InfoProxySomeIpEventBackendMcu_Reset_Info1 event_xf_Mcu_Reset_Info1_{
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      someip_binding_core::internal::SomeIpEventIdentity{
          proxy_identity_.GetServiceId(),
          major_version_,
          proxy_identity_.GetInstanceId(),
          events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info1_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      someip_client_,
      *(deserializer_ptr_Mcu_Reset_Info1_.get()),
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingProxyEventXfInitializer::GetProxyEventXfE2EParametrizationData(
          events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info1_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info1_event_config_
          // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
          .GetSerialization().value_or(
              // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
              ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info1_event_config_
           // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
           .GetPduPayloadOffset().value_or(
               // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
               static_cast<std::uint8_t>(0U))};
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info2_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::proxy::Mcu_Reset_Info2::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for proxy event 'Mcu_Reset_Info2'
  // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
  // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
  std::unique_ptr<ser_deser::DeserializerInterface<events::proxy::Mcu_Reset_Info2::EventDesignInfo::SampleType>> deserializer_ptr_Mcu_Reset_Info2_{
    events::proxy::Mcu_Reset_Info2::DeserializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_CLIENT_MANAGER_OBJECT_LIFECYCLE
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::proxy::Mcu_Reset_Info2::MCU_Data_InfoProxySomeIpEventBackendMcu_Reset_Info2 event_xf_Mcu_Reset_Info2_{
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      someip_binding_core::internal::SomeIpEventIdentity{
          proxy_identity_.GetServiceId(),
          major_version_,
          proxy_identity_.GetInstanceId(),
          events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info2_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      someip_client_,
      *(deserializer_ptr_Mcu_Reset_Info2_.get()),
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingProxyEventXfInitializer::GetProxyEventXfE2EParametrizationData(
          events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info2_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info2_event_config_
          // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
          .GetSerialization().value_or(
              // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
              ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info2_event_config_
           // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
           .GetPduPayloadOffset().value_or(
               // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
               static_cast<std::uint8_t>(0U))};
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info3_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::proxy::Mcu_Reset_Info3::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for proxy event 'Mcu_Reset_Info3'
  // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
  // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
  std::unique_ptr<ser_deser::DeserializerInterface<events::proxy::Mcu_Reset_Info3::EventDesignInfo::SampleType>> deserializer_ptr_Mcu_Reset_Info3_{
    events::proxy::Mcu_Reset_Info3::DeserializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_CLIENT_MANAGER_OBJECT_LIFECYCLE
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::proxy::Mcu_Reset_Info3::MCU_Data_InfoProxySomeIpEventBackendMcu_Reset_Info3 event_xf_Mcu_Reset_Info3_{
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      someip_binding_core::internal::SomeIpEventIdentity{
          proxy_identity_.GetServiceId(),
          major_version_,
          proxy_identity_.GetInstanceId(),
          events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info3_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      someip_client_,
      *(deserializer_ptr_Mcu_Reset_Info3_.get()),
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingProxyEventXfInitializer::GetProxyEventXfE2EParametrizationData(
          events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info3_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info3_event_config_
          // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
          .GetSerialization().value_or(
              // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
              ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info3_event_config_
           // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
           .GetPduPayloadOffset().value_or(
               // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
               static_cast<std::uint8_t>(0U))};
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info4_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::proxy::Mcu_Reset_Info4::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for proxy event 'Mcu_Reset_Info4'
  // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
  // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
  std::unique_ptr<ser_deser::DeserializerInterface<events::proxy::Mcu_Reset_Info4::EventDesignInfo::SampleType>> deserializer_ptr_Mcu_Reset_Info4_{
    events::proxy::Mcu_Reset_Info4::DeserializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_CLIENT_MANAGER_OBJECT_LIFECYCLE
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::proxy::Mcu_Reset_Info4::MCU_Data_InfoProxySomeIpEventBackendMcu_Reset_Info4 event_xf_Mcu_Reset_Info4_{
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      someip_binding_core::internal::SomeIpEventIdentity{
          proxy_identity_.GetServiceId(),
          major_version_,
          proxy_identity_.GetInstanceId(),
          events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info4_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      someip_client_,
      *(deserializer_ptr_Mcu_Reset_Info4_.get()),
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingProxyEventXfInitializer::GetProxyEventXfE2EParametrizationData(
          events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info4_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info4_event_config_
          // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
          .GetSerialization().value_or(
              // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
              ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
      events_MCU_Data_InfoProxySomeIpEventConfigurationMcu_Reset_Info4_event_config_
           // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
           .GetPduPayloadOffset().value_or(
               // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
               static_cast<std::uint8_t>(0U))};

  // ---- Field notifiers ------------------------------------------------------------------------------------------

  // ---- Field setters / getters  ---------------------------------------------------------------------------------
};

}  // namespace gen_mcu_data_info
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

// COV_JUSTIFICATION_BEGIN
// \ID COV_SOMEIPBINDING_PROXY_XF
//   \ACCEPT  XX
//   \REASON  The justified method just forward the calls to another class
//            that is fully tested.
// COV_JUSTIFICATION_END

#endif  // RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_XF_H_

