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
/**        \file  EDRExe/include/edrsi_in/EDRSI_In_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'EDRSI_In'.
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

#ifndef EDREXE_INCLUDE_EDRSI_IN_EDRSI_IN_PROXY_BACKEND_INTERFACE_H_
#define EDREXE_INCLUDE_EDRSI_IN_EDRSI_IN_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "edrsi_in/EDRSI_In_types.h"

namespace edrsi_in {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'EDRSI_In'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class EDRSI_InProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  EDRSI_InProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~EDRSI_InProxyBackendInterface() noexcept = default;

  EDRSI_InProxyBackendInterface(EDRSI_InProxyBackendInterface const &) = delete;

  EDRSI_InProxyBackendInterface(EDRSI_InProxyBackendInterface &&) = delete;

  EDRSI_InProxyBackendInterface &operator=(EDRSI_InProxyBackendInterface const &) & = delete;

  EDRSI_InProxyBackendInterface &operator=(EDRSI_InProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_EDR_Data'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::EDRDataGroupIDT::EDRDataGroupIDT>& GetEventBackendOSM2_Bus_EDR_Data() noexcept = 0;

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
}  // namespace edrsi_in

#endif  // EDREXE_INCLUDE_EDRSI_IN_EDRSI_IN_PROXY_BACKEND_INTERFACE_H_

