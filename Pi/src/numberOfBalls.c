#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/numberOfBalls.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"
#include "../hdr/sound.h"

uint8_t newNumberOfBalls;

void showNumberOfBalls()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();
  printAtLineAndPosition("Number of balls per game", 1, 0, &color, NULL);

  char str[32];
  sprintf(str, "%d", newNumberOfBalls);

  uint16_t length = printAtLineAndPosition(str, 3, 0, &bgColor, &color);
  frameLine(3, length, &color);

  refreshDmd();
}

void numberOfBallsOpen()
{
  newNumberOfBalls = config.numberOfBalls;
  showNumberOfBalls();
}

void numberOfBallsUp()
{
  if (newNumberOfBalls < 9)
  {
    newNumberOfBalls++;
    showNumberOfBalls();
    return;
  }

  playSoundWrong();
}

void numberOfBallsDown()
{
  if (newNumberOfBalls > 1)
  {
    newNumberOfBalls--;
    showNumberOfBalls();
    return;
  }

  playSoundWrong();
}

void numberOfBallsEnter()
{
  if (newNumberOfBalls == config.numberOfBalls)
  {
    menuExit();
  }

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  char str[32];
  sprintf(str, "Number of balls set to %d", newNumberOfBalls);
  printCenterAtLine(str, 1, &color, NULL);
  refreshDmd();

  config.numberOfBalls = newNumberOfBalls;
  saveConfig();
}
