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
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
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
   * \brief Use default destructor
   */
  virtual ~RadarAdaptorSI_OutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
   * \details Event sample type: ::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts>* GetEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
   * \details Event sample type: ::FourDRadarObjStsGrp01_10::FourDRadarObjStsGrp01_10.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FourDRadarObjStsGrp01_10::FourDRadarObjStsGrp01_10>* GetEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
   * \details Event sample type: ::FourDRadarObjStsGrp11_20::FourDRadarObjStsGrp11_20.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FourDRadarObjStsGrp11_20::FourDRadarObjStsGrp11_20>* GetEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
   * \details Event sample type: ::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30>* GetEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
   * \details Event sample type: ::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40>* GetEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
   * \details Event sample type: ::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42>* GetEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace radaradaptorsi_out

#endif  // RADARADAPTOREXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IMPL_INTERFACE_H_

