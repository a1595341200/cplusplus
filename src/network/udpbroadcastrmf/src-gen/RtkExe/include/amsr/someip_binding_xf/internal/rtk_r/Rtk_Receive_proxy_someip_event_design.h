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
/**        \file  RtkExe/include/amsr/someip_binding_xf/internal/rtk_r/Rtk_Receive_proxy_someip_event_design.h
 *        \brief  SOME/IP proxy event design info for events and field notifications of service 'Rtk_Receive'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 34a78d6264927917d6838a378b15b039fd1cad4a
 *********************************************************************************************************************/

#ifndef RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_R_RTK_RECEIVE_PROXY_SOMEIP_EVENT_DESIGN_H_
#define RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_R_RTK_RECEIVE_PROXY_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/proxy_event_xf.h"
#include "rtk_r/rtk_receive_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_rtk_r {


namespace events {
namespace proxy {
namespace GgaData_receive {

// ---- Event 'GgaData_receive' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'GgaData_receive'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"GgaData_receive"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RTK/GgaData
   */
  using SampleType = ::SOMEIP::ValidationKey::GgaData;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using Rtk_ReceiveProxySomeIpEventBackendGgaData_receive = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace GgaData_receive
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace VIN {

// ---- Event 'VIN' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'VIN'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"VIN"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RTK/RtkVIN
   */
  using SampleType = ::SOMEIP::ValidationKey::RtkVIN;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using Rtk_ReceiveProxySomeIpEventBackendVIN = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace VIN
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace AgnssData_receive {

// ---- Event 'AgnssData_receive' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'AgnssData_receive'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"AgnssData_receive"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RTK/RtkVIN
   */
  using SampleType = ::SOMEIP::ValidationKey::RtkVIN;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using Rtk_ReceiveProxySomeIpEventBackendAgnssData_receive = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace AgnssData_receive
}  // namespace proxy
}  // namespace events


}  // namespace gen_rtk_r
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_R_RTK_RECEIVE_PROXY_SOMEIP_EVENT_DESIGN_H_

