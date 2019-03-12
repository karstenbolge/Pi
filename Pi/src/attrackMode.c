#include <stdint.h>
#include "../hdr/attrackMode.h"
#include "../hdr/window.h"
#include "../hdr/video.h"

#define MODE_OFF 0
#define MODE_ON 1

uint8_t inAtrackMmodeMode = MODE_OFF;

void attrackModeOpen()
{
  inAtrackMmodeMode = MODE_ON;
  startSideSoulTrain1Video();
}

void attrackModeExit()
{
  inAtrackMmodeMode = MODE_OFF;
}

void attrackModeTick(uint8_t tick)
{
  if (inAtrackMmodeMode != MODE_OFF)
  {
    if (tick % 2 == 0)
    {
      showImage(getNextSideSoulTrain1Frame());
    }
  }
}
