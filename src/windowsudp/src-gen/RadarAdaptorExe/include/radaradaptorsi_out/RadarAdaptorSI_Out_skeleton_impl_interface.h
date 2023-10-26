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
/**        \file  RadarAdaptorExe/include/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'RadarAdaptorSI_Out'.
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

#ifndef RADARADAPTOREXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define RADARADAPTOREXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "radaradaptorsi_out/radaradaptorsi_out_common.h"

namespace radaradaptorsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'RadarAdaptorSI_Out'
 */
class RadarAdaptorSI_OutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  RadarAdaptorSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~RadarAdaptorSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  RadarAdaptorSI_OutSkeletonImplInterface(RadarAdaptorSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  RadarAdaptorSI_OutSkeletonImplInterface &operator=(RadarAdaptorSI_OutSkeletonImplInterface &&) & noexcept = default;

  RadarAdaptorSI_OutSkeletonImplInterface(RadarAdaptorSI_OutSkeletonImplInterface const &) = delete;

  RadarAdaptorSI_OutSkeletonImplInterface &operator=(RadarAdaptorSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp'.
   * \details Event sample type: ::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT>* GetEventManagerFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace radaradaptorsi_out

#endif  // RADARADAPTOREXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IMPL_INTERFACE_H_

