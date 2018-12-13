#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include <stdlib.h>
#include <stdint.h>
#include "../hdr/color.h"

#define DMD_WIDTH 200
#define DMD_HEIGHT 60

rgb_t dmd[DMD_WIDTH][DMD_HEIGHT];

void clearScreen();

void testDisplay();

void printAtLine(char *str, uint8_t line, rgb_t color, rgb_t bgColor);

void showDmd();

void showDmdTest();

#endif