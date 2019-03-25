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
  printAtLineAndPosition("Average ball time 3:23", 0, 0, &color, NULL);
  refreshDmd();
}