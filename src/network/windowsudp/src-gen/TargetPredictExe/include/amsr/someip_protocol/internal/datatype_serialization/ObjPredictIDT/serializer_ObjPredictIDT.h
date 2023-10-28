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
/**        \file  TargetPredictExe/include/amsr/someip_protocol/internal/datatype_serialization/ObjPredictIDT/serializer_ObjPredictIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'ObjPredictIDT'
 *
 *      \details  /CppImplementationDataTypes/ObjPredictIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJPREDICTIDT_SERIALIZER_OBJPREDICTIDT_H_
#define TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJPREDICTIDT_SERIALIZER_OBJPREDICTIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ObjPredictIDT/impl_type_objpredictidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ObjPredictTrajsIDT/serializer_ObjPredictTrajsIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace ObjPredictIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/ObjPredictIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjPredictIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::ObjPredictIDT::ObjPredictIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'PredTargetsTimestamp' of type /CppImplementationDataTypes/uint32_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.PredTargetsTimestamp);
    // Serialize struct member 'ObjPredictTrajs' of type /CppImplementationDataTypes/ObjPredictTrajsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ObjPredictTrajsIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.ObjPredictTrajs);
    // Serialize struct member 'PredTargetsIdn' of type /CppImplementationDataTypes/uint16_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.PredTargetsIdn);
    // Serialize struct member 'PredTargetsN' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.PredTargetsN);
    // Serialize struct member 'PredTargetsIntentions' of type /CppImplementationDataTypes/Array_uint8IDT_5
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_uint8IDT_5)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)

                        >(writer, data.PredTargetsIntentions);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/ObjPredictIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjPredictIDT.
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
constexpr std::size_t GetRequiredBufferSize(::ObjPredictIDT::ObjPredictIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'PredTargetsTimestamp' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.PredTargetsTimestamp);
  // Accumulate the static size of struct member 'ObjPredictTrajs' of type /CppImplementationDataTypes/ObjPredictTrajsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ObjPredictTrajsIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.ObjPredictTrajs);
  // Accumulate the static size of struct member 'PredTargetsIdn' of type /CppImplementationDataTypes/uint16_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.PredTargetsIdn);
  // Accumulate the static size of struct member 'PredTargetsN' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.PredTargetsN);
  // Accumulate the static size of struct member 'PredTargetsIntentions' of type /CppImplementationDataTypes/Array_uint8IDT_5
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_uint8IDT_5)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)

                        >(data.PredTargetsIntentions);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/ObjPredictIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::ObjPredictIDT::ObjPredictIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'PredTargetsTimestamp' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.PredTargetsTimestamp),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'ObjPredictTrajs' of type /CppImplementationDataTypes/ObjPredictTrajsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ObjPredictTrajs),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ObjPredictTrajsIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'PredTargetsIdn' of type /CppImplementationDataTypes/uint16_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.PredTargetsIdn),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'PredTargetsN' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.PredTargetsN),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'PredTargetsIntentions' of type /CppImplementationDataTypes/Array_uint8IDT_5
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.PredTargetsIntentions),
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_uint8IDT_5)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/ObjPredictIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjPredictIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::ObjPredictIDT::ObjPredictIDT const&) noexcept {
  return GetMaximumBufferSize<::ObjPredictIDT::ObjPredictIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/ObjPredictIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::ObjPredictIDT::ObjPredictIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'PredTargetsTimestamp' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint32IDT::uint32IDT>{})  && 
  
  // Check static size status of struct member 'ObjPredictTrajs' of type /CppImplementationDataTypes/ObjPredictTrajsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/ObjPredictTrajsIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::ObjPredictTrajsIDT::ObjPredictTrajsIDT>{})  && 
  
  // Check static size status of struct member 'PredTargetsIdn' of type /CppImplementationDataTypes/uint16_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint16IDT::uint16IDT>{})  && 
  
  // Check static size status of struct member 'PredTargetsN' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'PredTargetsIntentions' of type /CppImplementationDataTypes/Array_uint8IDT_5
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/Array_uint8IDT_5)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder
                      
                      // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)

                      >(serialization::SizeToken<::Array_uint8IDT_5::Array_uint8IDT_5>{}) 
  };
    return is_static_size;
}

}  // namespace ObjPredictIDT

#endif  // TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJPREDICTIDT_SERIALIZER_OBJPREDICTIDT_H_

