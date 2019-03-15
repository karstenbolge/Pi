#include <stdio.h>
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/avarageBallTime.h"

#define MODE_OFF 0
#define MODE_SHOW 1

uint8_t inAvarageBallTimeMode = MODE_OFF;

rgb_t color, bgColor;

void avarageBallTimeOpen()
{
  inAvarageBallTimeMode = MODE_SHOW;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);
}

void avarageBallTimeExit()
{
  inAvarageBallTimeMode = MODE_OFF;
}

void avarageBallTimeCount(uint32_t count)
{
  if (inAvarageBallTimeMode == MODE_SHOW)
  {
    clearDmd();
    char str[32];
    sprintf(str, "Loops per second %d", count);
    printAtLineAndPosition(str, 0, 0, &color, &bgColor);
    refreshDmd();
  }
}
