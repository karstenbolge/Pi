#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/setGameId.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"
#include "../hdr/sound.h"
#include "../hdr/inputField.h"

void showGameId()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();
  printAtLineAndPosition("This game id", 1, 0, &color, NULL);

  displayInputFieldAt(3);

  refreshDmd();
}

void setGameIdOpen()
{
  openInputField(config.gameId, 31);
  showGameId();
}

void setGameIdExit()
{
  closeInpuField();
}

void setGameIdEnter()
{
  if (strcmp(getInputFieldValue(), config.gameId) == 0)
  {
    menuExit();
    return;
  }

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  char str[32];
  printCenterAtLine("Game id set to ", 1, &color, NULL);
  sprintf(str, "%s", getInputFieldValue());
  printCenterAtLine(str, 3, &color, NULL);
  refreshDmd();

  strcpy(config.gameId, getInputFieldValue());
  saveConfig();
}
