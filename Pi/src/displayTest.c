#include <stdio.h>
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/displayTest.h"
#include "../hdr/window.h"

#define MODE_OFF 0
#define MODE_SHOW 1

uint8_t inDisplayTestMode = MODE_OFF;

uint16_t currentPosition;
uint8_t currentLine;
rgb_t color, bgColor;

void displayTestOpen()
{
  inDisplayTestMode = MODE_SHOW;
  currentPosition = DMD_WIDTH;
  currentLine = 0;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  windowTestDraw();
}

void displayTestExit()
{
  inDisplayTestMode = MODE_OFF;
}

void displayTestTick(uint8_t tick)
{
  if (inDisplayTestMode == MODE_SHOW)
  {
    if (currentPosition == 0)
    {
      fillLineWithColor(currentLine, bgColor);
      currentLine++;
      currentPosition = DMD_WIDTH;
      if (currentLine > 4)
      {
        currentLine = 0;
      }
    }
    if (currentPosition > 0)
    {
      currentPosition--;
    }

    fillLineWithColor(currentLine, bgColor);
    printAtLineAndPosition("0123456789", currentLine, currentPosition, color, bgColor);
    showDmd();
  }
}