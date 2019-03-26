#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include "../hdr/display.h"
#include "../hdr/data70.h"
#include "../hdr/color.h"
#include "../hdr/platform.h"
#include "../hdr/config.h"
#include "../hdr/log.h"

void clearScreen()
{
  system("@cls||clear");
}

int fbfd;
char *fbp;
long int location;
struct fb_var_screeninfo vinfo;
struct fb_fix_screeninfo finfo;
long int screensize = 0;

void setScreenBufferColor(char *p, rgb_t *pColor)
{
  *p = pColor->blue;
  *(p + 1) = pColor->green;
  *(p + 2) = pColor->red;
  *(p + 3) = 0;
}

uint8_t printLargeCharAt(unsigned char chr, uint16_t position, uint8_t line, rgb_t *pColor, rgb_t *pBgColor)
{
  switch (chr)
  {
  case '0':
    return printLarge0At(dmd, position, line, pColor, pBgColor);
  case '1':
    return printLarge1At(dmd, position, line, pColor, pBgColor);
  case '2':
    return printLarge2At(dmd, position, line, pColor, pBgColor);
  case '3':
    return printLarge3At(dmd, position, line, pColor, pBgColor);
  case '4':
    return printLarge4At(dmd, position, line, pColor, pBgColor);
  case '5':
    return printLarge5At(dmd, position, line, pColor, pBgColor);
  case '6':
    return printLarge6At(dmd, position, line, pColor, pBgColor);
  case '7':
    return printLarge7At(dmd, position, line, pColor, pBgColor);
  case '8':
    return printLarge8At(dmd, position, line, pColor, pBgColor);
  case '9':
    return printLarge9At(dmd, position, line, pColor, pBgColor);
  case '.':
    return printLargePointAt(dmd, position, line, pColor, pBgColor);
  case ',':
    return printLargeCommaAt(dmd, position, line, pColor, pBgColor);
  default:
    printf("Never here!! %c %d\n", chr, chr);
    return 7;
  }
}

