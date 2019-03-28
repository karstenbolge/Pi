#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/numberOfExtraBalls.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"
#include "../hdr/sound.h"

uint8_t newNumberOfExtraBallsOffered;

void showNumberOfExtraBallsOffered()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();
  printAtLineAndPosition("Number of extra balls", 1, 0, &color, NULL);
  printAtLineAndPosition("offered in one ball", 2, 0, &color, NULL);

  char str[32];
  if (newNumberOfExtraBallsOffered == 0)
  {
    sprintf(str, "Off");
  }
  else
  {
    sprintf(str, "%d", newNumberOfExtraBallsOffered);
  }

  uint16_t length = printAtLineAndPosition(str, 4, 0, &bgColor, &color);
  frameLine(4, length, &color);

  refreshDmd();
}

void numberOfExtraBallsOfferedOpen()
{
  newNumberOfExtraBallsOffered = config.numberOfExtraBallsOffered;
  showNumberOfExtraBallsOffered();
}

void numberOfExtraBallsOfferedUp()
{
  if (newNumberOfExtraBallsOffered < 10)
  {
    newNumberOfExtraBallsOffered++;
    showNumberOfExtraBallsOffered();
    return;
  }

  playSoundWrong();
}

void numberOfExtraBallsOfferedDown()
{
  if (newNumberOfExtraBallsOffered > 0)
  {
    newNumberOfExtraBallsOffered--;
    showNumberOfExtraBallsOffered();
    return;
  }

  playSoundWrong();
}

void numberOfExtraBallsOfferedEnter()
{
  if (newNumberOfExtraBallsOffered == config.numberOfExtraBallsOffered)
  {
    menuExit();
    return;
  }

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  char str[32];
  sprintf(str, "set to %d", newNumberOfExtraBallsOffered);
  printCenterAtLine("Number of extra balls", 1, &color, NULL);
  printCenterAtLine("offered per ball ", 2, &color, NULL);
  printCenterAtLine(str, 3, &color, NULL);
  refreshDmd();

  config.numberOfExtraBallsOffered = newNumberOfExtraBallsOffered;
  saveConfig();
}
