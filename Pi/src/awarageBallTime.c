#include <stdio.h>
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/awarageBallTime.h"

#define MODE_OFF 0
#define MODE_SHOW 1

uint8_t inAwarageBallTimeMode = MODE_OFF;

rgb_t color, bgColor;

void awarageBallTimeOpen()
{
  inAwarageBallTimeMode = MODE_SHOW;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);
}

void awarageBallTimeExit()
{
  inAwarageBallTimeMode = MODE_OFF;
}

void awarageBallTimeCount(uint32_t count)
{
  if (inAwarageBallTimeMode == MODE_SHOW)
  {
    char str[32];
    sprintf(str, "Loops per second %d.", count);
    printAtLineAndPosition(str, 0, 0, color, bgColor);
    showDmd();
  }
}