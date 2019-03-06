#include <stdio.h>
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/displayTest.h"
#include "../hdr/window.h"
#include "../hdr/video.h"

#define MODE_OFF 0
#define MODE_SHOW 1

uint8_t inDisplayTestMode = MODE_OFF;

void displayTestOpen()
{
  clearDmd();
  refreshDmd();

  startSoulTrainVideo();
  inDisplayTestMode = MODE_SHOW;
}

void displayTestExit()
{
  inDisplayTestMode = MODE_OFF;
}

void displayTestTick(uint8_t tick)
{
  if (inDisplayTestMode == MODE_SHOW)
  {
    if (tick % 2 == 0)
    {
      showImage(getNextSoulTrain());
    }
    return;
  }
}