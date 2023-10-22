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
/**        \file  PerceptionExe/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrLe.h
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/PerceptionSI_LaneOut/FusedCam_Bus_LaneMkrLe
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_PERCEPTIONSI_LANEOUT_EVENTS_serializer_FusedCam_Bus_LaneMkrLe_h_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_PERCEPTIONSI_LANEOUT_EVENTS_serializer_FusedCam_Bus_LaneMkrLe_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LaneMkrCam1Le/impl_type_lanemkrcam1le.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1Le/serializer_LaneMkrCam1Le.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace perceptionsi_laneout {
namespace events {

/*!
 * \brief Serializer for service event /JICA/Service/Interface/PerceptionSI_LaneOut/FusedCam_Bus_LaneMkrLe
 *        of service interface /JICA/Service/Interface/PerceptionSI_LaneOut.
 * \details Top-Level data type: /CppImplementationDataTypes/LaneMkrCam1Le
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
class SerializerFusedCam_Bus_LaneMkrLe {
 public:
  /*!
   * \brief Returns the required buffer size for the data prototype service event /JICA/Service/Interface/PerceptionSI_LaneOut/FusedCam_Bus_LaneMkrLe.
   *
   * \param[in]   data Reference to data object of top-level data type /CppImplementationDataTypes/LaneMkrCam1Le.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  constexpr static std::size_t GetRequiredBufferSize(::LaneMkrCam1Le::LaneMkrCam1Le const &data) noexcept {
    return serialization::GetRequiredBufferSize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1Le)
      serialization::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(data);
  }

  /*!
   * \brief Serialize the data prototype service event /JICA/Service/Interface/PerceptionSI_LaneOut/FusedCam_Bus_LaneMkrLe.
   *
   * \param[in,out] writer Reference to the byte stream writer.
   * \param[in]     data Reference to data object of top-level data type /CppImplementationDataTypes/LaneMkrCam1Le
   *                , whose value will be serialized into the writer.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  static void Serialize(serialization::Writer &writer, ::LaneMkrCam1Le::LaneMkrCam1Le const &data);

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
}  // namespace perceptionsi_laneout
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_PERCEPTIONSI_LANEOUT_EVENTS_serializer_FusedCam_Bus_LaneMkrLe_h_
