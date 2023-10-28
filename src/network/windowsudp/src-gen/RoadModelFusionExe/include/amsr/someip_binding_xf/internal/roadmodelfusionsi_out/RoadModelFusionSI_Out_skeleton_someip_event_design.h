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
/**        \file  RoadModelFusionExe/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_event_design.h
 *        \brief  SOME/IP skeleton event design info for events and field notifications of service 'RoadModelFusionSI_Out'
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/skeleton_event_xf.h"
#include "roadmodelfusionsi_out/roadmodelfusionsi_out_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_roadmodelfusionsi_out {


namespace events {
namespace skeleton {
namespace RMF_Bus_RMFInfo {

// ---- Event 'RMF_Bus_RMFInfo' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'RMF_Bus_RMFInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"RMF_Bus_RMFInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RMFInfoIDT
   */
  using SampleType = ::RMFInfoIDT::RMFInfoIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'RMF_Bus_RMFInfo'.
 */
using RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RMFInfo =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace RMF_Bus_RMFInfo
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace RMF_Bus_MapInfo {

// ---- Event 'RMF_Bus_MapInfo' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'RMF_Bus_MapInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"RMF_Bus_MapInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RMFMapInfoIDT
   */
  using SampleType = ::RMFMapInfoIDT::RMFMapInfoIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'RMF_Bus_MapInfo'.
 */
using RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_MapInfo =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace RMF_Bus_MapInfo
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace RMF_Bus_VectorMapInfo {

// ---- Event 'RMF_Bus_VectorMapInfo' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'RMF_Bus_VectorMapInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"RMF_Bus_VectorMapInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/VectorMapInfoIDT
   */
  using SampleType = ::VectorMapInfoIDT::VectorMapInfoIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'RMF_Bus_VectorMapInfo'.
 */
using RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_VectorMapInfo =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace RMF_Bus_VectorMapInfo
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace RMF_Bus_Position {

// ---- Event 'RMF_Bus_Position' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'RMF_Bus_Position'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"RMF_Bus_Position"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/PositionIDT
   */
  using SampleType = ::PositionIDT::PositionIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'RMF_Bus_Position'.
 */
using RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_Position =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace RMF_Bus_Position
}  // namespace skeleton
}  // namespace events


}  // namespace gen_roadmodelfusionsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

