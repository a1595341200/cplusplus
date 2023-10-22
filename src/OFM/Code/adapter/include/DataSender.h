#ifndef OFM_DATASENDER_H
#define OFM_DATASENDER_H

#include "objectfusionmodelsi_out/objectfusionmodelsi_out_common.h"
class DataSender
{

public:
    DataSender(/* args */);
    ~DataSender();

    FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc& get_FrontFourDRadarSts();
    void set_FrontFourDRadarSts(FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc&);

    FourDRadarECUSts::FourDRadarECUSts& get_FourDRadarECUSts();
    void set_FourDRadarECUSts(FourDRadarECUSts::FourDRadarECUSts&);


    SOCFusedSts::SOCFusedSts& get_SOCFusedSts();
    void set_SOCFusedSts(SOCFusedSts::SOCFusedSts&);

    ObjGroup2Vccs_11::ObjGroup2Vccs_11& get_FusedTargets_1_11();
    void set_FusedTargets_1_11(ObjGroup2Vccs_11::ObjGroup2Vccs_11&);

    ObjGroup2Vccs_11::ObjGroup2Vccs_11& get_FusedTargets_12_22();
    void set_FusedTargets_12_22(ObjGroup2Vccs_11::ObjGroup2Vccs_11&);

    ObjGroup2Vccs_10::ObjGroup2Vccs_10& get_FusedTargets_23_32();
    void set_FusedTargets_23_32(ObjGroup2Vccs_10::ObjGroup2Vccs_10&);


private:

    /* OFM output data to MCU */
    FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc mFrontFourDRadarSts;
	FourDRadarECUSts::FourDRadarECUSts mFourDRadarECUSts;

    SOCFusedSts::SOCFusedSts mSOCFusedSts;           
    ObjGroup2Vccs_11::ObjGroup2Vccs_11 mFusedTargets_1_11;
	ObjGroup2Vccs_11::ObjGroup2Vccs_11 mFusedTargets_12_22;
	ObjGroup2Vccs_10::ObjGroup2Vccs_10 mFusedTargets_23_32;

};

#endif //OFM_DATASENDER_H
