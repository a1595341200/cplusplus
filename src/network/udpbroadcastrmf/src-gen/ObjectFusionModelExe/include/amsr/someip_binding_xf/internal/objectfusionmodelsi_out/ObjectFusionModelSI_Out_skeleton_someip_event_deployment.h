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
/**        \file  ObjectFusionModelExe/include/amsr/someip_binding_xf/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_event_deployment.h
 *        \brief  SOME/IP skeleton event deployment info for events and field notifications of service 'ObjectFusionModelSI_Out'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/s2s_serializer_wrapper.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FourDRadarStatus.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets01.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets02.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets03.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets04.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_LaneInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_St_SOCFusedSts.h"

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
 * \brief Skeleton-side deployment configuration struct for event 'OFM_Bus_FusedTargets01'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets01;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace OFM_Bus_FusedTargets01
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_Bus_FusedTargets02 {

// ---- Event 'OFM_Bus_FusedTargets02' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'OFM_Bus_FusedTargets02'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets02;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace OFM_Bus_FusedTargets02
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_Bus_FusedTargets03 {

// ---- Event 'OFM_Bus_FusedTargets03' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'OFM_Bus_FusedTargets03'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets03;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace OFM_Bus_FusedTargets03
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_Bus_FusedTargets04 {

// ---- Event 'OFM_Bus_FusedTargets04' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'OFM_Bus_FusedTargets04'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets04;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace OFM_Bus_FusedTargets04
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_St_SOCFusedSts {

// ---- Event 'OFM_St_SOCFusedSts' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'OFM_St_SOCFusedSts'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/uint16IDT
   */
  using SampleType = ::uint16IDT::uint16IDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_St_SOCFusedSts;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace OFM_St_SOCFusedSts
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_Bus_FourDRadarStatus {

// ---- Event 'OFM_Bus_FourDRadarStatus' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'OFM_Bus_FourDRadarStatus'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarStatusIDT
   */
  using SampleType = ::FourDRadarStatusIDT::FourDRadarStatusIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FourDRadarStatus;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace OFM_Bus_FourDRadarStatus
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace OFM_Bus_LaneInfo {

// ---- Event 'OFM_Bus_LaneInfo' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'OFM_Bus_LaneInfo'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/PerceptionLaneInfoIDT
   */
  using SampleType = ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_LaneInfo;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace OFM_Bus_LaneInfo
}  // namespace skeleton
}  // namespace events


}  // namespace gen_objectfusionmodelsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

