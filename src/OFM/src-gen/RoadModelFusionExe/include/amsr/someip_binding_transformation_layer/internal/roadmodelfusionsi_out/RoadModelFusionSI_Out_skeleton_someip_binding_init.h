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
/**        \file  RoadModelFusionExe/include/amsr/someip_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_binding_init.h
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'RoadModelFusionSI_Out'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/RoadModelFusionSI_Out'
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 5d8070897bdfaedb620f897381ef230973e3ab64
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_BINDING_INIT_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_BINDING_INIT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "someip_binding/internal/someip_binding.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace roadmodelfusionsi_out {

/*!
 * \brief Type-alias for the SomeIpBinding template specialization used for binding initialization by generated code.
 */
using AraComSomeIpBindingSpecializationSkeleton =
    ::amsr::someip_binding::internal::SomeIpBinding<::amsr::someip_daemon_client::internal::SomeIpDaemonClient<
                            ::amsr::someip_daemon_client::internal::SomeIpDaemonClientDefaultTemplateConfiguration>>;

/*!
 * \brief   Initialize the SOME/IP binding skeleton factories.
 * \details Implemented in separate global function to avoid too complex / big translation units for binding
 *          initialization.
 * \param[in] server_manager ServerManager of the SomeIpBinding.
 * \pre -
 * \context     Init
 * \threadsafe  FALSE
 * \reentrant   FALSE
 * \synchronous TRUE
 */
void AraComSomeIpBindingInitializeServiceInterfaceSkeletonFactoriesRoadModelFusionSI_Out(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager);

/*!
 * \brief   Initialize the SOME/IP binding skeleton event backend objects.
 * \details Implemented in separate global function to avoid too complex / big translation units for binding
 *          initialization.
 * \param[in] server_manager ServerManager of the SomeIpBinding.
 * \pre -
 * \context     Init
 * \threadsafe  FALSE
 * \reentrant   FALSE
 * \synchronous TRUE
 */
void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsRoadModelFusionSI_Out(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager);

/*!
 * \brief   Deinitialize the SOME/IP binding skeleton event backend objects.
 * \details Implemented in separate global function to avoid too complex / big translation units for binding
 *          deinitialization.
 * \pre -
 * \context     Shutdown
 * \threadsafe  FALSE
 * \reentrant   FALSE
 * \synchronous TRUE
 */
void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsRoadModelFusionSI_Out();


}  // namespace roadmodelfusionsi_out

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_BINDING_INIT_H_
