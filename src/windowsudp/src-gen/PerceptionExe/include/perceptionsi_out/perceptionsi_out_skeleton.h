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
/**        \file  PerceptionExe/include/perceptionsi_out/perceptionsi_out_skeleton.h
 *        \brief  Skeleton for service 'PerceptionSI_Out'.
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

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_H_

/*!
 * \trace SPEC-4980239
 */
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/generic/singleton_wrapper.h"
#include "amsr/socal/definitions.h"
#include "amsr/socal/events/skeleton_event.h"
#include "amsr/socal/fields/skeleton_field.h"
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "amsr/socal/internal/methods/skeleton_method.h"
#include "amsr/socal/internal/methods/skeleton_method_fire_and_forget.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/socal/internal/specialization_types_thread_driven.h"
#include "amsr/socal/skeleton.h"
#include "ara/core/future.h"
#include "ara/core/instance_specifier.h"
#include "perceptionsi_out/PerceptionSI_Out_skeleton_backend_interface.h"
#include "perceptionsi_out/PerceptionSI_Out_skeleton_impl_interface.h"
#include "perceptionsi_out/PerceptionSI_Out_types.h"
#include "perceptionsi_out/perceptionsi_out_common.h"

/*!
 * \trace SPEC-4980240
 */
namespace perceptionsi_out {
/*!
 * \trace SPEC-4980241
 */
namespace skeleton {
/*!
 * \brief Forward declaration for inserting as a type into the template class SkeletonEvent
 */
class PerceptionSI_OutSkeleton;

/*!
 * \trace SPEC-4980244
 */
namespace methods {

}  // namespace methods

/*!
 * \trace SPEC-4980243
 */
namespace events {

/*!
 * \brief Type alias for service event 'Perception_Bus_LaneInfo', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using Perception_Bus_LaneInfo = ::amsr::socal::events::SkeletonEvent<
    perceptionsi_out::skeleton::PerceptionSI_OutSkeleton,
    ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT,
    perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT>,
    &perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface::GetEventManagerPerception_Bus_LaneInfo>;

/*!
 * \brief Type alias for service event 'Perception_Bus_FrntCamInfo', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using Perception_Bus_FrntCamInfo = ::amsr::socal::events::SkeletonEvent<
    perceptionsi_out::skeleton::PerceptionSI_OutSkeleton,
    ::FrntCamInfoIDT::FrntCamInfoIDT,
    perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FrntCamInfoIDT::FrntCamInfoIDT>,
    &perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface::GetEventManagerPerception_Bus_FrntCamInfo>;

/*!
 * \brief Type alias for service event 'FrntCam_Bus_TrafficInfo', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using FrntCam_Bus_TrafficInfo = ::amsr::socal::events::SkeletonEvent<
    perceptionsi_out::skeleton::PerceptionSI_OutSkeleton,
    ::TrafficInfoIDT::TrafficInfoIDT,
    perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::TrafficInfoIDT::TrafficInfoIDT>,
    &perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface::GetEventManagerFrntCam_Bus_TrafficInfo>;

/*!
 * \brief Type alias for service event 'FrntCam_Bus_TrfcLi', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using FrntCam_Bus_TrfcLi = ::amsr::socal::events::SkeletonEvent<
    perceptionsi_out::skeleton::PerceptionSI_OutSkeleton,
    ::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8,
    perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8>,
    &perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface::GetEventManagerFrntCam_Bus_TrfcLi>;

/*!
 * \brief Type alias for service event 'FrntCam_Bus_LineSignGroup', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using FrntCam_Bus_LineSignGroup = ::amsr::socal::events::SkeletonEvent<
    perceptionsi_out::skeleton::PerceptionSI_OutSkeleton,
    ::LineSignGroupIDT::LineSignGroupIDT,
    perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LineSignGroupIDT::LineSignGroupIDT>,
    &perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface::GetEventManagerFrntCam_Bus_LineSignGroup>;

/*!
 * \brief Type alias for service event 'FrntCam_Bus_ExtInfo', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using FrntCam_Bus_ExtInfo = ::amsr::socal::events::SkeletonEvent<
    perceptionsi_out::skeleton::PerceptionSI_OutSkeleton,
    ::ExtInfoIDT::ExtInfoIDT,
    perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::ExtInfoIDT::ExtInfoIDT>,
    &perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface::GetEventManagerFrntCam_Bus_ExtInfo>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Skeleton interface class for the service 'PerceptionSI_Out'.
 *
 * \vpublic
 * \trace SPEC-4980341
 * \unit Socal::Skeleton::Skeleton
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class PerceptionSI_OutSkeleton
    : public ::amsr::socal::Skeleton<perceptionsi_out::PerceptionSI_Out,
                                          perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface,
                                          ::amsr::socal::kRuntimeProcessingMode>,
      public       perceptionsi_out::internal::PerceptionSI_OutSkeletonBackendInterface {
 public:
// ---- Constructors / Destructors -----------------------------------------------------------------------------------
/*!
 * \brief Exception-less pre-construction of PerceptionSI_Out.
 *
 * \param[in] instance_id The InstanceIdentifier of the service instance to be created.
 *                        Expected format: "<Binding type/prefix>:<binding specific instance ID>".
 *                        The InstanceIdentifier must fulfill the following preconditions:
 *                        - Must be configured in the ARXML model.
 *                        - Must belong to the service interface.
 * \param[in] mode The mode of the service implementation for processing service method invocations.
 *                 Default: Event-driven processing.
 *                 Preconditions to be fulfilled:
 *                 - If the mode 'kEventSingleThread' is used, a possible user-defined ThreadPool must have exactly one
 *                   worker thread configured.
 * \return Result<ConstructionToken> Result containing construction token from which a skeleton object can be
 *         constructed.
 *
 * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
 *      created skeleton object, the instantiation for the same service instance will be possible.
 * \context App
 * \threadsafe FALSE against all overloads of Preconstruct.
 * \reentrant FALSE against all overloads of Preconstruct.
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053551
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ::ara::com::InstanceIdentifier instance_id,
    ::ara::com::MethodCallProcessingMode const mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less pre-construction of PerceptionSI_OutSkeleton.
 *
 * \param[in] instance InstanceSpecifier of this service.
 *                     The provided InstanceSpecifier must fulfill the following preconditions:
 *                     - Must be configured in the ARXML model.
 *                     - Must belong to the service interface.
 * \param[in] mode The mode of the service implementation for processing service method invocations.
 *                 Default: Event-driven processing.
 *                 Preconditions to be fulfilled:
 *                 - If the mode 'kEventSingleThread' is used, a possible user-defined ThreadPool must have exactly one
 *                   worker thread configured.
 * \return Result<ConstructionToken> Result containing construction token from which a skeleton object can be
 *         constructed.
 *
 * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
 *      created skeleton object, the instantiation for the same service instance will be possible.
 * \context App
 * \threadsafe FALSE against all overloads of Preconstruct.
 * \reentrant FALSE against all overloads of Preconstruct.
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053553
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ::ara::core::InstanceSpecifier instance,
    ::ara::com::MethodCallProcessingMode const mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less pre-construction of PerceptionSI_OutSkeleton.
 *
 * \param[in] instance_identifiers The container of instances of a service, each instance element needed to distinguish
 *                                 different instances of exactly the same service in the system.
 *                                 The provided InstanceIdentifierContainer must fulfill the following preconditions:
 *                                 - Every InstanceIdentifier of the container must be configured in the ARXML model.
 *                                 - Every InstanceIdentifier of the container must belong to the service interface to be
 *                                   instantiated.
 *                                 - The container must not be empty.
 *                                 - All elements of the container must be unique (no duplicates).
 * \param[in] mode The mode of the service implementation for processing service method invocations.
 *                 Default: Event-driven processing.
 *                 Preconditions to be fulfilled:
 *                 - If the mode 'kEventSingleThread' is used, a possible user-defined ThreadPool must have exactly one
 *                   worker thread configured.
 * \return Result<ConstructionToken> Result containing construction token from which a skeleton object can be
 *         constructed.
 *
 * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
 *      created skeleton object, the instantiation for the same service instance will be possible.
 * \context App
 * \threadsafe FALSE against all overloads of Preconstruct.
 * \reentrant FALSE against all overloads of Preconstruct.
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053555
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ::ara::com::InstanceIdentifierContainer instance_identifiers,
    ::ara::com::MethodCallProcessingMode const mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less constructor of PerceptionSI_OutSkeleton.
 * \details Because of internal resource management strategy, all created skeletons shall be released before the
 *          Runtime is destroyed; i.e. they cannot not be stored in variables with longer life period than the
 *          application's main(). If not followed, it's not guaranteed that the communication middleware is shut down
 *          properly and may lead to segmentation fault.
 *
 * \param[in] token ConstructionToken created with Preconstruct() API.
 * \pre     -
 * \context App
 * \threadsafe FALSE
 * \reentrant FALSE
 * \vpublic
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 * \trace SPEC-8053551
 * \trace SPEC-8053553
 * \trace SPEC-8053555
 */
explicit PerceptionSI_OutSkeleton(ConstructionToken&& token) noexcept;

