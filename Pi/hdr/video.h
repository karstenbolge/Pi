#ifndef _VIDEO_H_
#define VIDEO_H_

#include <stdint.h>

void startWheelVideo();
char *getNextWheelFrame();

void startTrainSide();
char *getNextTrainSide();

void startSoulTrain();
char *getNextSoulTrain();

#endif