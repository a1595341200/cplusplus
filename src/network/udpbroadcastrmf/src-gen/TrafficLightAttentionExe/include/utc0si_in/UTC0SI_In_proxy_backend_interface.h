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
/**        \file  TrafficLightAttentionExe/include/utc0si_in/UTC0SI_In_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'UTC0SI_In'.
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_PROXY_BACKEND_INTERFACE_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "utc0si_in/UTC0SI_In_types.h"

namespace utc0si_in {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'UTC0SI_In'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class UTC0SI_InProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  UTC0SI_InProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~UTC0SI_InProxyBackendInterface() noexcept = default;

  UTC0SI_InProxyBackendInterface(UTC0SI_InProxyBackendInterface const &) = delete;

  UTC0SI_InProxyBackendInterface(UTC0SI_InProxyBackendInterface &&) = delete;

  UTC0SI_InProxyBackendInterface &operator=(UTC0SI_InProxyBackendInterface const &) & = delete;

  UTC0SI_InProxyBackendInterface &operator=(UTC0SI_InProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_VehTiAndData'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::DateTi30_2IDT::DateTi30_2IDT>& GetEventBackendOSM2_Bus_VehTiAndData() noexcept = 0;

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
}  // namespace utc0si_in

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_PROXY_BACKEND_INTERFACE_H_

