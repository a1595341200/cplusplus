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
/**        \file  PerceptionExe/include/amsr/someip_binding_xf/internal/perceptionsi_out/PerceptionSI_Out_skeleton_someip_event_deployment.h
 *        \brief  SOME/IP skeleton event deployment info for events and field notifications of service 'PerceptionSI_Out'
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/s2s_serializer_wrapper.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_ExtInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_LineSignGroup.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrafficInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcLi.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_Perception_Bus_FrntCamInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_Perception_Bus_LaneInfo.h"

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
 * \brief Skeleton-side deployment configuration struct for event 'Perception_Bus_LaneInfo'
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
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerPerception_Bus_LaneInfo;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace Perception_Bus_LaneInfo
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace Perception_Bus_FrntCamInfo {

// ---- Event 'Perception_Bus_FrntCamInfo' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'Perception_Bus_FrntCamInfo'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FrntCamInfoIDT
   */
  using SampleType = ::FrntCamInfoIDT::FrntCamInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerPerception_Bus_FrntCamInfo;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace Perception_Bus_FrntCamInfo
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace FrntCam_Bus_TrafficInfo {

// ---- Event 'FrntCam_Bus_TrafficInfo' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'FrntCam_Bus_TrafficInfo'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/TrafficInfoIDT
   */
  using SampleType = ::TrafficInfoIDT::TrafficInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_TrafficInfo;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace FrntCam_Bus_TrafficInfo
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace FrntCam_Bus_TrfcLi {

// ---- Event 'FrntCam_Bus_TrfcLi' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'FrntCam_Bus_TrfcLi'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_TrfcLi1VccIDT_8
   */
  using SampleType = ::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_TrfcLi;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace FrntCam_Bus_TrfcLi
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace FrntCam_Bus_LineSignGroup {

// ---- Event 'FrntCam_Bus_LineSignGroup' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'FrntCam_Bus_LineSignGroup'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LineSignGroupIDT
   */
  using SampleType = ::LineSignGroupIDT::LineSignGroupIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_LineSignGroup;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace FrntCam_Bus_LineSignGroup
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace FrntCam_Bus_ExtInfo {

// ---- Event 'FrntCam_Bus_ExtInfo' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'FrntCam_Bus_ExtInfo'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ExtInfoIDT
   */
  using SampleType = ::ExtInfoIDT::ExtInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_ExtInfo;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace FrntCam_Bus_ExtInfo
}  // namespace skeleton
}  // namespace events


}  // namespace gen_perceptionsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

