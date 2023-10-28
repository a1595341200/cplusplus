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
/**        \file  RoadModelFusionExe/include/ehrsi_out/EHRSI_Out_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'EHRSI_Out'.
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_BACKEND_INTERFACE_H_
#define ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "ehrsi_out/EHRSI_Out_types.h"

namespace ehrsi_out {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'EHRSI_Out'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class EHRSI_OutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  EHRSI_OutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~EHRSI_OutProxyBackendInterface() noexcept = default;

  EHRSI_OutProxyBackendInterface(EHRSI_OutProxyBackendInterface const &) = delete;

  EHRSI_OutProxyBackendInterface(EHRSI_OutProxyBackendInterface &&) = delete;

  EHRSI_OutProxyBackendInterface &operator=(EHRSI_OutProxyBackendInterface const &) & = delete;

  EHRSI_OutProxyBackendInterface &operator=(EHRSI_OutProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_NOAInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::NOAInfoIDT::NOAInfoIDT>& GetEventBackendEHR_Bus_NOAInfo() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneConnectivitys'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_PairConnectivityIDT_Vector::Array_PairConnectivityIDT_Vector>& GetEventBackendEHR_Bus_LaneConnectivitys() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_Nodes'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_PathNodeIDT_Vector::Array_PathNodeIDT_Vector>& GetEventBackendEHR_Bus_Nodes() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_TrafficSigns'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_PathTrafficSignsIDT_Vector::Array_PathTrafficSignsIDT_Vector>& GetEventBackendEHR_Bus_TrafficSigns() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_GeoFences'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_GeoFenceIDT_Vector::Array_GeoFenceIDT_Vector>& GetEventBackendEHR_Bus_GeoFences() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkCurvatures'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_LinkCurvatureIDT_Vector::Array_LinkCurvatureIDT_Vector>& GetEventBackendEHR_Bus_LinkCurvatures() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkSlopes'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_LinkSlopeIDT_Vector::Array_LinkSlopeIDT_Vector>& GetEventBackendEHR_Bus_LinkSlopes() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneSpeedLimits'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector>& GetEventBackendEHR_Bus_LaneSpeedLimits() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkInfos'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_LinkInfoIDT_Vector::Array_LinkInfoIDT_Vector>& GetEventBackendEHR_Bus_LinkInfos() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_AllMergePoints'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_LinkMergePointIDT_Vector::Array_LinkMergePointIDT_Vector>& GetEventBackendEHR_Bus_AllMergePoints() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinearObjects'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_LinearObjectIDT_Vector::Array_LinearObjectIDT_Vector>& GetEventBackendEHR_Bus_LinearObjects() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_FormOfWays'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_FormOfWayIDT_Vector::Array_FormOfWayIDT_Vector>& GetEventBackendEHR_Bus_FormOfWays() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_SequenceId'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::uint64IDT::uint64IDT>& GetEventBackendEHR_Bus_SequenceId() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneWidthes'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_LaneWidthIDT_Vector::Array_LaneWidthIDT_Vector>& GetEventBackendEHR_Bus_LaneWidthes() noexcept = 0;

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
}  // namespace ehrsi_out

#endif  // ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_BACKEND_INTERFACE_H_

