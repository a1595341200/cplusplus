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
/**        \file  TargetPredictExe/include/amsr/someip_binding_xf/internal/targetpredictsi_out/TargetPredictSI_Out_skeleton_someip_event_deployment.h
 *        \brief  SOME/IP skeleton event deployment info for events and field notifications of service 'TargetPredictSI_Out'
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

#ifndef TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TARGETPREDICTSI_OUT_TARGETPREDICTSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_
#define TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TARGETPREDICTSI_OUT_TARGETPREDICTSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/s2s_serializer_wrapper.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/targetpredictsi_out/events/serializer_TP_Bus_PredTargets1Vcc.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/targetpredictsi_out/events/serializer_TP_Bus_PredTargets2Vcc.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_targetpredictsi_out {


namespace events {
namespace skeleton {
namespace TP_Bus_PredTargets1Vcc {

// ---- Event 'TP_Bus_PredTargets1Vcc' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'TP_Bus_PredTargets1Vcc'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjPredictIDT_8
   */
  using SampleType = ::Array_ObjPredictIDT_8::Array_ObjPredictIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::targetpredictsi_out::events::SerializerTP_Bus_PredTargets1Vcc;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace TP_Bus_PredTargets1Vcc
}  // namespace skeleton
}  // namespace events


namespace events {
namespace skeleton {
namespace TP_Bus_PredTargets2Vcc {

// ---- Event 'TP_Bus_PredTargets2Vcc' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'TP_Bus_PredTargets2Vcc'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjPredictIDT_8
   */
  using SampleType = ::Array_ObjPredictIDT_8::Array_ObjPredictIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::targetpredictsi_out::events::SerializerTP_Bus_PredTargets2Vcc;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace TP_Bus_PredTargets2Vcc
}  // namespace skeleton
}  // namespace events


}  // namespace gen_targetpredictsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TARGETPREDICTSI_OUT_TARGETPREDICTSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

