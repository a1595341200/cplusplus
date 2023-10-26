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
/**        \file  RadarAdaptorExe/include/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_backend_interface.h
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

#ifndef RADARADAPTOREXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define RADARADAPTOREXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "radaradaptorsi_out/RadarAdaptorSI_Out_datatypes.h"

namespace radaradaptorsi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'RadarAdaptorSI_Out'.
 * \remark generated
 */
class RadarAdaptorSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  RadarAdaptorSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~RadarAdaptorSI_OutSkeletonBackendInterface() noexcept = default;

  RadarAdaptorSI_OutSkeletonBackendInterface(RadarAdaptorSI_OutSkeletonBackendInterface const &) = delete;

  RadarAdaptorSI_OutSkeletonBackendInterface(RadarAdaptorSI_OutSkeletonBackendInterface &&) = delete;

  RadarAdaptorSI_OutSkeletonBackendInterface &operator=(RadarAdaptorSI_OutSkeletonBackendInterface const &) & = delete;

  RadarAdaptorSI_OutSkeletonBackendInterface &operator=(RadarAdaptorSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace radaradaptorsi_out

#endif  // RADARADAPTOREXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_BACKEND_INTERFACE_H_

