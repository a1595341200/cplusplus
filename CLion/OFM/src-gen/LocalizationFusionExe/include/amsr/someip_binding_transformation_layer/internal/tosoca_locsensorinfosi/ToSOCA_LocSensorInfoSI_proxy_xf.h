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
/**        \file  LocalizationFusionExe/include/amsr/someip_binding_transformation_layer/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_xf.h
 *        \brief  SOME/IP binding of service proxy for service 'ToSOCA_LocSensorInfoSI'
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_XF_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_XF_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding/internal/thread_pool_interface.h"
#include "amsr/someip_binding_transformation_layer/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_methods.h"
#include "amsr/someip_binding_transformation_layer/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_someip_event_manager.h"
#include "someip-protocol/internal/someip_message.h"
#include "someip_binding/internal/client_interface.h"
#include "someip_binding/internal/client_manager.h"
#include "someip_binding/internal/logging/ara_com_logger.h"
#include "tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_backend_interface.h"
#include "tosoca_locsensorinfosi/tosoca_locsensorinfosi_proxy.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace tosoca_locsensorinfosi {

/*!
 * \brief SOME/IP proxy binding of Service 'ToSOCA_LocSensorInfoSI'.
 * \details Handles serialization and deserialization of all method calls, events, etc.
 * \remark generated
 */
class ToSOCA_LocSensorInfoSIProxyXf final :
  public ::tosoca_locsensorinfosi::internal::ToSOCA_LocSensorInfoSIProxyBackendInterface,
  public ::amsr::someip_binding::internal::ClientInterface,
  public std::enable_shared_from_this<ToSOCA_LocSensorInfoSIProxyXf> {
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
  ToSOCA_LocSensorInfoSIProxyXf(::amsr::someip_protocol::internal::ServiceId const service_id,
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
  ~ToSOCA_LocSensorInfoSIProxyXf() noexcept override = default;

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
   * \brief Get the event manager object for the service event 'OSM2_Bus_LocSensorInfo'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LocSensorInfo1VCC::LocSensorInfo1VCC>& GetEventBackendOSM2_Bus_LocSensorInfo() noexcept override {
    return event_xf_OSM2_Bus_LocSensorInfo_;
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
    ::amsr::someip_binding::internal::logging::kSomeIpLoggerContextDescription, "ToSOCA_LocSensorInfoSIProxyXf"};

  // ---- Methods ------------------------------------------------------------------------------------------

  // ---- Event manager --------------------------------------------------------------------------------------------

  // Event  manager for proxy event 'OSM2_Bus_LocSensorInfo'
  ToSOCA_LocSensorInfoSIProxySomeIpEventManagerOSM2_Bus_LocSensorInfo event_xf_OSM2_Bus_LocSensorInfo_{instance_id_};

  // ---- Field method/event manager -------------------------------------------------------------------------------
};

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace tosoca_locsensorinfosi

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_XF_H_

