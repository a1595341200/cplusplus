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
/**        \file  ObjectFusionModelExe/include/amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'RadarAdaptorSI_Out'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_XF_IPC_EVENTS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarObjStsGrp01_42IDT/impl_type_fourdradarobjstsgrp01_42idt.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/radaradaptorsi_out/events/deserializer_FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "radaradaptorsi_out/radaradaptorsi_out_common.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace radaradaptorsi_out {

// Forward-declaration for back-reference
class RadarAdaptorSI_OutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class RadarAdaptorSI_OutProxyXf;


/*!
 * \brief Configuration for Event 'FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp'.
 */
struct ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::radaradaptorsi_out::events::DeserializerFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  RadarAdaptorSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp'.
 * \details Handles event subscriptions and notification deserialization.
 */
using RadarAdaptorSI_OutProxyXfEventBackendFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp::SampleType,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp::SampleDeserializerType, ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp::kIsFieldEvent>;


}  // namespace radaradaptorsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_XF_IPC_EVENTS_H_

