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
/**        \file  EDRExe/src/amsr/someip_binding_xf/internal/edrsi_in/EDRSI_In_payload_deserializer_factory.cpp
 *        \brief  SOME/IP payload deserialization factory for service 'EDRSI_In'
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
#include "amsr/someip_binding_xf/internal/edrsi_in/EDRSI_In_payload_deserializer_factory.h"
#include "amsr/someip_binding_xf/internal/edrsi_in/EDRSI_In_proxy_someip_event_deployment.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_edrsi_in {

namespace events {
namespace proxy {
namespace OSM2_Bus_EDR_Data {

// ---- Event 'OSM2_Bus_EDR_Data' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> DeserializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::DeserializerWrapper>();
} // COV_SOMEIPBINDING_PROXY_XF

}  // namespace OSM2_Bus_EDR_Data
}  // namespace proxy
}  // namespace events

}  // namespace gen_edrsi_in

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

