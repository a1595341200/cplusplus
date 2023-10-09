#ifndef _EGO_MOTION_ESTIMATION_HISTORY_H_
#define _EGO_MOTION_ESTIMATION_HISTORY_H_
#define N_EGO_HISTORY (5)
typedef struct
{
	unsigned int timestamp;
	float speedEst;
	float vyEst;
	float vxEst;
	float ayEst;
	float axEst;
	float yawRateEst;
	float alphaEst;


	float vxStdDev;
	float vyStdDev;
	float axStdDev;
	float ayStdDev;
	float yawRateStdDev;
	float alphaStdDev;
}EgoMotionEstimation;

typedef struct
{
	EgoMotionEstimation egoEstimation[N_EGO_HISTORY];
	char numHistory;
}EgoMotionEstimationHistory;
#endif

