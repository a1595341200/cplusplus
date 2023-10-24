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
/**        \file  RVDCExe/include/mcu_data_info/mcu_data_info_proxy.h
 *        \brief  Proxy for service 'MCU_Data_Info'.
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

#ifndef RVDCEXE_INCLUDE_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_H_
#define RVDCEXE_INCLUDE_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_H_

/*!
 * \trace SPEC-4980240
 */
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/definitions.h"
#include "amsr/socal/events/proxy_event.h"
#include "amsr/socal/fields/proxy_field.h"
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/logging/ara_com_logger.h"
#include "amsr/socal/internal/specialization_types_thread_driven.h"
#include "amsr/socal/methods/proxy_method.h"
#include "amsr/socal/thread_driven_proxy.h"
#include "mcu_data_info/MCU_Data_Info_proxy_backend_interface.h"
#include "mcu_data_info/MCU_Data_Info_types.h"
#include "mcu_data_info/mcu_data_info_common.h"

/*!
 * \trace SPEC-4980240
 */
namespace mcu_data_info {

/*!
 * \trace SPEC-4980242
 */
namespace proxy {

/*!
 * \trace SPEC-4980244
 */
namespace methods {

}  // namespace methods

/*!
 * \trace SPEC-4980243
 */
namespace events {

/*!
 * \brief Type alias for service event 'Ids', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using Ids =
    ::amsr::socal::events::ProxyEvent<::SOMEIP::ValidationKey::Ids_Data, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'Mcu_Reset_Info1', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using Mcu_Reset_Info1 =
    ::amsr::socal::events::ProxyEvent<::SOMEIP::ValidationKey::Mcu_Reset_Data, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'Mcu_Reset_Info2', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using Mcu_Reset_Info2 =
    ::amsr::socal::events::ProxyEvent<::SOMEIP::ValidationKey::Mcu_Reset_Data, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'Mcu_Reset_Info3', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using Mcu_Reset_Info3 =
    ::amsr::socal::events::ProxyEvent<::SOMEIP::ValidationKey::Mcu_Reset_Data, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'Mcu_Reset_Info4', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using Mcu_Reset_Info4 =
    ::amsr::socal::events::ProxyEvent<::SOMEIP::ValidationKey::Mcu_Reset_Data, ::amsr::socal::kRuntimeProcessingMode>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'MCU_Data_Info'.
 * \vpublic
 *
 * \trace SPEC-4980344
 * \unit Socal::Proxy::Proxy
 */
class MCU_Data_InfoProxy : public ::amsr::socal::ThreadDrivenProxy<mcu_data_info::MCU_Data_Info, mcu_data_info::internal::MCU_Data_InfoProxyBackendInterface, mcu_data_info::internal::MCU_Data_InfoHandleType>{
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = mcu_data_info::internal::MCU_Data_InfoProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of MCU_Data_InfoProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * MCU_Data_InfoProxy::FindService or asynchronous MCU_Data_InfoProxy::StartFindService.
  * The handle object passed as a parameter shall be a handle returned by a FindService call for this specific service.
  * Passing handles from different services is currently possible, but is detected. An exception is raised as documented below.
  *
  * \return Result<ConstructionToken> Result containing construction token from which a proxy object can be
  *                                   constructed.
  * \pre "Runtime" must be initialized.
  * \pre The instance identifier of the \p handle must be known.
  * \pre The proxy backend must be spawned.
  * \pre The provided \p handle must match the handle of the service.
  *
  * \context App
  * \threadsafe FALSE
  * \reentrant FALSE
  * \vpublic
  * \synchronous TRUE
  * \trace SPEC-8053550
  * \trace SPEC-8053560
  */
  static ConstructionResult Preconstruct(HandleType const& handle) noexcept;

