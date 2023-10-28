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
/**        \file  RVDCExe/include/amsr/someip_protocol/internal/datatype_deserialization/s_EDRInfo_tIDT/deserializer_s_EDRInfo_tIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 's_EDRInfo_tIDT'
 *
 *      \details  /CppImplementationDataTypes/s_EDRInfo_tIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef RVDCEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_S_EDRINFO_TIDT_DESERIALIZER_S_EDRINFO_TIDT_H_
#define RVDCEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_S_EDRINFO_TIDT_DESERIALIZER_S_EDRINFO_TIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "s_EDRInfo_tIDT/impl_type_s_edrinfo_tidt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace s_EDRInfo_tIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/s_EDRInfo_tIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/s_EDRInfo_tIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::s_EDRInfo_tIDT::s_EDRInfo_tIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'LogName' of type /CppImplementationDataTypes/Array_uint8IDT_64
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of array length field (/CppImplementationDataTypes/Array_uint8IDT_64)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder
        
        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)

          >(reader, data.LogName);


  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/s_EDRInfo_tIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 * \return Returns the static size of the struct in bytes.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::s_EDRInfo_tIDT::s_EDRInfo_tIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'LogName' of type /CppImplementationDataTypes/Array_uint8IDT_64
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_uint8IDT_64)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder
                                
                                // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint8_t)

                               >(deserialization::SizeToken<::Array_uint8IDT_64::Array_uint8IDT_64>{}) 
  };
  return static_size;
}

}  // namespace s_EDRInfo_tIDT

#endif  // RVDCEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_S_EDRINFO_TIDT_DESERIALIZER_S_EDRINFO_TIDT_H_

