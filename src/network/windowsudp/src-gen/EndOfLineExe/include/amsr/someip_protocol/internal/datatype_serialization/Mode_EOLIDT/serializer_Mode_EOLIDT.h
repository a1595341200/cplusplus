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
/**        \file  EndOfLineExe/include/amsr/someip_protocol/internal/datatype_serialization/Mode_EOLIDT/serializer_Mode_EOLIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'Mode_EOLIDT'
 *
 *      \details  /CppImplementationDataTypes/Mode_EOLIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_MODE_EOLIDT_SERIALIZER_MODE_EOLIDT_H_
#define ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_MODE_EOLIDT_SERIALIZER_MODE_EOLIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Mode_EOLIDT/impl_type_mode_eolidt.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace Mode_EOLIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/Mode_EOLIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/Mode_EOLIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::Mode_EOLIDT::Mode_EOLIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'IsValid' of type /CppImplementationDataTypes/Bool1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.IsValid);
    // Serialize struct member 'EolFrontCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.EolFrontCamCalibStatus);
    // Serialize struct member 'EolRearCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.EolRearCamCalibStatus);
    // Serialize struct member 'EolFrontLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.EolFrontLeftCamCalibStatus);
    // Serialize struct member 'EolFrontRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.EolFrontRightCamCalibStatus);
    // Serialize struct member 'EolRearLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.EolRearLeftCamCalibStatus);
    // Serialize struct member 'EolRearRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.EolRearRightCamCalibStatus);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/Mode_EOLIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/Mode_EOLIDT.
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
constexpr std::size_t GetRequiredBufferSize(::Mode_EOLIDT::Mode_EOLIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'IsValid' of type /CppImplementationDataTypes/Bool1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.IsValid);
  // Accumulate the static size of struct member 'EolFrontCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.EolFrontCamCalibStatus);
  // Accumulate the static size of struct member 'EolRearCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.EolRearCamCalibStatus);
  // Accumulate the static size of struct member 'EolFrontLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.EolFrontLeftCamCalibStatus);
  // Accumulate the static size of struct member 'EolFrontRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.EolFrontRightCamCalibStatus);
  // Accumulate the static size of struct member 'EolRearLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.EolRearLeftCamCalibStatus);
  // Accumulate the static size of struct member 'EolRearRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.EolRearRightCamCalibStatus);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/Mode_EOLIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::Mode_EOLIDT::Mode_EOLIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'IsValid' of type /CppImplementationDataTypes/Bool1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.IsValid),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'EolFrontCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.EolFrontCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'EolRearCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.EolRearCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'EolFrontLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.EolFrontLeftCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'EolFrontRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.EolFrontRightCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'EolRearLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.EolRearLeftCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'EolRearRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.EolRearRightCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/Mode_EOLIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/Mode_EOLIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::Mode_EOLIDT::Mode_EOLIDT const&) noexcept {
  return GetMaximumBufferSize<::Mode_EOLIDT::Mode_EOLIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/Mode_EOLIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::Mode_EOLIDT::Mode_EOLIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'IsValid' of type /CppImplementationDataTypes/Bool1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Bool1VccIDT::Bool1VccIDT>{})  && 
  
  // Check static size status of struct member 'EolFrontCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{})  && 
  
  // Check static size status of struct member 'EolRearCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{})  && 
  
  // Check static size status of struct member 'EolFrontLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{})  && 
  
  // Check static size status of struct member 'EolFrontRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{})  && 
  
  // Check static size status of struct member 'EolRearLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{})  && 
  
  // Check static size status of struct member 'EolRearRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{}) 
  };
    return is_static_size;
}

}  // namespace Mode_EOLIDT

#endif  // ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_MODE_EOLIDT_SERIALIZER_MODE_EOLIDT_H_

