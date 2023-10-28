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
/**        \file  PerceptionSideExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsidesi_out/PerceptionSideSI_Out_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'PerceptionSideSI_Out'
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_VisObjIDT_20/impl_type_array_visobjidt_20.h"
#include "CameraStatusIDT/impl_type_camerastatusidt.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_FLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_FRCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_PerceptionSide_Bus_CameraStatus.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_RLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_RRCam_Bus_VisnObj.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "perceptionsidesi_out/PerceptionSideSI_Out.h"
#include "perceptionsidesi_out/perceptionsidesi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace perceptionsidesi_out {

// Forward-declaration for back-reference
class PerceptionSideSI_OutProvidedIpcServiceInstance;

// ---- Event 'FRCam_Bus_VisnObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FRCam_Bus_VisnObj'.
 */
struct SkeletonIpcEventConfigurationFRCam_Bus_VisnObj {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_VisObjIDT_20
   */
  using SampleType = ::Array_VisObjIDT_20::Array_VisObjIDT_20;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsidesi_out::events::SerializerFRCam_Bus_VisnObj;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FRCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerFRCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFRCam_Bus_VisnObj::SampleType, SkeletonIpcEventConfigurationFRCam_Bus_VisnObj::PayloadSerializer>;


// ---- Event 'FLCam_Bus_VisnObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FLCam_Bus_VisnObj'.
 */
struct SkeletonIpcEventConfigurationFLCam_Bus_VisnObj {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_VisObjIDT_20
   */
  using SampleType = ::Array_VisObjIDT_20::Array_VisObjIDT_20;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsidesi_out::events::SerializerFLCam_Bus_VisnObj;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FLCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerFLCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFLCam_Bus_VisnObj::SampleType, SkeletonIpcEventConfigurationFLCam_Bus_VisnObj::PayloadSerializer>;


// ---- Event 'RLCam_Bus_VisnObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'RLCam_Bus_VisnObj'.
 */
struct SkeletonIpcEventConfigurationRLCam_Bus_VisnObj {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_VisObjIDT_20
   */
  using SampleType = ::Array_VisObjIDT_20::Array_VisObjIDT_20;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsidesi_out::events::SerializerRLCam_Bus_VisnObj;
};

/*!
 * \brief IPC Skeleton event manager type for event 'RLCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerRLCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationRLCam_Bus_VisnObj::SampleType, SkeletonIpcEventConfigurationRLCam_Bus_VisnObj::PayloadSerializer>;


// ---- Event 'RRCam_Bus_VisnObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'RRCam_Bus_VisnObj'.
 */
struct SkeletonIpcEventConfigurationRRCam_Bus_VisnObj {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_VisObjIDT_20
   */
  using SampleType = ::Array_VisObjIDT_20::Array_VisObjIDT_20;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsidesi_out::events::SerializerRRCam_Bus_VisnObj;
};

/*!
 * \brief IPC Skeleton event manager type for event 'RRCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerRRCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationRRCam_Bus_VisnObj::SampleType, SkeletonIpcEventConfigurationRRCam_Bus_VisnObj::PayloadSerializer>;


// ---- Event 'PerceptionSide_Bus_CameraStatus' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'PerceptionSide_Bus_CameraStatus'.
 */
struct SkeletonIpcEventConfigurationPerceptionSide_Bus_CameraStatus {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/CameraStatusIDT
   */
  using SampleType = ::CameraStatusIDT::CameraStatusIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsidesi_out::events::SerializerPerceptionSide_Bus_CameraStatus;
};

/*!
 * \brief IPC Skeleton event manager type for event 'PerceptionSide_Bus_CameraStatus'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerPerceptionSide_Bus_CameraStatus =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationPerceptionSide_Bus_CameraStatus::SampleType, SkeletonIpcEventConfigurationPerceptionSide_Bus_CameraStatus::PayloadSerializer>;


}  // namespace perceptionsidesi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

