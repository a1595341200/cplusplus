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
/**        \file  ObjectFusionModelExe/src/amsr/someip_binding_xf/internal/tosoca_siderdrfusedtargetssi/TOSOCA_SideRdrFusedTargetsSI_payload_deserializer_factory.cpp
 *        \brief  SOME/IP payload deserialization factory for service 'TOSOCA_SideRdrFusedTargetsSI'
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
#include "amsr/someip_binding_xf/internal/tosoca_siderdrfusedtargetssi/TOSOCA_SideRdrFusedTargetsSI_payload_deserializer_factory.h"
#include "amsr/someip_binding_xf/internal/tosoca_siderdrfusedtargetssi/TOSOCA_SideRdrFusedTargetsSI_proxy_someip_event_deployment.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_tosoca_siderdrfusedtargetssi {

namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets1 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets1' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> DeserializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::DeserializerWrapper>();
} // COV_SOMEIPBINDING_PROXY_XF

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets1
}  // namespace proxy
}  // namespace events
namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets2 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets2' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> DeserializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::DeserializerWrapper>();
} // COV_SOMEIPBINDING_PROXY_XF

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets2
}  // namespace proxy
}  // namespace events
namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets3 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets3' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> DeserializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::DeserializerWrapper>();
} // COV_SOMEIPBINDING_PROXY_XF

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets3
}  // namespace proxy
}  // namespace events
namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets4 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets4' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> DeserializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::DeserializerWrapper>();
} // COV_SOMEIPBINDING_PROXY_XF

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets4
}  // namespace proxy
}  // namespace events

}  // namespace gen_tosoca_siderdrfusedtargetssi

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