uint8_t printCharAt(unsigned char chr, uint16_t position, uint8_t line, rgb_t *pColor, rgb_t *pBgColor)
{
  line = 12 * line + 1;
  switch (chr)
  {
  case '0':
    return print0At(dmd, position, line, pColor, pBgColor);
  case '1':
    return print1At(dmd, position, line, pColor, pBgColor);
  case '2':
    return print2At(dmd, position, line, pColor, pBgColor);
  case '3':
    return print3At(dmd, position, line, pColor, pBgColor);
  case '4':
    return print4At(dmd, position, line, pColor, pBgColor);
  case '5':
    return print5At(dmd, position, line, pColor, pBgColor);
  case '6':
    return print6At(dmd, position, line, pColor, pBgColor);
  case '7':
    return print7At(dmd, position, line, pColor, pBgColor);
  case '8':
    return print8At(dmd, position, line, pColor, pBgColor);
  case '9':
    return print9At(dmd, position, line, pColor, pBgColor);
  case 'A':
    return printAAt(dmd, position, line, pColor, pBgColor);
  case 'B':
    return printBAt(dmd, position, line, pColor, pBgColor);
  case 'C':
    return printCAt(dmd, position, line, pColor, pBgColor);
  case 'D':
    return printDAt(dmd, position, line, pColor, pBgColor);
  case 'E':
    return printEAt(dmd, position, line, pColor, pBgColor);
  case 'F':
    return printFAt(dmd, position, line, pColor, pBgColor);
  case 'G':
    return printGAt(dmd, position, line, pColor, pBgColor);
  case 'H':
    return printHAt(dmd, position, line, pColor, pBgColor);
  case 'I':
    return printIAt(dmd, position, line, pColor, pBgColor);
  case 'J':
    return printJAt(dmd, position, line, pColor, pBgColor);
  case 'K':
    return printKAt(dmd, position, line, pColor, pBgColor);
  case 'L':
    return printLAt(dmd, position, line, pColor, pBgColor);
  case 'M':
    return printMAt(dmd, position, line, pColor, pBgColor);
  case 'N':
    return printNAt(dmd, position, line, pColor, pBgColor);
  case 'O':
    return printOAt(dmd, position, line, pColor, pBgColor);
  case 'P':
    return printPAt(dmd, position, line, pColor, pBgColor);
  case 'Q':
    return printQAt(dmd, position, line, pColor, pBgColor);
  case 'R':
    return printRAt(dmd, position, line, pColor, pBgColor);
  case 'S':
    return printSAt(dmd, position, line, pColor, pBgColor);
  case 'T':
    return printTAt(dmd, position, line, pColor, pBgColor);
  case 'U':
    return printUAt(dmd, position, line, pColor, pBgColor);
  case 'V':
    return printVAt(dmd, position, line, pColor, pBgColor);
  case 'W':
    return printWAt(dmd, position, line, pColor, pBgColor);
  case 'X':
    return printXAt(dmd, position, line, pColor, pBgColor);
  case 'Y':
    return printYAt(dmd, position, line, pColor, pBgColor);
  case 'Z':
    return printZAt(dmd, position, line, pColor, pBgColor);

  case 'a':
    return printaAt(dmd, position, line, pColor, pBgColor);
  case 'b':
    return printbAt(dmd, position, line, pColor, pBgColor);
  case 'c':
    return printcAt(dmd, position, line, pColor, pBgColor);
  case 'd':
    return printdAt(dmd, position, line, pColor, pBgColor);
  case 'e':
    return printeAt(dmd, position, line, pColor, pBgColor);
  case 'f':
    return printfAt(dmd, position, line, pColor, pBgColor);
  case 'g':
    return printgAt(dmd, position, line, pColor, pBgColor);
  case 'h':
    return printhAt(dmd, position, line, pColor, pBgColor);
  case 'i':
    return printiAt(dmd, position, line, pColor, pBgColor);
  case 'j':
    return printjAt(dmd, position, line, pColor, pBgColor);
  case 'k':
    return printkAt(dmd, position, line, pColor, pBgColor);
  case 'l':
    return printlAt(dmd, position, line, pColor, pBgColor);
  case 'm':
    return printmAt(dmd, position, line, pColor, pBgColor);
  case 'n':
    return printnAt(dmd, position, line, pColor, pBgColor);
  case 'o':
    return printoAt(dmd, position, line, pColor, pBgColor);
  case 'p':
    return printpAt(dmd, position, line, pColor, pBgColor);
  case 'q':
    return printqAt(dmd, position, line, pColor, pBgColor);
  case 'r':
    return printrAt(dmd, position, line, pColor, pBgColor);
  case 's':
    return printsAt(dmd, position, line, pColor, pBgColor);
  case 't':
    return printtAt(dmd, position, line, pColor, pBgColor);
  case 'u':
    return printuAt(dmd, position, line, pColor, pBgColor);
  case 'v':
    return printvAt(dmd, position, line, pColor, pBgColor);
  case 'w':
    return printwAt(dmd, position, line, pColor, pBgColor);
  case 'x':
    return printxAt(dmd, position, line, pColor, pBgColor);
  case 'y':
    return printyAt(dmd, position, line, pColor, pBgColor);
  case 'z':
    return printzAt(dmd, position, line, pColor, pBgColor);
  case '!':
    return printEsclamationAt(dmd, position, line, pColor, pBgColor);
  case '"':
    return printGooseEyesAt(dmd, position, line, pColor, pBgColor);
  case '#':
    return printHashAt(dmd, position, line, pColor, pBgColor);
  case '%':
    return printPercentAt(dmd, position, line, pColor, pBgColor);
  case '&':
    return printAndAt(dmd, position, line, pColor, pBgColor);
  case '/':
    return printSlashAt(dmd, position, line, pColor, pBgColor);
  case '(':
    return printForwardParatheseAt(dmd, position, line, pColor, pBgColor);
  case ')':
    return printBackwardParatheseAt(dmd, position, line, pColor, pBgColor);
  case '=':
    return printEqualAt(dmd, position, line, pColor, pBgColor);
  case '?':
    return printQuestionAt(dmd, position, line, pColor, pBgColor);
  case '@':
    return printAtAt(dmd, position, line, pColor, pBgColor);
  case 256 - 62: //£, ¤
    return 0;
  case 256 - 93: //£
    return printPoundAt(dmd, position, line, pColor, pBgColor);
  case 256 - 92: //¤
    return printTurtleAt(dmd, position, line, pColor, pBgColor);
  case '$':
    return printDollarAt(dmd, position, line, pColor, pBgColor);
  case 256 - 30: //€
    return 0;
  case 256 - 126: //€
    return 0;
  case 256 - 84: //€
    return printEuroAt(dmd, position, line, pColor, pBgColor);
  case '{':
    return printForwardBraceAt(dmd, position, line, pColor, pBgColor);
  case '[':
    return printForwardSquareAt(dmd, position, line, pColor, pBgColor);
  case ']':
    return printBackwardSquareAt(dmd, position, line, pColor, pBgColor);
  case '}':
    return printBackwardBraceAt(dmd, position, line, pColor, pBgColor);
  case '|':
    return printPipeAt(dmd, position, line, pColor, pBgColor);
  case '~':
    return printTilteAt(dmd, position, line, pColor, pBgColor);
  case '\\':
    return printBackSlashAt(dmd, position, line, pColor, pBgColor);
  case '<':
    return printLessthanAt(dmd, position, line, pColor, pBgColor);
  case '>':
    return printGreaterthanAt(dmd, position, line, pColor, pBgColor);
  case '.':
    return printPointAt(dmd, position, line, pColor, pBgColor);
  case ',':
    return printCommaAt(dmd, position, line, pColor, pBgColor);
  case ':':
    return printColonAt(dmd, position, line, pColor, pBgColor);
  case ';':
    return printSemiColonAt(dmd, position, line, pColor, pBgColor);
  case '-':
    return printMinusAt(dmd, position, line, pColor, pBgColor);
  case '_':
    return printUnderScoreAt(dmd, position, line, pColor, pBgColor);
  case '+':
    return printPlusAt(dmd, position, line, pColor, pBgColor);
  case 256 - 79: //±
    return printPlusMinusAt(dmd, position, line, pColor, pBgColor);
  case '*':
    return printAsterixAt(dmd, position, line, pColor, pBgColor);
  case '\'':
    return printFnutAt(dmd, position, line, pColor, pBgColor);
  case '^':
    return printHatAt(dmd, position, line, pColor, pBgColor);
  case ' ':
    return printEmptyAt(dmd, position, line, pColor, pBgColor);
  default:
    printf("Never here!! %c %d\n", chr, chr);
    return 7;
    dmd[position + 0][10 * line + 0] = *pBgColor;
    dmd[position + 1][10 * line + 0] = *pBgColor;
    dmd[position + 2][10 * line + 0] = *pBgColor;
    dmd[position + 3][10 * line + 0] = *pBgColor;
    dmd[position + 4][10 * line + 0] = *pBgColor;
    dmd[position + 5][10 * line + 0] = *pBgColor;
    dmd[position + 6][10 * line + 0] = *pBgColor;
    dmd[position + 7][10 * line + 0] = *pBgColor;

    dmd[position + 0][10 * line + 1] = *pBgColor;
    dmd[position + 1][10 * line + 1] = *pBgColor;
    dmd[position + 2][10 * line + 1] = *pBgColor;
    dmd[position + 3][10 * line + 1] = *pBgColor;
    dmd[position + 4][10 * line + 1] = *pBgColor;
    dmd[position + 5][10 * line + 1] = *pBgColor;
    dmd[position + 6][10 * line + 1] = *pBgColor;
    dmd[position + 7][10 * line + 1] = *pBgColor;

    dmd[position + 0][10 * line + 2] = *pBgColor;
    dmd[position + 1][10 * line + 2] = *pBgColor;
    dmd[position + 2][10 * line + 2] = *pBgColor;
    dmd[position + 3][10 * line + 2] = *pBgColor;
    dmd[position + 4][10 * line + 2] = *pBgColor;
    dmd[position + 5][10 * line + 2] = *pBgColor;
    dmd[position + 6][10 * line + 2] = *pBgColor;
    dmd[position + 7][10 * line + 2] = *pBgColor;

    dmd[position + 0][10 * line + 3] = *pBgColor;
    dmd[position + 1][10 * line + 3] = *pBgColor;
    dmd[position + 2][10 * line + 3] = *pBgColor;
    dmd[position + 3][10 * line + 3] = *pBgColor;
    dmd[position + 4][10 * line + 3] = *pBgColor;
    dmd[position + 5][10 * line + 3] = *pBgColor;
    dmd[position + 6][10 * line + 3] = *pBgColor;
    dmd[position + 7][10 * line + 3] = *pBgColor;

    dmd[position + 0][10 * line + 4] = *pBgColor;
    dmd[position + 1][10 * line + 4] = *pBgColor;
    dmd[position + 2][10 * line + 4] = *pBgColor;
    dmd[position + 3][10 * line + 4] = *pBgColor;
    dmd[position + 4][10 * line + 4] = *pBgColor;
    dmd[position + 5][10 * line + 4] = *pBgColor;
    dmd[position + 6][10 * line + 4] = *pBgColor;
    dmd[position + 7][10 * line + 4] = *pBgColor;

    dmd[position + 0][10 * line + 5] = *pBgColor;
    dmd[position + 1][10 * line + 5] = *pBgColor;
    dmd[position + 2][10 * line + 5] = *pBgColor;
    dmd[position + 3][10 * line + 5] = *pBgColor;
    dmd[position + 4][10 * line + 5] = *pBgColor;
    dmd[position + 5][10 * line + 5] = *pBgColor;
    dmd[position + 6][10 * line + 5] = *pBgColor;
    dmd[position + 7][10 * line + 5] = *pBgColor;

    dmd[position + 0][10 * line + 6] = *pBgColor;
    dmd[position + 1][10 * line + 6] = *pBgColor;
    dmd[position + 2][10 * line + 6] = *pBgColor;
    dmd[position + 3][10 * line + 6] = *pBgColor;
    dmd[position + 4][10 * line + 6] = *pBgColor;
    dmd[position + 5][10 * line + 6] = *pBgColor;
    dmd[position + 6][10 * line + 6] = *pBgColor;
    dmd[position + 7][10 * line + 6] = *pBgColor;

    dmd[position + 0][10 * line + 7] = *pBgColor;
    dmd[position + 1][10 * line + 7] = *pBgColor;
    dmd[position + 2][10 * line + 7] = *pBgColor;
    dmd[position + 3][10 * line + 7] = *pBgColor;
    dmd[position + 4][10 * line + 7] = *pBgColor;
    dmd[position + 5][10 * line + 7] = *pBgColor;
    dmd[position + 6][10 * line + 7] = *pBgColor;
    dmd[position + 7][10 * line + 7] = *pBgColor;

    dmd[position + 0][10 * line + 8] = *pBgColor;
    dmd[position + 1][10 * line + 8] = *pBgColor;
    dmd[position + 2][10 * line + 8] = *pBgColor;
    dmd[position + 3][10 * line + 8] = *pBgColor;
    dmd[position + 4][10 * line + 8] = *pBgColor;
    dmd[position + 5][10 * line + 8] = *pBgColor;
    dmd[position + 6][10 * line + 8] = *pBgColor;
    dmd[position + 7][10 * line + 8] = *pBgColor;

    dmd[position + 0][10 * line + 9] = *pBgColor;
    dmd[position + 1][10 * line + 9] = *pBgColor;
    dmd[position + 2][10 * line + 9] = *pBgColor;
    dmd[position + 3][10 * line + 9] = *pBgColor;
    dmd[position + 4][10 * line + 9] = *pBgColor;
    dmd[position + 5][10 * line + 9] = *pBgColor;
    dmd[position + 6][10 * line + 9] = *pBgColor;
    dmd[position + 7][10 * line + 9] = *pBgColor;

    return 8;
  }
}

