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
/**        \file  RoadModelFusionExe/include/ehrsi_out/EHRSI_Out_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'EHRSI_Out'.
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_UPDATE_MANAGER_H_
#define ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "ehrsi_out/EHRSI_Out_proxy_backend_interface.h"
#include "ehrsi_out/EHRSI_Out_types.h"

namespace ehrsi_out {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'EHR_Bus_NOAInfo'.
 *
 */
using ProxyEventUpdateManagerEHR_Bus_NOAInfo = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::NOAInfo::NOAInfo, EHRSI_OutProxyBackendInterface,
      &ehrsi_out::internal::EHRSI_OutProxyBackendInterface::GetEventBackendEHR_Bus_NOAInfo>;
/*!
 * \brief Type alias for proxy event update manager for 'EHR_Bus_LaneConnectivitys'.
 *
 */
using ProxyEventUpdateManagerEHR_Bus_LaneConnectivitys = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LaneConnectivitys::LaneConnectivitys, EHRSI_OutProxyBackendInterface,
      &ehrsi_out::internal::EHRSI_OutProxyBackendInterface::GetEventBackendEHR_Bus_LaneConnectivitys>;
/*!
 * \brief Type alias for proxy event update manager for 'EHR_Bus_Nodes'.
 *
 */
using ProxyEventUpdateManagerEHR_Bus_Nodes = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::Nodes::Nodes, EHRSI_OutProxyBackendInterface,
      &ehrsi_out::internal::EHRSI_OutProxyBackendInterface::GetEventBackendEHR_Bus_Nodes>;
/*!
 * \brief Type alias for proxy event update manager for 'EHR_Bus_TrafficSigns'.
 *
 */
using ProxyEventUpdateManagerEHR_Bus_TrafficSigns = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::TrafficSigns::TrafficSigns, EHRSI_OutProxyBackendInterface,
      &ehrsi_out::internal::EHRSI_OutProxyBackendInterface::GetEventBackendEHR_Bus_TrafficSigns>;
/*!
 * \brief Type alias for proxy event update manager for 'EHR_Bus_GeoFences'.
 *
 */
using ProxyEventUpdateManagerEHR_Bus_GeoFences = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::GeoFences::GeoFences, EHRSI_OutProxyBackendInterface,
      &ehrsi_out::internal::EHRSI_OutProxyBackendInterface::GetEventBackendEHR_Bus_GeoFences>;
/*!
 * \brief Type alias for proxy event update manager for 'EHR_Bus_LinkCurvatures'.
 *
 */
using ProxyEventUpdateManagerEHR_Bus_LinkCurvatures = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LinkCurvatures::LinkCurvatures, EHRSI_OutProxyBackendInterface,
      &ehrsi_out::internal::EHRSI_OutProxyBackendInterface::GetEventBackendEHR_Bus_LinkCurvatures>;
/*!
 * \brief Type alias for proxy event update manager for 'EHR_Bus_LinkSlopes'.
 *
 */
using ProxyEventUpdateManagerEHR_Bus_LinkSlopes = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LinkSlopes::LinkSlopes, EHRSI_OutProxyBackendInterface,
      &ehrsi_out::internal::EHRSI_OutProxyBackendInterface::GetEventBackendEHR_Bus_LinkSlopes>;
/*!
 * \brief Type alias for proxy event update manager for 'EHR_Bus_LaneSpeedLimits'.
 *
 */
using ProxyEventUpdateManagerEHR_Bus_LaneSpeedLimits = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LaneSpeedLimits::LaneSpeedLimits, EHRSI_OutProxyBackendInterface,
      &ehrsi_out::internal::EHRSI_OutProxyBackendInterface::GetEventBackendEHR_Bus_LaneSpeedLimits>;
/*!
 * \brief Type alias for proxy event update manager for 'EHR_Bus_LinkInfos'.
 *
 */
using ProxyEventUpdateManagerEHR_Bus_LinkInfos = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LinkInfos::LinkInfos, EHRSI_OutProxyBackendInterface,
      &ehrsi_out::internal::EHRSI_OutProxyBackendInterface::GetEventBackendEHR_Bus_LinkInfos>;
/*!
 * \brief Type alias for proxy event update manager for 'EHR_Bus_MergePoints'.
 *
 */
using ProxyEventUpdateManagerEHR_Bus_MergePoints = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::AllMergePoints::AllMergePoints, EHRSI_OutProxyBackendInterface,
      &ehrsi_out::internal::EHRSI_OutProxyBackendInterface::GetEventBackendEHR_Bus_MergePoints>;
/*!
 * \brief Type alias for proxy event update manager for 'EHR_Bus_GeofennceJudge'.
 *
 */
using ProxyEventUpdateManagerEHR_Bus_GeofennceJudge = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::GeofennceJudge::GeofennceJudge, EHRSI_OutProxyBackendInterface,
      &ehrsi_out::internal::EHRSI_OutProxyBackendInterface::GetEventBackendEHR_Bus_GeofennceJudge>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'EHRSI_Out'
 * \remark generated
 */
class EHRSI_OutProxyUpdateManager : public EHRSI_OutProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<EHRSI_OutProxyBackendInterface>{
 public:
  using BackendInterfaceType = EHRSI_OutProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<EHRSI_OutProxyBackendInterface>;

  EHRSI_OutProxyUpdateManager() = delete;

  EHRSI_OutProxyUpdateManager(EHRSI_OutProxyUpdateManager const &) = delete;

  EHRSI_OutProxyUpdateManager(EHRSI_OutProxyUpdateManager &&) = delete;

