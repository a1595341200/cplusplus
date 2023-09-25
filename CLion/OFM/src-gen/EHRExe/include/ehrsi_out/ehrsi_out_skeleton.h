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
/**        \file  EHRExe/include/ehrsi_out/ehrsi_out_skeleton.h
 *        \brief  Skeleton for service 'EHRSI_Out'.
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

#ifndef EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_H_
#define EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_H_

/*!
 * \trace SPEC-4980239
 */
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/generic/singleton_wrapper.h"
#include "amsr/socal/events/skeleton_event.h"
#include "amsr/socal/fields/skeleton_field.h"
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/socal/skeleton.h"
#include "ara/core/future.h"
#include "ara/core/instance_specifier.h"
#include "ehrsi_out/EHRSI_Out_skeleton_impl_interface.h"
#include "ehrsi_out/EHRSI_Out_types.h"

/*!
 * \trace SPEC-4980240
 */
namespace ehrsi_out {
/*!
 * \trace SPEC-4980241
 */
namespace skeleton {
/*!
 * \brief Forward declaration for inserting as a type into the template class SkeletonEvent
 */
class EHRSI_OutSkeleton;

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
 * \brief Type alias for service event 'EHR_Bus_NOAInfo', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_NOAInfo = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::NOAInfo::NOAInfo,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::NOAInfo::NOAInfo>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_NOAInfo>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LaneConnectivitys', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LaneConnectivitys = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::LaneConnectivitys::LaneConnectivitys,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LaneConnectivitys::LaneConnectivitys>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LaneConnectivitys>;

/*!
 * \brief Type alias for service event 'EHR_Bus_Nodes', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_Nodes = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Nodes::Nodes,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Nodes::Nodes>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_Nodes>;

/*!
 * \brief Type alias for service event 'EHR_Bus_TrafficSigns', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_TrafficSigns = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::TrafficSigns::TrafficSigns,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::TrafficSigns::TrafficSigns>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_TrafficSigns>;

/*!
 * \brief Type alias for service event 'EHR_Bus_GeoFences', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_GeoFences = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::GeoFences::GeoFences,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::GeoFences::GeoFences>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_GeoFences>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LinkCurvatures', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LinkCurvatures = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::LinkCurvatures::LinkCurvatures,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LinkCurvatures::LinkCurvatures>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LinkCurvatures>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LinkSlopes', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LinkSlopes = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::LinkSlopes::LinkSlopes,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LinkSlopes::LinkSlopes>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LinkSlopes>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LaneSpeedLimits', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LaneSpeedLimits = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::LaneSpeedLimits::LaneSpeedLimits,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LaneSpeedLimits::LaneSpeedLimits>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LaneSpeedLimits>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LinkInfos', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LinkInfos = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::LinkInfos::LinkInfos,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LinkInfos::LinkInfos>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LinkInfos>;

/*!
 * \brief Type alias for service event 'EHR_Bus_MergePoints', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_MergePoints = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::AllMergePoints::AllMergePoints,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::AllMergePoints::AllMergePoints>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_MergePoints>;

/*!
 * \brief Type alias for service event 'EHR_Bus_GeofennceJudge', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_GeofennceJudge = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::GeofennceJudge::GeofennceJudge,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::GeofennceJudge::GeofennceJudge>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_GeofennceJudge>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Skeleton interface class for the service 'EHRSI_Out'.
 *
 * \vpublic
 * \trace SPEC-4980341
 */
class EHRSI_OutSkeleton
    : public ::amsr::socal::Skeleton<ehrsi_out::EHRSI_Out,
                                          ehrsi_out::internal::EHRSI_OutSkeletonImplInterface> {
 public:
// ---- Constructors / Destructors -----------------------------------------------------------------------------------
/*!
 * \brief Exception-less pre-construction of EHRSI_Out.
 *
 * \param[in] instance The InstanceIdentifier of the service instance to be created.
 *                     Expected format: "<Binding type/prefix>:<binding specific instance ID>".
 *                     The InstanceIdentifier must fulfill the following preconditions:
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
 * \threadsafe FALSE
 * \reentrant FALSE
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053551
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ara::com::InstanceIdentifier instance_id,
    ara::com::MethodCallProcessingMode const mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less pre-construction of EHRSI_OutSkeleton.
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
 *      created skeleton object, the instantation for the same service instance will be possible.
 * \context App
 * \threadsafe FALSE
 * \reentrant FALSE
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053553
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ara::core::InstanceSpecifier instance,
    ara::com::MethodCallProcessingMode const mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less pre-construction of EHRSI_OutSkeleton.
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
 *      created skeleton object, the instantation for the same service instance will be possible.
 * \context App
 * \threadsafe FALSE
 * \reentrant FALSE
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053555
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers,
    ara::com::MethodCallProcessingMode const mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less constructor of EHRSI_OutSkeleton.
 * \details Because of internal resource management strategy, all created skeletons shall be released before the
 *          Runtime is destroyed; i.e. they cannot not be stored in variables with longer life period than the
 *          application's main(). If not followed, it's not guaranteed that the communication middleware is shut down
 *          properly and may lead to segmentation fault.
 *
 * \param[in] token ConstructionToken created with Preconstruct() API.
 * \context App
 * \threadsafe FALSE
 * \reentrant FALSE
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053551
 * \trace SPEC-8053553
 * \trace SPEC-8053555
 */
explicit EHRSI_OutSkeleton(ConstructionToken&& token) noexcept;

  /*!
   * \brief Delete default constructor.
   */
  EHRSI_OutSkeleton() = delete;
  /*!
   * \brief Delete copy constructor.
   */
  EHRSI_OutSkeleton(EHRSI_OutSkeleton const &) = delete;
  /*!
   * \brief Delete move constructor.
   */
  EHRSI_OutSkeleton(EHRSI_OutSkeleton &&) = delete;
  /*!
   * \brief Delete copy assignment.
   */
  EHRSI_OutSkeleton &operator=(EHRSI_OutSkeleton const &) & = delete;
  /*!
   * \brief Delete move assignment.
   */
  EHRSI_OutSkeleton &operator=(EHRSI_OutSkeleton &&) & = delete;

  /*!
   * \brief Constructor of EHRSI_OutSkeleton.
   *
   * \remark Because of internal resource management strategy, all created skeletons shall be released before the Runtime
   * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
   * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
   * segmentation fault.
   *
   * \param[in] instance The identifier of a specific instance of a service, needed to distinguish different instances of
   *                     exactly the same service in the system.
   *
   * \param[in] mode The mode of the service implpementation for processing service method invocations.
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
   explicit EHRSI_OutSkeleton(
      ara::com::InstanceIdentifier instance,
      ara::com::MethodCallProcessingMode mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;

  /*!
   * \brief Constructor of EHRSI_OutSkeleton.
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
   explicit EHRSI_OutSkeleton(
      ara::core::InstanceSpecifier instance,
      ara::com::MethodCallProcessingMode mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;

  /*!
   * \brief Constructor of EHRSI_OutSkeleton.
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
   explicit EHRSI_OutSkeleton(
      ara::com::InstanceIdentifierContainer instance_identifiers,
      ara::com::MethodCallProcessingMode mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;


  /*!
   * \brief Stops the service if it is currently offered.
   * \details This call will be blocked until all current method requests are finished/canceled.
   * \pre -
   * \context App
   * \vpublic
   * \synchronous TRUE
   * \trace SPEC-4980351
   */
  ~EHRSI_OutSkeleton() noexcept override;

  /*!
   * \brief Type alias for ServiceDiscovery.
   */
  using ServiceDiscovery = ::amsr::socal::internal::service_discovery::ServiceDiscovery<EHRSI_OutSkeleton>;

  /*!
   * \brief       Returns the service discovery singleton.
   * \return      Reference to service discovery singleton.
   * \pre         Service discovery has been registered via RegisterServiceDiscovery.
   * \context     ANY
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \vprivate
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
   * \brief The skeleton event 'EHR_Bus_NOAInfo' which can be used by application developer.
   * \details 
   * Data of type ::NOAInfo::NOAInfo
   * \vpublic
   */
  events::EHR_Bus_NOAInfo EHR_Bus_NOAInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LaneConnectivitys' which can be used by application developer.
   * \details 
   * Data of type ::LaneConnectivitys::LaneConnectivitys
   * \vpublic
   */
  events::EHR_Bus_LaneConnectivitys EHR_Bus_LaneConnectivitys;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_Nodes' which can be used by application developer.
   * \details 
   * Data of type ::Nodes::Nodes
   * \vpublic
   */
  events::EHR_Bus_Nodes EHR_Bus_Nodes;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_TrafficSigns' which can be used by application developer.
   * \details 
   * Data of type ::TrafficSigns::TrafficSigns
   * \vpublic
   */
  events::EHR_Bus_TrafficSigns EHR_Bus_TrafficSigns;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_GeoFences' which can be used by application developer.
   * \details 
   * Data of type ::GeoFences::GeoFences
   * \vpublic
   */
  events::EHR_Bus_GeoFences EHR_Bus_GeoFences;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LinkCurvatures' which can be used by application developer.
   * \details 
   * Data of type ::LinkCurvatures::LinkCurvatures
   * \vpublic
   */
  events::EHR_Bus_LinkCurvatures EHR_Bus_LinkCurvatures;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LinkSlopes' which can be used by application developer.
   * \details 
   * Data of type ::LinkSlopes::LinkSlopes
   * \vpublic
   */
  events::EHR_Bus_LinkSlopes EHR_Bus_LinkSlopes;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LaneSpeedLimits' which can be used by application developer.
   * \details 
   * Data of type ::LaneSpeedLimits::LaneSpeedLimits
   * \vpublic
   */
  events::EHR_Bus_LaneSpeedLimits EHR_Bus_LaneSpeedLimits;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LinkInfos' which can be used by application developer.
   * \details 
   * Data of type ::LinkInfos::LinkInfos
   * \vpublic
   */
  events::EHR_Bus_LinkInfos EHR_Bus_LinkInfos;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_MergePoints' which can be used by application developer.
   * \details 
   * Data of type ::AllMergePoints::AllMergePoints
   * \vpublic
   */
  events::EHR_Bus_MergePoints EHR_Bus_MergePoints;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_GeofennceJudge' which can be used by application developer.
   * \details 
   * Data of type ::GeofennceJudge::GeofennceJudge
   * \vpublic
   */
  events::EHR_Bus_GeofennceJudge EHR_Bus_GeofennceJudge;

  // ---- Fields ---------------------------------------------------------------------------------------------------

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::Skeleton<ehrsi_out::EHRSI_Out, ehrsi_out::internal::EHRSI_OutSkeletonImplInterface>;

  /*!
   * \copydoc amsr::socal::Skeleton<ehrsi_out::EHRSI_Out,ehrsi_out::internal::EHRSI_OutSkeletonImplInterface>::DoFieldInitializationChecks()
   */
  void DoFieldInitializationChecks() noexcept override;

  /*!
   * \copydoc amsr::socal::Skeleton<ehrsi_out::EHRSI_Out,ehrsi_out::internal::EHRSI_OutSkeletonImplInterface>::SendInitialFieldNotifications()
   */
  void SendInitialFieldNotifications() noexcept override;

  /*!
   * \copydoc amsr::socal::Skeleton<ehrsi_out::EHRSI_Out,ehrsi_out::internal::EHRSI_OutSkeletonImplInterface>::OfferServiceInternal()
   */
  void OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept override;

  /*!
   * \copydoc amsr::socal::Skeleton<ehrsi_out::EHRSI_Out,ehrsi_out::internal::EHRSI_OutSkeletonImplInterface>::StopOfferServiceInternal()
   */
  void StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept override;

  /*!
   * \brief The service discovery instance.
   */
  // VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
  static ::amsr::generic::Singleton<ServiceDiscovery*> sd_;
};  // class EHRSI_OutSkeleton

}  // namespace skeleton
}  // namespace ehrsi_out

#endif  // EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_H_

