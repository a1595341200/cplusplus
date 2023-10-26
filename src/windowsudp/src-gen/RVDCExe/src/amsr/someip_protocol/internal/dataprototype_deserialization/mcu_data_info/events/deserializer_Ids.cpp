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
/**        \file  RVDCExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Ids.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/MCU_Data_Info/Ids
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

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "someip-protocol/internal/deserialization/deser_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Ids.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace mcu_data_info {
namespace events {

deserialization::Result DeserializerIds::Deserialize(deserialization::Reader &reader, ::SOMEIP::ValidationKey::Ids_Data &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/MCU_Data_Info/Ids
    using TpPackAlias = internal::TpPack<
        BigEndian,
        internal::SizeOfArrayLengthField<0>, 
        internal::SizeOfVectorLengthField<4>,
        internal::SizeOfMapLengthField<4>,
        internal::SizeOfStringLengthField<4>,
        internal::SizeOfStructLengthField<0>,
        internal::SizeOfUnionLengthField<4>,
        internal::SizeOfUnionTypeSelectorField<4>,
        internal::StringBomActive,
        internal::StringNullTerminationActive>;


  // Verify static size
  constexpr std::size_t static_size{deserialization::SomeIpProtocolGetStaticSize<
      TpPackAlias,
        // Config of array length field (/AUTOSAR/RVDC/Ids_Data)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeValue, /AUTOSAR/StdTypes/uint8_t)
      // Byte-order of primitive datatype (/AUTOSAR/StdTypes/uint8_t)
      typename deserialization::Tp<TpPackAlias>::ByteOrder
      
      // End of config of array value type (DataTypeValue, /AUTOSAR/StdTypes/uint8_t)

      >(deserialization::SizeToken<::SOMEIP::ValidationKey::Ids_Data>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of array length field (/AUTOSAR/RVDC/Ids_Data)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeValue, /AUTOSAR/StdTypes/uint8_t)
      // Byte-order of primitive datatype (/AUTOSAR/StdTypes/uint8_t)
      typename deserialization::Tp<TpPackAlias>::ByteOrder
      
      // End of config of array value type (DataTypeValue, /AUTOSAR/StdTypes/uint8_t)

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace mcu_data_info
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

