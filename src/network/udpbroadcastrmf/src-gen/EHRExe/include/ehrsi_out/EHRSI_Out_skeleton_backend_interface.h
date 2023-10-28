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
/**        \file  EHRExe/include/ehrsi_out/EHRSI_Out_skeleton_backend_interface.h
 *        \brief  Skeleton implementation interface of service 'EHRSI_Out'.
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

#ifndef EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ehrsi_out/EHRSI_Out_datatypes.h"

namespace ehrsi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'EHRSI_Out'.
 * \remark generated
 */
class EHRSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  EHRSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~EHRSI_OutSkeletonBackendInterface() noexcept = default;

  EHRSI_OutSkeletonBackendInterface(EHRSI_OutSkeletonBackendInterface const &) = delete;

  EHRSI_OutSkeletonBackendInterface(EHRSI_OutSkeletonBackendInterface &&) = delete;

  EHRSI_OutSkeletonBackendInterface &operator=(EHRSI_OutSkeletonBackendInterface const &) & = delete;

  EHRSI_OutSkeletonBackendInterface &operator=(EHRSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace ehrsi_out

#endif  // EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_BACKEND_INTERFACE_H_

