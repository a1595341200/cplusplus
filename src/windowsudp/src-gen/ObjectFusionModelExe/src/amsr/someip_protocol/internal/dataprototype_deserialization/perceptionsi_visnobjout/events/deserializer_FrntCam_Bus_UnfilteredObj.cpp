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
/**        \file  ObjectFusionModelExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_visnobjout/events/deserializer_FrntCam_Bus_UnfilteredObj.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/PerceptionSI_VisnObjOut/FrntCam_Bus_UnfilteredObj
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_visnobjout/events/deserializer_FrntCam_Bus_UnfilteredObj.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/UnfilteredObjIDT/deserializer_UnfilteredObjIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace perceptionsi_visnobjout {
namespace events {

deserialization::Result DeserializerFrntCam_Bus_UnfilteredObj::Deserialize(deserialization::Reader &reader, ::Array_UnfilteredObjIDT_30::Array_UnfilteredObjIDT_30 &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/PerceptionSI_VisnObjOut/FrntCam_Bus_UnfilteredObj
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
        // Config of array length field (/CppImplementationDataTypes/Array_UnfilteredObjIDT_30)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/UnfilteredObjIDT)
      // Config of struct length field (/CppImplementationDataTypes/UnfilteredObjIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/UnfilteredObjIDT)

      >(deserialization::SizeToken<::Array_UnfilteredObjIDT_30::Array_UnfilteredObjIDT_30>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of array length field (/CppImplementationDataTypes/Array_UnfilteredObjIDT_30)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/UnfilteredObjIDT)
      // Config of struct length field (/CppImplementationDataTypes/UnfilteredObjIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/UnfilteredObjIDT)

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace perceptionsi_visnobjout
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

