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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_protocol/internal/datatype_deserialization/ObjInfo2VccGroup/deserializer_ObjInfo2VccGroup.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'ObjInfo2VccGroup'
 *
 *      \details  /CppImplementationDataTypes/ObjInfo2VccGroup
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJINFO2VCCGROUP_DESERIALIZER_OBJINFO2VCCGROUP_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJINFO2VCCGROUP_DESERIALIZER_OBJINFO2VCCGROUP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ObjInfo2VccGroup/impl_type_objinfo2vccgroup.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace ObjInfo2VccGroup {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/ObjInfo2VccGroup.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/ObjInfo2VccGroup
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::ObjInfo2VccGroup::ObjInfo2VccGroup &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'FuseObjTyp_ref' of type /CppImplementationDataTypes/FuseObjTyp
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/FuseObjTyp)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.FuseObjTyp_ref);


  // Deserialize struct member 'FuseObjWidth_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FuseObjWidth_ref);
  }

  // Deserialize struct member 'FuseObjLength_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FuseObjLength_ref);
  }

  // Deserialize struct member 'FuseObjHei_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FuseObjHei_ref);
  }

  // Deserialize struct member 'IndcrTurn_ref' of type /CppImplementationDataTypes/IndcrTurn
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrTurn)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IndcrTurn_ref);
  }

  // Deserialize struct member 'IndcrBrkLi_ref' of type /CppImplementationDataTypes/IndcrBrkLi
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrBrkLi)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IndcrBrkLi_ref);
  }

  // Deserialize struct member 'IndcrHzrdLi_ref' of type /CppImplementationDataTypes/IndcrHzrdLi
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrHzrdLi)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IndcrHzrdLi_ref);
  }

  // Deserialize struct member 'MtnPat_ref' of type /CppImplementationDataTypes/MtnPat
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/MtnPat)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.MtnPat_ref);
  }

  // Deserialize struct member 'MtnPatHist_ref' of type /CppImplementationDataTypes/MtnPatHist
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/MtnPatHist)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.MtnPatHist_ref);
  }

  // Deserialize struct member 'DstLatFromMidOfLaneSelf_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DstLatFromMidOfLaneSelf_ref);
  }

  // Deserialize struct member 'ObjInfoChks_ref' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ObjInfoChks_ref);
  }

  // Deserialize struct member 'ObjInfoCntr_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ObjInfoCntr_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/ObjInfo2VccGroup.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::ObjInfo2VccGroup::ObjInfo2VccGroup>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'FuseObjTyp_ref' of type /CppImplementationDataTypes/FuseObjTyp
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FuseObjTyp)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FuseObjTyp::FuseObjTyp>{})  + 
  
  // Accumulate the static size of struct member 'FuseObjWidth_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FuseObjWidth::FuseObjWidth>{})  + 
  
  // Accumulate the static size of struct member 'FuseObjLength_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FuseObjLength::FuseObjLength>{})  + 
  
  // Accumulate the static size of struct member 'FuseObjHei_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FuseObjHei::FuseObjHei>{})  + 
  
  // Accumulate the static size of struct member 'IndcrTurn_ref' of type /CppImplementationDataTypes/IndcrTurn
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrTurn)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::IndcrTurn::IndcrTurn>{})  + 
  
  // Accumulate the static size of struct member 'IndcrBrkLi_ref' of type /CppImplementationDataTypes/IndcrBrkLi
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrBrkLi)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::IndcrBrkLi::IndcrBrkLi>{})  + 
  
  // Accumulate the static size of struct member 'IndcrHzrdLi_ref' of type /CppImplementationDataTypes/IndcrHzrdLi
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrHzrdLi)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::IndcrHzrdLi::IndcrHzrdLi>{})  + 
  
  // Accumulate the static size of struct member 'MtnPat_ref' of type /CppImplementationDataTypes/MtnPat
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/MtnPat)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::MtnPat::MtnPat>{})  + 
  
  // Accumulate the static size of struct member 'MtnPatHist_ref' of type /CppImplementationDataTypes/MtnPatHist
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/MtnPatHist)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::MtnPatHist::MtnPatHist>{})  + 
  
  // Accumulate the static size of struct member 'DstLatFromMidOfLaneSelf_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DstLatFromMidOfLaneSelf::DstLatFromMidOfLaneSelf>{})  + 
  
  // Accumulate the static size of struct member 'ObjInfoChks_ref' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ObjInfoChks::ObjInfoChks>{})  + 
  
  // Accumulate the static size of struct member 'ObjInfoCntr_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ObjInfoCntr::ObjInfoCntr>{}) 
  };
  return static_size;
}

}  // namespace ObjInfo2VccGroup

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJINFO2VCCGROUP_DESERIALIZER_OBJINFO2VCCGROUP_H_

