#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/tournamentMode.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"

#define IN_MODE_YES 1
#define IN_MODE_NO 0
#define IN_DECIMAL_POINT 0
#define IN_DECIMAL_COMMA 1

#define IN_MODE_DONE 7
uint8_t inTournamentMode;

void showTournamentMode()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();
  printAtLineAndPosition("Tournament mode?", 1, 0, &color, NULL);
  if (inTournamentMode == IN_MODE_YES)
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

void tournamentModeOpen()
{
  inTournamentMode = config.tournamentMode;
  showTournamentMode();
}

void tournamentModeUp()
{
  if (inTournamentMode == IN_MODE_DONE)
  {
    return menuExit();
  }

  inTournamentMode = inTournamentMode == IN_MODE_YES ? IN_MODE_NO : IN_MODE_YES;
  showTournamentMode();
}

void tournamentModeDown()
{
  tournamentModeUp();
}

void tournamentModeEnter()
{
  if (inTournamentMode == config.tournamentMode)
  {
    menuExit();
    return;
  }

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  if (inTournamentMode == IN_MODE_YES)
  {
    printCenterAtLine("Tournament mode on", 1, &color, NULL);
  }
  else
  {
    printCenterAtLine("Tournament mode off", 1, &color, NULL);
  }
  refreshDmd();

  config.tournamentMode = inTournamentMode;
  saveConfig();

  inTournamentMode = IN_MODE_DONE;
}

//game restart
uint8_t inGameRestart;

void showGameRestart()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();
  printAtLineAndPosition("Game restart?", 1, 0, &color, NULL);
  if (inGameRestart == ALLOW_RESTART_NEVER)
  {
    uint16_t length = printAtLineAndPosition("Never", 3, 0, &bgColor, &color);
    frameLine(3, length, &color);

    printAtLineAndPosition("Slow", 4, 0, &color, &bgColor);
    printAtLineAndPosition("Instant", 5, 0, &color, &bgColor);
  }
  if (inGameRestart == ALLOW_RESTART_SLOW)
  {
    printAtLineAndPosition("Never", 3, 0, &color, &bgColor);

    uint16_t length = printAtLineAndPosition("Slow", 4, 0, &bgColor, &color);
    frameLine(4, length, &color);

    printAtLineAndPosition("Instant", 5, 0, &color, &bgColor);
  }
  if (inGameRestart == ALLOW_RESTART_INSTANT)
  {
    printAtLineAndPosition("Never", 3, 0, &color, &bgColor);
    printAtLineAndPosition("Slow", 4, 0, &color, &bgColor);

    uint16_t length = printAtLineAndPosition("Instant", 5, 0, &bgColor, &color);
    frameLine(5, length, &color);
  }
  refreshDmd();
}

void gameRestartOpen()
{
  inGameRestart = config.allowRestart;
  showGameRestart();
}

void gameRestartUp()
{
  printf("gameRestartUp %d\n", inGameRestart);
  if (inGameRestart == IN_MODE_DONE)
  {
    return menuExit();
  }

  if (inGameRestart == ALLOW_RESTART_NEVER)
  {
    inGameRestart = ALLOW_RESTART_SLOW;
  }
  else if (inGameRestart == ALLOW_RESTART_SLOW)
  {
    inGameRestart = ALLOW_RESTART_INSTANT;
  }
  else
  {
    inGameRestart = ALLOW_RESTART_NEVER;
  }

  showGameRestart();
}

void gameRestartDown()
{
  if (inGameRestart == IN_MODE_DONE)
  {
    return menuExit();
  }

  if (inGameRestart == ALLOW_RESTART_NEVER)
  {
    inGameRestart = ALLOW_RESTART_INSTANT;
  }
  else if (inGameRestart == ALLOW_RESTART_SLOW)
  {
    inGameRestart = ALLOW_RESTART_NEVER;
  }
  else
  {
    inGameRestart = ALLOW_RESTART_SLOW;
  }

  showGameRestart();
}

void gameRestartEnter()
{
  if (inGameRestart == config.allowRestart)
  {
    menuExit();
    return;
  }

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Game restart set to", 1, &color, NULL);
  if (inGameRestart == ALLOW_RESTART_NEVER)
  {
    printCenterAtLine("Never", 2, &color, NULL);
  }
  if (inGameRestart == ALLOW_RESTART_SLOW)
  {
    printCenterAtLine("Slow", 2, &color, NULL);
  }
  if (inGameRestart == ALLOW_RESTART_INSTANT)
  {
    printCenterAtLine("Instant", 2, &color, NULL);
  }

  refreshDmd();

  config.allowRestart = inGameRestart;
  saveConfig();

  inGameRestart = IN_MODE_DONE;
}

//decimal seperator
uint8_t inDecimalSeperator;

void showDecimalSeperator()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();
  printAtLineAndPosition("Decimal seperator", 1, 0, &color, NULL);
  if (inDecimalSeperator == IN_DECIMAL_POINT)
  {
    uint16_t length = printAtLineAndPosition(".", 3, 0, &bgColor, &color);
    frameLine(3, length, &color);

    printAtLineAndPosition(",", 4, 0, &color, &bgColor);
  }
  else
  {
    printAtLineAndPosition(".", 3, 0, &color, &bgColor);

    uint16_t length = printAtLineAndPosition(",", 4, 0, &bgColor, &color);
    frameLine(4, length, &color);
  }
  refreshDmd();
}

void decimalSeperatorOpen()
{
  inDecimalSeperator = config.decimalSeperator == '.' ? IN_DECIMAL_POINT : IN_DECIMAL_COMMA;
  showDecimalSeperator();
}

void decimalSeperatorUp()
{
  if (inDecimalSeperator == IN_MODE_DONE)
  {
    return menuExit();
  }

  inDecimalSeperator = inDecimalSeperator == IN_DECIMAL_POINT ? IN_DECIMAL_COMMA : IN_DECIMAL_POINT;
  showTournamentMode();
}

void decimalSeperatorDown()
{
  decimalSeperatorUp();
}

void decimalSeperatorEnter()
{
  if (inDecimalSeperator == (config.decimalSeperator == '.' ? IN_DECIMAL_POINT : IN_DECIMAL_COMMA))
  {
    menuExit();
    return;
  }

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  printCenterAtLine("Decimal seperator", 1, &color, NULL);
  if (inDecimalSeperator == IN_DECIMAL_POINT)
  {
    printCenterAtLine("set to point .", 2, &color, NULL);
  }
  else
  {
    printCenterAtLine("set to comma ,", 1, &color, NULL);
  }
  refreshDmd();

  config.decimalSeperator = inDecimalSeperator;
  saveConfig();

  inDecimalSeperator = IN_MODE_DONE;
}
