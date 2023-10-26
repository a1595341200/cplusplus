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
/**        \file  RVDCExe/src/amsr/someip_binding_xf/internal/mcu_data_info/MCU_Data_Info_payload_deserializer_factory.cpp
 *        \brief  SOME/IP payload deserialization factory for service 'MCU_Data_Info'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 34a78d6264927917d6838a378b15b039fd1cad4a
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/mcu_data_info/MCU_Data_Info_payload_deserializer_factory.h"
#include "amsr/someip_binding_xf/internal/mcu_data_info/MCU_Data_Info_proxy_someip_event_deployment.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_mcu_data_info {

namespace events {
namespace proxy {
namespace Ids {

// ---- Event 'Ids' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> DeserializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::DeserializerWrapper>();
} // COV_SOMEIPBINDING_PROXY_XF

}  // namespace Ids
}  // namespace proxy
}  // namespace events
namespace events {
namespace proxy {
namespace Mcu_Reset_Info1 {

// ---- Event 'Mcu_Reset_Info1' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> DeserializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::DeserializerWrapper>();
} // COV_SOMEIPBINDING_PROXY_XF

}  // namespace Mcu_Reset_Info1
}  // namespace proxy
}  // namespace events
namespace events {
namespace proxy {
namespace Mcu_Reset_Info2 {

// ---- Event 'Mcu_Reset_Info2' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> DeserializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::DeserializerWrapper>();
} // COV_SOMEIPBINDING_PROXY_XF

}  // namespace Mcu_Reset_Info2
}  // namespace proxy
}  // namespace events
namespace events {
namespace proxy {
namespace Mcu_Reset_Info3 {

// ---- Event 'Mcu_Reset_Info3' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> DeserializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::DeserializerWrapper>();
} // COV_SOMEIPBINDING_PROXY_XF

}  // namespace Mcu_Reset_Info3
}  // namespace proxy
}  // namespace events
namespace events {
namespace proxy {
namespace Mcu_Reset_Info4 {

// ---- Event 'Mcu_Reset_Info4' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> DeserializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::DeserializerWrapper>();
} // COV_SOMEIPBINDING_PROXY_XF

}  // namespace Mcu_Reset_Info4
}  // namespace proxy
}  // namespace events

}  // namespace gen_mcu_data_info

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

