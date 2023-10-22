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
/**        \file  EHRExe/include/amsr/someip_protocol/internal/datatype_serialization/PathTrafficSigns/serializer_PathTrafficSigns.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'PathTrafficSigns'
 *
 *      \details  /CppImplementationDataTypes/PathTrafficSigns
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_PATHTRAFFICSIGNS_SERIALIZER_PATHTRAFFICSIGNS_H_
#define EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_PATHTRAFFICSIGNS_SERIALIZER_PATHTRAFFICSIGNS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "PathTrafficSigns/impl_type_pathtrafficsigns.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace PathTrafficSigns {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/PathTrafficSigns.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/PathTrafficSigns to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::PathTrafficSigns::PathTrafficSigns const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'InstanceId_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.InstanceId_ref);
    // Serialize struct member 'PathId_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.PathId_ref);
    // Serialize struct member 'LaneNumber_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LaneNumber_ref);
    // Serialize struct member 'PathOffset_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.PathOffset_ref);
    // Serialize struct member 'EndOffset_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.EndOffset_ref);
    // Serialize struct member 'TrafficSignType_ref' of type /CppImplementationDataTypes/TrafficSignType
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrafficSignType)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrafficSignType_ref);
    // Serialize struct member 'TrafficSignShape_ref' of type /CppImplementationDataTypes/TrafficSignShape
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrafficSignShape)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrafficSignShape_ref);
    // Serialize struct member 'Latitude_ref' of type /CppImplementationDataTypes/int32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Latitude_ref);
    // Serialize struct member 'Longitude_ref' of type /CppImplementationDataTypes/int32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Longitude_ref);
    // Serialize struct member 'Altitude_ref' of type /CppImplementationDataTypes/int32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Altitude_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/PathTrafficSigns.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/PathTrafficSigns.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::PathTrafficSigns::PathTrafficSigns const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'InstanceId_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.InstanceId_ref);
  // Accumulate the static size of struct member 'PathId_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.PathId_ref);
  // Accumulate the static size of struct member 'LaneNumber_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LaneNumber_ref);
  // Accumulate the static size of struct member 'PathOffset_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.PathOffset_ref);
  // Accumulate the static size of struct member 'EndOffset_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.EndOffset_ref);
  // Accumulate the static size of struct member 'TrafficSignType_ref' of type /CppImplementationDataTypes/TrafficSignType
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrafficSignType)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrafficSignType_ref);
  // Accumulate the static size of struct member 'TrafficSignShape_ref' of type /CppImplementationDataTypes/TrafficSignShape
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrafficSignShape)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrafficSignShape_ref);
  // Accumulate the static size of struct member 'Latitude_ref' of type /CppImplementationDataTypes/int32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Latitude_ref);
  // Accumulate the static size of struct member 'Longitude_ref' of type /CppImplementationDataTypes/int32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Longitude_ref);
  // Accumulate the static size of struct member 'Altitude_ref' of type /CppImplementationDataTypes/int32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Altitude_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/PathTrafficSigns is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::PathTrafficSigns::PathTrafficSigns>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'InstanceId_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::InstanceId::InstanceId>{})  && 
  
  // Check static size status of struct member 'PathId_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::PathId::PathId>{})  && 
  
  // Check static size status of struct member 'LaneNumber_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LaneNumber::LaneNumber>{})  && 
  
  // Check static size status of struct member 'PathOffset_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::PathOffset::PathOffset>{})  && 
  
  // Check static size status of struct member 'EndOffset_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EndOffset::EndOffset>{})  && 
  
  // Check static size status of struct member 'TrafficSignType_ref' of type /CppImplementationDataTypes/TrafficSignType
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrafficSignType)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrafficSignType::TrafficSignType>{})  && 
  
  // Check static size status of struct member 'TrafficSignShape_ref' of type /CppImplementationDataTypes/TrafficSignShape
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrafficSignShape)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrafficSignShape::TrafficSignShape>{})  && 
  
  // Check static size status of struct member 'Latitude_ref' of type /CppImplementationDataTypes/int32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Latitude::Latitude>{})  && 
  
  // Check static size status of struct member 'Longitude_ref' of type /CppImplementationDataTypes/int32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Longitude::Longitude>{})  && 
  
  // Check static size status of struct member 'Altitude_ref' of type /CppImplementationDataTypes/int32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Altitude::Altitude>{}) 
  };
    return is_static_size;
}

}  // namespace PathTrafficSigns

#endif  // EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_PATHTRAFFICSIGNS_SERIALIZER_PATHTRAFFICSIGNS_H_

