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
/**        \file  PerceptionRearExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionrearsi_out/PerceptionRearSI_Out_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'PerceptionRearSI_Out'
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

#ifndef PERCEPTIONREAREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define PERCEPTIONREAREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_VisObjIDT_20/impl_type_array_visobjidt_20.h"
#include "PerceptionRearLaneInfoIDT/impl_type_perceptionrearlaneinfoidt.h"
#include "RearCamSts1VccIDT/impl_type_rearcamsts1vccidt.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionrearsi_out/events/serializer_PerceptionRear_Bus_CameraStatus.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionrearsi_out/events/serializer_PerceptionRear_Bus_LaneInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionrearsi_out/events/serializer_PerceptionRear_Bus_VisnObj.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "perceptionrearsi_out/PerceptionRearSI_Out.h"
#include "perceptionrearsi_out/perceptionrearsi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace perceptionrearsi_out {

// Forward-declaration for back-reference
class PerceptionRearSI_OutProvidedIpcServiceInstance;

// ---- Event 'PerceptionRear_Bus_LaneInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'PerceptionRear_Bus_LaneInfo'.
 */
struct SkeletonIpcEventConfigurationPerceptionRear_Bus_LaneInfo {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/PerceptionRearLaneInfoIDT
   */
  using SampleType = ::PerceptionRearLaneInfoIDT::PerceptionRearLaneInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionrearsi_out::events::SerializerPerceptionRear_Bus_LaneInfo;
};

/*!
 * \brief IPC Skeleton event manager type for event 'PerceptionRear_Bus_LaneInfo'.
 */
using PerceptionRearSI_OutSkeletonIpcEventManagerPerceptionRear_Bus_LaneInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationPerceptionRear_Bus_LaneInfo::SampleType, SkeletonIpcEventConfigurationPerceptionRear_Bus_LaneInfo::PayloadSerializer>;


// ---- Event 'PerceptionRear_Bus_CameraStatus' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'PerceptionRear_Bus_CameraStatus'.
 */
struct SkeletonIpcEventConfigurationPerceptionRear_Bus_CameraStatus {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RearCamSts1VccIDT
   */
  using SampleType = ::RearCamSts1VccIDT::RearCamSts1VccIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionrearsi_out::events::SerializerPerceptionRear_Bus_CameraStatus;
};

/*!
 * \brief IPC Skeleton event manager type for event 'PerceptionRear_Bus_CameraStatus'.
 */
using PerceptionRearSI_OutSkeletonIpcEventManagerPerceptionRear_Bus_CameraStatus =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationPerceptionRear_Bus_CameraStatus::SampleType, SkeletonIpcEventConfigurationPerceptionRear_Bus_CameraStatus::PayloadSerializer>;


// ---- Event 'PerceptionRear_Bus_VisnObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'PerceptionRear_Bus_VisnObj'.
 */
struct SkeletonIpcEventConfigurationPerceptionRear_Bus_VisnObj {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_VisObjIDT_20
   */
  using SampleType = ::Array_VisObjIDT_20::Array_VisObjIDT_20;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionrearsi_out::events::SerializerPerceptionRear_Bus_VisnObj;
};

/*!
 * \brief IPC Skeleton event manager type for event 'PerceptionRear_Bus_VisnObj'.
 */
using PerceptionRearSI_OutSkeletonIpcEventManagerPerceptionRear_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationPerceptionRear_Bus_VisnObj::SampleType, SkeletonIpcEventConfigurationPerceptionRear_Bus_VisnObj::PayloadSerializer>;


}  // namespace perceptionrearsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONREAREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

