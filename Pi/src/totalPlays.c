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
  char str[32];
  sprintf(str, "TODO");
  printCenterAtLine(str, 3, &color, NULL);
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
  char str[32];
  sprintf(str, "%ld", config.totalLeftDrains);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}

void rightDrainsOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Right drains", 1, &color, NULL);
  char str[32];
  sprintf(str, "%ld", config.totalRightDrains);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}

void timePerGameOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Average Time per Game", 1, &color, NULL);
  char str[32];
  uint64_t minutes = config.totalBallSeconds / config.totalGames / 60;
  uint64_t seconds = (config.totalBallSeconds / config.totalGames) - minutes * 60;
  sprintf(str, "%02ld:%02ld minutes", minutes, seconds);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}

void PlayTimeOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Total Play Time", 1, &color, NULL);
  char str[32];
  uint64_t hours = config.totalBallSeconds / 3600;
  uint64_t minutes = (config.totalBallSeconds - 3600 * hours) / 60;
  uint64_t seconds = config.totalBallSeconds - 3600 * hours - 60 * minutes;
  sprintf(str, "%ld:%02ld:%02ld hours", hours, minutes, seconds);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}

void BallsPlayedOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Total Balls PLayed", 1, &color, NULL);
  char str[32];
  sprintf(str, "%ld", config.totalBalls);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}

void TiltsOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Total Amount of Tilts", 1, &color, NULL);
  char str[32];
  sprintf(str, "%ld", config.totalTilts);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}

void leftFlippersOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Total Left Flips", 1, &color, NULL);
  char str[32];
  sprintf(str, "%ld", config.totalLeftFlip);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}

void rigthFlippersOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Total Right Flips", 1, &color, NULL);
  char str[32];
  sprintf(str, "%ld", config.totalRightFlip);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}

void lastGameStartOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Last game started", 1, &color, NULL);
  char str[32];
  makeTimeString(config.lastGameStart, str);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}

void lastFactoryResetOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Last factory reset", 1, &color, NULL);
  char str[32];
  makeTimeString(config.lastFactoryReset, str);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}

void lastHighscorerResetOpen()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Last highscore reset", 1, &color, NULL);
  char str[32];
  makeTimeString(config.lastHighscoreReset, str);
  printCenterAtLine(str, 3, &color, NULL);

  refreshDmd();
}
