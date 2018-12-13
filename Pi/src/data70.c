#include <stdint.h>
#include <stdio.h>
#include "../hdr/data70.h"

// http://www.identifont.com/similar?2SS

uint8_t print0At(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = color;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = color;
  dmd[position + 7][10 * line + 0] = bgColor;

  printf("color %02x%02x%02x bgColor %02x%02x%02x position %d line %d dmd[0][0] %02x%02x%02x\n", color.red, color.green, color.blue, bgColor.red, bgColor.green, bgColor.blue, position, line, dmd[0][0].red, dmd[0][0].green, dmd[0][0].blue);
  printf("color %02x%02x%02x bgColor %02x%02x%02x position %d line %d dmd[1][0] %02x%02x%02x\n", color.red, color.green, color.blue, bgColor.red, bgColor.green, bgColor.blue, position, line, dmd[1][0].red, dmd[1][0].green, dmd[1][0].blue);

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

  return 7;
}

uint8_t print1At(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

  return 7;
}

uint8_t print2At(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

  return 7;
}

uint8_t print3At(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

  return 7;
}

uint8_t print4At(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

  return 7;
}

uint8_t print5At(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

  return 7;
}

uint8_t print6At(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

  return 7;
}

uint8_t print7At(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

  return 7;
}

uint8_t print8At(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

  return 7;
}

uint8_t print9At(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

  return 7;
}

uint8_t printAAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
  dmd[position + 5][10 * line + 7] = bgColor;
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

  return 7;
}

uint8_t printBAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
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

  return 7;
}

uint8_t printCAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = bgColor;
  dmd[position + 6][10 * line + 3] = bgColor;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = bgColor;
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

  return 7;
}

uint8_t printDAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = bgColor;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
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

  return 7;
}

uint8_t printEAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = bgColor;
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

  return 7;
}

uint8_t printFAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = bgColor;
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
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
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

  return 7;
}

uint8_t printGAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
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

  return 7;
}

uint8_t printHAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = bgColor;
  dmd[position + 3][10 * line + 0] = bgColor;
  dmd[position + 4][10 * line + 0] = bgColor;
  dmd[position + 5][10 * line + 0] = bgColor;
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
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
  dmd[position + 5][10 * line + 7] = bgColor;
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

  return 7;
}

uint8_t printIAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = bgColor;
  dmd[position + 3][10 * line + 0] = bgColor;
  dmd[position + 4][10 * line + 0] = bgColor;
  dmd[position + 5][10 * line + 0] = bgColor;
  dmd[position + 6][10 * line + 0] = bgColor;
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
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = bgColor;
  dmd[position + 6][10 * line + 3] = bgColor;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = bgColor;
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
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
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

  return 3;
}

uint8_t printJAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = bgColor;
  dmd[position + 2][10 * line + 0] = bgColor;
  dmd[position + 3][10 * line + 0] = bgColor;
  dmd[position + 4][10 * line + 0] = bgColor;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = bgColor;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = bgColor;
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

  return 7;
}

uint8_t printKAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = bgColor;
  dmd[position + 3][10 * line + 0] = bgColor;
  dmd[position + 4][10 * line + 0] = bgColor;
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
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
  dmd[position + 5][10 * line + 7] = bgColor;
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

  return 7;
}

uint8_t printLAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = bgColor;
  dmd[position + 3][10 * line + 0] = bgColor;
  dmd[position + 4][10 * line + 0] = bgColor;
  dmd[position + 5][10 * line + 0] = bgColor;
  dmd[position + 6][10 * line + 0] = bgColor;
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
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = bgColor;
  dmd[position + 6][10 * line + 3] = bgColor;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = bgColor;
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

  return 7;
}

uint8_t printMAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = color;
  dmd[position + 4][10 * line + 0] = color;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = color;
  dmd[position + 7][10 * line + 0] = color;
  dmd[position + 8][10 * line + 0] = color;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = color;
  dmd[position + 2][10 * line + 1] = bgColor;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = color;
  dmd[position + 6][10 * line + 1] = bgColor;
  dmd[position + 7][10 * line + 1] = bgColor;
  dmd[position + 8][10 * line + 1] = color;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = color;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = color;
  dmd[position + 6][10 * line + 2] = bgColor;
  dmd[position + 7][10 * line + 2] = bgColor;
  dmd[position + 8][10 * line + 2] = color;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = color;
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = bgColor;
  dmd[position + 7][10 * line + 3] = bgColor;
  dmd[position + 8][10 * line + 3] = color;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = bgColor;
  dmd[position + 7][10 * line + 4] = bgColor;
  dmd[position + 8][10 * line + 4] = color;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = color;
  dmd[position + 6][10 * line + 5] = bgColor;
  dmd[position + 7][10 * line + 5] = bgColor;
  dmd[position + 8][10 * line + 5] = color;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = color;
  dmd[position + 6][10 * line + 6] = bgColor;
  dmd[position + 7][10 * line + 6] = bgColor;
  dmd[position + 8][10 * line + 6] = color;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
  dmd[position + 5][10 * line + 7] = color;
  dmd[position + 6][10 * line + 7] = bgColor;
  dmd[position + 7][10 * line + 7] = bgColor;
  dmd[position + 8][10 * line + 7] = color;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;
  dmd[position + 8][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;
  dmd[position + 9][10 * line + 9] = bgColor;

  return 9;
}

