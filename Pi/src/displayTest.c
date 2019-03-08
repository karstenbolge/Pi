#include <stdio.h>
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/displayTest.h"
#include "../hdr/window.h"
#include "../hdr/video.h"

#define MODE_OFF 0
#define MODE_WHEEL_VIDEO 1
#define MODE_SIDE_TRAIN_VIDEO 2
#define MODE_SOUL_TRAIN_VIDEO 3
#define MODE_SOUL_TRAIN_1_VIDEO 4
#define MODE_PLANET_VIDEO 5
#define MODE_PLANET_TRAIN_VIDEO 6
#define MODE_PLANET_TRAIN_2_VIDEO 7

uint8_t inDisplayTestMode = MODE_OFF;

void startNextVideo()
{
  inDisplayTestMode++;
  if (inDisplayTestMode > MODE_SOUL_TRAIN_VIDEO)
  {
    inDisplayTestMode = MODE_WHEEL_VIDEO;
  }

  switch (inDisplayTestMode)
  {
  case MODE_WHEEL_VIDEO:
    return startWheelVideo();
  case MODE_SIDE_TRAIN_VIDEO:
    return startTrainSideVideo();
  case MODE_SOUL_TRAIN_VIDEO:
    return startSideSoulTrain1Video();
  case MODE_SOUL_TRAIN_1_VIDEO:
    return startSideSoulTrain1Video();
  case MODE_PLANET_VIDEO:
    return startPlanetVideo();
  case MODE_PLANET_TRAIN_VIDEO:
    return startPlanetTrainVideo();
  case MODE_PLANET_TRAIN_2_VIDEO:
    return startPlanetTrain2Video();
  }
}

void displayTestOpen()
{
  clearDmd();
  refreshDmd();

  inDisplayTestMode = MODE_OFF;
  startNextVideo();
}

void displayTestExit()
{
  inDisplayTestMode = MODE_OFF;
}

char *getNextImage()
{
  switch (inDisplayTestMode)
  {
  case MODE_WHEEL_VIDEO:
    return getNextWheelFrame();
  case MODE_SIDE_TRAIN_VIDEO:
    return getNextTrainSideFrame();
  case MODE_SOUL_TRAIN_VIDEO:
    return getNextSoulTrainFrame();
  case MODE_SOUL_TRAIN_1_VIDEO:
    return getNextSideSoulTrain1Frame();
  case MODE_PLANET_VIDEO:
    return getNextPlanetFrame();
  case MODE_PLANET_TRAIN_VIDEO:
    return getNextPlanetTrainFrame();
  case MODE_PLANET_TRAIN_2_VIDEO:
    return getNextPlanetTrain2Frame();
  }
}

void displayTestTick(uint8_t tick)
{
  if (inDisplayTestMode != MODE_OFF)
  {
    if (tick % 2 == 0)
    {
      showImage(getNextImage());
    }
    return;
  }
}

void displayTestEnter()
{
  startNextVideo();
}