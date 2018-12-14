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

uint8_t printCharAt(char chr, uint16_t position, uint8_t line, rgb_t color, rgb_t bgColor)
{
  switch (chr)
  {
  case '0':
    printf("printg 0 dmd = %ld, %02x%02x%02x, %02x%02x%02x\n", (long)dmd, dmd[0][0].red, dmd[0][0].green, dmd[0][0].blue, color.red, color.green, color.blue);
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
  default:
    printf("Never here!!");
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

//void printAtLine(char *str, uint8_t line, uint8_t red, uint8_t green, uint8_t blue, uint8_t bgRed, uint8_t bgGreen, uint8_t bgBlue)
void printAtLine(char *str, uint8_t line, rgb_t color, rgb_t bgColor)
{
  printf("her %s\n", str);
  uint16_t position = 0;
  while (*str != 0)
  {
    printf("her %c %d, %02x%02x%02x, %02x%02x%02x\n", *str, position, color.red, color.green, color.blue, bgColor.red, bgColor.green, bgColor.blue);
    position += printCharAt(*str, position, line, color, bgColor);
    str++;
  }
}

void showDmd()
{
  printf("Start show dmd\n");

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
  printf("The framebuffer device was opened successfully.\n");

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

  printf("1) %dx%d, %dbpp\n", vinfo.xres, vinfo.yres, vinfo.bits_per_pixel);
  // 1) 800 : 480, 32 bpp
  printf("2) %dx%d, %dbpp\n", vinfo.xres_virtual, vinfo.yres_virtual, vinfo.bits_per_pixel);

  printf("%dx%d, line length %d\n", vinfo.xoffset, vinfo.yoffset, finfo.line_length);
  // Figure out the size of the screen in bytes
  screensize = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8;

  printf("screensize %ld\n", screensize);

  // Map the device to memory
  fbp = (char *)mmap(0, screensize, PROT_READ | PROT_WRITE, MAP_SHARED, fbfd, 0);
  if ((long)fbp == -1)
  {
    perror("Error: failed to map framebuffer device to memory");
    exit(4);
  }
  printf("The framebuffer device was mapped to memory successfully.\n");

  // Figure out where in memory to put the pixel
  for (int y = 0; y < 1; y++)
  {
    //printf("Start show dmd y %d\n", y);
    for (int x = 0; x < 2; x++)
    {
      //printf("Start show dmd x %d\n", x);
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 1 + vinfo.yoffset) * finfo.line_length;
      //printf("Start show dmd %ld\n", (long)dmd);
      printf("Start show dmd value %02x%02x%02x\n", dmd[x][y].red, dmd[x][y].green, dmd[x][y].blue);
      printf("Start show dmd location %ld\n", (long)location);
      //printf("Start show dmd fbp %ld\n", (long)fbp);
      //printf("Start show dmd fbp + location %ld\n", (long)(fbp + location));
      setScreenBufferColor(fbp + location, dmd[x][y]);
      //printf("Crash \n");
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 1 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 1 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);

      location = (8 * x + 1 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 2 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 2 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 2 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 2 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 5 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 2 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);

      location = (8 * x + 0 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 1 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 5 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 6 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);

      location = (8 * x + 0 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 1 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 5 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 6 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);

      location = (8 * x + 0 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 1 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 5 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 6 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);

      location = (8 * x + 1 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 6 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 6 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 6 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 6 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 5 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 6 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);

      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 7 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 7 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 7 + vinfo.yoffset) * finfo.line_length;
      setScreenBufferColor(fbp + location, dmd[x][y]);
    }
  }
  int rc = munmap(fbp, screensize);
}

void testDisplay()
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
  printf("The framebuffer device was opened successfully.\n");

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

  printf("1) %dx%d, %dbpp\n", vinfo.xres, vinfo.yres, vinfo.bits_per_pixel);
  // 1) 800 : 480, 32 bpp
  printf("2) %dx%d, %dbpp\n", vinfo.xres_virtual, vinfo.yres_virtual, vinfo.bits_per_pixel);

  printf("%dx%d, line length %d\n", vinfo.xoffset, vinfo.yoffset, finfo.line_length);
  // Figure out the size of the screen in bytes
  screensize = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8;

  printf("screensize %ld\n", screensize);

  // Map the device to memory
  fbp = (char *)mmap(0, screensize, PROT_READ | PROT_WRITE, MAP_SHARED, fbfd, 0);
  if ((long)fbp == -1)
  {
    perror("Error: failed to map framebuffer device to memory");
    exit(4);
  }
  printf("The framebuffer device was mapped to memory successfully.\n");

  x = 100;
  y = 100; // Where we are going to put the pixel

  // Figure out where in memory to put the pixel
  for (y = 0; y < 50; y++)
  {
    for (x = 0; x < 90; x++)
    {

      location = (x + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (y + vinfo.yoffset) * finfo.line_length;

      if (vinfo.bits_per_pixel == 32)
      {
        printf("init values %ld %ld\n", location, (long)fbp);
        //printf("%ld %d\n", location + 1, *(fbp + location + 1));
        *(fbp + location) = 255;   // Some blue
        *(fbp + location + 1) = 0; // + (x - 100) / 2;  // A little green
        *(fbp + location + 2) = 0; //  - (y - 100) / 5; // A lot of red
        *(fbp + location + 3) = 0; // No transparency
        //location += 4;
      }
      else
      { //assume 16bpp
        int b = 10;
        int g = (x - 100) / 6;                         // A little green
        int r = 31 - (y - 100) / vinfo.bits_per_pixel; // A lot of red
        unsigned short int t = r << 11 | g << 5 | b;
        *((unsigned short int *)(fbp + location)) = t;
      }
    }
  }
  int rc = munmap(fbp, screensize);
  // what does this do, and is it needed in showDmd() ?
  //  close(fbfd);
}

void showDmdTest()
{
  //clearScreen();
  printf("+");
  for (int x = 0; x < DMD_WIDTH; x++)
  {
    printf("-");
  }
  printf("+\n");
  for (int y = 0; y < DMD_HEIGHT; y++)
  {
    printf("|");
    for (int x = 0; x < DMD_WIDTH; x++)
    {
      if (dmd[x][y].red || dmd[x][y].green || dmd[x][y].blue)
      {
        printf("X");
      }
      else
      {
        printf(" ");
      }
    }
    printf("|\n");
  }
  printf("+");
  for (int x = 0; x < DMD_WIDTH; x++)
  {
    printf("-");
  }
  printf("+\n");
}