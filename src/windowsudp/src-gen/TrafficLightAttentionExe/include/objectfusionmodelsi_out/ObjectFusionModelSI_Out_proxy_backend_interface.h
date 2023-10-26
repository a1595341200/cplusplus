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
/**        \file  TrafficLightAttentionExe/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'ObjectFusionModelSI_Out'.
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_BACKEND_INTERFACE_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_types.h"

namespace objectfusionmodelsi_out {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'ObjectFusionModelSI_Out'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class ObjectFusionModelSI_OutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  ObjectFusionModelSI_OutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~ObjectFusionModelSI_OutProxyBackendInterface() noexcept = default;

  ObjectFusionModelSI_OutProxyBackendInterface(ObjectFusionModelSI_OutProxyBackendInterface const &) = delete;

  ObjectFusionModelSI_OutProxyBackendInterface(ObjectFusionModelSI_OutProxyBackendInterface &&) = delete;

  ObjectFusionModelSI_OutProxyBackendInterface &operator=(ObjectFusionModelSI_OutProxyBackendInterface const &) & = delete;

  ObjectFusionModelSI_OutProxyBackendInterface &operator=(ObjectFusionModelSI_OutProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets01'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8>& GetEventBackendOFM_Bus_FusedTargets01() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets02'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8>& GetEventBackendOFM_Bus_FusedTargets02() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets03'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8>& GetEventBackendOFM_Bus_FusedTargets03() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets04'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8>& GetEventBackendOFM_Bus_FusedTargets04() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_St_SOCFusedSts'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::uint16IDT::uint16IDT>& GetEventBackendOFM_St_SOCFusedSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FourDRadarStatus'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarStatusIDT::FourDRadarStatusIDT>& GetEventBackendOFM_Bus_FourDRadarStatus() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_LaneInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT>& GetEventBackendOFM_Bus_LaneInfo() noexcept = 0;

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
}  // namespace objectfusionmodelsi_out

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_BACKEND_INTERFACE_H_

