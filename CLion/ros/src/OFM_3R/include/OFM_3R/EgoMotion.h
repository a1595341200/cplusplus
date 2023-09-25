#ifndef _EGO_MOTION_H_
#define _EGO_MOTION_H_
typedef struct
{
	unsigned int timestamp;
	float speed;
	float vLat;
	float vLgt;
	float aLat;
	float aLgt;
	float yawRate;
}EgoMotion;
#endif
