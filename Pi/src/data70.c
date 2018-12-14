#include <stdint.h>
#include <stdio.h>
#include "../hdr/data70.h"

// http://www.identifont.com/similar?2SS

uint8_t print0At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t print1At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t print2At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t print3At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t print4At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t print5At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t print6At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t print7At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t print8At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t print9At(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printAAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printBAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printCAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printDAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printEAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printFAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printGAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printHAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printIAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printJAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printKAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printLAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printMAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printNAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printOAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printPAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printQAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printRAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printSAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printTAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printUAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printVAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printWAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printXAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printYAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printZAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
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

uint8_t printaAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printbAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printcAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printdAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printeAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printfAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 5;
}

uint8_t printgAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printhAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printiAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 3;
}

uint8_t printjAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 3;
}

uint8_t printkAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printlAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 3;
}

uint8_t printmAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = color;
  dmd[position + 7][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = color;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = color;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = color;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = color;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 8;
}

uint8_t printnAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printoAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printpAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printqAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printrAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 5;
}

uint8_t printsAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printtAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 4;
}

uint8_t printuAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printvAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printwAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = color;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = color;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = color;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = color;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = color;
  dmd[position + 7][line] = color;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;
  dmd[position + 7][line] = bgColor;

  return 8;
}

uint8_t printxAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printyAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printzAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printEsclamationAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 3;
}

uint8_t printGooseEyesAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printHashAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = color;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = color;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = color;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = color;
  dmd[position + 2][line] = color;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = color;
  dmd[position + 5][line] = color;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}

uint8_t printEmptyAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}



uint8_t printEmptyAt(rgb_t dmd[DMD_WIDTH][DMD_HEIGHT], uint8_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line *= LINE_HEIGHT;
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //1
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //2
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //3
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //4
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //5
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //6
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //7
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //8
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  line++; //9
  dmd[position + 0][line] = bgColor;
  dmd[position + 1][line] = bgColor;
  dmd[position + 2][line] = bgColor;
  dmd[position + 3][line] = bgColor;
  dmd[position + 4][line] = bgColor;
  dmd[position + 5][line] = bgColor;
  dmd[position + 6][line] = bgColor;

  return 6;
}
