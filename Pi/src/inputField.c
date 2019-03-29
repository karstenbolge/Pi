#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/inputField.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"
#include "../hdr/sound.h"

#define IN_INPUT_STRING_OFF 0
#define IN_INPUT_STRING_ON 1

char newStr[32];
char displayStr[32];
uint8_t maxLength;
uint8_t inInputString;
uint8_t fieldTick;

void openInputField(char *pStr, uint8_t length)
{
  strcpy(newStr, pStr);
  maxLength = length;
  inInputString = IN_INPUT_STRING_ON;
  fieldTick = 0;
}

void closeInpuField()
{
  inInputString = IN_INPUT_STRING_OFF;
}

void inputFieldUp()
{
}

void inputFieldDown()
{
}

void inputFieldTick(uint8_t tick)
{
  if (inInputString == IN_INPUT_STRING_OFF)
  {
    return;
  }

  fieldTick = tick;
}

void displayInputFieldAt(uint8_t line)
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  strncpy(displayStr, newStr, strlen(newStr) - 1);
  uint16_t position = printAtLineAndPosition(displayStr, 3, 0, &color, NULL);

  if ((fieldTick / 10) % 2 == 0)
  {
    position = printAtLineAndPosition(&newStr[strlen(newStr) - 1], 3, position, &color, NULL);
  }
}

char *getInputFieldValue()
{
  return &newStr[0];
}