#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <stdint.h>
#include "../hdr/display.h"
#include "../hdr/data70.h"
#include "../hdr/color.h"
#include "../hdr/platform.h"

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

void setScreenBufferColor(char *p, rgb_t color)
{
  *p = color.blue;
  *(p + 1) = color.green;
  *(p + 2) = color.red;
  *(p + 3) = 0;
}

uint8_t printCharAt(unsigned char chr, uint16_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  line = 12 * line + 1;
  switch (chr)
  {
  case '0':
    return print0At(dmd, position, line, color, bgColor);
  case '1':
    return print1At(dmd, position, line, color, bgColor);
  case '2':
    return print2At(dmd, position, line, color, bgColor);
  case '3':
    return print3At(dmd, position, line, color, bgColor);
  case '4':
    return print4At(dmd, position, line, color, bgColor);
  case '5':
    return print5At(dmd, position, line, color, bgColor);
  case '6':
    return print6At(dmd, position, line, color, bgColor);
  case '7':
    return print7At(dmd, position, line, color, bgColor);
  case '8':
    return print8At(dmd, position, line, color, bgColor);
  case '9':
    return print9At(dmd, position, line, color, bgColor);
  case 'A':
    return printAAt(dmd, position, line, color, bgColor);
  case 'B':
    return printBAt(dmd, position, line, color, bgColor);
  case 'C':
    return printCAt(dmd, position, line, color, bgColor);
  case 'D':
    return printDAt(dmd, position, line, color, bgColor);
  case 'E':
    return printEAt(dmd, position, line, color, bgColor);
  case 'F':
    return printFAt(dmd, position, line, color, bgColor);
  case 'G':
    return printGAt(dmd, position, line, color, bgColor);
  case 'H':
    return printHAt(dmd, position, line, color, bgColor);
  case 'I':
    return printIAt(dmd, position, line, color, bgColor);
  case 'J':
    return printJAt(dmd, position, line, color, bgColor);
  case 'K':
    return printKAt(dmd, position, line, color, bgColor);
  case 'L':
    return printLAt(dmd, position, line, color, bgColor);
  case 'M':
    return printMAt(dmd, position, line, color, bgColor);
  case 'N':
    return printNAt(dmd, position, line, color, bgColor);
  case 'O':
    return printOAt(dmd, position, line, color, bgColor);
  case 'P':
    return printPAt(dmd, position, line, color, bgColor);
  case 'Q':
    return printQAt(dmd, position, line, color, bgColor);
  case 'R':
    return printRAt(dmd, position, line, color, bgColor);
  case 'S':
    return printSAt(dmd, position, line, color, bgColor);
  case 'T':
    return printTAt(dmd, position, line, color, bgColor);
  case 'U':
    return printUAt(dmd, position, line, color, bgColor);
  case 'V':
    return printVAt(dmd, position, line, color, bgColor);
  case 'W':
    return printWAt(dmd, position, line, color, bgColor);
  case 'X':
    return printXAt(dmd, position, line, color, bgColor);
  case 'Y':
    return printYAt(dmd, position, line, color, bgColor);
  case 'Z':
    return printZAt(dmd, position, line, color, bgColor);

  case 'a':
    return printaAt(dmd, position, line, color, bgColor);
  case 'b':
    return printbAt(dmd, position, line, color, bgColor);
  case 'c':
    return printcAt(dmd, position, line, color, bgColor);
  case 'd':
    return printdAt(dmd, position, line, color, bgColor);
  case 'e':
    return printeAt(dmd, position, line, color, bgColor);
  case 'f':
    return printfAt(dmd, position, line, color, bgColor);
  case 'g':
    return printgAt(dmd, position, line, color, bgColor);
  case 'h':
    return printhAt(dmd, position, line, color, bgColor);
  case 'i':
    return printiAt(dmd, position, line, color, bgColor);
  case 'j':
    return printjAt(dmd, position, line, color, bgColor);
  case 'k':
    return printkAt(dmd, position, line, color, bgColor);
  case 'l':
    return printlAt(dmd, position, line, color, bgColor);
  case 'm':
    return printmAt(dmd, position, line, color, bgColor);
  case 'n':
    return printnAt(dmd, position, line, color, bgColor);
  case 'o':
    return printoAt(dmd, position, line, color, bgColor);
  case 'p':
    return printpAt(dmd, position, line, color, bgColor);
  case 'q':
    return printqAt(dmd, position, line, color, bgColor);
  case 'r':
    return printrAt(dmd, position, line, color, bgColor);
  case 's':
    return printsAt(dmd, position, line, color, bgColor);
  case 't':
    return printtAt(dmd, position, line, color, bgColor);
  case 'u':
    return printuAt(dmd, position, line, color, bgColor);
  case 'v':
    return printvAt(dmd, position, line, color, bgColor);
  case 'w':
    return printwAt(dmd, position, line, color, bgColor);
  case 'x':
    return printxAt(dmd, position, line, color, bgColor);
  case 'y':
    return printyAt(dmd, position, line, color, bgColor);
  case 'z':
    return printzAt(dmd, position, line, color, bgColor);
  case '!':
    return printEsclamationAt(dmd, position, line, color, bgColor);
  case '"':
    return printGooseEyesAt(dmd, position, line, color, bgColor);
  case '#':
    return printHashAt(dmd, position, line, color, bgColor);
  case '%':
    return printPercentAt(dmd, position, line, color, bgColor);
  case '&':
    return printAndAt(dmd, position, line, color, bgColor);
  case '/':
    return printSlashAt(dmd, position, line, color, bgColor);
  case '(':
    return printForwardParatheseAt(dmd, position, line, color, bgColor);
  case ')':
    return printBackwardParatheseAt(dmd, position, line, color, bgColor);
  case '=':
    return printEqualAt(dmd, position, line, color, bgColor);
  case '?':
    return printQuestionAt(dmd, position, line, color, bgColor);
  case '@':
    return printAtAt(dmd, position, line, color, bgColor);
  case 256 - 62: //£, ¤
    return 0;
  case 256 - 93: //£
    return printPoundAt(dmd, position, line, color, bgColor);
  case 256 - 92: //¤
    return printTurtleAt(dmd, position, line, color, bgColor);
  case '$':
    return printDollarAt(dmd, position, line, color, bgColor);
  case 256 - 30: //€
    return 0;
  case 256 - 126: //€
    return 0;
  case 256 - 84: //€
    return printEuroAt(dmd, position, line, color, bgColor);
  case '{':
    return printForwardBraceAt(dmd, position, line, color, bgColor);
  case '[':
    return printForwardSquareAt(dmd, position, line, color, bgColor);
  case ']':
    return printBackwardSquareAt(dmd, position, line, color, bgColor);
  case '}':
    return printBackwardBraceAt(dmd, position, line, color, bgColor);
  case '|':
    return printPipeAt(dmd, position, line, color, bgColor);
  case '~':
    return printTilteAt(dmd, position, line, color, bgColor);
  case '\\':
    return printBackSlashAt(dmd, position, line, color, bgColor);
  case '.':
    return printPointAt(dmd, position, line, color, bgColor);
  case ',':
    return printCommaAt(dmd, position, line, color, bgColor);
  case '-':
    return printMinusAt(dmd, position, line, color, bgColor);
  case '+':
    return printPlusAt(dmd, position, line, color, bgColor);
  case 256 - 79: //±
    return printPlusMinusAt(dmd, position, line, color, bgColor);
  case '*':
    return printAsterixAt(dmd, position, line, color, bgColor);
  case '\'':
    return printFnutAt(dmd, position, line, color, bgColor);
  case '^':
    return printHatAt(dmd, position, line, color, bgColor);
  case ' ':
    return printEmptyAt(dmd, position, line, color, bgColor);
  default:
    printf("Never here!! %c %d\n", chr, chr);
    return 7;
    dmd[position + 0][10 * line + 0] = bgColor;
    dmd[position + 1][10 * line + 0] = bgColor;
    dmd[position + 2][10 * line + 0] = bgColor;
    dmd[position + 3][10 * line + 0] = bgColor;
    dmd[position + 4][10 * line + 0] = bgColor;
    dmd[position + 5][10 * line + 0] = bgColor;
    dmd[position + 6][10 * line + 0] = bgColor;
    dmd[position + 7][10 * line + 0] = bgColor;

    dmd[position + 0][10 * line + 1] = bgColor;
    dmd[position + 1][10 * line + 1] = bgColor;
    dmd[position + 2][10 * line + 1] = bgColor;
    dmd[position + 3][10 * line + 1] = bgColor;
    dmd[position + 4][10 * line + 1] = bgColor;
    dmd[position + 5][10 * line + 1] = bgColor;
    dmd[position + 6][10 * line + 1] = bgColor;
    dmd[position + 7][10 * line + 1] = bgColor;

    dmd[position + 0][10 * line + 2] = bgColor;
    dmd[position + 1][10 * line + 2] = bgColor;
    dmd[position + 2][10 * line + 2] = bgColor;
    dmd[position + 3][10 * line + 2] = bgColor;
    dmd[position + 4][10 * line + 2] = bgColor;
    dmd[position + 5][10 * line + 2] = bgColor;
    dmd[position + 6][10 * line + 2] = bgColor;
    dmd[position + 7][10 * line + 2] = bgColor;

    dmd[position + 0][10 * line + 3] = bgColor;
    dmd[position + 1][10 * line + 3] = bgColor;
    dmd[position + 2][10 * line + 3] = bgColor;
    dmd[position + 3][10 * line + 3] = bgColor;
    dmd[position + 4][10 * line + 3] = bgColor;
    dmd[position + 5][10 * line + 3] = bgColor;
    dmd[position + 6][10 * line + 3] = bgColor;
    dmd[position + 7][10 * line + 3] = bgColor;

    dmd[position + 0][10 * line + 4] = bgColor;
    dmd[position + 1][10 * line + 4] = bgColor;
    dmd[position + 2][10 * line + 4] = bgColor;
    dmd[position + 3][10 * line + 4] = bgColor;
    dmd[position + 4][10 * line + 4] = bgColor;
    dmd[position + 5][10 * line + 4] = bgColor;
    dmd[position + 6][10 * line + 4] = bgColor;
    dmd[position + 7][10 * line + 4] = bgColor;

    dmd[position + 0][10 * line + 5] = bgColor;
    dmd[position + 1][10 * line + 5] = bgColor;
    dmd[position + 2][10 * line + 5] = bgColor;
    dmd[position + 3][10 * line + 5] = bgColor;
    dmd[position + 4][10 * line + 5] = bgColor;
    dmd[position + 5][10 * line + 5] = bgColor;
    dmd[position + 6][10 * line + 5] = bgColor;
    dmd[position + 7][10 * line + 5] = bgColor;

    dmd[position + 0][10 * line + 6] = bgColor;
    dmd[position + 1][10 * line + 6] = bgColor;
    dmd[position + 2][10 * line + 6] = bgColor;
    dmd[position + 3][10 * line + 6] = bgColor;
    dmd[position + 4][10 * line + 6] = bgColor;
    dmd[position + 5][10 * line + 6] = bgColor;
    dmd[position + 6][10 * line + 6] = bgColor;
    dmd[position + 7][10 * line + 6] = bgColor;

    dmd[position + 0][10 * line + 7] = bgColor;
    dmd[position + 1][10 * line + 7] = bgColor;
    dmd[position + 2][10 * line + 7] = bgColor;
    dmd[position + 3][10 * line + 7] = bgColor;
    dmd[position + 4][10 * line + 7] = bgColor;
    dmd[position + 5][10 * line + 7] = bgColor;
    dmd[position + 6][10 * line + 7] = bgColor;
    dmd[position + 7][10 * line + 7] = bgColor;

    dmd[position + 0][10 * line + 8] = bgColor;
    dmd[position + 1][10 * line + 8] = bgColor;
    dmd[position + 2][10 * line + 8] = bgColor;
    dmd[position + 3][10 * line + 8] = bgColor;
    dmd[position + 4][10 * line + 8] = bgColor;
    dmd[position + 5][10 * line + 8] = bgColor;
    dmd[position + 6][10 * line + 8] = bgColor;
    dmd[position + 7][10 * line + 8] = bgColor;

    dmd[position + 0][10 * line + 9] = bgColor;
    dmd[position + 1][10 * line + 9] = bgColor;
    dmd[position + 2][10 * line + 9] = bgColor;
    dmd[position + 3][10 * line + 9] = bgColor;
    dmd[position + 4][10 * line + 9] = bgColor;
    dmd[position + 5][10 * line + 9] = bgColor;
    dmd[position + 6][10 * line + 9] = bgColor;
    dmd[position + 7][10 * line + 9] = bgColor;

    return 8;
  }
}

