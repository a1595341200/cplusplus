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
/**        \file  EndOfLineExe/include/amsr/someip_protocol/internal/datatype_serialization/Mode_OnLineIDT/serializer_Mode_OnLineIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'Mode_OnLineIDT'
 *
 *      \details  /CppImplementationDataTypes/Mode_OnLineIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_MODE_ONLINEIDT_SERIALIZER_MODE_ONLINEIDT_H_
#define ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_MODE_ONLINEIDT_SERIALIZER_MODE_ONLINEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Mode_OnLineIDT/impl_type_mode_onlineidt.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace Mode_OnLineIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/Mode_OnLineIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/Mode_OnLineIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::Mode_OnLineIDT::Mode_OnLineIDT const &data) noexcept {
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
    // Serialize struct member 'OnLineFrontCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.OnLineFrontCamCalibStatus);
    // Serialize struct member 'OnLineRearCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.OnLineRearCamCalibStatus);
    // Serialize struct member 'OnLineFrontLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.OnLineFrontLeftCamCalibStatus);
    // Serialize struct member 'OnLineFrontRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.OnLineFrontRightCamCalibStatus);
    // Serialize struct member 'OnLineRearLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.OnLineRearLeftCamCalibStatus);
    // Serialize struct member 'OnLineRearRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.OnLineRearRightCamCalibStatus);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/Mode_OnLineIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/Mode_OnLineIDT.
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
constexpr std::size_t GetRequiredBufferSize(::Mode_OnLineIDT::Mode_OnLineIDT const &data) noexcept {
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
  // Accumulate the static size of struct member 'OnLineFrontCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.OnLineFrontCamCalibStatus);
  // Accumulate the static size of struct member 'OnLineRearCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.OnLineRearCamCalibStatus);
  // Accumulate the static size of struct member 'OnLineFrontLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.OnLineFrontLeftCamCalibStatus);
  // Accumulate the static size of struct member 'OnLineFrontRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.OnLineFrontRightCamCalibStatus);
  // Accumulate the static size of struct member 'OnLineRearLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.OnLineRearLeftCamCalibStatus);
  // Accumulate the static size of struct member 'OnLineRearRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.OnLineRearRightCamCalibStatus);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/Mode_OnLineIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::Mode_OnLineIDT::Mode_OnLineIDT>::value, bool> = true>
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
  // Accumulate the static size of struct member 'OnLineFrontCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.OnLineFrontCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'OnLineRearCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.OnLineRearCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'OnLineFrontLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.OnLineFrontLeftCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'OnLineFrontRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.OnLineFrontRightCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'OnLineRearLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.OnLineRearLeftCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'OnLineRearRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.OnLineRearRightCamCalibStatus),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/Mode_OnLineIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/Mode_OnLineIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::Mode_OnLineIDT::Mode_OnLineIDT const&) noexcept {
  return GetMaximumBufferSize<::Mode_OnLineIDT::Mode_OnLineIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/Mode_OnLineIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::Mode_OnLineIDT::Mode_OnLineIDT>) noexcept {
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
  
  // Check static size status of struct member 'OnLineFrontCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{})  && 
  
  // Check static size status of struct member 'OnLineRearCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{})  && 
  
  // Check static size status of struct member 'OnLineFrontLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{})  && 
  
  // Check static size status of struct member 'OnLineFrontRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{})  && 
  
  // Check static size status of struct member 'OnLineRearLeftCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{})  && 
  
  // Check static size status of struct member 'OnLineRearRightCamCalibStatus' of type /CppImplementationDataTypes/EEolCamCalibStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EEolCamCalibStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EEolCamCalibStsIDT::EEolCamCalibStsIDT>{}) 
  };
    return is_static_size;
}

}  // namespace Mode_OnLineIDT

#endif  // ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_MODE_ONLINEIDT_SERIALIZER_MODE_ONLINEIDT_H_

