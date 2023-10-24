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
/**        \file  RoadModelFusionExe/include/amsr/ipc_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'RoadModelFusionSI_Out'
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "PositionIDT/impl_type_positionidt.h"
#include "RMFInfoIDT/impl_type_rmfinfoidt.h"
#include "RMFMapInfoIDT/impl_type_rmfmapinfoidt.h"
#include "VectorMapInfoIDT/impl_type_vectormapinfoidt.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_MapInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_Position.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_RMFInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_VectorMapInfo.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "roadmodelfusionsi_out/RoadModelFusionSI_Out.h"
#include "roadmodelfusionsi_out/roadmodelfusionsi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace roadmodelfusionsi_out {

// Forward-declaration for back-reference
class RoadModelFusionSI_OutProvidedIpcServiceInstance;

// ---- Event 'RMF_Bus_RMFInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'RMF_Bus_RMFInfo'.
 */
struct SkeletonIpcEventConfigurationRMF_Bus_RMFInfo {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RMFInfoIDT
   */
  using SampleType = ::RMFInfoIDT::RMFInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::roadmodelfusionsi_out::events::SerializerRMF_Bus_RMFInfo;
};

/*!
 * \brief IPC Skeleton event manager type for event 'RMF_Bus_RMFInfo'.
 */
using RoadModelFusionSI_OutSkeletonIpcEventManagerRMF_Bus_RMFInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationRMF_Bus_RMFInfo::SampleType, SkeletonIpcEventConfigurationRMF_Bus_RMFInfo::PayloadSerializer>;


// ---- Event 'RMF_Bus_MapInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'RMF_Bus_MapInfo'.
 */
struct SkeletonIpcEventConfigurationRMF_Bus_MapInfo {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RMFMapInfoIDT
   */
  using SampleType = ::RMFMapInfoIDT::RMFMapInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::roadmodelfusionsi_out::events::SerializerRMF_Bus_MapInfo;
};

/*!
 * \brief IPC Skeleton event manager type for event 'RMF_Bus_MapInfo'.
 */
using RoadModelFusionSI_OutSkeletonIpcEventManagerRMF_Bus_MapInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationRMF_Bus_MapInfo::SampleType, SkeletonIpcEventConfigurationRMF_Bus_MapInfo::PayloadSerializer>;


// ---- Event 'RMF_Bus_VectorMapInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'RMF_Bus_VectorMapInfo'.
 */
struct SkeletonIpcEventConfigurationRMF_Bus_VectorMapInfo {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/VectorMapInfoIDT
   */
  using SampleType = ::VectorMapInfoIDT::VectorMapInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::roadmodelfusionsi_out::events::SerializerRMF_Bus_VectorMapInfo;
};

/*!
 * \brief IPC Skeleton event manager type for event 'RMF_Bus_VectorMapInfo'.
 */
using RoadModelFusionSI_OutSkeletonIpcEventManagerRMF_Bus_VectorMapInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationRMF_Bus_VectorMapInfo::SampleType, SkeletonIpcEventConfigurationRMF_Bus_VectorMapInfo::PayloadSerializer>;


// ---- Event 'RMF_Bus_Position' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'RMF_Bus_Position'.
 */
struct SkeletonIpcEventConfigurationRMF_Bus_Position {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/PositionIDT
   */
  using SampleType = ::PositionIDT::PositionIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::roadmodelfusionsi_out::events::SerializerRMF_Bus_Position;
};

/*!
 * \brief IPC Skeleton event manager type for event 'RMF_Bus_Position'.
 */
using RoadModelFusionSI_OutSkeletonIpcEventManagerRMF_Bus_Position =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationRMF_Bus_Position::SampleType, SkeletonIpcEventConfigurationRMF_Bus_Position::PayloadSerializer>;


}  // namespace roadmodelfusionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

