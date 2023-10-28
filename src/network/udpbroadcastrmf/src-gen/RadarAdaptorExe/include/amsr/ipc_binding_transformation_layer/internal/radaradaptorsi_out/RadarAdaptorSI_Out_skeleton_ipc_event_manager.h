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
 *         Commit ID: 9519b950801d42a5bc7a25dd6db848903642b9ba
 *********************************************************************************************************************/

#ifndef RADARADAPTOREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_
#define RADARADAPTOREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarObjStsGrp01_42IDT/impl_type_fourdradarobjstsgrp01_42idt.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp.h"
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

// ---- Event 'FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp' -------------------------------------------
/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp'.
 */
struct SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp {
  
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT
   */
  using SampleType = ::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp;
};

/*!
 * \brief IPC Skeleton event manager type for event 'FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp'.
 */
using RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp =
    ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManager<SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp::SampleType, SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp::PayloadSerializer>;


}  // namespace radaradaptorsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // RADARADAPTOREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IPC_EVENT_MANAGER_H_

