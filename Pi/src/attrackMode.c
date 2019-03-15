#include <stdint.h>
#include "../hdr/attrackMode.h"
#include "../hdr/window.h"
#include "../hdr/video.h"
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/game.h"

#define MODE_OFF 0
#define MODE_ON 1

u_int16_t tickNumber;

uint8_t inAtrackMmodeMode = MODE_OFF;

void attrackModeOpen()
{
  inAtrackMmodeMode = MODE_ON;
  tickNumber = 0;
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
      tickNumber++;
      if (tickNumber == 100)
      {
        tickNumber = 0;
      }

      if (tickNumber > 50 && inGame == EVENT_GAME_ENDED)
      {
        showScore(0);
        return;
      }
      clearDmd();
      rgb_t color, bgColor, greenColor;
      setColorType(&color, COLOR_RED);
      setColorType(&bgColor, COLOR_BLACK);

      printAtLine("attrack mode", 1, &color, &bgColor);
      //showImage(getNextSideSoulTrain1Frame());

      refreshDmd();
    }
  }
}