void printCenterAtLine(char *str, uint8_t line, rgb_t *pColor, rgb_t *pBgColor)
{
  uint16_t length = 0;
  char *pTemp = str;
  while (*pTemp != 0)
  {
    length += printCharAt(*pTemp, length, line, NULL, NULL);
    pTemp++;
  }

  if (length > DMD_WIDTH)
  {
    writeLogString("printCenterAtLine too wide");
    return;
  }

  printAtLineAndPosition(str, line, (DMD_WIDTH - length) / 2, pColor, pBgColor);
}

void printAtLine(char *str, uint8_t line, rgb_t *pColor, rgb_t *pBgColor)
{
  uint16_t position = 0;
  while (*str != 0)
  {
    position += printCharAt(*str, position, line, pColor, pBgColor);
    str++;
  }
}

uint16_t printAtLineAndPosition(char *str, uint8_t line, uint16_t xPosition, rgb_t *pColor, rgb_t *pBgColor)
{
  uint16_t position = xPosition;
  while (*str != 0)
  {
    position += printCharAt(*str, position, line, pColor, pBgColor);
    str++;
  }

  return position;
}

uint16_t printLargeAtLineAndPosition(char *str, uint8_t line, uint16_t xPosition, rgb_t *pColor, rgb_t *bgColor)
{
  uint16_t position = xPosition;
  while (*str != 0)
  {
    position += printLargeCharAt(*str, position, line, pColor, bgColor);
    str++;
  }

  return position;
}

