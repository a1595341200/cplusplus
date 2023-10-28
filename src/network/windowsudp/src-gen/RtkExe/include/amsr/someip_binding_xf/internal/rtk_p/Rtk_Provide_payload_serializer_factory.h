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
/**        \file  RtkExe/include/amsr/someip_binding_xf/internal/rtk_p/Rtk_Provide_payload_serializer_factory.h
 *        \brief  SOME/IP payload serialization factory for service 'Rtk_Provide'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 34a78d6264927917d6838a378b15b039fd1cad4a
 *********************************************************************************************************************/

#ifndef RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_P_RTK_PROVIDE_PAYLOAD_SERIALIZER_FACTORY_H_
#define RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_P_RTK_PROVIDE_PAYLOAD_SERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/rtk_p/Rtk_Provide_skeleton_someip_event_design.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_interface.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_rtk_p {

namespace events {
namespace skeleton {
namespace GgaData_provide {

// ---- Event 'GgaData_provide' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'GgaData_provide'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'GgaData_provide'
   *
   * \param[out] Serializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace GgaData_provide
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace ErrorCode {

// ---- Event 'ErrorCode' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'ErrorCode'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'ErrorCode'
   *
   * \param[out] Serializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace ErrorCode
}  // namespace skeleton
}  // namespace events


}  // namespace gen_rtk_p

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_P_RTK_PROVIDE_PAYLOAD_SERIALIZER_FACTORY_H_

