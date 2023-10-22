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
 *         Commit ID: 75f4758dd5971a0db1f17eb58f5a68a7d1edabad
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FourDRadarECUSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FrontFourDRadarSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets_11.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets_22.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets_32.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_St_FrntRdrObjE2Efail.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_St_FrntRdrObjTO.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_St_SOCFusedSts.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace objectfusionmodelsi_out {

// Forward-declaration for back-reference
class ObjectFusionModelSI_OutProvidedIpcServiceInstance;

// ---- Event 'OFM_Bus_FusedTargets_11' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FusedTargets_11'.
 */
struct SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_11 {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"OFM_Bus_FusedTargets_11"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{33};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4789};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ObjGroup2Vccs_11
   */
  using SampleType = ::ObjGroup2Vccs_11::ObjGroup2Vccs_11;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets_11;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  ObjectFusionModelSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_Bus_FusedTargets_11'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_11 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_11>;


// ---- Event 'OFM_St_SOCFusedSts' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_St_SOCFusedSts'.
 */
struct SkeletonIpcEventConfigurationOFM_St_SOCFusedSts {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"OFM_St_SOCFusedSts"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{33};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4377};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/SOCFusedSts
   */
  using SampleType = ::SOCFusedSts::SOCFusedSts;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_St_SOCFusedSts;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  ObjectFusionModelSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_St_SOCFusedSts'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_SOCFusedSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_St_SOCFusedSts>;


// ---- Event 'OFM_Bus_FourDRadarECUSts' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FourDRadarECUSts'.
 */
struct SkeletonIpcEventConfigurationOFM_Bus_FourDRadarECUSts {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"OFM_Bus_FourDRadarECUSts"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{33};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4378};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarECUSts
   */
  using SampleType = ::FourDRadarECUSts::FourDRadarECUSts;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FourDRadarECUSts;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  ObjectFusionModelSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_Bus_FourDRadarECUSts'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FourDRadarECUSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_Bus_FourDRadarECUSts>;


// ---- Event 'OFM_Bus_FrontFourDRadarSts' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FrontFourDRadarSts'.
 */
struct SkeletonIpcEventConfigurationOFM_Bus_FrontFourDRadarSts {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"OFM_Bus_FrontFourDRadarSts"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{33};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4379};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FrontFourDRadarSts1Vcc
   */
  using SampleType = ::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FrontFourDRadarSts;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  ObjectFusionModelSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_Bus_FrontFourDRadarSts'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FrontFourDRadarSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_Bus_FrontFourDRadarSts>;


// ---- Event 'OFM_Bus_FusedTargets_22' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FusedTargets_22'.
 */
struct SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_22 {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"OFM_Bus_FusedTargets_22"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{33};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4790};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ObjGroup2Vccs_11
   */
  using SampleType = ::ObjGroup2Vccs_11::ObjGroup2Vccs_11;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets_22;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  ObjectFusionModelSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_Bus_FusedTargets_22'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_22 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_22>;


// ---- Event 'OFM_Bus_FusedTargets_32' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FusedTargets_32'.
 */
struct SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_32 {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"OFM_Bus_FusedTargets_32"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{33};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4791};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ObjGroup2Vccs_10
   */
  using SampleType = ::ObjGroup2Vccs_10::ObjGroup2Vccs_10;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets_32;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  ObjectFusionModelSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_Bus_FusedTargets_32'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_32 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_32>;


// ---- Event 'OFM_St_FrntRdrObjE2Efail' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_St_FrntRdrObjE2Efail'.
 */
struct SkeletonIpcEventConfigurationOFM_St_FrntRdrObjE2Efail {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"OFM_St_FrntRdrObjE2Efail"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{33};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4838};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FrntRdrObjE2Efail
   */
  using SampleType = ::FrntRdrObjE2Efail::FrntRdrObjE2Efail;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_St_FrntRdrObjE2Efail;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  ObjectFusionModelSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_St_FrntRdrObjE2Efail'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_FrntRdrObjE2Efail =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_St_FrntRdrObjE2Efail>;


// ---- Event 'OFM_St_FrntRdrObjTO' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'OFM_St_FrntRdrObjTO'.
 */
struct SkeletonIpcEventConfigurationOFM_St_FrntRdrObjTO {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"OFM_St_FrntRdrObjTO"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{33};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4839};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FrntRdrObjTO
   */
  using SampleType = ::FrntRdrObjTO::FrntRdrObjTO;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_St_FrntRdrObjTO;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  ObjectFusionModelSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'OFM_St_FrntRdrObjTO'.
 */
using ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_FrntRdrObjTO =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationOFM_St_FrntRdrObjTO>;


}  // namespace objectfusionmodelsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

