#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/tiltWarnings.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"
#include "../hdr/sound.h"

uint8_t newTiltWarnings;

void showTiltWarnings()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();
  printAtLineAndPosition("Number of tilts", 1, 0, &color, NULL);

  char str[32];
  sprintf(str, "%d", newTiltWarnings);

  uint16_t length = printAtLineAndPosition(str, 3, 0, &bgColor, &color);
  frameLine(3, length, &color);

  refreshDmd();
}

void tiltWarningsOpen()
{
  newTiltWarnings = config.numberOfBalls;
  showTiltWarnings();
}

void tiltWarningsUp()
{
  if (newTiltWarnings < 5)
  {
    newTiltWarnings++;
    showTiltWarnings();
    return;
  }
  playSoundWrong();
}

void tiltWarningsDown()
{
  if (newTiltWarnings > 2)
  {

    newTiltWarnings--;
    showTiltWarnings();
    return;
  }
  playSoundWrong();
}

void tiltWarningsEnter()
{
  if (newTiltWarnings == config.tiltWarnings)
  {
    menuExit();
  }

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  char str[32];
  sprintf(str, "Tilt warnings set to %d", newTiltWarnings);
  printCenterAtLine(str, 1, &color, NULL);
  refreshDmd();

  config.tiltWarnings = newTiltWarnings;
  saveConfig();
}
