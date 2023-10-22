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
/**        \file  ObjectFusionModelExe/include/amsr/someip_binding_transformation_layer/internal/localizationfusionsi_in/LocalizationFusionSI_In_proxy_xf.h
 *        \brief  SOME/IP binding of service proxy for service 'LocalizationFusionSI_In'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_XF_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_XF_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding/internal/thread_pool_interface.h"
#include "amsr/someip_binding_transformation_layer/internal/localizationfusionsi_in/LocalizationFusionSI_In_proxy_methods.h"
#include "amsr/someip_binding_transformation_layer/internal/localizationfusionsi_in/LocalizationFusionSI_In_proxy_someip_event_manager.h"
#include "localizationfusionsi_in/LocalizationFusionSI_In_proxy_backend_interface.h"
#include "localizationfusionsi_in/localizationfusionsi_in_proxy.h"
#include "someip-protocol/internal/someip_message.h"
#include "someip_binding/internal/client_interface.h"
#include "someip_binding/internal/client_manager.h"
#include "someip_binding/internal/logging/ara_com_logger.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace localizationfusionsi_in {

/*!
 * \brief SOME/IP proxy binding of Service 'LocalizationFusionSI_In'.
 * \details Handles serialization and deserialization of all method calls, events, etc.
 * \remark generated
 */
