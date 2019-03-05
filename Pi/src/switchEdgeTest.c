#include "../hdr/display.h"
#include "../hdr/switchEdgeTest.h"
#include "../hdr/window.h"

#define MODE_OFF 0
#define MODE_SHOW 1
#define MODE_SHOW_SINGLE 2

uint8_t inSwitchEdgeTestMode = MODE_OFF;
uint8_t showColumn, showRow;

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
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      return "Not used";
    case 12:
      return "Up";
    case 13:
    case 14:
      return "Not used";
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
  for (int i = 9; i < 138; i++)
  {
    for (int j = 1; j < 10; j++)
    {
      dmd[i][j * 9 + 1] = *pColor;
    }
  }

  // vertical
  for (int i = 1; i < 18; i++)
  {
    for (int j = 9; j < 82; j++)
    {
      dmd[i * 9 + 1][j] = *pColor;
    }
  }
}

void drawDotIn(int i, int j, rgb_t *pColor)
{
  dmd[i * 9 + 3][j * 9 + 2] = *pColor;
  dmd[i * 9 + 4][j * 9 + 2] = *pColor;

  dmd[i * 9 + 2][j * 9 + 3] = *pColor;
  dmd[i * 9 + 3][j * 9 + 3] = *pColor;
  dmd[i * 9 + 4][j * 9 + 3] = *pColor;
  dmd[i * 9 + 5][j * 9 + 3] = *pColor;

  dmd[i * 9 + 1][j * 9 + 4] = *pColor;
  dmd[i * 9 + 2][j * 9 + 4] = *pColor;
  dmd[i * 9 + 3][j * 9 + 4] = *pColor;
  dmd[i * 9 + 4][j * 9 + 4] = *pColor;
  dmd[i * 9 + 5][j * 9 + 4] = *pColor;
  dmd[i * 9 + 6][j * 9 + 4] = *pColor;

  dmd[i * 9 + 1][j * 9 + 5] = *pColor;
  dmd[i * 9 + 2][j * 9 + 5] = *pColor;
  dmd[i * 9 + 3][j * 9 + 5] = *pColor;
  dmd[i * 9 + 4][j * 9 + 5] = *pColor;
  dmd[i * 9 + 5][j * 9 + 5] = *pColor;
  dmd[i * 9 + 6][j * 9 + 5] = *pColor;

  dmd[i * 9 + 2][j * 9 + 6] = *pColor;
  dmd[i * 9 + 3][j * 9 + 6] = *pColor;
  dmd[i * 9 + 4][j * 9 + 6] = *pColor;
  dmd[i * 9 + 5][j * 9 + 6] = *pColor;

  dmd[i * 9 + 3][j * 9 + 7] = *pColor;
  dmd[i * 9 + 4][j * 9 + 7] = *pColor;
}

void drawHithlightIn(int i, int j, rgb_t *pColor)
{
  // horizontal
  for (int k = 1; k < 9; k++)
  {
    dmd[i * 9 + 2][j * 9 + k] = *pColor;
    dmd[i * 9 + 2][j * 9 + 9 + k] = *pColor;
  }

  // vertical
  for (int k = 1; k < 9; k++)
  {
    dmd[i * 9 + k][j * 9 + 2] = *pColor;
    dmd[i * 9 + 9 + k][j * 9 + 2] = *pColor;
  }
}

void showMatrix(uint16_t oldInputRegister[8])
{
  if (inSwitchEdgeTestMode != MODE_OFF)
  {
    clearDmd();
    clearScreen();
    rgb_t color, colorBlue;
    setColorType(&color, COLOR_RED);
    setColorType(&colorBlue, COLOR_BLUE);

    // draw frame in loop draw actual
    drawDmdFrame(&color);

    printf("  0 1 2 3 4 5 6 7 8 9 a b c d e f\n");
    for (int i = 0; i < 8; i++)
    {
      printf("%d ", i);
      for (int j = 0; j < 16; j++)
      {
        if (oldInputRegister[i] & 1 << j)
        {
          if (inSwitchEdgeTestMode == MODE_SHOW_SINGLE && showColumn == i && showRow == j)
          {
            drawDotIn(i, j, &colorBlue);
            printf("X ");
          }
          else
          {
            drawDotIn(i, j, &color);
            printf("x ");
          }
        }
        else
        {
          if (inSwitchEdgeTestMode == MODE_SHOW_SINGLE && showColumn == i && showRow == j)
          {
            drawHithlightIn(i, j, &colorBlue);
            printf("- ");
          }
          else
          {
            printf(". ");
          }
        }
      }
      printf("\n");
    }
    if (inSwitchEdgeTestMode == MODE_SHOW_SINGLE)
    {
      printf("%s\n", getSwitchName());
    }
    refreshDmd();
  }
}

void switchEdgeTestOpen()
{
  inSwitchEdgeTestMode = MODE_SHOW;
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