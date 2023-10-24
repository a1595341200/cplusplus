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
/**        \file  ObjectFusionModelExe/include/amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'ObjectFusionModelSI_Out'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_ObjGroup2VccIDT_8/impl_type_array_objgroup2vccidt_8.h"
#include "FourDRadarStatusIDT/impl_type_fourdradarstatusidt.h"
#include "PerceptionLaneInfoIDT/impl_type_perceptionlaneinfoidt.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FourDRadarStatus.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets01.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets02.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets03.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets04.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_LaneInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_St_SOCFusedSts.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_skeleton.h"
#include "uint16IDT/impl_type_uint16idt.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace objectfusionmodelsi_out {

// Forward-declaration for back-reference
class ObjectFusionModelSI_OutProvidedIpcServiceInstance;

// ---- Event 'OFM_Bus_FusedTargets01' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FusedTargets01'.
 */
struct SkeletonIpcEventConfigurationOFM_Bus_FusedTargets01 {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets01;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_Bus_FusedTargets01'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets01 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_Bus_FusedTargets01::SampleType, SkeletonIpcEventConfigurationOFM_Bus_FusedTargets01::PayloadSerializer>;


// ---- Event 'OFM_Bus_FusedTargets02' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FusedTargets02'.
 */
struct SkeletonIpcEventConfigurationOFM_Bus_FusedTargets02 {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets02;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_Bus_FusedTargets02'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets02 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_Bus_FusedTargets02::SampleType, SkeletonIpcEventConfigurationOFM_Bus_FusedTargets02::PayloadSerializer>;


// ---- Event 'OFM_Bus_FusedTargets03' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FusedTargets03'.
 */
struct SkeletonIpcEventConfigurationOFM_Bus_FusedTargets03 {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets03;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_Bus_FusedTargets03'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets03 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_Bus_FusedTargets03::SampleType, SkeletonIpcEventConfigurationOFM_Bus_FusedTargets03::PayloadSerializer>;


// ---- Event 'OFM_Bus_FusedTargets04' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FusedTargets04'.
 */
struct SkeletonIpcEventConfigurationOFM_Bus_FusedTargets04 {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets04;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_Bus_FusedTargets04'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets04 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_Bus_FusedTargets04::SampleType, SkeletonIpcEventConfigurationOFM_Bus_FusedTargets04::PayloadSerializer>;


// ---- Event 'OFM_St_SOCFusedSts' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_St_SOCFusedSts'.
 */
struct SkeletonIpcEventConfigurationOFM_St_SOCFusedSts {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/uint16IDT
   */
  using SampleType = ::uint16IDT::uint16IDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_St_SOCFusedSts;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_St_SOCFusedSts'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_SOCFusedSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_St_SOCFusedSts::SampleType, SkeletonIpcEventConfigurationOFM_St_SOCFusedSts::PayloadSerializer>;


// ---- Event 'OFM_Bus_FourDRadarStatus' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FourDRadarStatus'.
 */
struct SkeletonIpcEventConfigurationOFM_Bus_FourDRadarStatus {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarStatusIDT
   */
  using SampleType = ::FourDRadarStatusIDT::FourDRadarStatusIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FourDRadarStatus;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_Bus_FourDRadarStatus'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FourDRadarStatus =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_Bus_FourDRadarStatus::SampleType, SkeletonIpcEventConfigurationOFM_Bus_FourDRadarStatus::PayloadSerializer>;


// ---- Event 'OFM_Bus_LaneInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_LaneInfo'.
 */
struct SkeletonIpcEventConfigurationOFM_Bus_LaneInfo {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/PerceptionLaneInfoIDT
   */
  using SampleType = ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_LaneInfo;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_Bus_LaneInfo'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_LaneInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_Bus_LaneInfo::SampleType, SkeletonIpcEventConfigurationOFM_Bus_LaneInfo::PayloadSerializer>;


}  // namespace objectfusionmodelsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

