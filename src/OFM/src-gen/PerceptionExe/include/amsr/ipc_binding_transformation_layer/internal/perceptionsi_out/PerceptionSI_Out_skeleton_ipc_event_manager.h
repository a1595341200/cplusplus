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
 *         Commit ID: 75f4758dd5971a0db1f17eb58f5a68a7d1edabad
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_Crosswalk.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_ExtInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_LsrObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_RoadSign.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_StopLine.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcLi.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcSign.h"
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

// ---- Event 'FrntCam_Bus_RoadSign' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_RoadSign'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_RoadSign {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FrntCam_Bus_RoadSign"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{37};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4609};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RoadSigns
   */
  using SampleType = ::RoadSigns::RoadSigns;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_RoadSign;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_RoadSign'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_RoadSign =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_RoadSign>;


// ---- Event 'FrntCam_Bus_TrfcSign' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_TrfcSign'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_TrfcSign {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FrntCam_Bus_TrfcSign"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{37};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4612};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/TrfcSigns
   */
  using SampleType = ::TrfcSigns::TrfcSigns;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_TrfcSign;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_TrfcSign'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcSign =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_TrfcSign>;


// ---- Event 'FrntCam_Bus_StopLine' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_StopLine'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_StopLine {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FrntCam_Bus_StopLine"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{37};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4613};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/StopLine
   */
  using SampleType = ::StopLine::StopLine;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_StopLine;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_StopLine'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_StopLine =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_StopLine>;


// ---- Event 'FrntCam_Bus_Crosswalk' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_Crosswalk'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_Crosswalk {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FrntCam_Bus_Crosswalk"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{37};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4614};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Crosswalk
   */
  using SampleType = ::Crosswalk::Crosswalk;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_Crosswalk;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_Crosswalk'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_Crosswalk =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_Crosswalk>;


// ---- Event 'FrntCam_Bus_TrfcLi' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_TrfcLi'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_TrfcLi {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FrntCam_Bus_TrfcLi"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{37};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4616};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/TrfcLi1Vccs
   */
  using SampleType = ::TrfcLi1Vccs::TrfcLi1Vccs;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_TrfcLi;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_TrfcLi'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcLi =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_TrfcLi>;


// ---- Event 'FrntCam_Bus_ExtInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_ExtInfo'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_ExtInfo {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FrntCam_Bus_ExtInfo"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{37};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4620};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ExtInfo
   */
  using SampleType = ::ExtInfo::ExtInfo;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_ExtInfo;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_ExtInfo'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_ExtInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_ExtInfo>;


// ---- Event 'FrntCam_Bus_LsrObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_LsrObj'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_LsrObj {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FrntCam_Bus_LsrObj"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{37};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4621};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LsrObj
   */
  using SampleType = ::LsrObj::LsrObj;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFrntCam_Bus_LsrObj;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_LsrObj'.
 */
using PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_LsrObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_LsrObj>;


}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