class LocalizationFusionSI_InProxyXf final :
  public ::localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface,
  public ::amsr::someip_binding::internal::ClientInterface,
  public std::enable_shared_from_this<LocalizationFusionSI_InProxyXf> {
 public:

  /*!
   * \brief Constructor.
   * \param[in] service_id                    SOME/IP service identifier to be used.
   * \param[in] major_version                 SOME/IP major version to be used.
   * \param[in] instance_id                   SOME/IP instance identifier to be used.
   * \param[in] client_id                     SOME/IP client identifier to be used.
   * \param[in] someip_binding_client_manager Reference to the related SOME/IP transport binding manager.
   * \pre -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  LocalizationFusionSI_InProxyXf(::amsr::someip_protocol::internal::ServiceId const service_id,
                                           ::amsr::someip_protocol::internal::MajorVersion const major_version,
                                           ::amsr::someip_protocol::internal::InstanceId const instance_id,
                                           ::amsr::someip_protocol::internal::ClientId const client_id,
                                           ::amsr::someip_binding::internal::ClientManager<>& someip_binding_client_manager,
                                           ::amsr::someip_binding::internal::ThreadPoolInterface& thread_pool_interface);

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
  ~LocalizationFusionSI_InProxyXf() noexcept override = default;

  /*!
   * \brief Sets the active state to true, indicating that the service is now up and the requests coming from SOCAL
   * shall be forwarded to the binding.
   *
   * \context     Reactor
   * \threadsafe  FALSE
   * \synchronous FALSE
   */
  void Start() noexcept;

  /*!
   * \brief Sets the active state to false, indicating that the service is now down and the requests coming from SOCAL
   * shall not be forwarded to the binding.
   *
   * \context     Reactor
   * \threadsafe  FALSE
   * \synchronous FALSE
   */
  void Stop() noexcept;


  /*!
   * \brief Notifies the server side that the service has been requested.
   * \pre        -
   * \context    App
   * \threadsafe TRUE
   * \reentrant  TRUE
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::ara::core::Result<void> RequestService() noexcept override;

  /*!
   * \brief Notifies the server side that the service has been released.
   * \pre        -
   * \context    App
   * \threadsafe TRUE
   * \reentrant  TRUE
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  void ReleaseService() noexcept override;

  /*!
   * \brief Receive handler for method responses.
   * \param[in] header The deserialized SOME/IP header for direct access.
   * \param[in] packet Serialized Method response [SOME/IP header + Payload].
   *
   * \details At the point of this method call from SomeIpBinding, we only have to dispatch method id and session
   *          id and look in the correct pending request container, to serve the promise.
   * \error ::ara::com::ComErrc::service_not_available is set in the promise and then thrown when future.get() is called
   *        if SOME/IP return code was kUnknownService.
   * \pre         -
   * \context     Reactor
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  void HandleMethodResponse(::amsr::someip_protocol::internal::SomeIpMessageHeader const& header,
                            ::amsr::someip_protocol::internal::SomeIpMessage packet) override;

  /*!
   * \brief Forward a prepared packet to the SomeIpBinding.
   * \param[in] packet The serialized packet from the method.
   *
   * \return true if the transmission has been started and false otherwise.
   *
   * \pre          -
   * \context      App
   * \threadsafe   FALSE
   * \reentrant    FALSE
   * \synchronous  TRUE
   */
  bool SendMethodRequest(::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet);
  
  /*!
   * \brief Callback triggered when the service is down.
   *
   * \pre         -
   * \context     Reactor
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  void OnServiceDown() override;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_GNSSinf1'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::GNSSinf1Vcc::GNSSinf1Vcc>& GetEventBackendOSM2_Bus_GNSSinf1() noexcept override {
    return event_xf_OSM2_Bus_GNSSinf1_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_GNSSinf2'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::GNSSinf2Vcc::GNSSinf2Vcc>& GetEventBackendOSM2_Bus_GNSSinf2() noexcept override {
    return event_xf_OSM2_Bus_GNSSinf2_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_IMUinf'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::IMUInf1Vcc::IMUInf1Vcc>& GetEventBackendOSM2_Bus_IMUinf() noexcept override {
    return event_xf_OSM2_Bus_IMUinf_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_INSinf'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::INSinf1Vcc::INSinf1Vcc>& GetEventBackendOSM2_Bus_INSinf() noexcept override {
    return event_xf_OSM2_Bus_INSinf_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_LaneChgSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LppLaneChgSts::LppLaneChgSts>& GetEventBackendOSM2_Bus_LaneChgSts() noexcept override {
    return event_xf_OSM2_Bus_LaneChgSts_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Fl_VehInLaneChg'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::OSM2_Fl_VehInLaneChg::OSM2_Fl_VehInLaneChg>& GetEventBackendOSM2_Fl_VehInLaneChg() noexcept override {
    return event_xf_OSM2_Fl_VehInLaneChg_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Prm_DynCalPrmForVehTyp'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::DynCalPrmForVehTyp::DynCalPrmForVehTyp>& GetEventBackendOSM2_Prm_DynCalPrmForVehTyp() noexcept override {
    return event_xf_OSM2_Prm_DynCalPrmForVehTyp_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_NGPSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::NgpSts1::NgpSts1>& GetEventBackendOSM2_St_NGPSts() noexcept override {
    return event_xf_OSM2_St_NGPSts_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_HWASts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::TjaSts::TjaSts>& GetEventBackendOSM2_St_HWASts() noexcept override {
    return event_xf_OSM2_St_HWASts_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_SteerWhlSnsr'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::SteerWhlSnsrSafe1::SteerWhlSnsrSafe1>& GetEventBackendOSM2_Bus_SteerWhlSnsr() noexcept override {
    return event_xf_OSM2_Bus_SteerWhlSnsr_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_WhlInfoGroup'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::WhlInfoGroup::WhlInfoGroup>& GetEventBackendOSM2_Bus_WhlInfoGroup() noexcept override {
    return event_xf_OSM2_Bus_WhlInfoGroup_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_Vin'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::Vin1Vcc::Vin1Vcc>& GetEventBackendOSM2_Bus_Vin() noexcept override {
    return event_xf_OSM2_Bus_Vin_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_LOCSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LOCSts1Vcc::LOCSts1Vcc>& GetEventBackendOSM2_Bus_LOCSts() noexcept override {
    return event_xf_OSM2_Bus_LOCSts_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_EgoMotionData'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::EgoMotion::EgoMotion>& GetEventBackendOSM2_Bus_EgoMotionData() noexcept override {
    return event_xf_OSM2_Bus_EgoMotionData_;
  }


  /*!
   * \brief Get the event manager object for the service event 'OSM2_Ti_TimeStamp'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::OSM2TimeStamp::OSM2TimeStamp>& GetEventBackendOSM2_Ti_TimeStamp() noexcept override {
    return event_xf_OSM2_Ti_TimeStamp_;
  }


  // ---- Fields ---------------------------------------------------------------------------------------------------
 private:

  // SOME/IP service ID used by this binding.
  ::amsr::someip_protocol::internal::ServiceId  service_id_;

  // SOME/IP major version used by this binding.
  ::amsr::someip_protocol::internal::MajorVersion major_version_;

  // SOME/IP instance ID used by this binding.
  ::amsr::someip_protocol::internal::InstanceId instance_id_;

  // SOME/IP related client ID used by this concrete proxy instance.
  ::amsr::someip_protocol::internal::ClientId client_id_;

  /*!
   * \brief Requester counter.
   */
  std::uint16_t requestor_count_{0U};

  /*!
   * \brief Mutex protecting the Request/Release service calls.
   */
  mutable std::mutex request_service_mutex_{};

  /*!
   * \brief Flag indicating the active state of the server.
   */
 std::atomic<bool> is_active_;

  // Related SOME/IP binding
  ::amsr::someip_binding::internal::ClientManager<>& client_manager_;

  // Reference to the thread pool interface.
  ::amsr::someip_binding::internal::ThreadPoolInterface& thread_pool_interface_;

  // Logger for tracing and debugging
  ::amsr::someip_binding::internal::logging::AraComLogger logger_{
    ::amsr::someip_binding::internal::logging::kSomeIpLoggerContextId,
    ::amsr::someip_binding::internal::logging::kSomeIpLoggerContextDescription, "LocalizationFusionSI_InProxyXf"};

  // ---- Methods ------------------------------------------------------------------------------------------

  // ---- Event manager --------------------------------------------------------------------------------------------

  // Event  manager for proxy event 'OSM2_Bus_GNSSinf1'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_GNSSinf1 event_xf_OSM2_Bus_GNSSinf1_{instance_id_};

  // Event  manager for proxy event 'OSM2_Bus_GNSSinf2'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_GNSSinf2 event_xf_OSM2_Bus_GNSSinf2_{instance_id_};

  // Event  manager for proxy event 'OSM2_Bus_IMUinf'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_IMUinf event_xf_OSM2_Bus_IMUinf_{instance_id_};

  // Event  manager for proxy event 'OSM2_Bus_INSinf'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_INSinf event_xf_OSM2_Bus_INSinf_{instance_id_};

  // Event  manager for proxy event 'OSM2_Bus_LaneChgSts'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_LaneChgSts event_xf_OSM2_Bus_LaneChgSts_{instance_id_};

  // Event  manager for proxy event 'OSM2_Fl_VehInLaneChg'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Fl_VehInLaneChg event_xf_OSM2_Fl_VehInLaneChg_{instance_id_};

  // Event  manager for proxy event 'OSM2_Prm_DynCalPrmForVehTyp'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Prm_DynCalPrmForVehTyp event_xf_OSM2_Prm_DynCalPrmForVehTyp_{instance_id_};

  // Event  manager for proxy event 'OSM2_St_NGPSts'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_St_NGPSts event_xf_OSM2_St_NGPSts_{instance_id_};

  // Event  manager for proxy event 'OSM2_St_HWASts'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_St_HWASts event_xf_OSM2_St_HWASts_{instance_id_};

  // Event  manager for proxy event 'OSM2_Bus_SteerWhlSnsr'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_SteerWhlSnsr event_xf_OSM2_Bus_SteerWhlSnsr_{instance_id_};

  // Event  manager for proxy event 'OSM2_Bus_WhlInfoGroup'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_WhlInfoGroup event_xf_OSM2_Bus_WhlInfoGroup_{instance_id_};

  // Event  manager for proxy event 'OSM2_Bus_Vin'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_Vin event_xf_OSM2_Bus_Vin_{instance_id_};

  // Event  manager for proxy event 'OSM2_Bus_LOCSts'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_LOCSts event_xf_OSM2_Bus_LOCSts_{instance_id_};

  // Event  manager for proxy event 'OSM2_Bus_EgoMotionData'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_EgoMotionData event_xf_OSM2_Bus_EgoMotionData_{instance_id_};

  // Event  manager for proxy event 'OSM2_Ti_TimeStamp'
  LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Ti_TimeStamp event_xf_OSM2_Ti_TimeStamp_{instance_id_};

  // ---- Field method/event manager -------------------------------------------------------------------------------
};

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace localizationfusionsi_in

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_XF_H_

