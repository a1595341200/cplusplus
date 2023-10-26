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
/**        \file  RVDCExe/include/mcu_data_info/MCU_Data_Info_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'MCU_Data_Info'.
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

#ifndef RVDCEXE_INCLUDE_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_BACKEND_INTERFACE_H_
#define RVDCEXE_INCLUDE_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "mcu_data_info/MCU_Data_Info_types.h"

namespace mcu_data_info {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'MCU_Data_Info'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class MCU_Data_InfoProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  MCU_Data_InfoProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~MCU_Data_InfoProxyBackendInterface() noexcept = default;

  MCU_Data_InfoProxyBackendInterface(MCU_Data_InfoProxyBackendInterface const &) = delete;

  MCU_Data_InfoProxyBackendInterface(MCU_Data_InfoProxyBackendInterface &&) = delete;

  MCU_Data_InfoProxyBackendInterface &operator=(MCU_Data_InfoProxyBackendInterface const &) & = delete;

  MCU_Data_InfoProxyBackendInterface &operator=(MCU_Data_InfoProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'Ids'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::Ids_Data>& GetEventBackendIds() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'Mcu_Reset_Info1'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::Mcu_Reset_Data>& GetEventBackendMcu_Reset_Info1() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'Mcu_Reset_Info2'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::Mcu_Reset_Data>& GetEventBackendMcu_Reset_Info2() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'Mcu_Reset_Info3'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::Mcu_Reset_Data>& GetEventBackendMcu_Reset_Info3() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'Mcu_Reset_Info4'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::Mcu_Reset_Data>& GetEventBackendMcu_Reset_Info4() noexcept = 0;

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
}  // namespace mcu_data_info

#endif  // RVDCEXE_INCLUDE_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_BACKEND_INTERFACE_H_

