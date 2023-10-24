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
/**        \file  RtkExe/include/amsr/someip_binding_xf/internal/rtk_p/Rtk_Provide_skeleton_someip_event_design.h
 *        \brief  SOME/IP skeleton event design info for events and field notifications of service 'Rtk_Provide'
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

#ifndef RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_P_RTK_PROVIDE_SKELETON_SOMEIP_EVENT_DESIGN_H_
#define RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_P_RTK_PROVIDE_SKELETON_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/skeleton_event_xf.h"
#include "rtk_p/rtk_provide_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_rtk_p {


namespace events {
namespace skeleton {
namespace GgaData_provide {

// ---- Event 'GgaData_provide' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'GgaData_provide'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"GgaData_provide"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RTK/GgaData
   */
  using SampleType = ::SOMEIP::ValidationKey::GgaData;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'GgaData_provide'.
 */
using Rtk_ProvideSkeletonSomeIpEventManagerGgaData_provide =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace GgaData_provide
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace ErrorCode {

// ---- Event 'ErrorCode' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'ErrorCode'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"ErrorCode"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RTK/RtkErrorCode
   */
  using SampleType = ::SOMEIP::ValidationKey::RtkErrorCode;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'ErrorCode'.
 */
using Rtk_ProvideSkeletonSomeIpEventManagerErrorCode =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace ErrorCode
}  // namespace skeleton
}  // namespace events


}  // namespace gen_rtk_p
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_P_RTK_PROVIDE_SKELETON_SOMEIP_EVENT_DESIGN_H_

