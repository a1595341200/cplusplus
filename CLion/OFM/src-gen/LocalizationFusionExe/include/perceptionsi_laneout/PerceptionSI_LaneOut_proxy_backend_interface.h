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
/**        \file  LocalizationFusionExe/include/perceptionsi_laneout/PerceptionSI_LaneOut_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'PerceptionSI_LaneOut'.
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_BACKEND_INTERFACE_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "perceptionsi_laneout/PerceptionSI_LaneOut_types.h"

namespace perceptionsi_laneout {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'PerceptionSI_LaneOut'
 * \remark generated
 */
class PerceptionSI_LaneOutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  PerceptionSI_LaneOutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~PerceptionSI_LaneOutProxyBackendInterface() noexcept = default;

  PerceptionSI_LaneOutProxyBackendInterface(PerceptionSI_LaneOutProxyBackendInterface const &) = delete;

  PerceptionSI_LaneOutProxyBackendInterface(PerceptionSI_LaneOutProxyBackendInterface &&) = delete;

  PerceptionSI_LaneOutProxyBackendInterface &operator=(PerceptionSI_LaneOutProxyBackendInterface const &) & = delete;

  PerceptionSI_LaneOutProxyBackendInterface &operator=(PerceptionSI_LaneOutProxyBackendInterface &&) & = delete;

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
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrLe'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneMkrCam1Le::LaneMkrCam1Le>& GetEventBackendFusedCam_Bus_LaneMkrLe() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrRi'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneMkrCam1Ri::LaneMkrCam1Ri>& GetEventBackendFusedCam_Bus_LaneMkrRi() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_RoadEdgeLe'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::RoadEdge1VccLe::RoadEdge1VccLe>& GetEventBackendFrntCam_Bus_RoadEdgeLe() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_RoadEdgeRi'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::RoadEdge1VccRi::RoadEdge1VccRi>& GetEventBackendFrntCam_Bus_RoadEdgeRi() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'Cam_Bus_LaneEvent'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneEvent::LaneEvent>& GetEventBackendCam_Bus_LaneEvent() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'Cam_Bus_LaneEventGroup'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneEventGroups::LaneEventGroups>& GetEventBackendCam_Bus_LaneEventGroup() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'Cam_Bus_LaneMkrTemp'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneMkrTempCam1Vcc::LaneMkrTempCam1Vcc>& GetEventBackendCam_Bus_LaneMkrTemp() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrSecClsLe'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneMkrCam1SecClsLe::LaneMkrCam1SecClsLe>& GetEventBackendFusedCam_Bus_LaneMkrSecClsLe() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrSecClsRi'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneMkrCam1SecClsRi::LaneMkrCam1SecClsRi>& GetEventBackendFusedCam_Bus_LaneMkrSecClsRi() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace perceptionsi_laneout

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_BACKEND_INTERFACE_H_

