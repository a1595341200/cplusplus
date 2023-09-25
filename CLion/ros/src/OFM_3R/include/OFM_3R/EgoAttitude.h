#ifndef _EGO_ATTITUDE_H_
#define _EGO_ATTITUDE_H_
typedef struct
{
	float x;
	float y;
	float theta;

	float xStdDev;
	float yStdDev;
	float xyStdDev;
}EgoAttitude;
#endif
