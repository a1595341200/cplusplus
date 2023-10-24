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
/**        \file  PerceptionExe/include/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'ToSOCA_InfomationSI'.
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

#ifndef PERCEPTIONEXE_INCLUDE_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_BACKEND_INTERFACE_H_
#define PERCEPTIONEXE_INCLUDE_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "tosoca_infomationsi/ToSOCA_InfomationSI_types.h"

namespace tosoca_infomationsi {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'ToSOCA_InfomationSI'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class ToSOCA_InfomationSIProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  ToSOCA_InfomationSIProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~ToSOCA_InfomationSIProxyBackendInterface() noexcept = default;

  ToSOCA_InfomationSIProxyBackendInterface(ToSOCA_InfomationSIProxyBackendInterface const &) = delete;

  ToSOCA_InfomationSIProxyBackendInterface(ToSOCA_InfomationSIProxyBackendInterface &&) = delete;

  ToSOCA_InfomationSIProxyBackendInterface &operator=(ToSOCA_InfomationSIProxyBackendInterface const &) & = delete;

  ToSOCA_InfomationSIProxyBackendInterface &operator=(ToSOCA_InfomationSIProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_ToSOCA_FunctionInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::ToSOCA_FunctionInfo1VCCIDT::ToSOCA_FunctionInfo1VCCIDT>& GetEventBackendOSM2_Bus_ToSOCA_FunctionInfo() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_ToSOCA_COMInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::ToSOCA_COMInfo1VCCIDT::ToSOCA_COMInfo1VCCIDT>& GetEventBackendOSM2_Bus_ToSOCA_COMInfo() noexcept = 0;

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
}  // namespace tosoca_infomationsi

#endif  // PERCEPTIONEXE_INCLUDE_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_BACKEND_INTERFACE_H_

