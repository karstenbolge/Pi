#include <stdio.h>
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/displayTest.h"
#include "../hdr/window.h"
#include "../hdr/video.h"

#define MODE_OFF 0
#define MODE_SHOW 1

uint8_t inDisplayTestMode = MODE_OFF;

uint16_t currentPosition;
uint8_t currentLine;
rgb_t color, bgColor;

void displayTestOpen()
{
  printf("displayTestOpen\n");
  inDisplayTestMode = MODE_SHOW;
  currentPosition = DMD_WIDTH;
  currentLine = 0;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  startWheelVideo();
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
      showImage(getNextWheelFrame());
    }
    return;

    if (currentPosition == 0)
    {
      // TODO OPTIMIZE memset
      fillLineWithColor(currentLine, bgColor);
      currentLine++;
      currentPosition = DMD_WIDTH;
      if (currentLine >= LINE_COUNT)
      {
        currentLine = 0;
      }
    }
    if (currentPosition > 0)
    {
      currentPosition--;
    }

    // TODO OPTIMIZE memset
    fillLineWithColor(currentLine, bgColor);
    printAtLineAndPosition("0123456789", currentLine, currentPosition, color, bgColor);
    refreshDmd();
  }
}