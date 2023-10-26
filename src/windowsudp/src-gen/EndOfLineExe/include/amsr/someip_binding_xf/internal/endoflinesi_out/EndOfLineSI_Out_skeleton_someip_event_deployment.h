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
/**        \file  EndOfLineExe/include/amsr/someip_binding_xf/internal/endoflinesi_out/EndOfLineSI_Out_skeleton_someip_event_deployment.h
 *        \brief  SOME/IP skeleton event deployment info for events and field notifications of service 'EndOfLineSI_Out'
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

#ifndef ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ENDOFLINESI_OUT_ENDOFLINESI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_
#define ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ENDOFLINESI_OUT_ENDOFLINESI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/s2s_serializer_wrapper.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/endoflinesi_out/events/serializer_EOL_Bus_CamCalibStatus.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_endoflinesi_out {


namespace events {
namespace skeleton {
namespace EOL_Bus_CamCalibStatus {

// ---- Event 'EOL_Bus_CamCalibStatus' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'EOL_Bus_CamCalibStatus'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/TCameraCalibInfoIDT
   */
  using SampleType = ::TCameraCalibInfoIDT::TCameraCalibInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::endoflinesi_out::events::SerializerEOL_Bus_CamCalibStatus;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace EOL_Bus_CamCalibStatus
}  // namespace skeleton
}  // namespace events


}  // namespace gen_endoflinesi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ENDOFLINESI_OUT_ENDOFLINESI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

