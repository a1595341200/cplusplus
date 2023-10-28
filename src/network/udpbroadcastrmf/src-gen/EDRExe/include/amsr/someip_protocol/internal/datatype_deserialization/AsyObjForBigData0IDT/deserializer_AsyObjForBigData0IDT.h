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
/**        \file  EDRExe/include/amsr/someip_protocol/internal/datatype_deserialization/AsyObjForBigData0IDT/deserializer_AsyObjForBigData0IDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'AsyObjForBigData0IDT'
 *
 *      \details  /CppImplementationDataTypes/AsyObjForBigData0IDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_ASYOBJFORBIGDATA0IDT_DESERIALIZER_ASYOBJFORBIGDATA0IDT_H_
#define EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_ASYOBJFORBIGDATA0IDT_DESERIALIZER_ASYOBJFORBIGDATA0IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "AsyObjForBigData0IDT/impl_type_asyobjforbigdata0idt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace AsyObjForBigData0IDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/AsyObjForBigData0IDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/AsyObjForBigData0IDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::AsyObjForBigData0IDT::AsyObjForBigData0IDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'Type1Vcc' of type /CppImplementationDataTypes/AsyObjType1VccIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyObjType1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.Type1Vcc);


  // Deserialize struct member 'BigDataConfidence' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BigDataConfidence);
  }

  // Deserialize struct member 'TTC' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TTC);
  }

  // Deserialize struct member 'RlvtLatDst' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RlvtLatDst);
  }

  // Deserialize struct member 'RlvtLgtDst' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RlvtLgtDst);
  }

  // Deserialize struct member 'AbsLatSpd' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AbsLatSpd);
  }

  // Deserialize struct member 'SnsrSrcOfAbsLatSpd' of type /CppImplementationDataTypes/SnsrSrc1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SnsrSrc1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SnsrSrcOfAbsLatSpd);
  }

  // Deserialize struct member 'AbsLgtSpd' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AbsLgtSpd);
  }

  // Deserialize struct member 'SnsrSrcOfAbsLgtSpd' of type /CppImplementationDataTypes/SnsrSrc1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SnsrSrc1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SnsrSrcOfAbsLgtSpd);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/AsyObjForBigData0IDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::AsyObjForBigData0IDT::AsyObjForBigData0IDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'Type1Vcc' of type /CppImplementationDataTypes/AsyObjType1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyObjType1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyObjType1VccIDT::AsyObjType1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'BigDataConfidence' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'TTC' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'RlvtLatDst' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'RlvtLgtDst' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'AbsLatSpd' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'SnsrSrcOfAbsLatSpd' of type /CppImplementationDataTypes/SnsrSrc1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SnsrSrc1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SnsrSrc1VccIDT::SnsrSrc1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AbsLgtSpd' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'SnsrSrcOfAbsLgtSpd' of type /CppImplementationDataTypes/SnsrSrc1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SnsrSrc1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SnsrSrc1VccIDT::SnsrSrc1VccIDT>{}) 
  };
  return static_size;
}

}  // namespace AsyObjForBigData0IDT

#endif  // EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_ASYOBJFORBIGDATA0IDT_DESERIALIZER_ASYOBJFORBIGDATA0IDT_H_

