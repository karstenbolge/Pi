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

uint32_t dmd[80][60];
int fbfd;
char *fbp;
long int location;
struct fb_var_screeninfo vinfo;
struct fb_fix_screeninfo finfo;
long int screensize = 0;

uint8_t printCharAt(char chr, uint8_t position, uint8_t line, uint32_t color, uint32_t bgColor)
{
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
  default:
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

void printAtLine(char *str, uint8_t line, uint32_t color, uint32_t bgColor)
{
  printf("her \n");
  int position = 0;
  while (*str != 0)
  {
    position = +printCharAt(*str, position, line, color, bgColor);
    str++;
  }
}

void showDmd()
{
  // Figure out where in memory to put the pixel
  for (int y = 0; y < 60; y++)
  {
    for (int x = 0; x < 80; x++)
    {
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 1 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 1 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 1 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency

      location = (8 * x + 1 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 2 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 2 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 2 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 2 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 5 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 2 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency

      location = (8 * x + 0 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 1 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 5 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 6 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 3 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency

      location = (8 * x + 0 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 1 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 5 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 6 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 4 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency

      location = (8 * x + 0 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 1 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 5 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 6 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 5 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency

      location = (8 * x + 1 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 6 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 6 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 6 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 6 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 5 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 6 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency

      location = (8 * x + 2 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 7 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 3 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 7 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
      location = (8 * x + 4 + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (8 * y + 7 + vinfo.yoffset) * finfo.line_length;
      *(fbp + location) = dmd[x][y]; // blue, green, red, transparency
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
    for (x = 10; x < 90; x++)
    {

      location = (x + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) + (y + vinfo.yoffset) * finfo.line_length;

      if (vinfo.bits_per_pixel == 32)
      {
        //printf("%ld %d\n", location, *(fbp + location));
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
  //  close(fbfd);
}