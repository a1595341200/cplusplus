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
/**        \file  EHRExe/include/amsr/someip_protocol/internal/datatype_serialization/NOAInfo/serializer_NOAInfo.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'NOAInfo'
 *
 *      \details  /CppImplementationDataTypes/NOAInfo
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_NOAINFO_SERIALIZER_NOAINFO_H_
#define EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_NOAINFO_SERIALIZER_NOAINFO_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "NOAInfo/impl_type_noainfo.h"
#include "amsr/someip_protocol/internal/datatype_serialization/PairOfId/serializer_PairOfId.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace NOAInfo {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/NOAInfo.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/NOAInfo to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::NOAInfo::NOAInfo const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'NavigationStatus_ref' of type /CppImplementationDataTypes/NavigationStatus
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/NavigationStatus)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.NavigationStatus_ref);
    // Serialize struct member 'MatchingStatus_ref' of type /CppImplementationDataTypes/MatchingStatus
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/MatchingStatus)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.MatchingStatus_ref);
    // Serialize struct member 'RemainDistance_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RemainDistance_ref);
    // Serialize struct member 'SwitchLaneDirection_ref' of type /CppImplementationDataTypes/SwitchLaneDirection
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneDirection)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SwitchLaneDirection_ref);
    // Serialize struct member 'SwitchLaneReason_ref' of type /CppImplementationDataTypes/SwitchLaneReason
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneReason)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SwitchLaneReason_ref);
    // Serialize struct member 'SwitchLaneDistance_ref' of type /CppImplementationDataTypes/uint16_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SwitchLaneDistance_ref);
    // Serialize struct member 'SwitchLaneEndDistance_ref' of type /CppImplementationDataTypes/uint16_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SwitchLaneEndDistance_ref);
    // Serialize struct member 'Count_ref' of type /CppImplementationDataTypes/uint16_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Count_ref);
    // Serialize struct member 'PairOfIds_ref' of type /CppImplementationDataTypes/PairOfIds
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/PairOfIds)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, serialization::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfId)
                        // Config of struct length field (/CppImplementationDataTypes/PairOfId)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfId)

                        >(writer, data.PairOfIds_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/NOAInfo.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/NOAInfo.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::NOAInfo::NOAInfo const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'NavigationStatus_ref' of type /CppImplementationDataTypes/NavigationStatus
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/NavigationStatus)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.NavigationStatus_ref);
  // Accumulate the static size of struct member 'MatchingStatus_ref' of type /CppImplementationDataTypes/MatchingStatus
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/MatchingStatus)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.MatchingStatus_ref);
  // Accumulate the static size of struct member 'RemainDistance_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RemainDistance_ref);
  // Accumulate the static size of struct member 'SwitchLaneDirection_ref' of type /CppImplementationDataTypes/SwitchLaneDirection
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneDirection)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SwitchLaneDirection_ref);
  // Accumulate the static size of struct member 'SwitchLaneReason_ref' of type /CppImplementationDataTypes/SwitchLaneReason
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneReason)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SwitchLaneReason_ref);
  // Accumulate the static size of struct member 'SwitchLaneDistance_ref' of type /CppImplementationDataTypes/uint16_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SwitchLaneDistance_ref);
  // Accumulate the static size of struct member 'SwitchLaneEndDistance_ref' of type /CppImplementationDataTypes/uint16_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SwitchLaneEndDistance_ref);
  // Accumulate the static size of struct member 'Count_ref' of type /CppImplementationDataTypes/uint16_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Count_ref);
  // Accumulate the static size of struct member 'PairOfIds_ref' of type /CppImplementationDataTypes/PairOfIds
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/PairOfIds)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, serialization::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfId)
                        // Config of struct length field (/CppImplementationDataTypes/PairOfId)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfId)

                        >(data.PairOfIds_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/NOAInfo is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::NOAInfo::NOAInfo>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'NavigationStatus_ref' of type /CppImplementationDataTypes/NavigationStatus
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/NavigationStatus)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::NavigationStatus::NavigationStatus>{})  && 
  
  // Check static size status of struct member 'MatchingStatus_ref' of type /CppImplementationDataTypes/MatchingStatus
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/MatchingStatus)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::MatchingStatus::MatchingStatus>{})  && 
  
  // Check static size status of struct member 'RemainDistance_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RemainDistance::RemainDistance>{})  && 
  
  // Check static size status of struct member 'SwitchLaneDirection_ref' of type /CppImplementationDataTypes/SwitchLaneDirection
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneDirection)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SwitchLaneDirection::SwitchLaneDirection>{})  && 
  
  // Check static size status of struct member 'SwitchLaneReason_ref' of type /CppImplementationDataTypes/SwitchLaneReason
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneReason)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SwitchLaneReason::SwitchLaneReason>{})  && 
  
  // Check static size status of struct member 'SwitchLaneDistance_ref' of type /CppImplementationDataTypes/uint16_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SwitchLaneDistance::SwitchLaneDistance>{})  && 
  
  // Check static size status of struct member 'SwitchLaneEndDistance_ref' of type /CppImplementationDataTypes/uint16_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SwitchLaneEndDistance::SwitchLaneEndDistance>{})  && 
  
  // Check static size status of struct member 'Count_ref' of type /CppImplementationDataTypes/uint16_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Count::Count>{})  && 
  
  // Check static size status of struct member 'PairOfIds_ref' of type /CppImplementationDataTypes/PairOfIds
  serialization::IsStaticSize<
                      TpPack,
                      // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/PairOfIds)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, serialization::ArraySizeInactive,
                      // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfId)
                      // Config of struct length field (/CppImplementationDataTypes/PairOfId)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfId)

                      >(serialization::SizeToken<::PairOfIds::PairOfIds>{}) 
  };
    return is_static_size;
}

}  // namespace NOAInfo

#endif  // EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_NOAINFO_SERIALIZER_NOAINFO_H_

