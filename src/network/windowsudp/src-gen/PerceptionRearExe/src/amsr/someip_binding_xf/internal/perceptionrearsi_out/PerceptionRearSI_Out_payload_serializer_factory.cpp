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
/**        \file  PerceptionRearExe/src/amsr/someip_binding_xf/internal/perceptionrearsi_out/PerceptionRearSI_Out_payload_serializer_factory.cpp
 *        \brief  SOME/IP payload serialization factory for service 'PerceptionRearSI_Out'
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
#include "amsr/someip_binding_xf/internal/perceptionrearsi_out/PerceptionRearSI_Out_payload_serializer_factory.h"
#include "amsr/someip_binding_xf/internal/perceptionrearsi_out/PerceptionRearSI_Out_skeleton_someip_event_deployment.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_perceptionrearsi_out {

namespace events {
namespace skeleton {
namespace PerceptionRear_Bus_LaneInfo {

// ---- Event 'PerceptionRear_Bus_LaneInfo' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace PerceptionRear_Bus_LaneInfo
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace PerceptionRear_Bus_CameraStatus {

// ---- Event 'PerceptionRear_Bus_CameraStatus' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace PerceptionRear_Bus_CameraStatus
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace PerceptionRear_Bus_VisnObj {

// ---- Event 'PerceptionRear_Bus_VisnObj' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace PerceptionRear_Bus_VisnObj
}  // namespace skeleton
}  // namespace events

}  // namespace gen_perceptionrearsi_out

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

