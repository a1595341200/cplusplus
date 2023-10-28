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
/**        \file  UTC0Exe/include/amsr/someip_binding_xf/internal/utc0si_out/UTC0SI_Out_skeleton_someip_event_design.h
 *        \brief  SOME/IP skeleton event design info for events and field notifications of service 'UTC0SI_Out'
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

#ifndef UTC0EXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_UTC0SI_OUT_UTC0SI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_
#define UTC0EXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_UTC0SI_OUT_UTC0SI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/skeleton_event_xf.h"
#include "utc0si_out/utc0si_out_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_utc0si_out {


namespace events {
namespace skeleton {
namespace UTC0_Bus_VehTiAndData {

// ---- Event 'UTC0_Bus_VehTiAndData' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'UTC0_Bus_VehTiAndData'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"UTC0_Bus_VehTiAndData"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/DateTi30_2IDT
   */
  using SampleType = ::DateTi30_2IDT::DateTi30_2IDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'UTC0_Bus_VehTiAndData'.
 */
using UTC0SI_OutSkeletonSomeIpEventManagerUTC0_Bus_VehTiAndData =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace UTC0_Bus_VehTiAndData
}  // namespace skeleton
}  // namespace events


}  // namespace gen_utc0si_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // UTC0EXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_UTC0SI_OUT_UTC0SI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

