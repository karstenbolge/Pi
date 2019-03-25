#include <stdio.h>
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/averageBallTime.h"

void averageBallTimeOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Average ball time", 1, &color, NULL);
  printCenterAtLine("3:23", 3, &color, NULL);
  refreshDmd();
}