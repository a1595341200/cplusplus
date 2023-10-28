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
/**        \file  RtkExe/include/rtk_p/Rtk_Provide_skeleton_backend_interface.h
 *        \brief  Skeleton implementation interface of service 'Rtk_Provide'.
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

#ifndef RTKEXE_INCLUDE_RTK_P_RTK_PROVIDE_SKELETON_BACKEND_INTERFACE_H_
#define RTKEXE_INCLUDE_RTK_P_RTK_PROVIDE_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "rtk_p/Rtk_Provide_datatypes.h"

namespace rtk_p {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'Rtk_Provide'.
 * \remark generated
 */
class Rtk_ProvideSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  Rtk_ProvideSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~Rtk_ProvideSkeletonBackendInterface() noexcept = default;

  Rtk_ProvideSkeletonBackendInterface(Rtk_ProvideSkeletonBackendInterface const &) = delete;

  Rtk_ProvideSkeletonBackendInterface(Rtk_ProvideSkeletonBackendInterface &&) = delete;

  Rtk_ProvideSkeletonBackendInterface &operator=(Rtk_ProvideSkeletonBackendInterface const &) & = delete;

  Rtk_ProvideSkeletonBackendInterface &operator=(Rtk_ProvideSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace rtk_p

#endif  // RTKEXE_INCLUDE_RTK_P_RTK_PROVIDE_SKELETON_BACKEND_INTERFACE_H_

