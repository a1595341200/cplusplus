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
/**        \file  RVDCExe/include/amsr/someip_binding_xf/internal/mcu_data_info/MCU_Data_Info_payload_deserializer_factory.h
 *        \brief  SOME/IP payload deserialization factory for service 'MCU_Data_Info'
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

#ifndef RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_MCU_DATA_INFO_MCU_DATA_INFO_PAYLOAD_DESERIALIZER_FACTORY_H_
#define RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_MCU_DATA_INFO_MCU_DATA_INFO_PAYLOAD_DESERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/mcu_data_info/MCU_Data_Info_proxy_someip_event_design.h"
#include "amsr/someip_binding_xf/internal/ser_deser/deserializer_interface.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_mcu_data_info {

namespace events {
namespace proxy {
namespace Ids {

// ---- Event 'Ids' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'Ids'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'Ids'
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

}  // namespace Ids
}  // namespace proxy
}  // namespace events

namespace events {
namespace proxy {
namespace Mcu_Reset_Info1 {

// ---- Event 'Mcu_Reset_Info1' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'Mcu_Reset_Info1'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'Mcu_Reset_Info1'
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

}  // namespace Mcu_Reset_Info1
}  // namespace proxy
}  // namespace events

namespace events {
namespace proxy {
namespace Mcu_Reset_Info2 {

// ---- Event 'Mcu_Reset_Info2' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'Mcu_Reset_Info2'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'Mcu_Reset_Info2'
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

}  // namespace Mcu_Reset_Info2
}  // namespace proxy
}  // namespace events

namespace events {
namespace proxy {
namespace Mcu_Reset_Info3 {

// ---- Event 'Mcu_Reset_Info3' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'Mcu_Reset_Info3'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'Mcu_Reset_Info3'
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

}  // namespace Mcu_Reset_Info3
}  // namespace proxy
}  // namespace events

namespace events {
namespace proxy {
namespace Mcu_Reset_Info4 {

// ---- Event 'Mcu_Reset_Info4' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'Mcu_Reset_Info4'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'Mcu_Reset_Info4'
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

}  // namespace Mcu_Reset_Info4
}  // namespace proxy
}  // namespace events


}  // namespace gen_mcu_data_info

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_MCU_DATA_INFO_MCU_DATA_INFO_PAYLOAD_DESERIALIZER_FACTORY_H_

