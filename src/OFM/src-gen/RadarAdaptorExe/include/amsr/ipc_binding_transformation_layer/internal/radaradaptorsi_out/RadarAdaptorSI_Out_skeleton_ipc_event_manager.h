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
/**        \file  RadarAdaptorExe/include/amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'RadarAdaptorSI_Out'
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

#ifndef RADARADAPTOREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define RADARADAPTOREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "radaradaptorsi_out/RadarAdaptorSI_Out.h"
#include "radaradaptorsi_out/radaradaptorsi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace radaradaptorsi_out {

// Forward-declaration for back-reference
class RadarAdaptorSI_OutProvidedIpcServiceInstance;

// ---- Event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 */
struct SkeletonIpcEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{61};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4933};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarECUStsGrpSts
   */
  using SampleType = ::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  RadarAdaptorSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 */
using RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts>;


// ---- Event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 */
struct SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{61};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4928};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarObjStsGrp01_10
   */
  using SampleType = ::FourDRadarObjStsGrp01_10::FourDRadarObjStsGrp01_10;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  RadarAdaptorSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 */
using RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01>;


// ---- Event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 */
struct SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{61};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4929};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarObjStsGrp11_20
   */
  using SampleType = ::FourDRadarObjStsGrp11_20::FourDRadarObjStsGrp11_20;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  RadarAdaptorSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 */
using RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02>;


// ---- Event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 */
struct SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{61};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4930};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarObjStsGrp21_30
   */
  using SampleType = ::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  RadarAdaptorSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 */
using RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03>;


// ---- Event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 */
struct SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{61};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4931};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarObjStsGrp31_40
   */
  using SampleType = ::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  RadarAdaptorSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 */
using RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04>;


// ---- Event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 */
struct SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{61};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4932};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarObjStsGrp41_42
   */
  using SampleType = ::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  RadarAdaptorSI_OutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 */
using RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05>;


}  // namespace radaradaptorsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // RADARADAPTOREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

