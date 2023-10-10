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
 *         Commit ID: 75f4758dd5971a0db1f17eb58f5a68a7d1edabad
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_XF_IPC_EVENTS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/radaradaptorsi_out/events/deserializer_FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/radaradaptorsi_out/events/deserializer_FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/radaradaptorsi_out/events/deserializer_FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/radaradaptorsi_out/events/deserializer_FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/radaradaptorsi_out/events/deserializer_FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/radaradaptorsi_out/events/deserializer_FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05.h"
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
 * \brief Configuration for Event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 */
struct ProxyXfIpcEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::radaradaptorsi_out::events::DeserializerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  RadarAdaptorSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using RadarAdaptorSI_OutProxyXfEventBackendFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::SampleType,
     ProxyXfIpcEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::SampleDeserializerType, ProxyXfIpcEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 */
struct ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FourDRadarObjStsGrp01_10::FourDRadarObjStsGrp01_10;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::radaradaptorsi_out::events::DeserializerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  RadarAdaptorSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 * \details Handles event subscriptions and notification deserialization.
 */
using RadarAdaptorSI_OutProxyXfEventBackendFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::SampleType,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::SampleDeserializerType, ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 */
struct ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FourDRadarObjStsGrp11_20::FourDRadarObjStsGrp11_20;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::radaradaptorsi_out::events::DeserializerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  RadarAdaptorSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 * \details Handles event subscriptions and notification deserialization.
 */
using RadarAdaptorSI_OutProxyXfEventBackendFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::SampleType,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::SampleDeserializerType, ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 */
struct ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::radaradaptorsi_out::events::DeserializerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  RadarAdaptorSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 * \details Handles event subscriptions and notification deserialization.
 */
using RadarAdaptorSI_OutProxyXfEventBackendFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::SampleType,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::SampleDeserializerType, ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 */
struct ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::radaradaptorsi_out::events::DeserializerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  RadarAdaptorSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 * \details Handles event subscriptions and notification deserialization.
 */
using RadarAdaptorSI_OutProxyXfEventBackendFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::SampleType,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::SampleDeserializerType, ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 */
struct ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::radaradaptorsi_out::events::DeserializerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  RadarAdaptorSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 * \details Handles event subscriptions and notification deserialization.
 */
using RadarAdaptorSI_OutProxyXfEventBackendFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::SampleType,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::SampleDeserializerType, ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::kIsFieldEvent>;


}  // namespace radaradaptorsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_XF_IPC_EVENTS_H_

