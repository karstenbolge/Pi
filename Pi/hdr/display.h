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

void printCenterAtLine(char *str, uint8_t line, rgb_t *pColor, rgb_t *pBgColor);
void printAtLine(char *str, uint8_t line, rgb_t *pColor, rgb_t *pBgColor);
uint16_t printAtLineAndPosition(char *str, uint8_t line, uint16_t xPosition, rgb_t *pColor, rgb_t *pBgColor);
uint16_t printLargeAtLineAndPosition(char *str, uint8_t line, uint16_t xPosition, rgb_t *pColor, rgb_t *pBgColor);
uint16_t printLargeAtYAndPosition(char *str, uint8_t line, uint16_t xPosition, rgb_t *pColor, rgb_t *pBgColor);

int makeScoreString(uint32_t score, char *pScore);
void printScore(uint32_t score, uint8_t line, uint8_t size);
void makeTimeString(uint64_t epoch, char *pScore);

void drawProgress(uint8_t progress, uint8_t line, uint16_t xPosition, rgb_t *pColor);
void drawProgressBlock(uint8_t progress, uint8_t line, uint16_t xPosition, rgb_t *pColor);

void frameLine(uint8_t line, uint16_t length, rgb_t *pBgColor);

void fillLineWithColor(uint8_t line, rgb_t *pBgColor);

void initDmd();

#endif