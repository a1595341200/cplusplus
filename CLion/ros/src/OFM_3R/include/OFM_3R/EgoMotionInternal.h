#ifndef _EGO_MOTION_INTERNAL_H_
#define _EGO_MOTION_INTERNAL_H_
#include <Eigen\dense>
#define NUM_EGO_STATE (7)
typedef struct
{
	unsigned int timestamp;
	Vector <float, NUM_EGO_STATE> stateEst; 
	Matrix <float, NUM_EGO_STATE, NUM_EGO_STATE> PEst;
}EgoMotionInternal;
#endif