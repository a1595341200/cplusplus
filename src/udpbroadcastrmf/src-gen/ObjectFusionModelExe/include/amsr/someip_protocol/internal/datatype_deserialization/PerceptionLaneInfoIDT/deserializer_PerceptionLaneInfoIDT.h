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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/PerceptionLaneInfoIDT/deserializer_PerceptionLaneInfoIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'PerceptionLaneInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/PerceptionLaneInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_PERCEPTIONLANEINFOIDT_DESERIALIZER_PERCEPTIONLANEINFOIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_PERCEPTIONLANEINFOIDT_DESERIALIZER_PERCEPTIONLANEINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "PerceptionLaneInfoIDT/impl_type_perceptionlaneinfoidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneEventCam1IDT/deserializer_LaneEventCam1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneEventGroupCam1VccIDT/deserializer_LaneEventGroupCam1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneMkrCam1LeIDT/deserializer_LaneMkrCam1LeIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneMkrCam1RiIDT/deserializer_LaneMkrCam1RiIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneMkrCam1SecClsLeIDT/deserializer_LaneMkrCam1SecClsLeIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneMkrCam1SecClsRiIDT/deserializer_LaneMkrCam1SecClsRiIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneMkrTempCam1VccIDT/deserializer_LaneMkrTempCam1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RoadEdge1VccLeIDT/deserializer_RoadEdge1VccLeIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RoadEdge1VccRiIDT/deserializer_RoadEdge1VccRiIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace PerceptionLaneInfoIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/PerceptionLaneInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/PerceptionLaneInfoIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'LaneMkrCam1Le' of type /CppImplementationDataTypes/LaneMkrCam1LeIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1LeIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.LaneMkrCam1Le);


  // Deserialize struct member 'LaneMkrCam1Ri' of type /CppImplementationDataTypes/LaneMkrCam1RiIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1RiIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.LaneMkrCam1Ri);
  }

  // Deserialize struct member 'LaneMkrCam1SecClsLe' of type /CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.LaneMkrCam1SecClsLe);
  }

  // Deserialize struct member 'LaneMkrCam1SecClsRi' of type /CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.LaneMkrCam1SecClsRi);
  }

  // Deserialize struct member 'RoadEdge1VccLe' of type /CppImplementationDataTypes/RoadEdge1VccLeIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccLeIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.RoadEdge1VccLe);
  }

  // Deserialize struct member 'RoadEdge1VccRi' of type /CppImplementationDataTypes/RoadEdge1VccRiIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccRiIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.RoadEdge1VccRi);
  }

  // Deserialize struct member 'LaneEventCam1' of type /CppImplementationDataTypes/LaneEventCam1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/LaneEventCam1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.LaneEventCam1);
  }

  // Deserialize struct member 'LaneEventGroupCam1Vccs' of type /CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
        // Config of struct length field (/CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)

        >(reader, data.LaneEventGroupCam1Vccs);
  }

  // Deserialize struct member 'LaneMkrTempCam1Vccs' of type /CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
        // Config of struct length field (/CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)

        >(reader, data.LaneMkrTempCam1Vccs);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/PerceptionLaneInfoIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'LaneMkrCam1Le' of type /CppImplementationDataTypes/LaneMkrCam1LeIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1LeIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LaneMkrCam1LeIDT::LaneMkrCam1LeIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneMkrCam1Ri' of type /CppImplementationDataTypes/LaneMkrCam1RiIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1RiIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LaneMkrCam1RiIDT::LaneMkrCam1RiIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneMkrCam1SecClsLe' of type /CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LaneMkrCam1SecClsLeIDT::LaneMkrCam1SecClsLeIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneMkrCam1SecClsRi' of type /CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LaneMkrCam1SecClsRiIDT::LaneMkrCam1SecClsRiIDT>{})  + 
  
  // Accumulate the static size of struct member 'RoadEdge1VccLe' of type /CppImplementationDataTypes/RoadEdge1VccLeIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccLeIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::RoadEdge1VccLeIDT::RoadEdge1VccLeIDT>{})  + 
  
  // Accumulate the static size of struct member 'RoadEdge1VccRi' of type /CppImplementationDataTypes/RoadEdge1VccRiIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccRiIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::RoadEdge1VccRiIDT::RoadEdge1VccRiIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneEventCam1' of type /CppImplementationDataTypes/LaneEventCam1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LaneEventCam1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LaneEventCam1IDT::LaneEventCam1IDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneEventGroupCam1Vccs' of type /CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
                                // Config of struct length field (/CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)

                               >(deserialization::SizeToken<::Array_LaneEventGroupCam1VccIDT_5::Array_LaneEventGroupCam1VccIDT_5>{})  + 
  
  // Accumulate the static size of struct member 'LaneMkrTempCam1Vccs' of type /CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
                                // Config of struct length field (/CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)

                               >(deserialization::SizeToken<::Array_LaneMkrTempCam1VccIDT_2::Array_LaneMkrTempCam1VccIDT_2>{}) 
  };
  return static_size;
}

}  // namespace PerceptionLaneInfoIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_PERCEPTIONLANEINFOIDT_DESERIALIZER_PERCEPTIONLANEINFOIDT_H_

