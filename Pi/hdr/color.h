#ifndef _COLOR_H_
#define _COLOR_H_

#include <stdint.h>

#define COLOR_BLACK 0
#define COLOR_RED 1
#define COLOR_GREEN 2
#define COLOR_BLUE 3
#define COLOR_YELLOW 4

typedef struct rgb
{
  uint8_t red;
  uint8_t green;
  uint8_t blue;
} rgb_t;

void setColor(rgb_t *color, uint8_t red, uint8_t green, uint8_t blue);
void setColorType(rgb_t *color, uint8_t type);

#endif