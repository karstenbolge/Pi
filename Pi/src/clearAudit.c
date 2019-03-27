#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/clearAudit.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"

#define IN_MODE_YES 1
#define IN_MODE_NO 0
#define IN_MODE_DONE 2
uint8_t inClearAudit;

void showClearAudit()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();
  printAtLineAndPosition("Clear audits?", 1, 0, &color, NULL);
  if (inClearAudit == IN_MODE_YES)
  {
    uint16_t length = printAtLineAndPosition("Yes", 3, 0, &bgColor, &color);
    frameLine(3, length, &color);

    printAtLineAndPosition("No", 4, 0, &color, &bgColor);
  }
  else
  {
    printAtLineAndPosition("Yes", 3, 0, &color, &bgColor);

    uint16_t length = printAtLineAndPosition("No", 4, 0, &bgColor, &color);
    frameLine(4, length, &color);
  }
  refreshDmd();
}

void clearAuditsOpen()
{
  inClearAudit = IN_MODE_YES;
  showClearAudit();
}

void clearAuditsUp()
{
  if (inClearAudit == IN_MODE_DONE)
  {
    return menuExit();
  }

  inClearAudit = inClearAudit == IN_MODE_YES ? IN_MODE_NO : IN_MODE_YES;
  showClearAudit();
}

void clearAuditsDown()
{
  clearAuditsUp();
}

void clearAuditsEnter()
{
  if (inClearAudit != IN_MODE_YES)
  {
    menuExit();
    return;
  }

  inClearAudit = IN_MODE_DONE;
  config.lastGameStart = 0;
  config.totalBalls = 0;
  config.totalBallSeconds = 0;
  config.totalGames = 0;
  config.totalLeftDrains = 0;
  config.totalLeftFlip = 0;
  config.totalRightDrains = 0;
  config.totalRightFlip = 0;
  config.totalTilts = 0;

  for (int i = 0; i < 13; i++)
  {
    config.histogramScores[i] = 0;
    config.histogramGameTimes[i] = 0;
  }

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Audits cleared", 1, &color, NULL);

  refreshDmd();

  config.lastHighscoreReset = time(NULL);
  saveConfig();
}
