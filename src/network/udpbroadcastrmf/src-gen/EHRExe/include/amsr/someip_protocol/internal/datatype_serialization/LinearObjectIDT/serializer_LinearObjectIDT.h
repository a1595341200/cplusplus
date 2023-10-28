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
/**        \file  EHRExe/include/amsr/someip_protocol/internal/datatype_serialization/LinearObjectIDT/serializer_LinearObjectIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'LinearObjectIDT'
 *
 *      \details  /CppImplementationDataTypes/LinearObjectIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LINEAROBJECTIDT_SERIALIZER_LINEAROBJECTIDT_H_
#define EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LINEAROBJECTIDT_SERIALIZER_LINEAROBJECTIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LinearObjectIDT/impl_type_linearobjectidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/GeometryPointIDT/serializer_GeometryPointIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace LinearObjectIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/LinearObjectIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/LinearObjectIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::LinearObjectIDT::LinearObjectIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'InstanceId' of type /CppImplementationDataTypes/uint32_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.InstanceId);
    // Serialize struct member 'PathId' of type /CppImplementationDataTypes/uint32_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.PathId);
    // Serialize struct member 'LaneNumber' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LaneNumber);
    // Serialize struct member 'PathOffset' of type /CppImplementationDataTypes/uint32_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.PathOffset);
    // Serialize struct member 'EndOffset' of type /CppImplementationDataTypes/uint32_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.EndOffset);
    // Serialize struct member 'IDLinearObject' of type /CppImplementationDataTypes/uint32_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.IDLinearObject);
    // Serialize struct member 'LinearObjectType' of type /CppImplementationDataTypes/LinearObjectTypeIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectTypeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LinearObjectType);
    // Serialize struct member 'LinearObjectmarking' of type /CppImplementationDataTypes/LinearObjectmarkingIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectmarkingIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LinearObjectmarking);
    // Serialize struct member 'LinearObjectColour' of type /CppImplementationDataTypes/LinearObjectColourIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectColourIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LinearObjectColour);
    // Serialize struct member 'LinearObjectIsBold' of type /CppImplementationDataTypes/LinearObjectIsBoldIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectIsBoldIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LinearObjectIsBold);
    // Serialize struct member 'LinearObjectCurveType' of type /CppImplementationDataTypes/LinearObjectCurveTypeIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectCurveTypeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LinearObjectCurveType);
    // Serialize struct member 'PointCount' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.PointCount);
    // Serialize struct member 'GeometryPoints' of type /CppImplementationDataTypes/Array_GeometryPointIDT_Vector
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_GeometryPointIDT_Vector)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)
                        // Config of struct length field (/CppImplementationDataTypes/GeometryPointIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)

                        >(writer, data.GeometryPoints);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/LinearObjectIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/LinearObjectIDT.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::LinearObjectIDT::LinearObjectIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'InstanceId' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.InstanceId);
  // Accumulate the static size of struct member 'PathId' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.PathId);
  // Accumulate the static size of struct member 'LaneNumber' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LaneNumber);
  // Accumulate the static size of struct member 'PathOffset' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.PathOffset);
  // Accumulate the static size of struct member 'EndOffset' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.EndOffset);
  // Accumulate the static size of struct member 'IDLinearObject' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.IDLinearObject);
  // Accumulate the static size of struct member 'LinearObjectType' of type /CppImplementationDataTypes/LinearObjectTypeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectTypeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LinearObjectType);
  // Accumulate the static size of struct member 'LinearObjectmarking' of type /CppImplementationDataTypes/LinearObjectmarkingIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectmarkingIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LinearObjectmarking);
  // Accumulate the static size of struct member 'LinearObjectColour' of type /CppImplementationDataTypes/LinearObjectColourIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectColourIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LinearObjectColour);
  // Accumulate the static size of struct member 'LinearObjectIsBold' of type /CppImplementationDataTypes/LinearObjectIsBoldIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectIsBoldIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LinearObjectIsBold);
  // Accumulate the static size of struct member 'LinearObjectCurveType' of type /CppImplementationDataTypes/LinearObjectCurveTypeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectCurveTypeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LinearObjectCurveType);
  // Accumulate the static size of struct member 'PointCount' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.PointCount);
  // Accumulate the static size of struct member 'GeometryPoints' of type /CppImplementationDataTypes/Array_GeometryPointIDT_Vector
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_GeometryPointIDT_Vector)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)
                        // Config of struct length field (/CppImplementationDataTypes/GeometryPointIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)

                        >(data.GeometryPoints);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/LinearObjectIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false

 * \tparam The desired type.
 * \tparam TpPack Transformation properties to be used for serialization.
 * \return Returns the maximum buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 */
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::LinearObjectIDT::LinearObjectIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'InstanceId' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.InstanceId),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'PathId' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.PathId),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'LaneNumber' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LaneNumber),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'PathOffset' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.PathOffset),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'EndOffset' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.EndOffset),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'IDLinearObject' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.IDLinearObject),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'LinearObjectType' of type /CppImplementationDataTypes/LinearObjectTypeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LinearObjectType),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectTypeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'LinearObjectmarking' of type /CppImplementationDataTypes/LinearObjectmarkingIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LinearObjectmarking),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectmarkingIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'LinearObjectColour' of type /CppImplementationDataTypes/LinearObjectColourIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LinearObjectColour),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectColourIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'LinearObjectIsBold' of type /CppImplementationDataTypes/LinearObjectIsBoldIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LinearObjectIsBold),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectIsBoldIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'LinearObjectCurveType' of type /CppImplementationDataTypes/LinearObjectCurveTypeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LinearObjectCurveType),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectCurveTypeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'PointCount' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.PointCount),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'GeometryPoints' of type /CppImplementationDataTypes/Array_GeometryPointIDT_Vector
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.GeometryPoints),
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_GeometryPointIDT_Vector)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)
                        // Config of struct length field (/CppImplementationDataTypes/GeometryPointIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/LinearObjectIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/LinearObjectIDT.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 */
