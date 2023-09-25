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
/**        \file  RoadModelFusionExe/src/roadmodelfusionsi_out/roadmodelfusionsi_out_skeleton.cpp
 *        \brief  Skeleton for service 'RoadModelFusionSI_Out'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "roadmodelfusionsi_out/roadmodelfusionsi_out_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace roadmodelfusionsi_out {
namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<RoadModelFusionSI_OutSkeleton::ServiceDiscovery*> RoadModelFusionSI_OutSkeleton::sd_;

RoadModelFusionSI_OutSkeleton::ConstructionResult RoadModelFusionSI_OutSkeleton::Preconstruct(
    ara::com::InstanceIdentifier instance_id, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

RoadModelFusionSI_OutSkeleton::ConstructionResult RoadModelFusionSI_OutSkeleton::Preconstruct(
    ara::core::InstanceSpecifier instance, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

RoadModelFusionSI_OutSkeleton::ConstructionResult RoadModelFusionSI_OutSkeleton::Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode);
}

RoadModelFusionSI_OutSkeleton::RoadModelFusionSI_OutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, RMF_Bus_ExtractedMapInf(this)
, RMF_Bus_RefPathGlobal(this)
, RMF_Bus_LaneModel(this)
, RMF_Bus_RefLineSpeedInf(this)
, RMF_Bus_RefLinePoints(this)
, RMF_Bus_MapOdd(this)
 {}

RoadModelFusionSI_OutSkeleton::RoadModelFusionSI_OutSkeleton(ara::com::InstanceIdentifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , RMF_Bus_ExtractedMapInf(this)
      , RMF_Bus_RefPathGlobal(this)
      , RMF_Bus_LaneModel(this)
      , RMF_Bus_RefLineSpeedInf(this)
      , RMF_Bus_RefLinePoints(this)
      , RMF_Bus_MapOdd(this)
       {}

RoadModelFusionSI_OutSkeleton::RoadModelFusionSI_OutSkeleton(ara::core::InstanceSpecifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , RMF_Bus_ExtractedMapInf(this)
      , RMF_Bus_RefPathGlobal(this)
      , RMF_Bus_LaneModel(this)
      , RMF_Bus_RefLineSpeedInf(this)
      , RMF_Bus_RefLinePoints(this)
      , RMF_Bus_MapOdd(this)
       {}

RoadModelFusionSI_OutSkeleton::RoadModelFusionSI_OutSkeleton(ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance_identifiers, mode}
      , RMF_Bus_ExtractedMapInf(this)
      , RMF_Bus_RefPathGlobal(this)
      , RMF_Bus_LaneModel(this)
      , RMF_Bus_RefLineSpeedInf(this)
      , RMF_Bus_RefLinePoints(this)
      , RMF_Bus_MapOdd(this)
       {}

RoadModelFusionSI_OutSkeleton::~RoadModelFusionSI_OutSkeleton() noexcept {
  // Next line might block until all running method requests are done.
  StopOfferService();
}

void RoadModelFusionSI_OutSkeleton::DoFieldInitializationChecks() noexcept {
}

void RoadModelFusionSI_OutSkeleton::SendInitialFieldNotifications() noexcept {
  // Send initial field events for all fields with "hasNotifier = true"
}

void RoadModelFusionSI_OutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->OfferService(instance_id, this);
}

void RoadModelFusionSI_OutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->StopOfferService(instance_id);
}

::amsr::generic::Singleton<RoadModelFusionSI_OutSkeleton::ServiceDiscovery*>& RoadModelFusionSI_OutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;
}

void RoadModelFusionSI_OutSkeleton::RegisterServiceDiscovery(RoadModelFusionSI_OutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void RoadModelFusionSI_OutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }

}  // namespace skeleton
}  // namespace roadmodelfusionsi_out