  /*!
  * \brief Exception-less constructor of MCU_Data_InfoProxy.
  * \details Handles exception-less construction of a proxy based on the availability of
  *          a valid token.
  *
  * \param[in] token ConstructionToken created with "Preconstruct()" API.
  *
  * \pre No other service proxy for the same instance identifier must exist concurrently. After destruction of an
  *      already created proxy object, the instantation for the same service instance will be possible.
  * \pre IAM access must be granted.
  * \context App
  * \threadsafe FALSE
  * \reentrant FALSE
  * \vpublic
  * \synchronous TRUE
  * \trace SPEC-8053550
  */
  explicit MCU_Data_InfoProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of MCU_Data_InfoProxy. Constructor takes a handle returned by
  * MCU_Data_InfoProxy::FindService() method or provided as parameter to the callback handler of
  * MCU_Data_InfoProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * MCU_Data_InfoProxy::FindService or asynchronous MCU_Data_InfoProxy::StartFindService.
  * The handle object passed as a parameter shall be a handle returned by a FindService call for this specific service.
  * Passing handles from different services is currently possible, but is detected. An exception is raised as documented below.
  *
  * \pre "Runtime" must be initialized.
  * \pre The instance identifier of the \p handle must be known.
  * \pre The proxy backend must be spawned.
  * \pre The provided \p handle must match the handle of the service.
  * \pre No other service proxy for the same instance identifier must exist concurrently. After destruction of an
  *      already created proxy object, the instantation for the same service instance will be possible.
  *
  * \pre IAM access must be granted.
  * \context App
  * \threadsafe FALSE
  * \reentrant FALSE
  * \vprivate Vector component internal API.
  * \synchronous TRUE
  * \trace SPEC-4980371
  */
  explicit MCU_Data_InfoProxy(HandleType const& handle) noexcept;

  /*!
   * \brief Use default copy constructor.
   * \vpublic
   * \pre     -
   * \context App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  MCU_Data_InfoProxy(MCU_Data_InfoProxy const&) noexcept = default;

  /*!
   * \brief Use default move constructor.
   * \vpublic
   * \pre     -
   * \context App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  MCU_Data_InfoProxy(MCU_Data_InfoProxy&&) noexcept = default;

  /*!
   * \brief Use default copy assignment.
   * \vpublic
   * \pre     -
   * \context App
   * \threadsafe  FALSE for same class instance, TRUE for different instances.
   * \reentrant   FALSE for same class instance, TRUE for different instances.
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  MCU_Data_InfoProxy& operator=(MCU_Data_InfoProxy const&) & noexcept = default;

  /*!
   * \brief Use default move assignment.
   * \vpublic
   * \pre     -
   * \context App
   * \threadsafe  FALSE for same class instance, TRUE for different instances.
   * \reentrant   FALSE for same class instance, TRUE for different instances.
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  MCU_Data_InfoProxy& operator=(MCU_Data_InfoProxy&&) & noexcept = default;

  /*!
   * \brief Perform cleanup of proxy instance.
   *
   * \details Unsubscribes all event and field notifications and unsets event receive and subscription state change
   * handlers. Finally, unregisters the proxy from the communication middleware.
   * This call will be blocked until all current events/methods' callbacks are finished/canceled.
   *
   * \pre -
   * \context     App
   * \threadsafe  FALSE for same class instance, TRUE for different instances.
   * \reentrant   FALSE for same class instance, TRUE for different instances.
   * \vpublic
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  ~MCU_Data_InfoProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::ThreadDrivenProxy<mcu_data_info::MCU_Data_Info, ProxyBackendInterface, mcu_data_info::internal::MCU_Data_InfoHandleType>;

 public:



  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'Ids' which can be used by application developer.
   * \details
   * Data of type ::SOMEIP::ValidationKey::Ids_Data 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::Ids Ids;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'Mcu_Reset_Info1' which can be used by application developer.
   * \details
   * Data of type ::SOMEIP::ValidationKey::Mcu_Reset_Data 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::Mcu_Reset_Info1 Mcu_Reset_Info1;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'Mcu_Reset_Info2' which can be used by application developer.
   * \details
   * Data of type ::SOMEIP::ValidationKey::Mcu_Reset_Data 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::Mcu_Reset_Info2 Mcu_Reset_Info2;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'Mcu_Reset_Info3' which can be used by application developer.
   * \details
   * Data of type ::SOMEIP::ValidationKey::Mcu_Reset_Data 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::Mcu_Reset_Info3 Mcu_Reset_Info3;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'Mcu_Reset_Info4' which can be used by application developer.
   * \details
   * Data of type ::SOMEIP::ValidationKey::Mcu_Reset_Data 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::Mcu_Reset_Info4 Mcu_Reset_Info4;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace mcu_data_info

#endif  // RVDCEXE_INCLUDE_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_H_

