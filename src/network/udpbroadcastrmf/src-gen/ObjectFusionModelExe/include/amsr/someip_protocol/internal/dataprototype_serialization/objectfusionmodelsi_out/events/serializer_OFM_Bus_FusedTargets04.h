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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets04.h
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_FusedTargets04
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_OBJECTFUSIONMODELSI_OUT_EVENTS_serializer_OFM_Bus_FusedTargets04_h_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_OBJECTFUSIONMODELSI_OUT_EVENTS_serializer_OFM_Bus_FusedTargets04_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_ObjGroup2VccIDT_8/impl_type_array_objgroup2vccidt_8.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ObjEstimn2VccGroup_1IDT/serializer_ObjEstimn2VccGroup_1IDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ObjGroup2VccIDT/serializer_ObjGroup2VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ObjInfo2VccGroup_1IDT/serializer_ObjInfo2VccGroup_1IDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ObjPpty2VccGroup_1IDT/serializer_ObjPpty2VccGroup_1IDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace objectfusionmodelsi_out {
namespace events {

/*!
 * \brief Serializer for service event /JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_FusedTargets04
 *        of service interface /JICA/Service/Interface/ObjectFusionModelSI_Out.
 * \details Top-Level data type: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
 *          Effective transformation properties of the DataPrototype:
 *          - ByteOrder:                    MOST-SIGNIFICANT-BYTE-FIRST (big-endian)
 *          - sizeOfArrayLengthField:       4
 *          - sizeOfVectorLengthField:      4
 *          - sizeOfMapLengthField:         4
 *          - sizeOfStringLengthField:      4
 *          - sizeOfStructLengthField:      0
 *          - sizeOfUnionLengthField:       4
 *          - sizeOfUnionTypeSelectorField: 4
 *          - isBomActive:                  true
 *          - isNullTerminationActive:      true
 *          - isDynamicLengthFieldSize:     false
 */
class SerializerOFM_Bus_FusedTargets04 {
 public:
  /*!
   * \brief Returns the required buffer size for the data prototype service event /JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_FusedTargets04.
   *
   * \param[in]   data Reference to data object of top-level data type /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  constexpr static std::size_t GetRequiredBufferSize(::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8 const &data) noexcept {
    return serialization::GetRequiredBufferSize<
      TpPackDataPrototype,
      // Config of array length field (/CppImplementationDataTypes/Array_ObjGroup2VccIDT_8)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfArrayLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/ObjGroup2VccIDT)
      // Config of struct length field (/CppImplementationDataTypes/ObjGroup2VccIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/ObjGroup2VccIDT)

      >(data);
  }

  /*!
   * \brief Returns the maximum buffer size for the data prototype service event /JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_FusedTargets04.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  constexpr static amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
    return serialization::GetMaximumBufferSize<
      ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8,
      TpPackDataPrototype,
      // Config of array length field (/CppImplementationDataTypes/Array_ObjGroup2VccIDT_8)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfArrayLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/ObjGroup2VccIDT)
      // Config of struct length field (/CppImplementationDataTypes/ObjGroup2VccIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/ObjGroup2VccIDT)

      >();
  }


  /*!
   * \brief Serialize the data prototype service event /JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_FusedTargets04.
   *
   * \param[in,out] writer Reference to the byte stream writer.
   * \param[in]     data Reference to data object of top-level data type /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   *                , whose value will be serialized into the writer.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  // VECTOR NC AutosarC++17_10-M3.2.4: MD_SOMEIPPROTOCOL_AutosarC++17_10-M3.2.4_false_positive
  static void Serialize(serialization::Writer &writer, ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8 const &data) noexcept;

 private:
  /*!
   * \brief Transformation properties of the data prototype.
   */
  using TpPackDataPrototype = internal::TpPack<
      BigEndian,
      internal::SizeOfArrayLengthField<4>,
      internal::SizeOfVectorLengthField<4>,
      internal::SizeOfMapLengthField<4>,
      internal::SizeOfStringLengthField<4>,
      internal::SizeOfStructLengthField<0>,
      internal::SizeOfUnionLengthField<4>,
      internal::SizeOfUnionTypeSelectorField<4>,
      internal::StringBomActive,
      internal::StringNullTerminationActive,
      serialization::DynamicLengthFieldSizeInactive>;

};

}  // namespace events
}  // namespace objectfusionmodelsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_OBJECTFUSIONMODELSI_OUT_EVENTS_serializer_OFM_Bus_FusedTargets04_h_

