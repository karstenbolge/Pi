#include <stdint.h>
#include <stdio.h>
#include "../hdr/data70.h"

// http://www.identifont.com/similar?2SS

uint8_t print0At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t print1At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t print2At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t print3At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t print4At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t print5At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t print6At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t print7At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t print8At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t print9At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printAAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;

  return width;
}

uint8_t printBAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printCAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printDAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printEAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printFAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printGAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printHAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printIAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printJAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printKAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printLAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printMAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 9;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;
  dmd[x + 7][y] = color;
  dmd[x + 8][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = bgColor;

  return width;
}

uint8_t printNAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printOAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printPAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printQAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printRAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printSAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printTAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printUAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printVAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printWAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 9;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;
  dmd[x + 7][y] = color;
  dmd[x + 8][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;
  dmd[x + 8][y] = bgColor;

  return width;
}

uint8_t printXAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printYAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printZAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printaAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printbAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printcAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printdAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printeAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printfAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 4;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  return width;
}

uint8_t printgAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printhAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printiAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printjAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //1+
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printkAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printlAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printmAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 8;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;
  dmd[x + 7][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printnAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printoAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printpAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printqAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  return width;
}

uint8_t printrAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  return width;
}

uint8_t printsAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printtAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 4;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  return width;
}

uint8_t printuAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printvAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printwAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 8;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;
  dmd[x + 7][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;
  dmd[x + 7][y] = bgColor;

  return width;
}

uint8_t printxAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printyAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  return width;
}

uint8_t printzAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printEsclamationAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return 3;
}

uint8_t printGooseEyesAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return 6;
}

uint8_t printHashAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printTurtleAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printPercentAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printAndAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printSlashAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  return width;
}

uint8_t printForwardParatheseAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printBackwardParatheseAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printEqualAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  return width;
}

uint8_t printQuestionAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printAtAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printPoundAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printDollarAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printEuroAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printForwardBraceAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 4;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  return width;
}

uint8_t printForwardSquareAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printBackwardSquareAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printBackwardBraceAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 4;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;

  return width;
}

uint8_t printPipeAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printTilteAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = color;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}

uint8_t printBackSlashAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  return width;
}

uint8_t printPointAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printCommaAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printMinusAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  return width;
}

uint8_t printPlusAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  return width;
}

uint8_t printPlusMinusAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;

  return width;
}

uint8_t printAsterixAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printFnutAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = color;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;

  return width;
}

uint8_t printHatAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = color;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = color;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = color;
  dmd[x + 5][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = color;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = color;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;

  return width;
}

uint8_t printEmptyAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t color, rgb_t bgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //1
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //2
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //3
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //4
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //5
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //6
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //7
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //8
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //9
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  y++; //10
  dmd[x + 0][y] = bgColor;
  dmd[x + 1][y] = bgColor;
  dmd[x + 2][y] = bgColor;
  dmd[x + 3][y] = bgColor;
  dmd[x + 4][y] = bgColor;
  dmd[x + 5][y] = bgColor;
  dmd[x + 6][y] = bgColor;

  return width;
}
