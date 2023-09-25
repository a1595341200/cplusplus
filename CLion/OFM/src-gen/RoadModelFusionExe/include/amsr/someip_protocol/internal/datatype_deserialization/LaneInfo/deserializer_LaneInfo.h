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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_deserialization/LaneInfo/deserializer_LaneInfo.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'LaneInfo'
 *
 *      \details  /CppImplementationDataTypes/LaneInfo
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LANEINFO_DESERIALIZER_LANEINFO_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LANEINFO_DESERIALIZER_LANEINFO_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LaneInfo/impl_type_laneinfo.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneWidth1/deserializer_LaneWidth1.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LinearObject/deserializer_LinearObject.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace LaneInfo {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/LaneInfo.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/LaneInfo
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::LaneInfo::LaneInfo &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'LaneNum_ref' of type /CppImplementationDataTypes/uint8_t
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.LaneNum_ref);


  // Deserialize struct member 'LaneWidth1_ref' of type /CppImplementationDataTypes/LaneWidth1
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/LaneWidth1)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.LaneWidth1_ref);
  }

  // Deserialize struct member 'Direction_ref' of type /CppImplementationDataTypes/Direction
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Direction)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Direction_ref);
  }

  // Deserialize struct member 'Transit_ref' of type /CppImplementationDataTypes/Transit
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Transit)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Transit_ref);
  }

  // Deserialize struct member 'LaneType_ref' of type /CppImplementationDataTypes/LaneType
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneType)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneType_ref);
  }

  // Deserialize struct member 'LaneAppType_ref' of type /CppImplementationDataTypes/LaneAppType
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneAppType)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneAppType_ref);
  }

  // Deserialize struct member 'TotalNumObj_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TotalNumObj_ref);
  }

  // Deserialize struct member 'LinearObjects_ref' of type /CppImplementationDataTypes/LinearObjects
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of vector length field and max. container size (/CppImplementationDataTypes/LinearObjects)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPack>::ByteOrder>, deserialization::ArraySizeInactive,
        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinearObject)
        // Config of struct length field (/CppImplementationDataTypes/LinearObject)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinearObject)

        >(reader, data.LinearObjects_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/LaneInfo.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 * \return Returns the static size of the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::LaneInfo::LaneInfo>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'LaneNum_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LaneNum::LaneNum>{})  + 
  
  // Accumulate the static size of struct member 'LaneWidth1_ref' of type /CppImplementationDataTypes/LaneWidth1
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LaneWidth1)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LaneWidth1::LaneWidth1>{})  + 
  
  // Accumulate the static size of struct member 'Direction_ref' of type /CppImplementationDataTypes/Direction
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Direction)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Direction::Direction>{})  + 
  
  // Accumulate the static size of struct member 'Transit_ref' of type /CppImplementationDataTypes/Transit
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Transit)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Transit::Transit>{})  + 
  
  // Accumulate the static size of struct member 'LaneType_ref' of type /CppImplementationDataTypes/LaneType
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneType)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LaneType::LaneType>{})  + 
  
  // Accumulate the static size of struct member 'LaneAppType_ref' of type /CppImplementationDataTypes/LaneAppType
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneAppType)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LaneAppType::LaneAppType>{})  + 
  
  // Accumulate the static size of struct member 'TotalNumObj_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TotalNumObj::TotalNumObj>{})  + 
  
  // Accumulate the static size of struct member 'LinearObjects_ref' of type /CppImplementationDataTypes/LinearObjects
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of vector length field and max. container size (/CppImplementationDataTypes/LinearObjects)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPack>::ByteOrder>, deserialization::ArraySizeInactive,
                                // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinearObject)
                                // Config of struct length field (/CppImplementationDataTypes/LinearObject)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinearObject)

                               >(deserialization::SizeToken<::LinearObjects::LinearObjects>{}) 
  };
  return static_size;
}

}  // namespace LaneInfo

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LANEINFO_DESERIALIZER_LANEINFO_H_