  EHRSI_OutProxyUpdateManager &operator=(EHRSI_OutProxyUpdateManager const &) & = delete;

  EHRSI_OutProxyUpdateManager &operator=(EHRSI_OutProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~EHRSI_OutProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  EHRSI_OutProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerEHR_Bus_NOAInfo);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerEHR_Bus_LaneConnectivitys);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerEHR_Bus_Nodes);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerEHR_Bus_TrafficSigns);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerEHR_Bus_GeoFences);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerEHR_Bus_LinkCurvatures);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerEHR_Bus_LinkSlopes);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerEHR_Bus_LaneSpeedLimits);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerEHR_Bus_LinkInfos);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerEHR_Bus_MergePoints);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerEHR_Bus_GeofennceJudge);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_NOAInfo'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::NOAInfo::NOAInfo>& GetEventBackendEHR_Bus_NOAInfo() noexcept override {
      return proxyEventUpdateManagerEHR_Bus_NOAInfo;
  }

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneConnectivitys'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneConnectivitys::LaneConnectivitys>& GetEventBackendEHR_Bus_LaneConnectivitys() noexcept override {
      return proxyEventUpdateManagerEHR_Bus_LaneConnectivitys;
  }

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_Nodes'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::Nodes::Nodes>& GetEventBackendEHR_Bus_Nodes() noexcept override {
      return proxyEventUpdateManagerEHR_Bus_Nodes;
  }

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_TrafficSigns'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::TrafficSigns::TrafficSigns>& GetEventBackendEHR_Bus_TrafficSigns() noexcept override {
      return proxyEventUpdateManagerEHR_Bus_TrafficSigns;
  }

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_GeoFences'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::GeoFences::GeoFences>& GetEventBackendEHR_Bus_GeoFences() noexcept override {
      return proxyEventUpdateManagerEHR_Bus_GeoFences;
  }

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkCurvatures'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LinkCurvatures::LinkCurvatures>& GetEventBackendEHR_Bus_LinkCurvatures() noexcept override {
      return proxyEventUpdateManagerEHR_Bus_LinkCurvatures;
  }

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkSlopes'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LinkSlopes::LinkSlopes>& GetEventBackendEHR_Bus_LinkSlopes() noexcept override {
      return proxyEventUpdateManagerEHR_Bus_LinkSlopes;
  }

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneSpeedLimits'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneSpeedLimits::LaneSpeedLimits>& GetEventBackendEHR_Bus_LaneSpeedLimits() noexcept override {
      return proxyEventUpdateManagerEHR_Bus_LaneSpeedLimits;
  }

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkInfos'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LinkInfos::LinkInfos>& GetEventBackendEHR_Bus_LinkInfos() noexcept override {
      return proxyEventUpdateManagerEHR_Bus_LinkInfos;
  }

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_MergePoints'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::AllMergePoints::AllMergePoints>& GetEventBackendEHR_Bus_MergePoints() noexcept override {
      return proxyEventUpdateManagerEHR_Bus_MergePoints;
  }

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_GeofennceJudge'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::GeofennceJudge::GeofennceJudge>& GetEventBackendEHR_Bus_GeofennceJudge() noexcept override {
      return proxyEventUpdateManagerEHR_Bus_GeofennceJudge;
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
   * \brief Proxy event update manager for 'EHR_Bus_NOAInfo'.
   */
  events::ProxyEventUpdateManagerEHR_Bus_NOAInfo proxyEventUpdateManagerEHR_Bus_NOAInfo{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'EHR_Bus_LaneConnectivitys'.
   */
  events::ProxyEventUpdateManagerEHR_Bus_LaneConnectivitys proxyEventUpdateManagerEHR_Bus_LaneConnectivitys{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'EHR_Bus_Nodes'.
   */
  events::ProxyEventUpdateManagerEHR_Bus_Nodes proxyEventUpdateManagerEHR_Bus_Nodes{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'EHR_Bus_TrafficSigns'.
   */
  events::ProxyEventUpdateManagerEHR_Bus_TrafficSigns proxyEventUpdateManagerEHR_Bus_TrafficSigns{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'EHR_Bus_GeoFences'.
   */
  events::ProxyEventUpdateManagerEHR_Bus_GeoFences proxyEventUpdateManagerEHR_Bus_GeoFences{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'EHR_Bus_LinkCurvatures'.
   */
  events::ProxyEventUpdateManagerEHR_Bus_LinkCurvatures proxyEventUpdateManagerEHR_Bus_LinkCurvatures{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'EHR_Bus_LinkSlopes'.
   */
  events::ProxyEventUpdateManagerEHR_Bus_LinkSlopes proxyEventUpdateManagerEHR_Bus_LinkSlopes{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'EHR_Bus_LaneSpeedLimits'.
   */
  events::ProxyEventUpdateManagerEHR_Bus_LaneSpeedLimits proxyEventUpdateManagerEHR_Bus_LaneSpeedLimits{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'EHR_Bus_LinkInfos'.
   */
  events::ProxyEventUpdateManagerEHR_Bus_LinkInfos proxyEventUpdateManagerEHR_Bus_LinkInfos{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'EHR_Bus_MergePoints'.
   */
  events::ProxyEventUpdateManagerEHR_Bus_MergePoints proxyEventUpdateManagerEHR_Bus_MergePoints{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'EHR_Bus_GeofennceJudge'.
   */
  events::ProxyEventUpdateManagerEHR_Bus_GeofennceJudge proxyEventUpdateManagerEHR_Bus_GeofennceJudge{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace ehrsi_out

#endif  // ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_UPDATE_MANAGER_H_