uint16_t printLargeAtYAndPosition(char *str, uint8_t line, uint16_t xPosition, rgb_t *pColor, rgb_t *bgColor)
{
  uint16_t position = xPosition;
  while (*str != 0)
  {
    position += printLargeCharAt(*str, position, line, pColor, bgColor);
    str++;
  }

  return position;
}

int makeScoreString(uint32_t score, char *pScore)
{
  int millions = score / 1000000;
  int thousands = (score - 1000000 * millions) / 1000;
  int ones = score - 1000000 * millions - 1000 * thousands;

  if (millions > 0)
  {
    sprintf(pScore, "%d%c%03d%c%03d", millions, config.decimalSeperator, thousands, config.decimalSeperator, ones);
    return 2;
  }

  if (thousands > 0)
  {
    sprintf(pScore, "%d%c%03d", thousands, config.decimalSeperator, ones);
    return 1;
  }

  sprintf(pScore, "%d", ones);
  return 0;
}

void makeTimeString(uint64_t epoch, char *pScore)
{
  struct tm *timeinfo;
  timeinfo = localtime(&epoch);

  uint16_t year = timeinfo->tm_year + 1900;
  uint8_t month = timeinfo->tm_mon + 1;
  uint8_t date = timeinfo->tm_mday;
  uint8_t hour = timeinfo->tm_hour;
  uint8_t minute = timeinfo->tm_min;

  sprintf(pScore, "%04d-%02d-%02d %02d:%02d", year, month, date, hour, minute);
}

