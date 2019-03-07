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
    return startSoulTrainVideo();
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
    return getNextTrainSide();
  case MODE_SOUL_TRAIN_VIDEO:
    return getNextSoulTrain();
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