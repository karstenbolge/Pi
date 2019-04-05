#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/factoryReset.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"

#define IN_MODE_YES 1
#define IN_MODE_NO 0
#define IN_MODE_DONE 2
uint8_t inFactoryReset;

void showFactoryReset()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();
  printAtLineAndPosition("Factory reset?", 1, 0, &color, NULL);
  if (inFactoryReset == IN_MODE_YES)
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

void factoryResetOpen()
{
  inFactoryReset = IN_MODE_YES;
  showFactoryReset();
}

void factoryResetUp()
{
  if (inFactoryReset == IN_MODE_DONE)
  {
    return menuExit();
  }

  inFactoryReset = inFactoryReset == IN_MODE_YES ? IN_MODE_NO : IN_MODE_YES;
  showFactoryReset();
}

void factoryResetDown()
{
  factoryResetUp();
}

void factoryResetEnter()
{
  if (inFactoryReset != IN_MODE_YES)
  {
    menuExit();
    return;
  }

  inFactoryReset = IN_MODE_DONE;

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Reset to factory defaults", 1, &color, NULL);

  refreshDmd();

  initConfig();
  saveConfig();
}
