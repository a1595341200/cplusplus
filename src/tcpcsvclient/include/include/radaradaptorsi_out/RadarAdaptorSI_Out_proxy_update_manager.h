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
/**        \file  ObjectFusionModelExe/include/radaradaptorsi_out/RadarAdaptorSI_Out_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'RadarAdaptorSI_Out'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_UPDATE_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "radaradaptorsi_out/RadarAdaptorSI_Out_proxy_backend_interface.h"
#include "radaradaptorsi_out/RadarAdaptorSI_Out_types.h"

namespace radaradaptorsi_out {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 *
 */
using ProxyEventUpdateManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts, RadarAdaptorSI_OutProxyBackendInterface,
      &radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface::GetEventBackendFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts>;
/*!
 * \brief Type alias for proxy event update manager for 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 *
 */
using ProxyEventUpdateManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::FourDRadarObjStsGrp01_10::FourDRadarObjStsGrp01_10, RadarAdaptorSI_OutProxyBackendInterface,
      &radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface::GetEventBackendFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01>;
/*!
 * \brief Type alias for proxy event update manager for 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 *
 */
using ProxyEventUpdateManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::FourDRadarObjStsGrp11_20::FourDRadarObjStsGrp11_20, RadarAdaptorSI_OutProxyBackendInterface,
      &radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface::GetEventBackendFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02>;
/*!
 * \brief Type alias for proxy event update manager for 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 *
 */
using ProxyEventUpdateManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30, RadarAdaptorSI_OutProxyBackendInterface,
      &radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface::GetEventBackendFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03>;
/*!
 * \brief Type alias for proxy event update manager for 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 *
 */
using ProxyEventUpdateManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40, RadarAdaptorSI_OutProxyBackendInterface,
      &radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface::GetEventBackendFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04>;
/*!
 * \brief Type alias for proxy event update manager for 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 *
 */
using ProxyEventUpdateManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42, RadarAdaptorSI_OutProxyBackendInterface,
      &radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface::GetEventBackendFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'RadarAdaptorSI_Out'
 * \remark generated
 */
class RadarAdaptorSI_OutProxyUpdateManager : public RadarAdaptorSI_OutProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<RadarAdaptorSI_OutProxyBackendInterface>{
 public:
  using BackendInterfaceType = RadarAdaptorSI_OutProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<RadarAdaptorSI_OutProxyBackendInterface>;

  RadarAdaptorSI_OutProxyUpdateManager() = delete;

  RadarAdaptorSI_OutProxyUpdateManager(RadarAdaptorSI_OutProxyUpdateManager const &) = delete;

  RadarAdaptorSI_OutProxyUpdateManager(RadarAdaptorSI_OutProxyUpdateManager &&) = delete;

  RadarAdaptorSI_OutProxyUpdateManager &operator=(RadarAdaptorSI_OutProxyUpdateManager const &) & = delete;

  RadarAdaptorSI_OutProxyUpdateManager &operator=(RadarAdaptorSI_OutProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~RadarAdaptorSI_OutProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  RadarAdaptorSI_OutProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts>& GetEventBackendFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts() noexcept override {
      return proxyEventUpdateManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarObjStsGrp01_10::FourDRadarObjStsGrp01_10>& GetEventBackendFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01() noexcept override {
      return proxyEventUpdateManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01;
  }

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarObjStsGrp11_20::FourDRadarObjStsGrp11_20>& GetEventBackendFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02() noexcept override {
      return proxyEventUpdateManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02;
  }

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30>& GetEventBackendFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03() noexcept override {
      return proxyEventUpdateManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03;
  }

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40>& GetEventBackendFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04() noexcept override {
      return proxyEventUpdateManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04;
  }

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42>& GetEventBackendFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05() noexcept override {
      return proxyEventUpdateManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05;
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
   * \brief Proxy event update manager for 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
   */
  events::ProxyEventUpdateManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts proxyEventUpdateManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
   */
  events::ProxyEventUpdateManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 proxyEventUpdateManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
   */
  events::ProxyEventUpdateManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 proxyEventUpdateManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
   */
  events::ProxyEventUpdateManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 proxyEventUpdateManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
   */
  events::ProxyEventUpdateManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 proxyEventUpdateManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
   */
  events::ProxyEventUpdateManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 proxyEventUpdateManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace radaradaptorsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_UPDATE_MANAGER_H_

