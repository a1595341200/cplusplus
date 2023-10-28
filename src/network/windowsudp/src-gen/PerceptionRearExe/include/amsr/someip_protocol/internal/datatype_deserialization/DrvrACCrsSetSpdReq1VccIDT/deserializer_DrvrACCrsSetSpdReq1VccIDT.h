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
/**        \file  PerceptionRearExe/include/amsr/someip_protocol/internal/datatype_deserialization/DrvrACCrsSetSpdReq1VccIDT/deserializer_DrvrACCrsSetSpdReq1VccIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'DrvrACCrsSetSpdReq1VccIDT'
 *
 *      \details  /CppImplementationDataTypes/DrvrACCrsSetSpdReq1VccIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_DRVRACCRSSETSPDREQ1VCCIDT_DESERIALIZER_DRVRACCRSSETSPDREQ1VCCIDT_H_
#define PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_DRVRACCRSSETSPDREQ1VCCIDT_DESERIALIZER_DRVRACCRSSETSPDREQ1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "DrvrACCrsSetSpdReq1VccIDT/impl_type_drvraccrssetspdreq1vccidt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace DrvrACCrsSetSpdReq1VccIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/DrvrACCrsSetSpdReq1VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/DrvrACCrsSetSpdReq1VccIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::DrvrACCrsSetSpdReq1VccIDT::DrvrACCrsSetSpdReq1VccIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'DrvrACCrsCtrlSetInSpdReq' of type /CppImplementationDataTypes/float
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.DrvrACCrsCtrlSetInSpdReq);


  // Deserialize struct member 'DrvrCrsSetSpdReq' of type /CppImplementationDataTypes/DrvrCrsAModReq1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DrvrCrsAModReq1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DrvrCrsSetSpdReq);
  }

  // Deserialize struct member 'SetSpdForCrsCtrlFctActive' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SetSpdForCrsCtrlFctActive);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/DrvrACCrsSetSpdReq1VccIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::DrvrACCrsSetSpdReq1VccIDT::DrvrACCrsSetSpdReq1VccIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'DrvrACCrsCtrlSetInSpdReq' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrCrsSetSpdReq' of type /CppImplementationDataTypes/DrvrCrsAModReq1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DrvrCrsAModReq1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DrvrCrsAModReq1VccIDT::DrvrCrsAModReq1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'SetSpdForCrsCtrlFctActive' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{}) 
  };
  return static_size;
}

}  // namespace DrvrACCrsSetSpdReq1VccIDT

#endif  // PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_DRVRACCRSSETSPDREQ1VCCIDT_DESERIALIZER_DRVRACCRSSETSPDREQ1VCCIDT_H_

