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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_binding_xf/internal/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_xf.h
 *        \brief  SOME/IP binding of service skeleton for service 'TrafficLightAttentionSI_Out'
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_XF_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_XF_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <map>
#include "amsr/e2e/profiles/end2end_event_protection_props.h"
#include "amsr/someip_binding/internal/configuration/config_types.h"
#include "amsr/someip_binding/internal/configuration/config_wrapper_interface.h"
#include "amsr/someip_binding/internal/configuration/event_config.h"
#include "amsr/someip_binding/internal/configuration/notifier_config.h"
#include "amsr/someip_binding/internal/configuration/service_interface_config.h"
#include "amsr/someip_binding/internal/configuration/someipbinding_config.h"
#include "amsr/someip_binding/internal/someipbinding_skeleton_event_xf_initializer.h"
#include "amsr/someip_binding_core/internal/server_interface.h"
#include "amsr/someip_binding_core/internal/skeleton_method_request_handler_interface.h"
#include "amsr/someip_binding_xf/internal/events/memory_buffer_allocator_factory.h"
#include "amsr/someip_binding_xf/internal/methods/skeleton_method_handler_interface.h"
#include "amsr/someip_binding_xf/internal/methods/skeleton_method_request_router.h"
#include "amsr/someip_binding_xf/internal/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_payload_serializer_factory.h"
#include "amsr/someip_binding_xf/internal/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_someip_methods.h"
#include "someip-protocol/internal/someip_posix_types.h"
#include "trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_backend_interface.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_trafficlightattentionsi_out {

// VECTOR NC Metric-OO.WMC.One: MD_SOMEIPBINDING_Metric-OO.WMC.One_methods_per_class
/*!
 * \brief SOME/IP skeleton binding of Service 'TrafficLightAttentionSI_Out'.
 * \details Handles serialization and deserialization of all method calls, events, etc.
 * \remark generated
 */
