#include <stdint.h>
#include <stdio.h>
#include "../hdr/data70.h"

// http://www.identifont.com/similar?2SS

uint8_t print0At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t print1At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 4][y] = *pColor;

    dmd[x + 4][y + 1] = *pColor;

    dmd[x + 4][y + 2] = *pColor;

    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;

    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;

    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;

    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t print2At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t print3At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t print4At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t print5At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t print6At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t print7At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t print8At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t print9At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}
uint8_t printAAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printBAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }
  return width;
}

uint8_t printCAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printDAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printEAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printFAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printGAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printHAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printIAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printJAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 5][y] = *pColor;

    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printKAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 5][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printLAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printMAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 9;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;
    dmd[x + 7][y] = *pColor;
    dmd[x + 8][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 8][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;
    dmd[x + 8][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 8][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 8][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 8][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 8][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 8][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;
    dmd[x + 7][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;
    dmd[x + 7][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;
    dmd[x + 7][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;
    dmd[x + 7][y + 8] = *pBgColor;
    dmd[x + 8][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;
    dmd[x + 8][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
    dmd[x + 8][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printNAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printOAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printPAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printQAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printRAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printSAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printTAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 3][y + 1] = *pColor;

    dmd[x + 3][y + 2] = *pColor;

    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;

    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;

    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;

    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printUAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printVAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printWAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 9;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 8][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 8][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;
    dmd[x + 8][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 8][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 8][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 8][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 8][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
    dmd[x + 7][y + 7] = *pColor;
    dmd[x + 8][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;
    dmd[x + 7][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;
    dmd[x + 7][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;
    dmd[x + 7][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;
    dmd[x + 7][y + 8] = *pBgColor;
    dmd[x + 8][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;
    dmd[x + 8][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
    dmd[x + 8][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printXAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printYAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;

    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;

    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printZAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printaAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }
  return width;
}

uint8_t printbAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }
  return width;
}

uint8_t printcAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }
  return width;
}

uint8_t printdAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 5][y] = *pColor;

    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printeAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printfAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 4;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printgAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;

    dmd[x + 5][y + 8] = *pColor;

    dmd[x + 1][y + 9] = *pColor;
    dmd[x + 2][y + 9] = *pColor;
    dmd[x + 3][y + 9] = *pColor;
    dmd[x + 4][y + 9] = *pColor;
    dmd[x + 5][y + 9] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printhAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printiAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 2][y + 1] = *pColor;

    dmd[x + 1][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printjAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 2][y + 1] = *pColor;

    dmd[x + 1][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;

    dmd[x + 2][y + 8] = *pColor;

    dmd[x + 1][y + 9] = *pColor;
    dmd[x + 2][y + 9] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printkAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printlAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printmAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 8;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;
    dmd[x + 7][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 7][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 7][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 7][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;
    dmd[x + 7][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;
    dmd[x + 7][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;
    dmd[x + 7][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printnAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printoAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printpAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;

    dmd[x + 1][y + 8] = *pColor;

    dmd[x + 1][y + 9] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printqAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;

    dmd[x + 5][y + 8] = *pColor;

    dmd[x + 5][y + 9] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printrAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printsAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 4][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printtAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 4;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printuAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printvAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printwAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 8;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 7][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;
    dmd[x + 7][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 7][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 7][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
    dmd[x + 7][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;
    dmd[x + 7][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;
    dmd[x + 7][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;
    dmd[x + 7][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printxAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printyAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;

    dmd[x + 5][y + 8] = *pColor;

    dmd[x + 1][y + 9] = *pColor;
    dmd[x + 2][y + 9] = *pColor;
    dmd[x + 3][y + 9] = *pColor;
    dmd[x + 4][y + 9] = *pColor;
    dmd[x + 5][y + 9] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printzAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printEsclamationAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return 3;
}

uint8_t printGooseEyesAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return 6;
}

uint8_t printHashAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y] = *pColor;
    dmd[x + 5][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printTurtleAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printPercentAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 3][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;

    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printAndAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printSlashAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 4][y] = *pColor;

    dmd[x + 4][y + 1] = *pColor;

    dmd[x + 3][y + 2] = *pColor;

    dmd[x + 3][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printForwardParatheseAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printBackwardParatheseAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printEqualAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printQuestionAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printAtAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printPoundAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printDollarAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 3][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;

    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printEuroAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printForwardBraceAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 4;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printForwardSquareAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printBackwardSquareAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printBackwardBraceAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 4;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printPipeAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printTilteAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 7;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 6][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printBackSlashAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;

    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printLessthanAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 4;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y + 0] = *pBgColor;
    dmd[x + 1][y + 0] = *pBgColor;
    dmd[x + 2][y + 0] = *pBgColor;
    dmd[x + 3][y + 0] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printGreaterthanAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 4;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 3][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y + 0] = *pBgColor;
    dmd[x + 1][y + 0] = *pBgColor;
    dmd[x + 2][y + 0] = *pBgColor;
    dmd[x + 3][y + 0] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printBackspaceAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y + 0] = *pBgColor;
    dmd[x + 1][y + 0] = *pBgColor;
    dmd[x + 2][y + 0] = *pBgColor;
    dmd[x + 3][y + 0] = *pBgColor;
    dmd[x + 4][y + 0] = *pBgColor;
    dmd[x + 5][y + 0] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printReturnAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 5][y + 0] = *pColor;

    dmd[x + 5][y + 1] = *pColor;

    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y + 0] = *pBgColor;
    dmd[x + 1][y + 0] = *pBgColor;
    dmd[x + 2][y + 0] = *pBgColor;
    dmd[x + 3][y + 0] = *pBgColor;
    dmd[x + 4][y + 0] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printPointAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printCommaAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;

    dmd[x + 2][y + 8] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printColonAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 2][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printSemiColonAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 2][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;

    dmd[x + 2][y + 8] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printMinusAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printUnderScoreAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printPlusAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y + 2] = *pColor;

    dmd[x + 3][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printPlusMinusAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 5;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;

    dmd[x + 1][y + 7] = *pColor;
    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printAsterixAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;

    dmd[x + 3][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;

    dmd[x + 1][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printFnutAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 3;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 1][y] = *pColor;
    dmd[x + 2][y] = *pColor;

    dmd[x + 1][y + 1] = *pColor;
    dmd[x + 2][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printHatAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printEmptyAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 10 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
  }

  return width;
}

uint8_t printBallAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 9;
  if (x + width > DMD_WIDTH || y + 7 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 3][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;
    dmd[x + 7][y + 1] = *pColor;

    dmd[x + 1][y + 2] = *pColor;
    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;
    dmd[x + 7][y + 2] = *pColor;
    dmd[x + 8][y + 2] = *pColor;

    dmd[x + 1][y + 3] = *pColor;
    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 7][y + 3] = *pColor;
    dmd[x + 8][y + 3] = *pColor;

    dmd[x + 1][y + 4] = *pColor;
    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 4][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 6][y + 4] = *pColor;
    dmd[x + 7][y + 4] = *pColor;
    dmd[x + 8][y + 4] = *pColor;

    dmd[x + 1][y + 5] = *pColor;
    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;
    dmd[x + 7][y + 5] = *pColor;
    dmd[x + 8][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;
    dmd[x + 7][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;

    /*dmd[x + 3][y + 8] = *pColor;
    dmd[x + 4][y + 8] = *pColor;
    dmd[x + 5][y + 8] = *pColor;
    dmd[x + 6][y + 8] = *pColor;*/
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 8][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 8][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 7][y + 7] = *pBgColor;
    dmd[x + 8][y + 7] = *pBgColor;
  }

  return width;
}

uint8_t printLarge0At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 14;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;
    dmd[x + 7][y] = *pColor;
    dmd[x + 8][y] = *pColor;
    dmd[x + 9][y] = *pColor;
    dmd[x + 10][y] = *pColor;
    dmd[x + 11][y] = *pColor;
    dmd[x + 12][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 3][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;
    dmd[x + 7][y + 1] = *pColor;
    dmd[x + 8][y + 1] = *pColor;
    dmd[x + 9][y + 1] = *pColor;
    dmd[x + 10][y + 1] = *pColor;
    dmd[x + 11][y + 1] = *pColor;
    dmd[x + 12][y + 1] = *pColor;
    dmd[x + 13][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;
    dmd[x + 11][y + 2] = *pColor;
    dmd[x + 12][y + 2] = *pColor;
    dmd[x + 13][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 12][y + 3] = *pColor;
    dmd[x + 13][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 12][y + 4] = *pColor;
    dmd[x + 13][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 12][y + 5] = *pColor;
    dmd[x + 13][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 11][y + 6] = *pColor;
    dmd[x + 12][y + 6] = *pColor;
    dmd[x + 13][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 10][y + 7] = *pColor;
    dmd[x + 11][y + 7] = *pColor;
    dmd[x + 12][y + 7] = *pColor;
    dmd[x + 13][y + 7] = *pColor;

    dmd[x + 2][y + 8] = *pColor;
    dmd[x + 3][y + 8] = *pColor;
    dmd[x + 10][y + 8] = *pColor;
    dmd[x + 11][y + 8] = *pColor;
    dmd[x + 12][y + 8] = *pColor;
    dmd[x + 13][y + 8] = *pColor;

    dmd[x + 2][y + 9] = *pColor;
    dmd[x + 3][y + 9] = *pColor;
    dmd[x + 10][y + 9] = *pColor;
    dmd[x + 11][y + 9] = *pColor;
    dmd[x + 12][y + 9] = *pColor;
    dmd[x + 13][y + 9] = *pColor;

    dmd[x + 2][y + 10] = *pColor;
    dmd[x + 3][y + 10] = *pColor;
    dmd[x + 10][y + 10] = *pColor;
    dmd[x + 11][y + 10] = *pColor;
    dmd[x + 12][y + 10] = *pColor;
    dmd[x + 13][y + 10] = *pColor;

    dmd[x + 2][y + 11] = *pColor;
    dmd[x + 3][y + 11] = *pColor;
    dmd[x + 10][y + 11] = *pColor;
    dmd[x + 11][y + 11] = *pColor;
    dmd[x + 12][y + 11] = *pColor;
    dmd[x + 13][y + 11] = *pColor;

    dmd[x + 2][y + 12] = *pColor;
    dmd[x + 3][y + 12] = *pColor;
    dmd[x + 10][y + 12] = *pColor;
    dmd[x + 11][y + 12] = *pColor;
    dmd[x + 12][y + 12] = *pColor;
    dmd[x + 13][y + 12] = *pColor;

    dmd[x + 2][y + 13] = *pColor;
    dmd[x + 3][y + 13] = *pColor;
    dmd[x + 4][y + 13] = *pColor;
    dmd[x + 9][y + 13] = *pColor;
    dmd[x + 10][y + 13] = *pColor;
    dmd[x + 11][y + 13] = *pColor;
    dmd[x + 12][y + 13] = *pColor;
    dmd[x + 13][y + 13] = *pColor;

    dmd[x + 2][y + 14] = *pColor;
    dmd[x + 3][y + 14] = *pColor;
    dmd[x + 4][y + 14] = *pColor;
    dmd[x + 5][y + 14] = *pColor;
    dmd[x + 6][y + 14] = *pColor;
    dmd[x + 7][y + 14] = *pColor;
    dmd[x + 8][y + 14] = *pColor;
    dmd[x + 9][y + 14] = *pColor;
    dmd[x + 10][y + 14] = *pColor;
    dmd[x + 11][y + 14] = *pColor;
    dmd[x + 12][y + 14] = *pColor;
    dmd[x + 13][y + 14] = *pColor;

    dmd[x + 3][y + 15] = *pColor;
    dmd[x + 4][y + 15] = *pColor;
    dmd[x + 5][y + 15] = *pColor;
    dmd[x + 6][y + 15] = *pColor;
    dmd[x + 7][y + 15] = *pColor;
    dmd[x + 8][y + 15] = *pColor;
    dmd[x + 9][y + 15] = *pColor;
    dmd[x + 10][y + 15] = *pColor;
    dmd[x + 11][y + 15] = *pColor;
    dmd[x + 12][y + 15] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 13][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;
    dmd[x + 8][y + 2] = *pBgColor;
    dmd[x + 9][y + 2] = *pBgColor;
    dmd[x + 10][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;
    dmd[x + 8][y + 3] = *pBgColor;
    dmd[x + 9][y + 3] = *pBgColor;
    dmd[x + 10][y + 3] = *pBgColor;
    dmd[x + 11][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;
    dmd[x + 8][y + 4] = *pBgColor;
    dmd[x + 9][y + 4] = *pBgColor;
    dmd[x + 10][y + 4] = *pBgColor;
    dmd[x + 11][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;
    dmd[x + 8][y + 5] = *pBgColor;
    dmd[x + 9][y + 5] = *pBgColor;
    dmd[x + 10][y + 5] = *pBgColor;
    dmd[x + 11][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;
    dmd[x + 7][y + 6] = *pBgColor;
    dmd[x + 8][y + 6] = *pBgColor;
    dmd[x + 9][y + 6] = *pBgColor;
    dmd[x + 10][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;
    dmd[x + 7][y + 7] = *pBgColor;
    dmd[x + 8][y + 7] = *pBgColor;
    dmd[x + 9][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;
    dmd[x + 7][y + 8] = *pBgColor;
    dmd[x + 8][y + 8] = *pBgColor;
    dmd[x + 9][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;
    dmd[x + 8][y + 9] = *pBgColor;
    dmd[x + 9][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
    dmd[x + 8][y + 10] = *pBgColor;
    dmd[x + 9][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 4][y + 11] = *pBgColor;
    dmd[x + 5][y + 11] = *pBgColor;
    dmd[x + 6][y + 11] = *pBgColor;
    dmd[x + 7][y + 11] = *pBgColor;
    dmd[x + 8][y + 11] = *pBgColor;
    dmd[x + 9][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;
    dmd[x + 4][y + 12] = *pBgColor;
    dmd[x + 5][y + 12] = *pBgColor;
    dmd[x + 6][y + 12] = *pBgColor;
    dmd[x + 7][y + 12] = *pBgColor;
    dmd[x + 8][y + 12] = *pBgColor;
    dmd[x + 9][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;
    dmd[x + 5][y + 13] = *pBgColor;
    dmd[x + 6][y + 13] = *pBgColor;
    dmd[x + 7][y + 13] = *pBgColor;
    dmd[x + 8][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;
    dmd[x + 13][y + 15] = *pBgColor;
  }

  return width;
}

uint8_t printLarge1At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 14;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 8][y] = *pColor;
    dmd[x + 9][y] = *pColor;

    dmd[x + 8][y + 1] = *pColor;
    dmd[x + 9][y + 1] = *pColor;

    dmd[x + 8][y + 2] = *pColor;
    dmd[x + 9][y + 2] = *pColor;

    dmd[x + 8][y + 3] = *pColor;
    dmd[x + 9][y + 3] = *pColor;

    dmd[x + 8][y + 4] = *pColor;
    dmd[x + 9][y + 4] = *pColor;

    dmd[x + 8][y + 5] = *pColor;
    dmd[x + 9][y + 5] = *pColor;

    dmd[x + 7][y + 6] = *pColor;
    dmd[x + 8][y + 6] = *pColor;
    dmd[x + 9][y + 6] = *pColor;

    dmd[x + 6][y + 7] = *pColor;
    dmd[x + 7][y + 7] = *pColor;
    dmd[x + 8][y + 7] = *pColor;
    dmd[x + 9][y + 7] = *pColor;

    dmd[x + 6][y + 8] = *pColor;
    dmd[x + 7][y + 8] = *pColor;
    dmd[x + 8][y + 8] = *pColor;
    dmd[x + 9][y + 8] = *pColor;

    dmd[x + 6][y + 9] = *pColor;
    dmd[x + 7][y + 9] = *pColor;
    dmd[x + 8][y + 9] = *pColor;
    dmd[x + 9][y + 9] = *pColor;

    dmd[x + 6][y + 10] = *pColor;
    dmd[x + 7][y + 10] = *pColor;
    dmd[x + 8][y + 10] = *pColor;
    dmd[x + 9][y + 10] = *pColor;

    dmd[x + 6][y + 11] = *pColor;
    dmd[x + 7][y + 11] = *pColor;
    dmd[x + 8][y + 11] = *pColor;
    dmd[x + 9][y + 11] = *pColor;

    dmd[x + 6][y + 12] = *pColor;
    dmd[x + 7][y + 12] = *pColor;
    dmd[x + 8][y + 12] = *pColor;
    dmd[x + 9][y + 12] = *pColor;

    dmd[x + 6][y + 13] = *pColor;
    dmd[x + 7][y + 13] = *pColor;
    dmd[x + 8][y + 13] = *pColor;
    dmd[x + 9][y + 13] = *pColor;

    dmd[x + 6][y + 14] = *pColor;
    dmd[x + 7][y + 14] = *pColor;
    dmd[x + 8][y + 14] = *pColor;
    dmd[x + 9][y + 14] = *pColor;

    dmd[x + 7][y + 15] = *pColor;
    dmd[x + 8][y + 15] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;
    dmd[x + 6][y] = *pBgColor;
    dmd[x + 7][y] = *pBgColor;
    dmd[x + 10][y] = *pBgColor;
    dmd[x + 11][y] = *pBgColor;
    dmd[x + 12][y] = *pBgColor;
    dmd[x + 13][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;
    dmd[x + 6][y + 1] = *pBgColor;
    dmd[x + 7][y + 1] = *pBgColor;
    dmd[x + 10][y + 1] = *pBgColor;
    dmd[x + 11][y + 1] = *pBgColor;
    dmd[x + 12][y + 1] = *pBgColor;
    dmd[x + 13][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;
    dmd[x + 10][y + 2] = *pBgColor;
    dmd[x + 11][y + 2] = *pBgColor;
    dmd[x + 12][y + 2] = *pBgColor;
    dmd[x + 13][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;
    dmd[x + 10][y + 3] = *pBgColor;
    dmd[x + 11][y + 3] = *pBgColor;
    dmd[x + 12][y + 3] = *pBgColor;
    dmd[x + 13][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;
    dmd[x + 10][y + 4] = *pBgColor;
    dmd[x + 11][y + 4] = *pBgColor;
    dmd[x + 12][y + 4] = *pBgColor;
    dmd[x + 13][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;
    dmd[x + 10][y + 5] = *pBgColor;
    dmd[x + 11][y + 5] = *pBgColor;
    dmd[x + 12][y + 5] = *pBgColor;
    dmd[x + 13][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;
    dmd[x + 10][y + 6] = *pBgColor;
    dmd[x + 11][y + 6] = *pBgColor;
    dmd[x + 12][y + 6] = *pBgColor;
    dmd[x + 13][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 10][y + 7] = *pBgColor;
    dmd[x + 11][y + 7] = *pBgColor;
    dmd[x + 12][y + 7] = *pBgColor;
    dmd[x + 13][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 10][y + 8] = *pBgColor;
    dmd[x + 11][y + 8] = *pBgColor;
    dmd[x + 12][y + 8] = *pBgColor;
    dmd[x + 13][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 10][y + 9] = *pBgColor;
    dmd[x + 11][y + 9] = *pBgColor;
    dmd[x + 12][y + 9] = *pBgColor;
    dmd[x + 13][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 10][y + 10] = *pBgColor;
    dmd[x + 11][y + 10] = *pBgColor;
    dmd[x + 12][y + 10] = *pBgColor;
    dmd[x + 13][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 2][y + 11] = *pBgColor;
    dmd[x + 3][y + 11] = *pBgColor;
    dmd[x + 4][y + 11] = *pBgColor;
    dmd[x + 5][y + 11] = *pBgColor;
    dmd[x + 10][y + 11] = *pBgColor;
    dmd[x + 11][y + 11] = *pBgColor;
    dmd[x + 12][y + 11] = *pBgColor;
    dmd[x + 13][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;
    dmd[x + 2][y + 12] = *pBgColor;
    dmd[x + 3][y + 12] = *pBgColor;
    dmd[x + 4][y + 12] = *pBgColor;
    dmd[x + 5][y + 12] = *pBgColor;
    dmd[x + 10][y + 12] = *pBgColor;
    dmd[x + 11][y + 12] = *pBgColor;
    dmd[x + 12][y + 12] = *pBgColor;
    dmd[x + 13][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;
    dmd[x + 2][y + 13] = *pBgColor;
    dmd[x + 3][y + 13] = *pBgColor;
    dmd[x + 4][y + 13] = *pBgColor;
    dmd[x + 5][y + 13] = *pBgColor;
    dmd[x + 10][y + 13] = *pBgColor;
    dmd[x + 11][y + 13] = *pBgColor;
    dmd[x + 12][y + 13] = *pBgColor;
    dmd[x + 13][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;
    dmd[x + 2][y + 14] = *pBgColor;
    dmd[x + 3][y + 14] = *pBgColor;
    dmd[x + 4][y + 14] = *pBgColor;
    dmd[x + 5][y + 14] = *pBgColor;
    dmd[x + 10][y + 14] = *pBgColor;
    dmd[x + 11][y + 14] = *pBgColor;
    dmd[x + 12][y + 14] = *pBgColor;
    dmd[x + 13][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;
    dmd[x + 3][y + 15] = *pBgColor;
    dmd[x + 4][y + 15] = *pBgColor;
    dmd[x + 5][y + 15] = *pBgColor;
    dmd[x + 6][y + 15] = *pBgColor;
    dmd[x + 9][y + 15] = *pBgColor;
    dmd[x + 10][y + 15] = *pBgColor;
    dmd[x + 11][y + 15] = *pBgColor;
    dmd[x + 12][y + 15] = *pBgColor;
    dmd[x + 13][y + 15] = *pBgColor;
  }

  return width;
}

uint8_t printLarge2At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 14;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;
    dmd[x + 7][y] = *pColor;
    dmd[x + 8][y] = *pColor;
    dmd[x + 9][y] = *pColor;
    dmd[x + 10][y] = *pColor;
    dmd[x + 11][y] = *pColor;
    dmd[x + 12][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 3][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;
    dmd[x + 7][y + 1] = *pColor;
    dmd[x + 8][y + 1] = *pColor;
    dmd[x + 9][y + 1] = *pColor;
    dmd[x + 10][y + 1] = *pColor;
    dmd[x + 11][y + 1] = *pColor;
    dmd[x + 12][y + 1] = *pColor;
    dmd[x + 13][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;
    dmd[x + 11][y + 2] = *pColor;
    dmd[x + 12][y + 2] = *pColor;
    dmd[x + 13][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 12][y + 3] = *pColor;
    dmd[x + 13][y + 3] = *pColor;

    dmd[x + 12][y + 4] = *pColor;
    dmd[x + 13][y + 4] = *pColor;

    dmd[x + 12][y + 5] = *pColor;
    dmd[x + 13][y + 5] = *pColor;

    dmd[x + 11][y + 6] = *pColor;
    dmd[x + 12][y + 6] = *pColor;
    dmd[x + 13][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
    dmd[x + 7][y + 7] = *pColor;
    dmd[x + 8][y + 7] = *pColor;
    dmd[x + 9][y + 7] = *pColor;
    dmd[x + 10][y + 7] = *pColor;
    dmd[x + 11][y + 7] = *pColor;
    dmd[x + 12][y + 7] = *pColor;
    dmd[x + 13][y + 7] = *pColor;

    dmd[x + 2][y + 8] = *pColor;
    dmd[x + 3][y + 8] = *pColor;
    dmd[x + 4][y + 8] = *pColor;
    dmd[x + 5][y + 8] = *pColor;
    dmd[x + 6][y + 8] = *pColor;
    dmd[x + 7][y + 8] = *pColor;
    dmd[x + 8][y + 8] = *pColor;
    dmd[x + 9][y + 8] = *pColor;
    dmd[x + 10][y + 8] = *pColor;
    dmd[x + 11][y + 8] = *pColor;
    dmd[x + 12][y + 8] = *pColor;

    dmd[x + 2][y + 9] = *pColor;
    dmd[x + 3][y + 9] = *pColor;
    dmd[x + 4][y + 9] = *pColor;
    dmd[x + 5][y + 9] = *pColor;
    dmd[x + 6][y + 9] = *pColor;

    dmd[x + 2][y + 10] = *pColor;
    dmd[x + 3][y + 10] = *pColor;
    dmd[x + 4][y + 10] = *pColor;
    dmd[x + 5][y + 10] = *pColor;

    dmd[x + 2][y + 11] = *pColor;
    dmd[x + 3][y + 11] = *pColor;
    dmd[x + 4][y + 11] = *pColor;
    dmd[x + 5][y + 11] = *pColor;

    dmd[x + 2][y + 12] = *pColor;
    dmd[x + 3][y + 12] = *pColor;
    dmd[x + 4][y + 12] = *pColor;
    dmd[x + 5][y + 12] = *pColor;

    dmd[x + 2][y + 13] = *pColor;
    dmd[x + 3][y + 13] = *pColor;
    dmd[x + 4][y + 13] = *pColor;
    dmd[x + 5][y + 13] = *pColor;
    dmd[x + 6][y + 13] = *pColor;

    dmd[x + 2][y + 14] = *pColor;
    dmd[x + 3][y + 14] = *pColor;
    dmd[x + 4][y + 14] = *pColor;
    dmd[x + 5][y + 14] = *pColor;
    dmd[x + 6][y + 14] = *pColor;
    dmd[x + 7][y + 14] = *pColor;
    dmd[x + 8][y + 14] = *pColor;
    dmd[x + 9][y + 14] = *pColor;
    dmd[x + 10][y + 14] = *pColor;
    dmd[x + 11][y + 14] = *pColor;
    dmd[x + 12][y + 14] = *pColor;
    dmd[x + 13][y + 14] = *pColor;

    dmd[x + 3][y + 15] = *pColor;
    dmd[x + 4][y + 15] = *pColor;
    dmd[x + 5][y + 15] = *pColor;
    dmd[x + 6][y + 15] = *pColor;
    dmd[x + 7][y + 15] = *pColor;
    dmd[x + 8][y + 15] = *pColor;
    dmd[x + 9][y + 15] = *pColor;
    dmd[x + 10][y + 15] = *pColor;
    dmd[x + 11][y + 15] = *pColor;
    dmd[x + 12][y + 15] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 13][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;
    dmd[x + 8][y + 2] = *pBgColor;
    dmd[x + 9][y + 2] = *pBgColor;
    dmd[x + 10][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;
    dmd[x + 8][y + 3] = *pBgColor;
    dmd[x + 9][y + 3] = *pBgColor;
    dmd[x + 10][y + 3] = *pBgColor;
    dmd[x + 11][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;
    dmd[x + 8][y + 4] = *pBgColor;
    dmd[x + 9][y + 4] = *pBgColor;
    dmd[x + 10][y + 4] = *pBgColor;
    dmd[x + 11][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;
    dmd[x + 8][y + 5] = *pBgColor;
    dmd[x + 9][y + 5] = *pBgColor;
    dmd[x + 10][y + 5] = *pBgColor;
    dmd[x + 11][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;
    dmd[x + 7][y + 6] = *pBgColor;
    dmd[x + 8][y + 6] = *pBgColor;
    dmd[x + 9][y + 6] = *pBgColor;
    dmd[x + 10][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 13][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;
    dmd[x + 8][y + 9] = *pBgColor;
    dmd[x + 9][y + 9] = *pBgColor;
    dmd[x + 10][y + 9] = *pBgColor;
    dmd[x + 11][y + 9] = *pBgColor;
    dmd[x + 12][y + 9] = *pBgColor;
    dmd[x + 13][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
    dmd[x + 8][y + 10] = *pBgColor;
    dmd[x + 9][y + 10] = *pBgColor;
    dmd[x + 10][y + 10] = *pBgColor;
    dmd[x + 11][y + 10] = *pBgColor;
    dmd[x + 12][y + 10] = *pBgColor;
    dmd[x + 13][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 6][y + 11] = *pBgColor;
    dmd[x + 7][y + 11] = *pBgColor;
    dmd[x + 8][y + 11] = *pBgColor;
    dmd[x + 9][y + 11] = *pBgColor;
    dmd[x + 10][y + 11] = *pBgColor;
    dmd[x + 11][y + 11] = *pBgColor;
    dmd[x + 12][y + 11] = *pBgColor;
    dmd[x + 13][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;
    dmd[x + 6][y + 12] = *pBgColor;
    dmd[x + 7][y + 12] = *pBgColor;
    dmd[x + 8][y + 12] = *pBgColor;
    dmd[x + 9][y + 12] = *pBgColor;
    dmd[x + 10][y + 12] = *pBgColor;
    dmd[x + 11][y + 12] = *pBgColor;
    dmd[x + 12][y + 12] = *pBgColor;
    dmd[x + 13][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;
    dmd[x + 7][y + 13] = *pBgColor;
    dmd[x + 8][y + 13] = *pBgColor;
    dmd[x + 9][y + 13] = *pBgColor;
    dmd[x + 10][y + 13] = *pBgColor;
    dmd[x + 11][y + 13] = *pBgColor;
    dmd[x + 12][y + 13] = *pBgColor;
    dmd[x + 13][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;
    dmd[x + 13][y + 15] = *pBgColor;
  }
  return width;
}

uint8_t printLarge3At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 14;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;
    dmd[x + 7][y] = *pColor;
    dmd[x + 8][y] = *pColor;
    dmd[x + 9][y] = *pColor;
    dmd[x + 10][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 3][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;
    dmd[x + 7][y + 1] = *pColor;
    dmd[x + 8][y + 1] = *pColor;
    dmd[x + 9][y + 1] = *pColor;
    dmd[x + 10][y + 1] = *pColor;
    dmd[x + 11][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;
    dmd[x + 9][y + 2] = *pColor;
    dmd[x + 10][y + 2] = *pColor;
    dmd[x + 11][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 10][y + 3] = *pColor;
    dmd[x + 11][y + 3] = *pColor;

    dmd[x + 10][y + 4] = *pColor;
    dmd[x + 11][y + 4] = *pColor;

    dmd[x + 10][y + 5] = *pColor;
    dmd[x + 11][y + 5] = *pColor;

    dmd[x + 9][y + 6] = *pColor;
    dmd[x + 10][y + 6] = *pColor;
    dmd[x + 11][y + 6] = *pColor;
    dmd[x + 12][y + 6] = *pColor;

    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
    dmd[x + 7][y + 7] = *pColor;
    dmd[x + 8][y + 7] = *pColor;
    dmd[x + 9][y + 7] = *pColor;
    dmd[x + 10][y + 7] = *pColor;
    dmd[x + 11][y + 7] = *pColor;
    dmd[x + 12][y + 7] = *pColor;
    dmd[x + 13][y + 7] = *pColor;

    dmd[x + 4][y + 8] = *pColor;
    dmd[x + 5][y + 8] = *pColor;
    dmd[x + 6][y + 8] = *pColor;
    dmd[x + 7][y + 8] = *pColor;
    dmd[x + 8][y + 8] = *pColor;
    dmd[x + 9][y + 8] = *pColor;
    dmd[x + 10][y + 8] = *pColor;
    dmd[x + 11][y + 8] = *pColor;
    dmd[x + 12][y + 8] = *pColor;
    dmd[x + 13][y + 8] = *pColor;

    dmd[x + 9][y + 9] = *pColor;
    dmd[x + 10][y + 9] = *pColor;
    dmd[x + 11][y + 9] = *pColor;
    dmd[x + 12][y + 9] = *pColor;
    dmd[x + 13][y + 9] = *pColor;

    dmd[x + 10][y + 10] = *pColor;
    dmd[x + 11][y + 10] = *pColor;
    dmd[x + 12][y + 10] = *pColor;
    dmd[x + 13][y + 10] = *pColor;

    dmd[x + 2][y + 11] = *pColor;
    dmd[x + 3][y + 11] = *pColor;
    dmd[x + 10][y + 11] = *pColor;
    dmd[x + 11][y + 11] = *pColor;
    dmd[x + 12][y + 11] = *pColor;
    dmd[x + 13][y + 11] = *pColor;

    dmd[x + 2][y + 12] = *pColor;
    dmd[x + 3][y + 12] = *pColor;
    dmd[x + 10][y + 12] = *pColor;
    dmd[x + 11][y + 12] = *pColor;
    dmd[x + 12][y + 12] = *pColor;
    dmd[x + 13][y + 12] = *pColor;

    dmd[x + 2][y + 13] = *pColor;
    dmd[x + 3][y + 13] = *pColor;
    dmd[x + 4][y + 13] = *pColor;
    dmd[x + 9][y + 13] = *pColor;
    dmd[x + 10][y + 13] = *pColor;
    dmd[x + 11][y + 13] = *pColor;
    dmd[x + 12][y + 13] = *pColor;
    dmd[x + 13][y + 13] = *pColor;

    dmd[x + 2][y + 14] = *pColor;
    dmd[x + 3][y + 14] = *pColor;
    dmd[x + 4][y + 14] = *pColor;
    dmd[x + 5][y + 14] = *pColor;
    dmd[x + 6][y + 14] = *pColor;
    dmd[x + 7][y + 14] = *pColor;
    dmd[x + 8][y + 14] = *pColor;
    dmd[x + 9][y + 14] = *pColor;
    dmd[x + 10][y + 14] = *pColor;
    dmd[x + 11][y + 14] = *pColor;
    dmd[x + 12][y + 14] = *pColor;
    dmd[x + 13][y + 14] = *pColor;

    dmd[x + 3][y + 15] = *pColor;
    dmd[x + 4][y + 15] = *pColor;
    dmd[x + 5][y + 15] = *pColor;
    dmd[x + 6][y + 15] = *pColor;
    dmd[x + 7][y + 15] = *pColor;
    dmd[x + 8][y + 15] = *pColor;
    dmd[x + 9][y + 15] = *pColor;
    dmd[x + 10][y + 15] = *pColor;
    dmd[x + 11][y + 15] = *pColor;
    dmd[x + 12][y + 15] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 11][y] = *pBgColor;
    dmd[x + 12][y] = *pBgColor;
    dmd[x + 13][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 12][y + 1] = *pBgColor;
    dmd[x + 13][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;
    dmd[x + 8][y + 2] = *pBgColor;
    dmd[x + 12][y + 2] = *pBgColor;
    dmd[x + 13][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;
    dmd[x + 8][y + 3] = *pBgColor;
    dmd[x + 9][y + 3] = *pBgColor;
    dmd[x + 12][y + 3] = *pBgColor;
    dmd[x + 13][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;
    dmd[x + 8][y + 4] = *pBgColor;
    dmd[x + 9][y + 4] = *pBgColor;
    dmd[x + 12][y + 4] = *pBgColor;
    dmd[x + 13][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;
    dmd[x + 8][y + 5] = *pBgColor;
    dmd[x + 9][y + 5] = *pBgColor;
    dmd[x + 12][y + 5] = *pBgColor;
    dmd[x + 13][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;
    dmd[x + 7][y + 6] = *pBgColor;
    dmd[x + 8][y + 6] = *pBgColor;
    dmd[x + 13][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;
    dmd[x + 8][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
    dmd[x + 8][y + 10] = *pBgColor;
    dmd[x + 9][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 4][y + 11] = *pBgColor;
    dmd[x + 5][y + 11] = *pBgColor;
    dmd[x + 6][y + 11] = *pBgColor;
    dmd[x + 7][y + 11] = *pBgColor;
    dmd[x + 8][y + 11] = *pBgColor;
    dmd[x + 9][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;
    dmd[x + 4][y + 12] = *pBgColor;
    dmd[x + 5][y + 12] = *pBgColor;
    dmd[x + 6][y + 12] = *pBgColor;
    dmd[x + 7][y + 12] = *pBgColor;
    dmd[x + 8][y + 12] = *pBgColor;
    dmd[x + 9][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;
    dmd[x + 5][y + 13] = *pBgColor;
    dmd[x + 6][y + 13] = *pBgColor;
    dmd[x + 7][y + 13] = *pBgColor;
    dmd[x + 8][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;
    dmd[x + 13][y + 15] = *pBgColor;
  }
  return width;
}

uint8_t printLarge4At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 14;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;
    dmd[x + 7][y] = *pColor;
    dmd[x + 8][y] = *pColor;
    dmd[x + 9][y] = *pColor;
    dmd[x + 10][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 3][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;
    dmd[x + 7][y + 1] = *pColor;
    dmd[x + 8][y + 1] = *pColor;
    dmd[x + 9][y + 1] = *pColor;
    dmd[x + 10][y + 1] = *pColor;
    dmd[x + 11][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;
    dmd[x + 9][y + 2] = *pColor;
    dmd[x + 10][y + 2] = *pColor;
    dmd[x + 11][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 10][y + 3] = *pColor;
    dmd[x + 11][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 10][y + 4] = *pColor;
    dmd[x + 11][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 10][y + 5] = *pColor;
    dmd[x + 11][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 10][y + 6] = *pColor;
    dmd[x + 11][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 10][y + 7] = *pColor;
    dmd[x + 11][y + 7] = *pColor;

    dmd[x + 2][y + 8] = *pColor;
    dmd[x + 3][y + 8] = *pColor;
    dmd[x + 10][y + 8] = *pColor;
    dmd[x + 11][y + 8] = *pColor;

    dmd[x + 2][y + 9] = *pColor;
    dmd[x + 3][y + 9] = *pColor;
    dmd[x + 10][y + 9] = *pColor;
    dmd[x + 11][y + 9] = *pColor;

    dmd[x + 2][y + 10] = *pColor;
    dmd[x + 3][y + 10] = *pColor;
    dmd[x + 10][y + 10] = *pColor;
    dmd[x + 11][y + 10] = *pColor;

    dmd[x + 2][y + 11] = *pColor;
    dmd[x + 3][y + 11] = *pColor;
    dmd[x + 4][y + 11] = *pColor;
    dmd[x + 9][y + 11] = *pColor;
    dmd[x + 10][y + 11] = *pColor;
    dmd[x + 11][y + 11] = *pColor;
    dmd[x + 12][y + 11] = *pColor;

    dmd[x + 2][y + 12] = *pColor;
    dmd[x + 3][y + 12] = *pColor;
    dmd[x + 4][y + 12] = *pColor;
    dmd[x + 5][y + 12] = *pColor;
    dmd[x + 6][y + 12] = *pColor;
    dmd[x + 7][y + 12] = *pColor;
    dmd[x + 8][y + 12] = *pColor;
    dmd[x + 9][y + 12] = *pColor;
    dmd[x + 10][y + 12] = *pColor;
    dmd[x + 11][y + 12] = *pColor;
    dmd[x + 12][y + 12] = *pColor;
    dmd[x + 13][y + 12] = *pColor;

    dmd[x + 3][y + 13] = *pColor;
    dmd[x + 4][y + 13] = *pColor;
    dmd[x + 5][y + 13] = *pColor;
    dmd[x + 6][y + 13] = *pColor;
    dmd[x + 7][y + 13] = *pColor;
    dmd[x + 8][y + 13] = *pColor;
    dmd[x + 9][y + 13] = *pColor;
    dmd[x + 10][y + 13] = *pColor;
    dmd[x + 11][y + 13] = *pColor;
    dmd[x + 12][y + 13] = *pColor;
    dmd[x + 13][y + 13] = *pColor;

    dmd[x + 10][y + 14] = *pColor;
    dmd[x + 11][y + 14] = *pColor;
    dmd[x + 12][y + 14] = *pColor;
    dmd[x + 13][y + 14] = *pColor;

    dmd[x + 11][y + 15] = *pColor;
    dmd[x + 12][y + 15] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 11][y] = *pBgColor;
    dmd[x + 12][y] = *pBgColor;
    dmd[x + 13][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 12][y + 1] = *pBgColor;
    dmd[x + 13][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;
    dmd[x + 8][y + 2] = *pBgColor;
    dmd[x + 12][y + 2] = *pBgColor;
    dmd[x + 13][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;
    dmd[x + 8][y + 3] = *pBgColor;
    dmd[x + 9][y + 3] = *pBgColor;
    dmd[x + 12][y + 3] = *pBgColor;
    dmd[x + 13][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;
    dmd[x + 8][y + 4] = *pBgColor;
    dmd[x + 9][y + 4] = *pBgColor;
    dmd[x + 12][y + 4] = *pBgColor;
    dmd[x + 13][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;
    dmd[x + 8][y + 5] = *pBgColor;
    dmd[x + 9][y + 5] = *pBgColor;
    dmd[x + 12][y + 5] = *pBgColor;
    dmd[x + 13][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;
    dmd[x + 7][y + 6] = *pBgColor;
    dmd[x + 8][y + 6] = *pBgColor;
    dmd[x + 9][y + 6] = *pBgColor;
    dmd[x + 12][y + 6] = *pBgColor;
    dmd[x + 13][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;
    dmd[x + 7][y + 7] = *pBgColor;
    dmd[x + 8][y + 7] = *pBgColor;
    dmd[x + 9][y + 7] = *pBgColor;
    dmd[x + 12][y + 7] = *pBgColor;
    dmd[x + 13][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;
    dmd[x + 7][y + 8] = *pBgColor;
    dmd[x + 8][y + 8] = *pBgColor;
    dmd[x + 9][y + 8] = *pBgColor;
    dmd[x + 12][y + 8] = *pBgColor;
    dmd[x + 13][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;
    dmd[x + 8][y + 9] = *pBgColor;
    dmd[x + 9][y + 9] = *pBgColor;
    dmd[x + 12][y + 9] = *pBgColor;
    dmd[x + 13][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
    dmd[x + 8][y + 10] = *pBgColor;
    dmd[x + 9][y + 10] = *pBgColor;
    dmd[x + 12][y + 10] = *pBgColor;
    dmd[x + 13][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 5][y + 11] = *pBgColor;
    dmd[x + 6][y + 11] = *pBgColor;
    dmd[x + 7][y + 11] = *pBgColor;
    dmd[x + 8][y + 11] = *pBgColor;
    dmd[x + 13][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;
    dmd[x + 2][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;
    dmd[x + 2][y + 14] = *pBgColor;
    dmd[x + 3][y + 14] = *pBgColor;
    dmd[x + 4][y + 14] = *pBgColor;
    dmd[x + 5][y + 14] = *pBgColor;
    dmd[x + 6][y + 14] = *pBgColor;
    dmd[x + 7][y + 14] = *pBgColor;
    dmd[x + 8][y + 14] = *pBgColor;
    dmd[x + 9][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;
    dmd[x + 3][y + 15] = *pBgColor;
    dmd[x + 4][y + 15] = *pBgColor;
    dmd[x + 5][y + 15] = *pBgColor;
    dmd[x + 6][y + 15] = *pBgColor;
    dmd[x + 7][y + 15] = *pBgColor;
    dmd[x + 8][y + 15] = *pBgColor;
    dmd[x + 9][y + 15] = *pBgColor;
    dmd[x + 10][y + 15] = *pBgColor;
    dmd[x + 13][y + 15] = *pBgColor;
  }

  return width;
}

uint8_t printLarge5At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 14;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;
    dmd[x + 7][y] = *pColor;
    dmd[x + 8][y] = *pColor;
    dmd[x + 9][y] = *pColor;
    dmd[x + 10][y] = *pColor;
    dmd[x + 11][y] = *pColor;
    dmd[x + 12][y] = *pColor;
    dmd[x + 13][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 3][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;
    dmd[x + 7][y + 1] = *pColor;
    dmd[x + 8][y + 1] = *pColor;
    dmd[x + 9][y + 1] = *pColor;
    dmd[x + 10][y + 1] = *pColor;
    dmd[x + 11][y + 1] = *pColor;
    dmd[x + 12][y + 1] = *pColor;
    dmd[x + 13][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;
    dmd[x + 7][y + 6] = *pColor;
    dmd[x + 8][y + 6] = *pColor;
    dmd[x + 9][y + 6] = *pColor;
    dmd[x + 10][y + 6] = *pColor;
    dmd[x + 11][y + 6] = *pColor;
    dmd[x + 12][y + 6] = *pColor;

    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
    dmd[x + 7][y + 7] = *pColor;
    dmd[x + 8][y + 7] = *pColor;
    dmd[x + 9][y + 7] = *pColor;
    dmd[x + 10][y + 7] = *pColor;
    dmd[x + 11][y + 7] = *pColor;
    dmd[x + 12][y + 7] = *pColor;
    dmd[x + 13][y + 7] = *pColor;

    dmd[x + 9][y + 8] = *pColor;
    dmd[x + 10][y + 8] = *pColor;
    dmd[x + 11][y + 8] = *pColor;
    dmd[x + 12][y + 8] = *pColor;
    dmd[x + 13][y + 8] = *pColor;

    dmd[x + 10][y + 9] = *pColor;
    dmd[x + 11][y + 9] = *pColor;
    dmd[x + 12][y + 9] = *pColor;
    dmd[x + 13][y + 9] = *pColor;

    dmd[x + 2][y + 10] = *pColor;
    dmd[x + 3][y + 10] = *pColor;
    dmd[x + 10][y + 10] = *pColor;
    dmd[x + 11][y + 10] = *pColor;
    dmd[x + 12][y + 10] = *pColor;
    dmd[x + 13][y + 10] = *pColor;

    dmd[x + 2][y + 11] = *pColor;
    dmd[x + 3][y + 11] = *pColor;
    dmd[x + 10][y + 11] = *pColor;
    dmd[x + 11][y + 11] = *pColor;
    dmd[x + 12][y + 11] = *pColor;
    dmd[x + 13][y + 11] = *pColor;

    dmd[x + 2][y + 12] = *pColor;
    dmd[x + 3][y + 12] = *pColor;
    dmd[x + 10][y + 12] = *pColor;
    dmd[x + 11][y + 12] = *pColor;
    dmd[x + 12][y + 12] = *pColor;
    dmd[x + 13][y + 12] = *pColor;

    dmd[x + 2][y + 13] = *pColor;
    dmd[x + 3][y + 13] = *pColor;
    dmd[x + 4][y + 13] = *pColor;
    dmd[x + 9][y + 13] = *pColor;
    dmd[x + 10][y + 13] = *pColor;
    dmd[x + 11][y + 13] = *pColor;
    dmd[x + 12][y + 13] = *pColor;
    dmd[x + 13][y + 13] = *pColor;

    dmd[x + 2][y + 14] = *pColor;
    dmd[x + 3][y + 14] = *pColor;
    dmd[x + 4][y + 14] = *pColor;
    dmd[x + 5][y + 14] = *pColor;
    dmd[x + 6][y + 14] = *pColor;
    dmd[x + 7][y + 14] = *pColor;
    dmd[x + 8][y + 14] = *pColor;
    dmd[x + 9][y + 14] = *pColor;
    dmd[x + 10][y + 14] = *pColor;
    dmd[x + 11][y + 14] = *pColor;
    dmd[x + 12][y + 14] = *pColor;
    dmd[x + 13][y + 14] = *pColor;

    dmd[x + 3][y + 15] = *pColor;
    dmd[x + 4][y + 15] = *pColor;
    dmd[x + 5][y + 15] = *pColor;
    dmd[x + 6][y + 15] = *pColor;
    dmd[x + 7][y + 15] = *pColor;
    dmd[x + 8][y + 15] = *pColor;
    dmd[x + 9][y + 15] = *pColor;
    dmd[x + 10][y + 15] = *pColor;
    dmd[x + 11][y + 15] = *pColor;
    dmd[x + 12][y + 15] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;
    dmd[x + 8][y + 2] = *pBgColor;
    dmd[x + 9][y + 2] = *pBgColor;
    dmd[x + 10][y + 2] = *pBgColor;
    dmd[x + 11][y + 2] = *pBgColor;
    dmd[x + 12][y + 2] = *pBgColor;
    dmd[x + 13][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;
    dmd[x + 8][y + 3] = *pBgColor;
    dmd[x + 9][y + 3] = *pBgColor;
    dmd[x + 10][y + 3] = *pBgColor;
    dmd[x + 11][y + 3] = *pBgColor;
    dmd[x + 12][y + 3] = *pBgColor;
    dmd[x + 13][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;
    dmd[x + 8][y + 4] = *pBgColor;
    dmd[x + 9][y + 4] = *pBgColor;
    dmd[x + 10][y + 4] = *pBgColor;
    dmd[x + 11][y + 4] = *pBgColor;
    dmd[x + 12][y + 4] = *pBgColor;
    dmd[x + 13][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;
    dmd[x + 8][y + 5] = *pBgColor;
    dmd[x + 9][y + 5] = *pBgColor;
    dmd[x + 10][y + 5] = *pBgColor;
    dmd[x + 11][y + 5] = *pBgColor;
    dmd[x + 12][y + 5] = *pBgColor;
    dmd[x + 13][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 13][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;
    dmd[x + 7][y + 8] = *pBgColor;
    dmd[x + 8][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;
    dmd[x + 8][y + 9] = *pBgColor;
    dmd[x + 9][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
    dmd[x + 8][y + 10] = *pBgColor;
    dmd[x + 9][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 4][y + 11] = *pBgColor;
    dmd[x + 5][y + 11] = *pBgColor;
    dmd[x + 6][y + 11] = *pBgColor;
    dmd[x + 7][y + 11] = *pBgColor;
    dmd[x + 8][y + 11] = *pBgColor;
    dmd[x + 9][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;
    dmd[x + 4][y + 12] = *pBgColor;
    dmd[x + 5][y + 12] = *pBgColor;
    dmd[x + 6][y + 12] = *pBgColor;
    dmd[x + 7][y + 12] = *pBgColor;
    dmd[x + 8][y + 12] = *pBgColor;
    dmd[x + 9][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;
    dmd[x + 5][y + 13] = *pBgColor;
    dmd[x + 6][y + 13] = *pBgColor;
    dmd[x + 7][y + 13] = *pBgColor;
    dmd[x + 8][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;
    dmd[x + 13][y + 15] = *pBgColor;
  }

  return width;
}

uint8_t printLarge6At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 14;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;
    dmd[x + 7][y] = *pColor;
    dmd[x + 8][y] = *pColor;
    dmd[x + 9][y] = *pColor;
    dmd[x + 10][y] = *pColor;
    dmd[x + 11][y] = *pColor;
    dmd[x + 12][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 3][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;
    dmd[x + 7][y + 1] = *pColor;
    dmd[x + 8][y + 1] = *pColor;
    dmd[x + 9][y + 1] = *pColor;
    dmd[x + 10][y + 1] = *pColor;
    dmd[x + 11][y + 1] = *pColor;
    dmd[x + 12][y + 1] = *pColor;
    dmd[x + 13][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;
    dmd[x + 11][y + 2] = *pColor;
    dmd[x + 12][y + 2] = *pColor;
    dmd[x + 13][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 12][y + 3] = *pColor;
    dmd[x + 13][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 4][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;
    dmd[x + 7][y + 6] = *pColor;
    dmd[x + 8][y + 6] = *pColor;
    dmd[x + 9][y + 6] = *pColor;
    dmd[x + 10][y + 6] = *pColor;
    dmd[x + 11][y + 6] = *pColor;
    dmd[x + 12][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
    dmd[x + 7][y + 7] = *pColor;
    dmd[x + 8][y + 7] = *pColor;
    dmd[x + 9][y + 7] = *pColor;
    dmd[x + 10][y + 7] = *pColor;
    dmd[x + 11][y + 7] = *pColor;
    dmd[x + 12][y + 7] = *pColor;
    dmd[x + 13][y + 7] = *pColor;

    dmd[x + 2][y + 8] = *pColor;
    dmd[x + 3][y + 8] = *pColor;
    dmd[x + 4][y + 8] = *pColor;
    dmd[x + 9][y + 8] = *pColor;
    dmd[x + 10][y + 8] = *pColor;
    dmd[x + 11][y + 8] = *pColor;
    dmd[x + 12][y + 8] = *pColor;
    dmd[x + 13][y + 8] = *pColor;

    dmd[x + 2][y + 9] = *pColor;
    dmd[x + 3][y + 9] = *pColor;
    dmd[x + 10][y + 9] = *pColor;
    dmd[x + 11][y + 9] = *pColor;
    dmd[x + 12][y + 9] = *pColor;
    dmd[x + 13][y + 9] = *pColor;

    dmd[x + 2][y + 10] = *pColor;
    dmd[x + 3][y + 10] = *pColor;
    dmd[x + 10][y + 10] = *pColor;
    dmd[x + 11][y + 10] = *pColor;
    dmd[x + 12][y + 10] = *pColor;
    dmd[x + 13][y + 10] = *pColor;

    dmd[x + 2][y + 11] = *pColor;
    dmd[x + 3][y + 11] = *pColor;
    dmd[x + 10][y + 11] = *pColor;
    dmd[x + 11][y + 11] = *pColor;
    dmd[x + 12][y + 11] = *pColor;
    dmd[x + 13][y + 11] = *pColor;

    dmd[x + 2][y + 12] = *pColor;
    dmd[x + 3][y + 12] = *pColor;
    dmd[x + 10][y + 12] = *pColor;
    dmd[x + 11][y + 12] = *pColor;
    dmd[x + 12][y + 12] = *pColor;
    dmd[x + 13][y + 12] = *pColor;

    dmd[x + 2][y + 13] = *pColor;
    dmd[x + 3][y + 13] = *pColor;
    dmd[x + 4][y + 13] = *pColor;
    dmd[x + 9][y + 13] = *pColor;
    dmd[x + 10][y + 13] = *pColor;
    dmd[x + 11][y + 13] = *pColor;
    dmd[x + 12][y + 13] = *pColor;
    dmd[x + 13][y + 13] = *pColor;

    dmd[x + 2][y + 14] = *pColor;
    dmd[x + 3][y + 14] = *pColor;
    dmd[x + 4][y + 14] = *pColor;
    dmd[x + 5][y + 14] = *pColor;
    dmd[x + 6][y + 14] = *pColor;
    dmd[x + 7][y + 14] = *pColor;
    dmd[x + 8][y + 14] = *pColor;
    dmd[x + 9][y + 14] = *pColor;
    dmd[x + 10][y + 14] = *pColor;
    dmd[x + 11][y + 14] = *pColor;
    dmd[x + 12][y + 14] = *pColor;
    dmd[x + 13][y + 14] = *pColor;

    dmd[x + 3][y + 15] = *pColor;
    dmd[x + 4][y + 15] = *pColor;
    dmd[x + 5][y + 15] = *pColor;
    dmd[x + 6][y + 15] = *pColor;
    dmd[x + 7][y + 15] = *pColor;
    dmd[x + 8][y + 15] = *pColor;
    dmd[x + 9][y + 15] = *pColor;
    dmd[x + 10][y + 15] = *pColor;
    dmd[x + 11][y + 15] = *pColor;
    dmd[x + 12][y + 15] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 13][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;
    dmd[x + 8][y + 2] = *pBgColor;
    dmd[x + 9][y + 2] = *pBgColor;
    dmd[x + 10][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;
    dmd[x + 8][y + 3] = *pBgColor;
    dmd[x + 9][y + 3] = *pBgColor;
    dmd[x + 10][y + 3] = *pBgColor;
    dmd[x + 11][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;
    dmd[x + 8][y + 4] = *pBgColor;
    dmd[x + 9][y + 4] = *pBgColor;
    dmd[x + 10][y + 4] = *pBgColor;
    dmd[x + 11][y + 4] = *pBgColor;
    dmd[x + 12][y + 4] = *pBgColor;
    dmd[x + 13][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;
    dmd[x + 8][y + 5] = *pBgColor;
    dmd[x + 9][y + 5] = *pBgColor;
    dmd[x + 10][y + 5] = *pBgColor;
    dmd[x + 11][y + 5] = *pBgColor;
    dmd[x + 12][y + 5] = *pBgColor;
    dmd[x + 13][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 13][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;
    dmd[x + 7][y + 8] = *pBgColor;
    dmd[x + 8][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;
    dmd[x + 8][y + 9] = *pBgColor;
    dmd[x + 9][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
    dmd[x + 8][y + 10] = *pBgColor;
    dmd[x + 9][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 4][y + 11] = *pBgColor;
    dmd[x + 5][y + 11] = *pBgColor;
    dmd[x + 6][y + 11] = *pBgColor;
    dmd[x + 7][y + 11] = *pBgColor;
    dmd[x + 8][y + 11] = *pBgColor;
    dmd[x + 9][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;
    dmd[x + 4][y + 12] = *pBgColor;
    dmd[x + 5][y + 12] = *pBgColor;
    dmd[x + 6][y + 12] = *pBgColor;
    dmd[x + 7][y + 12] = *pBgColor;
    dmd[x + 8][y + 12] = *pBgColor;
    dmd[x + 9][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;
    dmd[x + 5][y + 13] = *pBgColor;
    dmd[x + 6][y + 13] = *pBgColor;
    dmd[x + 7][y + 13] = *pBgColor;
    dmd[x + 8][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;
    dmd[x + 13][y + 15] = *pBgColor;
  }

  return width;
}

uint8_t printLarge7At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 14;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 2][y] = *pColor;
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;
    dmd[x + 7][y] = *pColor;
    dmd[x + 8][y] = *pColor;
    dmd[x + 9][y] = *pColor;
    dmd[x + 10][y] = *pColor;
    dmd[x + 11][y] = *pColor;
    dmd[x + 12][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 3][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;
    dmd[x + 7][y + 1] = *pColor;
    dmd[x + 8][y + 1] = *pColor;
    dmd[x + 9][y + 1] = *pColor;
    dmd[x + 10][y + 1] = *pColor;
    dmd[x + 11][y + 1] = *pColor;
    dmd[x + 12][y + 1] = *pColor;
    dmd[x + 13][y + 1] = *pColor;

    dmd[x + 11][y + 2] = *pColor;
    dmd[x + 12][y + 2] = *pColor;
    dmd[x + 13][y + 2] = *pColor;

    dmd[x + 12][y + 3] = *pColor;
    dmd[x + 13][y + 3] = *pColor;

    dmd[x + 12][y + 4] = *pColor;
    dmd[x + 13][y + 4] = *pColor;

    dmd[x + 12][y + 5] = *pColor;
    dmd[x + 13][y + 5] = *pColor;

    dmd[x + 11][y + 6] = *pColor;
    dmd[x + 12][y + 6] = *pColor;
    dmd[x + 13][y + 6] = *pColor;

    dmd[x + 10][y + 7] = *pColor;
    dmd[x + 11][y + 7] = *pColor;
    dmd[x + 12][y + 7] = *pColor;
    dmd[x + 13][y + 7] = *pColor;

    dmd[x + 10][y + 8] = *pColor;
    dmd[x + 11][y + 8] = *pColor;
    dmd[x + 12][y + 8] = *pColor;
    dmd[x + 13][y + 8] = *pColor;

    dmd[x + 10][y + 9] = *pColor;
    dmd[x + 11][y + 9] = *pColor;
    dmd[x + 12][y + 9] = *pColor;
    dmd[x + 13][y + 9] = *pColor;

    dmd[x + 10][y + 10] = *pColor;
    dmd[x + 11][y + 10] = *pColor;
    dmd[x + 12][y + 10] = *pColor;
    dmd[x + 13][y + 10] = *pColor;

    dmd[x + 10][y + 11] = *pColor;
    dmd[x + 11][y + 11] = *pColor;
    dmd[x + 12][y + 11] = *pColor;
    dmd[x + 13][y + 11] = *pColor;

    dmd[x + 10][y + 12] = *pColor;
    dmd[x + 11][y + 12] = *pColor;
    dmd[x + 12][y + 12] = *pColor;
    dmd[x + 13][y + 12] = *pColor;

    dmd[x + 10][y + 13] = *pColor;
    dmd[x + 11][y + 13] = *pColor;
    dmd[x + 12][y + 13] = *pColor;
    dmd[x + 13][y + 13] = *pColor;

    dmd[x + 10][y + 14] = *pColor;
    dmd[x + 11][y + 14] = *pColor;
    dmd[x + 12][y + 14] = *pColor;
    dmd[x + 13][y + 14] = *pColor;

    dmd[x + 11][y + 15] = *pColor;
    dmd[x + 12][y + 15] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 13][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;
    dmd[x + 8][y + 2] = *pBgColor;
    dmd[x + 9][y + 2] = *pBgColor;
    dmd[x + 10][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;
    dmd[x + 8][y + 3] = *pBgColor;
    dmd[x + 9][y + 3] = *pBgColor;
    dmd[x + 10][y + 3] = *pBgColor;
    dmd[x + 11][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;
    dmd[x + 8][y + 4] = *pBgColor;
    dmd[x + 9][y + 4] = *pBgColor;
    dmd[x + 10][y + 4] = *pBgColor;
    dmd[x + 11][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;
    dmd[x + 8][y + 5] = *pBgColor;
    dmd[x + 9][y + 5] = *pBgColor;
    dmd[x + 10][y + 5] = *pBgColor;
    dmd[x + 11][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;
    dmd[x + 7][y + 6] = *pBgColor;
    dmd[x + 8][y + 6] = *pBgColor;
    dmd[x + 9][y + 6] = *pBgColor;
    dmd[x + 10][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;
    dmd[x + 7][y + 7] = *pBgColor;
    dmd[x + 8][y + 7] = *pBgColor;
    dmd[x + 9][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;
    dmd[x + 7][y + 8] = *pBgColor;
    dmd[x + 8][y + 8] = *pBgColor;
    dmd[x + 9][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;
    dmd[x + 8][y + 9] = *pBgColor;
    dmd[x + 9][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
    dmd[x + 8][y + 10] = *pBgColor;
    dmd[x + 9][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 2][y + 11] = *pBgColor;
    dmd[x + 3][y + 11] = *pBgColor;
    dmd[x + 4][y + 11] = *pBgColor;
    dmd[x + 5][y + 11] = *pBgColor;
    dmd[x + 6][y + 11] = *pBgColor;
    dmd[x + 7][y + 11] = *pBgColor;
    dmd[x + 8][y + 11] = *pBgColor;
    dmd[x + 9][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;
    dmd[x + 2][y + 12] = *pBgColor;
    dmd[x + 3][y + 12] = *pBgColor;
    dmd[x + 4][y + 12] = *pBgColor;
    dmd[x + 5][y + 12] = *pBgColor;
    dmd[x + 6][y + 12] = *pBgColor;
    dmd[x + 7][y + 12] = *pBgColor;
    dmd[x + 8][y + 12] = *pBgColor;
    dmd[x + 9][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;
    dmd[x + 2][y + 13] = *pBgColor;
    dmd[x + 3][y + 13] = *pBgColor;
    dmd[x + 4][y + 13] = *pBgColor;
    dmd[x + 5][y + 13] = *pBgColor;
    dmd[x + 6][y + 13] = *pBgColor;
    dmd[x + 7][y + 13] = *pBgColor;
    dmd[x + 8][y + 13] = *pBgColor;
    dmd[x + 9][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;
    dmd[x + 2][y + 14] = *pBgColor;
    dmd[x + 3][y + 14] = *pBgColor;
    dmd[x + 4][y + 14] = *pBgColor;
    dmd[x + 5][y + 14] = *pBgColor;
    dmd[x + 6][y + 14] = *pBgColor;
    dmd[x + 7][y + 14] = *pBgColor;
    dmd[x + 8][y + 14] = *pBgColor;
    dmd[x + 9][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;
    dmd[x + 3][y + 15] = *pBgColor;
    dmd[x + 4][y + 15] = *pBgColor;
    dmd[x + 5][y + 15] = *pBgColor;
    dmd[x + 6][y + 15] = *pBgColor;
    dmd[x + 7][y + 15] = *pBgColor;
    dmd[x + 8][y + 15] = *pBgColor;
    dmd[x + 9][y + 15] = *pBgColor;
    dmd[x + 10][y + 15] = *pBgColor;
    dmd[x + 13][y + 15] = *pBgColor;
  }

  return width;
}

uint8_t printLarge8At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 14;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;
    dmd[x + 7][y] = *pColor;
    dmd[x + 8][y] = *pColor;
    dmd[x + 9][y] = *pColor;
    dmd[x + 10][y] = *pColor;

    dmd[x + 4][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;
    dmd[x + 7][y + 1] = *pColor;
    dmd[x + 8][y + 1] = *pColor;
    dmd[x + 9][y + 1] = *pColor;
    dmd[x + 10][y + 1] = *pColor;
    dmd[x + 11][y + 1] = *pColor;

    dmd[x + 4][y + 2] = *pColor;
    dmd[x + 5][y + 2] = *pColor;
    dmd[x + 6][y + 2] = *pColor;
    dmd[x + 9][y + 2] = *pColor;
    dmd[x + 10][y + 2] = *pColor;
    dmd[x + 11][y + 2] = *pColor;

    dmd[x + 4][y + 3] = *pColor;
    dmd[x + 5][y + 3] = *pColor;
    dmd[x + 10][y + 3] = *pColor;
    dmd[x + 11][y + 3] = *pColor;

    dmd[x + 4][y + 4] = *pColor;
    dmd[x + 5][y + 4] = *pColor;
    dmd[x + 10][y + 4] = *pColor;
    dmd[x + 11][y + 4] = *pColor;

    dmd[x + 4][y + 5] = *pColor;
    dmd[x + 5][y + 5] = *pColor;
    dmd[x + 6][y + 5] = *pColor;
    dmd[x + 9][y + 5] = *pColor;
    dmd[x + 10][y + 5] = *pColor;
    dmd[x + 11][y + 5] = *pColor;

    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 4][y + 6] = *pColor;
    dmd[x + 5][y + 6] = *pColor;
    dmd[x + 6][y + 6] = *pColor;
    dmd[x + 7][y + 6] = *pColor;
    dmd[x + 8][y + 6] = *pColor;
    dmd[x + 9][y + 6] = *pColor;
    dmd[x + 10][y + 6] = *pColor;
    dmd[x + 11][y + 6] = *pColor;
    dmd[x + 12][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 5][y + 7] = *pColor;
    dmd[x + 6][y + 7] = *pColor;
    dmd[x + 7][y + 7] = *pColor;
    dmd[x + 8][y + 7] = *pColor;
    dmd[x + 9][y + 7] = *pColor;
    dmd[x + 10][y + 7] = *pColor;
    dmd[x + 11][y + 7] = *pColor;
    dmd[x + 12][y + 7] = *pColor;
    dmd[x + 13][y + 7] = *pColor;

    dmd[x + 2][y + 8] = *pColor;
    dmd[x + 3][y + 8] = *pColor;
    dmd[x + 4][y + 8] = *pColor;
    dmd[x + 9][y + 8] = *pColor;
    dmd[x + 10][y + 8] = *pColor;
    dmd[x + 11][y + 8] = *pColor;
    dmd[x + 12][y + 8] = *pColor;
    dmd[x + 13][y + 8] = *pColor;

    dmd[x + 2][y + 9] = *pColor;
    dmd[x + 3][y + 9] = *pColor;
    dmd[x + 10][y + 9] = *pColor;
    dmd[x + 11][y + 9] = *pColor;
    dmd[x + 12][y + 9] = *pColor;
    dmd[x + 13][y + 9] = *pColor;

    dmd[x + 2][y + 10] = *pColor;
    dmd[x + 3][y + 10] = *pColor;
    dmd[x + 10][y + 10] = *pColor;
    dmd[x + 11][y + 10] = *pColor;
    dmd[x + 12][y + 10] = *pColor;
    dmd[x + 13][y + 10] = *pColor;

    dmd[x + 2][y + 11] = *pColor;
    dmd[x + 3][y + 11] = *pColor;
    dmd[x + 10][y + 11] = *pColor;
    dmd[x + 11][y + 11] = *pColor;
    dmd[x + 12][y + 11] = *pColor;
    dmd[x + 13][y + 11] = *pColor;

    dmd[x + 2][y + 12] = *pColor;
    dmd[x + 3][y + 12] = *pColor;
    dmd[x + 10][y + 12] = *pColor;
    dmd[x + 11][y + 12] = *pColor;
    dmd[x + 12][y + 12] = *pColor;
    dmd[x + 13][y + 12] = *pColor;

    dmd[x + 2][y + 13] = *pColor;
    dmd[x + 3][y + 13] = *pColor;
    dmd[x + 4][y + 13] = *pColor;
    dmd[x + 9][y + 13] = *pColor;
    dmd[x + 10][y + 13] = *pColor;
    dmd[x + 11][y + 13] = *pColor;
    dmd[x + 12][y + 13] = *pColor;
    dmd[x + 13][y + 13] = *pColor;

    dmd[x + 2][y + 14] = *pColor;
    dmd[x + 3][y + 14] = *pColor;
    dmd[x + 4][y + 14] = *pColor;
    dmd[x + 5][y + 14] = *pColor;
    dmd[x + 6][y + 14] = *pColor;
    dmd[x + 7][y + 14] = *pColor;
    dmd[x + 8][y + 14] = *pColor;
    dmd[x + 9][y + 14] = *pColor;
    dmd[x + 10][y + 14] = *pColor;
    dmd[x + 11][y + 14] = *pColor;
    dmd[x + 12][y + 14] = *pColor;
    dmd[x + 13][y + 14] = *pColor;

    dmd[x + 3][y + 15] = *pColor;
    dmd[x + 4][y + 15] = *pColor;
    dmd[x + 5][y + 15] = *pColor;
    dmd[x + 6][y + 15] = *pColor;
    dmd[x + 7][y + 15] = *pColor;
    dmd[x + 8][y + 15] = *pColor;
    dmd[x + 9][y + 15] = *pColor;
    dmd[x + 10][y + 15] = *pColor;
    dmd[x + 11][y + 15] = *pColor;
    dmd[x + 12][y + 15] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 11][y] = *pBgColor;
    dmd[x + 12][y] = *pBgColor;
    dmd[x + 13][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 12][y + 1] = *pBgColor;
    dmd[x + 13][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;
    dmd[x + 8][y + 2] = *pBgColor;
    dmd[x + 12][y + 2] = *pBgColor;
    dmd[x + 13][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;
    dmd[x + 8][y + 3] = *pBgColor;
    dmd[x + 9][y + 3] = *pBgColor;
    dmd[x + 12][y + 3] = *pBgColor;
    dmd[x + 13][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;
    dmd[x + 8][y + 4] = *pBgColor;
    dmd[x + 9][y + 4] = *pBgColor;
    dmd[x + 12][y + 4] = *pBgColor;
    dmd[x + 13][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;
    dmd[x + 8][y + 5] = *pBgColor;
    dmd[x + 12][y + 5] = *pBgColor;
    dmd[x + 13][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 13][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;
    dmd[x + 6][y + 8] = *pBgColor;
    dmd[x + 7][y + 8] = *pBgColor;
    dmd[x + 8][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;
    dmd[x + 6][y + 9] = *pBgColor;
    dmd[x + 7][y + 9] = *pBgColor;
    dmd[x + 8][y + 9] = *pBgColor;
    dmd[x + 9][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
    dmd[x + 8][y + 10] = *pBgColor;
    dmd[x + 9][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 4][y + 11] = *pBgColor;
    dmd[x + 5][y + 11] = *pBgColor;
    dmd[x + 6][y + 11] = *pBgColor;
    dmd[x + 7][y + 11] = *pBgColor;
    dmd[x + 8][y + 11] = *pBgColor;
    dmd[x + 9][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;
    dmd[x + 4][y + 12] = *pBgColor;
    dmd[x + 5][y + 12] = *pBgColor;
    dmd[x + 6][y + 12] = *pBgColor;
    dmd[x + 7][y + 12] = *pBgColor;
    dmd[x + 8][y + 12] = *pBgColor;
    dmd[x + 9][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;
    dmd[x + 5][y + 13] = *pBgColor;
    dmd[x + 6][y + 13] = *pBgColor;
    dmd[x + 7][y + 13] = *pBgColor;
    dmd[x + 8][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;
    dmd[x + 13][y + 15] = *pBgColor;
  }
  return width;
}

uint8_t printLarge9At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 14;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y] = *pColor;
    dmd[x + 4][y] = *pColor;
    dmd[x + 5][y] = *pColor;
    dmd[x + 6][y] = *pColor;
    dmd[x + 7][y] = *pColor;
    dmd[x + 8][y] = *pColor;
    dmd[x + 9][y] = *pColor;
    dmd[x + 10][y] = *pColor;
    dmd[x + 11][y] = *pColor;
    dmd[x + 12][y] = *pColor;

    dmd[x + 2][y + 1] = *pColor;
    dmd[x + 3][y + 1] = *pColor;
    dmd[x + 4][y + 1] = *pColor;
    dmd[x + 5][y + 1] = *pColor;
    dmd[x + 6][y + 1] = *pColor;
    dmd[x + 7][y + 1] = *pColor;
    dmd[x + 8][y + 1] = *pColor;
    dmd[x + 9][y + 1] = *pColor;
    dmd[x + 10][y + 1] = *pColor;
    dmd[x + 11][y + 1] = *pColor;
    dmd[x + 12][y + 1] = *pColor;
    dmd[x + 13][y + 1] = *pColor;

    dmd[x + 2][y + 2] = *pColor;
    dmd[x + 3][y + 2] = *pColor;
    dmd[x + 4][y + 2] = *pColor;
    dmd[x + 11][y + 2] = *pColor;
    dmd[x + 12][y + 2] = *pColor;
    dmd[x + 13][y + 2] = *pColor;

    dmd[x + 2][y + 3] = *pColor;
    dmd[x + 3][y + 3] = *pColor;
    dmd[x + 12][y + 3] = *pColor;
    dmd[x + 13][y + 3] = *pColor;

    dmd[x + 2][y + 4] = *pColor;
    dmd[x + 3][y + 4] = *pColor;
    dmd[x + 12][y + 4] = *pColor;
    dmd[x + 13][y + 4] = *pColor;

    dmd[x + 2][y + 5] = *pColor;
    dmd[x + 3][y + 5] = *pColor;
    dmd[x + 12][y + 5] = *pColor;
    dmd[x + 13][y + 5] = *pColor;

    dmd[x + 2][y + 6] = *pColor;
    dmd[x + 3][y + 6] = *pColor;
    dmd[x + 12][y + 6] = *pColor;
    dmd[x + 13][y + 6] = *pColor;

    dmd[x + 2][y + 7] = *pColor;
    dmd[x + 3][y + 7] = *pColor;
    dmd[x + 4][y + 7] = *pColor;
    dmd[x + 11][y + 7] = *pColor;
    dmd[x + 12][y + 7] = *pColor;
    dmd[x + 13][y + 7] = *pColor;

    dmd[x + 2][y + 8] = *pColor;
    dmd[x + 3][y + 8] = *pColor;
    dmd[x + 4][y + 8] = *pColor;
    dmd[x + 5][y + 8] = *pColor;
    dmd[x + 6][y + 8] = *pColor;
    dmd[x + 7][y + 8] = *pColor;
    dmd[x + 8][y + 8] = *pColor;
    dmd[x + 9][y + 8] = *pColor;
    dmd[x + 10][y + 8] = *pColor;
    dmd[x + 11][y + 8] = *pColor;
    dmd[x + 12][y + 8] = *pColor;
    dmd[x + 13][y + 8] = *pColor;

    dmd[x + 2][y + 9] = *pColor;
    dmd[x + 3][y + 9] = *pColor;
    dmd[x + 4][y + 9] = *pColor;
    dmd[x + 5][y + 9] = *pColor;
    dmd[x + 6][y + 9] = *pColor;
    dmd[x + 7][y + 9] = *pColor;
    dmd[x + 8][y + 9] = *pColor;
    dmd[x + 9][y + 9] = *pColor;
    dmd[x + 10][y + 9] = *pColor;
    dmd[x + 11][y + 9] = *pColor;
    dmd[x + 12][y + 9] = *pColor;
    dmd[x + 13][y + 9] = *pColor;

    dmd[x + 9][y + 10] = *pColor;
    dmd[x + 10][y + 10] = *pColor;
    dmd[x + 11][y + 10] = *pColor;
    dmd[x + 12][y + 10] = *pColor;
    dmd[x + 13][y + 10] = *pColor;

    dmd[x + 10][y + 11] = *pColor;
    dmd[x + 11][y + 11] = *pColor;
    dmd[x + 12][y + 11] = *pColor;
    dmd[x + 13][y + 11] = *pColor;

    dmd[x + 10][y + 12] = *pColor;
    dmd[x + 11][y + 12] = *pColor;
    dmd[x + 12][y + 12] = *pColor;
    dmd[x + 13][y + 12] = *pColor;

    dmd[x + 10][y + 13] = *pColor;
    dmd[x + 11][y + 13] = *pColor;
    dmd[x + 12][y + 13] = *pColor;
    dmd[x + 13][y + 13] = *pColor;

    dmd[x + 10][y + 14] = *pColor;
    dmd[x + 11][y + 14] = *pColor;
    dmd[x + 12][y + 14] = *pColor;
    dmd[x + 13][y + 14] = *pColor;

    dmd[x + 11][y + 15] = *pColor;
    dmd[x + 12][y + 15] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 13][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;
    dmd[x + 6][y + 2] = *pBgColor;
    dmd[x + 7][y + 2] = *pBgColor;
    dmd[x + 8][y + 2] = *pBgColor;
    dmd[x + 9][y + 2] = *pBgColor;
    dmd[x + 10][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;
    dmd[x + 6][y + 3] = *pBgColor;
    dmd[x + 7][y + 3] = *pBgColor;
    dmd[x + 8][y + 3] = *pBgColor;
    dmd[x + 9][y + 3] = *pBgColor;
    dmd[x + 10][y + 3] = *pBgColor;
    dmd[x + 11][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;
    dmd[x + 6][y + 4] = *pBgColor;
    dmd[x + 7][y + 4] = *pBgColor;
    dmd[x + 8][y + 4] = *pBgColor;
    dmd[x + 9][y + 4] = *pBgColor;
    dmd[x + 10][y + 4] = *pBgColor;
    dmd[x + 11][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;
    dmd[x + 6][y + 5] = *pBgColor;
    dmd[x + 7][y + 5] = *pBgColor;
    dmd[x + 8][y + 5] = *pBgColor;
    dmd[x + 9][y + 5] = *pBgColor;
    dmd[x + 10][y + 5] = *pBgColor;
    dmd[x + 11][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;
    dmd[x + 6][y + 6] = *pBgColor;
    dmd[x + 7][y + 6] = *pBgColor;
    dmd[x + 8][y + 6] = *pBgColor;
    dmd[x + 9][y + 6] = *pBgColor;
    dmd[x + 10][y + 6] = *pBgColor;
    dmd[x + 11][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;
    dmd[x + 6][y + 7] = *pBgColor;
    dmd[x + 7][y + 7] = *pBgColor;
    dmd[x + 8][y + 7] = *pBgColor;
    dmd[x + 9][y + 7] = *pBgColor;
    dmd[x + 10][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;
    dmd[x + 6][y + 10] = *pBgColor;
    dmd[x + 7][y + 10] = *pBgColor;
    dmd[x + 8][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 2][y + 11] = *pBgColor;
    dmd[x + 3][y + 11] = *pBgColor;
    dmd[x + 4][y + 11] = *pBgColor;
    dmd[x + 5][y + 11] = *pBgColor;
    dmd[x + 6][y + 11] = *pBgColor;
    dmd[x + 7][y + 11] = *pBgColor;
    dmd[x + 8][y + 11] = *pBgColor;
    dmd[x + 9][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;
    dmd[x + 2][y + 12] = *pBgColor;
    dmd[x + 3][y + 12] = *pBgColor;
    dmd[x + 4][y + 12] = *pBgColor;
    dmd[x + 5][y + 12] = *pBgColor;
    dmd[x + 6][y + 12] = *pBgColor;
    dmd[x + 7][y + 12] = *pBgColor;
    dmd[x + 8][y + 12] = *pBgColor;
    dmd[x + 9][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;
    dmd[x + 2][y + 13] = *pBgColor;
    dmd[x + 3][y + 13] = *pBgColor;
    dmd[x + 4][y + 13] = *pBgColor;
    dmd[x + 5][y + 13] = *pBgColor;
    dmd[x + 6][y + 13] = *pBgColor;
    dmd[x + 7][y + 13] = *pBgColor;
    dmd[x + 8][y + 13] = *pBgColor;
    dmd[x + 9][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;
    dmd[x + 2][y + 14] = *pBgColor;
    dmd[x + 3][y + 14] = *pBgColor;
    dmd[x + 4][y + 14] = *pBgColor;
    dmd[x + 5][y + 14] = *pBgColor;
    dmd[x + 6][y + 14] = *pBgColor;
    dmd[x + 7][y + 14] = *pBgColor;
    dmd[x + 8][y + 14] = *pBgColor;
    dmd[x + 9][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;
    dmd[x + 3][y + 15] = *pBgColor;
    dmd[x + 4][y + 15] = *pBgColor;
    dmd[x + 5][y + 15] = *pBgColor;
    dmd[x + 6][y + 15] = *pBgColor;
    dmd[x + 7][y + 15] = *pBgColor;
    dmd[x + 8][y + 15] = *pBgColor;
    dmd[x + 9][y + 15] = *pBgColor;
    dmd[x + 10][y + 15] = *pBgColor;
    dmd[x + 13][y + 15] = *pBgColor;
  }
  return width;
}

uint8_t printLargePointAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y + 12] = *pColor;
    dmd[x + 4][y + 12] = *pColor;

    dmd[x + 2][y + 13] = *pColor;
    dmd[x + 3][y + 13] = *pColor;
    dmd[x + 4][y + 13] = *pColor;
    dmd[x + 5][y + 13] = *pColor;

    dmd[x + 2][y + 14] = *pColor;
    dmd[x + 3][y + 14] = *pColor;
    dmd[x + 4][y + 14] = *pColor;
    dmd[x + 5][y + 14] = *pColor;

    dmd[x + 3][y + 15] = *pColor;
    dmd[x + 4][y + 15] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 2][y + 11] = *pBgColor;
    dmd[x + 3][y + 11] = *pBgColor;
    dmd[x + 4][y + 11] = *pBgColor;
    dmd[x + 5][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;
    dmd[x + 2][y + 12] = *pBgColor;
    dmd[x + 5][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;
    dmd[x + 5][y + 15] = *pBgColor;
  }

  return width;
}

uint8_t printLargeCommaAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t x, uint8_t y, rgb_t *pColor, rgb_t *pBgColor)
{
  uint8_t width = 6;
  if (x + width > DMD_WIDTH || y + 15 > DMD_HEIGHT)
  {
    return 0;
  }

  if (pColor != NULL)
  {
    dmd[x + 3][y + 12] = *pColor;
    dmd[x + 4][y + 12] = *pColor;

    dmd[x + 2][y + 13] = *pColor;
    dmd[x + 3][y + 13] = *pColor;
    dmd[x + 4][y + 13] = *pColor;
    dmd[x + 5][y + 13] = *pColor;

    dmd[x + 2][y + 14] = *pColor;
    dmd[x + 3][y + 14] = *pColor;
    dmd[x + 4][y + 14] = *pColor;
    dmd[x + 5][y + 14] = *pColor;

    dmd[x + 3][y + 15] = *pColor;
    dmd[x + 4][y + 15] = *pColor;
    dmd[x + 5][y + 15] = *pColor;

    dmd[x + 4][y + 16] = *pColor;
    dmd[x + 5][y + 16] = *pColor;

    dmd[x + 4][y + 17] = *pColor;
  }

  if (pBgColor != NULL)
  {
    dmd[x + 0][y] = *pBgColor;
    dmd[x + 1][y] = *pBgColor;
    dmd[x + 2][y] = *pBgColor;
    dmd[x + 3][y] = *pBgColor;
    dmd[x + 4][y] = *pBgColor;
    dmd[x + 5][y] = *pBgColor;

    dmd[x + 0][y + 1] = *pBgColor;
    dmd[x + 1][y + 1] = *pBgColor;
    dmd[x + 2][y + 1] = *pBgColor;
    dmd[x + 3][y + 1] = *pBgColor;
    dmd[x + 4][y + 1] = *pBgColor;
    dmd[x + 5][y + 1] = *pBgColor;

    dmd[x + 0][y + 2] = *pBgColor;
    dmd[x + 1][y + 2] = *pBgColor;
    dmd[x + 2][y + 2] = *pBgColor;
    dmd[x + 3][y + 2] = *pBgColor;
    dmd[x + 4][y + 2] = *pBgColor;
    dmd[x + 5][y + 2] = *pBgColor;

    dmd[x + 0][y + 3] = *pBgColor;
    dmd[x + 1][y + 3] = *pBgColor;
    dmd[x + 2][y + 3] = *pBgColor;
    dmd[x + 3][y + 3] = *pBgColor;
    dmd[x + 4][y + 3] = *pBgColor;
    dmd[x + 5][y + 3] = *pBgColor;

    dmd[x + 0][y + 4] = *pBgColor;
    dmd[x + 1][y + 4] = *pBgColor;
    dmd[x + 2][y + 4] = *pBgColor;
    dmd[x + 3][y + 4] = *pBgColor;
    dmd[x + 4][y + 4] = *pBgColor;
    dmd[x + 5][y + 4] = *pBgColor;

    dmd[x + 0][y + 5] = *pBgColor;
    dmd[x + 1][y + 5] = *pBgColor;
    dmd[x + 2][y + 5] = *pBgColor;
    dmd[x + 3][y + 5] = *pBgColor;
    dmd[x + 4][y + 5] = *pBgColor;
    dmd[x + 5][y + 5] = *pBgColor;

    dmd[x + 0][y + 6] = *pBgColor;
    dmd[x + 1][y + 6] = *pBgColor;
    dmd[x + 2][y + 6] = *pBgColor;
    dmd[x + 3][y + 6] = *pBgColor;
    dmd[x + 4][y + 6] = *pBgColor;
    dmd[x + 5][y + 6] = *pBgColor;

    dmd[x + 0][y + 7] = *pBgColor;
    dmd[x + 1][y + 7] = *pBgColor;
    dmd[x + 2][y + 7] = *pBgColor;
    dmd[x + 3][y + 7] = *pBgColor;
    dmd[x + 4][y + 7] = *pBgColor;
    dmd[x + 5][y + 7] = *pBgColor;

    dmd[x + 0][y + 8] = *pBgColor;
    dmd[x + 1][y + 8] = *pBgColor;
    dmd[x + 2][y + 8] = *pBgColor;
    dmd[x + 3][y + 8] = *pBgColor;
    dmd[x + 4][y + 8] = *pBgColor;
    dmd[x + 5][y + 8] = *pBgColor;

    dmd[x + 0][y + 9] = *pBgColor;
    dmd[x + 1][y + 9] = *pBgColor;
    dmd[x + 2][y + 9] = *pBgColor;
    dmd[x + 3][y + 9] = *pBgColor;
    dmd[x + 4][y + 9] = *pBgColor;
    dmd[x + 5][y + 9] = *pBgColor;

    dmd[x + 0][y + 10] = *pBgColor;
    dmd[x + 1][y + 10] = *pBgColor;
    dmd[x + 2][y + 10] = *pBgColor;
    dmd[x + 3][y + 10] = *pBgColor;
    dmd[x + 4][y + 10] = *pBgColor;
    dmd[x + 5][y + 10] = *pBgColor;

    dmd[x + 0][y + 11] = *pBgColor;
    dmd[x + 1][y + 11] = *pBgColor;
    dmd[x + 2][y + 11] = *pBgColor;
    dmd[x + 3][y + 11] = *pBgColor;
    dmd[x + 4][y + 11] = *pBgColor;
    dmd[x + 5][y + 11] = *pBgColor;

    dmd[x + 0][y + 12] = *pBgColor;
    dmd[x + 1][y + 12] = *pBgColor;
    dmd[x + 2][y + 12] = *pBgColor;
    dmd[x + 5][y + 12] = *pBgColor;

    dmd[x + 0][y + 13] = *pBgColor;
    dmd[x + 1][y + 13] = *pBgColor;

    dmd[x + 0][y + 14] = *pBgColor;
    dmd[x + 1][y + 14] = *pBgColor;

    dmd[x + 0][y + 15] = *pBgColor;
    dmd[x + 1][y + 15] = *pBgColor;
    dmd[x + 2][y + 15] = *pBgColor;

    dmd[x + 0][y + 16] = *pBgColor;
    dmd[x + 1][y + 16] = *pBgColor;
    dmd[x + 2][y + 16] = *pBgColor;
    dmd[x + 3][y + 16] = *pBgColor;

    dmd[x + 0][y + 17] = *pBgColor;
    dmd[x + 1][y + 17] = *pBgColor;
    dmd[x + 2][y + 17] = *pBgColor;
    dmd[x + 3][y + 17] = *pBgColor;
    dmd[x + 5][y + 17] = *pBgColor;
  }

  return width;
}
