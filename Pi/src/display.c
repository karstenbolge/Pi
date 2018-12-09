#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
void clearScreen()
{
  system("@cls||clear");
}

void testDisplay()
{
  int fbfd = 0;
  struct fb_var_screeninfo vinfo;
  struct fb_fix_screeninfo finfo;
  long int screensize = 0;
  char *fbp = 0;
  int x = 0, y = 0;
  long int location = 0;

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

  /*for (int i = 0; i < vinfo.xres; i++)
  {
    for (int j = 0; j < vinfo.xres; j++)
    {
      location = (i + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) +
                 (j + vinfo.yoffset) * finfo.line_length;
      if (*(fbp + location))
      {
        i = vinfo.xres;
      }
    }
  }*/

  x = 100;
  y = 100; // Where we are going to put the pixel

  // Figure out where in memory to put the pixel
  for (y = 0; y < 50; y++)
  {
    for (x = 10; x < 90; x++)
    {

      location = (x + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) +
                 (y + vinfo.yoffset) * finfo.line_length;

      if (vinfo.bits_per_pixel == 32)
      {
        //printf("%ld %d\n", location, *(fbp + location));
        //printf("%ld %d\n", location + 1, *(fbp + location + 1));
        *(fbp + location) = 255;     // Some blue
        *(fbp + location + 1) = 0;  // + (x - 100) / 2;  // A little green
        *(fbp + location + 2) = 0; //  - (y - 100) / 5; // A lot of red
        *(fbp + location + 3) = 0;   // No transparency
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
  close(fbfd);
}