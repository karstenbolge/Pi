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
  printf("Karsten attrackModeOpen\n");
  inAtrackMmodeMode = MODE_ON;
  tickNumber = 0;
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
      tickNumber++;
      if (tickNumber == 100)
      {
        tickNumber = 0;
      }

      if (tickNumber > 50 && inGame == EVENT_GAME_ENDED)
      {
        showScore(0);
        return;
      };
      //showImage(getNextSideSoulTrain1Frame());
      //return;

      clearDmd();
      rgb_t color, bgColor, greenColor;
      setColorType(&color, COLOR_GREEN);
      setColorType(&bgColor, COLOR_RED);

      //printAtLine("0123456789", 1, &color, &bgColor);
      //printAtLine("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 2, &color, NULL);
      //printAtLine("abcdefghijklmnopqrstuvwxyz", 3, NULL, &bgColor);
      //printAtLine("!\"#¤&/()=?£$€{[]}|*~^.,;:-_'%\\", 0, &color, &bgColor);
      //showImage(getNextSideSoulTrain1Frame());
      printLargeAtLineAndPosition("01234.5678,9", 5 + 2 * 24, 0, &color, NULL);
      printLargeAtLineAndPosition("ABC", 5 + 3 * 24, 0, &color, NULL);

      printCenterAtLine("<Attrack mode>", 1, &color, NULL);

      refreshDmd();
    }
  }
}
