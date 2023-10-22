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
/**        \file  TrafficLightAttentionExe/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'ObjectFusionModelSI_Out'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_UPDATE_MANAGER_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_proxy_backend_interface.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_types.h"

namespace objectfusionmodelsi_out {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'OFM_Bus_FusedTargets_11'.
 *
 */
using ProxyEventUpdateManagerOFM_Bus_FusedTargets_11 = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::ObjGroup2Vccs_11::ObjGroup2Vccs_11, ObjectFusionModelSI_OutProxyBackendInterface,
      &objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyBackendInterface::GetEventBackendOFM_Bus_FusedTargets_11>;
/*!
 * \brief Type alias for proxy event update manager for 'OFM_St_SOCFusedSts'.
 *
 */
using ProxyEventUpdateManagerOFM_St_SOCFusedSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::SOCFusedSts::SOCFusedSts, ObjectFusionModelSI_OutProxyBackendInterface,
      &objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyBackendInterface::GetEventBackendOFM_St_SOCFusedSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OFM_Bus_FourDRadarECUSts'.
 *
 */
using ProxyEventUpdateManagerOFM_Bus_FourDRadarECUSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::FourDRadarECUSts::FourDRadarECUSts, ObjectFusionModelSI_OutProxyBackendInterface,
      &objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyBackendInterface::GetEventBackendOFM_Bus_FourDRadarECUSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OFM_Bus_FrontFourDRadarSts'.
 *
 */
using ProxyEventUpdateManagerOFM_Bus_FrontFourDRadarSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc, ObjectFusionModelSI_OutProxyBackendInterface,
      &objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyBackendInterface::GetEventBackendOFM_Bus_FrontFourDRadarSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OFM_Bus_FusedTargets_22'.
 *
 */
using ProxyEventUpdateManagerOFM_Bus_FusedTargets_22 = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::ObjGroup2Vccs_11::ObjGroup2Vccs_11, ObjectFusionModelSI_OutProxyBackendInterface,
      &objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyBackendInterface::GetEventBackendOFM_Bus_FusedTargets_22>;
/*!
 * \brief Type alias for proxy event update manager for 'OFM_Bus_FusedTargets_32'.
 *
 */
using ProxyEventUpdateManagerOFM_Bus_FusedTargets_32 = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::ObjGroup2Vccs_10::ObjGroup2Vccs_10, ObjectFusionModelSI_OutProxyBackendInterface,
      &objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyBackendInterface::GetEventBackendOFM_Bus_FusedTargets_32>;
/*!
 * \brief Type alias for proxy event update manager for 'OFM_St_FrntRdrObjE2Efail'.
 *
 */
using ProxyEventUpdateManagerOFM_St_FrntRdrObjE2Efail = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::FrntRdrObjE2Efail::FrntRdrObjE2Efail, ObjectFusionModelSI_OutProxyBackendInterface,
      &objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyBackendInterface::GetEventBackendOFM_St_FrntRdrObjE2Efail>;
/*!
 * \brief Type alias for proxy event update manager for 'OFM_St_FrntRdrObjTO'.
 *
 */
using ProxyEventUpdateManagerOFM_St_FrntRdrObjTO = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::FrntRdrObjTO::FrntRdrObjTO, ObjectFusionModelSI_OutProxyBackendInterface,
      &objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyBackendInterface::GetEventBackendOFM_St_FrntRdrObjTO>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'ObjectFusionModelSI_Out'
 * \remark generated
 */
class ObjectFusionModelSI_OutProxyUpdateManager : public ObjectFusionModelSI_OutProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<ObjectFusionModelSI_OutProxyBackendInterface>{
 public:
  using BackendInterfaceType = ObjectFusionModelSI_OutProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<ObjectFusionModelSI_OutProxyBackendInterface>;

  ObjectFusionModelSI_OutProxyUpdateManager() = delete;

  ObjectFusionModelSI_OutProxyUpdateManager(ObjectFusionModelSI_OutProxyUpdateManager const &) = delete;

  ObjectFusionModelSI_OutProxyUpdateManager(ObjectFusionModelSI_OutProxyUpdateManager &&) = delete;

  ObjectFusionModelSI_OutProxyUpdateManager &operator=(ObjectFusionModelSI_OutProxyUpdateManager const &) & = delete;

