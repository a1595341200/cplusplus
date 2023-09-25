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
/**        \file  LocalizationFusionExe/include/amsr/someip_protocol/internal/datatype_deserialization/BrkPedlPsdRec/deserializer_BrkPedlPsdRec.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'BrkPedlPsdRec'
 *
 *      \details  /CppImplementationDataTypes/BrkPedlPsdRec
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_BRKPEDLPSDREC_DESERIALIZER_BRKPEDLPSDREC_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_BRKPEDLPSDREC_DESERIALIZER_BRKPEDLPSDREC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "BrkPedlPsdRec/impl_type_brkpedlpsdrec.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace BrkPedlPsdRec {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/BrkPedlPsdRec.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/BrkPedlPsdRec
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::BrkPedlPsdRec::BrkPedlPsdRec &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'BrkPedlPsd_ref' of type /CppImplementationDataTypes/BrkPedlPsd
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/BrkPedlPsd)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.BrkPedlPsd_ref);


  // Deserialize struct member 'BrkPedlPsdQf_ref' of type /CppImplementationDataTypes/BrkPedlPsdQf
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/BrkPedlPsdQf)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BrkPedlPsdQf_ref);
  }

  // Deserialize struct member 'BrkPedlPsdCntr_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BrkPedlPsdCntr_ref);
  }

  // Deserialize struct member 'BrkPedlPsdChks_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BrkPedlPsdChks_ref);
  }

  // Deserialize struct member 'BrkPedlNotPsdSafe_ref' of type /CppImplementationDataTypes/BrkPedlNotPsdSafe
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/BrkPedlNotPsdSafe)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BrkPedlNotPsdSafe_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/BrkPedlPsdRec.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::BrkPedlPsdRec::BrkPedlPsdRec>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'BrkPedlPsd_ref' of type /CppImplementationDataTypes/BrkPedlPsd
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/BrkPedlPsd)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::BrkPedlPsd::BrkPedlPsd>{})  + 
  
  // Accumulate the static size of struct member 'BrkPedlPsdQf_ref' of type /CppImplementationDataTypes/BrkPedlPsdQf
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/BrkPedlPsdQf)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::BrkPedlPsdQf::BrkPedlPsdQf>{})  + 
  
  // Accumulate the static size of struct member 'BrkPedlPsdCntr_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::BrkPedlPsdCntr::BrkPedlPsdCntr>{})  + 
  
  // Accumulate the static size of struct member 'BrkPedlPsdChks_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::BrkPedlPsdChks::BrkPedlPsdChks>{})  + 
  
  // Accumulate the static size of struct member 'BrkPedlNotPsdSafe_ref' of type /CppImplementationDataTypes/BrkPedlNotPsdSafe
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/BrkPedlNotPsdSafe)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::BrkPedlNotPsdSafe::BrkPedlNotPsdSafe>{}) 
  };
  return static_size;
}

}  // namespace BrkPedlPsdRec

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_BRKPEDLPSDREC_DESERIALIZER_BRKPEDLPSDREC_H_