template <typename TpPack>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::LinearObjectIDT::LinearObjectIDT const&) noexcept {
  return GetMaximumBufferSize<::LinearObjectIDT::LinearObjectIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/LinearObjectIDT is of static size.
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
 * \spec
 *   requires true;
 * \endspec
 */
template <typename TpPack>
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::LinearObjectIDT::LinearObjectIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'InstanceId' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint32IDT::uint32IDT>{})  && 
  
  // Check static size status of struct member 'PathId' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint32IDT::uint32IDT>{})  && 
  
  // Check static size status of struct member 'LaneNumber' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'PathOffset' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint32IDT::uint32IDT>{})  && 
  
  // Check static size status of struct member 'EndOffset' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint32IDT::uint32IDT>{})  && 
  
  // Check static size status of struct member 'IDLinearObject' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint32IDT::uint32IDT>{})  && 
  
  // Check static size status of struct member 'LinearObjectType' of type /CppImplementationDataTypes/LinearObjectTypeIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectTypeIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LinearObjectTypeIDT::LinearObjectTypeIDT>{})  && 
  
  // Check static size status of struct member 'LinearObjectmarking' of type /CppImplementationDataTypes/LinearObjectmarkingIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectmarkingIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LinearObjectmarkingIDT::LinearObjectmarkingIDT>{})  && 
  
  // Check static size status of struct member 'LinearObjectColour' of type /CppImplementationDataTypes/LinearObjectColourIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectColourIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LinearObjectColourIDT::LinearObjectColourIDT>{})  && 
  
  // Check static size status of struct member 'LinearObjectIsBold' of type /CppImplementationDataTypes/LinearObjectIsBoldIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectIsBoldIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LinearObjectIsBoldIDT::LinearObjectIsBoldIDT>{})  && 
  
  // Check static size status of struct member 'LinearObjectCurveType' of type /CppImplementationDataTypes/LinearObjectCurveTypeIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectCurveTypeIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LinearObjectCurveTypeIDT::LinearObjectCurveTypeIDT>{})  && 
  
  // Check static size status of struct member 'PointCount' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'GeometryPoints' of type /CppImplementationDataTypes/Array_GeometryPointIDT_Vector
  serialization::IsStaticSize<
                      TpPack,
                      // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_GeometryPointIDT_Vector)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                      // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)
                      // Config of struct length field (/CppImplementationDataTypes/GeometryPointIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)

                      >(serialization::SizeToken<::Array_GeometryPointIDT_Vector::Array_GeometryPointIDT_Vector>{}) 
  };
    return is_static_size;
}

}  // namespace LinearObjectIDT

#endif  // EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LINEAROBJECTIDT_SERIALIZER_LINEAROBJECTIDT_H_

