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
/**        \file  TrafficLightAttentionExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FusedTargets_22.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_FusedTargets_22
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FusedTargets_22.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ObjEstimn2VccGroup/deserializer_ObjEstimn2VccGroup.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ObjGroup2Vcc/deserializer_ObjGroup2Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ObjInfo2VccGroup/deserializer_ObjInfo2VccGroup.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ObjPpty1Vcc/deserializer_ObjPpty2Vcc.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace objectfusionmodelsi_out {
namespace events {

deserialization::Result DeserializerOFM_Bus_FusedTargets_22::Deserialize(deserialization::Reader &reader, ::ObjGroup2Vccs_11::ObjGroup2Vccs_11 &data) {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_FusedTargets_22
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
        // Config of array length field (/CppImplementationDataTypes/ObjGroup2Vccs_11)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/ObjGroup2Vcc)
      // Config of struct length field (/CppImplementationDataTypes/ObjGroup2Vcc)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/ObjGroup2Vcc)

      >(deserialization::SizeToken<::ObjGroup2Vccs_11::ObjGroup2Vccs_11>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of array length field (/CppImplementationDataTypes/ObjGroup2Vccs_11)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/ObjGroup2Vcc)
      // Config of struct length field (/CppImplementationDataTypes/ObjGroup2Vcc)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/ObjGroup2Vcc)

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace objectfusionmodelsi_out
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

