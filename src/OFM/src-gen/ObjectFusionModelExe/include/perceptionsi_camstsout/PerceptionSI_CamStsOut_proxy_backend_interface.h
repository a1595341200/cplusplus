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
/**        \file  ObjectFusionModelExe/include/perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'PerceptionSI_CamStsOut'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_BACKEND_INTERFACE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "perceptionsi_camstsout/PerceptionSI_CamStsOut_types.h"

namespace perceptionsi_camstsout {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'PerceptionSI_CamStsOut'
 * \remark generated
 */
class PerceptionSI_CamStsOutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  PerceptionSI_CamStsOutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~PerceptionSI_CamStsOutProxyBackendInterface() noexcept = default;

  PerceptionSI_CamStsOutProxyBackendInterface(PerceptionSI_CamStsOutProxyBackendInterface const &) = delete;

  PerceptionSI_CamStsOutProxyBackendInterface(PerceptionSI_CamStsOutProxyBackendInterface &&) = delete;

  PerceptionSI_CamStsOutProxyBackendInterface &operator=(PerceptionSI_CamStsOutProxyBackendInterface const &) & = delete;

  PerceptionSI_CamStsOutProxyBackendInterface &operator=(PerceptionSI_CamStsOutProxyBackendInterface &&) & = delete;

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
   * \brief Get the event manager object for the service event 'FrntCam_Bus_CamSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::CamSts1Vcc::CamSts1Vcc>& GetEventBackendFrntCam_Bus_CamSts() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace perceptionsi_camstsout

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_BACKEND_INTERFACE_H_

