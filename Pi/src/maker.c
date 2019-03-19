#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../hdr/data70.h"
#include "../hdr/display.h"

int size;

int lines;

int board[20][22];

int cursorX, cursorY;

void dmdToBoard()
{
  for (int j = 0; j < 22; j++)
  {
    for (int i = 0; i < 20; i++)
    {
      if (dmd[j][i].red != 0)
      {
        board[j][i] = 1;
      }
    }
  }
}

void clearBoard()
{
  for (int j = 0; j < 22; j++)
  {
    for (int i = 0; i < 20; i++)
    {
      board[i][j] = 0;
    }
  }
}

void saveFont()
{
  time_t rawtime;
  struct tm *timeinfo;

  time(&rawtime);
  timeinfo = localtime(&rawtime);

  char fileName[256];

  sprintf(fileName, "./%d-%02d-%02d:%02d:%02d:%02d", timeinfo->tm_year + 1900, timeinfo->tm_mon + 1, timeinfo->tm_mday, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
  FILE *pOutputFile = fopen(fileName, "w");

  int width = 0;
  for (int j = 0; j < 22; j++)
  {
    for (int i = 0; i < 20; i++)
    {
      if (board[i][j] == 1 && i > width)
      {
        width = i + 1;
      }
    }
  }

  fprintf(pOutputFile, "uint8_t print?At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)\n");
  fprintf(pOutputFile, "{\n");
  fprintf(pOutputFile, "  uint8_t width = %d;\n", width);
  fprintf(pOutputFile, "  if (x + width > DMD_WIDTH || y + %d > DMD_HEIGHT)\n", size == 1 ? 10 : 15);
  fprintf(pOutputFile, "  {\n");
  fprintf(pOutputFile, "    return 0;\n");
  fprintf(pOutputFile, "  }\n\n");

  fprintf(pOutputFile, "  if (pColor != NULL)\n");
  fprintf(pOutputFile, "  {\n");
  for (int j = 0; j < 22; j++)
  {
    for (int i = 0; i < 20; i++)
    {
      if (board[i][j] == 1)
      {
        fprintf(pOutputFile, "    dmd[x + %d][y + %d] = *pColor;\n", i, j);
      }
    }
  }
  fprintf(pOutputFile, "  }\n\n");

  fprintf(pOutputFile, "  if (pBgColor != NULL)\n");
  fprintf(pOutputFile, "  {\n");
  for (int j = 0; j < 22; j++)
  {
    for (int i = 0; i < 20; i++)
    {
      if (board[i][j] == 0)
      {
        fprintf(pOutputFile, "    dmd[x + %d][y + %d] = *pBgColor;\n", i, j);
      }
    }
  }
  fprintf(pOutputFile, "  }\n\n");

  fprintf(pOutputFile, "  return width;\n");
  fprintf(pOutputFile, "}\n");

  fclose(pOutputFile);

  exit(0);
}

void printBoard()
{
  clearScreen();

  printf("  0123456789abcdef0123\n");
  for (int j = 0; j < 11 * size; j++)
  {
    printf("%2x", j);
    for (int i = 0; i < 20; i++)
    {
      if (i == cursorX && j == cursorY)
      {
        if (board[i][j] == 1)
        {
          printf("x");
        }
        else
        {
          printf("+");
        }
      }
      else
      {
        if (board[i][j] == 1)
        {
          printf("X");
        }
        else
        {
          if (lines == 1)
          {
            if (j == 3 * size || j == 8 * size)
            {
              printf("_");
            }
            else
            {
              printf(".");
            }
          }
          else
          {
            {
              printf(" ");
            }
          }
        }
      }
    }
    printf("\n");
  }
}

int main(int argc, char **argv)
{
  clearBoard();
  size = 1;
  lines = 0;
  cursorX = 0;
  cursorY = 0;
  if (argc >= 2)
  {
    if (atoi(argv[1]) == 2)
    {
      size = 2;
    }
  }

  if (argc >= 3)
  {
    rgb_t color, bgColor;
    setColorType(&color, COLOR_RED);

    if (size == 1)
    {
      printAtLine(argv[2], 0, &color, NULL);
    }
    else
    {
      printLargeAtLineAndPosition(argv[2], 0, 0, &color, NULL);
    }

    dmdToBoard();
  }

  if (argc >= 4)
  {
    if (atoi(argv[3]) == 1)
    {
      lines = 1;
    }
  }

  char c;
  while (1)
  {
    printBoard();
    c = getchar();
    switch (c)
    {
    case '8':
      cursorY--;
      break;
    case '2':
      cursorY++;
      break;
    case '4':
      cursorX--;
      break;
    case '6':
      cursorX++;
      break;
    case 'x':
      board[cursorX][cursorY] = 1;
      cursorX++;
      break;
    case ' ':
      board[cursorX][cursorY] = 0;
      cursorX++;
      break;
    case 's':
      saveFont();
      break;

    default:
      break;
    }

    if (cursorY > 11 * size)
    {
      cursorY = 0;
    }
    if (cursorX < 0)
    {
      cursorX = 15;
    }
    if (cursorY < 0)
    {
      cursorY = 11 * size - 1;
    }
    if (cursorX > 15)
    {
      cursorX = 0;
    }
  }
}
