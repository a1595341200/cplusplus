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
/**        \file  RVDCExe/include/amsr/someip_binding_xf/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_someip_event_design.h
 *        \brief  SOME/IP proxy event design info for events and field notifications of service 'ToSOCA_InfomationSI'
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

#ifndef RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_SOMEIP_EVENT_DESIGN_H_
#define RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/proxy_event_xf.h"
#include "tosoca_infomationsi/tosoca_infomationsi_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_tosoca_infomationsi {


namespace events {
namespace proxy {
namespace OSM2_Bus_ToSOCA_FunctionInfo {

// ---- Event 'OSM2_Bus_ToSOCA_FunctionInfo' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'OSM2_Bus_ToSOCA_FunctionInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"OSM2_Bus_ToSOCA_FunctionInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ToSOCA_FunctionInfo1VCCIDT
   */
  using SampleType = ::ToSOCA_FunctionInfo1VCCIDT::ToSOCA_FunctionInfo1VCCIDT;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using ToSOCA_InfomationSIProxySomeIpEventBackendOSM2_Bus_ToSOCA_FunctionInfo = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace OSM2_Bus_ToSOCA_FunctionInfo
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace OSM2_Bus_ToSOCA_COMInfo {

// ---- Event 'OSM2_Bus_ToSOCA_COMInfo' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'OSM2_Bus_ToSOCA_COMInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"OSM2_Bus_ToSOCA_COMInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ToSOCA_COMInfo1VCCIDT
   */
  using SampleType = ::ToSOCA_COMInfo1VCCIDT::ToSOCA_COMInfo1VCCIDT;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using ToSOCA_InfomationSIProxySomeIpEventBackendOSM2_Bus_ToSOCA_COMInfo = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace OSM2_Bus_ToSOCA_COMInfo
}  // namespace proxy
}  // namespace events


}  // namespace gen_tosoca_infomationsi
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_SOMEIP_EVENT_DESIGN_H_

