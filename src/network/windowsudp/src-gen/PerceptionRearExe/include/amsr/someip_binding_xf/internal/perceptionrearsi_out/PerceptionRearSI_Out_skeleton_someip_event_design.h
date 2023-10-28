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
/**        \file  PerceptionRearExe/include/amsr/someip_binding_xf/internal/perceptionrearsi_out/PerceptionRearSI_Out_skeleton_someip_event_design.h
 *        \brief  SOME/IP skeleton event design info for events and field notifications of service 'PerceptionRearSI_Out'
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

#ifndef PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_
#define PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/skeleton_event_xf.h"
#include "perceptionrearsi_out/perceptionrearsi_out_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_perceptionrearsi_out {


namespace events {
namespace skeleton {
namespace PerceptionRear_Bus_LaneInfo {

// ---- Event 'PerceptionRear_Bus_LaneInfo' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'PerceptionRear_Bus_LaneInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"PerceptionRear_Bus_LaneInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/PerceptionRearLaneInfoIDT
   */
  using SampleType = ::PerceptionRearLaneInfoIDT::PerceptionRearLaneInfoIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'PerceptionRear_Bus_LaneInfo'.
 */
using PerceptionRearSI_OutSkeletonSomeIpEventManagerPerceptionRear_Bus_LaneInfo =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace PerceptionRear_Bus_LaneInfo
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace PerceptionRear_Bus_CameraStatus {

// ---- Event 'PerceptionRear_Bus_CameraStatus' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'PerceptionRear_Bus_CameraStatus'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"PerceptionRear_Bus_CameraStatus"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RearCamSts1VccIDT
   */
  using SampleType = ::RearCamSts1VccIDT::RearCamSts1VccIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'PerceptionRear_Bus_CameraStatus'.
 */
using PerceptionRearSI_OutSkeletonSomeIpEventManagerPerceptionRear_Bus_CameraStatus =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace PerceptionRear_Bus_CameraStatus
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace PerceptionRear_Bus_VisnObj {

// ---- Event 'PerceptionRear_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'PerceptionRear_Bus_VisnObj'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"PerceptionRear_Bus_VisnObj"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_VisObjIDT_20
   */
  using SampleType = ::Array_VisObjIDT_20::Array_VisObjIDT_20;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'PerceptionRear_Bus_VisnObj'.
 */
using PerceptionRearSI_OutSkeletonSomeIpEventManagerPerceptionRear_Bus_VisnObj =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace PerceptionRear_Bus_VisnObj
}  // namespace skeleton
}  // namespace events


}  // namespace gen_perceptionrearsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

