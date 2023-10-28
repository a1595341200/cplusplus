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
/**        \file  RVDCExe/include/amsr/someip_binding_xf/internal/rtk_r/Rtk_Receive_payload_deserializer_factory.h
 *        \brief  SOME/IP payload deserialization factory for service 'Rtk_Receive'
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

#ifndef RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_R_RTK_RECEIVE_PAYLOAD_DESERIALIZER_FACTORY_H_
#define RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_R_RTK_RECEIVE_PAYLOAD_DESERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/rtk_r/Rtk_Receive_proxy_someip_event_design.h"
#include "amsr/someip_binding_xf/internal/ser_deser/deserializer_interface.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_rtk_r {

namespace events {
namespace proxy {
namespace GgaData_receive {

// ---- Event 'GgaData_receive' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'GgaData_receive'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'GgaData_receive'
   *
   * \param[out] Deserializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace GgaData_receive
}  // namespace proxy
}  // namespace events

namespace events {
namespace proxy {
namespace VIN {

// ---- Event 'VIN' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'VIN'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'VIN'
   *
   * \param[out] Deserializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace VIN
}  // namespace proxy
}  // namespace events

namespace events {
namespace proxy {
namespace AgnssData_receive {

// ---- Event 'AgnssData_receive' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'AgnssData_receive'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'AgnssData_receive'
   *
   * \param[out] Deserializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace AgnssData_receive
}  // namespace proxy
}  // namespace events


}  // namespace gen_rtk_r

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_R_RTK_RECEIVE_PAYLOAD_DESERIALIZER_FACTORY_H_

