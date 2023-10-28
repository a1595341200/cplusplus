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
/**        \file  PerceptionSideExe/src/amsr/someip_binding_xf/internal/perceptionsidesi_out/PerceptionSideSI_Out_payload_serializer_factory.cpp
 *        \brief  SOME/IP payload serialization factory for service 'PerceptionSideSI_Out'
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
#include "amsr/someip_binding_xf/internal/perceptionsidesi_out/PerceptionSideSI_Out_payload_serializer_factory.h"
#include "amsr/someip_binding_xf/internal/perceptionsidesi_out/PerceptionSideSI_Out_skeleton_someip_event_deployment.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_perceptionsidesi_out {

namespace events {
namespace skeleton {
namespace FRCam_Bus_VisnObj {

// ---- Event 'FRCam_Bus_VisnObj' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace FRCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace FLCam_Bus_VisnObj {

// ---- Event 'FLCam_Bus_VisnObj' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace FLCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace RLCam_Bus_VisnObj {

// ---- Event 'RLCam_Bus_VisnObj' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace RLCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace RRCam_Bus_VisnObj {

// ---- Event 'RRCam_Bus_VisnObj' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace RRCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace PerceptionSide_Bus_CameraStatus {

// ---- Event 'PerceptionSide_Bus_CameraStatus' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace PerceptionSide_Bus_CameraStatus
}  // namespace skeleton
}  // namespace events

}  // namespace gen_perceptionsidesi_out

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

