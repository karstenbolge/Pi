#include <stdio.h>
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/loopsPerSecond.h"

#define MODE_OFF 0
#define MODE_SHOW 1

uint8_t inloopsPerSecondMode = MODE_OFF;

rgb_t color, bgColor;

void loopsPerSecondOpen()
{
  inloopsPerSecondMode = MODE_SHOW;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);
}

void loopsPerSecondExit()
{
  inloopsPerSecondMode = MODE_OFF;
}

void loopsPerSecondCount(uint32_t count)
{
  if (inloopsPerSecondMode == MODE_SHOW)
  {
    clearDmd();
    char str[32];
    sprintf(str, "Loops per second %d", count);
    printAtLineAndPosition(str, 0, 0, &color, &bgColor);
    refreshDmd();
  }
}