void printAtLine(char *str, uint8_t line, rgb_t color, rgb_t bgColor)
{
  uint16_t position = 0;
  while (*str != 0)
  {
    position += printCharAt(*str, position, line, color, bgColor);
    str++;
  }
}

uint16_t printAtLineAndPosition(char *str, uint8_t line, uint16_t xPosition, rgb_t color, rgb_t bgColor)
{
  uint16_t position = xPosition;
  while (*str != 0)
  {
    position += printCharAt(*str, position, line, color, bgColor);
    str++;
  }

  return position;
}

void frameLine(uint8_t line, uint16_t length, rgb_t bgColor)
{
  line *= 12;
  for (uint16_t i = 0; i < DMD_WIDTH && i < length; i++)
  {
    dmd[i][line] = bgColor;
  }
  if (length < DMD_WIDTH)
  {
    for (uint8_t i = line; i < DMD_HEIGHT && i < line + 12; i++)
    {
      dmd[length][i] = bgColor;
    }
  }
}

void fillLineWithColor(uint8_t line, rgb_t bgColor)
{
  for (uint8_t j = line * 12; j < (line + 1) * 12; j++)
  {
    for (uint16_t i = 0; i < DMD_WIDTH; i++)
    {
      dmd[i][j] = bgColor;
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
