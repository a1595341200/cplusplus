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
/**        \file  PerceptionExe/src/perceptionsi_visnobjout/perceptionsi_visnobjout_skeleton.cpp
 *        \brief  Skeleton for service 'PerceptionSI_VisnObjOut'.
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
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace perceptionsi_visnobjout {
namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<PerceptionSI_VisnObjOutSkeleton::ServiceDiscovery*> PerceptionSI_VisnObjOutSkeleton::sd_;

PerceptionSI_VisnObjOutSkeleton::ConstructionResult PerceptionSI_VisnObjOutSkeleton::Preconstruct(
    ara::com::InstanceIdentifier instance_id, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

PerceptionSI_VisnObjOutSkeleton::ConstructionResult PerceptionSI_VisnObjOutSkeleton::Preconstruct(
    ara::core::InstanceSpecifier instance, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

PerceptionSI_VisnObjOutSkeleton::ConstructionResult PerceptionSI_VisnObjOutSkeleton::Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode);
}

PerceptionSI_VisnObjOutSkeleton::PerceptionSI_VisnObjOutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, FrntCam_Bus_VisnObj(this)
 {}

PerceptionSI_VisnObjOutSkeleton::PerceptionSI_VisnObjOutSkeleton(ara::com::InstanceIdentifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FrntCam_Bus_VisnObj(this)
       {}

PerceptionSI_VisnObjOutSkeleton::PerceptionSI_VisnObjOutSkeleton(ara::core::InstanceSpecifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FrntCam_Bus_VisnObj(this)
       {}

PerceptionSI_VisnObjOutSkeleton::PerceptionSI_VisnObjOutSkeleton(ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance_identifiers, mode}
      , FrntCam_Bus_VisnObj(this)
       {}

PerceptionSI_VisnObjOutSkeleton::~PerceptionSI_VisnObjOutSkeleton() noexcept {
  // Next line might block until all running method requests are done.
  StopOfferService();
}

void PerceptionSI_VisnObjOutSkeleton::DoFieldInitializationChecks() noexcept {
}

void PerceptionSI_VisnObjOutSkeleton::SendInitialFieldNotifications() noexcept {
  // Send initial field events for all fields with "hasNotifier = true"
}

void PerceptionSI_VisnObjOutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->OfferService(instance_id, this);
}

void PerceptionSI_VisnObjOutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->StopOfferService(instance_id);
}

::amsr::generic::Singleton<PerceptionSI_VisnObjOutSkeleton::ServiceDiscovery*>& PerceptionSI_VisnObjOutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;
}

void PerceptionSI_VisnObjOutSkeleton::RegisterServiceDiscovery(PerceptionSI_VisnObjOutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void PerceptionSI_VisnObjOutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }

}  // namespace skeleton
}  // namespace perceptionsi_visnobjout

