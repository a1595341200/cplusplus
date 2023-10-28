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
/**        \file  PerceptionSideExe/include/amsr/someip_binding_xf/internal/perceptionsidesi_out/PerceptionSideSI_Out_skeleton_someip_event_deployment.h
 *        \brief  SOME/IP skeleton event deployment info for events and field notifications of service 'PerceptionSideSI_Out'
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/s2s_serializer_wrapper.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_FLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_FRCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_PerceptionSide_Bus_CameraStatus.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_RLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_RRCam_Bus_VisnObj.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_perceptionsidesi_out {


namespace events {
namespace skeleton {
namespace FRCam_Bus_VisnObj {

// ---- Event 'FRCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'FRCam_Bus_VisnObj'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_VisObjIDT_20
   */
  using SampleType = ::Array_VisObjIDT_20::Array_VisObjIDT_20;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsidesi_out::events::SerializerFRCam_Bus_VisnObj;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace FRCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace FLCam_Bus_VisnObj {

// ---- Event 'FLCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'FLCam_Bus_VisnObj'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_VisObjIDT_20
   */
  using SampleType = ::Array_VisObjIDT_20::Array_VisObjIDT_20;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsidesi_out::events::SerializerFLCam_Bus_VisnObj;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace FLCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace RLCam_Bus_VisnObj {

// ---- Event 'RLCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'RLCam_Bus_VisnObj'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_VisObjIDT_20
   */
  using SampleType = ::Array_VisObjIDT_20::Array_VisObjIDT_20;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsidesi_out::events::SerializerRLCam_Bus_VisnObj;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace RLCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace RRCam_Bus_VisnObj {

// ---- Event 'RRCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'RRCam_Bus_VisnObj'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_VisObjIDT_20
   */
  using SampleType = ::Array_VisObjIDT_20::Array_VisObjIDT_20;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsidesi_out::events::SerializerRRCam_Bus_VisnObj;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace RRCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace PerceptionSide_Bus_CameraStatus {

// ---- Event 'PerceptionSide_Bus_CameraStatus' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'PerceptionSide_Bus_CameraStatus'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/CameraStatusIDT
   */
  using SampleType = ::CameraStatusIDT::CameraStatusIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsidesi_out::events::SerializerPerceptionSide_Bus_CameraStatus;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace PerceptionSide_Bus_CameraStatus
}  // namespace skeleton
}  // namespace events


}  // namespace gen_perceptionsidesi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