  ObjectFusionModelSI_OutProxyUpdateManager &operator=(ObjectFusionModelSI_OutProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~ObjectFusionModelSI_OutProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  ObjectFusionModelSI_OutProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOFM_Bus_FusedTargets_11);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOFM_St_SOCFusedSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOFM_Bus_FourDRadarECUSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOFM_Bus_FrontFourDRadarSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOFM_Bus_FusedTargets_22);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOFM_Bus_FusedTargets_32);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOFM_St_FrntRdrObjE2Efail);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOFM_St_FrntRdrObjTO);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets_11'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::ObjGroup2Vccs_11::ObjGroup2Vccs_11>& GetEventBackendOFM_Bus_FusedTargets_11() noexcept override {
      return proxyEventUpdateManagerOFM_Bus_FusedTargets_11;
  }

  /*!
   * \brief Get the event manager object for the service event 'OFM_St_SOCFusedSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOCFusedSts::SOCFusedSts>& GetEventBackendOFM_St_SOCFusedSts() noexcept override {
      return proxyEventUpdateManagerOFM_St_SOCFusedSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FourDRadarECUSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarECUSts::FourDRadarECUSts>& GetEventBackendOFM_Bus_FourDRadarECUSts() noexcept override {
      return proxyEventUpdateManagerOFM_Bus_FourDRadarECUSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FrontFourDRadarSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc>& GetEventBackendOFM_Bus_FrontFourDRadarSts() noexcept override {
      return proxyEventUpdateManagerOFM_Bus_FrontFourDRadarSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets_22'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::ObjGroup2Vccs_11::ObjGroup2Vccs_11>& GetEventBackendOFM_Bus_FusedTargets_22() noexcept override {
      return proxyEventUpdateManagerOFM_Bus_FusedTargets_22;
  }

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets_32'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::ObjGroup2Vccs_10::ObjGroup2Vccs_10>& GetEventBackendOFM_Bus_FusedTargets_32() noexcept override {
      return proxyEventUpdateManagerOFM_Bus_FusedTargets_32;
  }

  /*!
   * \brief Get the event manager object for the service event 'OFM_St_FrntRdrObjE2Efail'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::FrntRdrObjE2Efail::FrntRdrObjE2Efail>& GetEventBackendOFM_St_FrntRdrObjE2Efail() noexcept override {
      return proxyEventUpdateManagerOFM_St_FrntRdrObjE2Efail;
  }

  /*!
   * \brief Get the event manager object for the service event 'OFM_St_FrntRdrObjTO'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::FrntRdrObjTO::FrntRdrObjTO>& GetEventBackendOFM_St_FrntRdrObjTO() noexcept override {
      return proxyEventUpdateManagerOFM_St_FrntRdrObjTO;
  }


  // ---- Fields ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Performs all proxy-binding-specific initializations.
   * \return Result containing no value.
   * \pre -
   * \context App
   */
  ::ara::core::Result<void> RequestService() noexcept override {
    // Nothing to be done here. TODO(visgut): Most likely bauhaus justification required.
    return ::ara::core::Result<void>{};
  }

  /*!
   * \brief Releases the service from the backend.
   * \pre -
   * \context App
   */
  void ReleaseService() noexcept override { 
  // Intentionally left empty.
  }

 private:
  /*!
   * \brief Proxy event update manager for 'OFM_Bus_FusedTargets_11'.
   */
  events::ProxyEventUpdateManagerOFM_Bus_FusedTargets_11 proxyEventUpdateManagerOFM_Bus_FusedTargets_11{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OFM_St_SOCFusedSts'.
   */
  events::ProxyEventUpdateManagerOFM_St_SOCFusedSts proxyEventUpdateManagerOFM_St_SOCFusedSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OFM_Bus_FourDRadarECUSts'.
   */
  events::ProxyEventUpdateManagerOFM_Bus_FourDRadarECUSts proxyEventUpdateManagerOFM_Bus_FourDRadarECUSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OFM_Bus_FrontFourDRadarSts'.
   */
  events::ProxyEventUpdateManagerOFM_Bus_FrontFourDRadarSts proxyEventUpdateManagerOFM_Bus_FrontFourDRadarSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OFM_Bus_FusedTargets_22'.
   */
  events::ProxyEventUpdateManagerOFM_Bus_FusedTargets_22 proxyEventUpdateManagerOFM_Bus_FusedTargets_22{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OFM_Bus_FusedTargets_32'.
   */
  events::ProxyEventUpdateManagerOFM_Bus_FusedTargets_32 proxyEventUpdateManagerOFM_Bus_FusedTargets_32{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OFM_St_FrntRdrObjE2Efail'.
   */
  events::ProxyEventUpdateManagerOFM_St_FrntRdrObjE2Efail proxyEventUpdateManagerOFM_St_FrntRdrObjE2Efail{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OFM_St_FrntRdrObjTO'.
   */
  events::ProxyEventUpdateManagerOFM_St_FrntRdrObjTO proxyEventUpdateManagerOFM_St_FrntRdrObjTO{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace objectfusionmodelsi_out

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_UPDATE_MANAGER_H_

