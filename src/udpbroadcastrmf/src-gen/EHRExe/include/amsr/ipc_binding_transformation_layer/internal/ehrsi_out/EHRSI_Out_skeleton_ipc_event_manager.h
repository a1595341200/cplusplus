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
/**        \file  EHRExe/include/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'EHRSI_Out'
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

#ifndef EHREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define EHREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_FormOfWayIDT_Vector/impl_type_array_formofwayidt_vector.h"
#include "Array_GeoFenceIDT_Vector/impl_type_array_geofenceidt_vector.h"
#include "Array_LaneSpeedLimitIDT_Vector/impl_type_array_lanespeedlimitidt_vector.h"
#include "Array_LaneWidthIDT_Vector/impl_type_array_lanewidthidt_vector.h"
#include "Array_LinearObjectIDT_Vector/impl_type_array_linearobjectidt_vector.h"
#include "Array_LinkCurvatureIDT_Vector/impl_type_array_linkcurvatureidt_vector.h"
#include "Array_LinkInfoIDT_Vector/impl_type_array_linkinfoidt_vector.h"
#include "Array_LinkMergePointIDT_Vector/impl_type_array_linkmergepointidt_vector.h"
#include "Array_LinkSlopeIDT_Vector/impl_type_array_linkslopeidt_vector.h"
#include "Array_PairConnectivityIDT_Vector/impl_type_array_pairconnectivityidt_vector.h"
#include "Array_PathNodeIDT_Vector/impl_type_array_pathnodeidt_vector.h"
#include "Array_PathTrafficSignsIDT_Vector/impl_type_array_pathtrafficsignsidt_vector.h"
#include "NOAInfoIDT/impl_type_noainfoidt.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_AllMergePoints.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_FormOfWays.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_GeoFences.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneConnectivitys.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneSpeedLimits.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneWidthes.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinearObjects.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkCurvatures.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkInfos.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkSlopes.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_NOAInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_Nodes.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_SequenceId.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_TrafficSigns.h"
#include "ehrsi_out/EHRSI_Out.h"
#include "ehrsi_out/ehrsi_out_skeleton.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "uint64IDT/impl_type_uint64idt.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace ehrsi_out {

// Forward-declaration for back-reference
class EHRSI_OutProvidedIpcServiceInstance;

// ---- Event 'EHR_Bus_NOAInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_NOAInfo'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_NOAInfo {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/NOAInfoIDT
   */
  using SampleType = ::NOAInfoIDT::NOAInfoIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_NOAInfo;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_NOAInfo'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_NOAInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_NOAInfo::SampleType, SkeletonIpcEventConfigurationEHR_Bus_NOAInfo::PayloadSerializer>;


// ---- Event 'EHR_Bus_LaneConnectivitys' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LaneConnectivitys'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LaneConnectivitys {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_PairConnectivityIDT_Vector
   */
  using SampleType = ::Array_PairConnectivityIDT_Vector::Array_PairConnectivityIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LaneConnectivitys;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LaneConnectivitys'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneConnectivitys =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LaneConnectivitys::SampleType, SkeletonIpcEventConfigurationEHR_Bus_LaneConnectivitys::PayloadSerializer>;


// ---- Event 'EHR_Bus_Nodes' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_Nodes'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_Nodes {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_PathNodeIDT_Vector
   */
  using SampleType = ::Array_PathNodeIDT_Vector::Array_PathNodeIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_Nodes;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_Nodes'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_Nodes =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_Nodes::SampleType, SkeletonIpcEventConfigurationEHR_Bus_Nodes::PayloadSerializer>;


// ---- Event 'EHR_Bus_TrafficSigns' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_TrafficSigns'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_TrafficSigns {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_PathTrafficSignsIDT_Vector
   */
  using SampleType = ::Array_PathTrafficSignsIDT_Vector::Array_PathTrafficSignsIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_TrafficSigns;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_TrafficSigns'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_TrafficSigns =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_TrafficSigns::SampleType, SkeletonIpcEventConfigurationEHR_Bus_TrafficSigns::PayloadSerializer>;


