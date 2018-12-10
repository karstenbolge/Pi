#include <stdint.h>
#include "../hdr/data70.h"

// http://www.identifont.com/similar?2SS

uint8_t print0At(uint32_t dmd[80][60], uint8_t position, uint8_t line, uint32_t color, uint32_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = color;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = color;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = color;
  dmd[position + 2][10 * line + 1] = bgColor;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = bgColor;
  dmd[position + 6][10 * line + 1] = color;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = color;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = bgColor;
  dmd[position + 6][10 * line + 2] = color;
  dmd[position + 7][10 * line + 2] = bgColor;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = color;
  dmd[position + 2][10 * line + 3] = bgColor;
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = bgColor;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = bgColor;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = color;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = bgColor;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = color;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = color;
  dmd[position + 4][10 * line + 7] = color;
  dmd[position + 5][10 * line + 7] = color;
  dmd[position + 6][10 * line + 7] = color;
  dmd[position + 7][10 * line + 7] = bgColor;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;

  return 8;
}

uint8_t print1At(uint32_t dmd[80][60], uint8_t position, uint8_t line, uint32_t color, uint32_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = bgColor;
  dmd[position + 2][10 * line + 0] = bgColor;
  dmd[position + 3][10 * line + 0] = bgColor;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = bgColor;
  dmd[position + 6][10 * line + 0] = bgColor;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = bgColor;
  dmd[position + 2][10 * line + 1] = bgColor;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = color;
  dmd[position + 5][10 * line + 1] = bgColor;
  dmd[position + 6][10 * line + 1] = bgColor;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = bgColor;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = color;
  dmd[position + 5][10 * line + 2] = bgColor;
  dmd[position + 6][10 * line + 2] = bgColor;
  dmd[position + 7][10 * line + 2] = bgColor;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = bgColor;
  dmd[position + 2][10 * line + 3] = bgColor;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = bgColor;
  dmd[position + 6][10 * line + 3] = bgColor;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = bgColor;
  dmd[position + 2][10 * line + 4] = bgColor;
  dmd[position + 3][10 * line + 4] = color;
  dmd[position + 4][10 * line + 4] = color;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = bgColor;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = bgColor;
  dmd[position + 2][10 * line + 5] = bgColor;
  dmd[position + 3][10 * line + 5] = color;
  dmd[position + 4][10 * line + 5] = color;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = bgColor;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = bgColor;
  dmd[position + 2][10 * line + 6] = bgColor;
  dmd[position + 3][10 * line + 6] = color;
  dmd[position + 4][10 * line + 6] = color;
  dmd[position + 5][10 * line + 6] = bgColor;
  dmd[position + 6][10 * line + 6] = bgColor;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = bgColor;
  dmd[position + 2][10 * line + 7] = bgColor;
  dmd[position + 3][10 * line + 7] = color;
  dmd[position + 4][10 * line + 7] = color;
  dmd[position + 5][10 * line + 7] = bgColor;
  dmd[position + 6][10 * line + 7] = bgColor;
  dmd[position + 7][10 * line + 7] = bgColor;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;

  return 8;
}

uint8_t print2At(uint32_t dmd[80][60], uint8_t position, uint8_t line, uint32_t color, uint32_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = color;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = color;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = color;
  dmd[position + 2][10 * line + 1] = bgColor;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = bgColor;
  dmd[position + 6][10 * line + 1] = color;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = bgColor;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = bgColor;
  dmd[position + 6][10 * line + 2] = color;
  dmd[position + 7][10 * line + 2] = bgColor;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = bgColor;
  dmd[position + 2][10 * line + 3] = bgColor;
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = bgColor;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = color;
  dmd[position + 4][10 * line + 4] = color;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = bgColor;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
  dmd[position + 6][10 * line + 6] = bgColor;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = color;
  dmd[position + 4][10 * line + 7] = color;
  dmd[position + 5][10 * line + 7] = color;
  dmd[position + 6][10 * line + 7] = color;
  dmd[position + 7][10 * line + 7] = bgColor;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;

  return 8;
}

uint8_t print3At(uint32_t dmd[80][60], uint8_t position, uint8_t line, uint32_t color, uint32_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = color;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = bgColor;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = color;
  dmd[position + 2][10 * line + 1] = bgColor;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = color;
  dmd[position + 6][10 * line + 1] = bgColor;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = bgColor;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = color;
  dmd[position + 6][10 * line + 2] = bgColor;
  dmd[position + 7][10 * line + 2] = bgColor;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = bgColor;
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = bgColor;
  dmd[position + 2][10 * line + 4] = bgColor;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = bgColor;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = color;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = bgColor;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = color;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = color;
  dmd[position + 4][10 * line + 7] = color;
  dmd[position + 5][10 * line + 7] = color;
  dmd[position + 6][10 * line + 7] = color;
  dmd[position + 7][10 * line + 7] = bgColor;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;

  return 8;
}

