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
/**        \file  PerceptionExe/src/amsr/someip_binding_xf/internal/perceptionsi_out/PerceptionSI_Out_payload_serializer_factory.cpp
 *        \brief  SOME/IP payload serialization factory for service 'PerceptionSI_Out'
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
#include "amsr/someip_binding_xf/internal/perceptionsi_out/PerceptionSI_Out_payload_serializer_factory.h"
#include "amsr/someip_binding_xf/internal/perceptionsi_out/PerceptionSI_Out_skeleton_someip_event_deployment.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_perceptionsi_out {

namespace events {
namespace skeleton {
namespace Perception_Bus_LaneInfo {

// ---- Event 'Perception_Bus_LaneInfo' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace Perception_Bus_LaneInfo
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace Perception_Bus_FrntCamInfo {

// ---- Event 'Perception_Bus_FrntCamInfo' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace Perception_Bus_FrntCamInfo
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace FrntCam_Bus_TrafficInfo {

// ---- Event 'FrntCam_Bus_TrafficInfo' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace FrntCam_Bus_TrafficInfo
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace FrntCam_Bus_TrfcLi {

// ---- Event 'FrntCam_Bus_TrfcLi' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace FrntCam_Bus_TrfcLi
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace FrntCam_Bus_LineSignGroup {

// ---- Event 'FrntCam_Bus_LineSignGroup' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace FrntCam_Bus_LineSignGroup
}  // namespace skeleton
}  // namespace events
namespace events {
namespace skeleton {
namespace FrntCam_Bus_ExtInfo {

// ---- Event 'FrntCam_Bus_ExtInfo' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace FrntCam_Bus_ExtInfo
}  // namespace skeleton
}  // namespace events

}  // namespace gen_perceptionsi_out

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

