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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_protocol/internal/datatype_deserialization/ObjPpty2VccGroup_1IDT/deserializer_ObjPpty2VccGroup_1IDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'ObjPpty2VccGroup_1IDT'
 *
 *      \details  /CppImplementationDataTypes/ObjPpty2VccGroup_1IDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJPPTY2VCCGROUP_1IDT_DESERIALIZER_OBJPPTY2VCCGROUP_1IDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJPPTY2VCCGROUP_1IDT_DESERIALIZER_OBJPPTY2VCCGROUP_1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ObjPpty2VccGroup_1IDT/impl_type_objppty2vccgroup_1idt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace ObjPpty2VccGroup_1IDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/ObjPpty2VccGroup_1IDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/ObjPpty2VccGroup_1IDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::ObjPpty2VccGroup_1IDT::ObjPpty2VccGroup_1IDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'Idn' of type /CppImplementationDataTypes/uint8_t
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.Idn);


  // Deserialize struct member 'VisnId' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VisnId);
  }

  // Deserialize struct member 'Sts' of type /CppImplementationDataTypes/SnsrDataSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SnsrDataSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Sts);
  }

  // Deserialize struct member 'MdlOfMtn' of type /CppImplementationDataTypes/ObjPpty1VccMdlOfMtn0IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjPpty1VccMdlOfMtn0IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.MdlOfMtn);
  }

  // Deserialize struct member 'TrfcSceno' of type /CppImplementationDataTypes/ObjPpty1VccTrfcSceno0IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjPpty1VccTrfcSceno0IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TrfcSceno);
  }

  // Deserialize struct member 'CllsnMtgtnByBrkgPrimQly' of type /CppImplementationDataTypes/Relbl4VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Relbl4VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CllsnMtgtnByBrkgPrimQly);
  }

  // Deserialize struct member 'CllsnMtgtnByBrkgSecQly' of type /CppImplementationDataTypes/Relbl1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Relbl1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CllsnMtgtnByBrkgSecQly);
  }

  // Deserialize struct member 'CllsnWarnFwdQly' of type /CppImplementationDataTypes/Relbl1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Relbl1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CllsnWarnFwdQly);
  }

  // Deserialize struct member 'ObjTrfcJamAssiQly' of type /CppImplementationDataTypes/ObjPpty1VccTrfcJamAssiQly0IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjPpty1VccTrfcJamAssiQly0IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ObjTrfcJamAssiQly);
  }

  // Deserialize struct member 'DstLatFromMidOfLaneSelfQly' of type /CppImplementationDataTypes/Relbl3VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Relbl3VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DstLatFromMidOfLaneSelfQly);
  }

  // Deserialize struct member 'EmgyLaneKeepAidPosnQly' of type /CppImplementationDataTypes/ObjPpty1VccEmgyLaneKeepAidPosnQly0IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjPpty1VccEmgyLaneKeepAidPosnQly0IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.EmgyLaneKeepAidPosnQly);
  }

  // Deserialize struct member 'PosnLgtStdDe' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PosnLgtStdDe);
  }

  // Deserialize struct member 'PosnLatStdDe' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PosnLatStdDe);
  }

  // Deserialize struct member 'AgDirStdDe' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AgDirStdDe);
  }

  // Deserialize struct member 'SpdStdDe' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SpdStdDe);
  }

  // Deserialize struct member 'AStdDe' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AStdDe);
  }

  // Deserialize struct member 'FusnSrc' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FusnSrc);
  }

  // Deserialize struct member 'TimeStamp' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TimeStamp);
  }

  // Deserialize struct member 'Age' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Age);
  }

  // Deserialize struct member 'ExistConf' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ExistConf);
  }

  // Deserialize struct member 'ClassConf' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ClassConf);
  }

  // Deserialize struct member 'NearestSide' of type /CppImplementationDataTypes/ObjNearestSide1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjNearestSide1IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.NearestSide);
  }

  // Deserialize struct member 'DistanceToLeftLaneLine' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DistanceToLeftLaneLine);
  }

  // Deserialize struct member 'DistanceToRightLaneLine' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DistanceToRightLaneLine);
  }

  // Deserialize struct member 'DistanceToLeftLaneLineSTD' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DistanceToLeftLaneLineSTD);
  }

  // Deserialize struct member 'DistanceToRightLaneLineSTD' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DistanceToRightLaneLineSTD);
  }

  // Deserialize struct member 'LaneAssignment' of type /CppImplementationDataTypes/ObjLaneAssignment1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjLaneAssignment1IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneAssignment);
  }

  // Deserialize struct member 'ObjLostSts' of type /CppImplementationDataTypes/e_ObjLostSts_tIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/e_ObjLostSts_tIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ObjLostSts);
  }

  // Deserialize struct member 'Score' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Score);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/ObjPpty2VccGroup_1IDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::ObjPpty2VccGroup_1IDT::ObjPpty2VccGroup_1IDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'Idn' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'VisnId' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'Sts' of type /CppImplementationDataTypes/SnsrDataSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SnsrDataSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SnsrDataSts1VccIDT::SnsrDataSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'MdlOfMtn' of type /CppImplementationDataTypes/ObjPpty1VccMdlOfMtn0IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjPpty1VccMdlOfMtn0IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ObjPpty1VccMdlOfMtn0IDT::ObjPpty1VccMdlOfMtn0IDT>{})  + 
  
  // Accumulate the static size of struct member 'TrfcSceno' of type /CppImplementationDataTypes/ObjPpty1VccTrfcSceno0IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjPpty1VccTrfcSceno0IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ObjPpty1VccTrfcSceno0IDT::ObjPpty1VccTrfcSceno0IDT>{})  + 
  
  // Accumulate the static size of struct member 'CllsnMtgtnByBrkgPrimQly' of type /CppImplementationDataTypes/Relbl4VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Relbl4VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Relbl4VccIDT::Relbl4VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CllsnMtgtnByBrkgSecQly' of type /CppImplementationDataTypes/Relbl1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Relbl1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Relbl1VccIDT::Relbl1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CllsnWarnFwdQly' of type /CppImplementationDataTypes/Relbl1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Relbl1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Relbl1VccIDT::Relbl1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ObjTrfcJamAssiQly' of type /CppImplementationDataTypes/ObjPpty1VccTrfcJamAssiQly0IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjPpty1VccTrfcJamAssiQly0IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ObjPpty1VccTrfcJamAssiQly0IDT::ObjPpty1VccTrfcJamAssiQly0IDT>{})  + 
  
  // Accumulate the static size of struct member 'DstLatFromMidOfLaneSelfQly' of type /CppImplementationDataTypes/Relbl3VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Relbl3VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Relbl3VccIDT::Relbl3VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'EmgyLaneKeepAidPosnQly' of type /CppImplementationDataTypes/ObjPpty1VccEmgyLaneKeepAidPosnQly0IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjPpty1VccEmgyLaneKeepAidPosnQly0IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ObjPpty1VccEmgyLaneKeepAidPosnQly0IDT::ObjPpty1VccEmgyLaneKeepAidPosnQly0IDT>{})  + 
  
  // Accumulate the static size of struct member 'PosnLgtStdDe' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'PosnLatStdDe' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'AgDirStdDe' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'SpdStdDe' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'AStdDe' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'FusnSrc' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'TimeStamp' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'Age' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'ExistConf' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'ClassConf' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'NearestSide' of type /CppImplementationDataTypes/ObjNearestSide1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjNearestSide1IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ObjNearestSide1IDT::ObjNearestSide1IDT>{})  + 
  
  // Accumulate the static size of struct member 'DistanceToLeftLaneLine' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'DistanceToRightLaneLine' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'DistanceToLeftLaneLineSTD' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'DistanceToRightLaneLineSTD' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneAssignment' of type /CppImplementationDataTypes/ObjLaneAssignment1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjLaneAssignment1IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ObjLaneAssignment1IDT::ObjLaneAssignment1IDT>{})  + 
  
  // Accumulate the static size of struct member 'ObjLostSts' of type /CppImplementationDataTypes/e_ObjLostSts_tIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/e_ObjLostSts_tIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::e_ObjLostSts_tIDT::e_ObjLostSts_tIDT>{})  + 
  
  // Accumulate the static size of struct member 'Score' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{}) 
  };
  return static_size;
}

}  // namespace ObjPpty2VccGroup_1IDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJPPTY2VCCGROUP_1IDT_DESERIALIZER_OBJPPTY2VCCGROUP_1IDT_H_

