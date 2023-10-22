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
/**        \file  LocalizationFusionExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_TrfcLi.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/PerceptionSI_Out/FrntCam_Bus_TrfcLi
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_TrfcLi.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TrfcLi1Vcc/deserializer_TrfcLi1Vcc.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace perceptionsi_out {
namespace events {

deserialization::Result DeserializerFrntCam_Bus_TrfcLi::Deserialize(deserialization::Reader &reader, ::TrfcLi1Vccs::TrfcLi1Vccs &data) {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/PerceptionSI_Out/FrntCam_Bus_TrfcLi
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
        // Config of array length field (/CppImplementationDataTypes/TrfcLi1Vccs)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcLi1Vcc)
      // Config of struct length field (/CppImplementationDataTypes/TrfcLi1Vcc)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcLi1Vcc)

      >(deserialization::SizeToken<::TrfcLi1Vccs::TrfcLi1Vccs>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of array length field (/CppImplementationDataTypes/TrfcLi1Vccs)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcLi1Vcc)
      // Config of struct length field (/CppImplementationDataTypes/TrfcLi1Vcc)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcLi1Vcc)

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace perceptionsi_out
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

