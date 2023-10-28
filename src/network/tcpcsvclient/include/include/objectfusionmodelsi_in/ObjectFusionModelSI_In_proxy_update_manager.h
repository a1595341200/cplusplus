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
/**        \file  ObjectFusionModelExe/include/objectfusionmodelsi_in/ObjectFusionModelSI_In_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'ObjectFusionModelSI_In'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_UPDATE_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "objectfusionmodelsi_in/ObjectFusionModelSI_In_proxy_backend_interface.h"
#include "objectfusionmodelsi_in/ObjectFusionModelSI_In_types.h"

namespace objectfusionmodelsi_in {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt'.
 *
 */
using ProxyEventUpdateManagerOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::DynCalPrmForAxleDstReToVehFrnt::DynCalPrmForAxleDstReToVehFrnt, ObjectFusionModelSI_InProxyBackendInterface,
      &objectfusionmodelsi_in::internal::ObjectFusionModelSI_InProxyBackendInterface::GetEventBackendOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt'.
 *
 */
using ProxyEventUpdateManagerOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::DynCalPrmForCamLongDistToVehFrnt::DynCalPrmForCamLongDistToVehFrnt, ObjectFusionModelSI_InProxyBackendInterface,
      &objectfusionmodelsi_in::internal::ObjectFusionModelSI_InProxyBackendInterface::GetEventBackendOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt'.
 *
 */
using ProxyEventUpdateManagerOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::DynCalPrmForCamLatDistToVehFrnt::DynCalPrmForCamLatDistToVehFrnt, ObjectFusionModelSI_InProxyBackendInterface,
      &objectfusionmodelsi_in::internal::ObjectFusionModelSI_InProxyBackendInterface::GetEventBackendOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_VehCfgPrmInt'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_VehCfgPrmInt = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::VehCfgPrmInt1Vcc::VehCfgPrmInt1Vcc, ObjectFusionModelSI_InProxyBackendInterface,
      &objectfusionmodelsi_in::internal::ObjectFusionModelSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_VehCfgPrmInt>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_VehSpdLgtSafeGroupChkd'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_VehSpdLgtSafeGroupChkd = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::VehSpdLgtSafe1Chkd::VehSpdLgtSafe1Chkd, ObjectFusionModelSI_InProxyBackendInterface,
      &objectfusionmodelsi_in::internal::ObjectFusionModelSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_VehSpdLgtSafeGroupChkd>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_AsyDataWithCmpSafeChkd'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_AsyDataWithCmpSafeChkd = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::AsyDataWithCmpSafe1Chkd::AsyDataWithCmpSafe1Chkd, ObjectFusionModelSI_InProxyBackendInterface,
      &objectfusionmodelsi_in::internal::ObjectFusionModelSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_AsyDataWithCmpSafeChkd>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'ObjectFusionModelSI_In'
 * \remark generated
 */
class ObjectFusionModelSI_InProxyUpdateManager : public ObjectFusionModelSI_InProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<ObjectFusionModelSI_InProxyBackendInterface>{
 public:
  using BackendInterfaceType = ObjectFusionModelSI_InProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<ObjectFusionModelSI_InProxyBackendInterface>;

  ObjectFusionModelSI_InProxyUpdateManager() = delete;

  ObjectFusionModelSI_InProxyUpdateManager(ObjectFusionModelSI_InProxyUpdateManager const &) = delete;

  ObjectFusionModelSI_InProxyUpdateManager(ObjectFusionModelSI_InProxyUpdateManager &&) = delete;

  ObjectFusionModelSI_InProxyUpdateManager &operator=(ObjectFusionModelSI_InProxyUpdateManager const &) & = delete;

  ObjectFusionModelSI_InProxyUpdateManager &operator=(ObjectFusionModelSI_InProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~ObjectFusionModelSI_InProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  ObjectFusionModelSI_InProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_VehCfgPrmInt);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_VehSpdLgtSafeGroupChkd);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_AsyDataWithCmpSafeChkd);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::DynCalPrmForAxleDstReToVehFrnt::DynCalPrmForAxleDstReToVehFrnt>& GetEventBackendOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt() noexcept override {
      return proxyEventUpdateManagerOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::DynCalPrmForCamLongDistToVehFrnt::DynCalPrmForCamLongDistToVehFrnt>& GetEventBackendOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt() noexcept override {
      return proxyEventUpdateManagerOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::DynCalPrmForCamLatDistToVehFrnt::DynCalPrmForCamLatDistToVehFrnt>& GetEventBackendOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt() noexcept override {
      return proxyEventUpdateManagerOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_VehCfgPrmInt'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::VehCfgPrmInt1Vcc::VehCfgPrmInt1Vcc>& GetEventBackendOSM2_Bus_VehCfgPrmInt() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_VehCfgPrmInt;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_VehSpdLgtSafeGroupChkd'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::VehSpdLgtSafe1Chkd::VehSpdLgtSafe1Chkd>& GetEventBackendOSM2_Bus_VehSpdLgtSafeGroupChkd() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_VehSpdLgtSafeGroupChkd;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_AsyDataWithCmpSafeChkd'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::AsyDataWithCmpSafe1Chkd::AsyDataWithCmpSafe1Chkd>& GetEventBackendOSM2_Bus_AsyDataWithCmpSafeChkd() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_AsyDataWithCmpSafeChkd;
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
   * \brief Proxy event update manager for 'OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt'.
   */
  events::ProxyEventUpdateManagerOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt proxyEventUpdateManagerOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt'.
   */
  events::ProxyEventUpdateManagerOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt proxyEventUpdateManagerOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt'.
   */
  events::ProxyEventUpdateManagerOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt proxyEventUpdateManagerOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_VehCfgPrmInt'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_VehCfgPrmInt proxyEventUpdateManagerOSM2_Bus_VehCfgPrmInt{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_VehSpdLgtSafeGroupChkd'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_VehSpdLgtSafeGroupChkd proxyEventUpdateManagerOSM2_Bus_VehSpdLgtSafeGroupChkd{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_AsyDataWithCmpSafeChkd'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_AsyDataWithCmpSafeChkd proxyEventUpdateManagerOSM2_Bus_AsyDataWithCmpSafeChkd{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace objectfusionmodelsi_in

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_UPDATE_MANAGER_H_

