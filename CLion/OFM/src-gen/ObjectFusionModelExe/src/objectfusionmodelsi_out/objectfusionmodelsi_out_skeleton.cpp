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
/**        \file  ObjectFusionModelExe/src/objectfusionmodelsi_out/objectfusionmodelsi_out_skeleton.cpp
 *        \brief  Skeleton for service 'ObjectFusionModelSI_Out'.
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
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace objectfusionmodelsi_out {
namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<ObjectFusionModelSI_OutSkeleton::ServiceDiscovery*> ObjectFusionModelSI_OutSkeleton::sd_;

ObjectFusionModelSI_OutSkeleton::ConstructionResult ObjectFusionModelSI_OutSkeleton::Preconstruct(
    ara::com::InstanceIdentifier instance_id, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

ObjectFusionModelSI_OutSkeleton::ConstructionResult ObjectFusionModelSI_OutSkeleton::Preconstruct(
    ara::core::InstanceSpecifier instance, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

ObjectFusionModelSI_OutSkeleton::ConstructionResult ObjectFusionModelSI_OutSkeleton::Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode);
}

ObjectFusionModelSI_OutSkeleton::ObjectFusionModelSI_OutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, OFM_Bus_FusedTargets_11(this)
, OFM_St_SOCFusedSts(this)
, OFM_Bus_FourDRadarECUSts(this)
, OFM_Bus_FrontFourDRadarSts(this)
, OFM_Bus_FusedTargets_22(this)
, OFM_Bus_FusedTargets_32(this)
, OFM_St_FrntRdrObjE2Efail(this)
, OFM_St_FrntRdrObjTO(this)
 {}

ObjectFusionModelSI_OutSkeleton::ObjectFusionModelSI_OutSkeleton(ara::com::InstanceIdentifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , OFM_Bus_FusedTargets_11(this)
      , OFM_St_SOCFusedSts(this)
      , OFM_Bus_FourDRadarECUSts(this)
      , OFM_Bus_FrontFourDRadarSts(this)
      , OFM_Bus_FusedTargets_22(this)
      , OFM_Bus_FusedTargets_32(this)
      , OFM_St_FrntRdrObjE2Efail(this)
      , OFM_St_FrntRdrObjTO(this)
       {}

ObjectFusionModelSI_OutSkeleton::ObjectFusionModelSI_OutSkeleton(ara::core::InstanceSpecifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , OFM_Bus_FusedTargets_11(this)
      , OFM_St_SOCFusedSts(this)
      , OFM_Bus_FourDRadarECUSts(this)
      , OFM_Bus_FrontFourDRadarSts(this)
      , OFM_Bus_FusedTargets_22(this)
      , OFM_Bus_FusedTargets_32(this)
      , OFM_St_FrntRdrObjE2Efail(this)
      , OFM_St_FrntRdrObjTO(this)
       {}

ObjectFusionModelSI_OutSkeleton::ObjectFusionModelSI_OutSkeleton(ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance_identifiers, mode}
      , OFM_Bus_FusedTargets_11(this)
      , OFM_St_SOCFusedSts(this)
      , OFM_Bus_FourDRadarECUSts(this)
      , OFM_Bus_FrontFourDRadarSts(this)
      , OFM_Bus_FusedTargets_22(this)
      , OFM_Bus_FusedTargets_32(this)
      , OFM_St_FrntRdrObjE2Efail(this)
      , OFM_St_FrntRdrObjTO(this)
       {}

ObjectFusionModelSI_OutSkeleton::~ObjectFusionModelSI_OutSkeleton() noexcept {
  // Next line might block until all running method requests are done.
  StopOfferService();
}

void ObjectFusionModelSI_OutSkeleton::DoFieldInitializationChecks() noexcept {
}

void ObjectFusionModelSI_OutSkeleton::SendInitialFieldNotifications() noexcept {
  // Send initial field events for all fields with "hasNotifier = true"
}

void ObjectFusionModelSI_OutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->OfferService(instance_id, this);
}

void ObjectFusionModelSI_OutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->StopOfferService(instance_id);
}

::amsr::generic::Singleton<ObjectFusionModelSI_OutSkeleton::ServiceDiscovery*>& ObjectFusionModelSI_OutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;
}

void ObjectFusionModelSI_OutSkeleton::RegisterServiceDiscovery(ObjectFusionModelSI_OutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void ObjectFusionModelSI_OutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }

}  // namespace skeleton
}  // namespace objectfusionmodelsi_out

