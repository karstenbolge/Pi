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
uint8_t inInputString = IN_INPUT_STRING_OFF;
uint8_t fieldTick;
uint8_t thisLine;
uint8_t inPutType;
char staticStr[2][32];

#define CHAR_NEXT_UP 0
#define CHAR_NEXT_DOWN 1

char getNextChar(char inChar, uint8_t direction)
{
  if (direction == CHAR_NEXT_DOWN)
  {
    if (inChar >= 'A' && inChar < 'Z')
    {
      return inChar + 1;
    }
    if (inChar == 'Z')
    {
      return '0';
    }
    if (inChar >= '0' && inChar < '9')
    {
      return inChar + 1;
    }
    if (inChar == '9')
    {
      return '<';
    }
    if (inChar == '<')
    {
      return '>';
    }
    if (inChar == '>')
    {
      return 'A';
    }
  }

  if (direction == CHAR_NEXT_UP)
  {
    if (inChar > 'A' && inChar <= 'Z')
    {
      return inChar - 1;
    }
    if (inChar == 'A')
    {
      return '>';
    }
    if (inChar == '>')
    {
      return '<';
    }
    if (inChar == '<')
    {
      return '9';
    }
    if (inChar <= '9' && inChar < '0')
    {
      return inChar - 1;
    }
    if (inChar == '0')
    {
      return 'Z';
    }
  }

  printf("NEVER her\n");
  return 'Z';
}

void openInputField(char *pStr, uint8_t line, uint8_t length, uint8_t type)
{
  inPutType = type;
  if (pStr && strlen(pStr) > 0)
  {
    strcpy(newStr, pStr);
  }
  else
  {
    // Initialize
    newStr[0] = 'A';
    newStr[1] = 0;
  }

  maxLength = length;
  inInputString = IN_INPUT_STRING_ON;
  thisLine = line;
  fieldTick = 0;
}

int inputFieldDone()
{
  //delete last char
  if (newStr[strlen(newStr) - 1] == '<')
  {
    if (strlen(newStr) == 1)
    {
      playSoundEnter();
      return 0;
    }
    newStr[strlen(newStr) - 1] = 0;
    displayInputField();
    return 0;
  }

  // if last char is enter then done
  if (newStr[strlen(newStr) - 1] == '>' || strlen(newStr) == maxLength)
  {
    newStr[strlen(newStr) - 1] = 0;
    return 1;
  }

  newStr[strlen(newStr)] = 'A';
  displayInputField();
  return 0;
}

void closeInputField()
{
  inInputString = IN_INPUT_STRING_OFF;
}

void inputFieldUp()
{
  if (inInputString == IN_INPUT_STRING_OFF)
  {
    return;
  }

  newStr[strlen(newStr) - 1] = getNextChar(newStr[strlen(newStr) - 1], CHAR_NEXT_UP);
  displayInputField();
}

void inputFieldDown()
{
  if (inInputString == IN_INPUT_STRING_OFF)
  {
    return;
  }

  newStr[strlen(newStr) - 1] = getNextChar(newStr[strlen(newStr) - 1], CHAR_NEXT_DOWN);
  displayInputField();
}

void inputFieldTick(uint8_t tick)
{
  if (inInputString == IN_INPUT_STRING_OFF)
  {
    return;
  }

  fieldTick = tick;

  if ((fieldTick % 10) == 0)
  {
    displayInputField();
  }
}

void setStaticStr(char *pStr1, char *pStr2)
{
  memset(&staticStr[0][0], 0, 32);
  memset(&staticStr[1][0], 0, 32);
  if (pStr1 && strlen(pStr1) > 0)
  {
    strcpy(&staticStr[0][0], pStr1);
  }
  if (pStr2 && strlen(pStr2) > 0)
  {
    strcpy(&staticStr[1][0], pStr2);
  }
}

void displayInputField()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();

  if (staticStr[0][0] != 0)
  {
    printAtLineAndPosition(&staticStr[0][0], 0, 0, &color, NULL);
  }
  if (staticStr[1][0] != 0)
  {
    printAtLineAndPosition(&staticStr[1][0], 1, 0, &color, NULL);
  }

  if (strlen(newStr) > 0)
  {
    strncpy(displayStr, newStr, strlen(newStr) - 1);
    displayStr[strlen(newStr) - 1] = 0;
  }
  else
  {
    displayStr[0] = 0;
  }

  uint16_t position = printAtLineAndPosition(displayStr, 3, 0, &color, NULL);

  if ((fieldTick / 10) % 2 == 0)
  {
    position = printAtLineAndPosition(&newStr[strlen(newStr) - 1], 3, position, &color, NULL);
  }

  refreshDmd();
}

char *getInputFieldValue()
{
  return &newStr[0];
}