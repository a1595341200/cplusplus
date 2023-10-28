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
/**        \file  RVDCExe/include/edrsi_out/EDRSI_Out_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'EDRSI_Out'.
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

#ifndef RVDCEXE_INCLUDE_EDRSI_OUT_EDRSI_OUT_PROXY_BACKEND_INTERFACE_H_
#define RVDCEXE_INCLUDE_EDRSI_OUT_EDRSI_OUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "edrsi_out/EDRSI_Out_types.h"

namespace edrsi_out {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'EDRSI_Out'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class EDRSI_OutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  EDRSI_OutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~EDRSI_OutProxyBackendInterface() noexcept = default;

  EDRSI_OutProxyBackendInterface(EDRSI_OutProxyBackendInterface const &) = delete;

  EDRSI_OutProxyBackendInterface(EDRSI_OutProxyBackendInterface &&) = delete;

  EDRSI_OutProxyBackendInterface &operator=(EDRSI_OutProxyBackendInterface const &) & = delete;

  EDRSI_OutProxyBackendInterface &operator=(EDRSI_OutProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'EDR_Bus_EDRInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::s_EDRInfo_tIDT::s_EDRInfo_tIDT>& GetEventBackendEDR_Bus_EDRInfo() noexcept = 0;

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
}  // namespace edrsi_out

#endif  // RVDCEXE_INCLUDE_EDRSI_OUT_EDRSI_OUT_PROXY_BACKEND_INTERFACE_H_

