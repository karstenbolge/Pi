#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/highScore.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"

#define IN_MODE_YES 1
#define IN_MODE_NO 0
#define IN_MODE_DONE 2
uint8_t inHighScoreMode;

void showResetHishScore()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();
  printAtLineAndPosition("Clear highscores?", 1, 0, &color, NULL);
  if (inHighScoreMode == IN_MODE_YES)
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

void resetHighScoreOpen()
{
  inHighScoreMode = IN_MODE_YES;
  showResetHishScore();
}

void resetHighScoreUp()
{
  if (inHighScoreMode == IN_MODE_DONE)
  {
    return menuExit();
  }

  inHighScoreMode = inHighScoreMode == IN_MODE_YES ? IN_MODE_NO : IN_MODE_YES;
  showResetHishScore();
}

void resetHighScoreDown()
{
  resetHighScoreUp();
}

void resetHighScoreEnter()
{
  if (inHighScoreMode != IN_MODE_YES)
  {
    menuExit();
    return;
  }

  inHighScoreMode = IN_MODE_DONE;
  initHighScores();

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Highscores cleared", 1, &color, NULL);

  refreshDmd();

  config.lastHighscoreReset = time(NULL);
  saveConfig();
}
