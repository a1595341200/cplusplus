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
/**        \file  PerceptionExe/src/perceptionsi_laneout/perceptionsi_laneout_skeleton.cpp
 *        \brief  Skeleton for service 'PerceptionSI_LaneOut'.
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
#include "perceptionsi_laneout/perceptionsi_laneout_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace perceptionsi_laneout {
namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<PerceptionSI_LaneOutSkeleton::ServiceDiscovery*> PerceptionSI_LaneOutSkeleton::sd_;

PerceptionSI_LaneOutSkeleton::ConstructionResult PerceptionSI_LaneOutSkeleton::Preconstruct(
    ara::com::InstanceIdentifier instance_id, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

PerceptionSI_LaneOutSkeleton::ConstructionResult PerceptionSI_LaneOutSkeleton::Preconstruct(
    ara::core::InstanceSpecifier instance, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

PerceptionSI_LaneOutSkeleton::ConstructionResult PerceptionSI_LaneOutSkeleton::Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode);
}

PerceptionSI_LaneOutSkeleton::PerceptionSI_LaneOutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, FusedCam_Bus_LaneMkrLe(this)
, FusedCam_Bus_LaneMkrRi(this)
, FrntCam_Bus_RoadEdgeLe(this)
, FrntCam_Bus_RoadEdgeRi(this)
, Cam_Bus_LaneEvent(this)
, Cam_Bus_LaneEventGroup(this)
, Cam_Bus_LaneMkrTemp(this)
, FusedCam_Bus_LaneMkrSecClsLe(this)
, FusedCam_Bus_LaneMkrSecClsRi(this)
 {}

PerceptionSI_LaneOutSkeleton::PerceptionSI_LaneOutSkeleton(ara::com::InstanceIdentifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FusedCam_Bus_LaneMkrLe(this)
      , FusedCam_Bus_LaneMkrRi(this)
      , FrntCam_Bus_RoadEdgeLe(this)
      , FrntCam_Bus_RoadEdgeRi(this)
      , Cam_Bus_LaneEvent(this)
      , Cam_Bus_LaneEventGroup(this)
      , Cam_Bus_LaneMkrTemp(this)
      , FusedCam_Bus_LaneMkrSecClsLe(this)
      , FusedCam_Bus_LaneMkrSecClsRi(this)
       {}

PerceptionSI_LaneOutSkeleton::PerceptionSI_LaneOutSkeleton(ara::core::InstanceSpecifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FusedCam_Bus_LaneMkrLe(this)
      , FusedCam_Bus_LaneMkrRi(this)
      , FrntCam_Bus_RoadEdgeLe(this)
      , FrntCam_Bus_RoadEdgeRi(this)
      , Cam_Bus_LaneEvent(this)
      , Cam_Bus_LaneEventGroup(this)
      , Cam_Bus_LaneMkrTemp(this)
      , FusedCam_Bus_LaneMkrSecClsLe(this)
      , FusedCam_Bus_LaneMkrSecClsRi(this)
       {}

PerceptionSI_LaneOutSkeleton::PerceptionSI_LaneOutSkeleton(ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance_identifiers, mode}
      , FusedCam_Bus_LaneMkrLe(this)
      , FusedCam_Bus_LaneMkrRi(this)
      , FrntCam_Bus_RoadEdgeLe(this)
      , FrntCam_Bus_RoadEdgeRi(this)
      , Cam_Bus_LaneEvent(this)
      , Cam_Bus_LaneEventGroup(this)
      , Cam_Bus_LaneMkrTemp(this)
      , FusedCam_Bus_LaneMkrSecClsLe(this)
      , FusedCam_Bus_LaneMkrSecClsRi(this)
       {}

PerceptionSI_LaneOutSkeleton::~PerceptionSI_LaneOutSkeleton() noexcept {
  // Next line might block until all running method requests are done.
  StopOfferService();
}

void PerceptionSI_LaneOutSkeleton::DoFieldInitializationChecks() noexcept {
}

void PerceptionSI_LaneOutSkeleton::SendInitialFieldNotifications() noexcept {
  // Send initial field events for all fields with "hasNotifier = true"
}

void PerceptionSI_LaneOutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->OfferService(instance_id, this);
}

void PerceptionSI_LaneOutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->StopOfferService(instance_id);
}

::amsr::generic::Singleton<PerceptionSI_LaneOutSkeleton::ServiceDiscovery*>& PerceptionSI_LaneOutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;
}

void PerceptionSI_LaneOutSkeleton::RegisterServiceDiscovery(PerceptionSI_LaneOutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void PerceptionSI_LaneOutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }

}  // namespace skeleton
}  // namespace perceptionsi_laneout

