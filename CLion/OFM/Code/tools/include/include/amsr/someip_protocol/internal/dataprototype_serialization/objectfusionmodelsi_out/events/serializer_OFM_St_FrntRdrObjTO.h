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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_St_FrntRdrObjTO.h
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_St_FrntRdrObjTO
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_OBJECTFUSIONMODELSI_OUT_EVENTS_serializer_OFM_St_FrntRdrObjTO_h_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_OBJECTFUSIONMODELSI_OUT_EVENTS_serializer_OFM_St_FrntRdrObjTO_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FrntRdrObjTO/impl_type_frntrdrobjto.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace objectfusionmodelsi_out {
namespace events {

/*!
 * \brief Serializer for service event /JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_St_FrntRdrObjTO
 *        of service interface /JICA/Service/Interface/ObjectFusionModelSI_Out.
 * \details Top-Level data type: /CppImplementationDataTypes/FrntRdrObjTO
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
class SerializerOFM_St_FrntRdrObjTO {
 public:
  /*!
   * \brief Returns the required buffer size for the data prototype service event /JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_St_FrntRdrObjTO.
   *
   * \param[in]   data Reference to data object of top-level data type /CppImplementationDataTypes/FrntRdrObjTO.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  constexpr static std::size_t GetRequiredBufferSize(::FrntRdrObjTO::FrntRdrObjTO const &data) noexcept {
    return serialization::GetRequiredBufferSize<
      TpPackDataPrototype,
      // Byte-order of primitive datatype (/CppImplementationDataTypes/FrntRdrObjTO)
      typename serialization::Tp<TpPackDataPrototype>::ByteOrder

      >(data);
  }

  /*!
   * \brief Serialize the data prototype service event /JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_St_FrntRdrObjTO.
   *
   * \param[in,out] writer Reference to the byte stream writer.
   * \param[in]     data Reference to data object of top-level data type /CppImplementationDataTypes/FrntRdrObjTO
   *                , whose value will be serialized into the writer.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  static void Serialize(serialization::Writer &writer, ::FrntRdrObjTO::FrntRdrObjTO const &data);

 private:
  /*!
   * \brief Transformation properties of the data prototype.
   */
  using TpPackDataPrototype = serialization::TpPack<
      BigEndian,
      serialization::SizeOfArrayLengthField<4>,
      serialization::SizeOfVectorLengthField<4>,
      serialization::SizeOfMapLengthField<4>,
      serialization::SizeOfStringLengthField<4>,
      serialization::SizeOfStructLengthField<0>,
      serialization::SizeOfUnionLengthField<4>,
      serialization::SizeOfUnionTypeSelectorField<4>,
      serialization::StringBomActive,
      serialization::StringNullTerminationActive,
      serialization::DynamicLengthFieldSizeInactive>;

};

}  // namespace events
}  // namespace objectfusionmodelsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_OBJECTFUSIONMODELSI_OUT_EVENTS_serializer_OFM_St_FrntRdrObjTO_h_