// ---- Event 'EHR_Bus_GeoFences' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_GeoFences'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_GeoFences {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_GeoFenceIDT_Vector
   */
  using SampleType = ::Array_GeoFenceIDT_Vector::Array_GeoFenceIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_GeoFences;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_GeoFences'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_GeoFences =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_GeoFences::SampleType, SkeletonIpcEventConfigurationEHR_Bus_GeoFences::PayloadSerializer>;


// ---- Event 'EHR_Bus_LinkCurvatures' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LinkCurvatures'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LinkCurvatures {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_LinkCurvatureIDT_Vector
   */
  using SampleType = ::Array_LinkCurvatureIDT_Vector::Array_LinkCurvatureIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LinkCurvatures;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LinkCurvatures'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkCurvatures =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LinkCurvatures::SampleType, SkeletonIpcEventConfigurationEHR_Bus_LinkCurvatures::PayloadSerializer>;


// ---- Event 'EHR_Bus_LinkSlopes' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LinkSlopes'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LinkSlopes {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_LinkSlopeIDT_Vector
   */
  using SampleType = ::Array_LinkSlopeIDT_Vector::Array_LinkSlopeIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LinkSlopes;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LinkSlopes'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkSlopes =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LinkSlopes::SampleType, SkeletonIpcEventConfigurationEHR_Bus_LinkSlopes::PayloadSerializer>;


// ---- Event 'EHR_Bus_LaneSpeedLimits' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LaneSpeedLimits'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LaneSpeedLimits {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_LaneSpeedLimitIDT_Vector
   */
  using SampleType = ::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LaneSpeedLimits;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LaneSpeedLimits'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneSpeedLimits =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LaneSpeedLimits::SampleType, SkeletonIpcEventConfigurationEHR_Bus_LaneSpeedLimits::PayloadSerializer>;


// ---- Event 'EHR_Bus_LinkInfos' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LinkInfos'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LinkInfos {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_LinkInfoIDT_Vector
   */
  using SampleType = ::Array_LinkInfoIDT_Vector::Array_LinkInfoIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LinkInfos;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LinkInfos'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkInfos =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LinkInfos::SampleType, SkeletonIpcEventConfigurationEHR_Bus_LinkInfos::PayloadSerializer>;


// ---- Event 'EHR_Bus_AllMergePoints' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_AllMergePoints'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_AllMergePoints {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_LinkMergePointIDT_Vector
   */
  using SampleType = ::Array_LinkMergePointIDT_Vector::Array_LinkMergePointIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_AllMergePoints;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_AllMergePoints'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_AllMergePoints =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_AllMergePoints::SampleType, SkeletonIpcEventConfigurationEHR_Bus_AllMergePoints::PayloadSerializer>;


// ---- Event 'EHR_Bus_LinearObjects' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LinearObjects'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LinearObjects {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_LinearObjectIDT_Vector
   */
  using SampleType = ::Array_LinearObjectIDT_Vector::Array_LinearObjectIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LinearObjects;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LinearObjects'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinearObjects =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LinearObjects::SampleType, SkeletonIpcEventConfigurationEHR_Bus_LinearObjects::PayloadSerializer>;


// ---- Event 'EHR_Bus_FormOfWays' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_FormOfWays'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_FormOfWays {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_FormOfWayIDT_Vector
   */
  using SampleType = ::Array_FormOfWayIDT_Vector::Array_FormOfWayIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_FormOfWays;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_FormOfWays'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_FormOfWays =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_FormOfWays::SampleType, SkeletonIpcEventConfigurationEHR_Bus_FormOfWays::PayloadSerializer>;


// ---- Event 'EHR_Bus_SequenceId' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_SequenceId'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_SequenceId {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/uint64IDT
   */
  using SampleType = ::uint64IDT::uint64IDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_SequenceId;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_SequenceId'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_SequenceId =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_SequenceId::SampleType, SkeletonIpcEventConfigurationEHR_Bus_SequenceId::PayloadSerializer>;


// ---- Event 'EHR_Bus_LaneWidthes' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LaneWidthes'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LaneWidthes {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_LaneWidthIDT_Vector
   */
  using SampleType = ::Array_LaneWidthIDT_Vector::Array_LaneWidthIDT_Vector;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LaneWidthes;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LaneWidthes'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneWidthes =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LaneWidthes::SampleType, SkeletonIpcEventConfigurationEHR_Bus_LaneWidthes::PayloadSerializer>;


}  // namespace ehrsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // EHREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

