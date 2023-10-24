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
/**        \file  TrafficSignInformationExe/src/amsr/someip_binding_xf/internal/trafficsigninformationsi_out/TrafficSignInformationSI_Out_payload_serializer_factory.cpp
 *        \brief  SOME/IP payload serialization factory for service 'TrafficSignInformationSI_Out'
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
#include "amsr/someip_binding_xf/internal/trafficsigninformationsi_out/TrafficSignInformationSI_Out_payload_serializer_factory.h"
#include "amsr/someip_binding_xf/internal/trafficsigninformationsi_out/TrafficSignInformationSI_Out_skeleton_someip_event_deployment.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_trafficsigninformationsi_out {

namespace events {
namespace skeleton {
namespace TSI_Bus_HMIData {

// ---- Event 'TSI_Bus_HMIData' -------------------------------------------

std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> SerializerFactory::Create() {
    return std::make_unique<EventDeploymentInfo::SerializerWrapper>();
} // COV_SOMEIPBINDING_SKELETON_XF

}  // namespace TSI_Bus_HMIData
}  // namespace skeleton
}  // namespace events

}  // namespace gen_trafficsigninformationsi_out

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

