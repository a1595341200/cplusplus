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
/**        \file  PerceptionSideExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'PerceptionSideSI_Out'
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FLCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FRCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FRCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_RLCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_RLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_RRCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_RRCam_Bus_VisnObj.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "perceptionsi_out/PerceptionSideSI_Out.h"
#include "perceptionsi_out/perceptionsidesi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace perceptionsi_out {

// Forward-declaration for back-reference
class PerceptionSideSI_OutProvidedIpcServiceInstance;

// ---- Event 'FLCam_Bus_VisnObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FLCam_Bus_VisnObj'.
 */
struct SkeletonIpcEventConfigurationFLCam_Bus_VisnObj {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FLCam_Bus_VisnObj"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{118};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4493};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/VisObjs
   */
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFLCam_Bus_VisnObj;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSideSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FLCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerFLCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFLCam_Bus_VisnObj>;


// ---- Event 'FRCam_Bus_VisnObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FRCam_Bus_VisnObj'.
 */
struct SkeletonIpcEventConfigurationFRCam_Bus_VisnObj {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FRCam_Bus_VisnObj"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{118};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4494};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/VisObjs
   */
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFRCam_Bus_VisnObj;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSideSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FRCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerFRCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFRCam_Bus_VisnObj>;


// ---- Event 'RLCam_Bus_VisnObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'RLCam_Bus_VisnObj'.
 */
struct SkeletonIpcEventConfigurationRLCam_Bus_VisnObj {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"RLCam_Bus_VisnObj"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{118};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4495};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/VisObjs
   */
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerRLCam_Bus_VisnObj;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSideSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'RLCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerRLCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationRLCam_Bus_VisnObj>;


// ---- Event 'RRCam_Bus_VisnObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'RRCam_Bus_VisnObj'.
 */
struct SkeletonIpcEventConfigurationRRCam_Bus_VisnObj {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"RRCam_Bus_VisnObj"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{118};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4496};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/VisObjs
   */
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerRRCam_Bus_VisnObj;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSideSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'RRCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerRRCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationRRCam_Bus_VisnObj>;


// ---- Event 'FLCam_Bus_CamSts' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FLCam_Bus_CamSts'.
 */
struct SkeletonIpcEventConfigurationFLCam_Bus_CamSts {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FLCam_Bus_CamSts"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{118};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4497};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/CamSts1Vcc
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFLCam_Bus_CamSts;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSideSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FLCam_Bus_CamSts'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerFLCam_Bus_CamSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFLCam_Bus_CamSts>;


// ---- Event 'FRCam_Bus_CamSts' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FRCam_Bus_CamSts'.
 */
struct SkeletonIpcEventConfigurationFRCam_Bus_CamSts {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FRCam_Bus_CamSts"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{118};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4498};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/CamSts1Vcc
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFRCam_Bus_CamSts;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSideSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FRCam_Bus_CamSts'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerFRCam_Bus_CamSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFRCam_Bus_CamSts>;


// ---- Event 'RLCam_Bus_CamSts' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'RLCam_Bus_CamSts'.
 */
struct SkeletonIpcEventConfigurationRLCam_Bus_CamSts {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"RLCam_Bus_CamSts"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{118};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4499};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/CamSts1Vcc
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerRLCam_Bus_CamSts;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSideSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'RLCam_Bus_CamSts'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerRLCam_Bus_CamSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationRLCam_Bus_CamSts>;


// ---- Event 'RRCam_Bus_CamSts' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'RRCam_Bus_CamSts'.
 */
struct SkeletonIpcEventConfigurationRRCam_Bus_CamSts {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"RRCam_Bus_CamSts"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{118};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4500};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/CamSts1Vcc
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerRRCam_Bus_CamSts;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSideSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'RRCam_Bus_CamSts'.
 */
using PerceptionSideSI_OutSkeletonIpcEventManagerRRCam_Bus_CamSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationRRCam_Bus_CamSts>;


}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

