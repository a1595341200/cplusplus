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
/**        \file  EDRExe/include/amsr/someip_protocol/internal/datatype_deserialization/SteerExtFctStsRec1VccIDT/deserializer_SteerExtFctStsRec1VccIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'SteerExtFctStsRec1VccIDT'
 *
 *      \details  /CppImplementationDataTypes/SteerExtFctStsRec1VccIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_STEEREXTFCTSTSREC1VCCIDT_DESERIALIZER_STEEREXTFCTSTSREC1VCCIDT_H_
#define EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_STEEREXTFCTSTSREC1VCCIDT_DESERIALIZER_STEEREXTFCTSTSREC1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "SteerExtFctStsRec1VccIDT/impl_type_steerextfctstsrec1vccidt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace SteerExtFctStsRec1VccIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/SteerExtFctStsRec1VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/SteerExtFctStsRec1VccIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::SteerExtFctStsRec1VccIDT::SteerExtFctStsRec1VccIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'LatCtrlReqNotInRange' of type /CppImplementationDataTypes/Boolean1VccIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.LatCtrlReqNotInRange);


  // Deserialize struct member 'LatAgReqNotInRange' of type /CppImplementationDataTypes/Boolean1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LatAgReqNotInRange);
  }

  // Deserialize struct member 'ExtFctUpperLimActive' of type /CppImplementationDataTypes/Boolean1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ExtFctUpperLimActive);
  }

  // Deserialize struct member 'ExtFctLowerLimActive' of type /CppImplementationDataTypes/Boolean1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ExtFctLowerLimActive);
  }

  // Deserialize struct member 'ExtSafeLimActive' of type /CppImplementationDataTypes/Boolean1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ExtSafeLimActive);
  }

  // Deserialize struct member 'DrvrSteerOvrd' of type /CppImplementationDataTypes/Boolean1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DrvrSteerOvrd);
  }

  // Deserialize struct member 'SteerExtFctStsChks' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SteerExtFctStsChks);
  }

  // Deserialize struct member 'SteerExtFctStsChtr' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SteerExtFctStsChtr);
  }

  // Deserialize struct member 'ExtFctRateLimActive' of type /CppImplementationDataTypes/Boolean1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ExtFctRateLimActive);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/SteerExtFctStsRec1VccIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::SteerExtFctStsRec1VccIDT::SteerExtFctStsRec1VccIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'LatCtrlReqNotInRange' of type /CppImplementationDataTypes/Boolean1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Boolean1VccIDT::Boolean1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LatAgReqNotInRange' of type /CppImplementationDataTypes/Boolean1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Boolean1VccIDT::Boolean1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ExtFctUpperLimActive' of type /CppImplementationDataTypes/Boolean1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Boolean1VccIDT::Boolean1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ExtFctLowerLimActive' of type /CppImplementationDataTypes/Boolean1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Boolean1VccIDT::Boolean1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ExtSafeLimActive' of type /CppImplementationDataTypes/Boolean1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Boolean1VccIDT::Boolean1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrSteerOvrd' of type /CppImplementationDataTypes/Boolean1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Boolean1VccIDT::Boolean1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'SteerExtFctStsChks' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'SteerExtFctStsChtr' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'ExtFctRateLimActive' of type /CppImplementationDataTypes/Boolean1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Boolean1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Boolean1VccIDT::Boolean1VccIDT>{}) 
  };
  return static_size;
}

}  // namespace SteerExtFctStsRec1VccIDT

#endif  // EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_STEEREXTFCTSTSREC1VCCIDT_DESERIALIZER_STEEREXTFCTSTSREC1VCCIDT_H_

