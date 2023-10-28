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
/**        \file  PerceptionExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'PerceptionSI_Out'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_ipcbinding
 *         Commit ID: 9519b950801d42a5bc7a25dd6db848903642b9ba
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_TrfcLi1VccIDT_8/impl_type_array_trfcli1vccidt_8.h"
#include "ExtInfoIDT/impl_type_extinfoidt.h"
#include "FrntCamInfoIDT/impl_type_frntcaminfoidt.h"
#include "LineSignGroupIDT/impl_type_linesigngroupidt.h"
#include "PerceptionLaneInfoIDT/impl_type_perceptionlaneinfoidt.h"
#include "TrafficInfoIDT/impl_type_trafficinfoidt.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_ExtInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_LineSignGroup.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrafficInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcLi.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_Perception_Bus_FrntCamInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_Perception_Bus_LaneInfo.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "perceptionsi_out/PerceptionSI_Out.h"
#include "perceptionsi_out/perceptionsi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace perceptionsi_out {

// Forward-declaration for back-reference
class PerceptionSI_OutProvidedIpcServiceInstance;

// ---- Event 'Perception_Bus_LaneInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'Perception_Bus_LaneInfo'.
 */
struct SkeletonIpcEventConfigurationPerception_Bus_LaneInfo {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/PerceptionLaneInfoIDT
   */
  using SampleType = ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerPerception_Bus_LaneInfo;
};

/*!
 * \brief IPC Skeleton event manager type for event 'Perception_Bus_LaneInfo'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerPerception_Bus_LaneInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationPerception_Bus_LaneInfo::SampleType, SkeletonIpcEventConfigurationPerception_Bus_LaneInfo::PayloadSerializer>;


// ---- Event 'Perception_Bus_FrntCamInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'Perception_Bus_FrntCamInfo'.
 */
struct SkeletonIpcEventConfigurationPerception_Bus_FrntCamInfo {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FrntCamInfoIDT
   */
  using SampleType = ::FrntCamInfoIDT::FrntCamInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerPerception_Bus_FrntCamInfo;
};

/*!
 * \brief IPC Skeleton event manager type for event 'Perception_Bus_FrntCamInfo'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerPerception_Bus_FrntCamInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationPerception_Bus_FrntCamInfo::SampleType, SkeletonIpcEventConfigurationPerception_Bus_FrntCamInfo::PayloadSerializer>;


// ---- Event 'FrntCam_Bus_TrafficInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_TrafficInfo'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_TrafficInfo {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/TrafficInfoIDT
   */
  using SampleType = ::TrafficInfoIDT::TrafficInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_TrafficInfo;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_TrafficInfo'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrafficInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_TrafficInfo::SampleType, SkeletonIpcEventConfigurationFrntCam_Bus_TrafficInfo::PayloadSerializer>;


// ---- Event 'FrntCam_Bus_TrfcLi' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_TrfcLi'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_TrfcLi {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_TrfcLi1VccIDT_8
   */
  using SampleType = ::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_TrfcLi;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_TrfcLi'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcLi =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_TrfcLi::SampleType, SkeletonIpcEventConfigurationFrntCam_Bus_TrfcLi::PayloadSerializer>;


// ---- Event 'FrntCam_Bus_LineSignGroup' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_LineSignGroup'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_LineSignGroup {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LineSignGroupIDT
   */
  using SampleType = ::LineSignGroupIDT::LineSignGroupIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_LineSignGroup;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_LineSignGroup'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_LineSignGroup =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_LineSignGroup::SampleType, SkeletonIpcEventConfigurationFrntCam_Bus_LineSignGroup::PayloadSerializer>;


// ---- Event 'FrntCam_Bus_ExtInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_ExtInfo'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_ExtInfo {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ExtInfoIDT
   */
  using SampleType = ::ExtInfoIDT::ExtInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_ExtInfo;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_ExtInfo'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_ExtInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_ExtInfo::SampleType, SkeletonIpcEventConfigurationFrntCam_Bus_ExtInfo::PayloadSerializer>;


}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