void printScore(uint32_t score, uint8_t line, uint8_t size)
{
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  char pScore[12];
  int seperatos = makeScoreString(score, pScore);

  int width = seperatos * 3 * size + (strlen(pScore) - seperatos) * 7 * size;

  if (size == 2)
  {
    printLargeAtLineAndPosition(pScore, 5 + line * 24, DMD_WIDTH - width - 2, &color, &bgColor);
    return;
  }

  printAtLineAndPosition(pScore, line * 2 + (2 - size), DMD_WIDTH - width - 2, &color, &bgColor);
}

void drawProgress(uint8_t progress, uint8_t line, uint16_t xPosition, rgb_t *pColor)
{
  if (xPosition + 63 >= DMD_WIDTH)
  {
    return;
  }

  // horizotal
  for (int i = xPosition; i < xPosition + 63; i++)
  {
    dmd[i][line * 12] = *pColor;
    //dmd[i][line * 12 + 1] = color;
    //dmd[i][line * 12 + 8] = color;
    dmd[i][line * 12 + 9] = *pColor;
  }

  // vertical
  for (int i = line * 12 + 1; i < line * 12 + 9; i++)
  {
    dmd[xPosition][i] = *pColor;
    //dmd[xPosition + 1][i] = color;
    //dmd[xPosition + 33][i] = color;
    dmd[xPosition + 62][i] = *pColor;
  }

  // bars
  for (int i = 0; i < progress && i < 20; i++)
  {
    drawProgressBlock(i, line, xPosition, pColor);
  }
}

