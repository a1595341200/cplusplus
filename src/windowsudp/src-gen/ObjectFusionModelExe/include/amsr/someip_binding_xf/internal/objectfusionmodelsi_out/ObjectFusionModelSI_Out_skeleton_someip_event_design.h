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
/**        \file  ObjectFusionModelExe/include/amsr/someip_binding_xf/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_event_design.h
 *        \brief  SOME/IP skeleton event design info for events and field notifications of service 'ObjectFusionModelSI_Out'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/skeleton_event_xf.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_objectfusionmodelsi_out {


namespace events {
namespace skeleton {
namespace OFM_Bus_FusedTargets01 {

// ---- Event 'OFM_Bus_FusedTargets01' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'OFM_Bus_FusedTargets01'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"OFM_Bus_FusedTargets01"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_Bus_FusedTargets01'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets01 =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace OFM_Bus_FusedTargets01
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_Bus_FusedTargets02 {

// ---- Event 'OFM_Bus_FusedTargets02' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'OFM_Bus_FusedTargets02'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"OFM_Bus_FusedTargets02"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_Bus_FusedTargets02'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets02 =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace OFM_Bus_FusedTargets02
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_Bus_FusedTargets03 {

// ---- Event 'OFM_Bus_FusedTargets03' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'OFM_Bus_FusedTargets03'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"OFM_Bus_FusedTargets03"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_Bus_FusedTargets03'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets03 =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace OFM_Bus_FusedTargets03
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_Bus_FusedTargets04 {

// ---- Event 'OFM_Bus_FusedTargets04' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'OFM_Bus_FusedTargets04'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"OFM_Bus_FusedTargets04"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_Bus_FusedTargets04'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets04 =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace OFM_Bus_FusedTargets04
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_St_SOCFusedSts {

// ---- Event 'OFM_St_SOCFusedSts' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'OFM_St_SOCFusedSts'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"OFM_St_SOCFusedSts"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/uint16IDT
   */
  using SampleType = ::uint16IDT::uint16IDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_St_SOCFusedSts'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_SOCFusedSts =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace OFM_St_SOCFusedSts
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_Bus_FourDRadarStatus {

// ---- Event 'OFM_Bus_FourDRadarStatus' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'OFM_Bus_FourDRadarStatus'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"OFM_Bus_FourDRadarStatus"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarStatusIDT
   */
  using SampleType = ::FourDRadarStatusIDT::FourDRadarStatusIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_Bus_FourDRadarStatus'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FourDRadarStatus =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace OFM_Bus_FourDRadarStatus
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_Bus_LaneInfo {

// ---- Event 'OFM_Bus_LaneInfo' -------------------------------------------

/*!
 * \brief Skeleton-side design configuration struct for event 'OFM_Bus_LaneInfo'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"OFM_Bus_LaneInfo"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/PerceptionLaneInfoIDT
   */
  using SampleType = ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_Bus_LaneInfo'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_LaneInfo =
    ::amsr::someip_binding_xf::internal::events::SkeletonEventXf<EventDesignInfo::SampleType>;

}  // namespace OFM_Bus_LaneInfo
}  // namespace skeleton
}  // namespace events


}  // namespace gen_objectfusionmodelsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_EVENT_DESIGN_H_

