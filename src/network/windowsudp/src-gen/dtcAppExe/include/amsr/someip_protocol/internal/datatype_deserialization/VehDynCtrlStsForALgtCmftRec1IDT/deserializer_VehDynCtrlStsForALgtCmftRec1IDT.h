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
/**        \file  dtcAppExe/include/amsr/someip_protocol/internal/datatype_deserialization/VehDynCtrlStsForALgtCmftRec1IDT/deserializer_VehDynCtrlStsForALgtCmftRec1IDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'VehDynCtrlStsForALgtCmftRec1IDT'
 *
 *      \details  /CppImplementationDataTypes/VehDynCtrlStsForALgtCmftRec1IDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef DTCAPPEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_DESERIALIZER_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_H_
#define DTCAPPEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_DESERIALIZER_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "VehDynCtrlStsForALgtCmftRec1IDT/impl_type_vehdynctrlstsforalgtcmftrec1idt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace VehDynCtrlStsForALgtCmftRec1IDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/VehDynCtrlStsForALgtCmftRec1IDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/VehDynCtrlStsForALgtCmftRec1IDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::VehDynCtrlStsForALgtCmftRec1IDT::VehDynCtrlStsForALgtCmftRec1IDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'VehDynCtrlStsNotEna' of type /CppImplementationDataTypes/Flg1VccIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/Flg1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.VehDynCtrlStsNotEna);


  // Deserialize struct member 'VehDynCtrlStsDend' of type /CppImplementationDataTypes/Flg1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Flg1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehDynCtrlStsDend);
  }

  // Deserialize struct member 'VehDynCtrlStsForBrkPrecActv' of type /CppImplementationDataTypes/Flg1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Flg1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehDynCtrlStsForBrkPrecActv);
  }

  // Deserialize struct member 'VehDynCtrlStsForWhlBrkWrm' of type /CppImplementationDataTypes/Flg1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Flg1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehDynCtrlStsForWhlBrkWrm);
  }

  // Deserialize struct member 'VehDynCtrlStsForBrkActv' of type /CppImplementationDataTypes/Flg1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Flg1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehDynCtrlStsForBrkActv);
  }

  // Deserialize struct member 'VehDynCtrlStsForStandStillMgrForPark' of type /CppImplementationDataTypes/StandStillMgrStsForPark2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/StandStillMgrStsForPark2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehDynCtrlStsForStandStillMgrForPark);
  }

  // Deserialize struct member 'VehDynCtrlStsChks' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehDynCtrlStsChks);
  }

  // Deserialize struct member 'VehDynCtrlStsCntr' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehDynCtrlStsCntr);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/VehDynCtrlStsForALgtCmftRec1IDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::VehDynCtrlStsForALgtCmftRec1IDT::VehDynCtrlStsForALgtCmftRec1IDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'VehDynCtrlStsNotEna' of type /CppImplementationDataTypes/Flg1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Flg1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Flg1VccIDT::Flg1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'VehDynCtrlStsDend' of type /CppImplementationDataTypes/Flg1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Flg1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Flg1VccIDT::Flg1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'VehDynCtrlStsForBrkPrecActv' of type /CppImplementationDataTypes/Flg1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Flg1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Flg1VccIDT::Flg1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'VehDynCtrlStsForWhlBrkWrm' of type /CppImplementationDataTypes/Flg1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Flg1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Flg1VccIDT::Flg1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'VehDynCtrlStsForBrkActv' of type /CppImplementationDataTypes/Flg1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Flg1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Flg1VccIDT::Flg1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'VehDynCtrlStsForStandStillMgrForPark' of type /CppImplementationDataTypes/StandStillMgrStsForPark2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/StandStillMgrStsForPark2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::StandStillMgrStsForPark2VccIDT::StandStillMgrStsForPark2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'VehDynCtrlStsChks' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'VehDynCtrlStsCntr' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{}) 
  };
  return static_size;
}

}  // namespace VehDynCtrlStsForALgtCmftRec1IDT

#endif  // DTCAPPEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_DESERIALIZER_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_H_