uint8_t printNAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = bgColor;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
  dmd[position + 5][10 * line + 7] = bgColor;
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

  return 7;
}

uint8_t printOAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 5][10 * line + 1] = color;
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
  dmd[position + 2][10 * line + 4] = bgColor;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = bgColor;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = bgColor;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
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

  return 7;
}

uint8_t printPAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = bgColor;
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
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
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

  return 7;
}

uint8_t printQAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 2][10 * line + 4] = bgColor;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = bgColor;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = bgColor;
  dmd[position + 3][10 * line + 6] = color;
  dmd[position + 4][10 * line + 6] = color;
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

  return 7;
}

uint8_t printRAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
  dmd[position + 5][10 * line + 7] = bgColor;
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

  return 7;
}

uint8_t printSAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

  return 7;
}

uint8_t printTAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 3][10 * line + 1] = color;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = bgColor;
  dmd[position + 6][10 * line + 1] = bgColor;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = bgColor;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = color;
  dmd[position + 4][10 * line + 2] = bgColor;
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

  return 7;
}

uint8_t printUAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = bgColor;
  dmd[position + 3][10 * line + 0] = bgColor;
  dmd[position + 4][10 * line + 0] = bgColor;
  dmd[position + 5][10 * line + 0] = bgColor;
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
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = bgColor;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
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

  return 7;
}

uint8_t printVAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = color;
  dmd[position + 3][10 * line + 0] = bgColor;
  dmd[position + 4][10 * line + 0] = bgColor;
  dmd[position + 5][10 * line + 0] = bgColor;
  dmd[position + 6][10 * line + 0] = color;
  dmd[position + 7][10 * line + 0] = bgColor;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = color;
  dmd[position + 2][10 * line + 1] = color;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = bgColor;
  dmd[position + 6][10 * line + 1] = color;
  dmd[position + 7][10 * line + 1] = bgColor;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = color;
  dmd[position + 2][10 * line + 2] = color;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = bgColor;
  dmd[position + 6][10 * line + 2] = color;
  dmd[position + 7][10 * line + 2] = bgColor;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = color;
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = bgColor;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = bgColor;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = color;
  dmd[position + 6][10 * line + 5] = bgColor;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = bgColor;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = color;
  dmd[position + 6][10 * line + 6] = bgColor;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = bgColor;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = color;
  dmd[position + 4][10 * line + 7] = color;
  dmd[position + 5][10 * line + 7] = color;
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

  return 7;
}

uint8_t printWAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = bgColor;
  dmd[position + 3][10 * line + 0] = bgColor;
  dmd[position + 4][10 * line + 0] = bgColor;
  dmd[position + 5][10 * line + 0] = color;
  dmd[position + 6][10 * line + 0] = bgColor;
  dmd[position + 7][10 * line + 0] = bgColor;
  dmd[position + 8][10 * line + 0] = color;

  dmd[position + 0][10 * line + 1] = bgColor;
  dmd[position + 1][10 * line + 1] = color;
  dmd[position + 2][10 * line + 1] = bgColor;
  dmd[position + 3][10 * line + 1] = bgColor;
  dmd[position + 4][10 * line + 1] = bgColor;
  dmd[position + 5][10 * line + 1] = color;
  dmd[position + 6][10 * line + 1] = bgColor;
  dmd[position + 7][10 * line + 1] = bgColor;
  dmd[position + 8][10 * line + 1] = color;

  dmd[position + 0][10 * line + 2] = bgColor;
  dmd[position + 1][10 * line + 2] = color;
  dmd[position + 2][10 * line + 2] = bgColor;
  dmd[position + 3][10 * line + 2] = bgColor;
  dmd[position + 4][10 * line + 2] = bgColor;
  dmd[position + 5][10 * line + 2] = color;
  dmd[position + 6][10 * line + 2] = bgColor;
  dmd[position + 7][10 * line + 2] = bgColor;
  dmd[position + 8][10 * line + 2] = color;

  dmd[position + 0][10 * line + 3] = bgColor;
  dmd[position + 1][10 * line + 3] = color;
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = bgColor;
  dmd[position + 4][10 * line + 3] = bgColor;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = bgColor;
  dmd[position + 7][10 * line + 3] = bgColor;
  dmd[position + 8][10 * line + 3] = color;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = color;
  dmd[position + 6][10 * line + 4] = bgColor;
  dmd[position + 7][10 * line + 4] = bgColor;
  dmd[position + 8][10 * line + 4] = color;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = color;
  dmd[position + 6][10 * line + 5] = bgColor;
  dmd[position + 7][10 * line + 5] = bgColor;
  dmd[position + 8][10 * line + 5] = color;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = color;
  dmd[position + 6][10 * line + 6] = bgColor;
  dmd[position + 7][10 * line + 6] = bgColor;
  dmd[position + 8][10 * line + 6] = color;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = color;
  dmd[position + 4][10 * line + 7] = color;
  dmd[position + 5][10 * line + 7] = color;
  dmd[position + 6][10 * line + 7] = color;
  dmd[position + 7][10 * line + 7] = color;
  dmd[position + 8][10 * line + 7] = color;

  dmd[position + 0][10 * line + 8] = bgColor;
  dmd[position + 1][10 * line + 8] = bgColor;
  dmd[position + 2][10 * line + 8] = bgColor;
  dmd[position + 3][10 * line + 8] = bgColor;
  dmd[position + 4][10 * line + 8] = bgColor;
  dmd[position + 5][10 * line + 8] = bgColor;
  dmd[position + 6][10 * line + 8] = bgColor;
  dmd[position + 7][10 * line + 8] = bgColor;
  dmd[position + 8][10 * line + 8] = bgColor;

  dmd[position + 0][10 * line + 9] = bgColor;
  dmd[position + 1][10 * line + 9] = bgColor;
  dmd[position + 2][10 * line + 9] = bgColor;
  dmd[position + 3][10 * line + 9] = bgColor;
  dmd[position + 4][10 * line + 9] = bgColor;
  dmd[position + 5][10 * line + 9] = bgColor;
  dmd[position + 6][10 * line + 9] = bgColor;
  dmd[position + 7][10 * line + 9] = bgColor;
  dmd[position + 8][10 * line + 9] = bgColor;

  return 9;
}

