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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_serialization/FourDRadarStatusIDT/serializer_FourDRadarStatusIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'FourDRadarStatusIDT'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarStatusIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARSTATUSIDT_SERIALIZER_FOURDRADARSTATUSIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARSTATUSIDT_SERIALIZER_FOURDRADARSTATUSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarStatusIDT/impl_type_fourdradarstatusidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarECUStsIDT/serializer_FourDRadarECUStsIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FrontFourDRadarSts2VccIDT/serializer_FrontFourDRadarSts2VccIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace FourDRadarStatusIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/FourDRadarStatusIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarStatusIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::FourDRadarStatusIDT::FourDRadarStatusIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'FourDRadarECUSts' of type /CppImplementationDataTypes/FourDRadarECUStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUStsIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.FourDRadarECUSts);
    // Serialize struct member 'FrontFourDRadarSts2Vcc' of type /CppImplementationDataTypes/FrontFourDRadarSts2VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts2VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.FrontFourDRadarSts2Vcc);
    // Serialize struct member 'FrntRdrObjE2Efail' of type /CppImplementationDataTypes/Bool1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FrntRdrObjE2Efail);
    // Serialize struct member 'FrntRdrObjTO' of type /CppImplementationDataTypes/Bool1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FrntRdrObjTO);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/FourDRadarStatusIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarStatusIDT.
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
constexpr std::size_t GetRequiredBufferSize(::FourDRadarStatusIDT::FourDRadarStatusIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'FourDRadarECUSts' of type /CppImplementationDataTypes/FourDRadarECUStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUStsIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.FourDRadarECUSts);
  // Accumulate the static size of struct member 'FrontFourDRadarSts2Vcc' of type /CppImplementationDataTypes/FrontFourDRadarSts2VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts2VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.FrontFourDRadarSts2Vcc);
  // Accumulate the static size of struct member 'FrntRdrObjE2Efail' of type /CppImplementationDataTypes/Bool1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FrntRdrObjE2Efail);
  // Accumulate the static size of struct member 'FrntRdrObjTO' of type /CppImplementationDataTypes/Bool1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FrntRdrObjTO);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/FourDRadarStatusIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::FourDRadarStatusIDT::FourDRadarStatusIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'FourDRadarECUSts' of type /CppImplementationDataTypes/FourDRadarECUStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.FourDRadarECUSts),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUStsIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'FrontFourDRadarSts2Vcc' of type /CppImplementationDataTypes/FrontFourDRadarSts2VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.FrontFourDRadarSts2Vcc),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts2VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'FrntRdrObjE2Efail' of type /CppImplementationDataTypes/Bool1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.FrntRdrObjE2Efail),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'FrntRdrObjTO' of type /CppImplementationDataTypes/Bool1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.FrntRdrObjTO),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/FourDRadarStatusIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarStatusIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::FourDRadarStatusIDT::FourDRadarStatusIDT const&) noexcept {
  return GetMaximumBufferSize<::FourDRadarStatusIDT::FourDRadarStatusIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/FourDRadarStatusIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::FourDRadarStatusIDT::FourDRadarStatusIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'FourDRadarECUSts' of type /CppImplementationDataTypes/FourDRadarECUStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUStsIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::FourDRadarECUStsIDT::FourDRadarECUStsIDT>{})  && 
  
  // Check static size status of struct member 'FrontFourDRadarSts2Vcc' of type /CppImplementationDataTypes/FrontFourDRadarSts2VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts2VccIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::FrontFourDRadarSts2VccIDT::FrontFourDRadarSts2VccIDT>{})  && 
  
  // Check static size status of struct member 'FrntRdrObjE2Efail' of type /CppImplementationDataTypes/Bool1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Bool1VccIDT::Bool1VccIDT>{})  && 
  
  // Check static size status of struct member 'FrntRdrObjTO' of type /CppImplementationDataTypes/Bool1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Bool1VccIDT::Bool1VccIDT>{}) 
  };
    return is_static_size;
}

}  // namespace FourDRadarStatusIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARSTATUSIDT_SERIALIZER_FOURDRADARSTATUSIDT_H_

