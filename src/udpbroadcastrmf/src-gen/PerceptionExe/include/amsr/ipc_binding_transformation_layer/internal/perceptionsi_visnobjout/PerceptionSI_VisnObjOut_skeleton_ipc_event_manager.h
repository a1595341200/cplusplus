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
/**        \file  PerceptionExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'PerceptionSI_VisnObjOut'
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_IPC_EVENT_MANAGER_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_FrntCamVisObjIDT_25/impl_type_array_frntcamvisobjidt_25.h"
#include "Array_UnfilteredObjIDT_30/impl_type_array_unfilteredobjidt_30.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_visnobjout/events/serializer_FrntCam_Bus_UnfilteredObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_visnobjout/events/serializer_FrntCam_Bus_VisnObj.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "perceptionsi_visnobjout/PerceptionSI_VisnObjOut.h"
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace perceptionsi_visnobjout {

// Forward-declaration for back-reference
class PerceptionSI_VisnObjOutProvidedIpcServiceInstance;

// ---- Event 'FrntCam_Bus_VisnObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_VisnObj'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_VisnObj {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_FrntCamVisObjIDT_25
   */
  using SampleType = ::Array_FrntCamVisObjIDT_25::Array_FrntCamVisObjIDT_25;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_visnobjout::events::SerializerFrntCam_Bus_VisnObj;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_VisnObj'.
 */
using PerceptionSI_VisnObjOutSkeletonIpcEventManagerFrntCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_VisnObj::SampleType, SkeletonIpcEventConfigurationFrntCam_Bus_VisnObj::PayloadSerializer>;


// ---- Event 'FrntCam_Bus_UnfilteredObj' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_UnfilteredObj'.
 */
struct SkeletonIpcEventConfigurationFrntCam_Bus_UnfilteredObj {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_UnfilteredObjIDT_30
   */
  using SampleType = ::Array_UnfilteredObjIDT_30::Array_UnfilteredObjIDT_30;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_visnobjout::events::SerializerFrntCam_Bus_UnfilteredObj;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FrntCam_Bus_UnfilteredObj'.
 */
using PerceptionSI_VisnObjOutSkeletonIpcEventManagerFrntCam_Bus_UnfilteredObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFrntCam_Bus_UnfilteredObj::SampleType, SkeletonIpcEventConfigurationFrntCam_Bus_UnfilteredObj::PayloadSerializer>;


}  // namespace perceptionsi_visnobjout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_IPC_EVENT_MANAGER_H_

