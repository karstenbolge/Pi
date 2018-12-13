#include "../hdr/color.h"

void setColorType(rgb_t *color, uint8_t type)
{
  switch (type)
  {
  case COLOR_BLACK:
    return setColor(color, 0, 0, 0);
  case COLOR_RED:
    return setColor(color, 255, 0, 0);
  case COLOR_GREEN:
    return setColor(color, 0, 255, 0);
  case COLOR_BLUE:
    return setColor(color, 0, 0, 255);
  default:
    return setColor(color, 255, 255, 255);
  }
}

void setColor(rgb_t *color, uint8_t red, uint8_t green, uint8_t blue)
{
  color->red = red;
  color->green = green;
  color->blue = blue;
}
