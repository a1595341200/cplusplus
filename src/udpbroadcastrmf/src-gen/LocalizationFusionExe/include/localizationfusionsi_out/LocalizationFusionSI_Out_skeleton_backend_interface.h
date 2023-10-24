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
/**        \file  LocalizationFusionExe/include/localizationfusionsi_out/LocalizationFusionSI_Out_skeleton_backend_interface.h
 *        \brief  Skeleton implementation interface of service 'LocalizationFusionSI_Out'.
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "localizationfusionsi_out/LocalizationFusionSI_Out_datatypes.h"

namespace localizationfusionsi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'LocalizationFusionSI_Out'.
 * \remark generated
 */
class LocalizationFusionSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  LocalizationFusionSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~LocalizationFusionSI_OutSkeletonBackendInterface() noexcept = default;

  LocalizationFusionSI_OutSkeletonBackendInterface(LocalizationFusionSI_OutSkeletonBackendInterface const &) = delete;

  LocalizationFusionSI_OutSkeletonBackendInterface(LocalizationFusionSI_OutSkeletonBackendInterface &&) = delete;

  LocalizationFusionSI_OutSkeletonBackendInterface &operator=(LocalizationFusionSI_OutSkeletonBackendInterface const &) & = delete;

  LocalizationFusionSI_OutSkeletonBackendInterface &operator=(LocalizationFusionSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace localizationfusionsi_out

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_

