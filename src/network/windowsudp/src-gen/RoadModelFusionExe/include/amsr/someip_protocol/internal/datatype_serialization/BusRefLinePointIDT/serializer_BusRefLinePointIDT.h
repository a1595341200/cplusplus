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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_serialization/BusRefLinePointIDT/serializer_BusRefLinePointIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'BusRefLinePointIDT'
 *
 *      \details  /CppImplementationDataTypes/BusRefLinePointIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_BUSREFLINEPOINTIDT_SERIALIZER_BUSREFLINEPOINTIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_BUSREFLINEPOINTIDT_SERIALIZER_BUSREFLINEPOINTIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "BusRefLinePointIDT/impl_type_busreflinepointidt.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace BusRefLinePointIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/BusRefLinePointIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/BusRefLinePointIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::BusRefLinePointIDT::BusRefLinePointIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'Lon_coord' of type /CppImplementationDataTypes/float
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Lon_coord);
    // Serialize struct member 'Lat_coord' of type /CppImplementationDataTypes/float
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Lat_coord);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/BusRefLinePointIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/BusRefLinePointIDT.
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
constexpr std::size_t GetRequiredBufferSize(::BusRefLinePointIDT::BusRefLinePointIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'Lon_coord' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Lon_coord);
  // Accumulate the static size of struct member 'Lat_coord' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Lat_coord);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/BusRefLinePointIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::BusRefLinePointIDT::BusRefLinePointIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'Lon_coord' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Lon_coord),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'Lat_coord' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Lat_coord),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/BusRefLinePointIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/BusRefLinePointIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::BusRefLinePointIDT::BusRefLinePointIDT const&) noexcept {
  return GetMaximumBufferSize<::BusRefLinePointIDT::BusRefLinePointIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/BusRefLinePointIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::BusRefLinePointIDT::BusRefLinePointIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'Lon_coord' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::float32IDT::float32IDT>{})  && 
  
  // Check static size status of struct member 'Lat_coord' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::float32IDT::float32IDT>{}) 
  };
    return is_static_size;
}

}  // namespace BusRefLinePointIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_BUSREFLINEPOINTIDT_SERIALIZER_BUSREFLINEPOINTIDT_H_

