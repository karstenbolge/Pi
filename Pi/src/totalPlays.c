#include <stdio.h>
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/totalPlays.h"
#include "../hdr/config.h"

void totalPlaysOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Total number of games", 1, &color, NULL);
  char str[32];
  sprintf(str, "%ld", config.totalGames);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}

void extraBallsOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Total number of extra balls", 1, &color, NULL);
  printCenterAtLine("8137", 3, &color, NULL);

  refreshDmd();
}

void percentExtraBalsOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Percent extra balls", 1, &color, NULL);
  printCenterAtLine("12%", 3, &color, NULL);

  refreshDmd();
}

void leftDrainsOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Left drains", 1, &color, NULL);
  printCenterAtLine("TODO", 3, &color, NULL);

  refreshDmd();
}