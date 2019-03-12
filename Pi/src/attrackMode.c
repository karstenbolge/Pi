#include <stdint.h>
#include "../hdr/attrackMode.h"
#include "../hdr/window.h"
#include "../hdr/video.h"
#include "../hdr/color.h"
#include "../hdr/display.h"

#define MODE_OFF 0
#define MODE_ON 1

uint8_t inAtrackMmodeMode = MODE_OFF;

void attrackModeOpen()
{
  inAtrackMmodeMode = MODE_ON;
  //startSideSoulTrain1Video();
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
      clearDmd();
      rgb_t color, bgColor, greenColor;
      setColorType(&color, COLOR_RED);
      setColorType(&bgColor, COLOR_BLACK);

      printAtLine("A", 1, color, bgColor);
      //showImage(getNextSideSoulTrain1Frame());

      refreshDmd();
    }
  }
}
