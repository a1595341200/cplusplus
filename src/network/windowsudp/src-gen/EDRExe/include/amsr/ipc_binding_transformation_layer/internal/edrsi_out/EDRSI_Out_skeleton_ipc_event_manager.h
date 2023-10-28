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
/**        \file  EDRExe/include/amsr/ipc_binding_transformation_layer/internal/edrsi_out/EDRSI_Out_skeleton_ipc_event_manager.h
 *        \brief  IPC skeleton event handling for events and field notifications of service 'EDRSI_Out'
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

#ifndef EDREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EDRSI_OUT_EDRSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define EDREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EDRSI_OUT_EDRSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/edrsi_out/events/serializer_EDR_Bus_EDRInfo.h"
#include "edrsi_out/EDRSI_Out.h"
#include "edrsi_out/edrsi_out_skeleton.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager.h"
#include "s_EDRInfo_tIDT/impl_type_s_edrinfo_tidt.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace edrsi_out {

// Forward-declaration for back-reference
class EDRSI_OutProvidedIpcServiceInstance;

// ---- Event 'EDR_Bus_EDRInfo' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'EDR_Bus_EDRInfo'.
 */
struct SkeletonIpcEventConfigurationEDR_Bus_EDRInfo {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/s_EDRInfo_tIDT
   */
  using SampleType = ::s_EDRInfo_tIDT::s_EDRInfo_tIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::edrsi_out::events::SerializerEDR_Bus_EDRInfo;
};

/*!
 * \brief IPC Skeleton event manager type for event 'EDR_Bus_EDRInfo'.
 */
using EDRSI_OutSkeletonIpcEventManagerEDR_Bus_EDRInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationEDR_Bus_EDRInfo::SampleType, SkeletonIpcEventConfigurationEDR_Bus_EDRInfo::PayloadSerializer>;


}  // namespace edrsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // EDREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EDRSI_OUT_EDRSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

