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
/**        \file  PerceptionExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'PerceptionSI_CamStsOut'
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_SKELETON_IPC_EVENT_MANAGER_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_camstsout/events/serializer_FrntCam_Bus_CamSts.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "perceptionsi_camstsout/PerceptionSI_CamStsOut.h"
#include "perceptionsi_camstsout/perceptionsi_camstsout_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace perceptionsi_camstsout {

// Forward-declaration for back-reference
class PerceptionSI_CamStsOutProvidedIpcServiceInstance;

// ---- Event 'FrntCam_Bus_CamSts' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_CamSts'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_CamSts {
  /*!
   * \brief Event Short name.
   */
  static vac::container::CStringView constexpr kEventName{"FrntCam_Bus_CamSts"_sv};

  /*!
   * \brief IPC service ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr  kServiceId{100};

  /*!
   * \brief IPC major version.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr  kMajorVersion{1};

  /*!
   * \brief IPC event ID.
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr  kEventId{4501};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/CamSts1Vcc
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_camstsout::events::SerializerFrntCam_Bus_CamSts;

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Type of provided service instance used for event notification handling.
   */
  using ProvidedIpcServiceInstance =  PerceptionSI_CamStsOutProvidedIpcServiceInstance;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_CamSts'.
 */
using PerceptionSI_CamStsOutSkeletonIpcEventManagerFrntCam_Bus_CamSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_CamSts>;


}  // namespace perceptionsi_camstsout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_SKELETON_IPC_EVENT_MANAGER_H_

