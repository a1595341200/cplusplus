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
/**        \file  TargetPredictExe/src/targetpredictsi_out/targetpredictsi_out_skeleton.cpp
 *        \brief  Skeleton for service 'TargetPredictSI_Out'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "targetpredictsi_out/targetpredictsi_out_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace targetpredictsi_out {



namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<TargetPredictSI_OutSkeleton::ServiceDiscovery*> TargetPredictSI_OutSkeleton::sd_;

TargetPredictSI_OutSkeleton::ConstructionResult TargetPredictSI_OutSkeleton::Preconstruct(
    ::ara::com::InstanceIdentifier instance_id, ::ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

TargetPredictSI_OutSkeleton::ConstructionResult TargetPredictSI_OutSkeleton::Preconstruct(
    ::ara::core::InstanceSpecifier instance, ::ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

TargetPredictSI_OutSkeleton::ConstructionResult TargetPredictSI_OutSkeleton::Preconstruct(
    ::ara::com::InstanceIdentifierContainer instance_identifiers, ::ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode); // VCA_SOCAL_CALLING_DESTRUCTOR_OF_STACK_OBJECTS
}

TargetPredictSI_OutSkeleton::TargetPredictSI_OutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, TP_Bus_PredTargets1Vcc(this)
, TP_Bus_PredTargets2Vcc(this)
{}

TargetPredictSI_OutSkeleton::TargetPredictSI_OutSkeleton(::ara::com::InstanceIdentifier instance,
                                               ::ara::com::MethodCallProcessingMode mode) noexcept
     : TargetPredictSI_OutSkeleton{Preconstruct(instance, mode).Value()} {}  // VCA_SOCAL_COPY_CTOR_WITH_CTOR_ARGUMENT

TargetPredictSI_OutSkeleton::TargetPredictSI_OutSkeleton(::ara::core::InstanceSpecifier instance,
                                               ::ara::com::MethodCallProcessingMode mode) noexcept
     : TargetPredictSI_OutSkeleton{Preconstruct(instance, mode).Value()} {}

TargetPredictSI_OutSkeleton::TargetPredictSI_OutSkeleton(::ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ::ara::com::MethodCallProcessingMode mode) noexcept
     // VCA_SOCAL_CALLING_STL_APIS, VCA_SOCAL_CALLING_DESTRUCTOR_OF_STACK_OBJECTS, VCA_SOCAL_COPY_CTOR_WITH_CTOR_ARGUMENT
     : TargetPredictSI_OutSkeleton{Preconstruct(instance_identifiers, mode).Value()} {}

// VCA_SOCAL_FREEING_STATICALLY_ALLOCATED_MEMORY
TargetPredictSI_OutSkeleton::~TargetPredictSI_OutSkeleton() noexcept {
  if (IsServiceOffered()) {
    logger_.LogFatal([](::ara::log::LogStream& s) { s << "Skeleton must stop offering the service before destruction."; },
                    static_cast<char const*>(__func__), __LINE__);
    ::ara::core::Abort("Skeleton must stop offering the service before destruction.");
  }
}

// VECTOR NC AutosarC++17_10-M0.1.8: MD_SOCAL_M0.1.8_VoidFunctionHasNoExternalSideEffect
// VECTOR NC Metric-HIS.PATH: MD_SOCAL_Metric-HIS.PATH_FieldInitChecks
void TargetPredictSI_OutSkeleton::DoFieldInitializationChecks() noexcept {
}

// VECTOR NC AutosarC++17_10-M0.1.8: MD_SOCAL_M0.1.8_VoidFunctionHasNoExternalSideEffect
// VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_M9.3.3_Method_can_be_declared_static
void TargetPredictSI_OutSkeleton::SendInitialFieldNotifications(SkeletonImplInterfacePtr const concrete_impl_interface) const noexcept {
  // No field notifiers are configured
  static_cast<void>(concrete_impl_interface);
}

void TargetPredictSI_OutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  // VCA_SOCAL_CALLING_DESTRUCTOR_OF_STACK_OBJECTS
  (*(sd_.GetAccess()))->OfferService(instance_id, this);  // VCA_SOCAL_SERVICE_DISCOVERY_POINTER
}

void TargetPredictSI_OutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  // VCA_SOCAL_CALLING_DESTRUCTOR_OF_STACK_OBJECTS
  (*(sd_.GetAccess()))->StopOfferService(instance_id);  // VCA_SOCAL_SERVICE_DISCOVERY_POINTER
}

::amsr::generic::Singleton<TargetPredictSI_OutSkeleton::ServiceDiscovery*>& TargetPredictSI_OutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;  // VCA_SOCAL_SERVICE_DISCOVERY_GETTER
}

void TargetPredictSI_OutSkeleton::RegisterServiceDiscovery(TargetPredictSI_OutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void TargetPredictSI_OutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }


// VECTOR NC AutosarC++17_10-M0.1.8: MD_SOCAL_M0.1.8_VoidFunctionHasNoExternalSideEffectButTriggersAnotherOperation
void TargetPredictSI_OutSkeleton::PrepareEventsAndFieldNotifiers(SkeletonImplInterfacePtr const concrete_impl_interface) noexcept {
   TP_Bus_PredTargets1Vcc.InitializePreallocatedValue(concrete_impl_interface);
   TP_Bus_PredTargets2Vcc.InitializePreallocatedValue(concrete_impl_interface);
  SendInitialFieldNotifications(concrete_impl_interface);  // VCA_SOCAL_MEMBER_FUNCTION_THIS_PTR
}



}  // namespace skeleton
}  // namespace targetpredictsi_out

