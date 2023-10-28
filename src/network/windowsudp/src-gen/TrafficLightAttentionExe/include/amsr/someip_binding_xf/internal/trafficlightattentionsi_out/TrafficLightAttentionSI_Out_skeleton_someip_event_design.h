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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_binding_xf/internal/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_someip_event_design.h
 *        \brief  SOME/IP skeleton event design info for events and field notifications of service 'TrafficLightAttentionSI_Out'
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/skeleton_event_xf.h"
#include "trafficlightattentionsi_out/trafficlightattentionsi_out_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_trafficlightattentionsi_out {


namespace events {
namespace skeleton {
namespace TLA_Bus_HMIDataTrfcLi {

// ---- Event 'TLA_Bus_HMIDataTrfcLi' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'TLA_Bus_HMIDataTrfcLi'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"TLA_Bus_HMIDataTrfcLi"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/HMIDataTrfcLi1VccIDT
   */
  using SampleType = ::HMIDataTrfcLi1VccIDT::HMIDataTrfcLi1VccIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'TLA_Bus_HMIDataTrfcLi'.
 */
using TrafficLightAttentionSI_OutSkeletonSomeIpEventManagerTLA_Bus_HMIDataTrfcLi =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace TLA_Bus_HMIDataTrfcLi
}  // namespace skeleton
}  // namespace events


}  // namespace gen_trafficlightattentionsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

