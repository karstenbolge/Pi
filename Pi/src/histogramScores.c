#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/histogramScores.h"
#include "../hdr/display.h"
#include "../hdr/config.h"
#include "../hdr/window.h"

#define ACTION_UP 0
#define ACTION_DOWN 1
int inRow;
uint64_t totalScores;

char *getScoreLabel(int row)
{
  switch (row)
  {
  case 0:
    return "0-5t";
  case 1:
    return "5-10t";
  case 2:
    return "10-20t";
  case 3:
    return "20-40t";
  case 4:
    return "40-60t";
  case 5:
    return "60-90t";
  case 6:
    return "90-120t";
  case 7:
    return "120-150t";
  case 8:
    return "150-200t";
  case 9:
    return "200-250t";
  case 10:
    return "250-350t";
  case 11:
    return "350-500t";
  case 12:
    return "500t-";
  }
}

void showScoreTable()
{
  rgb_t color;
  setColorType(&color, COLOR_RED);
  char str[32];

  clearDmd();
  printAtLine("Histogram scores", 0, &color, NULL);

  if (totalScores == 0)
  {
    printAtLine("No scores yet.", 2, &color, NULL);
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

    printAtLine(getScoreLabel(currentRow), 2 + j, &color, NULL);
    sprintf(str, "%3ld%c", 100 * config.histogramScores[currentRow] / totalScores, '%');
    uint16_t length = printAtLineAndPosition(str, 2 + j, 130, &color, NULL);
  }

  refreshDmd();
}

void histogramScoreOpen()
{
  inRow = 0;
  totalScores = 0;
  for (int i = 0; i < 13; i++)
  {
    totalScores += config.histogramScores[i];
  }

  showScoreTable();
}

void histogramScoreUp()
{
  inRow--;
  if (inRow < 0)
  {
    inRow = 12;
  }

  showScoreTable();
}

void histogramScoreDown()
{
  inRow++;
  if (inRow > 12)
  {
    inRow = 0;
  }

  showScoreTable();
}