void drawProgressBlock(uint8_t progress, uint8_t line, uint16_t xPosition, rgb_t *pColor)
{
  dmd[xPosition + 2 + 3 * progress][line * 12 + 3] = *pColor;
  dmd[xPosition + 2 + 3 * progress][line * 12 + 4] = *pColor;
  dmd[xPosition + 2 + 3 * progress][line * 12 + 5] = *pColor;
  dmd[xPosition + 2 + 3 * progress][line * 12 + 6] = *pColor;
  dmd[xPosition + 3 + 3 * progress][line * 12 + 3] = *pColor;
  dmd[xPosition + 3 + 3 * progress][line * 12 + 4] = *pColor;
  dmd[xPosition + 3 + 3 * progress][line * 12 + 5] = *pColor;
  dmd[xPosition + 3 + 3 * progress][line * 12 + 6] = *pColor;

  dmd[xPosition + 2 + 3 * progress][line * 12 + 2] = *pColor;
  dmd[xPosition + 2 + 3 * progress][line * 12 + 7] = *pColor;
  dmd[xPosition + 3 + 3 * progress][line * 12 + 2] = *pColor;
  dmd[xPosition + 3 + 3 * progress][line * 12 + 7] = *pColor;
}

void frameLine(uint8_t line, uint16_t length, rgb_t *pBgColor)
{
  line *= 12;
  for (uint16_t i = 0; i < DMD_WIDTH && i < length; i++)
  {
    dmd[i][line] = *pBgColor;
  }
  if (length < DMD_WIDTH)
  {
    for (uint8_t i = line; i < DMD_HEIGHT && i < line + 12; i++)
    {
      dmd[length][i] = *pBgColor;
    }
  }
}

void fillLineWithColor(uint8_t line, rgb_t *pBgColor)
{
  for (uint8_t j = line * 12; j < (line + 1) * 12; j++)
  {
    for (uint16_t i = 0; i < DMD_WIDTH; i++)
    {
      dmd[i][j] = *pBgColor;
    }
  }
}

void initDmd()
{
  fbfd = 0;
  screensize = 0;
  int x = 0, y = 0;
  location = 0;

  // Open the file for reading and writing
  fbfd = open("/dev/fb0", O_RDWR);
  if (fbfd == -1)
  {
    perror("Error: cannot open framebuffer device");
    exit(1);
  }
  //printf("The framebuffer device was opened successfully.\n");

  // Get fixed screen information
  if (ioctl(fbfd, FBIOGET_FSCREENINFO, &finfo) == -1)
  {
    perror("Error reading fixed information");
    exit(2);
  }

  // Get variable screen information
  if (ioctl(fbfd, FBIOGET_VSCREENINFO, &vinfo) == -1)
  {
    perror("Error reading variable information");
    exit(3);
  }

  // Figure out the size of the screen in bytes
  screensize = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8;

  // Map the device to memory
  fbp = (char *)mmap(0, screensize, PROT_READ | PROT_WRITE, MAP_SHARED, fbfd, 0);
  if ((long)fbp == -1)
  {
    perror("Error: failed to map framebuffer device to memory");
    exit(4);
  }
}
