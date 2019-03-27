#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/histogramGameTimes.h"
#include "../hdr/display.h"
#include "../hdr/config.h"
#include "../hdr/window.h"

#define ACTION_UP 0
#define ACTION_DOWN 1
int inRow;
uint64_t totalGameTimes;

char *getGameTimeLabel(int row)
{
  switch (row)
  {
  case 0:
    return "0-60s";
  case 1:
    return "60-90s";
  case 2:
    return "90-120s";
  case 3:
    return "120-150s";
  case 4:
    return "150-180s";
  case 5:
    return "180s-210s";
  case 6:
    return "210s-240s";
  case 7:
    return "4-5m";
  case 8:
    return "5-6m";
  case 9:
    return "6-8m";
  case 10:
    return "8-10m";
  case 11:
    return "10-15m";
  case 12:
    return "15m-";
  }
}

void showGameTimeTable()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);
  char str[32];

  clearDmd();
  printAtLine("Histogram game times", 0, &color, NULL);

  if (totalGameTimes == 0)
  {
    printAtLine("No games yet.", 2, &color, NULL);
    refreshDmd();
    return;
  }

  int currentRow;
  for (int j = 0; j < 6; j++)
  {
    currentRow = j + inRow;
    if (currentRow > 12)
    {
      currentRow -= 13;
    }

    printAtLine(getGameTimeLabel(currentRow), 2 + j, &color, NULL);
    sprintf(str, "%3ld%c", 100 * config.histogramGameTimes[currentRow] / totalGameTimes, '%');
    uint16_t length = printAtLineAndPosition(str, 2 + j, 130, &color, NULL);
  }

  refreshDmd();
}

void histogramGameTimeOpen()
{
  inRow = 0;
  totalGameTimes = 0;
  for (int i = 0; i < 13; i++)
  {
    totalGameTimes += config.histogramGameTimes[i];
  }

  showGameTimeTable();
}

void histogramGameTimeUp()
{
  inRow--;
  if (inRow < 0)
  {
    inRow = 12;
  }

  showGameTimeTable();
}

void histogramGameTimeDown()
{
  inRow++;
  if (inRow > 12)
  {
    inRow = 0;
  }

  showGameTimeTable();
}