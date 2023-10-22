#ifndef OBJECTFUSIONMODEL_SOMEIP_SERVICE_H
#define OBJECTFUSIONMODEL_SOMEIP_SERVICE_H

#include "objectfusionmodelsi_out/objectfusionmodelsi_out_skeleton.h"
class SomeipService final
    : public objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton {
      
 public:
  SomeipService();
  ~SomeipService();
  void SendEvent_OFM_St_SOCFusedSts(SOCFusedSts::SOCFusedSts&);
  void SendEvent_OFM_Bus_FrontFourDRadarSts(FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc&);
  void SendEvent_OFM_Bus_FourDRadarECUSts(FourDRadarECUSts::FourDRadarECUSts&);
  void SendEvent_OFM_Bus_FusedTargets_11(ObjGroup2Vccs_11::ObjGroup2Vccs_11&);
  void SendEvent_OFM_Bus_FusedTargets_22(ObjGroup2Vccs_11::ObjGroup2Vccs_11&);
  void SendEvent_OFM_Bus_FusedTargets_32(ObjGroup2Vccs_10::ObjGroup2Vccs_10&);

  // SOCFusedSts::SOCFusedSts mSOCFusedSts;
  // FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc mFrontFourDRadarSts;
  // FourDRadarECUSts::FourDRadarECUSts mFourDRadarECUSts;
  // ObjGroup2Vccs_11::ObjGroup2Vccs_11 mFusedTargets_1_11;
  // ObjGroup2Vccs_11::ObjGroup2Vccs_11 mFusedTargets_12_22;
  // ObjGroup2Vccs_10::ObjGroup2Vccs_10 mFusedTargets_23_32;

 private:
  ara::log::Logger& log_;
};


#endif