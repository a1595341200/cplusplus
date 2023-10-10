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
/**        \file  ObjectFusionModelExe/include/objectfusionmodelsi_in/ObjectFusionModelSI_In_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'ObjectFusionModelSI_In'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_BACKEND_INTERFACE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "objectfusionmodelsi_in/ObjectFusionModelSI_In_types.h"

namespace objectfusionmodelsi_in {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'ObjectFusionModelSI_In'
 * \remark generated
 */
class ObjectFusionModelSI_InProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  ObjectFusionModelSI_InProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~ObjectFusionModelSI_InProxyBackendInterface() noexcept = default;

  ObjectFusionModelSI_InProxyBackendInterface(ObjectFusionModelSI_InProxyBackendInterface const &) = delete;

  ObjectFusionModelSI_InProxyBackendInterface(ObjectFusionModelSI_InProxyBackendInterface &&) = delete;

  ObjectFusionModelSI_InProxyBackendInterface &operator=(ObjectFusionModelSI_InProxyBackendInterface const &) & = delete;

  ObjectFusionModelSI_InProxyBackendInterface &operator=(ObjectFusionModelSI_InProxyBackendInterface &&) & = delete;

  /*!
   * \brief Notifies the server side that the service has been requested.
   * \return Result containing no value or an error.
   * \error ComErrc::kGrantEnforcementError If the request is refused by IAM.
   * \pre        -
   * \context    App
   * \threadsafe TRUE
   * \reentrant  TRUE
   * \synchronus TRUE
   */
  virtual ::ara::core::Result<void> RequestService() noexcept = 0;

  /*!
   * \brief Notifies the server side that the service has been released.
   * \pre        -
   * \context    App
   * \threadsafe TRUE
   * \reentrant  TRUE
   * \synchronus TRUE
   */
  virtual void ReleaseService() noexcept = 0;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::DynCalPrmForAxleDstReToVehFrnt::DynCalPrmForAxleDstReToVehFrnt>& GetEventBackendOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::DynCalPrmForCamLongDistToVehFrnt::DynCalPrmForCamLongDistToVehFrnt>& GetEventBackendOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::DynCalPrmForCamLatDistToVehFrnt::DynCalPrmForCamLatDistToVehFrnt>& GetEventBackendOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_VehCfgPrmInt'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::VehCfgPrmInt1Vcc::VehCfgPrmInt1Vcc>& GetEventBackendOSM2_Bus_VehCfgPrmInt() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_VehSpdLgtSafeGroupChkd'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::VehSpdLgtSafe1Chkd::VehSpdLgtSafe1Chkd>& GetEventBackendOSM2_Bus_VehSpdLgtSafeGroupChkd() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_AsyDataWithCmpSafeChkd'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::AsyDataWithCmpSafe1Chkd::AsyDataWithCmpSafe1Chkd>& GetEventBackendOSM2_Bus_AsyDataWithCmpSafeChkd() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace objectfusionmodelsi_in

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_BACKEND_INTERFACE_H_

