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
/**        \file  PerceptionRearExe/include/amsr/someip_binding_xf/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_someip_event_design.h
 *        \brief  SOME/IP proxy event design info for events and field notifications of service 'ToSOCA_LocSensorInfoSI'
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

#ifndef PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_SOMEIP_EVENT_DESIGN_H_
#define PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/proxy_event_xf.h"
#include "tosoca_locsensorinfosi/tosoca_locsensorinfosi_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_tosoca_locsensorinfosi {


namespace events {
namespace proxy {
namespace OSM2_Bus_LocSensorInfo {

// ---- Event 'OSM2_Bus_LocSensorInfo' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'OSM2_Bus_LocSensorInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"OSM2_Bus_LocSensorInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LocSensorInfo1VCCIDT
   */
  using SampleType = ::LocSensorInfo1VCCIDT::LocSensorInfo1VCCIDT;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using ToSOCA_LocSensorInfoSIProxySomeIpEventBackendOSM2_Bus_LocSensorInfo = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace OSM2_Bus_LocSensorInfo
}  // namespace proxy
}  // namespace events


}  // namespace gen_tosoca_locsensorinfosi
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_SOMEIP_EVENT_DESIGN_H_

