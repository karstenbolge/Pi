#include <stdio.h>
#include <stdlib.h>

int size;

int board[16][22];

int cursorX, cursorY;

void clearBoard()
{
  for (int j = 0; j < 22; j++)
  {
    for (int i = 0; i < 16; i++)
    {
      board[i][j] = 0;
    }
  }
}

void clearScreen()
{
  system("@cls||clear");
}

void printBoard()
{
  clearScreen();

  printf("  0123456789abcdef\n");
  for (int j = 0; j < 11 * size; j++)
  {
    printf("%2x", j);
    for (int i = 0; i < 16; i++)
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
          if (j == 3 * size || j == 8 * size)
          {
            printf("_");
          }
          else
          {
            printf(".");
          }
        }
      }
    }
    printf("\n");
  }
}

int main(int argc, char **argv)
{
  size = 1;
  cursorX = 0;
  cursorY = 0;
  if (argc == 2)
  {
    if (atoi(argv[1]) == 2)
    {
      size = 2;
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
