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
/**        \file  EHRExe/include/amsr/someip_protocol/internal/datatype_serialization/PairOfIdIDT/serializer_PairOfIdIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'PairOfIdIDT'
 *
 *      \details  /CppImplementationDataTypes/PairOfIdIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_PAIROFIDIDT_SERIALIZER_PAIROFIDIDT_H_
#define EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_PAIROFIDIDT_SERIALIZER_PAIROFIDIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "PairOfIdIDT/impl_type_pairofididt.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace PairOfIdIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/PairOfIdIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/PairOfIdIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::PairOfIdIDT::PairOfIdIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'PathId' of type /CppImplementationDataTypes/uint32_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.PathId);
    // Serialize struct member 'InstanceId' of type /CppImplementationDataTypes/uint32_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.InstanceId);
    // Serialize struct member 'LaneNumber' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LaneNumber);
    // Serialize struct member 'LinearObjectId' of type /CppImplementationDataTypes/uint32_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LinearObjectId);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/PairOfIdIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/PairOfIdIDT.
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
constexpr std::size_t GetRequiredBufferSize(::PairOfIdIDT::PairOfIdIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'PathId' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.PathId);
  // Accumulate the static size of struct member 'InstanceId' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.InstanceId);
  // Accumulate the static size of struct member 'LaneNumber' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LaneNumber);
  // Accumulate the static size of struct member 'LinearObjectId' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LinearObjectId);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/PairOfIdIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::PairOfIdIDT::PairOfIdIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'PathId' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.PathId),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'InstanceId' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.InstanceId),
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
  // Accumulate the static size of struct member 'LinearObjectId' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LinearObjectId),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/PairOfIdIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/PairOfIdIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::PairOfIdIDT::PairOfIdIDT const&) noexcept {
  return GetMaximumBufferSize<::PairOfIdIDT::PairOfIdIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/PairOfIdIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::PairOfIdIDT::PairOfIdIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'PathId' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint32IDT::uint32IDT>{})  && 
  
  // Check static size status of struct member 'InstanceId' of type /CppImplementationDataTypes/uint32_t
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
  
  // Check static size status of struct member 'LinearObjectId' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint32IDT::uint32IDT>{}) 
  };
    return is_static_size;
}

}  // namespace PairOfIdIDT

#endif  // EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_PAIROFIDIDT_SERIALIZER_PAIROFIDIDT_H_

