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
/**        \file  TrafficSignInformationExe/include/amsr/someip_protocol/internal/datatype_deserialization/WhlInfoGroup/deserializer_WhlInfoGroup.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'WhlInfoGroup'
 *
 *      \details  /CppImplementationDataTypes/WhlInfoGroup
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_WHLINFOGROUP_DESERIALIZER_WHLINFOGROUP_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_WHLINFOGROUP_DESERIALIZER_WHLINFOGROUP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "WhlInfoGroup/impl_type_whlinfogroup.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace WhlInfoGroup {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/WhlInfoGroup.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/WhlInfoGroup
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::WhlInfoGroup::WhlInfoGroup &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'WhlSpdCircumlFrntLe_ref' of type /CppImplementationDataTypes/float
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.WhlSpdCircumlFrntLe_ref);


  // Deserialize struct member 'WhlSpdCircumlFrntLeQf_ref' of type /CppImplementationDataTypes/WhlSpdCircumlFrntLeQf
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlSpdCircumlFrntLeQf)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WhlSpdCircumlFrntLeQf_ref);
  }

  // Deserialize struct member 'WhlSpdCircumlFrntRi_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WhlSpdCircumlFrntRi_ref);
  }

  // Deserialize struct member 'WhlSpdCircumlFrntRiQf_ref' of type /CppImplementationDataTypes/WhlSpdCircumlFrntRiQf
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlSpdCircumlFrntRiQf)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WhlSpdCircumlFrntRiQf_ref);
  }

  // Deserialize struct member 'WhlSpdCircumlReLe_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WhlSpdCircumlReLe_ref);
  }

  // Deserialize struct member 'WhlSpdCircumlReLeQf_ref' of type /CppImplementationDataTypes/WhlSpdCircumlReLeQf
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlSpdCircumlReLeQf)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WhlSpdCircumlReLeQf_ref);
  }

  // Deserialize struct member 'WhlSpdCircumlReRi_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WhlSpdCircumlReRi_ref);
  }

  // Deserialize struct member 'WhlSpdCircumlReRiQf_ref' of type /CppImplementationDataTypes/WhlSpdCircumlReRiQf
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlSpdCircumlReRiQf)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WhlSpdCircumlReRiQf_ref);
  }

  // Deserialize struct member 'WhlDirRotlFrntLe_ref' of type /CppImplementationDataTypes/WhlDirRotlFrntLe
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlDirRotlFrntLe)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WhlDirRotlFrntLe_ref);
  }

  // Deserialize struct member 'WhlDirRotlFrntRi_ref' of type /CppImplementationDataTypes/WhlDirRotlFrntRi
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlDirRotlFrntRi)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WhlDirRotlFrntRi_ref);
  }

  // Deserialize struct member 'WhlDirRotlReLe_ref' of type /CppImplementationDataTypes/WhlDirRotlReLe
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlDirRotlReLe)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WhlDirRotlReLe_ref);
  }

  // Deserialize struct member 'WhlDirRotlReRi_ref' of type /CppImplementationDataTypes/WhlDirRotlReRi
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlDirRotlReRi)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WhlDirRotlReRi_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/WhlInfoGroup.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::WhlInfoGroup::WhlInfoGroup>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'WhlSpdCircumlFrntLe_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlSpdCircumlFrntLe::WhlSpdCircumlFrntLe>{})  + 
  
  // Accumulate the static size of struct member 'WhlSpdCircumlFrntLeQf_ref' of type /CppImplementationDataTypes/WhlSpdCircumlFrntLeQf
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlSpdCircumlFrntLeQf)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlSpdCircumlFrntLeQf::WhlSpdCircumlFrntLeQf>{})  + 
  
  // Accumulate the static size of struct member 'WhlSpdCircumlFrntRi_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlSpdCircumlFrntRi::WhlSpdCircumlFrntRi>{})  + 
  
  // Accumulate the static size of struct member 'WhlSpdCircumlFrntRiQf_ref' of type /CppImplementationDataTypes/WhlSpdCircumlFrntRiQf
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlSpdCircumlFrntRiQf)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlSpdCircumlFrntRiQf::WhlSpdCircumlFrntRiQf>{})  + 
  
  // Accumulate the static size of struct member 'WhlSpdCircumlReLe_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlSpdCircumlReLe::WhlSpdCircumlReLe>{})  + 
  
  // Accumulate the static size of struct member 'WhlSpdCircumlReLeQf_ref' of type /CppImplementationDataTypes/WhlSpdCircumlReLeQf
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlSpdCircumlReLeQf)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlSpdCircumlReLeQf::WhlSpdCircumlReLeQf>{})  + 
  
  // Accumulate the static size of struct member 'WhlSpdCircumlReRi_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlSpdCircumlReRi::WhlSpdCircumlReRi>{})  + 
  
  // Accumulate the static size of struct member 'WhlSpdCircumlReRiQf_ref' of type /CppImplementationDataTypes/WhlSpdCircumlReRiQf
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlSpdCircumlReRiQf)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlSpdCircumlReRiQf::WhlSpdCircumlReRiQf>{})  + 
  
  // Accumulate the static size of struct member 'WhlDirRotlFrntLe_ref' of type /CppImplementationDataTypes/WhlDirRotlFrntLe
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlDirRotlFrntLe)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlDirRotlFrntLe::WhlDirRotlFrntLe>{})  + 
  
  // Accumulate the static size of struct member 'WhlDirRotlFrntRi_ref' of type /CppImplementationDataTypes/WhlDirRotlFrntRi
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlDirRotlFrntRi)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlDirRotlFrntRi::WhlDirRotlFrntRi>{})  + 
  
  // Accumulate the static size of struct member 'WhlDirRotlReLe_ref' of type /CppImplementationDataTypes/WhlDirRotlReLe
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlDirRotlReLe)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlDirRotlReLe::WhlDirRotlReLe>{})  + 
  
  // Accumulate the static size of struct member 'WhlDirRotlReRi_ref' of type /CppImplementationDataTypes/WhlDirRotlReRi
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WhlDirRotlReRi)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WhlDirRotlReRi::WhlDirRotlReRi>{}) 
  };
  return static_size;
}

}  // namespace WhlInfoGroup

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_WHLINFOGROUP_DESERIALIZER_WHLINFOGROUP_H_

