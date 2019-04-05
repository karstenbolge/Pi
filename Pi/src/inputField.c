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
char staticStr[8][32];

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
      return BACKSPACE;
    }
    if (inChar == BACKSPACE)
    {
      return NEWLINE;
    }
    if (inChar == NEWLINE)
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
      return NEWLINE;
    }
    if (inChar == NEWLINE)
    {
      return BACKSPACE;
    }
    if (inChar == BACKSPACE)
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
  if (newStr[strlen(newStr) - 1] == BACKSPACE)
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
  if (newStr[strlen(newStr) - 1] == NEWLINE || strlen(newStr) == maxLength)
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

void setStaticStr(char *pStr1, char *pStr2, char *pStr3, char *pStr4, char *pStr5, char *pStr6, char *pStr7, char *pStr8)
{
  memset(&staticStr[0][0], 0, 32);
  memset(&staticStr[1][0], 0, 32);
  memset(&staticStr[2][0], 0, 32);
  memset(&staticStr[3][0], 0, 32);
  memset(&staticStr[4][0], 0, 32);
  memset(&staticStr[5][0], 0, 32);
  memset(&staticStr[6][0], 0, 32);
  memset(&staticStr[7][0], 0, 32);

  if (pStr1 && strlen(pStr1) > 0)
  {
    strcpy(&staticStr[0][0], pStr1);
  }
  if (pStr2 && strlen(pStr2) > 0)
  {
    strcpy(&staticStr[1][0], pStr2);
  }
  if (pStr3 && strlen(pStr3) > 0)
  {
    strcpy(&staticStr[2][0], pStr3);
  }
  if (pStr4 && strlen(pStr4) > 0)
  {
    strcpy(&staticStr[3][0], pStr4);
  }
  if (pStr5 && strlen(pStr5) > 0)
  {
    strcpy(&staticStr[4][0], pStr5);
  }
  if (pStr6 && strlen(pStr6) > 0)
  {
    strcpy(&staticStr[5][0], pStr6);
  }
  if (pStr7 && strlen(pStr7) > 0)
  {
    strcpy(&staticStr[6][0], pStr7);
  }
  if (pStr8 && strlen(pStr8) > 0)
  {
    strcpy(&staticStr[7][0], pStr8);
  }
}

void displayInputField()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();

  for (int i = 0; i < 8; i++)
  {
    if (staticStr[i][0] != 0)
    {
      printAtLineAndPosition(&staticStr[i][0], i, 0, &color, NULL);
    }
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

  uint16_t position = printAtLineAndPosition(displayStr, thisLine, 0, &color, NULL);

  if ((fieldTick / 10) % 2 == 0)
  {
    position = printAtLineAndPosition(&newStr[strlen(newStr) - 1], thisLine, position, &color, NULL);
  }

  refreshDmd();
}

char *getInputFieldValue()
{
  return &newStr[0];
}