  /*!
   * \brief Delete default constructor.
   */
  PerceptionSI_OutSkeleton() = delete;
  /*!
   * \brief Delete copy constructor.
   */
  PerceptionSI_OutSkeleton(PerceptionSI_OutSkeleton const &) = delete;
  /*!
   * \brief Delete move constructor.
   */
  PerceptionSI_OutSkeleton(PerceptionSI_OutSkeleton &&) = delete;
  /*!
   * \brief Delete copy assignment.
   */
  PerceptionSI_OutSkeleton &operator=(PerceptionSI_OutSkeleton const &) & = delete;
  /*!
   * \brief Delete move assignment.
   */
  PerceptionSI_OutSkeleton &operator=(PerceptionSI_OutSkeleton &&) & = delete;

  /*!
   * \brief Constructor of PerceptionSI_OutSkeleton.
   *
   * \remark Because of internal resource management strategy, all created skeletons shall be released before the Runtime
   * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
   * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
   * segmentation fault.
   *
   * \param[in] instance The identifier of a specific instance of a service, needed to distinguish different instances of
   *                     exactly the same service in the system.
   *
   * \param[in] mode The mode of the service implementation for processing service method invocations.
   *                 Default: Event-driven processing
   *
   * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
   *      created skeleton object, the instantiation for the same service instance will be possible.
   *
   * \context App
   * \threadsafe FALSE
   * \reentrant FALSE
   * \vprivate Vector component internal API.
   * \synchronous TRUE
   * \trace SPEC-4980351
   * \trace SPEC-4980356
   */
   explicit PerceptionSI_OutSkeleton(
      ::ara::com::InstanceIdentifier instance,
      ::ara::com::MethodCallProcessingMode mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;

  /*!
   * \brief Constructor of PerceptionSI_OutSkeleton.
   *
   * \remark Because of internal resource management strategy, all created skeletons shall be released before the Runtime
   * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
   * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
   * segmentation fault.
   *
   * \param[in] instance The InstanceSpecifier of a specific service instance, needed to distinguish different instances
   *                     of exactly the same service in the system.
   *
   * \param[in] mode The mode of the service implementation for processing service method invocations.
   *                 Default: Event-driven processing
   *
   * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
   *      created skeleton object, the instantiation for the same service instance will be possible.
   *
   * \context App
   * \threadsafe FALSE
   * \reentrant FALSE
   * \vprivate Vector component internal API.
   * \synchronous TRUE
   * \trace SPEC-8053552
   * \trace SPEC-4980356
   */
   explicit PerceptionSI_OutSkeleton(
      ::ara::core::InstanceSpecifier instance,
      ::ara::com::MethodCallProcessingMode mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;

  /*!
   * \brief Constructor of PerceptionSI_OutSkeleton.
   *
   * \remark Because of internal resource management strategy, all created skeletons shall be released before the Runtime
   * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
   * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
   * segmentation fault.
   *
   * \param[in] instance_identifiers The container of instances of a service, each instance element needed to
   *                                 distinguish different instances of exactly the same service in the system.
   *
   * \param[in] mode The mode of the service implementation for processing service method invocations.
   *                 Default: Event-driven processing
   *
   * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
   *      created skeleton object, the instantiation for the same service instance will be possible.
   *
   * \context App
   * \threadsafe FALSE
   * \reentrant FALSE
   * \vprivate Vector component internal API.
   * \synchronous TRUE
   * \trace SPEC-8053554
   * \trace SPEC-4980356
   */
   explicit PerceptionSI_OutSkeleton(
      ::ara::com::InstanceIdentifierContainer instance_identifiers,
      ::ara::com::MethodCallProcessingMode mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;


  /*!
   * \brief       Destroys the skeleton.
   * \pre         The service must have been stopped via StopOfferService() prior to the destruction.
   * \context     App
   * \threadsafe  FALSE for same class instance, FALSE for different instances.
   *              FALSE against all overloads of Preconstruct API for same/different class instances.
   * \reentrant   FALSE for same class instance, FALSE for different instances.
   *              FALSE against all overloads of Preconstruct API for same/different class instances.
   * \vpublic
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  ~PerceptionSI_OutSkeleton() noexcept override;

  /*!
   * \brief Type alias for ServiceDiscovery.
   */
  using ServiceDiscovery = ::amsr::socal::internal::service_discovery::ServiceDiscovery<PerceptionSI_OutSkeleton>;

  /*!
   * \brief       Returns the service discovery singleton.
   * \return      Reference to service discovery singleton.
   * \pre         Service discovery has been registered via RegisterServiceDiscovery.
   * \context     ANY
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \vprivate    Vector product private API.
   * \synchronous TRUE
   */
  static ::amsr::generic::Singleton<ServiceDiscovery*>& GetServiceDiscovery() noexcept;

  /*!
   * \brief       Registers the service discovery.
   * \param[in]   service_discovery Pointer to service discovery.
   * \pre         -
   * \context     Init
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \vprivate
   * \synchronous TRUE
   */
  static void RegisterServiceDiscovery(ServiceDiscovery* service_discovery) noexcept;

  /*!
   * \brief       Deregisters the service discovery.
   * \pre         RegisterServiceDiscovery has been called.
   * \context     Shutdown
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \vprivate
   * \synchronous TRUE
   */
  static void DeRegisterServiceDiscovery() noexcept;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'Perception_Bus_LaneInfo' which can be used by application developer.
   * \details 
   * Data of type ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT
   * \vpublic
   */
  events::Perception_Bus_LaneInfo Perception_Bus_LaneInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'Perception_Bus_FrntCamInfo' which can be used by application developer.
   * \details 
   * Data of type ::FrntCamInfoIDT::FrntCamInfoIDT
   * \vpublic
   */
  events::Perception_Bus_FrntCamInfo Perception_Bus_FrntCamInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'FrntCam_Bus_TrafficInfo' which can be used by application developer.
   * \details 
   * Data of type ::TrafficInfoIDT::TrafficInfoIDT
   * \vpublic
   */
  events::FrntCam_Bus_TrafficInfo FrntCam_Bus_TrafficInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'FrntCam_Bus_TrfcLi' which can be used by application developer.
   * \details 
   * Data of type ::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8
   * \vpublic
   */
  events::FrntCam_Bus_TrfcLi FrntCam_Bus_TrfcLi;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'FrntCam_Bus_LineSignGroup' which can be used by application developer.
   * \details 
   * Data of type ::LineSignGroupIDT::LineSignGroupIDT
   * \vpublic
   */
  events::FrntCam_Bus_LineSignGroup FrntCam_Bus_LineSignGroup;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'FrntCam_Bus_ExtInfo' which can be used by application developer.
   * \details 
   * Data of type ::ExtInfoIDT::ExtInfoIDT
   * \vpublic
   */
  events::FrntCam_Bus_ExtInfo FrntCam_Bus_ExtInfo;

  // ---- Fields ---------------------------------------------------------------------------------------------------


 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::Skeleton<perceptionsi_out::PerceptionSI_Out, perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface, ::amsr::socal::kRuntimeProcessingMode>;

  /*!
   * \copydoc Base::DoFieldInitializationChecks()
   */
  void DoFieldInitializationChecks() noexcept override;

  /*!
   * \brief Sends all initial events for the fields that have notifiers.
   * \param[in] concrete_impl_interface A communication object created for this skeleton. This must not be a nullptr.
   * \pre -
   * \context App
   */
  void SendInitialFieldNotifications(SkeletonImplInterfacePtr const concrete_impl_interface) const noexcept;

  /*!
   * \copydoc Base::OfferServiceInternal()
   */
  void OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept override;

  /*!
   * \copydoc Base::StopOfferServiceInternal()
   */
  void StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept override;

  /*!
   * \copydoc Base::PrepareEventsAndFieldNotifiers()
   */
  void PrepareEventsAndFieldNotifiers(SkeletonImplInterfacePtr const concrete_impl_interface) noexcept override;

  /*!
   * \brief The service discovery instance.
   */
  // VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
  static ::amsr::generic::Singleton<ServiceDiscovery*> sd_;

};  // class PerceptionSI_OutSkeleton

}  // namespace skeleton
}  // namespace perceptionsi_out

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_H_

