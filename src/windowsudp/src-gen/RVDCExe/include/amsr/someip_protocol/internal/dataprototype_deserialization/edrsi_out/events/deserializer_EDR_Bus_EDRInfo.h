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
/**        \file  RVDCExe/include/amsr/someip_protocol/internal/dataprototype_deserialization/edrsi_out/events/deserializer_EDR_Bus_EDRInfo.h
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/EDRSI_Out/EDR_Bus_EDRInfo
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef RVDCEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_EDRSI_OUT_EVENTS_deserializer_EDR_Bus_EDRInfo_h_
#define RVDCEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_EDRSI_OUT_EVENTS_deserializer_EDR_Bus_EDRInfo_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "s_EDRInfo_tIDT/impl_type_s_edrinfo_tidt.h"
#include "someip-protocol/internal/deserialization/reader.h"
#include "someip-protocol/internal/deserialization/types.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace edrsi_out {
namespace events {

/*!
 * \brief Deserializer for service event /JICA/Service/Interface/EDRSI_Out/EDR_Bus_EDRInfo
 *        of service interface /JICA/Service/Interface/EDRSI_Out.
 * \details Top-Level data type: /CppImplementationDataTypes/s_EDRInfo_tIDT
 *          Effective transformation properties of the DataPrototype:
 *          - ByteOrder:                    MOST-SIGNIFICANT-BYTE-FIRST (big-endian)
 *          - sizeOfArrayLengthField:       0
 *          - sizeOfVectorLengthField:      4
 *          - sizeOfMapLengthField:         4
 *          - sizeOfStringLengthField:      4
 *          - sizeOfStructLengthField:      0
 *          - sizeOfUnionLengthField:       4
 *          - sizeOfUnionTypeSelectorField: 4
 *          - isBomActive:                  true
 *          - isNullTerminationActive:      true
 *          - isDynamicLengthFieldSize:     false
 */
class DeserializerEDR_Bus_EDRInfo {
 public:
  /*!
   * \brief Deserialize the data prototype service event /JICA/Service/Interface/EDRSI_Out/EDR_Bus_EDRInfo.
   *
   * \param[in,out] reader Reference to the byte stream reader.
   * \param[out]    data Reference to data object of top-level data type
   *                /CppImplementationDataTypes/s_EDRInfo_tIDT
   *                in which the deserialized value will be written.
   *
   * \pre           -
   * \context       Reactor|App
   * \threadsafe    FALSE
   * \reentrant     TRUE for different reader objects.
   * \return        True if the deserialization is successful, false otherwise.
   * \synchronous   TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  // VECTOR NC AutosarC++17_10-M3.2.4: MD_SOMEIPPROTOCOL_AutosarC++17_10-M3.2.4_false_positive
  static deserialization::Result Deserialize(deserialization::Reader &reader, ::s_EDRInfo_tIDT::s_EDRInfo_tIDT &data) noexcept;
};

}  // namespace events
}  // namespace edrsi_out
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // RVDCEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_EDRSI_OUT_EVENTS_deserializer_EDR_Bus_EDRInfo_h_

