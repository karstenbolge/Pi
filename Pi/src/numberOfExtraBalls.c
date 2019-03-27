#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/numberOfExtraBalls.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"
#include "../hdr/sound.h"

uint8_t newNumberOfExtraBalls;

void showNumberOfExtraBalls()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();
  printAtLineAndPosition("Number of extra balls per ball", 1, 0, &color, NULL);

  char str[32];
  sprintf(str, "%d", newNumberOfExtraBalls);

  uint16_t length = printAtLineAndPosition(str, 3, 0, &bgColor, &color);
  frameLine(3, length, &color);

  refreshDmd();
}

void numberOfExtraBallsOpen()
{
  newNumberOfExtraBalls = config.numberOfExtraBalls;
  showNumberOfExtraBalls();
}

void numberOfExtraBallsUp()
{
  if (newNumberOfExtraBalls < 5)
  {
    newNumberOfExtraBalls++;
    showNumberOfExtraBalls();
    return;
  }

  playSoundWrong();
}

void numberOfExtraBallsDown()
{
  if (newNumberOfExtraBalls > 0)
  {
    newNumberOfExtraBalls--;
    showNumberOfExtraBalls();
    return;
  }

  playSoundWrong();
}

void numberOfExtraBallsEnter()
{
  if (newNumberOfExtraBalls == config.numberOfExtraBalls)
  {
    menuExit();
  }

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  char str[32];
  sprintf(str, "Number of extra balls set to %d", newNumberOfExtraBalls);
  printCenterAtLine(str, 1, &color, NULL);
  refreshDmd();

  config.numberOfExtraBalls = newNumberOfExtraBalls;
  saveConfig();
}
