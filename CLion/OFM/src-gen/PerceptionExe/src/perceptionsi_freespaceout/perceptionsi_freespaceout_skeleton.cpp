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
/**        \file  PerceptionExe/src/perceptionsi_freespaceout/perceptionsi_freespaceout_skeleton.cpp
 *        \brief  Skeleton for service 'PerceptionSI_FreeSpaceOut'.
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
#include "perceptionsi_freespaceout/perceptionsi_freespaceout_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace perceptionsi_freespaceout {
namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<PerceptionSI_FreeSpaceOutSkeleton::ServiceDiscovery*> PerceptionSI_FreeSpaceOutSkeleton::sd_;

PerceptionSI_FreeSpaceOutSkeleton::ConstructionResult PerceptionSI_FreeSpaceOutSkeleton::Preconstruct(
    ara::com::InstanceIdentifier instance_id, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

PerceptionSI_FreeSpaceOutSkeleton::ConstructionResult PerceptionSI_FreeSpaceOutSkeleton::Preconstruct(
    ara::core::InstanceSpecifier instance, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

PerceptionSI_FreeSpaceOutSkeleton::ConstructionResult PerceptionSI_FreeSpaceOutSkeleton::Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode);
}

PerceptionSI_FreeSpaceOutSkeleton::PerceptionSI_FreeSpaceOutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, FusedCam_Bus_FreeSpace(this)
 {}

PerceptionSI_FreeSpaceOutSkeleton::PerceptionSI_FreeSpaceOutSkeleton(ara::com::InstanceIdentifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FusedCam_Bus_FreeSpace(this)
       {}

PerceptionSI_FreeSpaceOutSkeleton::PerceptionSI_FreeSpaceOutSkeleton(ara::core::InstanceSpecifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FusedCam_Bus_FreeSpace(this)
       {}

PerceptionSI_FreeSpaceOutSkeleton::PerceptionSI_FreeSpaceOutSkeleton(ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance_identifiers, mode}
      , FusedCam_Bus_FreeSpace(this)
       {}

PerceptionSI_FreeSpaceOutSkeleton::~PerceptionSI_FreeSpaceOutSkeleton() noexcept {
  // Next line might block until all running method requests are done.
  StopOfferService();
}

void PerceptionSI_FreeSpaceOutSkeleton::DoFieldInitializationChecks() noexcept {
}

void PerceptionSI_FreeSpaceOutSkeleton::SendInitialFieldNotifications() noexcept {
  // Send initial field events for all fields with "hasNotifier = true"
}

void PerceptionSI_FreeSpaceOutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->OfferService(instance_id, this);
}

void PerceptionSI_FreeSpaceOutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->StopOfferService(instance_id);
}

::amsr::generic::Singleton<PerceptionSI_FreeSpaceOutSkeleton::ServiceDiscovery*>& PerceptionSI_FreeSpaceOutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;
}

void PerceptionSI_FreeSpaceOutSkeleton::RegisterServiceDiscovery(PerceptionSI_FreeSpaceOutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void PerceptionSI_FreeSpaceOutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }

}  // namespace skeleton
}  // namespace perceptionsi_freespaceout

