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
/**        \file  PerceptionExe/src/perceptionsi_camstsout/perceptionsi_camstsout_skeleton.cpp
 *        \brief  Skeleton for service 'PerceptionSI_CamStsOut'.
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
#include "perceptionsi_camstsout/perceptionsi_camstsout_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace perceptionsi_camstsout {
namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<PerceptionSI_CamStsOutSkeleton::ServiceDiscovery*> PerceptionSI_CamStsOutSkeleton::sd_;

PerceptionSI_CamStsOutSkeleton::ConstructionResult PerceptionSI_CamStsOutSkeleton::Preconstruct(
    ara::com::InstanceIdentifier instance_id, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

PerceptionSI_CamStsOutSkeleton::ConstructionResult PerceptionSI_CamStsOutSkeleton::Preconstruct(
    ara::core::InstanceSpecifier instance, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

PerceptionSI_CamStsOutSkeleton::ConstructionResult PerceptionSI_CamStsOutSkeleton::Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode);
}

PerceptionSI_CamStsOutSkeleton::PerceptionSI_CamStsOutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, FrntCam_Bus_CamSts(this)
 {}

PerceptionSI_CamStsOutSkeleton::PerceptionSI_CamStsOutSkeleton(ara::com::InstanceIdentifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FrntCam_Bus_CamSts(this)
       {}

PerceptionSI_CamStsOutSkeleton::PerceptionSI_CamStsOutSkeleton(ara::core::InstanceSpecifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FrntCam_Bus_CamSts(this)
       {}

PerceptionSI_CamStsOutSkeleton::PerceptionSI_CamStsOutSkeleton(ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance_identifiers, mode}
      , FrntCam_Bus_CamSts(this)
       {}

PerceptionSI_CamStsOutSkeleton::~PerceptionSI_CamStsOutSkeleton() noexcept {
  // Next line might block until all running method requests are done.
  StopOfferService();
}

void PerceptionSI_CamStsOutSkeleton::DoFieldInitializationChecks() noexcept {
}

void PerceptionSI_CamStsOutSkeleton::SendInitialFieldNotifications() noexcept {
  // Send initial field events for all fields with "hasNotifier = true"
}

void PerceptionSI_CamStsOutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->OfferService(instance_id, this);
}

void PerceptionSI_CamStsOutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->StopOfferService(instance_id);
}

::amsr::generic::Singleton<PerceptionSI_CamStsOutSkeleton::ServiceDiscovery*>& PerceptionSI_CamStsOutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;
}

void PerceptionSI_CamStsOutSkeleton::RegisterServiceDiscovery(PerceptionSI_CamStsOutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void PerceptionSI_CamStsOutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }

}  // namespace skeleton
}  // namespace perceptionsi_camstsout