class TrafficLightAttentionSI_OutSkeletonXf final :
    public ::trafficlightattentionsi_out::internal::TrafficLightAttentionSI_OutSkeletonImplInterface,
    public ::amsr::someip_binding_core::internal::SkeletonMethodRequestHandlerInterface {
 public:
  /*!
   * \brief Map used to contain events E2E protection Props.
   */
  using E2EPropsMap =
      std::map<::amsr::someip_protocol::internal::EventId,
              std::reference_wrapper<::amsr::someip_binding::internal::configuration::E2EPropsConfig const>>;

/*!
   * \brief Map used to contain method handlers.
   */
  using MethodHandlersMap = std::map<::amsr::someip_protocol::internal::MethodId, ::amsr::someip_binding_xf::internal::methods::SkeletonMethodHandlerInterface&>;

  /*!
   * \brief Constructor of TrafficLightAttentionSI_OutSkeletonXf.
   * \details Constructed when the service is offered.
   *
   * \param[in] provided_service_instance_id     SOME/IP provided service instance ID offered by this skeleton.
   * \param[in] server                           Reference to the related SOME/IP transport binding server.
   * \param[in] skeleton                         Reference to the related SkeletonBackendInterface.
   * \param[in] e2e_props_map                    E2E Event properties for all E2E Events (can be empty if no E2E events are configured).
   * \param[in] config_wrapper                   Reference to config wrapper.
   * \param[in] e2e_profile_config_map           Reference to the E2EProfileConfig map.
   * \param[in] process_polling                  Poll function, used to trigger the reactor to receive responses.
   * \param[in] is_polling_mode                  true if runtime polling mode is used, false otherwise.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  TrafficLightAttentionSI_OutSkeletonXf(::amsr::someip_binding_core::internal::ProvidedServiceInstanceId const provided_service_instance_id,
                                              ::amsr::someip_binding_core::internal::ServerInterface& server,
                                              ::trafficlightattentionsi_out::internal::TrafficLightAttentionSI_OutSkeletonBackendInterface& skeleton,
                                              E2EPropsMap const& e2e_props_map,
                                              ::amsr::someip_binding::internal::configuration::ConfigWrapperInterface const& config_wrapper,
                                              ::amsr::someip_binding::internal::configuration::SomeIpBindingConfig::E2EProfileMap const&
                                               e2e_profile_config_map, std::function<void()> process_polling, bool const is_polling_mode);


  /*!
   * \brief Default destructor must de-register the implementation from the SomeIpBinding.
   * \details Destroyed when the service is stopped.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A15.5.1: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_GoogleTest
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  // VCA_SLC_23_SOMEIPBINDING_DEFAULT_DTOR_MOLE_1298
  // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_DESTRUCTOR
  ~TrafficLightAttentionSI_OutSkeletonXf() noexcept override  = default;  // COV_SOMEIPBINDING_SKELETON_XF

  TrafficLightAttentionSI_OutSkeletonXf(TrafficLightAttentionSI_OutSkeletonXf const&) noexcept = delete;
  TrafficLightAttentionSI_OutSkeletonXf(TrafficLightAttentionSI_OutSkeletonXf&& other) noexcept = delete;
  TrafficLightAttentionSI_OutSkeletonXf& operator=(TrafficLightAttentionSI_OutSkeletonXf const&) & = delete;
  TrafficLightAttentionSI_OutSkeletonXf& operator=(TrafficLightAttentionSI_OutSkeletonXf&&) & noexcept = delete;

  /*!
   * \brief Forward method requests.
   *
   * \param[in] someip_message_header Deserialized SOME/IP message header.
   * \param[in] someip_message Serialized SOME/IP Method Request [SOME/IP header + Payload]
   * \return True if the corresponding method ID is registered in method_handlers_. False otherwise.
   * \pre         -
   * \context     Reactor
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \trace SPEC-10144401
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  bool HandleMethodRequest(::amsr::someip_protocol::internal::SomeIpMessageHeader const& someip_message_header,
      ::amsr::someip_protocol::internal::SomeIpMessage&& someip_message) noexcept override;

  // ---- Events --------------------------------------------------------------------------------------------------- */

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'TLA_Bus_HMIDataTrfcLi'.
   * \details Event sample type: ::HMIDataTrfcLi1VccIDT::HMIDataTrfcLi1VccIDT.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *         The returned pointer shall not be used after this SkeletonXf object has been destroyed.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  events::skeleton::TLA_Bus_HMIDataTrfcLi::TrafficLightAttentionSI_OutSkeletonSomeIpEventManagerTLA_Bus_HMIDataTrfcLi* GetEventManagerTLA_Bus_HMIDataTrfcLi() noexcept override;

  // ---- Fields ---------------------------------------------------------------------------------------------------

 private:
  // SOME/IP instance ID offered by this skeleton
  ::amsr::someip_binding_core::internal::ProvidedServiceInstanceId provided_service_instance_id_;

  // Related SOME/IP binding
  ::amsr::someip_binding_core::internal::ServerInterface& server_;

  /*!
   * \brief Skeleton backend interface.
   */
  ::trafficlightattentionsi_out::internal::TrafficLightAttentionSI_OutSkeletonBackendInterface& skeleton_;

  // Factory for the memory buffer allocators.
  ::amsr::someip_binding_xf::internal::events::MemoryBufferAllocatorFactory allocator_factory_{};

  /*!
   * \brief Map containing E2E Props for all E2E Events.
   *        If this Skeleton does not provide any E2E Events, the map will be empty.
   */
  E2EPropsMap const e2e_props_map_;

  /*!
   * \brief Reference to the config skeleton wrapper.
   */
  ::amsr::someip_binding::internal::configuration::ConfigWrapperInterface const& config_wrapper_;

  /*!
   * \brief Reference to the E2EProfileConfig map.
   */
  ::amsr::someip_binding::internal::configuration::SomeIpBindingConfig::E2EProfileMap const& e2e_profile_config_map_;

 /*!
   * \brief Poll function.
   */
  std::function<void()> process_polling_;
  
  /*!
   * \brief Flag for check polling mode.
   */
  bool const is_polling_mode_;
  
  // ---- Methods ------------------------------------------------------------------------------------------

// ---- Event manager --------------------------------------------------------------------------------------------

  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_TrafficLightAttentionSI_OutSkeletonSomeIpEventConfigurationTLA_Bus_HMIDataTrfcLi_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::skeleton::TLA_Bus_HMIDataTrfcLi::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for skeleton protected event 'TLA_Bus_HMIDataTrfcLi'
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  std::unique_ptr<ser_deser::SerializerInterface<events::skeleton::TLA_Bus_HMIDataTrfcLi::EventDesignInfo::SampleType>> event_xf_serializer_ptr_TLA_Bus_HMIDataTrfcLi_{
    events::skeleton::TLA_Bus_HMIDataTrfcLi::SerializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::skeleton::TLA_Bus_HMIDataTrfcLi::TrafficLightAttentionSI_OutSkeletonSomeIpEventManagerTLA_Bus_HMIDataTrfcLi event_manager_TLA_Bus_HMIDataTrfcLi_{
      ::amsr::someip_binding_core::internal::SomeIpEventIdentity{
          provided_service_instance_id_.GetServiceId(),
          provided_service_instance_id_.GetMajorVersion(),
          provided_service_instance_id_.GetInstanceId(),
          events_TrafficLightAttentionSI_OutSkeletonSomeIpEventConfigurationTLA_Bus_HMIDataTrfcLi_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      server_,
      *(event_xf_serializer_ptr_TLA_Bus_HMIDataTrfcLi_.get()),
      // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
      // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingSkeletonEventXfInitializer::GetSkeletonEventXfE2EParametrizationData(
          events_TrafficLightAttentionSI_OutSkeletonSomeIpEventConfigurationTLA_Bus_HMIDataTrfcLi_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
     // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
     // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
     // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
     events_TrafficLightAttentionSI_OutSkeletonSomeIpEventConfigurationTLA_Bus_HMIDataTrfcLi_event_config_.GetDisableSessionHandling().value_or(false),
     events_TrafficLightAttentionSI_OutSkeletonSomeIpEventConfigurationTLA_Bus_HMIDataTrfcLi_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         .GetSerialization().value_or(
             ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
     events_TrafficLightAttentionSI_OutSkeletonSomeIpEventConfigurationTLA_Bus_HMIDataTrfcLi_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
	     .GetPduPayloadOffset().value_or(static_cast<std::uint8_t>(0U)),allocator_factory_, process_polling_, is_polling_mode_};

  // ---- Field manager --------------------------------------------------------------------------------------------
  // ---- Field notifiers ------------------------------------------------------------------------------------------


  // ---- Field setters / getters  ---------------------------------------------------------------------------------

  /*!
   * \brief A map which includes the methods handlers associated to the corresponding method ID.
   */
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  MethodHandlersMap method_handlers_ {
      };

  /*!
   * \brief Object to route method requests to the exact MethodXf.
   */
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  ::amsr::someip_binding_xf::internal::methods::SkeletonMethodRequestRouter method_request_router_{method_handlers_};

};

}  // namespace gen_trafficlightattentionsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

// COV_JUSTIFICATION_BEGIN
// \ID COV_SOMEIPBINDING_SKELETON_XF
//   \ACCEPT  XX
//   \REASON  The justified method just forward the calls to another class
//            that is fully tested and has been fully reviewed.
// COV_JUSTIFICATION_END

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_XF_H_

