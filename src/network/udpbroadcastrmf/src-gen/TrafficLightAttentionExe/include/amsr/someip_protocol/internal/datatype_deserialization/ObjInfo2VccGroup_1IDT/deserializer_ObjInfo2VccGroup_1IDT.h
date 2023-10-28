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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_protocol/internal/datatype_deserialization/ObjInfo2VccGroup_1IDT/deserializer_ObjInfo2VccGroup_1IDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'ObjInfo2VccGroup_1IDT'
 *
 *      \details  /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJINFO2VCCGROUP_1IDT_DESERIALIZER_OBJINFO2VCCGROUP_1IDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJINFO2VCCGROUP_1IDT_DESERIALIZER_OBJINFO2VCCGROUP_1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ObjInfo2VccGroup_1IDT/impl_type_objinfo2vccgroup_1idt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace ObjInfo2VccGroup_1IDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::ObjInfo2VccGroup_1IDT::ObjInfo2VccGroup_1IDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'Typ' of type /CppImplementationDataTypes/ObjClassn3VccIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjClassn3VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.Typ);


  // Deserialize struct member 'Width' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Width);
  }

  // Deserialize struct member 'Length' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Length);
  }

  // Deserialize struct member 'Hei' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Hei);
  }

  // Deserialize struct member 'IndcrTurn' of type /CppImplementationDataTypes/IndcrTurn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrTurn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IndcrTurn);
  }

  // Deserialize struct member 'IndcrBrkLi' of type /CppImplementationDataTypes/LiSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IndcrBrkLi);
  }

  // Deserialize struct member 'IndcrHzrdLi' of type /CppImplementationDataTypes/LiSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IndcrHzrdLi);
  }

  // Deserialize struct member 'MtnPat' of type /CppImplementationDataTypes/ObjMtnPat1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPat1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.MtnPat);
  }

  // Deserialize struct member 'MtnPatHist' of type /CppImplementationDataTypes/ObjMtnPatHist1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPatHist1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.MtnPatHist);
  }

  // Deserialize struct member 'DstLatFromMidOfLaneSelf' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DstLatFromMidOfLaneSelf);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::ObjInfo2VccGroup_1IDT::ObjInfo2VccGroup_1IDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'Typ' of type /CppImplementationDataTypes/ObjClassn3VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjClassn3VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ObjClassn3VccIDT::ObjClassn3VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'Width' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'Length' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'Hei' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'IndcrTurn' of type /CppImplementationDataTypes/IndcrTurn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrTurn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::IndcrTurn1VccIDT::IndcrTurn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'IndcrBrkLi' of type /CppImplementationDataTypes/LiSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LiSts1VccIDT::LiSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'IndcrHzrdLi' of type /CppImplementationDataTypes/LiSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LiSts1VccIDT::LiSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'MtnPat' of type /CppImplementationDataTypes/ObjMtnPat1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPat1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ObjMtnPat1VccIDT::ObjMtnPat1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'MtnPatHist' of type /CppImplementationDataTypes/ObjMtnPatHist1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPatHist1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ObjMtnPatHist1VccIDT::ObjMtnPatHist1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DstLatFromMidOfLaneSelf' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{}) 
  };
  return static_size;
}

}  // namespace ObjInfo2VccGroup_1IDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJINFO2VCCGROUP_1IDT_DESERIALIZER_OBJINFO2VCCGROUP_1IDT_H_

