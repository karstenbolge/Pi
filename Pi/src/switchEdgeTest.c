#include "../hdr/display.h"
#include "../hdr/switchEdgeTest.h"
#include "../hdr/window.h"

#define MODE_OFF 0
#define MODE_SHOW 1
#define MODE_SHOW_SINGLE 2
#define MODE_SHOW_LEVELS 3

uint8_t inSwitchEdgeTestMode = MODE_OFF;
uint8_t showColumn, showRow;
uint8_t levelBeat;

char *getSwitchName()
{
  switch (showColumn)
  {
  case 0:
  case 1:
    return "Not used";
  case 2:
    switch (showRow)
    {
    case 0:
    case 1:
      return "Not used";
    case 2:
      return "Escape";
    case 3:
      return "Enter";
    case 4:
      return "Not used";
    case 5:
      return "Left flipper";
    case 6:
      return "Right flipper";
    case 7:
    case 8:
    case 9:
      return "Not used";
    case 10:
      return "Start";
    case 11:
      return "Lock ball 1";
    case 12:
      return "Up";
    case 13:
      return "Plunger";
    case 14:
      return "Drain ball 3";
    case 15:
      return "Down";
    }
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    break;
  }

  return "Not used";
}

void drawDmdFrame(rgb_t *pColor)
{
  // horizontal
  for (int i = 9; i < 154; i++)
  {
    for (int j = 1; j < 10; j++)
    {
      dmd[i][j * 9] = *pColor;
    }
  }

  // vertical
  for (int i = 1; i < 18; i++)
  {
    for (int j = 9; j < 82; j++)
    {
      dmd[i * 9][j] = *pColor;
    }
  }
}

void drawDotIn(int i, int j, rgb_t *pColor)
{
  j++;
  i++;
  dmd[i * 9 + 4][j * 9 + 2] = *pColor;
  dmd[i * 9 + 5][j * 9 + 2] = *pColor;

  dmd[i * 9 + 3][j * 9 + 3] = *pColor;
  dmd[i * 9 + 4][j * 9 + 3] = *pColor;
  dmd[i * 9 + 5][j * 9 + 3] = *pColor;
  dmd[i * 9 + 6][j * 9 + 3] = *pColor;

  dmd[i * 9 + 2][j * 9 + 4] = *pColor;
  dmd[i * 9 + 3][j * 9 + 4] = *pColor;
  dmd[i * 9 + 4][j * 9 + 4] = *pColor;
  dmd[i * 9 + 5][j * 9 + 4] = *pColor;
  dmd[i * 9 + 6][j * 9 + 4] = *pColor;
  dmd[i * 9 + 7][j * 9 + 4] = *pColor;

  dmd[i * 9 + 2][j * 9 + 5] = *pColor;
  dmd[i * 9 + 3][j * 9 + 5] = *pColor;
  dmd[i * 9 + 4][j * 9 + 5] = *pColor;
  dmd[i * 9 + 5][j * 9 + 5] = *pColor;
  dmd[i * 9 + 6][j * 9 + 5] = *pColor;
  dmd[i * 9 + 7][j * 9 + 5] = *pColor;

  dmd[i * 9 + 3][j * 9 + 6] = *pColor;
  dmd[i * 9 + 4][j * 9 + 6] = *pColor;
  dmd[i * 9 + 5][j * 9 + 6] = *pColor;
  dmd[i * 9 + 6][j * 9 + 6] = *pColor;

  dmd[i * 9 + 4][j * 9 + 7] = *pColor;
  dmd[i * 9 + 5][j * 9 + 7] = *pColor;
}

void drawHithlightIn(int j, int i, rgb_t *pColor)
{
  // horizontal
  for (int k = 1; k < 7; k++)
  {
    dmd[i * 9 + 10 + k][j * 9 + 10] = *pColor;
    dmd[i * 9 + 10 + k][j * 9 + 17] = *pColor;
  }

  // vertical
  for (int k = 1; k < 9; k++)
  {
    dmd[i * 9 + 10][j * 9 + 9 + k] = *pColor;
    dmd[i * 9 + 17][j * 9 + 9 + k] = *pColor;
  }
}

