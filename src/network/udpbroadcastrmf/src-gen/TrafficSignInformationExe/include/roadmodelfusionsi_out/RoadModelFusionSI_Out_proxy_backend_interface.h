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
/**        \file  TrafficSignInformationExe/include/roadmodelfusionsi_out/RoadModelFusionSI_Out_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'RoadModelFusionSI_Out'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
 *********************************************************************************************************************/

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PROXY_BACKEND_INTERFACE_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "roadmodelfusionsi_out/RoadModelFusionSI_Out_types.h"

namespace roadmodelfusionsi_out {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'RoadModelFusionSI_Out'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class RoadModelFusionSI_OutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  RoadModelFusionSI_OutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~RoadModelFusionSI_OutProxyBackendInterface() noexcept = default;

  RoadModelFusionSI_OutProxyBackendInterface(RoadModelFusionSI_OutProxyBackendInterface const &) = delete;

  RoadModelFusionSI_OutProxyBackendInterface(RoadModelFusionSI_OutProxyBackendInterface &&) = delete;

  RoadModelFusionSI_OutProxyBackendInterface &operator=(RoadModelFusionSI_OutProxyBackendInterface const &) & = delete;

  RoadModelFusionSI_OutProxyBackendInterface &operator=(RoadModelFusionSI_OutProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_RMFInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::RMFInfoIDT::RMFInfoIDT>& GetEventBackendRMF_Bus_RMFInfo() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_MapInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::RMFMapInfoIDT::RMFMapInfoIDT>& GetEventBackendRMF_Bus_MapInfo() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_VectorMapInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::VectorMapInfoIDT::VectorMapInfoIDT>& GetEventBackendRMF_Bus_VectorMapInfo() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_Position'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::PositionIDT::PositionIDT>& GetEventBackendRMF_Bus_Position() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------

    /*!
   * \brief Get the connection state between proxy and skeleton.
   * \return amsr::socal::SkeletonConnectionState.
   * \pre -
   * \context    App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::SkeletonConnectionState ReadSkeletonConnectionState() noexcept = 0;
};

} //namespace internal
}  // namespace roadmodelfusionsi_out

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PROXY_BACKEND_INTERFACE_H_

