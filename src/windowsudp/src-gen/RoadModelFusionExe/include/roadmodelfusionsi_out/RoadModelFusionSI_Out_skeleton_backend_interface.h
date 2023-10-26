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
/**        \file  RoadModelFusionExe/include/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_backend_interface.h
 *        \brief  Skeleton implementation interface of service 'RoadModelFusionSI_Out'.
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "roadmodelfusionsi_out/RoadModelFusionSI_Out_datatypes.h"

namespace roadmodelfusionsi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'RoadModelFusionSI_Out'.
 * \remark generated
 */
class RoadModelFusionSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  RoadModelFusionSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~RoadModelFusionSI_OutSkeletonBackendInterface() noexcept = default;

  RoadModelFusionSI_OutSkeletonBackendInterface(RoadModelFusionSI_OutSkeletonBackendInterface const &) = delete;

  RoadModelFusionSI_OutSkeletonBackendInterface(RoadModelFusionSI_OutSkeletonBackendInterface &&) = delete;

  RoadModelFusionSI_OutSkeletonBackendInterface &operator=(RoadModelFusionSI_OutSkeletonBackendInterface const &) & = delete;

  RoadModelFusionSI_OutSkeletonBackendInterface &operator=(RoadModelFusionSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace roadmodelfusionsi_out

#endif  // ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_

