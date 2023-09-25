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
/**        \file  PerceptionExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'PerceptionSI_LaneOut'
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_IPC_EVENT_MANAGER_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEvent.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEventGroup.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneMkrTemp.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeLe.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeRi.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrLe.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrRi.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsLe.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsRi.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "perceptionsi_laneout/PerceptionSI_LaneOut.h"
#include "perceptionsi_laneout/perceptionsi_laneout_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace perceptionsi_laneout {

// Forward-declaration for back-reference
class PerceptionSI_LaneOutProvidedIpcServiceInstance;

// ---- Event 'FusedCam_Bus_LaneMkrLe' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FusedCam_Bus_LaneMkrLe'.
 */
struct SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrLe {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FusedCam_Bus_LaneMkrLe"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{98};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4607};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneMkrCam1Le
   */
  using SampleType = ::LaneMkrCam1Le::LaneMkrCam1Le;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFusedCam_Bus_LaneMkrLe;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_LaneOutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FusedCam_Bus_LaneMkrLe'.
 */
using PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrLe =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrLe>;


// ---- Event 'FusedCam_Bus_LaneMkrRi' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FusedCam_Bus_LaneMkrRi'.
 */
struct SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrRi {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FusedCam_Bus_LaneMkrRi"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{98};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4608};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneMkrCam1Ri
   */
  using SampleType = ::LaneMkrCam1Ri::LaneMkrCam1Ri;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFusedCam_Bus_LaneMkrRi;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_LaneOutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FusedCam_Bus_LaneMkrRi'.
 */
using PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrRi =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrRi>;


// ---- Event 'FrntCam_Bus_RoadEdgeLe' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_RoadEdgeLe'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeLe {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FrntCam_Bus_RoadEdgeLe"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{98};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4610};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RoadEdge1VccLe
   */
  using SampleType = ::RoadEdge1VccLe::RoadEdge1VccLe;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFrntCam_Bus_RoadEdgeLe;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_LaneOutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_RoadEdgeLe'.
 */
using PerceptionSI_LaneOutSkeletonIpcEventManagerFrntCam_Bus_RoadEdgeLe =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeLe>;


// ---- Event 'FrntCam_Bus_RoadEdgeRi' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_RoadEdgeRi'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeRi {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FrntCam_Bus_RoadEdgeRi"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{98};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4611};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RoadEdge1VccRi
   */
  using SampleType = ::RoadEdge1VccRi::RoadEdge1VccRi;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFrntCam_Bus_RoadEdgeRi;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_LaneOutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_RoadEdgeRi'.
 */
using PerceptionSI_LaneOutSkeletonIpcEventManagerFrntCam_Bus_RoadEdgeRi =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeRi>;


// ---- Event 'Cam_Bus_LaneEvent' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'Cam_Bus_LaneEvent'.
 */
struct SkeletonIpcEventConfigurationCam_Bus_LaneEvent {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"Cam_Bus_LaneEvent"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{98};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4617};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneEvent
   */
  using SampleType = ::LaneEvent::LaneEvent;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerCam_Bus_LaneEvent;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_LaneOutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'Cam_Bus_LaneEvent'.
 */
using PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneEvent =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationCam_Bus_LaneEvent>;


// ---- Event 'Cam_Bus_LaneEventGroup' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'Cam_Bus_LaneEventGroup'.
 */
struct SkeletonIpcEventConfigurationCam_Bus_LaneEventGroup {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"Cam_Bus_LaneEventGroup"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{98};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4618};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneEventGroups
   */
  using SampleType = ::LaneEventGroups::LaneEventGroups;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerCam_Bus_LaneEventGroup;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_LaneOutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'Cam_Bus_LaneEventGroup'.
 */
using PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneEventGroup =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationCam_Bus_LaneEventGroup>;


// ---- Event 'Cam_Bus_LaneMkrTemp' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'Cam_Bus_LaneMkrTemp'.
 */
struct SkeletonIpcEventConfigurationCam_Bus_LaneMkrTemp {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"Cam_Bus_LaneMkrTemp"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{98};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4619};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneMkrTempCam1Vcc
   */
  using SampleType = ::LaneMkrTempCam1Vcc::LaneMkrTempCam1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerCam_Bus_LaneMkrTemp;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_LaneOutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'Cam_Bus_LaneMkrTemp'.
 */
using PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneMkrTemp =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationCam_Bus_LaneMkrTemp>;


// ---- Event 'FusedCam_Bus_LaneMkrSecClsLe' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FusedCam_Bus_LaneMkrSecClsLe'.
 */
struct SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsLe {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FusedCam_Bus_LaneMkrSecClsLe"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{98};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4622};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneMkrCam1SecClsLe
   */
  using SampleType = ::LaneMkrCam1SecClsLe::LaneMkrCam1SecClsLe;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFusedCam_Bus_LaneMkrSecClsLe;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_LaneOutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FusedCam_Bus_LaneMkrSecClsLe'.
 */
using PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrSecClsLe =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsLe>;


// ---- Event 'FusedCam_Bus_LaneMkrSecClsRi' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FusedCam_Bus_LaneMkrSecClsRi'.
 */
struct SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsRi {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FusedCam_Bus_LaneMkrSecClsRi"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{98};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4623};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneMkrCam1SecClsRi
   */
  using SampleType = ::LaneMkrCam1SecClsRi::LaneMkrCam1SecClsRi;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFusedCam_Bus_LaneMkrSecClsRi;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_LaneOutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FusedCam_Bus_LaneMkrSecClsRi'.
 */
using PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrSecClsRi =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsRi>;


}  // namespace perceptionsi_laneout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_IPC_EVENT_MANAGER_H_

