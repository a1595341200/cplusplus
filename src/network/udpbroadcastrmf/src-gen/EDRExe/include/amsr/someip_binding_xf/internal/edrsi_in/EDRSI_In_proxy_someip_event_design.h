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
/**        \file  EDRExe/include/amsr/someip_binding_xf/internal/edrsi_in/EDRSI_In_proxy_someip_event_design.h
 *        \brief  SOME/IP proxy event design info for events and field notifications of service 'EDRSI_In'
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

#ifndef EDREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_EDRSI_IN_EDRSI_IN_PROXY_SOMEIP_EVENT_DESIGN_H_
#define EDREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_EDRSI_IN_EDRSI_IN_PROXY_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/proxy_event_xf.h"
#include "edrsi_in/edrsi_in_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_edrsi_in {


namespace events {
namespace proxy {
namespace OSM2_Bus_EDR_Data {

// ---- Event 'OSM2_Bus_EDR_Data' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'OSM2_Bus_EDR_Data'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"OSM2_Bus_EDR_Data"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/EDRDataGroupIDT
   */
  using SampleType = ::EDRDataGroupIDT::EDRDataGroupIDT;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using EDRSI_InProxySomeIpEventBackendOSM2_Bus_EDR_Data = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace OSM2_Bus_EDR_Data
}  // namespace proxy
}  // namespace events


}  // namespace gen_edrsi_in
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // EDREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_EDRSI_IN_EDRSI_IN_PROXY_SOMEIP_EVENT_DESIGN_H_

