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
/**        \file  EndOfLineExe/include/amsr/someip_protocol/internal/datatype_serialization/TCameraCalibInfoIDT/serializer_TCameraCalibInfoIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'TCameraCalibInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/TCameraCalibInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TCAMERACALIBINFOIDT_SERIALIZER_TCAMERACALIBINFOIDT_H_
#define ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TCAMERACALIBINFOIDT_SERIALIZER_TCAMERACALIBINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "TCameraCalibInfoIDT/impl_type_tcameracalibinfoidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Mode_AfterSalesIDT/serializer_Mode_AfterSalesIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Mode_EOLIDT/serializer_Mode_EOLIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Mode_OnLineIDT/serializer_Mode_OnLineIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace TCameraCalibInfoIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/TCameraCalibInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TCameraCalibInfoIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::TCameraCalibInfoIDT::TCameraCalibInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'Mode_EOL' of type /CppImplementationDataTypes/Mode_EOLIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Mode_EOLIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.Mode_EOL);
    // Serialize struct member 'Mode_AfterSales' of type /CppImplementationDataTypes/Mode_AfterSalesIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Mode_AfterSalesIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.Mode_AfterSales);
    // Serialize struct member 'Mode_OnLine' of type /CppImplementationDataTypes/Mode_OnLineIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Mode_OnLineIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.Mode_OnLine);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/TCameraCalibInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TCameraCalibInfoIDT.
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
constexpr std::size_t GetRequiredBufferSize(::TCameraCalibInfoIDT::TCameraCalibInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'Mode_EOL' of type /CppImplementationDataTypes/Mode_EOLIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Mode_EOLIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.Mode_EOL);
  // Accumulate the static size of struct member 'Mode_AfterSales' of type /CppImplementationDataTypes/Mode_AfterSalesIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Mode_AfterSalesIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.Mode_AfterSales);
  // Accumulate the static size of struct member 'Mode_OnLine' of type /CppImplementationDataTypes/Mode_OnLineIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Mode_OnLineIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.Mode_OnLine);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/TCameraCalibInfoIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::TCameraCalibInfoIDT::TCameraCalibInfoIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'Mode_EOL' of type /CppImplementationDataTypes/Mode_EOLIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Mode_EOL),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Mode_EOLIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'Mode_AfterSales' of type /CppImplementationDataTypes/Mode_AfterSalesIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Mode_AfterSales),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Mode_AfterSalesIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'Mode_OnLine' of type /CppImplementationDataTypes/Mode_OnLineIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Mode_OnLine),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Mode_OnLineIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/TCameraCalibInfoIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TCameraCalibInfoIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::TCameraCalibInfoIDT::TCameraCalibInfoIDT const&) noexcept {
  return GetMaximumBufferSize<::TCameraCalibInfoIDT::TCameraCalibInfoIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/TCameraCalibInfoIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::TCameraCalibInfoIDT::TCameraCalibInfoIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'Mode_EOL' of type /CppImplementationDataTypes/Mode_EOLIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/Mode_EOLIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::Mode_EOLIDT::Mode_EOLIDT>{})  && 
  
  // Check static size status of struct member 'Mode_AfterSales' of type /CppImplementationDataTypes/Mode_AfterSalesIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/Mode_AfterSalesIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::Mode_AfterSalesIDT::Mode_AfterSalesIDT>{})  && 
  
  // Check static size status of struct member 'Mode_OnLine' of type /CppImplementationDataTypes/Mode_OnLineIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/Mode_OnLineIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::Mode_OnLineIDT::Mode_OnLineIDT>{}) 
  };
    return is_static_size;
}

}  // namespace TCameraCalibInfoIDT

#endif  // ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TCAMERACALIBINFOIDT_SERIALIZER_TCAMERACALIBINFOIDT_H_