void getNextSwitch()
{
  // rest of row
  if (showRow < 15)
  {
    for (int i = showRow + 1; i < 16; i++)
    {
      if (oldInputRegister[showColumn] & 1 << i)
      {
        showRow = i;
        return;
      }
    }
  }

  //rest of colunms
  if (showColumn < 7)
  {
    for (int j = showColumn + 1; j < 8; j++)
    {
      for (int i = 0; i < 16; i++)
      {
        if (oldInputRegister[j] & 1 << i)
        {
          showColumn = j;
          showRow = i;
          return;
        }
      }
    }
  }

  //top of matrix
  for (int j = 0; j < showColumn + 1; j++)
  {
    for (int i = 0; i < 16; i++)
    {
      if (oldInputRegister[j] & 1 << i)
      {
        showColumn = j;
        showRow = i;
        return;
      }
    }
  }

  // default to 0, 0
  showColumn = 0;
  showRow = 0;
}

void switchBeat(uint8_t tick)
{
  if (inSwitchEdgeTestMode != MODE_SHOW_LEVELS)
  {
    return;
  }

  levelBeat++;
  if (levelBeat > 48)
  {
    levelBeat = 0;
    getNextSwitch();
    showMatrix(oldInputRegister);
  }
}

void showMatrix(uint16_t oldInputRegister[8])
{
  if (inSwitchEdgeTestMode != MODE_OFF)
  {
    clearDmd();
    rgb_t color, colorYellow, bgColor;
    setColorType(&color, COLOR_RED);
    setColorType(&colorYellow, COLOR_YELLOW);
    setColorType(&bgColor, COLOR_BLACK);

    // draw frame in loop draw actual
    drawDmdFrame(&color);

    for (int j = 0; j < 8; j++)
    {
      for (int i = 0; i < 16; i++)
      {
        if (oldInputRegister[j] & 1 << i)
        {
          if ((inSwitchEdgeTestMode == MODE_SHOW_SINGLE || inSwitchEdgeTestMode == MODE_SHOW_LEVELS) && showColumn == j && showRow == i)
          {
            drawDotIn(i, j, &colorYellow);
          }
          else
          {
            drawDotIn(i, j, &color);
          }
        }
        else
        {
          if (inSwitchEdgeTestMode == MODE_SHOW_SINGLE && showColumn == j && showRow == i)
          {
            drawHithlightIn(j, i, &colorYellow);
          }
          else
          {
          }
        }
      }
    }
    if (inSwitchEdgeTestMode == MODE_SHOW_SINGLE || inSwitchEdgeTestMode == MODE_SHOW_LEVELS)
    {
      printAtLineAndPosition(getSwitchName(), 7, 10, &color, &bgColor);
    }
    refreshDmd();
  }
}

void switchEdgeTestOpen()
{
  inSwitchEdgeTestMode = MODE_SHOW;
}

void switchEdgeLevelTestOpen()
{
  inSwitchEdgeTestMode = MODE_SHOW_LEVELS;
  levelBeat = 0;
  showColumn = 0;
  showRow = 0;

  getNextSwitch();
}

void switchEdgeTestOpenSingle()
{
  inSwitchEdgeTestMode = MODE_SHOW_SINGLE;
  showColumn = 0;
  showRow = 0;
}

void switchEdgeTestUp()
{
  showColumn--;
  if (showColumn == 255)
  {
    showColumn = 7;
    showRow--;
  }

  if (showRow == 255)
  {
    showRow = 15;
  }
}

void switchEdgeTestDown()
{
  showColumn++;
  if (showColumn > 7)
  {
    showColumn = 0;
    showRow++;
  }

  if (showRow > 15)
  {
    showRow = 0;
  }
}

void switchEdgeTestEnter()
{
  showRow++;
  if (showRow > 15)
  {
    showRow = 0;
  }
}

void switchEdgeTestExit()
{
  inSwitchEdgeTestMode = MODE_OFF;
}