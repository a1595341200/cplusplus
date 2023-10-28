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
/**        \file  PerceptionExe/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'ToSOCA_LocSensorInfoSI'.
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

#ifndef PERCEPTIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_BACKEND_INTERFACE_H_
#define PERCEPTIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_types.h"

namespace tosoca_locsensorinfosi {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'ToSOCA_LocSensorInfoSI'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class ToSOCA_LocSensorInfoSIProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  ToSOCA_LocSensorInfoSIProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~ToSOCA_LocSensorInfoSIProxyBackendInterface() noexcept = default;

  ToSOCA_LocSensorInfoSIProxyBackendInterface(ToSOCA_LocSensorInfoSIProxyBackendInterface const &) = delete;

  ToSOCA_LocSensorInfoSIProxyBackendInterface(ToSOCA_LocSensorInfoSIProxyBackendInterface &&) = delete;

  ToSOCA_LocSensorInfoSIProxyBackendInterface &operator=(ToSOCA_LocSensorInfoSIProxyBackendInterface const &) & = delete;

  ToSOCA_LocSensorInfoSIProxyBackendInterface &operator=(ToSOCA_LocSensorInfoSIProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_LocSensorInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LocSensorInfo1VCCIDT::LocSensorInfo1VCCIDT>& GetEventBackendOSM2_Bus_LocSensorInfo() noexcept = 0;

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
}  // namespace tosoca_locsensorinfosi

#endif  // PERCEPTIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_BACKEND_INTERFACE_H_

