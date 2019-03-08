#ifndef _VIDEO_H_
#define VIDEO_H_

#include <stdint.h>

void startWheelVideo();
char *getNextWheelFrame();

void startTrainSideVideo();
char *getNextTrainSideFrame();

void startSoulTrainVideo();
char *getNextSoulTrainFrame();

void startSideSoulTrain1Video();
char *getNextSideSoulTrain1Frame();

void startPlanetVideo();
char *getNextPlanetFrame();

void startPlanetTrainVideo();
char *getNextPlanetTrainFrame();

void startPlanetTrain2Video();
char *getNextPlanetTrain2Frame();

#endif