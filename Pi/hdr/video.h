#ifndef _VIDEO_H_
#define VIDEO_H_

#include <stdint.h>

void startWheelVideo();
char *getNextWheelFrame();

void startTrainSideVideo();
char *getNextTrainSide();

void startSoulTrainVideo();
char *getNextSoulTrain();

#endif