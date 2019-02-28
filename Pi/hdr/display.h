#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include <stdlib.h>
#include <stdint.h>
#include "../hdr/color.h"

#define DMD_WIDTH 160
#define DMD_HEIGHT 96

#define LINE_HEIGHT 15
#define LINE_COUNT 6

rgb_t dmd[DMD_WIDTH][DMD_HEIGHT];

void clearScreen();

void testDisplay();

void printAtLine(char *str, uint8_t line, rgb_t color, rgb_t bgColor);
void printAtLineAndPosition(char *str, uint8_t line, uint16_t xPosition, rgb_t color, rgb_t bgColor);

void fillLineWithColor(uint8_t line, rgb_t bgColor);

void showDmd();
void initDmd();
void showDmdTest();

#endif