uint8_t printXAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = bgColor;
  dmd[position + 3][10 * line + 0] = bgColor;
  dmd[position + 4][10 * line + 0] = bgColor;
  dmd[position + 5][10 * line + 0] = bgColor;
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
  dmd[position + 1][10 * line + 3] = bgColor;
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = bgColor;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = color;
  dmd[position + 7][10 * line + 4] = bgColor;

  dmd[position + 0][10 * line + 5] = bgColor;
  dmd[position + 1][10 * line + 5] = color;
  dmd[position + 2][10 * line + 5] = color;
  dmd[position + 3][10 * line + 5] = bgColor;
  dmd[position + 4][10 * line + 5] = bgColor;
  dmd[position + 5][10 * line + 5] = bgColor;
  dmd[position + 6][10 * line + 5] = color;
  dmd[position + 7][10 * line + 5] = bgColor;

  dmd[position + 0][10 * line + 6] = bgColor;
  dmd[position + 1][10 * line + 6] = color;
  dmd[position + 2][10 * line + 6] = color;
  dmd[position + 3][10 * line + 6] = bgColor;
  dmd[position + 4][10 * line + 6] = bgColor;
  dmd[position + 5][10 * line + 6] = bgColor;
  dmd[position + 6][10 * line + 6] = color;
  dmd[position + 7][10 * line + 6] = bgColor;

  dmd[position + 0][10 * line + 7] = bgColor;
  dmd[position + 1][10 * line + 7] = color;
  dmd[position + 2][10 * line + 7] = color;
  dmd[position + 3][10 * line + 7] = bgColor;
  dmd[position + 4][10 * line + 7] = bgColor;
  dmd[position + 5][10 * line + 7] = bgColor;
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

  return 7;
}

uint8_t printYAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  dmd[position + 0][10 * line + 0] = bgColor;
  dmd[position + 1][10 * line + 0] = color;
  dmd[position + 2][10 * line + 0] = bgColor;
  dmd[position + 3][10 * line + 0] = bgColor;
  dmd[position + 4][10 * line + 0] = bgColor;
  dmd[position + 5][10 * line + 0] = bgColor;
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
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
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

  return 7;
}

uint8_t printZAt(rgb_t dmd[80][60], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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
  dmd[position + 1][10 * line + 3] = color;
  dmd[position + 2][10 * line + 3] = color;
  dmd[position + 3][10 * line + 3] = color;
  dmd[position + 4][10 * line + 3] = color;
  dmd[position + 5][10 * line + 3] = color;
  dmd[position + 6][10 * line + 3] = color;
  dmd[position + 7][10 * line + 3] = bgColor;

  dmd[position + 0][10 * line + 4] = bgColor;
  dmd[position + 1][10 * line + 4] = color;
  dmd[position + 2][10 * line + 4] = color;
  dmd[position + 3][10 * line + 4] = bgColor;
  dmd[position + 4][10 * line + 4] = bgColor;
  dmd[position + 5][10 * line + 4] = bgColor;
  dmd[position + 6][10 * line + 4] = bgColor;
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

  return 7;
}
