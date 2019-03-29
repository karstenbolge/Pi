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

#define CHAR_NEXT_UP 0
#define CHAR_NEXT_DOWN 1

char getNextChar(char inChar, uint8_t direction)
{
  if (direction == CHAR_NEXT_UP)
  {
    switch (inChar)
    {
    case 'A':
      return 'B';
    case 'B':
      return 'C';
    case 'C':
      return 'D';
    case 'D':
      return 'E';
    case 'E':
      return 'F';
    case 'F':
      return 'G';
    case 'G':
      return 'H';
    case 'H':
      return 'I';
    case 'I':
      return 'J';
    case 'J':
      return 'K';
    case 'K':
      return 'L';
    case 'L':
      return 'M';
    case 'M':
      return 'N';
    case 'N':
      return 'O';
    case 'O':
      return 'P';
    case 'P':
      return 'Q';
    case 'Q':
      return 'R';
    case 'R':
      return 'S';
    case 'S':
      return 'T';
    case 'T':
      return 'U';
    case 'U':
      return 'V';
    case 'V':
      return 'W';
    case 'W':
      return 'X';
    case 'X':
      return 'Y';
    case 'Y':
      return 'Z';
    case 'Z':
      return '0';
    case '0':
      return '1';
    case '1':
      return '2';
    case '2':
      return '3';
    case '3':
      return '4';
    case '4':
      return '5';
    case '5':
      return '6';
    case '6':
      return '7';
    case '7':
      return '8';
    case '8':
      return '9';
    case '9':
      return '.';
    case '.':
      return ',';
    case ',':
      return ':';
    case ':':
      return ';';
    case ';':
      return '<';
    case '<':
      return '>';
    case '>':
      return 'A';
    }
  }

  if (direction == CHAR_NEXT_UP)
  {
    switch (inChar)
    {
    case 'A':
      return '>';
    case 'B':
      return 'A';
    case 'C':
      return 'B';
    case 'D':
      return 'C';
    case 'E':
      return 'D';
    case 'F':
      return 'E';
    case 'G':
      return 'F';
    case 'H':
      return 'G';
    case 'I':
      return 'H';
    case 'J':
      return 'I';
    case 'K':
      return 'J';
    case 'L':
      return 'K';
    case 'M':
      return 'L';
    case 'N':
      return 'M';
    case 'O':
      return 'N';
    case 'P':
      return 'O';
    case 'Q':
      return 'P';
    case 'R':
      return 'Q';
    case 'S':
      return 'R';
    case 'T':
      return 'S';
    case 'U':
      return 'T';
    case 'V':
      return 'U';
    case 'W':
      return 'V';
    case 'X':
      return 'W';
    case 'Y':
      return 'X';
    case 'Z':
      return 'Y';
    case '0':
      return 'Z';
    case '1':
      return '0';
    case '2':
      return '1';
    case '3':
      return '2';
    case '4':
      return '3';
    case '5':
      return '4';
    case '6':
      return '5';
    case '7':
      return '6';
    case '8':
      return '7';
    case '9':
      return '8';
    case '.':
      return '9';
    case ',':
      return '.';
    case ':':
      return ',';
    case ';':
      return ':';
    case '<':
      return ';';
    case '>':
      return '<';
    }
  }

  return 0;
}

void openInputField(char *pStr, uint8_t line, uint8_t length)
{
  strcpy(newStr, pStr);
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

void displayInputField()
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  clearDmd();

  printAtLineAndPosition("This game id", 1, 0, &color, NULL);

  strncpy(displayStr, newStr, strlen(newStr) - 1);
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