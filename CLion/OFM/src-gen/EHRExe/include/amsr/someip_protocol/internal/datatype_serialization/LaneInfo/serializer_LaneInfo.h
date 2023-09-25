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
/**        \file  EHRExe/include/amsr/someip_protocol/internal/datatype_serialization/LaneInfo/serializer_LaneInfo.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'LaneInfo'
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

#ifndef EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LANEINFO_SERIALIZER_LANEINFO_H_
#define EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LANEINFO_SERIALIZER_LANEINFO_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LaneInfo/impl_type_laneinfo.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneWidth1/serializer_LaneWidth1.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LinearObject/serializer_LinearObject.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace LaneInfo {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/LaneInfo.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/LaneInfo to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::LaneInfo::LaneInfo const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'LaneNum_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LaneNum_ref);
    // Serialize struct member 'LaneWidth1_ref' of type /CppImplementationDataTypes/LaneWidth1
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneWidth1)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.LaneWidth1_ref);
    // Serialize struct member 'Direction_ref' of type /CppImplementationDataTypes/Direction
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Direction)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Direction_ref);
    // Serialize struct member 'Transit_ref' of type /CppImplementationDataTypes/Transit
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Transit)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Transit_ref);
    // Serialize struct member 'LaneType_ref' of type /CppImplementationDataTypes/LaneType
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneType)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LaneType_ref);
    // Serialize struct member 'LaneAppType_ref' of type /CppImplementationDataTypes/LaneAppType
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneAppType)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LaneAppType_ref);
    // Serialize struct member 'TotalNumObj_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TotalNumObj_ref);
    // Serialize struct member 'LinearObjects_ref' of type /CppImplementationDataTypes/LinearObjects
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/LinearObjects)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, serialization::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinearObject)
                        // Config of struct length field (/CppImplementationDataTypes/LinearObject)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinearObject)

                        >(writer, data.LinearObjects_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/LaneInfo.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/LaneInfo.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::LaneInfo::LaneInfo const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'LaneNum_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LaneNum_ref);
  // Accumulate the static size of struct member 'LaneWidth1_ref' of type /CppImplementationDataTypes/LaneWidth1
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneWidth1)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.LaneWidth1_ref);
  // Accumulate the static size of struct member 'Direction_ref' of type /CppImplementationDataTypes/Direction
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Direction)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Direction_ref);
  // Accumulate the static size of struct member 'Transit_ref' of type /CppImplementationDataTypes/Transit
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Transit)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Transit_ref);
  // Accumulate the static size of struct member 'LaneType_ref' of type /CppImplementationDataTypes/LaneType
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneType)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LaneType_ref);
  // Accumulate the static size of struct member 'LaneAppType_ref' of type /CppImplementationDataTypes/LaneAppType
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneAppType)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LaneAppType_ref);
  // Accumulate the static size of struct member 'TotalNumObj_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TotalNumObj_ref);
  // Accumulate the static size of struct member 'LinearObjects_ref' of type /CppImplementationDataTypes/LinearObjects
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/LinearObjects)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, serialization::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinearObject)
                        // Config of struct length field (/CppImplementationDataTypes/LinearObject)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinearObject)

                        >(data.LinearObjects_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/LaneInfo is of static size.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \return True if datatype has static size, false otherwise.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::LaneInfo::LaneInfo>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'LaneNum_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LaneNum::LaneNum>{})  && 
  
  // Check static size status of struct member 'LaneWidth1_ref' of type /CppImplementationDataTypes/LaneWidth1
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/LaneWidth1)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::LaneWidth1::LaneWidth1>{})  && 
  
  // Check static size status of struct member 'Direction_ref' of type /CppImplementationDataTypes/Direction
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Direction)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Direction::Direction>{})  && 
  
  // Check static size status of struct member 'Transit_ref' of type /CppImplementationDataTypes/Transit
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Transit)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Transit::Transit>{})  && 
  
  // Check static size status of struct member 'LaneType_ref' of type /CppImplementationDataTypes/LaneType
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneType)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LaneType::LaneType>{})  && 
  
  // Check static size status of struct member 'LaneAppType_ref' of type /CppImplementationDataTypes/LaneAppType
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneAppType)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LaneAppType::LaneAppType>{})  && 
  
  // Check static size status of struct member 'TotalNumObj_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TotalNumObj::TotalNumObj>{})  && 
  
  // Check static size status of struct member 'LinearObjects_ref' of type /CppImplementationDataTypes/LinearObjects
  serialization::IsStaticSize<
                      TpPack,
                      // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/LinearObjects)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, serialization::ArraySizeInactive,
                      // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinearObject)
                      // Config of struct length field (/CppImplementationDataTypes/LinearObject)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinearObject)

                      >(serialization::SizeToken<::LinearObjects::LinearObjects>{}) 
  };
    return is_static_size;
}

}  // namespace LaneInfo

#endif  // EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LANEINFO_SERIALIZER_LANEINFO_H_

