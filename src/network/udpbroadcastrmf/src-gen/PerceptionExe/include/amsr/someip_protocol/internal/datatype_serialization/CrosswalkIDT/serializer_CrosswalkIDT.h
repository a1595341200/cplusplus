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
/**        \file  PerceptionExe/include/amsr/someip_protocol/internal/datatype_serialization/CrosswalkIDT/serializer_CrosswalkIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'CrosswalkIDT'
 *
 *      \details  /CppImplementationDataTypes/CrosswalkIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_CROSSWALKIDT_SERIALIZER_CROSSWALKIDT_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_CROSSWALKIDT_SERIALIZER_CROSSWALKIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "CrosswalkIDT/impl_type_crosswalkidt.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace CrosswalkIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/CrosswalkIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/CrosswalkIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::CrosswalkIDT::CrosswalkIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'Confidence' of type /CppImplementationDataTypes/float
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Confidence);
    // Serialize struct member 'Distance' of type /CppImplementationDataTypes/float
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Distance);
    // Serialize struct member 'CrosswalkLength' of type /CppImplementationDataTypes/float
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CrosswalkLength);
    // Serialize struct member 'CrosswalkWidth' of type /CppImplementationDataTypes/float
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CrosswalkWidth);
    // Serialize struct member 'CamTimeStamp' of type /CppImplementationDataTypes/uint32_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CamTimeStamp);
    // Serialize struct member 'ISPTimeStamp' of type /CppImplementationDataTypes/uint32_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ISPTimeStamp);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/CrosswalkIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/CrosswalkIDT.
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
constexpr std::size_t GetRequiredBufferSize(::CrosswalkIDT::CrosswalkIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'Confidence' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Confidence);
  // Accumulate the static size of struct member 'Distance' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Distance);
  // Accumulate the static size of struct member 'CrosswalkLength' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CrosswalkLength);
  // Accumulate the static size of struct member 'CrosswalkWidth' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CrosswalkWidth);
  // Accumulate the static size of struct member 'CamTimeStamp' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CamTimeStamp);
  // Accumulate the static size of struct member 'ISPTimeStamp' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ISPTimeStamp);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/CrosswalkIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::CrosswalkIDT::CrosswalkIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'Confidence' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Confidence),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'Distance' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Distance),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'CrosswalkLength' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.CrosswalkLength),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'CrosswalkWidth' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.CrosswalkWidth),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'CamTimeStamp' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.CamTimeStamp),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'ISPTimeStamp' of type /CppImplementationDataTypes/uint32_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ISPTimeStamp),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/CrosswalkIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/CrosswalkIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::CrosswalkIDT::CrosswalkIDT const&) noexcept {
  return GetMaximumBufferSize<::CrosswalkIDT::CrosswalkIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/CrosswalkIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::CrosswalkIDT::CrosswalkIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'Confidence' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::float32IDT::float32IDT>{})  && 
  
  // Check static size status of struct member 'Distance' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::float32IDT::float32IDT>{})  && 
  
  // Check static size status of struct member 'CrosswalkLength' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::float32IDT::float32IDT>{})  && 
  
  // Check static size status of struct member 'CrosswalkWidth' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::float32IDT::float32IDT>{})  && 
  
  // Check static size status of struct member 'CamTimeStamp' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint32IDT::uint32IDT>{})  && 
  
  // Check static size status of struct member 'ISPTimeStamp' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint32IDT::uint32IDT>{}) 
  };
    return is_static_size;
}

}  // namespace CrosswalkIDT

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_CROSSWALKIDT_SERIALIZER_CROSSWALKIDT_H_

