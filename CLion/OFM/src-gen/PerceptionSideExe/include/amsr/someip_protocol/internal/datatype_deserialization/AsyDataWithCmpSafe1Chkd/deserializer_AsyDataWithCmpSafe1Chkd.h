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
/**        \file  PerceptionSideExe/include/amsr/someip_protocol/internal/datatype_deserialization/AsyDataWithCmpSafe1Chkd/deserializer_AsyDataWithCmpSafe1Chkd.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'AsyDataWithCmpSafe1Chkd'
 *
 *      \details  /CppImplementationDataTypes/AsyDataWithCmpSafe1Chkd
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_ASYDATAWITHCMPSAFE1CHKD_DESERIALIZER_ASYDATAWITHCMPSAFE1CHKD_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_ASYDATAWITHCMPSAFE1CHKD_DESERIALIZER_ASYDATAWITHCMPSAFE1CHKD_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "AsyDataWithCmpSafe1Chkd/impl_type_asydatawithcmpsafe1chkd.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace AsyDataWithCmpSafe1Chkd {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/AsyDataWithCmpSafe1Chkd.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/AsyDataWithCmpSafe1Chkd
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::AsyDataWithCmpSafe1Chkd::AsyDataWithCmpSafe1Chkd &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'Age1_ref' of type /CppImplementationDataTypes/uint16_t
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.Age1_ref);


  // Deserialize struct member 'IsUpdated_ref' of type /CppImplementationDataTypes/IsUpdated
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/IsUpdated)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IsUpdated_ref);
  }

  // Deserialize struct member 'IsUpdatedAndValid_ref' of type /CppImplementationDataTypes/IsUpdatedAndValid
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/IsUpdatedAndValid)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IsUpdatedAndValid_ref);
  }

  // Deserialize struct member 'IsValid_ref' of type /CppImplementationDataTypes/IsValid
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/IsValid)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IsValid_ref);
  }

  // Deserialize struct member 'ALat1Qf2_ref' of type /CppImplementationDataTypes/ALat1Qf2
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ALat1Qf2)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ALat1Qf2_ref);
  }

  // Deserialize struct member 'ALatWithCmp_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ALatWithCmp_ref);
  }

  // Deserialize struct member 'ALgt1Qf2_ref' of type /CppImplementationDataTypes/ALgt1Qf2
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ALgt1Qf2)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ALgt1Qf2_ref);
  }

  // Deserialize struct member 'GrdtOfALgt_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.GrdtOfALgt_ref);
  }

  // Deserialize struct member 'YawRate1Qf2_ref' of type /CppImplementationDataTypes/YawRate1Qf2
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/YawRate1Qf2)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.YawRate1Qf2_ref);
  }

  // Deserialize struct member 'YawRateWithCmp_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.YawRateWithCmp_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/AsyDataWithCmpSafe1Chkd.
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
 */
template <typename TpPack>
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::AsyDataWithCmpSafe1Chkd::AsyDataWithCmpSafe1Chkd>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'Age1_ref' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Age1::Age1>{})  + 
  
  // Accumulate the static size of struct member 'IsUpdated_ref' of type /CppImplementationDataTypes/IsUpdated
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/IsUpdated)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::IsUpdated::IsUpdated>{})  + 
  
  // Accumulate the static size of struct member 'IsUpdatedAndValid_ref' of type /CppImplementationDataTypes/IsUpdatedAndValid
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/IsUpdatedAndValid)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::IsUpdatedAndValid::IsUpdatedAndValid>{})  + 
  
  // Accumulate the static size of struct member 'IsValid_ref' of type /CppImplementationDataTypes/IsValid
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/IsValid)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::IsValid::IsValid>{})  + 
  
  // Accumulate the static size of struct member 'ALat1Qf2_ref' of type /CppImplementationDataTypes/ALat1Qf2
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ALat1Qf2)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ALat1Qf2::ALat1Qf2>{})  + 
  
  // Accumulate the static size of struct member 'ALatWithCmp_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ALatWithCmp::ALatWithCmp>{})  + 
  
  // Accumulate the static size of struct member 'ALgt1Qf2_ref' of type /CppImplementationDataTypes/ALgt1Qf2
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ALgt1Qf2)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ALgt1Qf2::ALgt1Qf2>{})  + 
  
  // Accumulate the static size of struct member 'GrdtOfALgt_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::GrdtOfALgt::GrdtOfALgt>{})  + 
  
  // Accumulate the static size of struct member 'YawRate1Qf2_ref' of type /CppImplementationDataTypes/YawRate1Qf2
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/YawRate1Qf2)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::YawRate1Qf2::YawRate1Qf2>{})  + 
  
  // Accumulate the static size of struct member 'YawRateWithCmp_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::YawRateWithCmp::YawRateWithCmp>{}) 
  };
  return static_size;
}

}  // namespace AsyDataWithCmpSafe1Chkd

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_ASYDATAWITHCMPSAFE1CHKD_DESERIALIZER_ASYDATAWITHCMPSAFE1CHKD_H_

