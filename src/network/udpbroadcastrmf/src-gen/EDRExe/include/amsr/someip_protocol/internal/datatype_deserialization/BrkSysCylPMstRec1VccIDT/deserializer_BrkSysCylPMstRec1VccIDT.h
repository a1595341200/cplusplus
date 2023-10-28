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
/**        \file  EDRExe/include/amsr/someip_protocol/internal/datatype_deserialization/BrkSysCylPMstRec1VccIDT/deserializer_BrkSysCylPMstRec1VccIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'BrkSysCylPMstRec1VccIDT'
 *
 *      \details  /CppImplementationDataTypes/BrkSysCylPMstRec1VccIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_BRKSYSCYLPMSTREC1VCCIDT_DESERIALIZER_BRKSYSCYLPMSTREC1VCCIDT_H_
#define EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_BRKSYSCYLPMSTREC1VCCIDT_DESERIALIZER_BRKSYSCYLPMSTREC1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "BrkSysCylPMstRec1VccIDT/impl_type_brksyscylpmstrec1vccidt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace BrkSysCylPMstRec1VccIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/BrkSysCylPMstRec1VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/BrkSysCylPMstRec1VccIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::BrkSysCylPMstRec1VccIDT::BrkSysCylPMstRec1VccIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'Act' of type /CppImplementationDataTypes/float
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.Act);


  // Deserialize struct member 'ActQf' of type /CppImplementationDataTypes/GenQf1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/GenQf1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ActQf);
  }

  // Deserialize struct member 'Tar' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Tar);
  }

  // Deserialize struct member 'Virt' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Virt);
  }

  // Deserialize struct member 'VirtQf' of type /CppImplementationDataTypes/GenQf1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/GenQf1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VirtQf);
  }

  // Deserialize struct member 'BrkSysCylPMstRecChks' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BrkSysCylPMstRecChks);
  }

  // Deserialize struct member 'BrkSysCylPMstRecCntr' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BrkSysCylPMstRecCntr);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/BrkSysCylPMstRec1VccIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::BrkSysCylPMstRec1VccIDT::BrkSysCylPMstRec1VccIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'Act' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'ActQf' of type /CppImplementationDataTypes/GenQf1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/GenQf1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::GenQf1VccIDT::GenQf1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'Tar' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'Virt' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'VirtQf' of type /CppImplementationDataTypes/GenQf1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/GenQf1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::GenQf1VccIDT::GenQf1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'BrkSysCylPMstRecChks' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'BrkSysCylPMstRecCntr' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{}) 
  };
  return static_size;
}

}  // namespace BrkSysCylPMstRec1VccIDT

#endif  // EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_BRKSYSCYLPMSTREC1VCCIDT_DESERIALIZER_BRKSYSCYLPMSTREC1VCCIDT_H_

