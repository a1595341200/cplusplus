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
 *         Commit ID: 75f4758dd5971a0db1f17eb58f5a68a7d1edabad
 *********************************************************************************************************************/

#ifndef EHREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define EHREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_GeoFences.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_GeofennceJudge.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneConnectivitys.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneSpeedLimits.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkCurvatures.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkInfos.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkSlopes.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_MergePoints.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_NOAInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_Nodes.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_TrafficSigns.h"
#include "ehrsi_out/EHRSI_Out.h"
#include "ehrsi_out/ehrsi_out_skeleton.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"

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
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"EHR_Bus_NOAInfo"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{57};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4714};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/NOAInfo
   */
  using SampleType = ::NOAInfo::NOAInfo;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_NOAInfo;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  EHRSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_NOAInfo'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_NOAInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_NOAInfo>;


// ---- Event 'EHR_Bus_LaneConnectivitys' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LaneConnectivitys'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LaneConnectivitys {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"EHR_Bus_LaneConnectivitys"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{57};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4715};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneConnectivitys
   */
  using SampleType = ::LaneConnectivitys::LaneConnectivitys;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LaneConnectivitys;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  EHRSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LaneConnectivitys'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneConnectivitys =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LaneConnectivitys>;


// ---- Event 'EHR_Bus_Nodes' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_Nodes'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_Nodes {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"EHR_Bus_Nodes"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{57};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4716};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Nodes
   */
  using SampleType = ::Nodes::Nodes;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_Nodes;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  EHRSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_Nodes'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_Nodes =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_Nodes>;


// ---- Event 'EHR_Bus_TrafficSigns' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_TrafficSigns'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_TrafficSigns {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"EHR_Bus_TrafficSigns"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{57};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4717};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/TrafficSigns
   */
  using SampleType = ::TrafficSigns::TrafficSigns;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_TrafficSigns;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  EHRSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_TrafficSigns'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_TrafficSigns =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_TrafficSigns>;


// ---- Event 'EHR_Bus_GeoFences' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_GeoFences'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_GeoFences {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"EHR_Bus_GeoFences"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{57};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4718};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/GeoFences
   */
  using SampleType = ::GeoFences::GeoFences;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_GeoFences;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  EHRSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_GeoFences'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_GeoFences =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_GeoFences>;


// ---- Event 'EHR_Bus_LinkCurvatures' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LinkCurvatures'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LinkCurvatures {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"EHR_Bus_LinkCurvatures"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{57};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4719};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LinkCurvatures
   */
  using SampleType = ::LinkCurvatures::LinkCurvatures;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LinkCurvatures;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  EHRSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LinkCurvatures'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkCurvatures =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LinkCurvatures>;


// ---- Event 'EHR_Bus_LinkSlopes' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LinkSlopes'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LinkSlopes {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"EHR_Bus_LinkSlopes"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{57};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4720};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LinkSlopes
   */
  using SampleType = ::LinkSlopes::LinkSlopes;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LinkSlopes;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  EHRSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LinkSlopes'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkSlopes =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LinkSlopes>;


// ---- Event 'EHR_Bus_LaneSpeedLimits' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LaneSpeedLimits'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LaneSpeedLimits {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"EHR_Bus_LaneSpeedLimits"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{57};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4721};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneSpeedLimits
   */
  using SampleType = ::LaneSpeedLimits::LaneSpeedLimits;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LaneSpeedLimits;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  EHRSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LaneSpeedLimits'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneSpeedLimits =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LaneSpeedLimits>;


// ---- Event 'EHR_Bus_LinkInfos' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_LinkInfos'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_LinkInfos {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"EHR_Bus_LinkInfos"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{57};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4722};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LinkInfos
   */
  using SampleType = ::LinkInfos::LinkInfos;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_LinkInfos;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  EHRSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_LinkInfos'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkInfos =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_LinkInfos>;


// ---- Event 'EHR_Bus_MergePoints' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_MergePoints'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_MergePoints {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"EHR_Bus_MergePoints"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{57};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4723};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/AllMergePoints
   */
  using SampleType = ::AllMergePoints::AllMergePoints;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_MergePoints;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  EHRSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_MergePoints'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_MergePoints =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_MergePoints>;


// ---- Event 'EHR_Bus_GeofennceJudge' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EHR_Bus_GeofennceJudge'.
 */
struct SkeletonIpcEventConfigurationEHR_Bus_GeofennceJudge {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"EHR_Bus_GeofennceJudge"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{57};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4726};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/GeofennceJudge
   */
  using SampleType = ::GeofennceJudge::GeofennceJudge;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::ehrsi_out::events::SerializerEHR_Bus_GeofennceJudge;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  EHRSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EHR_Bus_GeofennceJudge'.
 */
using EHRSI_OutSkeletonIpcEventManagerEHR_Bus_GeofennceJudge =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEHR_Bus_GeofennceJudge>;


}  // namespace ehrsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // EHREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

