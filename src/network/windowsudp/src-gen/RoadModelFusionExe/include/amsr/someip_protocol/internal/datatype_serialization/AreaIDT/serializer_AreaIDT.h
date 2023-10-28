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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_serialization/AreaIDT/serializer_AreaIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'AreaIDT'
 *
 *      \details  /CppImplementationDataTypes/AreaIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_AREAIDT_SERIALIZER_AREAIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_AREAIDT_SERIALIZER_AREAIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "AreaIDT/impl_type_areaidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/MapInfoNodeIDT/serializer_MapInfoNodeIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace AreaIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/AreaIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/AreaIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::AreaIDT::AreaIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'MapInfoTimestamp' of type /CppImplementationDataTypes/uint64_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint64_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.MapInfoTimestamp);
    // Serialize struct member 'MapInfoStartPnts' of type /CppImplementationDataTypes/Array_float32IDT_2
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_2)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

                        >(writer, data.MapInfoStartPnts);
    // Serialize struct member 'MapInfoEndPnts' of type /CppImplementationDataTypes/Array_float32IDT_2
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_2)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

                        >(writer, data.MapInfoEndPnts);
    // Serialize struct member 'MapInfoType' of type /CppImplementationDataTypes/MapInfoTypeIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/MapInfoTypeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.MapInfoType);
    // Serialize struct member 'MapInfoNodes' of type /CppImplementationDataTypes/Array_MapInfoNodeIDT_Vector
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_MapInfoNodeIDT_Vector)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/MapInfoNodeIDT)
                        // Config of struct length field (/CppImplementationDataTypes/MapInfoNodeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/MapInfoNodeIDT)

                        >(writer, data.MapInfoNodes);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/AreaIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/AreaIDT.
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
constexpr std::size_t GetRequiredBufferSize(::AreaIDT::AreaIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'MapInfoTimestamp' of type /CppImplementationDataTypes/uint64_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint64_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.MapInfoTimestamp);
  // Accumulate the static size of struct member 'MapInfoStartPnts' of type /CppImplementationDataTypes/Array_float32IDT_2
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_2)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

                        >(data.MapInfoStartPnts);
  // Accumulate the static size of struct member 'MapInfoEndPnts' of type /CppImplementationDataTypes/Array_float32IDT_2
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_2)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

                        >(data.MapInfoEndPnts);
  // Accumulate the static size of struct member 'MapInfoType' of type /CppImplementationDataTypes/MapInfoTypeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/MapInfoTypeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.MapInfoType);
  // Accumulate the static size of struct member 'MapInfoNodes' of type /CppImplementationDataTypes/Array_MapInfoNodeIDT_Vector
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_MapInfoNodeIDT_Vector)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/MapInfoNodeIDT)
                        // Config of struct length field (/CppImplementationDataTypes/MapInfoNodeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/MapInfoNodeIDT)

                        >(data.MapInfoNodes);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/AreaIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::AreaIDT::AreaIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'MapInfoTimestamp' of type /CppImplementationDataTypes/uint64_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.MapInfoTimestamp),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint64_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'MapInfoStartPnts' of type /CppImplementationDataTypes/Array_float32IDT_2
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.MapInfoStartPnts),
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_2)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

                        >();
  // Accumulate the static size of struct member 'MapInfoEndPnts' of type /CppImplementationDataTypes/Array_float32IDT_2
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.MapInfoEndPnts),
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_2)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

                        >();
  // Accumulate the static size of struct member 'MapInfoType' of type /CppImplementationDataTypes/MapInfoTypeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.MapInfoType),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/MapInfoTypeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'MapInfoNodes' of type /CppImplementationDataTypes/Array_MapInfoNodeIDT_Vector
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.MapInfoNodes),
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_MapInfoNodeIDT_Vector)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/MapInfoNodeIDT)
                        // Config of struct length field (/CppImplementationDataTypes/MapInfoNodeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/MapInfoNodeIDT)

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/AreaIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/AreaIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::AreaIDT::AreaIDT const&) noexcept {
  return GetMaximumBufferSize<::AreaIDT::AreaIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/AreaIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::AreaIDT::AreaIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'MapInfoTimestamp' of type /CppImplementationDataTypes/uint64_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint64_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint64IDT::uint64IDT>{})  && 
  
  // Check static size status of struct member 'MapInfoStartPnts' of type /CppImplementationDataTypes/Array_float32IDT_2
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_2)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder
                      
                      // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

                      >(serialization::SizeToken<::Array_float32IDT_2::Array_float32IDT_2>{})  && 
  
  // Check static size status of struct member 'MapInfoEndPnts' of type /CppImplementationDataTypes/Array_float32IDT_2
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_2)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder
                      
                      // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

                      >(serialization::SizeToken<::Array_float32IDT_2::Array_float32IDT_2>{})  && 
  
  // Check static size status of struct member 'MapInfoType' of type /CppImplementationDataTypes/MapInfoTypeIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/MapInfoTypeIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::MapInfoTypeIDT::MapInfoTypeIDT>{})  && 
  
  // Check static size status of struct member 'MapInfoNodes' of type /CppImplementationDataTypes/Array_MapInfoNodeIDT_Vector
  serialization::IsStaticSize<
                      TpPack,
                      // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_MapInfoNodeIDT_Vector)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                      // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/MapInfoNodeIDT)
                      // Config of struct length field (/CppImplementationDataTypes/MapInfoNodeIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/MapInfoNodeIDT)

                      >(serialization::SizeToken<::Array_MapInfoNodeIDT_Vector::Array_MapInfoNodeIDT_Vector>{}) 
  };
    return is_static_size;
}

}  // namespace AreaIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_AREAIDT_SERIALIZER_AREAIDT_H_

