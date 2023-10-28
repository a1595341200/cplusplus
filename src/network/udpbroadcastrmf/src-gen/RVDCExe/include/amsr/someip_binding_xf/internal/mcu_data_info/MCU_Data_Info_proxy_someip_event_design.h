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
/**        \file  RVDCExe/include/amsr/someip_binding_xf/internal/mcu_data_info/MCU_Data_Info_proxy_someip_event_design.h
 *        \brief  SOME/IP proxy event design info for events and field notifications of service 'MCU_Data_Info'
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

#ifndef RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_SOMEIP_EVENT_DESIGN_H_
#define RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_SOMEIP_EVENT_DESIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/events/proxy_event_xf.h"
#include "mcu_data_info/mcu_data_info_common.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_mcu_data_info {


namespace events {
namespace proxy {
namespace Ids {

// ---- Event 'Ids' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'Ids'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"Ids"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RVDC/Ids_Data
   */
  using SampleType = ::SOMEIP::ValidationKey::Ids_Data;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using MCU_Data_InfoProxySomeIpEventBackendIds = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace Ids
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace Mcu_Reset_Info1 {

// ---- Event 'Mcu_Reset_Info1' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'Mcu_Reset_Info1'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"Mcu_Reset_Info1"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RVDC/Mcu_Reset_Data
   */
  using SampleType = ::SOMEIP::ValidationKey::Mcu_Reset_Data;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using MCU_Data_InfoProxySomeIpEventBackendMcu_Reset_Info1 = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace Mcu_Reset_Info1
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace Mcu_Reset_Info2 {

// ---- Event 'Mcu_Reset_Info2' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'Mcu_Reset_Info2'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"Mcu_Reset_Info2"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RVDC/Mcu_Reset_Data
   */
  using SampleType = ::SOMEIP::ValidationKey::Mcu_Reset_Data;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using MCU_Data_InfoProxySomeIpEventBackendMcu_Reset_Info2 = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace Mcu_Reset_Info2
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace Mcu_Reset_Info3 {

// ---- Event 'Mcu_Reset_Info3' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'Mcu_Reset_Info3'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"Mcu_Reset_Info3"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RVDC/Mcu_Reset_Data
   */
  using SampleType = ::SOMEIP::ValidationKey::Mcu_Reset_Data;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using MCU_Data_InfoProxySomeIpEventBackendMcu_Reset_Info3 = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace Mcu_Reset_Info3
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace Mcu_Reset_Info4 {

// ---- Event 'Mcu_Reset_Info4' -------------------------------------------

/*!
 * \brief Proxy-side design configuration struct for event 'Mcu_Reset_Info4'.
 */
struct EventDesignInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr ::vac::container::CStringView kEventName{"Mcu_Reset_Info4"_sv};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RVDC/Mcu_Reset_Data
   */
  using SampleType = ::SOMEIP::ValidationKey::Mcu_Reset_Data;
};

/*!
 * \brief Alias for templated ProxyEventBackend used by this event
 */
using MCU_Data_InfoProxySomeIpEventBackendMcu_Reset_Info4 = 
    ::amsr::someip_binding_xf::internal::events::ProxyEventXf<EventDesignInfo::SampleType>;

}  // namespace Mcu_Reset_Info4
}  // namespace proxy
}  // namespace events


}  // namespace gen_mcu_data_info
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // RVDCEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_MCU_DATA_INFO_MCU_DATA_INFO_PROXY_SOMEIP_EVENT_DESIGN_H_

