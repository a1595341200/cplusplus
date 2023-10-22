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
/**        \file  RtkExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_GgaData_receive.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/Rtk_Receive/GgaData_receive
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "someip-protocol/internal/deserialization/deser_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_GgaData_receive.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace rtk_r {
namespace events {

deserialization::Result DeserializerGgaData_receive::Deserialize(deserialization::Reader &reader, ::SOMEIP::ValidationKey::GgaData &data) {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/Rtk_Receive/GgaData_receive
    using TpPackAlias = deserialization::TpPack<
        BigEndian,
        deserialization::SizeOfArrayLengthField<0>, 
        deserialization::SizeOfVectorLengthField<4>,
        deserialization::SizeOfMapLengthField<4>,
        deserialization::SizeOfStringLengthField<4>,
        deserialization::SizeOfStructLengthField<0>,
        deserialization::SizeOfUnionLengthField<4>,
        deserialization::SizeOfUnionTypeSelectorField<4>,
        deserialization::StringBomActive,
        deserialization::StringNullTerminationActive>;


  // Verify static size
  constexpr std::size_t static_size{deserialization::SomeIpProtocolGetStaticSize<
      TpPackAlias,
        // Config of array length field (/AUTOSAR/RTK/GgaData)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeValue, /AUTOSAR/StdTypes/uint8_t)
      // Byte-order of primitive datatype (/AUTOSAR/StdTypes/uint8_t)
      typename deserialization::Tp<TpPackAlias>::ByteOrder
      
      // End of config of array value type (DataTypeValue, /AUTOSAR/StdTypes/uint8_t)

      >(deserialization::SizeToken<::SOMEIP::ValidationKey::GgaData>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of array length field (/AUTOSAR/RTK/GgaData)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeValue, /AUTOSAR/StdTypes/uint8_t)
      // Byte-order of primitive datatype (/AUTOSAR/StdTypes/uint8_t)
      typename deserialization::Tp<TpPackAlias>::ByteOrder
      
      // End of config of array value type (DataTypeValue, /AUTOSAR/StdTypes/uint8_t)

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace rtk_r
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

