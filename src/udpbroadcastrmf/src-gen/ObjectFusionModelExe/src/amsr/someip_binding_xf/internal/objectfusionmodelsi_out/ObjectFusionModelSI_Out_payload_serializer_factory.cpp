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
/**        \file  ObjectFusionModelExe/src/amsr/someip_binding_xf/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_payload_serializer_factory.cpp
 *        \brief  SOME/IP payload serialization factory for service 'ObjectFusionModelSI_Out'
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
#include "amsr/someip_binding_xf/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_payload_serializer_factory.h"
#include "amsr/someip_binding_xf/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_event_deployment.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_objectfusionmodelsi_out {

namespace events {
namespace skeleton {
namespace OFM_Bus_FusedTargets01 {

// ---- Event 'OFM_Bus_FusedTargets01' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace OFM_Bus_FusedTargets01
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace OFM_Bus_FusedTargets02 {

// ---- Event 'OFM_Bus_FusedTargets02' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace OFM_Bus_FusedTargets02
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace OFM_Bus_FusedTargets03 {

// ---- Event 'OFM_Bus_FusedTargets03' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace OFM_Bus_FusedTargets03
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace OFM_Bus_FusedTargets04 {

// ---- Event 'OFM_Bus_FusedTargets04' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace OFM_Bus_FusedTargets04
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace OFM_St_SOCFusedSts {

// ---- Event 'OFM_St_SOCFusedSts' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace OFM_St_SOCFusedSts
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace OFM_Bus_FourDRadarStatus {

// ---- Event 'OFM_Bus_FourDRadarStatus' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace OFM_Bus_FourDRadarStatus
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace OFM_Bus_LaneInfo {

// ---- Event 'OFM_Bus_LaneInfo' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace OFM_Bus_LaneInfo
}  // namespace skeleton
}  // namespace events

}  // namespace gen_objectfusionmodelsi_out

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

