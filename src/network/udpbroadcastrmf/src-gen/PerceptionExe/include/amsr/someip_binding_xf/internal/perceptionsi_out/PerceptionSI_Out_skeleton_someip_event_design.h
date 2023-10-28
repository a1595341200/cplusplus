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
/**        \file  PerceptionExe/include/amsr/someip_binding_xf/internal/perceptionsi_out/PerceptionSI_Out_skeleton_someip_event_design.h
 *        \brief  SOME/IP skeleton event design info for events and field notifications of service 'PerceptionSI_Out'
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/skeleton_event_xf.h"
#include "perceptionsi_out/perceptionsi_out_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_perceptionsi_out {


namespace events {
namespace skeleton {
namespace Perception_Bus_LaneInfo {

// ---- Event 'Perception_Bus_LaneInfo' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'Perception_Bus_LaneInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"Perception_Bus_LaneInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/PerceptionLaneInfoIDT
   */
  using SampleType = ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'Perception_Bus_LaneInfo'.
 */
using PerceptionSI_OutSkeletonSomeIpEventManagerPerception_Bus_LaneInfo =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace Perception_Bus_LaneInfo
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace Perception_Bus_FrntCamInfo {

// ---- Event 'Perception_Bus_FrntCamInfo' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'Perception_Bus_FrntCamInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"Perception_Bus_FrntCamInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FrntCamInfoIDT
   */
  using SampleType = ::FrntCamInfoIDT::FrntCamInfoIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'Perception_Bus_FrntCamInfo'.
 */
using PerceptionSI_OutSkeletonSomeIpEventManagerPerception_Bus_FrntCamInfo =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace Perception_Bus_FrntCamInfo
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace FrntCam_Bus_TrafficInfo {

// ---- Event 'FrntCam_Bus_TrafficInfo' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'FrntCam_Bus_TrafficInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"FrntCam_Bus_TrafficInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/TrafficInfoIDT
   */
  using SampleType = ::TrafficInfoIDT::TrafficInfoIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'FrntCam_Bus_TrafficInfo'.
 */
using PerceptionSI_OutSkeletonSomeIpEventManagerFrntCam_Bus_TrafficInfo =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace FrntCam_Bus_TrafficInfo
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace FrntCam_Bus_TrfcLi {

// ---- Event 'FrntCam_Bus_TrfcLi' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'FrntCam_Bus_TrfcLi'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"FrntCam_Bus_TrfcLi"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_TrfcLi1VccIDT_8
   */
  using SampleType = ::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'FrntCam_Bus_TrfcLi'.
 */
using PerceptionSI_OutSkeletonSomeIpEventManagerFrntCam_Bus_TrfcLi =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace FrntCam_Bus_TrfcLi
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace FrntCam_Bus_LineSignGroup {

// ---- Event 'FrntCam_Bus_LineSignGroup' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'FrntCam_Bus_LineSignGroup'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"FrntCam_Bus_LineSignGroup"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LineSignGroupIDT
   */
  using SampleType = ::LineSignGroupIDT::LineSignGroupIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'FrntCam_Bus_LineSignGroup'.
 */
using PerceptionSI_OutSkeletonSomeIpEventManagerFrntCam_Bus_LineSignGroup =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace FrntCam_Bus_LineSignGroup
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace FrntCam_Bus_ExtInfo {

// ---- Event 'FrntCam_Bus_ExtInfo' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'FrntCam_Bus_ExtInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"FrntCam_Bus_ExtInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ExtInfoIDT
   */
  using SampleType = ::ExtInfoIDT::ExtInfoIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'FrntCam_Bus_ExtInfo'.
 */
using PerceptionSI_OutSkeletonSomeIpEventManagerFrntCam_Bus_ExtInfo =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace FrntCam_Bus_ExtInfo
}  // namespace skeleton
}  // namespace events


}  // namespace gen_perceptionsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

