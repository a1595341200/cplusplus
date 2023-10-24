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
/**        \file  ObjectFusionModelExe/include/amsr/someip_binding_xf/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_xf.h
 *        \brief  SOME/IP binding of service skeleton for service 'ObjectFusionModelSI_Out'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_XF_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_XF_H_

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
#include "amsr/someip_binding_xf/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_payload_serializer_factory.h"
#include "amsr/someip_binding_xf/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_methods.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_backend_interface.h"
#include "someip-protocol/internal/someip_posix_types.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_objectfusionmodelsi_out {

// VECTOR NC Metric-OO.WMC.One: MD_SOMEIPBINDING_Metric-OO.WMC.One_methods_per_class
/*!
 * \brief SOME/IP skeleton binding of Service 'ObjectFusionModelSI_Out'.
 * \details Handles serialization and deserialization of all method calls, events, etc.
 * \remark generated
 */
class ObjectFusionModelSI_OutSkeletonXf final :
    public ::objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutSkeletonImplInterface,
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
   * \brief Constructor of ObjectFusionModelSI_OutSkeletonXf.
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
  ObjectFusionModelSI_OutSkeletonXf(::amsr::someip_binding_core::internal::ProvidedServiceInstanceId const provided_service_instance_id,
                                              ::amsr::someip_binding_core::internal::ServerInterface& server,
                                              ::objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutSkeletonBackendInterface& skeleton,
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
  ~ObjectFusionModelSI_OutSkeletonXf() noexcept override  = default;  // COV_SOMEIPBINDING_SKELETON_XF

  ObjectFusionModelSI_OutSkeletonXf(ObjectFusionModelSI_OutSkeletonXf const&) noexcept = delete;
  ObjectFusionModelSI_OutSkeletonXf(ObjectFusionModelSI_OutSkeletonXf&& other) noexcept = delete;
  ObjectFusionModelSI_OutSkeletonXf& operator=(ObjectFusionModelSI_OutSkeletonXf const&) & = delete;
  ObjectFusionModelSI_OutSkeletonXf& operator=(ObjectFusionModelSI_OutSkeletonXf&&) & noexcept = delete;

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
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_Bus_FusedTargets01'.
   * \details Event sample type: ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8.
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
  events::skeleton::OFM_Bus_FusedTargets01::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets01* GetEventManagerOFM_Bus_FusedTargets01() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_Bus_FusedTargets02'.
   * \details Event sample type: ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8.
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
  events::skeleton::OFM_Bus_FusedTargets02::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets02* GetEventManagerOFM_Bus_FusedTargets02() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_Bus_FusedTargets03'.
   * \details Event sample type: ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8.
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
  events::skeleton::OFM_Bus_FusedTargets03::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets03* GetEventManagerOFM_Bus_FusedTargets03() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_Bus_FusedTargets04'.
   * \details Event sample type: ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8.
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
  events::skeleton::OFM_Bus_FusedTargets04::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets04* GetEventManagerOFM_Bus_FusedTargets04() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_St_SOCFusedSts'.
   * \details Event sample type: ::uint16IDT::uint16IDT.
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
  events::skeleton::OFM_St_SOCFusedSts::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_SOCFusedSts* GetEventManagerOFM_St_SOCFusedSts() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_Bus_FourDRadarStatus'.
   * \details Event sample type: ::FourDRadarStatusIDT::FourDRadarStatusIDT.
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
  events::skeleton::OFM_Bus_FourDRadarStatus::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FourDRadarStatus* GetEventManagerOFM_Bus_FourDRadarStatus() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_Bus_LaneInfo'.
   * \details Event sample type: ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT.
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
  events::skeleton::OFM_Bus_LaneInfo::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_LaneInfo* GetEventManagerOFM_Bus_LaneInfo() noexcept override;

  // ---- Fields ---------------------------------------------------------------------------------------------------

 private:
  // SOME/IP instance ID offered by this skeleton
  ::amsr::someip_binding_core::internal::ProvidedServiceInstanceId provided_service_instance_id_;

  // Related SOME/IP binding
  ::amsr::someip_binding_core::internal::ServerInterface& server_;

  /*!
   * \brief Skeleton backend interface.
   */
  ::objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutSkeletonBackendInterface& skeleton_;

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
      events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets01_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::skeleton::OFM_Bus_FusedTargets01::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for skeleton protected event 'OFM_Bus_FusedTargets01'
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  std::unique_ptr<ser_deser::SerializerInterface<events::skeleton::OFM_Bus_FusedTargets01::EventDesignInfo::SampleType>> event_xf_serializer_ptr_OFM_Bus_FusedTargets01_{
    events::skeleton::OFM_Bus_FusedTargets01::SerializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::skeleton::OFM_Bus_FusedTargets01::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets01 event_manager_OFM_Bus_FusedTargets01_{
      ::amsr::someip_binding_core::internal::SomeIpEventIdentity{
          provided_service_instance_id_.GetServiceId(),
          provided_service_instance_id_.GetMajorVersion(),
          provided_service_instance_id_.GetInstanceId(),
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets01_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      server_,
      *(event_xf_serializer_ptr_OFM_Bus_FusedTargets01_.get()),
      // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
      // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingSkeletonEventXfInitializer::GetSkeletonEventXfE2EParametrizationData(
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets01_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
     // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
     // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
     // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets01_event_config_.GetDisableSessionHandling().value_or(false),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets01_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         .GetSerialization().value_or(
             ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets01_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
	     .GetPduPayloadOffset().value_or(static_cast<std::uint8_t>(0U)),allocator_factory_, process_polling_, is_polling_mode_};
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets02_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::skeleton::OFM_Bus_FusedTargets02::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for skeleton protected event 'OFM_Bus_FusedTargets02'
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  std::unique_ptr<ser_deser::SerializerInterface<events::skeleton::OFM_Bus_FusedTargets02::EventDesignInfo::SampleType>> event_xf_serializer_ptr_OFM_Bus_FusedTargets02_{
    events::skeleton::OFM_Bus_FusedTargets02::SerializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::skeleton::OFM_Bus_FusedTargets02::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets02 event_manager_OFM_Bus_FusedTargets02_{
      ::amsr::someip_binding_core::internal::SomeIpEventIdentity{
          provided_service_instance_id_.GetServiceId(),
          provided_service_instance_id_.GetMajorVersion(),
          provided_service_instance_id_.GetInstanceId(),
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets02_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      server_,
      *(event_xf_serializer_ptr_OFM_Bus_FusedTargets02_.get()),
      // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
      // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingSkeletonEventXfInitializer::GetSkeletonEventXfE2EParametrizationData(
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets02_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
     // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
     // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
     // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets02_event_config_.GetDisableSessionHandling().value_or(false),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets02_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         .GetSerialization().value_or(
             ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets02_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
	     .GetPduPayloadOffset().value_or(static_cast<std::uint8_t>(0U)),allocator_factory_, process_polling_, is_polling_mode_};
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets03_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::skeleton::OFM_Bus_FusedTargets03::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for skeleton protected event 'OFM_Bus_FusedTargets03'
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  std::unique_ptr<ser_deser::SerializerInterface<events::skeleton::OFM_Bus_FusedTargets03::EventDesignInfo::SampleType>> event_xf_serializer_ptr_OFM_Bus_FusedTargets03_{
    events::skeleton::OFM_Bus_FusedTargets03::SerializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::skeleton::OFM_Bus_FusedTargets03::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets03 event_manager_OFM_Bus_FusedTargets03_{
      ::amsr::someip_binding_core::internal::SomeIpEventIdentity{
          provided_service_instance_id_.GetServiceId(),
          provided_service_instance_id_.GetMajorVersion(),
          provided_service_instance_id_.GetInstanceId(),
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets03_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      server_,
      *(event_xf_serializer_ptr_OFM_Bus_FusedTargets03_.get()),
      // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
      // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingSkeletonEventXfInitializer::GetSkeletonEventXfE2EParametrizationData(
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets03_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
     // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
     // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
     // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets03_event_config_.GetDisableSessionHandling().value_or(false),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets03_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         .GetSerialization().value_or(
             ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets03_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
	     .GetPduPayloadOffset().value_or(static_cast<std::uint8_t>(0U)),allocator_factory_, process_polling_, is_polling_mode_};
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets04_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::skeleton::OFM_Bus_FusedTargets04::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for skeleton protected event 'OFM_Bus_FusedTargets04'
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  std::unique_ptr<ser_deser::SerializerInterface<events::skeleton::OFM_Bus_FusedTargets04::EventDesignInfo::SampleType>> event_xf_serializer_ptr_OFM_Bus_FusedTargets04_{
    events::skeleton::OFM_Bus_FusedTargets04::SerializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::skeleton::OFM_Bus_FusedTargets04::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets04 event_manager_OFM_Bus_FusedTargets04_{
      ::amsr::someip_binding_core::internal::SomeIpEventIdentity{
          provided_service_instance_id_.GetServiceId(),
          provided_service_instance_id_.GetMajorVersion(),
          provided_service_instance_id_.GetInstanceId(),
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets04_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      server_,
      *(event_xf_serializer_ptr_OFM_Bus_FusedTargets04_.get()),
      // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
      // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingSkeletonEventXfInitializer::GetSkeletonEventXfE2EParametrizationData(
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets04_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
     // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
     // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
     // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets04_event_config_.GetDisableSessionHandling().value_or(false),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets04_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         .GetSerialization().value_or(
             ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets04_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
	     .GetPduPayloadOffset().value_or(static_cast<std::uint8_t>(0U)),allocator_factory_, process_polling_, is_polling_mode_};
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_SOCFusedSts_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::skeleton::OFM_St_SOCFusedSts::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for skeleton protected event 'OFM_St_SOCFusedSts'
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  std::unique_ptr<ser_deser::SerializerInterface<events::skeleton::OFM_St_SOCFusedSts::EventDesignInfo::SampleType>> event_xf_serializer_ptr_OFM_St_SOCFusedSts_{
    events::skeleton::OFM_St_SOCFusedSts::SerializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::skeleton::OFM_St_SOCFusedSts::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_SOCFusedSts event_manager_OFM_St_SOCFusedSts_{
      ::amsr::someip_binding_core::internal::SomeIpEventIdentity{
          provided_service_instance_id_.GetServiceId(),
          provided_service_instance_id_.GetMajorVersion(),
          provided_service_instance_id_.GetInstanceId(),
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_SOCFusedSts_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      server_,
      *(event_xf_serializer_ptr_OFM_St_SOCFusedSts_.get()),
      // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
      // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingSkeletonEventXfInitializer::GetSkeletonEventXfE2EParametrizationData(
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_SOCFusedSts_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
     // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
     // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
     // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_SOCFusedSts_event_config_.GetDisableSessionHandling().value_or(false),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_SOCFusedSts_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         .GetSerialization().value_or(
             ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_SOCFusedSts_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
	     .GetPduPayloadOffset().value_or(static_cast<std::uint8_t>(0U)),allocator_factory_, process_polling_, is_polling_mode_};
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FourDRadarStatus_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::skeleton::OFM_Bus_FourDRadarStatus::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for skeleton protected event 'OFM_Bus_FourDRadarStatus'
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  std::unique_ptr<ser_deser::SerializerInterface<events::skeleton::OFM_Bus_FourDRadarStatus::EventDesignInfo::SampleType>> event_xf_serializer_ptr_OFM_Bus_FourDRadarStatus_{
    events::skeleton::OFM_Bus_FourDRadarStatus::SerializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::skeleton::OFM_Bus_FourDRadarStatus::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FourDRadarStatus event_manager_OFM_Bus_FourDRadarStatus_{
      ::amsr::someip_binding_core::internal::SomeIpEventIdentity{
          provided_service_instance_id_.GetServiceId(),
          provided_service_instance_id_.GetMajorVersion(),
          provided_service_instance_id_.GetInstanceId(),
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FourDRadarStatus_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      server_,
      *(event_xf_serializer_ptr_OFM_Bus_FourDRadarStatus_.get()),
      // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
      // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingSkeletonEventXfInitializer::GetSkeletonEventXfE2EParametrizationData(
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FourDRadarStatus_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
     // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
     // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
     // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FourDRadarStatus_event_config_.GetDisableSessionHandling().value_or(false),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FourDRadarStatus_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         .GetSerialization().value_or(
             ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FourDRadarStatus_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
	     .GetPduPayloadOffset().value_or(static_cast<std::uint8_t>(0U)),allocator_factory_, process_polling_, is_polling_mode_};
  ::amsr::someip_binding::internal::configuration::EventConfig const&
      // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
      // VCA_SOMEIPBINDING_MISS_OF_INFORMATION_OF_POINTER
      events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_LaneInfo_event_config_{
          // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
          config_wrapper_.GetEventConfig(
              // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
              ::amsr::someip_binding::internal::configuration::Shortname{events::skeleton::OFM_Bus_LaneInfo::EventDesignInfo::kEventName.c_str()})};

  // Event Xf for skeleton protected event 'OFM_Bus_LaneInfo'
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  std::unique_ptr<ser_deser::SerializerInterface<events::skeleton::OFM_Bus_LaneInfo::EventDesignInfo::SampleType>> event_xf_serializer_ptr_OFM_Bus_LaneInfo_{
    events::skeleton::OFM_Bus_LaneInfo::SerializerFactory::Create()
  };
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  events::skeleton::OFM_Bus_LaneInfo::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_LaneInfo event_manager_OFM_Bus_LaneInfo_{
      ::amsr::someip_binding_core::internal::SomeIpEventIdentity{
          provided_service_instance_id_.GetServiceId(),
          provided_service_instance_id_.GetMajorVersion(),
          provided_service_instance_id_.GetInstanceId(),
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_LaneInfo_event_config_
              // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
              .GetEventId()},
      server_,
      *(event_xf_serializer_ptr_OFM_Bus_LaneInfo_.get()),
      // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
      // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
      // VCA_SOMEIPBINDING_PASSING_REFERENCE
      ::amsr::someip_binding::internal::SomeIpBindingSkeletonEventXfInitializer::GetSkeletonEventXfE2EParametrizationData(
          events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_LaneInfo_event_config_,
          e2e_props_map_,
          e2e_profile_config_map_),
     // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
     // VCA_SPC_15_SOMEIPBINDING_OTHER_COMPONENT_TYPE_FUNCTION
     // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_LaneInfo_event_config_.GetDisableSessionHandling().value_or(false),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_LaneInfo_event_config_
         // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
         .GetSerialization().value_or(
             ::amsr::someip_binding::internal::configuration::EventConfig::Serialization::someip),
     events_ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_LaneInfo_event_config_
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

}  // namespace gen_objectfusionmodelsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

// COV_JUSTIFICATION_BEGIN
// \ID COV_SOMEIPBINDING_SKELETON_XF
//   \ACCEPT  XX
//   \REASON  The justified method just forward the calls to another class
//            that is fully tested and has been fully reviewed.
// COV_JUSTIFICATION_END

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_XF_H_

