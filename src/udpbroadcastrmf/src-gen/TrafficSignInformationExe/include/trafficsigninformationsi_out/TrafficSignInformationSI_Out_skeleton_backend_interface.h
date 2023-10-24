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
/**        \file  TrafficSignInformationExe/include/trafficsigninformationsi_out/TrafficSignInformationSI_Out_skeleton_backend_interface.h
 *        \brief  Skeleton implementation interface of service 'TrafficSignInformationSI_Out'.
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_OUT_TRAFFICSIGNINFORMATIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_OUT_TRAFFICSIGNINFORMATIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "trafficsigninformationsi_out/TrafficSignInformationSI_Out_datatypes.h"

namespace trafficsigninformationsi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'TrafficSignInformationSI_Out'.
 * \remark generated
 */
class TrafficSignInformationSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  TrafficSignInformationSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~TrafficSignInformationSI_OutSkeletonBackendInterface() noexcept = default;

  TrafficSignInformationSI_OutSkeletonBackendInterface(TrafficSignInformationSI_OutSkeletonBackendInterface const &) = delete;

  TrafficSignInformationSI_OutSkeletonBackendInterface(TrafficSignInformationSI_OutSkeletonBackendInterface &&) = delete;

  TrafficSignInformationSI_OutSkeletonBackendInterface &operator=(TrafficSignInformationSI_OutSkeletonBackendInterface const &) & = delete;

  TrafficSignInformationSI_OutSkeletonBackendInterface &operator=(TrafficSignInformationSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace trafficsigninformationsi_out

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_OUT_TRAFFICSIGNINFORMATIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_