uint8_t print4At(uint32_t dmd[80][60], uint8_t position, uint8_t line, uint32_t color, uint32_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = color;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = bgColor;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = color;
  dmd[position + 2][10 * line + 1] = bgColor;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = color;
  dmd[position + 6][10 * line + 1] = bgColor;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = color;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = color;
  dmd[position + 6][10 * line + 2] = bgColor;
  dmd[position + 7][10 * line + 2] = bgColor;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = color;
  dmd[position + 2][10 * line + 3] = bgColor;
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = bgColor;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = bgColor;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = bgColor;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = bgColor;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = color;
  dmd[position + 6][10 * line + 5] = bgColor;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = color;
  dmd[position + 4][10 * line + 6] = color;
  dmd[position + 5][10 * line + 6] = color;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = bgColor;
  dmd[position + 2][10 * line + 7] = bgColor;
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
  dmd[position + 5][10 * line + 7] = color;
  dmd[position + 6][10 * line + 7] = color;
  dmd[position + 7][10 * line + 7] = bgColor;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;

  return 8;
}

uint8_t print5At(uint32_t dmd[80][60], uint8_t position, uint8_t line, uint32_t color, uint32_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = color;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = color;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = color;
  dmd[position + 2][10 * line + 1] = bgColor;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = bgColor;
  dmd[position + 6][10 * line + 1] = bgColor;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = color;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = bgColor;
  dmd[position + 6][10 * line + 2] = bgColor;
  dmd[position + 7][10 * line + 2] = bgColor;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = color;
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = bgColor;
  dmd[position + 2][10 * line + 4] = bgColor;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = bgColor;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = color;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = bgColor;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = color;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = color;
  dmd[position + 4][10 * line + 7] = color;
  dmd[position + 5][10 * line + 7] = color;
  dmd[position + 6][10 * line + 7] = color;
  dmd[position + 7][10 * line + 7] = bgColor;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;

  return 8;
}

uint8_t print6At(uint32_t dmd[80][60], uint8_t position, uint8_t line, uint32_t color, uint32_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = color;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = color;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = color;
  dmd[position + 2][10 * line + 1] = bgColor;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = bgColor;
  dmd[position + 6][10 * line + 1] = color;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = color;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = bgColor;
  dmd[position + 6][10 * line + 2] = bgColor;
  dmd[position + 7][10 * line + 2] = bgColor;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = color;
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = bgColor;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = bgColor;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = color;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = bgColor;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = color;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = color;
  dmd[position + 4][10 * line + 7] = color;
  dmd[position + 5][10 * line + 7] = color;
  dmd[position + 6][10 * line + 7] = color;
  dmd[position + 7][10 * line + 7] = bgColor;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;

  return 8;
}

uint8_t print7At(uint32_t dmd[80][60], uint8_t position, uint8_t line, uint32_t color, uint32_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = color;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = color;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = bgColor;
  dmd[position + 2][10 * line + 1] = bgColor;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = bgColor;
  dmd[position + 6][10 * line + 1] = color;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = bgColor;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = bgColor;
  dmd[position + 6][10 * line + 2] = color;
  dmd[position + 7][10 * line + 2] = bgColor;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = bgColor;
  dmd[position + 2][10 * line + 3] = bgColor;
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = bgColor;
  dmd[position + 2][10 * line + 4] = bgColor;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = bgColor;
  dmd[position + 2][10 * line + 5] = bgColor;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = color;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = bgColor;
  dmd[position + 2][10 * line + 6] = bgColor;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = color;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = bgColor;
  dmd[position + 2][10 * line + 7] = bgColor;
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
  dmd[position + 5][10 * line + 7] = color;
  dmd[position + 6][10 * line + 7] = color;
  dmd[position + 7][10 * line + 7] = bgColor;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;

  return 8;
}

uint8_t print8At(uint32_t dmd[80][60], uint8_t position, uint8_t line, uint32_t color, uint32_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = bgColor;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = color;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = bgColor;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = bgColor;
  dmd[position + 2][10 * line + 1] = color;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = color;
  dmd[position + 6][10 * line + 1] = bgColor;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = bgColor;
  dmd[position + 2][10 * line + 2] = color;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = color;
  dmd[position + 6][10 * line + 2] = bgColor;
  dmd[position + 7][10 * line + 2] = bgColor;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = color;
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = bgColor;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = bgColor;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = color;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = bgColor;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = color;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = color;
  dmd[position + 4][10 * line + 7] = color;
  dmd[position + 5][10 * line + 7] = color;
  dmd[position + 6][10 * line + 7] = color;
  dmd[position + 7][10 * line + 7] = bgColor;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;

  return 8;
}

uint8_t print9At(uint32_t dmd[80][60], uint8_t position, uint8_t line, uint32_t color, uint32_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = color;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = color;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = color;
  dmd[position + 2][10 * line + 1] = bgColor;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = bgColor;
  dmd[position + 6][10 * line + 1] = color;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = color;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = bgColor;
  dmd[position + 6][10 * line + 2] = color;
  dmd[position + 7][10 * line + 2] = bgColor;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = color;
  dmd[position + 2][10 * line + 3] = bgColor;
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = bgColor;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = color;
  dmd[position + 4][10 * line + 4] = color;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = bgColor;
  dmd[position + 2][10 * line + 5] = bgColor;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = color;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = bgColor;
  dmd[position + 2][10 * line + 6] = bgColor;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = color;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = bgColor;
  dmd[position + 2][10 * line + 7] = bgColor;
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
  dmd[position + 5][10 * line + 7] = color;
  dmd[position + 6][10 * line + 7] = color;
  dmd[position + 7][10 * line + 7] = bgColor;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;

  return 8;
}